// Type: CustomLogic.CustomLogicEffectNameEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicEffectNameEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicEffectNameEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicEffectNameEnum_o* CustomLogic_CustomLogicEffectNameEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a5e5a0

CustomLogic_CustomLogicEffectNameEnum_o *
CustomLogic_CustomLogicEffectNameEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546354 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEffectNameEnum);
    Il2CppMethodInitialized_07546354 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicEffectNameEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum);
  if (Il2CppMethodInitialized_07546332 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546332 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicEffectNameEnum_o *)__this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicEffectNameEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a5e6c0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicEffectNameEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicEffectNameEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546355 == '\0') {
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
    Il2CppMethodInitialized_07546355 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x60a7e7f0) {
    if (uVar2 < 0x1ddfac48) {
      if (uVar2 < 0x18dfa469) {
        if (uVar2 < 0x9b9ed3e) {
          if (uVar2 == 0x6b9e884) {
            bVar1 = System_String__op_Equality(name,"TitanDie1",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie1
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x9b9ed3d) {
            bVar1 = System_String__op_Equality(name,"TitanDie2",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie2
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x12df9af6) {
          bVar1 = System_String__op_Equality(name,"Boom8",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom8
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x18dfa468) {
          bVar1 = System_String__op_Equality(name,"Boom2",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom2
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x1bdfa922) {
        if (uVar2 == 0x19dfa5fb) {
          bVar1 = System_String__op_Equality(name,"Boom3",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom3
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1bdfa921) {
          bVar1 = System_String__op_Equality(name,"Boom1",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom1
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x1cdfaab4) {
        bVar1 = System_String__op_Equality(name,"Boom6",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom6
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x1ddfac47) {
        bVar1 = System_String__op_Equality(name,"Boom7",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom7
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x397d6640) {
      if (uVar2 < 0x1fdfaf6e) {
        if (uVar2 == 0x1edfadda) {
          bVar1 = System_String__op_Equality(name,"Boom4",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom4
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1fdfaf6d) {
          bVar1 = System_String__op_Equality(name,"Boom5",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom5
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x2679fe4b) {
        bVar1 = System_String__op_Equality(name,"ColossalRockSpawn",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalRockSpawn
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x397d663f) {
        bVar1 = System_String__op_Equality(name,"ColossalKick",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalKick
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x5fa7e65d) {
      if (uVar2 == 0x578d99cd) {
        bVar1 = System_String__op_Equality(name,"CriticalHit",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__CriticalHit
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x5fa7e65c) {
        bVar1 = System_String__op_Equality(name,"Splash2",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash2
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x6083d558) {
      bVar1 = System_String__op_Equality(name,"GasBurst",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GasBurst
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x60a7e7ef) {
      bVar1 = System_String__op_Equality(name,"Splash3",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash3
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x9f073bd5) {
    if (uVar2 < 0x7b585c35) {
      if (uVar2 < 0x62cdd0d7) {
        if (uVar2 == 0x62a7eb15) {
          bVar1 = System_String__op_Equality(name,"Splash1",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash1
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x62cdd0d6) {
          bVar1 = System_String__op_Equality(name,"ShifterThunder",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ShifterThunder
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x76cd9138) {
        bVar1 = System_String__op_Equality(name,"ColossalSpawn",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalSpawn
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x7b585c34) {
        bVar1 = System_String__op_Equality(name,"TitanSpawn",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanSpawn
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x8d3bb75c) {
      if (uVar2 == 0x81cfe633) {
        bVar1 = System_String__op_Equality(name,"TitanBite",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanBite
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x8d3bb75b) {
        bVar1 = System_String__op_Equality(name,"GroundShatter",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GroundShatter
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x99c5e30c) {
      bVar1 = System_String__op_Equality(name,"BladeThrowHit",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__BladeThrowHit
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x9f073bd4) {
      bVar1 = System_String__op_Equality(name,"PunchHit",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__PunchHit
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xcb990167) {
    if (uVar2 < 0xb215e923) {
      if (uVar2 == 0xb115e78f) {
        bVar1 = System_String__op_Equality(name,"Blood2",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood2
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xb215e922) {
        bVar1 = System_String__op_Equality(name,"Blood1",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood1
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xb5730240) {
      bVar1 = System_String__op_Equality(name,"WaterWake",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__WaterWake
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xcb990166) {
      bVar1 = System_String__op_Equality(name,"GunExplode",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GunExplode
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xefe8e987) {
    if (uVar2 == 0xdd85abcf) {
      bVar1 = System_String__op_Equality(name,"ThunderspearExplode",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ThunderspearExplode
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xefe8e986) {
      bVar1 = System_String__op_Equality(name,"Splash",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xf58c6b62) {
    bVar1 = System_String__op_Equality(name,"SingleSplash",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__SingleSplash
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf888646f) {
    bVar1 = System_String__op_Equality(name,"APGTrail",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__APGTrail
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicEffectNameEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ThunderspearExplode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ThunderspearExplode (const MethodInfo* method);
// 0x5a5f2e0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ThunderspearExplode
          (MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546356 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ThunderspearExplode_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546356 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ThunderspearExplode_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__GasBurst
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GasBurst (const MethodInfo* method);
// 0x5a5f380

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GasBurst(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546357 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GasBurst_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546357 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GasBurst_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__GroundShatter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GroundShatter (const MethodInfo* method);
// 0x5a5f420

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GroundShatter(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546358 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GroundShatter_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546358 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GroundShatter_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Blood1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood1 (const MethodInfo* method);
// 0x5a5f4c0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood1(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546359 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Blood1_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546359 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Blood1_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Blood2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood2 (const MethodInfo* method);
// 0x5a5f560

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood2(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754635a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Blood2_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_0754635a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Blood2_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__PunchHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__PunchHit (const MethodInfo* method);
// 0x5a5f600

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__PunchHit(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754635b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__PunchHit_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_0754635b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__PunchHit_g____getter_7_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__GunExplode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GunExplode (const MethodInfo* method);
// 0x5a5f6a0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GunExplode(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754635c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GunExplode_g____getter_8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_0754635c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GunExplode_g____getter_8
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__CriticalHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__CriticalHit (const MethodInfo* method);
// 0x5a5f740

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__CriticalHit(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754635d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__CriticalHit_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_0754635d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__CriticalHit_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanSpawn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanSpawn (const MethodInfo* method);
// 0x5a5f7e0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanSpawn(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754635e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanSpawn_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_0754635e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanSpawn_g____getter_1
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanDie1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie1 (const MethodInfo* method);
// 0x5a5f880

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie1(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754635f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanDie1_g____getter_11
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_0754635f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanDie1_g____getter_11
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanDie2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie2 (const MethodInfo* method);
// 0x5a5f920

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie2(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546360 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanDie2_g____getter_12
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546360 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanDie2_g____getter_12
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom1 (const MethodInfo* method);
// 0x5a5f9c0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom1(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546361 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom1_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546361 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom1_g____getter_13_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom2 (const MethodInfo* method);
// 0x5a5fa60

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom2(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546362 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom2_g____getter_14_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546362 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom2_g____getter_14_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom3 (const MethodInfo* method);
// 0x5a5fb00

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom3(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546363 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom3_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546363 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom3_g____getter_15_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom4 (const MethodInfo* method);
// 0x5a5fba0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom4(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546364 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom4_g____getter_16_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546364 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom4_g____getter_16_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom5 (const MethodInfo* method);
// 0x5a5fc40

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom5(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546365 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom5_g____getter_17_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546365 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom5_g____getter_17_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom6 (const MethodInfo* method);
// 0x5a5fce0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom6(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546366 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom6_g____getter_18_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546366 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom6_g____getter_18_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom7 (const MethodInfo* method);
// 0x5a5fd80

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom7(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546367 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom7_g____getter_19_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546367 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom7_g____getter_19_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom8 (const MethodInfo* method);
// 0x5a5fe20

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom8(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546368 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom8_g____getter_20_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546368 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom8_g____getter_20_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash (const MethodInfo* method);
// 0x5a5fec0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546369 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash_g____getter_21_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546369 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash_g____getter_21_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanBite
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanBite (const MethodInfo* method);
// 0x5a5ff60

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanBite(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754636a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanBite_g____getter_22
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_0754636a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanBite_g____getter_22
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ShifterThunder
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ShifterThunder (const MethodInfo* method);
// 0x5a60000

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ShifterThunder(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754636b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ShifterThunder_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_0754636b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ShifterThunder_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__BladeThrowHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__BladeThrowHit (const MethodInfo* method);
// 0x5a600a0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__BladeThrowHit(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754636c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__BladeThrowHit_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_0754636c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__BladeThrowHit_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__APGTrail
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__APGTrail (const MethodInfo* method);
// 0x5a60140

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__APGTrail(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754636d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__APGTrail_g____getter_25
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_0754636d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__APGTrail_g____getter_25
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__SingleSplash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__SingleSplash (const MethodInfo* method);
// 0x5a601e0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__SingleSplash(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754636e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__SingleSplash_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_0754636e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__SingleSplash_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash1 (const MethodInfo* method);
// 0x5a60280

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash1(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754636f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash1_g____getter_27_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_0754636f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash1_g____getter_27_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash2 (const MethodInfo* method);
// 0x5a60320

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash2(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546370 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash2_g____getter_28_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546370 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash2_g____getter_28_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash3 (const MethodInfo* method);
// 0x5a603c0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash3(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546371 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash3_g____getter_29_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546371 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash3_g____getter_29_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__WaterWake
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__WaterWake (const MethodInfo* method);
// 0x5a60460

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__WaterWake(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546372 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__WaterWake_g____getter_30
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546372 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__WaterWake_g____getter_30
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ColossalSpawn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalSpawn (const MethodInfo* method);
// 0x5a60500

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalSpawn(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546373 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalSpawn_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546373 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalSpawn_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ColossalRockSpawn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalRockSpawn (const MethodInfo* method);
// 0x5a605a0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalRockSpawn(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546374 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalRockSpawn_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546374 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalRockSpawn_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ColossalKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalKick (const MethodInfo* method);
// 0x5a60640

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalKick(MethodInfo *method)

{
  System_Func_CustomLogicEffectNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546375 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalKick_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
    Il2CppMethodInitialized_07546375 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalKick_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicEffectNameEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a606e0

void CustomLogic_CustomLogicEffectNameEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546376 == '\0') {
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
    Il2CppMethodInitialized_07546376 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ThunderspearExplode",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GasBurst",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GroundShatter",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Blood1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Blood2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PunchHit",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GunExplode",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CriticalHit",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TitanSpawn",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TitanDie1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TitanDie2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Boom1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Boom2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Boom3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Boom4",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Boom5",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Boom6",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Boom7",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Boom8",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Splash",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TitanBite",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShifterThunder",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeThrowHit",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"APGTrail",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SingleSplash",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Splash1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Splash2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Splash3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WaterWake",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColossalSpawn",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColossalRockSpawn",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColossalKick",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ThunderspearExplode>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ThunderspearExplode_g____getter_2_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a60bb0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ThunderspearExplode_g____getter_2_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546589 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546589 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->ThunderspearExplode;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__GasBurst>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GasBurst_g____getter_3_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a60c20

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GasBurst_g____getter_3_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754658a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754658a = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->GasBurst;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 8);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__GroundShatter>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GroundShatter_g____getter_4_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a60c90

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GroundShatter_g____getter_4_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754658b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754658b = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->GroundShatter;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x10);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Blood1>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Blood1_g____getter_5_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a60d00

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Blood1_g____getter_5_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754658c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754658c = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x18);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Blood2>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Blood2_g____getter_6_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a60d70

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Blood2_g____getter_6_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754658d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754658d = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Blood2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x20);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__PunchHit>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__PunchHit_g____getter_7_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a60de0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__PunchHit_g____getter_7_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754658e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754658e = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->PunchHit;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x28);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__GunExplode>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GunExplode_g____getter_8_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a60e50

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GunExplode_g____getter_8_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754658f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754658f = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->GunExplode;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x30);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__CriticalHit>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__CriticalHit_g____getter_9_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a60ec0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__CriticalHit_g____getter_9_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546590 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546590 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->CriticalHit;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x38);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanSpawn>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanSpawn_g____getter_10_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a60f30

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanSpawn_g____getter_10_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546591 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546591 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->TitanSpawn;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x40);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanDie1>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanDie1_g____getter_11_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a60fa0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanDie1_g____getter_11_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546592 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546592 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x48);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanDie2>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanDie2_g____getter_12_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a61010

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanDie2_g____getter_12_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546593 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546593 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x50);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom1>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom1_g____getter_13_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a61080

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom1_g____getter_13_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546594 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546594 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x58);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom2>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom2_g____getter_14_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a610f0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom2_g____getter_14_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546595 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546595 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x60);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom3>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom3_g____getter_15_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a61160

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom3_g____getter_15_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546596 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546596 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom3;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x68);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom4>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom4_g____getter_16_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a611d0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom4_g____getter_16_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546597 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546597 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom4;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x70);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom5>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom5_g____getter_17_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a61240

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom5_g____getter_17_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546598 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546598 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom5;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x78);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom6>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom6_g____getter_18_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a612b0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom6_g____getter_18_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546599 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546599 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom6;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x80);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom7>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom7_g____getter_19_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a61320

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom7_g____getter_19_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754659a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754659a = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom7;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x88);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom8>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom8_g____getter_20_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a61390

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom8_g____getter_20_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754659b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754659b = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom8;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x90);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash_g____getter_21_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a61400

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash_g____getter_21_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754659c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754659c = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Splash;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x98);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanBite>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanBite_g____getter_22_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a61470

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanBite_g____getter_22_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754659d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754659d = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->TitanBite;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xa0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ShifterThunder>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ShifterThunder_g____getter_23_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a614e0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ShifterThunder_g____getter_23_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754659e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754659e = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->ShifterThunder;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xa8);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__BladeThrowHit>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__BladeThrowHit_g____getter_24_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a61550

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__BladeThrowHit_g____getter_24_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754659f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754659f = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->BladeThrowHit;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xb0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__APGTrail>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__APGTrail_g____getter_25_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a615c0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__APGTrail_g____getter_25_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_075465a0 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->APGTrail;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xb8);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__SingleSplash>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__SingleSplash_g____getter_26_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a61630

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__SingleSplash_g____getter_26_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_075465a1 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->SingleSplash;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xc0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash1>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash1_g____getter_27_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a616a0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash1_g____getter_27_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_075465a2 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Splash1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 200);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash2>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash2_g____getter_28_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a61710

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash2_g____getter_28_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_075465a3 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Splash2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xd0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash3>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash3_g____getter_29_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a61780

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash3_g____getter_29_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_075465a4 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Splash3;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xd8);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__WaterWake>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__WaterWake_g____getter_30_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a617f0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__WaterWake_g____getter_30_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_075465a5 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->WaterWake;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xe0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ColossalSpawn>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalSpawn_g____getter_31_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a61860

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalSpawn_g____getter_31_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_075465a6 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->ColossalSpawn;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xe8);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ColossalRockSpawn>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalRockSpawn_g____getter_32_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a618d0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalRockSpawn_g____getter_32_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_075465a7 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->ColossalRockSpawn;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xf0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ColossalKick>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalKick_g____getter_33_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x5a61940

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalKick_g____getter_33_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_075465a8 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->ColossalKick;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xf8);
}


// CustomLogic.CustomLogicEffectNameEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicEffectNameEnum___ctor (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x5a5d6d0

void CustomLogic_CustomLogicEffectNameEnum___ctor
               (CustomLogic_CustomLogicEffectNameEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546332 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546332 = '\x01';
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


// CustomLogic.CustomLogicEffectNameEnum$$get_ThunderspearExplode
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ThunderspearExplode (const MethodInfo* method);
// 0x5a5d740

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ThunderspearExplode(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546333 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546333 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->ThunderspearExplode;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_GasBurst
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_GasBurst (const MethodInfo* method);
// 0x5a5d7b0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_GasBurst(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546334 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546334 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->GasBurst;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_GroundShatter
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_GroundShatter (const MethodInfo* method);
// 0x5a5d820

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_GroundShatter(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546335 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546335 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->GroundShatter;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x10);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Blood1
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Blood1 (const MethodInfo* method);
// 0x5a5d890

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Blood1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546336 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546336 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x18);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Blood2
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Blood2 (const MethodInfo* method);
// 0x5a5d900

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Blood2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546337 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546337 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->Blood2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x20);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_PunchHit
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_PunchHit (const MethodInfo* method);
// 0x5a5d970

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_PunchHit(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546338 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546338 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->PunchHit;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x28);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_GunExplode
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_GunExplode (const MethodInfo* method);
// 0x5a5d9e0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_GunExplode(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546339 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546339 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->GunExplode;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x30);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_CriticalHit
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_CriticalHit (const MethodInfo* method);
// 0x5a5da50

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_CriticalHit(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754633a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754633a = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->CriticalHit;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x38);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_TitanSpawn
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_TitanSpawn (const MethodInfo* method);
// 0x5a5dac0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_TitanSpawn(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754633b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754633b = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->TitanSpawn;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x40);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_TitanDie1
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_TitanDie1 (const MethodInfo* method);
// 0x5a5db30

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_TitanDie1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754633c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754633c = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x48);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_TitanDie2
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_TitanDie2 (const MethodInfo* method);
// 0x5a5dba0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_TitanDie2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754633d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754633d = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x50);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom1
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom1 (const MethodInfo* method);
// 0x5a5dc10

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754633e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754633e = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->Boom1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x58);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom2
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom2 (const MethodInfo* method);
// 0x5a5dc80

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754633f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754633f = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->Boom2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x60);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom3
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom3 (const MethodInfo* method);
// 0x5a5dcf0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546340 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546340 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->Boom3;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x68);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom4
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom4 (const MethodInfo* method);
// 0x5a5dd60

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom4(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546341 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546341 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->Boom4;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x70);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom5
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom5 (const MethodInfo* method);
// 0x5a5ddd0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom5(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546342 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546342 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->Boom5;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x78);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom6
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom6 (const MethodInfo* method);
// 0x5a5de40

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom6(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546343 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546343 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->Boom6;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x80);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom7
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom7 (const MethodInfo* method);
// 0x5a5deb0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom7(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546344 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546344 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->Boom7;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x88);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom8
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom8 (const MethodInfo* method);
// 0x5a5df20

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom8(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546345 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546345 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->Boom8;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x90);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Splash
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Splash (const MethodInfo* method);
// 0x5a5df90

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Splash(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546346 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546346 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->Splash;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x98);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_TitanBite
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_TitanBite (const MethodInfo* method);
// 0x5a5e000

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_TitanBite(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546347 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546347 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->TitanBite;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xa0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ShifterThunder
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ShifterThunder (const MethodInfo* method);
// 0x5a5e070

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ShifterThunder(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546348 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546348 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->ShifterThunder;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xa8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_BladeThrowHit
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_BladeThrowHit (const MethodInfo* method);
// 0x5a5e0e0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_BladeThrowHit(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546349 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546349 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->BladeThrowHit;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xb0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_APGTrail
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_APGTrail (const MethodInfo* method);
// 0x5a5e150

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_APGTrail(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754634a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754634a = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->APGTrail;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xb8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_SingleSplash
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_SingleSplash (const MethodInfo* method);
// 0x5a5e1c0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_SingleSplash(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754634b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754634b = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->SingleSplash;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xc0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Splash1
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Splash1 (const MethodInfo* method);
// 0x5a5e230

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Splash1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754634c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754634c = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->Splash1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 200);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Splash2
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Splash2 (const MethodInfo* method);
// 0x5a5e2a0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Splash2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754634d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754634d = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->Splash2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xd0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Splash3
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Splash3 (const MethodInfo* method);
// 0x5a5e310

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Splash3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754634e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754634e = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->Splash3;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xd8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_WaterWake
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_WaterWake (const MethodInfo* method);
// 0x5a5e380

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_WaterWake(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754634f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_0754634f = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->WaterWake;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xe0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ColossalSpawn
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ColossalSpawn (const MethodInfo* method);
// 0x5a5e3f0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ColossalSpawn(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546350 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546350 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->ColossalSpawn;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xe8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ColossalRockSpawn
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ColossalRockSpawn (const MethodInfo* method);
// 0x5a5e460

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ColossalRockSpawn(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546351 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546351 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->ColossalRockSpawn;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xf0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ColossalKick
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ColossalKick (const MethodInfo* method);
// 0x5a5e4d0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ColossalKick(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546352 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546352 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    return TypeInfo_Effects_EffectPrefabs->static_fields->ColossalKick;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0xf8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ClassName (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x5a5e540

System_String_o *
CustomLogic_CustomLogicEffectNameEnum__get_ClassName
          (CustomLogic_CustomLogicEffectNameEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546353 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EffectNameEnum");
    Il2CppMethodInitialized_07546353 = '\x01';
  }
  return "EffectNameEnum";
}


// CustomLogic.CustomLogicEffectNameEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicEffectNameEnum__get_IsAbstract (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x5a5e570

bool CustomLogic_CustomLogicEffectNameEnum__get_IsAbstract
               (CustomLogic_CustomLogicEffectNameEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicEffectNameEnum__get_IsStatic (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x5a5e580

bool CustomLogic_CustomLogicEffectNameEnum__get_IsStatic
               (CustomLogic_CustomLogicEffectNameEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicEffectNameEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicEffectNameEnum__get_InheritBaseMembers (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x5a5e590

bool CustomLogic_CustomLogicEffectNameEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicEffectNameEnum_o *__this,MethodInfo *method)

{
  return true;
}


