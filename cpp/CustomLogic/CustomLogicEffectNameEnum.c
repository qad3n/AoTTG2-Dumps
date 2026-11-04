// Type: CustomLogic.CustomLogicEffectNameEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicEffectNameEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicEffectNameEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicEffectNameEnum_o* CustomLogic_CustomLogicEffectNameEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa4650

CustomLogic_CustomLogicEffectNameEnum_o *
CustomLogic_CustomLogicEffectNameEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434599b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEffectNameEnum);
    Il2CppMethodInitialized_18434599b = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum);
      if (Il2CppMethodInitialized_184345979 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345979 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicEffectNameEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicEffectNameEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicEffectNameEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f834d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicEffectNameEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_18434599c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Boom4");
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalKick");
    il2cpp_codegen_initialize_runtime_metadata(&"GroundShatter");
    il2cpp_codegen_initialize_runtime_metadata(&"APGTrail");
    il2cpp_codegen_initialize_runtime_metadata(&"Splash3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeThrowHit");
    il2cpp_codegen_initialize_runtime_metadata(&"GunExplode");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanDie1");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom5");
    il2cpp_codegen_initialize_runtime_metadata(&"Blood1");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanDie2");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom2");
    il2cpp_codegen_initialize_runtime_metadata(&"Splash1");
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalSpawn");
    il2cpp_codegen_initialize_runtime_metadata(&"PunchHit");
    il2cpp_codegen_initialize_runtime_metadata(&"CriticalHit");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom3");
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalRockSpawn");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom8");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom7");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanBite");
    il2cpp_codegen_initialize_runtime_metadata(&"WaterWake");
    il2cpp_codegen_initialize_runtime_metadata(&"Splash");
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderspearExplode");
    il2cpp_codegen_initialize_runtime_metadata(&"SingleSplash");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom6");
    il2cpp_codegen_initialize_runtime_metadata(&"Splash2");
    il2cpp_codegen_initialize_runtime_metadata(&"Blood2");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom1");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanSpawn");
    il2cpp_codegen_initialize_runtime_metadata(&"GasBurst");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterThunder");
    Il2CppMethodInitialized_18434599c = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x60a7e7f0) {
    if (uVar2 < 0x1ddfac48) {
      if (uVar2 < 0x18dfa469) {
        if (uVar2 < 0x9b9ed3e) {
          if (uVar2 == 0x6b9e884) {
            bVar1 = System_String__op_Equality(name,"TitanDie1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
              }
              if (Il2CppMethodInitialized_1843459a6 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanDie1_g____getter_11
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
                Il2CppMethodInitialized_1843459a6 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanDie1_g____getter_11
              ;
              goto label_181f84968;
            }
          }
          else if (uVar2 == 0x9b9ed3d) {
            bVar1 = System_String__op_Equality(name,"TitanDie2",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
              }
              if (Il2CppMethodInitialized_1843459a7 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanDie2_g____getter_12
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
                Il2CppMethodInitialized_1843459a7 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanDie2_g____getter_12
              ;
              goto label_181f84968;
            }
          }
        }
        else if (uVar2 == 0x12df9af6) {
          bVar1 = System_String__op_Equality(name,"Boom8",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843459af == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom8_g____getter_20_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
              Il2CppMethodInitialized_1843459af = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom8_g____getter_20_0
            ;
            goto label_181f84968;
          }
        }
        else if (uVar2 == 0x18dfa468) {
          bVar1 = System_String__op_Equality(name,"Boom2",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843459a9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom2_g____getter_14_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
              Il2CppMethodInitialized_1843459a9 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom2_g____getter_14_0
            ;
            goto label_181f84968;
          }
        }
      }
      else if (uVar2 < 0x1bdfa922) {
        if (uVar2 == 0x19dfa5fb) {
          bVar1 = System_String__op_Equality(name,"Boom3",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843459aa == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom3_g____getter_15_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
              Il2CppMethodInitialized_1843459aa = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom3_g____getter_15_0
            ;
            goto label_181f84968;
          }
        }
        else if (uVar2 == 0x1bdfa921) {
          bVar1 = System_String__op_Equality(name,"Boom1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843459a8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom1_g____getter_13_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
              Il2CppMethodInitialized_1843459a8 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom1_g____getter_13_0
            ;
            goto label_181f84968;
          }
        }
      }
      else if (uVar2 == 0x1cdfaab4) {
        bVar1 = System_String__op_Equality(name,"Boom6",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843459ad == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom6_g____getter_18_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object)
            ;
            Il2CppMethodInitialized_1843459ad = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom6_g____getter_18_0
          ;
          goto label_181f84968;
        }
      }
      else if (uVar2 == 0x1ddfac47) {
        bVar1 = System_String__op_Equality(name,"Boom7",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843459ae == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom7_g____getter_19_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object)
            ;
            Il2CppMethodInitialized_1843459ae = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom7_g____getter_19_0
          ;
          goto label_181f84968;
        }
      }
      goto label_181f849aa;
    }
    if (uVar2 < 0x397d6640) {
      if (uVar2 < 0x1fdfaf6e) {
        if (uVar2 == 0x1edfadda) {
          bVar1 = System_String__op_Equality(name,"Boom4",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843459ab == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom4_g____getter_16_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
              Il2CppMethodInitialized_1843459ab = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom4_g____getter_16_0
            ;
            goto label_181f84968;
          }
        }
        else if (uVar2 == 0x1fdfaf6d) {
          bVar1 = System_String__op_Equality(name,"Boom5",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843459ac == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom5_g____getter_17_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
              Il2CppMethodInitialized_1843459ac = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom5_g____getter_17_0
            ;
            goto label_181f84968;
          }
        }
      }
      else if (uVar2 == 0x2679fe4b) {
        bVar1 = System_String__op_Equality(name,"ColossalRockSpawn",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843459bb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalRockSpawn_g____g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object)
            ;
            Il2CppMethodInitialized_1843459bb = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalRockSpawn_g____g
          ;
          goto label_181f84968;
        }
      }
      else if (uVar2 == 0x397d663f) {
        bVar1 = System_String__op_Equality(name,"ColossalKick",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843459bc == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalKick_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object)
            ;
            Il2CppMethodInitialized_1843459bc = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalKick_g____getter
          ;
          goto label_181f84968;
        }
      }
    }
    else if (uVar2 < 0x5fa7e65d) {
      if (uVar2 == 0x578d99cd) {
        bVar1 = System_String__op_Equality(name,"CriticalHit",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843459a4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__CriticalHit_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object)
            ;
            Il2CppMethodInitialized_1843459a4 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__CriticalHit_g____getter
          ;
          goto label_181f84968;
        }
      }
      else if (uVar2 == 0x5fa7e65c) {
        bVar1 = System_String__op_Equality(name,"Splash2",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843459b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash2_g____getter_28_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object)
            ;
            Il2CppMethodInitialized_1843459b7 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash2_g____getter_28_0
          ;
          goto label_181f84968;
        }
      }
    }
    else if (uVar2 == 0x6083d558) {
      bVar1 = System_String__op_Equality(name,"GasBurst",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434599e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GasBurst_g____getter_3_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          Il2CppMethodInitialized_18434599e = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GasBurst_g____getter_3_0
        ;
        goto label_181f84968;
      }
    }
    else if (uVar2 == 0x60a7e7ef) {
      bVar1 = System_String__op_Equality(name,"Splash3",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843459b8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash3_g____getter_29_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          Il2CppMethodInitialized_1843459b8 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash3_g____getter_29_0
        ;
        goto label_181f84968;
      }
    }
    goto label_181f849aa;
  }
  if (uVar2 < 0x9f073bd5) {
    if (uVar2 < 0x7b585c35) {
      if (uVar2 < 0x62cdd0d7) {
        if (uVar2 == 0x62a7eb15) {
          bVar1 = System_String__op_Equality(name,"Splash1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843459b6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash1_g____getter_27_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
              Il2CppMethodInitialized_1843459b6 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash1_g____getter_27_0
            ;
            goto label_181f84968;
          }
        }
        else if (uVar2 == 0x62cdd0d6) {
          bVar1 = System_String__op_Equality(name,"ShifterThunder",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843459b2 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ShifterThunder_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
              Il2CppMethodInitialized_1843459b2 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ShifterThunder_g____gett
            ;
            goto label_181f84968;
          }
        }
      }
      else if (uVar2 == 0x76cd9138) {
        bVar1 = System_String__op_Equality(name,"ColossalSpawn",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843459ba == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalSpawn_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object)
            ;
            Il2CppMethodInitialized_1843459ba = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalSpawn_g____gette
          ;
          goto label_181f84968;
        }
      }
      else if (uVar2 == 0x7b585c34) {
        bVar1 = System_String__op_Equality(name,"TitanSpawn",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843459a5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanSpawn_g____getter_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object)
            ;
            Il2CppMethodInitialized_1843459a5 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanSpawn_g____getter_1
          ;
          goto label_181f84968;
        }
      }
    }
    else if (uVar2 < 0x8d3bb75c) {
      if (uVar2 == 0x81cfe633) {
        bVar1 = System_String__op_Equality(name,"TitanBite",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843459b1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanBite_g____getter_22
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object)
            ;
            Il2CppMethodInitialized_1843459b1 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanBite_g____getter_22
          ;
          goto label_181f84968;
        }
      }
      else if (uVar2 == 0x8d3bb75b) {
        bVar1 = System_String__op_Equality(name,"GroundShatter",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434599f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GroundShatter_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object)
            ;
            Il2CppMethodInitialized_18434599f = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GroundShatter_g____gette
          ;
          goto label_181f84968;
        }
      }
    }
    else if (uVar2 == 0x99c5e30c) {
      bVar1 = System_String__op_Equality(name,"BladeThrowHit",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843459b3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__BladeThrowHit_g____gette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          Il2CppMethodInitialized_1843459b3 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__BladeThrowHit_g____gette
        ;
        goto label_181f84968;
      }
    }
    else if (uVar2 == 0x9f073bd4) {
      bVar1 = System_String__op_Equality(name,"PunchHit",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843459a2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__PunchHit_g____getter_7_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          Il2CppMethodInitialized_1843459a2 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__PunchHit_g____getter_7_0
        ;
        goto label_181f84968;
      }
    }
    goto label_181f849aa;
  }
  if (uVar2 < 0xcb990167) {
    if (uVar2 < 0xb215e923) {
      if (uVar2 == 0xb115e78f) {
        bVar1 = System_String__op_Equality(name,"Blood2",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843459a1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Blood2_g____getter_6_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object)
            ;
            Il2CppMethodInitialized_1843459a1 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Blood2_g____getter_6_0
          ;
          goto label_181f84968;
        }
      }
      else if (uVar2 == 0xb215e922) {
        bVar1 = System_String__op_Equality(name,"Blood1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843459a0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Blood1_g____getter_5_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object)
            ;
            Il2CppMethodInitialized_1843459a0 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Blood1_g____getter_5_0
          ;
          goto label_181f84968;
        }
      }
    }
    else if (uVar2 == 0xb5730240) {
      bVar1 = System_String__op_Equality(name,"WaterWake",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843459b9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__WaterWake_g____getter_30
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          Il2CppMethodInitialized_1843459b9 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__WaterWake_g____getter_30
        ;
        goto label_181f84968;
      }
    }
    else if (uVar2 == 0xcb990166) {
      bVar1 = System_String__op_Equality(name,"GunExplode",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843459a3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GunExplode_g____getter_8
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          Il2CppMethodInitialized_1843459a3 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GunExplode_g____getter_8
        ;
        goto label_181f84968;
      }
    }
  }
  else if (uVar2 < 0xefe8e987) {
    if (uVar2 == 0xdd85abcf) {
      bVar1 = System_String__op_Equality(name,"ThunderspearExplode",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434599d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ThunderspearExplode_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          Il2CppMethodInitialized_18434599d = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ThunderspearExplode_g
        ;
        goto label_181f84968;
      }
    }
    else if (uVar2 == 0xefe8e986) {
      bVar1 = System_String__op_Equality(name,"Splash",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843459b0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash_g____getter_21_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
          Il2CppMethodInitialized_1843459b0 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash_g____getter_21_0
        ;
        goto label_181f84968;
      }
    }
  }
  else if (uVar2 == 0xf58c6b62) {
    bVar1 = System_String__op_Equality(name,"SingleSplash",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
      }
      if (Il2CppMethodInitialized_1843459b5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__SingleSplash_g____getter
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
        Il2CppMethodInitialized_1843459b5 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object)
      ;
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__SingleSplash_g____getter
      ;
label_181f84968:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor
                );
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar2 == 0xf888646f) {
    bVar1 = System_String__op_Equality(name,"APGTrail",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
      }
      if (Il2CppMethodInitialized_1843459b4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__APGTrail_g____getter_25
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
        Il2CppMethodInitialized_1843459b4 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object)
      ;
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__APGTrail_g____getter_25
      ;
      goto label_181f84968;
    }
  }
