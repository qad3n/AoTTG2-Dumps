// Type: CustomLogic.CustomLogicHumanSoundEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHumanSoundEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHumanSoundEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanSoundEnum_o* CustomLogic_CustomLogicHumanSoundEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fce5f0

CustomLogic_CustomLogicHumanSoundEnum_o *
CustomLogic_CustomLogicHumanSoundEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345b54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanSoundEnum);
    Il2CppMethodInitialized_184345b54 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum);
      if (Il2CppMethodInitialized_184345b03 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345b03 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicHumanSoundEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHumanSoundEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanSoundEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181faa8e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184345b55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Death4");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShotDouble2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape2Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"TimerTick");
    il2cpp_codegen_initialize_runtime_metadata(&"TSLaunch2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape1Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape1Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"TimerGo");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape3Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape4Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderspearLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"GasEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"NoGas");
    il2cpp_codegen_initialize_runtime_metadata(&"NapeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep1");
    il2cpp_codegen_initialize_runtime_metadata(&"GunExplode");
    il2cpp_codegen_initialize_runtime_metadata(&"GasStart");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape3Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"HookImpact");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot1");
    il2cpp_codegen_initialize_runtime_metadata(&"Death3");
    il2cpp_codegen_initialize_runtime_metadata(&"Death1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeBreak");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape1Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"LimbHit");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape2Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"Death5");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRetractRight");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing1");
    il2cpp_codegen_initialize_runtime_metadata(&"OldBladeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot2");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape1Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShotDouble1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing4");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape1Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"CrashLand");
    il2cpp_codegen_initialize_runtime_metadata(&"HookImpactLoud");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot4");
    il2cpp_codegen_initialize_runtime_metadata(&"Dodge");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRetractLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"GunExplodeLoud");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape3Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOut");
    il2cpp_codegen_initialize_runtime_metadata(&"Refill");
    il2cpp_codegen_initialize_runtime_metadata(&"Slide");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape2Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape2Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape3Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"HookLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"GasLoop");
    il2cpp_codegen_initialize_runtime_metadata(&"FlareLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape2Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep2");
    il2cpp_codegen_initialize_runtime_metadata(&"Switchback");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot4");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeReloadGround");
    il2cpp_codegen_initialize_runtime_metadata(&"Death2");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape4Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape4Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot2");
    il2cpp_codegen_initialize_runtime_metadata(&"GunReload");
    il2cpp_codegen_initialize_runtime_metadata(&"Checkpoint");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeReloadAir");
    il2cpp_codegen_initialize_runtime_metadata(&"OldNapeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot3");
    il2cpp_codegen_initialize_runtime_metadata(&"WaterSplash");
    il2cpp_codegen_initialize_runtime_metadata(&"OldBladeSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape3Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"GasBurst");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelIn");
    il2cpp_codegen_initialize_runtime_metadata(&"OldHookLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"TSLaunch1");
    Il2CppMethodInitialized_184345b55 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x6c198db2) {
    if (uVar2 < 0x3c39fb91) {
      if (uVar2 < 0x1bab3e7b) {
        if (uVar2 < 0x16ab369c) {
          if (uVar2 < 0xe1ef32e) {
            if (uVar2 == 0x6d9263a) {
              bVar1 = System_String__op_Equality(name,"GasStart",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
                }
                if (Il2CppMethodInitialized_184345b6e == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasStart_g____getter_26
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
                  Il2CppMethodInitialized_184345b6e = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasStart_g____getter_26
                ;
                goto label_181fadb2a;
              }
            }
            else if (uVar2 == 0xe1ef32d) {
              bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
                }
                if (Il2CppMethodInitialized_184345b74 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Jump_g____getter_32_0
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
                  Il2CppMethodInitialized_184345b74 = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Jump_g____getter_32_0
                ;
                goto label_181fadb2a;
              }
            }
          }
          else if (uVar2 == 0x15ab3508) {
            bVar1 = System_String__op_Equality(name,"Death5",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345b7f == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death5_g____getter_43_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
                Il2CppMethodInitialized_184345b7f = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death5_g____getter_43_0
              ;
              goto label_181fadb2a;
            }
          }
          else if (uVar2 == 0x16ab369b) {
            bVar1 = System_String__op_Equality(name,"Death4",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345b7e == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death4_g____getter_42_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
                Il2CppMethodInitialized_184345b7e = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death4_g____getter_42_0
              ;
              goto label_181fadb2a;
            }
          }
        }
        else if (uVar2 < 0x19ab3b55) {
          if (uVar2 == 0x16ed547a) {
            bVar1 = System_String__op_Equality(name,"ReelIn",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345b71 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ReelIn_g____getter_29_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
                Il2CppMethodInitialized_184345b71 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ReelIn_g____getter_29_0
              ;
              goto label_181fadb2a;
            }
          }
          else if (uVar2 == 0x19ab3b54) {
            bVar1 = System_String__op_Equality(name,"Death1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345b7b == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death1_g____getter_39_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
                Il2CppMethodInitialized_184345b7b = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death1_g____getter_39_0
              ;
              goto label_181fadb2a;
            }
          }
        }
        else if (uVar2 == 0x19de4ccf) {
          bVar1 = System_String__op_Equality(name,"GasEnd",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b70 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasEnd_g____getter_28_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b70 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasEnd_g____getter_28_0
            ;
            goto label_181fadb2a;
          }
        }
        else if (uVar2 == 0x1a4a6571) {
          bVar1 = System_String__op_Equality(name,"OldNapeHit",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b5b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldNapeHit_g____getter_7
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b5b = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldNapeHit_g____getter_7
            ;
            goto label_181fadb2a;
          }
        }
        else if (uVar2 == 0x1bab3e7a) {
          bVar1 = System_String__op_Equality(name,"Death3",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b7d == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death3_g____getter_41_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b7d = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death3_g____getter_41_0
            ;
            goto label_181fadb2a;
          }
        }
        goto label_181fadb6c;
      }
      if (uVar2 < 0x2ce556a4) {
        if (uVar2 < 0x1cab400e) {
          if (uVar2 == 0x1be90ac3) {
            bVar1 = System_String__op_Equality(name,"Footstep2",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345b7a == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Footstep2_g____getter_38
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
                Il2CppMethodInitialized_184345b7a = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Footstep2_g____getter_38
              ;
              goto label_181fadb2a;
            }
          }
          else if (uVar2 == 0x1cab400d) {
            bVar1 = System_String__op_Equality(name,"Death2",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345b7c == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death2_g____getter_40_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
                Il2CppMethodInitialized_184345b7c = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death2_g____getter_40_0
              ;
              goto label_181fadb2a;
            }
          }
        }
        else if (uVar2 == 0x1ce90c56) {
          bVar1 = System_String__op_Equality(name,"Footstep1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b79 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Footstep1_g____getter_37
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b79 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Footstep1_g____getter_37
            ;
            goto label_181fadb2a;
          }
        }
        else if (uVar2 == 0x24424353) {
          bVar1 = System_String__op_Equality(name,"BladeReloadGround",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b5d == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeReloadGround_g____g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b5d = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeReloadGround_g____g
            ;
            goto label_181fadb2a;
          }
        }
        else if (uVar2 == 0x2ce556a3) {
          bVar1 = System_String__op_Equality(name,"TSLaunch2",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ba4 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TSLaunch2_g____getter_80
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345ba4 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TSLaunch2_g____getter_80
            ;
            goto label_181fadb2a;
          }
        }
      }
      else if (uVar2 < 0x31598f8f) {
        if (uVar2 == 0x2de55836) {
          bVar1 = System_String__op_Equality(name,"TSLaunch1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ba3 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TSLaunch1_g____getter_79
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345ba3 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TSLaunch1_g____getter_79
            ;
            goto label_181fadb2a;
          }
        }
        else if (uVar2 == 0x31598f8e) {
          bVar1 = System_String__op_Equality(name,"LimbHit",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b5a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__LimbHit_g____getter_6_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b5a = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__LimbHit_g____getter_6_0
            ;
            goto label_181fadb2a;
          }
        }
      }
      else if (uVar2 == 0x322726f4) {
        bVar1 = System_String__op_Equality(name,"BladeBreak",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b56 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeBreak_g____getter_2
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b56 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeBreak_g____getter_2
          ;
          goto label_181fadb2a;
        }
      }
      else if (uVar2 == 0x39c5bbac) {
        bVar1 = System_String__op_Equality(name,"GunReload",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b5e == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunReload_g____getter_10
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b5e = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunReload_g____getter_10
          ;
          goto label_181fadb2a;
        }
      }
      else if (uVar2 == 0x3c39fb90) {
        bVar1 = System_String__op_Equality(name,"TimerGo",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b82 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TimerGo_g____getter_46_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b82 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TimerGo_g____getter_46_0
          ;
          goto label_181fadb2a;
        }
      }
      goto label_181fadb6c;
    }
    if (uVar2 < 0x548b671f) {
      if (uVar2 < 0x474347a4) {
        if (uVar2 < 0x41f90b8f) {
          if (uVar2 == 0x40f909fb) {
            bVar1 = System_String__op_Equality(name,"AHSSGunShot1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345b97 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot1_g____getter
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
                Il2CppMethodInitialized_184345b97 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot1_g____getter
              ;
              goto label_181fadb2a;
            }
          }
          else if (uVar2 == 0x41f90b8e) {
            bVar1 = System_String__op_Equality(name,"AHSSGunShot2",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345b98 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot2_g____getter
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
                Il2CppMethodInitialized_184345b98 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot2_g____getter
              ;
              goto label_181fadb2a;
            }
          }
        }
        else if (uVar2 == 0x42f90d21) {
          bVar1 = System_String__op_Equality(name,"AHSSGunShot3",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b99 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot3_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b99 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot3_g____getter
            ;
            goto label_181fadb2a;
          }
        }
        else if (uVar2 == 0x43f90eb4) {
          bVar1 = System_String__op_Equality(name,"AHSSGunShot4",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b9a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot4_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b9a = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot4_g____getter
            ;
            goto label_181fadb2a;
          }
        }
        else if (uVar2 == 0x474347a3) {
          bVar1 = System_String__op_Equality(name,"BladeNape2Var1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b8e == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var1_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b8e = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var1_g____gett
            ;
            goto label_181fadb2a;
          }
        }
      }
      else if (uVar2 < 0x49434aca) {
        if (uVar2 == 0x48434936) {
          bVar1 = System_String__op_Equality(name,"BladeNape2Var2",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b8f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var2_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b8f = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var2_g____gett
            ;
            goto label_181fadb2a;
          }
        }
        else if (uVar2 == 0x49434ac9) {
          bVar1 = System_String__op_Equality(name,"BladeNape2Var3",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b90 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var3_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b90 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var3_g____gett
            ;
            goto label_181fadb2a;
          }
        }
      }
      else if (uVar2 == 0x4bbbd0ac) {
        bVar1 = System_String__op_Equality(name,"AHSSGunShotDouble1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b9b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShotDouble1_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b9b = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShotDouble1_g
          ;
          goto label_181fadb2a;
        }
      }
      else if (uVar2 == 0x4ebbd565) {
        bVar1 = System_String__op_Equality(name,"AHSSGunShotDouble2",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b9c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShotDouble2_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b9c = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShotDouble2_g
          ;
          goto label_181fadb2a;
        }
      }
      else if (uVar2 == 0x548b671e) {
        bVar1 = System_String__op_Equality(name,"Switchback",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b86 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Switchback_g____getter_5
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b86 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Switchback_g____getter_5
          ;
          goto label_181fadb2a;
        }
      }
      goto label_181fadb6c;
    }
    if (uVar2 < 0x5c39b690) {
      if (uVar2 < 0x5722e904) {
        if (uVar2 == 0x55c3fbee) {
          bVar1 = System_String__op_Equality(name,"HookRetractLeft",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b6a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookRetractLeft_g____get
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b6a = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookRetractLeft_g____get
            ;
            goto label_181fadb2a;
          }
        }
        else if (uVar2 == 0x5722e903) {
          bVar1 = System_String__op_Equality(name,"AHSSNape2Var2",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ba0 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape2Var2_g____gette
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345ba0 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape2Var2_g____gette
            ;
            goto label_181fadb2a;
          }
        }
      }
      else if (uVar2 == 0x5822ea96) {
        bVar1 = System_String__op_Equality(name,"AHSSNape2Var1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b9f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape2Var1_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b9f = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape2Var1_g____gette
          ;
          goto label_181fadb2a;
        }
      }
      else if (uVar2 == 0x5b39b4fc) {
        bVar1 = System_String__op_Equality(name,"BladeNape4Var2",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b95 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var2_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b95 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var2_g____gett
          ;
          goto label_181fadb2a;
        }
      }
      else if (uVar2 == 0x5c39b68f) {
        bVar1 = System_String__op_Equality(name,"BladeNape4Var3",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b96 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var3_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b96 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var3_g____gett
          ;
          goto label_181fadb2a;
        }
      }
    }
    else if (uVar2 < 0x6082b447) {
      if (uVar2 == 0x5e39b9b5) {
        bVar1 = System_String__op_Equality(name,"BladeNape4Var1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b94 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var1_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b94 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var1_g____gett
          ;
          goto label_181fadb2a;
        }
      }
      else if (uVar2 == 0x6082b446) {
        bVar1 = System_String__op_Equality(name,"BladeHit",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b57 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeHit_g____getter_3_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b57 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeHit_g____getter_3_0
          ;
          goto label_181fadb2a;
        }
      }
    }
    else if (uVar2 == 0x6083d558) {
      bVar1 = System_String__op_Equality(name,"GasBurst",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345b67 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasBurst_g____getter_19
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          Il2CppMethodInitialized_184345b67 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasBurst_g____getter_19
        ;
        goto label_181fadb2a;
      }
    }
    else if (uVar2 == 0x66052020) {
      bVar1 = System_String__op_Equality(name,"NapeHit",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345b59 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__NapeHit_g____getter_5_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          Il2CppMethodInitialized_184345b59 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__NapeHit_g____getter_5_0
        ;
        goto label_181fadb2a;
      }
    }
    else if (uVar2 == 0x6c198db1) {
      bVar1 = System_String__op_Equality(name,"Refill",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345b77 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Refill_g____getter_35_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          Il2CppMethodInitialized_184345b77 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Refill_g____getter_35_0
        ;
        goto label_181fadb2a;
      }
    }
    goto label_181fadb6c;
  }
  if (uVar2 < 0xacf875a8) {
    if (uVar2 < 0x99b7f233) {
      if (uVar2 < 0x799ccc7e) {
        if (uVar2 < 0x703d20cd) {
          if (uVar2 == 0x6d3d1c13) {
            bVar1 = System_String__op_Equality(name,"BladeSwing4",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345b62 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing4_g____getter
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
                Il2CppMethodInitialized_184345b62 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing4_g____getter
              ;
              goto label_181fadb2a;
            }
          }
          else if (uVar2 == 0x703d20cc) {
            bVar1 = System_String__op_Equality(name,"BladeSwing1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345b5f == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing1_g____getter
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
                Il2CppMethodInitialized_184345b5f = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing1_g____getter
              ;
              goto label_181fadb2a;
            }
          }
        }
        else if (uVar2 == 0x723d23f2) {
          bVar1 = System_String__op_Equality(name,"BladeSwing3",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b61 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing3_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b61 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing3_g____getter
            ;
            goto label_181fadb2a;
          }
        }
        else if (uVar2 == 0x733d2585) {
          bVar1 = System_String__op_Equality(name,"BladeSwing2",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b60 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing2_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b60 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing2_g____getter
            ;
            goto label_181fadb2a;
          }
        }
        else if (uVar2 == 0x799ccc7d) {
          bVar1 = System_String__op_Equality(name,"ThunderspearLaunch",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b66 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ThunderspearLaunch_g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b66 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ThunderspearLaunch_g
            ;
            goto label_181fadb2a;
          }
        }
      }
      else if (uVar2 < 0x8eeafb7e) {
        if (uVar2 == 0x8cd14bad) {
          bVar1 = System_String__op_Equality(name,"HookLaunch",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b68 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookLaunch_g____getter_2
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b68 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookLaunch_g____getter_2
            ;
            goto label_181fadb2a;
          }
        }
        else if (uVar2 == 0x8eeafb7d) {
          bVar1 = System_String__op_Equality(name,"CrashLand",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b73 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__CrashLand_g____getter_31
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b73 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__CrashLand_g____getter_31
            ;
            goto label_181fadb2a;
          }
        }
      }
      else if (uVar2 == 0x936083cb) {
        bVar1 = System_String__op_Equality(name,"AHSSNape1Var1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b9d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape1Var1_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b9d = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape1Var1_g____gette
          ;
          goto label_181fadb2a;
        }
      }
      else if (uVar2 == 0x9460855e) {
        bVar1 = System_String__op_Equality(name,"AHSSNape1Var2",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b9e == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape1Var2_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b9e = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape1Var2_g____gette
          ;
          goto label_181fadb2a;
        }
      }
      else if (uVar2 == 0x99b7f232) {
        bVar1 = System_String__op_Equality(name,"GunExplodeLoud",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b84 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunExplodeLoud_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b84 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunExplodeLoud_g____gett
          ;
          goto label_181fadb2a;
        }
      }
      goto label_181fadb6c;
    }
    if (uVar2 < 0x9d1b4b32) {
      if (uVar2 < 0x9aadede9) {
        if (uVar2 == 0x9a1b4678) {
          bVar1 = System_String__op_Equality(name,"BladeNape3Var1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b91 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var1_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b91 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var1_g____gett
            ;
            goto label_181fadb2a;
          }
        }
        else if (uVar2 == 0x9aadede8) {
          bVar1 = System_String__op_Equality(name,"APGShot1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b87 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot1_g____getter_51
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b87 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot1_g____getter_51
            ;
            goto label_181fadb2a;
          }
        }
      }
      else if (uVar2 == 0x9c1b499e) {
        bVar1 = System_String__op_Equality(name,"BladeNape3Var3",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b93 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var3_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b93 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var3_g____gett
          ;
          goto label_181fadb2a;
        }
      }
      else if (uVar2 == 0x9cadf10e) {
        bVar1 = System_String__op_Equality(name,"APGShot3",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b89 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot3_g____getter_53
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b89 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot3_g____getter_53
          ;
          goto label_181fadb2a;
        }
      }
      else if (uVar2 == 0x9d1b4b31) {
        bVar1 = System_String__op_Equality(name,"BladeNape3Var2",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b92 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var2_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b92 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var2_g____gett
          ;
          goto label_181fadb2a;
        }
      }
    }
    else if (uVar2 < 0x9f3e662d) {
      if (uVar2 == 0x9dadf2a1) {
        bVar1 = System_String__op_Equality(name,"APGShot2",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b88 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot2_g____getter_52
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b88 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot2_g____getter_52
          ;
          goto label_181fadb2a;
        }
      }
      else if (uVar2 == 0x9f3e662c) {
        bVar1 = System_String__op_Equality(name,"BladeReloadAir",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeReloadAir_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b5c = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeReloadAir_g____gett
          ;
          goto label_181fadb2a;
        }
      }
    }
    else if (uVar2 == 0x9fadf5c7) {
      bVar1 = System_String__op_Equality(name,"APGShot4",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345b8a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot4_g____getter_54
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          Il2CppMethodInitialized_184345b8a = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot4_g____getter_54
        ;
        goto label_181fadb2a;
      }
    }
    else if (uVar2 == 0xa114d213) {
      bVar1 = System_String__op_Equality(name,"ReelOut",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345b72 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ReelOut_g____getter_30_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          Il2CppMethodInitialized_184345b72 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ReelOut_g____getter_30_0
        ;
        goto label_181fadb2a;
      }
    }
    else if (uVar2 == 0xacf875a7) {
      bVar1 = System_String__op_Equality(name,"TimerTick",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345b81 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TimerTick_g____getter_45
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          Il2CppMethodInitialized_184345b81 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TimerTick_g____getter_45
        ;
        goto label_181fadb2a;
      }
    }
    goto label_181fadb6c;
  }
  if (uVar2 < 0xe2620ba0) {
    if (uVar2 < 0xcd507f81) {
      if (uVar2 < 0xbd9f8bfb) {
        if (uVar2 == 0xbb51b893) {
          bVar1 = System_String__op_Equality(name,"NoGas",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b76 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__NoGas_g____getter_34_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b76 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__NoGas_g____getter_34_0
            ;
            goto label_181fadb2a;
          }
        }
        else if (uVar2 == 0xbd9f8bfa) {
          bVar1 = System_String__op_Equality(name,"OldHookLaunch",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345b69 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldHookLaunch_g____gette
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
              Il2CppMethodInitialized_184345b69 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldHookLaunch_g____gette
            ;
            goto label_181fadb2a;
          }
        }
      }
      else if (uVar2 == 0xc30f2900) {
        bVar1 = System_String__op_Equality(name,"GasLoop",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b6f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasLoop_g____getter_27_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b6f = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasLoop_g____getter_27_0
          ;
          goto label_181fadb2a;
        }
      }
      else if (uVar2 == 0xcb990166) {
        bVar1 = System_String__op_Equality(name,"GunExplode",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b83 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunExplode_g____getter_4
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b83 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunExplode_g____getter_4
          ;
          goto label_181fadb2a;
        }
      }
      else if (uVar2 == 0xcd507f80) {
        bVar1 = System_String__op_Equality(name,"AHSSNape3Var2",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ba2 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape3Var2_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345ba2 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape3Var2_g____gette
          ;
          goto label_181fadb2a;
        }
      }
    }
    else if (uVar2 < 0xd9202fa7) {
      if (uVar2 == 0xd0508439) {
        bVar1 = System_String__op_Equality(name,"AHSSNape3Var1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ba1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape3Var1_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345ba1 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape3Var1_g____gette
          ;
          goto label_181fadb2a;
        }
      }
      else if (uVar2 == 0xd9202fa6) {
        bVar1 = System_String__op_Equality(name,"OldBladeSwing",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b63 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldBladeSwing_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b63 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldBladeSwing_g____gette
          ;
          goto label_181fadb2a;
        }
      }
    }
    else if (uVar2 == 0xdb968bd5) {
      bVar1 = System_String__op_Equality(name,"OldBladeHit",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345b58 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldBladeHit_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          Il2CppMethodInitialized_184345b58 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldBladeHit_g____getter
        ;
        goto label_181fadb2a;
      }
    }
    else if (uVar2 == 0xdbdf1f18) {
      bVar1 = System_String__op_Equality(name,"HookImpactLoud",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345b6d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookImpactLoud_g____gett
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          Il2CppMethodInitialized_184345b6d = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookImpactLoud_g____gett
        ;
        goto label_181fadb2a;
      }
    }
    else if (uVar2 == 0xe2620b9f) {
      bVar1 = System_String__op_Equality(name,"Checkpoint",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345b80 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Checkpoint_g____getter_4
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          Il2CppMethodInitialized_184345b80 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Checkpoint_g____getter_4
        ;
        goto label_181fadb2a;
      }
    }
    goto label_181fadb6c;
  }
  if (uVar2 < 0xf5697c89) {
    if (uVar2 < 0xee1682bd) {
      if (uVar2 == 0xea62a4c3) {
        bVar1 = System_String__op_Equality(name,"HookRetractRight",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b6b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookRetractRight_g____ge
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b6b = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookRetractRight_g____ge
          ;
          goto label_181fadb2a;
        }
      }
      else if (uVar2 == 0xee1682bc) {
        bVar1 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345b75 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Land_g____getter_33_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184345b75 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Land_g____getter_33_0
          ;
          goto label_181fadb2a;
        }
      }
    }
    else if (uVar2 == 0xf3dfd300) {
      bVar1 = System_String__op_Equality(name,"HookImpact",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345b6c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookImpact_g____getter_2
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          Il2CppMethodInitialized_184345b6c = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookImpact_g____getter_2
        ;
        goto label_181fadb2a;
      }
    }
    else if (uVar2 == 0xf526d670) {
      bVar1 = System_String__op_Equality(name,"Dodge",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345b64 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_16_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          Il2CppMethodInitialized_184345b64 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_16_0
        ;
        goto label_181fadb2a;
      }
    }
    else if (uVar2 == 0xf5697c88) {
      bVar1 = System_String__op_Equality(name,"FlareLaunch",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345b65 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__FlareLaunch_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          Il2CppMethodInitialized_184345b65 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__FlareLaunch_g____getter
        ;
        goto label_181fadb2a;
      }
    }
  }
  else if (uVar2 < 0xfbb7b789) {
    if (uVar2 == 0xf7aaccdf) {
      bVar1 = System_String__op_Equality(name,"WaterSplash",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345b85 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__WaterSplash_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          Il2CppMethodInitialized_184345b85 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__WaterSplash_g____getter
        ;
        goto label_181fadb2a;
      }
    }
    else if (uVar2 == 0xfbb7b788) {
      bVar1 = System_String__op_Equality(name,"BladeNape1Var3",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345b8d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var3_g____gett
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
          Il2CppMethodInitialized_184345b8d = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var3_g____gett
        ;
        goto label_181fadb2a;
      }
    }
  }
  else if (uVar2 == 0xfcb7b91b) {
    bVar1 = System_String__op_Equality(name,"BladeNape1Var2",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345b8c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var2_g____gett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
        Il2CppMethodInitialized_184345b8c = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
      ;
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var2_g____gett
      ;
label_181fadb2a:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor
                );
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar2 == 0xfdb7baae) {
    bVar1 = System_String__op_Equality(name,"BladeNape1Var1",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345b8b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var1_g____gett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
        Il2CppMethodInitialized_184345b8b = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
      ;
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var1_g____gett
      ;
      goto label_181fadb2a;
    }
  }
  else if (uVar2 == 0xffc7c086) {
    bVar1 = System_String__op_Equality(name,"Slide",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345b78 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Slide_g____getter_36_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
        Il2CppMethodInitialized_184345b78 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object)
      ;
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Slide_g____getter_36_0
      ;
      goto label_181fadb2a;
    }
  }
label_181fadb6c:
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHumanSoundEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeBreak
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeBreak (const MethodInfo* method);
// 0x181fbb650

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeBreak(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeBreak_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b56 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeBreak_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeHit (const MethodInfo* method);
// 0x181fbb6f0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeHit(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeHit_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b57 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeHit_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldBladeHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeHit (const MethodInfo* method);
// 0x181fc05b0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeHit(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldBladeHit_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b58 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldBladeHit_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__NapeHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NapeHit (const MethodInfo* method);
// 0x181fc03d0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NapeHit(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__NapeHit_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b59 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__NapeHit_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__LimbHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__LimbHit (const MethodInfo* method);
// 0x181fc0150

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__LimbHit(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__LimbHit_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b5a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__LimbHit_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldNapeHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldNapeHit (const MethodInfo* method);
// 0x181fc0790

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldNapeHit(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldNapeHit_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b5b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldNapeHit_g____getter_7
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeReloadAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadAir (const MethodInfo* method);
// 0x181fbbf10

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadAir(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeReloadAir_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b5c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeReloadAir_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeReloadGround
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadGround (const MethodInfo* method);
// 0x181fbbfb0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadGround(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeReloadGround_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b5d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeReloadGround_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GunReload
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunReload (const MethodInfo* method);
// 0x181fbe210

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunReload(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunReload_g____getter_10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b5e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunReload_g____getter_10
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing1 (const MethodInfo* method);
// 0x181fbc050

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing1_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b5f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing1_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing2 (const MethodInfo* method);
// 0x181fbc0f0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing2_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b60 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing2_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing3 (const MethodInfo* method);
// 0x181fbc190

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing3(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing3_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b61 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing3_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing4 (const MethodInfo* method);
// 0x181fbc230

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing4(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing4_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b62 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing4_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldBladeSwing
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeSwing (const MethodInfo* method);
// 0x181fc0650

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeSwing(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldBladeSwing_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b63 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldBladeSwing_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Dodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Dodge (const MethodInfo* method);
// 0x181fbcff0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Dodge(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_16_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b64 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_16_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__FlareLaunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__FlareLaunch (const MethodInfo* method);
// 0x181fbd6d0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__FlareLaunch(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__FlareLaunch_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b65 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__FlareLaunch_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__ThunderspearLaunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ThunderspearLaunch (const MethodInfo* method);
// 0x181fc2c70

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ThunderspearLaunch
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ThunderspearLaunch_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b66 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ThunderspearLaunch_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasBurst
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasBurst (const MethodInfo* method);
// 0x181fbdbd0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasBurst(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasBurst_g____getter_19
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b67 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasBurst_g____getter_19
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookLaunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookLaunch (const MethodInfo* method);
// 0x181fbe850

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookLaunch(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookLaunch_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b68 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookLaunch_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldHookLaunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldHookLaunch (const MethodInfo* method);
// 0x181fc06f0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldHookLaunch(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldHookLaunch_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b69 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldHookLaunch_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookRetractLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractLeft (const MethodInfo* method);
// 0x181fbe990

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractLeft(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookRetractLeft_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b6a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookRetractLeft_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookRetractRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractRight (const MethodInfo* method);
// 0x181fbea30

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractRight(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookRetractRight_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b6b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookRetractRight_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookImpact
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpact (const MethodInfo* method);
// 0x181fbe7b0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpact(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookImpact_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b6c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookImpact_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookImpactLoud
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpactLoud (const MethodInfo* method);
// 0x181fbe710

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpactLoud(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookImpactLoud_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b6d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookImpactLoud_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasStart
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasStart (const MethodInfo* method);
// 0x181fbddb0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasStart(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasStart_g____getter_26
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b6e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasStart_g____getter_26
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasLoop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasLoop (const MethodInfo* method);
// 0x181fbdd10

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasLoop(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasLoop_g____getter_27_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b6f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasLoop_g____getter_27_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasEnd
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasEnd (const MethodInfo* method);
// 0x181fbdc70

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasEnd(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasEnd_g____getter_28_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b70 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasEnd_g____getter_28_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__ReelIn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelIn (const MethodInfo* method);
// 0x181fc1190

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelIn(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ReelIn_g____getter_29_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b71 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ReelIn_g____getter_29_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__ReelOut
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelOut (const MethodInfo* method);
// 0x181fc12d0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelOut(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ReelOut_g____getter_30_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b72 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ReelOut_g____getter_30_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__CrashLand
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__CrashLand (const MethodInfo* method);
// 0x181fbc7d0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__CrashLand(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__CrashLand_g____getter_31
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b73 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__CrashLand_g____getter_31
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x181fbfbb0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Jump_g____getter_32_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b74 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Jump_g____getter_32_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x181fc0010

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Land_g____getter_33_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b75 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Land_g____getter_33_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__NoGas
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NoGas (const MethodInfo* method);
// 0x181fc0510

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NoGas(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__NoGas_g____getter_34_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b76 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__NoGas_g____getter_34_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Refill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Refill (const MethodInfo* method);
// 0x181fc1370

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Refill(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Refill_g____getter_35_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b77 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Refill_g____getter_35_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Slide
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Slide (const MethodInfo* method);
// 0x181fc1e10

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Slide(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Slide_g____getter_36_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b78 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Slide_g____getter_36_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep1 (const MethodInfo* method);
// 0x181fbd770

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Footstep1_g____getter_37
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b79 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Footstep1_g____getter_37
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep2 (const MethodInfo* method);
// 0x181fbd810

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Footstep2_g____getter_38
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b7a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Footstep2_g____getter_38
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death1 (const MethodInfo* method);
// 0x181fbcaf0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death1_g____getter_39_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b7b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death1_g____getter_39_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death2 (const MethodInfo* method);
// 0x181fbcb90

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death2_g____getter_40_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b7c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death2_g____getter_40_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death3 (const MethodInfo* method);
// 0x181fbcc30

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death3(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death3_g____getter_41_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b7d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death3_g____getter_41_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death4 (const MethodInfo* method);
// 0x181fbccd0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death4(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death4_g____getter_42_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b7e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death4_g____getter_42_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death5 (const MethodInfo* method);
// 0x181fbcd70

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death5(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death5_g____getter_43_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b7f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death5_g____getter_43_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Checkpoint
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Checkpoint (const MethodInfo* method);
// 0x181fbc730

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Checkpoint(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Checkpoint_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b80 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Checkpoint_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__TimerTick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TimerTick (const MethodInfo* method);
// 0x181fc2db0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TimerTick(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TimerTick_g____getter_45
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b81 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TimerTick_g____getter_45
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__TimerGo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TimerGo (const MethodInfo* method);
// 0x181fc2d10

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TimerGo(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TimerGo_g____getter_46_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b82 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TimerGo_g____getter_46_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GunExplode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplode (const MethodInfo* method);
// 0x181fbe170

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplode(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunExplode_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b83 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunExplode_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GunExplodeLoud
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplodeLoud (const MethodInfo* method);
// 0x181fbe0d0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplodeLoud(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunExplodeLoud_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b84 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunExplodeLoud_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__WaterSplash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__WaterSplash (const MethodInfo* method);
// 0x181fc35d0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__WaterSplash(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__WaterSplash_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b85 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__WaterSplash_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Switchback
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Switchback (const MethodInfo* method);
// 0x181fc2810

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Switchback(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Switchback_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b86 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Switchback_g____getter_5
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot1 (const MethodInfo* method);
// 0x181fb9b70

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot1_g____getter_51
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b87 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot1_g____getter_51
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot2 (const MethodInfo* method);
// 0x181fb9c10

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot2_g____getter_52
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b88 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot2_g____getter_52
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot3 (const MethodInfo* method);
// 0x181fb9cb0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot3(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot3_g____getter_53
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b89 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot3_g____getter_53
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot4 (const MethodInfo* method);
// 0x181fb9d50

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot4(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot4_g____getter_54
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b8a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot4_g____getter_54
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape1Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var1 (const MethodInfo* method);
// 0x181fbb790

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var1_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b8b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var1_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape1Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var2 (const MethodInfo* method);
// 0x181fbb830

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var2_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b8c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var2_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape1Var3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var3 (const MethodInfo* method);
// 0x181fbb8d0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var3(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var3_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b8d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var3_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape2Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var1 (const MethodInfo* method);
// 0x181fbb970

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var1_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b8e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var1_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape2Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var2 (const MethodInfo* method);
// 0x181fbba10

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var2_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b8f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var2_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape2Var3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var3 (const MethodInfo* method);
// 0x181fbbab0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var3(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var3_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b90 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var3_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape3Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var1 (const MethodInfo* method);
// 0x181fbbb50

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var1_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b91 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var1_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape3Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var2 (const MethodInfo* method);
// 0x181fbbbf0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var2_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b92 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var2_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape3Var3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var3 (const MethodInfo* method);
// 0x181fbbc90

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var3(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var3_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b93 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var3_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape4Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var1 (const MethodInfo* method);
// 0x181fbbd30

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var1_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b94 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var1_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape4Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var2 (const MethodInfo* method);
// 0x181fbbdd0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var2_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b95 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var2_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape4Var3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var3 (const MethodInfo* method);
// 0x181fbbe70

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var3(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var3_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b96 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var3_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot1 (const MethodInfo* method);
// 0x181fb8e50

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot1_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b97 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot1_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot2 (const MethodInfo* method);
// 0x181fb8ef0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot2_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b98 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot2_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot3 (const MethodInfo* method);
// 0x181fb8f90

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot3(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot3_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b99 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot3_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot4 (const MethodInfo* method);
// 0x181fb9030

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot4(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot4_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b9a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot4_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShotDouble1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble1 (const MethodInfo* method);
// 0x181fb90d0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble1
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShotDouble1_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b9b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShotDouble1_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShotDouble2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble2 (const MethodInfo* method);
// 0x181fb9170

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble2
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShotDouble2_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b9c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShotDouble2_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape1Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var1 (const MethodInfo* method);
// 0x181fb93f0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape1Var1_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b9d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape1Var1_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape1Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var2 (const MethodInfo* method);
// 0x181fb9490

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape1Var2_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b9e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape1Var2_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape2Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var1 (const MethodInfo* method);
// 0x181fb9530

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345b9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape2Var1_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345b9f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape2Var1_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape2Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var2 (const MethodInfo* method);
// 0x181fb95d0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ba0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape2Var2_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345ba0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape2Var2_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape3Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var1 (const MethodInfo* method);
// 0x181fb9670

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ba1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape3Var1_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345ba1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape3Var1_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape3Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var2 (const MethodInfo* method);
// 0x181fb9710

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ba2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape3Var2_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345ba2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape3Var2_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__TSLaunch1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch1 (const MethodInfo* method);
// 0x181fc28b0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ba3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TSLaunch1_g____getter_79
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345ba3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TSLaunch1_g____getter_79
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__TSLaunch2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch2 (const MethodInfo* method);
// 0x181fc2950

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ba4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TSLaunch2_g____getter_80
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_184345ba4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TSLaunch2_g____getter_80
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanSoundEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fc50b0

void CustomLogic_CustomLogicHumanSoundEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345ba5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Death4");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShotDouble2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape2Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"TimerTick");
    il2cpp_codegen_initialize_runtime_metadata(&"TSLaunch2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape1Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape1Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"TimerGo");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape3Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape4Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderspearLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"GasEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"NoGas");
    il2cpp_codegen_initialize_runtime_metadata(&"NapeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep1");
    il2cpp_codegen_initialize_runtime_metadata(&"GunExplode");
    il2cpp_codegen_initialize_runtime_metadata(&"GasStart");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape3Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"HookImpact");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot1");
    il2cpp_codegen_initialize_runtime_metadata(&"Death3");
    il2cpp_codegen_initialize_runtime_metadata(&"Death1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeBreak");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape1Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"LimbHit");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape2Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"Death5");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRetractRight");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing1");
    il2cpp_codegen_initialize_runtime_metadata(&"OldBladeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot2");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape1Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShotDouble1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing4");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape1Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"CrashLand");
    il2cpp_codegen_initialize_runtime_metadata(&"HookImpactLoud");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot4");
    il2cpp_codegen_initialize_runtime_metadata(&"Dodge");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRetractLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"GunExplodeLoud");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape3Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOut");
    il2cpp_codegen_initialize_runtime_metadata(&"Refill");
    il2cpp_codegen_initialize_runtime_metadata(&"Slide");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape2Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape2Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape3Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"HookLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"GasLoop");
    il2cpp_codegen_initialize_runtime_metadata(&"FlareLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape2Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep2");
    il2cpp_codegen_initialize_runtime_metadata(&"Switchback");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot4");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeReloadGround");
    il2cpp_codegen_initialize_runtime_metadata(&"Death2");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape4Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape4Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot2");
    il2cpp_codegen_initialize_runtime_metadata(&"GunReload");
    il2cpp_codegen_initialize_runtime_metadata(&"Checkpoint");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeReloadAir");
    il2cpp_codegen_initialize_runtime_metadata(&"OldNapeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot3");
    il2cpp_codegen_initialize_runtime_metadata(&"WaterSplash");
    il2cpp_codegen_initialize_runtime_metadata(&"OldBladeSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape3Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"GasBurst");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelIn");
    il2cpp_codegen_initialize_runtime_metadata(&"OldHookLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"TSLaunch1");
    Il2CppMethodInitialized_184345ba5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeBreak",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeHit",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OldBladeHit",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NapeHit",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LimbHit",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OldNapeHit",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeReloadAir",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeReloadGround",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GunReload",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeSwing1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeSwing2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeSwing3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeSwing4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OldBladeSwing",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dodge",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FlareLaunch",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ThunderspearLaunch",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GasBurst",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HookLaunch",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OldHookLaunch",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HookRetractLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HookRetractRight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HookImpact",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HookImpactLoud",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GasStart",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GasLoop",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GasEnd",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReelIn",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReelOut",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CrashLand",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Land",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NoGas",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Refill",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Slide",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Footstep1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Footstep2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Death1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Death2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Death3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Death4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Death5",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Checkpoint",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TimerTick",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TimerGo",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GunExplode",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GunExplodeLoud",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WaterSplash",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Switchback",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"APGShot1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"APGShot2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"APGShot3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"APGShot4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape1Var1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape1Var2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape1Var3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape2Var1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape2Var2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape2Var3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape3Var1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape3Var2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape3Var3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape4Var1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape4Var2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape4Var3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSGunShot1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSGunShot2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSGunShot3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSGunShot4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSGunShotDouble1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSGunShotDouble2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSNape1Var1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSNape1Var2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSNape2Var1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSNape2Var2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSNape3Var1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSNape3Var2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TSLaunch1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TSLaunch2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeBreak>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeBreak_g____getter_2_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb3610

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeBreak_g____getter_2_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d54 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeBreak;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeHit>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeHit_g____getter_3_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb3660

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeHit_g____getter_3_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d55 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeHit;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldBladeHit>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldBladeHit_g____getter_4_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb6990

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldBladeHit_g____getter_4_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d56 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->OldBladeHit;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__NapeHit>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__NapeHit_g____getter_5_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb6850

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__NapeHit_g____getter_5_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d57 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->NapeHit;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__LimbHit>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__LimbHit_g____getter_6_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb6650

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__LimbHit_g____getter_6_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d58 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->LimbHit;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldNapeHit>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldNapeHit_g____getter_7_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb6a90

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldNapeHit_g____getter_7_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d59 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->OldNapeHit;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeReloadAir>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeReloadAir_g____getter_8_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb3b30

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeReloadAir_g____getter_8_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d5a = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeReloadAir;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeReloadGround>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeReloadGround_g____getter_9_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb3b80

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeReloadGround_g____getter_9_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d5b = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeReloadGround;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GunReload>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunReload_g____getter_10_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb5170

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunReload_g____getter_10_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d5c = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->GunReload;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing1>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing1_g____getter_11_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb3bd0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing1_g____getter_11_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d5d = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeSwing1;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing2>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing2_g____getter_12_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb3c20

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing2_g____getter_12_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d5e = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeSwing2;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing3>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing3_g____getter_13_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb3c70

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing3_g____getter_13_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d5f = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeSwing3;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing4>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing4_g____getter_14_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb3cc0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing4_g____getter_14_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d60 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeSwing4;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldBladeSwing>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldBladeSwing_g____getter_15_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb69e0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldBladeSwing_g____getter_15_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d61 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Dodge>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_16_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb4570

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_16_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d62 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Dodge;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__FlareLaunch>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__FlareLaunch_g____getter_17_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb49a0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__FlareLaunch_g____getter_17_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d63 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->FlareLaunch;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__ThunderspearLaunch>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ThunderspearLaunch_g____getter_18_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb84e0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ThunderspearLaunch_g____getter_18_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d64 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->ThunderspearLaunch;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasBurst>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasBurst_g____getter_19_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb4d80

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasBurst_g____getter_19_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d65 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->GasBurst;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookLaunch>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookLaunch_g____getter_20_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb5580

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookLaunch_g____getter_20_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d66 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->HookLaunch;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldHookLaunch>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldHookLaunch_g____getter_21_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb6a30

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldHookLaunch_g____getter_21_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d67 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->OldHookLaunch;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookRetractLeft>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookRetractLeft_g____getter_22_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb5670

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookRetractLeft_g____getter_22_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d68 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->HookRetractLeft;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookRetractRight>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookRetractRight_g____getter_23_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb56d0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookRetractRight_g____getter_23_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d69 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->HookRetractRight;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookImpact>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookImpact_g____getter_24_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb5520

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookImpact_g____getter_24_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d6a = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->HookImpact;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookImpactLoud>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookImpactLoud_g____getter_25_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb54c0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookImpactLoud_g____getter_25_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d6b = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->HookImpactLoud;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasStart>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasStart_g____getter_26_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb4ea0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasStart_g____getter_26_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d6c = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->GasStart;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasLoop>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasLoop_g____getter_27_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb4e40

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasLoop_g____getter_27_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d6d = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->GasLoop;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasEnd>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasEnd_g____getter_28_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb4de0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasEnd_g____getter_28_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d6e = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->GasEnd;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__ReelIn>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ReelIn_g____getter_29_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb7200

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ReelIn_g____getter_29_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d6f = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->ReelIn;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__ReelOut>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ReelOut_g____getter_30_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb72f0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ReelOut_g____getter_30_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d70 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->ReelOut;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__CrashLand>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__CrashLand_g____getter_31_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb4040

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__CrashLand_g____getter_31_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d71 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->CrashLand;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_32_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb61e0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_32_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d72 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Jump;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Land_g____getter_33_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb6560

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Land_g____getter_33_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d73 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Land;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__NoGas>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__NoGas_g____getter_34_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb6930

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__NoGas_g____getter_34_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d74 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->NoGas;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Refill>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_35_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb7440

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_35_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d75 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Refill;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Slide>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_36_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb7b50

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_36_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d76 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Slide;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep1>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Footstep1_g____getter_37_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb49f0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Footstep1_g____getter_37_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d77 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Footstep1;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep2>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Footstep2_g____getter_38_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb4a50

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Footstep2_g____getter_38_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d78 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Footstep2;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death1>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death1_g____getter_39_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb41e0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death1_g____getter_39_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d79 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Death1;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death2>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death2_g____getter_40_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb4240

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death2_g____getter_40_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d7a = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Death2;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death3>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death3_g____getter_41_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb42a0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death3_g____getter_41_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d7b = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Death3;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death4>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death4_g____getter_42_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb4300

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death4_g____getter_42_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d7c = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Death4;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death5>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death5_g____getter_43_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb4360

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death5_g____getter_43_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d7d = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Death5;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Checkpoint>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Checkpoint_g____getter_44_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb3fe0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Checkpoint_g____getter_44_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d7e = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Checkpoint;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__TimerTick>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TimerTick_g____getter_45_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb85a0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TimerTick_g____getter_45_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d7f = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->TimerTick;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__TimerGo>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TimerGo_g____getter_46_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb8540

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TimerGo_g____getter_46_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d80 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->TimerGo;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GunExplode>g____getter|47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunExplode_g____getter_47_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb5110

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunExplode_g____getter_47_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d81 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->GunExplode;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GunExplodeLoud>g____getter|48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunExplodeLoud_g____getter_48_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb50b0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunExplodeLoud_g____getter_48_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d82 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->GunExplodeLoud;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__WaterSplash>g____getter|49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__WaterSplash_g____getter_49_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb8b90

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__WaterSplash_g____getter_49_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d83 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->WaterSplash;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Switchback>g____getter|50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Switchback_g____getter_50_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb8240

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Switchback_g____getter_50_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d84 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Switchback;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot1>g____getter|51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot1_g____getter_51_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb2290

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot1_g____getter_51_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d85 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->APGShot1;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot2>g____getter|52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot2_g____getter_52_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb22f0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot2_g____getter_52_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d86 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->APGShot2;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot3>g____getter|53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot3_g____getter_53_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb2350

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot3_g____getter_53_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d87 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->APGShot3;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot4>g____getter|54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot4_g____getter_54_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb23b0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot4_g____getter_54_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d88 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->APGShot4;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape1Var1>g____getter|55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var1_g____getter_55_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb36b0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var1_g____getter_55_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d89 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var1;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape1Var2>g____getter|56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var2_g____getter_56_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb3710

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var2_g____getter_56_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d8a = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var2;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape1Var3>g____getter|57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var3_g____getter_57_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb3770

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var3_g____getter_57_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d8b = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var3;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape2Var1>g____getter|58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var1_g____getter_58_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb37d0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var1_g____getter_58_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d8c = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var1;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape2Var2>g____getter|59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var2_g____getter_59_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb3830

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var2_g____getter_59_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d8d = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var2;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape2Var3>g____getter|60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var3_g____getter_60_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb3890

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var3_g____getter_60_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d8e = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var3;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape3Var1>g____getter|61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var1_g____getter_61_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb38f0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var1_g____getter_61_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d8f = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var1;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape3Var2>g____getter|62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var2_g____getter_62_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb3950

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var2_g____getter_62_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d90 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var2;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape3Var3>g____getter|63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var3_g____getter_63_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb39b0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var3_g____getter_63_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d91 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var3;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape4Var1>g____getter|64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var1_g____getter_64_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb3a10

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var1_g____getter_64_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d92 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var1;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape4Var2>g____getter|65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var2_g____getter_65_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb3a70

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var2_g____getter_65_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d93 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var2;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape4Var3>g____getter|66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var3_g____getter_66_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb3ad0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var3_g____getter_66_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d94 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var3;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot1>g____getter|67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot1_g____getter_67_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb1ab0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot1_g____getter_67_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d95 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot1;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot2>g____getter|68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot2_g____getter_68_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb1b10

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot2_g____getter_68_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d96 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot2;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot3>g____getter|69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot3_g____getter_69_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb1b70

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot3_g____getter_69_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d97 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot3;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot4>g____getter|70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot4_g____getter_70_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb1bd0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot4_g____getter_70_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d98 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot4;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShotDouble1>g____getter|71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShotDouble1_g____getter_71_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb1c30

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShotDouble1_g____getter_71_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d99 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShotDouble1;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShotDouble2>g____getter|72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShotDouble2_g____getter_72_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb1c90

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShotDouble2_g____getter_72_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d9a = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShotDouble2;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape1Var1>g____getter|73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape1Var1_g____getter_73_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb1e10

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape1Var1_g____getter_73_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d9b = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape1Var1;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape1Var2>g____getter|74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape1Var2_g____getter_74_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb1e70

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape1Var2_g____getter_74_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d9c = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape1Var2;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape2Var1>g____getter|75_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape2Var1_g____getter_75_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb1ed0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape2Var1_g____getter_75_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d9d = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape2Var1;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape2Var2>g____getter|76_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape2Var2_g____getter_76_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb1f30

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape2Var2_g____getter_76_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d9e = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape2Var2;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape3Var1>g____getter|77_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape3Var1_g____getter_77_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb1f90

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape3Var1_g____getter_77_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345d9f = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape3Var1;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape3Var2>g____getter|78_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape3Var2_g____getter_78_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb1ff0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape3Var2_g____getter_78_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345da0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345da0 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape3Var2;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__TSLaunch1>g____getter|79_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TSLaunch1_g____getter_79_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb82a0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TSLaunch1_g____getter_79_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345da1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345da1 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->TSLaunch1;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__TSLaunch2>g____getter|80_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TSLaunch2_g____getter_80_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x181fb8300

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TSLaunch2_g____getter_80_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345da2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345da2 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->TSLaunch2;
}


// CustomLogic.CustomLogicHumanSoundEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanSoundEnum___ctor (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x181fc83a0

void CustomLogic_CustomLogicHumanSoundEnum___ctor
               (CustomLogic_CustomLogicHumanSoundEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345b03 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeBreak
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeBreak (const MethodInfo* method);
// 0x181fc89f0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeBreak(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b04 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeBreak;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeHit (const MethodInfo* method);
// 0x181fc8a40

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeHit(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b05 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeHit;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_OldBladeHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_OldBladeHit (const MethodInfo* method);
// 0x181fc9b50

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_OldBladeHit(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b06 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->OldBladeHit;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_NapeHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_NapeHit (const MethodInfo* method);
// 0x181fc9aa0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_NapeHit(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b07 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->NapeHit;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_LimbHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_LimbHit (const MethodInfo* method);
// 0x181fc9a50

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_LimbHit(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b08 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->LimbHit;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_OldNapeHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_OldNapeHit (const MethodInfo* method);
// 0x181fc9c50

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_OldNapeHit(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b09 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->OldNapeHit;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeReloadAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeReloadAir (const MethodInfo* method);
// 0x181fc8f10

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeReloadAir(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b0a = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeReloadAir;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeReloadGround
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeReloadGround (const MethodInfo* method);
// 0x181fc8f60

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeReloadGround(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b0b = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeReloadGround;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GunReload
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GunReload (const MethodInfo* method);
// 0x181fc9760

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GunReload(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b0c = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->GunReload;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing1 (const MethodInfo* method);
// 0x181fc8fb0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b0d = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeSwing1;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing2 (const MethodInfo* method);
// 0x181fc9000

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b0e = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeSwing2;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing3 (const MethodInfo* method);
// 0x181fc9050

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b0f = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeSwing3;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing4 (const MethodInfo* method);
// 0x181fc90a0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b10 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeSwing4;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_OldBladeSwing
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_OldBladeSwing (const MethodInfo* method);
// 0x181fc9ba0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_OldBladeSwing(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b11 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Dodge
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Dodge (const MethodInfo* method);
// 0x181fc93c0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Dodge(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b12 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->Dodge;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_FlareLaunch
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_FlareLaunch (const MethodInfo* method);
// 0x181fc9410

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_FlareLaunch(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b13 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->FlareLaunch;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_ThunderspearLaunch
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_ThunderspearLaunch (const MethodInfo* method);
// 0x181fc9f40

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_ThunderspearLaunch(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b14 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->ThunderspearLaunch;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GasBurst
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GasBurst (const MethodInfo* method);
// 0x181fc9520

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GasBurst(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b15 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->GasBurst;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookLaunch
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookLaunch (const MethodInfo* method);
// 0x181fc9870

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookLaunch(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b16 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->HookLaunch;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_OldHookLaunch
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_OldHookLaunch (const MethodInfo* method);
// 0x181fc9bf0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_OldHookLaunch(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b17 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->OldHookLaunch;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookRetractLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookRetractLeft (const MethodInfo* method);
// 0x181fc98d0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookRetractLeft(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b18 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->HookRetractLeft;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookRetractRight
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookRetractRight (const MethodInfo* method);
// 0x181fc9930

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookRetractRight(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b19 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->HookRetractRight;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookImpact
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookImpact (const MethodInfo* method);
// 0x181fc9810

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookImpact(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b1a = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->HookImpact;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookImpactLoud
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookImpactLoud (const MethodInfo* method);
// 0x181fc97b0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookImpactLoud(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b1b = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->HookImpactLoud;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GasStart
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GasStart (const MethodInfo* method);
// 0x181fc9640

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GasStart(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b1c = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->GasStart;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GasLoop
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GasLoop (const MethodInfo* method);
// 0x181fc95e0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GasLoop(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b1d = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->GasLoop;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GasEnd
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GasEnd (const MethodInfo* method);
// 0x181fc9580

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GasEnd(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b1e = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->GasEnd;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_ReelIn
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_ReelIn (const MethodInfo* method);
// 0x181fc9ca0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_ReelIn(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b1f = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->ReelIn;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_ReelOut
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_ReelOut (const MethodInfo* method);
// 0x181fc9d00

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_ReelOut(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b20 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->ReelOut;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_CrashLand
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_CrashLand (const MethodInfo* method);
// 0x181fc9180

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_CrashLand(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b21 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->CrashLand;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Jump (const MethodInfo* method);
// 0x181fc9990

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Jump(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b22 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->Jump;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Land (const MethodInfo* method);
// 0x181fc99f0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Land(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b23 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->Land;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_NoGas
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_NoGas (const MethodInfo* method);
// 0x181fc9af0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_NoGas(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b24 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->NoGas;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Refill
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Refill (const MethodInfo* method);
// 0x181fc9d60

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Refill(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b25 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->Refill;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Slide
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Slide (const MethodInfo* method);
// 0x181fc9dc0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Slide(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b26 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->Slide;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Footstep1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Footstep1 (const MethodInfo* method);
// 0x181fc9460

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Footstep1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b27 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->Footstep1;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Footstep2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Footstep2 (const MethodInfo* method);
// 0x181fc94c0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Footstep2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b28 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->Footstep2;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death1 (const MethodInfo* method);
// 0x181fc91e0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b29 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->Death1;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death2 (const MethodInfo* method);
// 0x181fc9240

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b2a = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->Death2;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death3 (const MethodInfo* method);
// 0x181fc92a0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b2b = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->Death3;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death4 (const MethodInfo* method);
// 0x181fc9300

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b2c = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->Death4;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death5
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death5 (const MethodInfo* method);
// 0x181fc9360

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death5(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b2d = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->Death5;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Checkpoint
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Checkpoint (const MethodInfo* method);
// 0x181fc90f0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Checkpoint(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b2e = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->Checkpoint;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_TimerTick
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_TimerTick (const MethodInfo* method);
// 0x181fca000

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_TimerTick(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b2f = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->TimerTick;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_TimerGo
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_TimerGo (const MethodInfo* method);
// 0x181fc9fa0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_TimerGo(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b30 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->TimerGo;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GunExplode
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GunExplode (const MethodInfo* method);
// 0x181fc9700

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GunExplode(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b31 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->GunExplode;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GunExplodeLoud
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GunExplodeLoud (const MethodInfo* method);
// 0x181fc96a0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GunExplodeLoud(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b32 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->GunExplodeLoud;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_WaterSplash
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_WaterSplash (const MethodInfo* method);
// 0x181fca060

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_WaterSplash(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b33 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->WaterSplash;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Switchback
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Switchback (const MethodInfo* method);
// 0x181fc9e20

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Switchback(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b34 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->Switchback;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_APGShot1 (const MethodInfo* method);
// 0x181fc8870

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_APGShot1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b35 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->APGShot1;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_APGShot2 (const MethodInfo* method);
// 0x181fc88d0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_APGShot2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b36 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->APGShot2;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_APGShot3 (const MethodInfo* method);
// 0x181fc8930

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_APGShot3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b37 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->APGShot3;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_APGShot4 (const MethodInfo* method);
// 0x181fc8990

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_APGShot4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b38 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->APGShot4;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape1Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var1 (const MethodInfo* method);
// 0x181fc8a90

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b39 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var1;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape1Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var2 (const MethodInfo* method);
// 0x181fc8af0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b3a = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var2;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape1Var3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var3 (const MethodInfo* method);
// 0x181fc8b50

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b3b = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var3;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape2Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var1 (const MethodInfo* method);
// 0x181fc8bb0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b3c = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var1;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape2Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var2 (const MethodInfo* method);
// 0x181fc8c10

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b3d = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var2;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape2Var3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var3 (const MethodInfo* method);
// 0x181fc8c70

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b3e = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var3;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape3Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var1 (const MethodInfo* method);
// 0x181fc8cd0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b3f = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var1;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape3Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var2 (const MethodInfo* method);
// 0x181fc8d30

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b40 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var2;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape3Var3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var3 (const MethodInfo* method);
// 0x181fc8d90

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b41 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var3;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape4Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var1 (const MethodInfo* method);
// 0x181fc8df0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b42 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var1;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape4Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var2 (const MethodInfo* method);
// 0x181fc8e50

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b43 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var2;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape4Var3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var3 (const MethodInfo* method);
// 0x181fc8eb0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b44 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var3;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot1 (const MethodInfo* method);
// 0x181fc83f0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b45 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot1;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot2 (const MethodInfo* method);
// 0x181fc8450

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b46 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot2;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot3 (const MethodInfo* method);
// 0x181fc84b0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b47 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot3;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot4 (const MethodInfo* method);
// 0x181fc8510

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b48 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot4;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShotDouble1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShotDouble1 (const MethodInfo* method);
// 0x181fc8570

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShotDouble1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b49 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShotDouble1;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShotDouble2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShotDouble2 (const MethodInfo* method);
// 0x181fc85d0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShotDouble2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b4a = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShotDouble2;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape1Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape1Var1 (const MethodInfo* method);
// 0x181fc8630

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape1Var1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b4b = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->AHSSNape1Var1;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape1Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape1Var2 (const MethodInfo* method);
// 0x181fc8690

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape1Var2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b4c = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->AHSSNape1Var2;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape2Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape2Var1 (const MethodInfo* method);
// 0x181fc86f0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape2Var1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b4d = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->AHSSNape2Var1;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape2Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape2Var2 (const MethodInfo* method);
// 0x181fc8750

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape2Var2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b4e = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->AHSSNape2Var2;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape3Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape3Var1 (const MethodInfo* method);
// 0x181fc87b0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape3Var1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b4f = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->AHSSNape3Var1;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape3Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape3Var2 (const MethodInfo* method);
// 0x181fc8810

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape3Var2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b50 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->AHSSNape3Var2;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_TSLaunch1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_TSLaunch1 (const MethodInfo* method);
// 0x181fc9e80

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_TSLaunch1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b51 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->TSLaunch1;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_TSLaunch2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_TSLaunch2 (const MethodInfo* method);
// 0x181fc9ee0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_TSLaunch2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_184345b52 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  return TypeInfo_Characters_HumanSounds->static_fields->TSLaunch2;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_ClassName (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x181fc9150

System_String_o *
CustomLogic_CustomLogicHumanSoundEnum__get_ClassName
          (CustomLogic_CustomLogicHumanSoundEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345b53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"HumanSoundEnum");
    Il2CppMethodInitialized_184345b53 = '\x01';
  }
  return "HumanSoundEnum";
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanSoundEnum__get_IsAbstract (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHumanSoundEnum__get_IsAbstract(CustomLogic_CustomLogicHumanSoundEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanSoundEnum__get_IsStatic (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHumanSoundEnum__get_IsStatic(CustomLogic_CustomLogicHumanSoundEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanSoundEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHumanSoundEnum__get_InheritBaseMembers(CustomLogic_CustomLogicHumanSoundEnum_o* __this, MethodInfo* method)

{
  return true;
}