label_181f849aa:
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicEffectNameEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ThunderspearExplode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ThunderspearExplode (const MethodInfo* method);
// 0x181f9ba30

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ThunderspearExplode
          (MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434599d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ThunderspearExplode_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_18434599d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ThunderspearExplode_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__GasBurst
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GasBurst (const MethodInfo* method);
// 0x181f97570

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GasBurst(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434599e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GasBurst_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_18434599e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GasBurst_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__GroundShatter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GroundShatter (const MethodInfo* method);
// 0x181f976b0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GroundShatter(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434599f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GroundShatter_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_18434599f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GroundShatter_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Blood1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood1 (const MethodInfo* method);
// 0x181f95220

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood1(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Blood1_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459a0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Blood1_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Blood2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood2 (const MethodInfo* method);
// 0x181f952c0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood2(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Blood2_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Blood2_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__PunchHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__PunchHit (const MethodInfo* method);
// 0x181f99910

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__PunchHit(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__PunchHit_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459a2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__PunchHit_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__GunExplode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GunExplode (const MethodInfo* method);
// 0x181f97750

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GunExplode(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GunExplode_g____getter_8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459a3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GunExplode_g____getter_8
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__CriticalHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__CriticalHit (const MethodInfo* method);
// 0x181f96350

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__CriticalHit(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__CriticalHit_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459a4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__CriticalHit_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanSpawn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanSpawn (const MethodInfo* method);
// 0x181f9bcb0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanSpawn(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanSpawn_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459a5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanSpawn_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanDie1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie1 (const MethodInfo* method);
// 0x181f9bb70

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie1(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanDie1_g____getter_11
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459a6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanDie1_g____getter_11
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanDie2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie2 (const MethodInfo* method);
// 0x181f9bc10

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie2(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanDie2_g____getter_12
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459a7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanDie2_g____getter_12
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom1 (const MethodInfo* method);
// 0x181f954a0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom1(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom1_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459a8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom1_g____getter_13_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom2 (const MethodInfo* method);
// 0x181f95540

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom2(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom2_g____getter_14_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459a9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom2_g____getter_14_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom3 (const MethodInfo* method);
// 0x181f955e0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom3(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom3_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459aa = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom3_g____getter_15_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom4 (const MethodInfo* method);
// 0x181f95680

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom4(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom4_g____getter_16_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459ab = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom4_g____getter_16_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom5 (const MethodInfo* method);
// 0x181f95720

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom5(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom5_g____getter_17_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459ac = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom5_g____getter_17_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom6 (const MethodInfo* method);
// 0x181f957c0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom6(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom6_g____getter_18_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459ad = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom6_g____getter_18_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom7 (const MethodInfo* method);
// 0x181f95860

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom7(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom7_g____getter_19_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459ae = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom7_g____getter_19_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom8 (const MethodInfo* method);
// 0x181f95900

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom8(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom8_g____getter_20_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459af = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom8_g____getter_20_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash (const MethodInfo* method);
// 0x181f9b300

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash_g____getter_21_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459b0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash_g____getter_21_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanBite
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanBite (const MethodInfo* method);
// 0x181f9bad0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanBite(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanBite_g____getter_22
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459b1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanBite_g____getter_22
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ShifterThunder
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ShifterThunder (const MethodInfo* method);
// 0x181f9ac70

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ShifterThunder(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ShifterThunder_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459b2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ShifterThunder_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__BladeThrowHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__BladeThrowHit (const MethodInfo* method);
// 0x181f950e0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__BladeThrowHit(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__BladeThrowHit_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459b3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__BladeThrowHit_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__APGTrail
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__APGTrail (const MethodInfo* method);
// 0x181f93ba0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__APGTrail(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__APGTrail_g____getter_25
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459b4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__APGTrail_g____getter_25
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__SingleSplash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__SingleSplash (const MethodInfo* method);
// 0x181f9adb0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__SingleSplash(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__SingleSplash_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459b5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__SingleSplash_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash1 (const MethodInfo* method);
// 0x181f9b120

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash1(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash1_g____getter_27_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459b6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash1_g____getter_27_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash2 (const MethodInfo* method);
// 0x181f9b1c0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash2(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash2_g____getter_28_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459b7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash2_g____getter_28_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash3 (const MethodInfo* method);
// 0x181f9b260

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash3(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash3_g____getter_29_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459b8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash3_g____getter_29_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__WaterWake
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__WaterWake (const MethodInfo* method);
// 0x181f9c840

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__WaterWake(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__WaterWake_g____getter_30
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459b9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__WaterWake_g____getter_30
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ColossalSpawn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalSpawn (const MethodInfo* method);
// 0x181f95f90

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalSpawn(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalSpawn_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459ba = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalSpawn_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ColossalRockSpawn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalRockSpawn (const MethodInfo* method);
// 0x181f95ef0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalRockSpawn(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalRockSpawn_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459bb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalRockSpawn_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ColossalKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalKick (const MethodInfo* method);
// 0x181f95e50

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalKick(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalKick_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_1843459bc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalKick_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicEffectNameEnum_Bindings___cctor (const MethodInfo* method);
// 0x181f9e780

void CustomLogic_CustomLogicEffectNameEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843459bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Boom4");
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalKick");
    il2cpp_codegen_initialize_runtime_metadata(&"GroundShatter");
    il2cpp_codegen_initialize_runtime_metadata(&"APGTrail");
    il2cpp_codegen_initialize_runtime_metadata(&"Splash3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeThrowHit");
    il2cpp_codegen_initialize_runtime_metadata(&"GunExplode");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanDie1");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom5");
    il2cpp_codegen_initialize_runtime_metadata(&"Blood1");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanDie2");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom2");
    il2cpp_codegen_initialize_runtime_metadata(&"Splash1");
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalSpawn");
    il2cpp_codegen_initialize_runtime_metadata(&"PunchHit");
    il2cpp_codegen_initialize_runtime_metadata(&"CriticalHit");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom3");
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalRockSpawn");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom8");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom7");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanBite");
    il2cpp_codegen_initialize_runtime_metadata(&"WaterWake");
    il2cpp_codegen_initialize_runtime_metadata(&"Splash");
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderspearExplode");
    il2cpp_codegen_initialize_runtime_metadata(&"SingleSplash");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom6");
    il2cpp_codegen_initialize_runtime_metadata(&"Splash2");
    il2cpp_codegen_initialize_runtime_metadata(&"Blood2");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom1");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanSpawn");
    il2cpp_codegen_initialize_runtime_metadata(&"GasBurst");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterThunder");
    Il2CppMethodInitialized_1843459bd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ThunderspearExplode",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GasBurst",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GroundShatter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Blood1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Blood2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PunchHit",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GunExplode",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CriticalHit",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TitanSpawn",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TitanDie1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TitanDie2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Boom1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Boom2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Boom3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Boom4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Boom5",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Boom6",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Boom7",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Boom8",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Splash",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TitanBite",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShifterThunder",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeThrowHit",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"APGTrail",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SingleSplash",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Splash1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Splash2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Splash3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WaterWake",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColossalSpawn",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColossalRockSpawn",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColossalKick",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ThunderspearExplode>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ThunderspearExplode_g____getter_2_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f912b0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ThunderspearExplode_g____getter_2_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a1f = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->ThunderspearExplode;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__GasBurst>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GasBurst_g____getter_3_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8e540

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GasBurst_g____getter_3_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a20 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->GasBurst;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__GroundShatter>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GroundShatter_g____getter_4_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8e590

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GroundShatter_g____getter_4_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a21 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->GroundShatter;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Blood1>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Blood1_g____getter_5_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8d530

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Blood1_g____getter_5_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a22 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Blood2>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Blood2_g____getter_6_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8d580

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Blood2_g____getter_6_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a23 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Blood2;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__PunchHit>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__PunchHit_g____getter_7_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8fcd0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__PunchHit_g____getter_7_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a24 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->PunchHit;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__GunExplode>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GunExplode_g____getter_8_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8e5e0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GunExplode_g____getter_8_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a25 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->GunExplode;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__CriticalHit>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__CriticalHit_g____getter_9_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8dd80

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__CriticalHit_g____getter_9_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a26 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->CriticalHit;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanSpawn>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanSpawn_g____getter_10_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f91400

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanSpawn_g____getter_10_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a27 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->TitanSpawn;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanDie1>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanDie1_g____getter_11_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f91360

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanDie1_g____getter_11_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a28 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie1;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanDie2>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanDie2_g____getter_12_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f913b0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanDie2_g____getter_12_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a29 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie2;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom1>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom1_g____getter_13_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8d600

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom1_g____getter_13_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a2a = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom1;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom2>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom2_g____getter_14_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8d650

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom2_g____getter_14_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a2b = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom2;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom3>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom3_g____getter_15_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8d6a0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom3_g____getter_15_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a2c = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom3;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom4>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom4_g____getter_16_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8d6f0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom4_g____getter_16_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a2d = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom4;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom5>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom5_g____getter_17_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8d740

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom5_g____getter_17_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a2e = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom5;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom6>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom6_g____getter_18_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8d790

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom6_g____getter_18_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a2f = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom6;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom7>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom7_g____getter_19_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8d7f0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom7_g____getter_19_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a30 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom7;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom8>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom8_g____getter_20_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8d850

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom8_g____getter_20_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a31 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom8;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash_g____getter_21_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f90de0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash_g____getter_21_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a32 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Splash;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanBite>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanBite_g____getter_22_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f91300

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanBite_g____getter_22_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a33 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->TitanBite;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ShifterThunder>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ShifterThunder_g____getter_23_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f90a60

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ShifterThunder_g____getter_23_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a34 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->ShifterThunder;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__BladeThrowHit>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__BladeThrowHit_g____getter_24_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8d4d0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__BladeThrowHit_g____getter_24_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a35 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->BladeThrowHit;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__APGTrail>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__APGTrail_g____getter_25_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8ccc0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__APGTrail_g____getter_25_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a36 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->APGTrail;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__SingleSplash>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__SingleSplash_g____getter_26_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f90b10

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__SingleSplash_g____getter_26_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a37 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->SingleSplash;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash1>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash1_g____getter_27_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f90cc0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash1_g____getter_27_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a38 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Splash1;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash2>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash2_g____getter_28_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f90d20

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash2_g____getter_28_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a39 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Splash2;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash3>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash3_g____getter_29_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f90d80

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash3_g____getter_29_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a3a = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Splash3;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__WaterWake>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__WaterWake_g____getter_30_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f91b70

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__WaterWake_g____getter_30_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a3b = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->WaterWake;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ColossalSpawn>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalSpawn_g____getter_31_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8dd20

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalSpawn_g____getter_31_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a3c = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->ColossalSpawn;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ColossalRockSpawn>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalRockSpawn_g____getter_32_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8dcc0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalRockSpawn_g____getter_32_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a3d = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->ColossalRockSpawn;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ColossalKick>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalKick_g____getter_33_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x181f8dc60

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalKick_g____getter_33_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345a3e = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->ColossalKick;
}


// CustomLogic.CustomLogicEffectNameEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicEffectNameEnum___ctor (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x181fa0250

void CustomLogic_CustomLogicEffectNameEnum___ctor
               (CustomLogic_CustomLogicEffectNameEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345979 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345979 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ThunderspearExplode
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ThunderspearExplode (const MethodInfo* method);
// 0x181fa0bd0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ThunderspearExplode(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434597a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_18434597a = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->ThunderspearExplode;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_GasBurst
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_GasBurst (const MethodInfo* method);
// 0x181fa0850

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_GasBurst(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434597b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_18434597b = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->GasBurst;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_GroundShatter
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_GroundShatter (const MethodInfo* method);
// 0x181fa08a0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_GroundShatter(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434597c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_18434597c = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->GroundShatter;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Blood1
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Blood1 (const MethodInfo* method);
// 0x181fa0360

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Blood1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434597d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_18434597d = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Blood2
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Blood2 (const MethodInfo* method);
// 0x181fa03b0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Blood2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434597e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_18434597e = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->Blood2;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_PunchHit
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_PunchHit (const MethodInfo* method);
// 0x181fa0940

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_PunchHit(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434597f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_18434597f = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->PunchHit;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_GunExplode
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_GunExplode (const MethodInfo* method);
// 0x181fa08f0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_GunExplode(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345980 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345980 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->GunExplode;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_CriticalHit
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_CriticalHit (const MethodInfo* method);
// 0x181fa0800

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_CriticalHit(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345981 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345981 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->CriticalHit;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_TitanSpawn
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_TitanSpawn (const MethodInfo* method);
// 0x181fa0d20

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_TitanSpawn(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345982 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345982 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->TitanSpawn;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_TitanDie1
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_TitanDie1 (const MethodInfo* method);
// 0x181fa0c80

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_TitanDie1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345983 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345983 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie1;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_TitanDie2
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_TitanDie2 (const MethodInfo* method);
// 0x181fa0cd0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_TitanDie2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345984 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345984 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie2;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom1
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom1 (const MethodInfo* method);
// 0x181fa0400

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345985 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345985 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->Boom1;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom2
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom2 (const MethodInfo* method);
// 0x181fa0450

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345986 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345986 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->Boom2;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom3
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom3 (const MethodInfo* method);
// 0x181fa04a0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345987 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345987 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->Boom3;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom4
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom4 (const MethodInfo* method);
// 0x181fa04f0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345988 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345988 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->Boom4;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom5
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom5 (const MethodInfo* method);
// 0x181fa0540

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom5(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345989 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345989 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->Boom5;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom6
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom6 (const MethodInfo* method);
// 0x181fa0590

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom6(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434598a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_18434598a = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->Boom6;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom7
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom7 (const MethodInfo* method);
// 0x181fa05f0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom7(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434598b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_18434598b = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->Boom7;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom8
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom8 (const MethodInfo* method);
// 0x181fa0650

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom8(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434598c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_18434598c = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->Boom8;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Splash
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Splash (const MethodInfo* method);
// 0x181fa0b70

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Splash(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434598d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_18434598d = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->Splash;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_TitanBite
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_TitanBite (const MethodInfo* method);
// 0x181fa0c20

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_TitanBite(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434598e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_18434598e = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->TitanBite;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ShifterThunder
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ShifterThunder (const MethodInfo* method);
// 0x181fa0990

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ShifterThunder(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434598f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_18434598f = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->ShifterThunder;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_BladeThrowHit
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_BladeThrowHit (const MethodInfo* method);
// 0x181fa0300

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_BladeThrowHit(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345990 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345990 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->BladeThrowHit;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_APGTrail
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_APGTrail (const MethodInfo* method);
// 0x181fa02a0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_APGTrail(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345991 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345991 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->APGTrail;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_SingleSplash
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_SingleSplash (const MethodInfo* method);
// 0x181fa09f0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_SingleSplash(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345992 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345992 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->SingleSplash;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Splash1
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Splash1 (const MethodInfo* method);
// 0x181fa0a50

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Splash1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345993 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345993 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->Splash1;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Splash2
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Splash2 (const MethodInfo* method);
// 0x181fa0ab0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Splash2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345994 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345994 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->Splash2;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Splash3
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Splash3 (const MethodInfo* method);
// 0x181fa0b10

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Splash3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345995 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345995 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->Splash3;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_WaterWake
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_WaterWake (const MethodInfo* method);
// 0x181fa0d70

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_WaterWake(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345996 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345996 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->WaterWake;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ColossalSpawn
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ColossalSpawn (const MethodInfo* method);
// 0x181fa07a0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ColossalSpawn(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345997 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345997 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->ColossalSpawn;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ColossalRockSpawn
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ColossalRockSpawn (const MethodInfo* method);
// 0x181fa0740

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ColossalRockSpawn(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345998 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345998 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->ColossalRockSpawn;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ColossalKick
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ColossalKick (const MethodInfo* method);
// 0x181fa06e0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ColossalKick(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345999 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_184345999 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  return TypeInfo_Effects_EffectPrefabs->static_fields->ColossalKick;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ClassName (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x181fa06b0

System_String_o *
CustomLogic_CustomLogicEffectNameEnum__get_ClassName
          (CustomLogic_CustomLogicEffectNameEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434599a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EffectNameEnum");
    Il2CppMethodInitialized_18434599a = '\x01';
  }
  return "EffectNameEnum";
}


// CustomLogic.CustomLogicEffectNameEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicEffectNameEnum__get_IsAbstract (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicEffectNameEnum__get_IsAbstract(CustomLogic_CustomLogicEffectNameEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicEffectNameEnum__get_IsStatic (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicEffectNameEnum__get_IsStatic(CustomLogic_CustomLogicEffectNameEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicEffectNameEnum__get_InheritBaseMembers (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicEffectNameEnum__get_InheritBaseMembers(CustomLogic_CustomLogicEffectNameEnum_o* __this, MethodInfo* method)

{
  return true;
}


