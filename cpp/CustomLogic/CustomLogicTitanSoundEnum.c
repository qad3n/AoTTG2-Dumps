// Type: CustomLogic.CustomLogicTitanSoundEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTitanSoundEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTitanSoundEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTitanSoundEnum_o* CustomLogic_CustomLogicTitanSoundEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182017810

CustomLogic_CustomLogicTitanSoundEnum_o *
CustomLogic_CustomLogicTitanSoundEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184346212 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanSoundEnum);
    Il2CppMethodInitialized_184346212 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum);
      if (Il2CppMethodInitialized_1843461e3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843461e3 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicTitanSoundEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTitanSoundEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTitanSoundEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ff28f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184346213 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt2");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff2");
    il2cpp_codegen_initialize_runtime_metadata(&"Swing3");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff4");
    il2cpp_codegen_initialize_runtime_metadata(&"DeathNoFall");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep1");
    il2cpp_codegen_initialize_runtime_metadata(&"RockThrow2");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff1");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt1");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanJump");
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh2");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt3");
    il2cpp_codegen_initialize_runtime_metadata(&"Bite1");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff6");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt4");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt5");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep3");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt2");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt6");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt10");
    il2cpp_codegen_initialize_runtime_metadata(&"Swing1");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt4");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt8");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff5");
    il2cpp_codegen_initialize_runtime_metadata(&"Hit");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt1");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt6");
    il2cpp_codegen_initialize_runtime_metadata(&"Bite2");
    il2cpp_codegen_initialize_runtime_metadata(&"Decapitate");
    il2cpp_codegen_initialize_runtime_metadata(&"Swing2");
    il2cpp_codegen_initialize_runtime_metadata(&"DeathFall");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep2");
    il2cpp_codegen_initialize_runtime_metadata(&"RockPickup");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt5");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt7");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt9");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar2");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt8");
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh1");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt3");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt7");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar1");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff3");
    il2cpp_codegen_initialize_runtime_metadata(&"Steam");
    il2cpp_codegen_initialize_runtime_metadata(&"RockThrow1");
    Il2CppMethodInitialized_184346213 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x45d92973) {
    if (uVar2 < 0x22d25e85) {
      if (uVar2 < 0x1ae90931) {
        if (uVar2 < 0xfb1ddde) {
          if (uVar2 == 0xcb1d924) {
            bVar1 = System_String__op_Equality(name,"Roar1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
              }
              if (Il2CppMethodInitialized_18434622d == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Roar1_g____getter_27_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
                Il2CppMethodInitialized_18434622d = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Roar1_g____getter_27_0
              ;
              goto label_181ff458e;
            }
          }
          else if (uVar2 == 0xfb1dddd) {
            bVar1 = System_String__op_Equality(name,"Roar2",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
              }
              if (Il2CppMethodInitialized_18434622e == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Roar2_g____getter_28_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
                Il2CppMethodInitialized_18434622e = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Roar2_g____getter_28_0
              ;
              goto label_181ff458e;
            }
          }
        }
        else if (uVar2 == 0x15c63468) {
          bVar1 = System_String__op_Equality(name,"DeathFall",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_18434622f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__DeathFall_g____getter_29
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
              Il2CppMethodInitialized_18434622f = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__DeathFall_g____getter_29
            ;
            goto label_181ff458e;
          }
        }
        else if (uVar2 == 0x16d24ba0) {
          bVar1 = System_String__op_Equality(name,"Hurt8",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346221 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt8_g____getter_15_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
              Il2CppMethodInitialized_184346221 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt8_g____getter_15_0
            ;
            goto label_181ff458e;
          }
        }
        else if (uVar2 == 0x1ae90930) {
          bVar1 = System_String__op_Equality(name,"Footstep3",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346216 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep3_g____getter_4
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
              Il2CppMethodInitialized_184346216 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep3_g____getter_4
            ;
            goto label_181ff458e;
          }
        }
      }
      else if (uVar2 < 0x1fd259cc) {
        if (uVar2 == 0x1be90ac3) {
          bVar1 = System_String__op_Equality(name,"Footstep2",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346215 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep2_g____getter_3
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
              Il2CppMethodInitialized_184346215 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep2_g____getter_3
            ;
            goto label_181ff458e;
          }
        }
        else if (uVar2 == 0x1ce90c56) {
          bVar1 = System_String__op_Equality(name,"Footstep1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346214 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep1_g____getter_2
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
              Il2CppMethodInitialized_184346214 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep1_g____getter_2
            ;
            goto label_181ff458e;
          }
        }
        else if (uVar2 == 0x1fd259cb) {
          bVar1 = System_String__op_Equality(name,"Hurt1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_18434621a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt1_g____getter_8_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
              Il2CppMethodInitialized_18434621a = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt1_g____getter_8_0
            ;
            goto label_181ff458e;
          }
        }
      }
      else if (uVar2 == 0x20d25b5e) {
        bVar1 = System_String__op_Equality(name,"Hurt2",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434621b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt2_g____getter_9_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_18434621b = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt2_g____getter_9_0
          ;
          goto label_181ff458e;
        }
      }
      else if (uVar2 == 0x21d25cf1) {
        bVar1 = System_String__op_Equality(name,"Hurt3",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434621c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt3_g____getter_10_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_18434621c = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt3_g____getter_10_0
          ;
          goto label_181ff458e;
        }
      }
      else if (uVar2 == 0x22d25e84) {
        bVar1 = System_String__op_Equality(name,"Hurt4",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434621d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt4_g____getter_11_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_18434621d = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt4_g____getter_11_0
          ;
          goto label_181ff458e;
        }
      }
      goto label_181ff45d0;
    }
    if (uVar2 < 0x26b48369) {
      if (uVar2 < 0x24389c32) {
        if (uVar2 == 0x23d26017) {
          bVar1 = System_String__op_Equality(name,"Hurt5",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_18434621e == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt5_g____getter_12_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
              Il2CppMethodInitialized_18434621e = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt5_g____getter_12_0
            ;
            goto label_181ff458e;
          }
        }
        else if (uVar2 == 0x24389c31) {
          bVar1 = System_String__op_Equality(name,"TitanJump",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_18434623c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__TitanJump_g____getter_42
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
              Il2CppMethodInitialized_18434623c = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__TitanJump_g____getter_42
            ;
            goto label_181ff458e;
          }
        }
      }
      else if (uVar2 == 0x24d261aa) {
        bVar1 = System_String__op_Equality(name,"Hurt6",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434621f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt6_g____getter_13_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_18434621f = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt6_g____getter_13_0
          ;
          goto label_181ff458e;
        }
      }
      else if (uVar2 == 0x25d2633d) {
        bVar1 = System_String__op_Equality(name,"Hurt7",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346220 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt7_g____getter_14_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184346220 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt7_g____getter_14_0
          ;
          goto label_181ff458e;
        }
      }
      else if (uVar2 == 0x26b48368) {
        bVar1 = System_String__op_Equality(name,"RockPickup",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434623d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockPickup_g____getter_4
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_18434623d = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockPickup_g____getter_4
          ;
          goto label_181ff458e;
        }
      }
    }
    else if (uVar2 < 0x42d924ba) {
      if (uVar2 == 0x3fd92000) {
        bVar1 = System_String__op_Equality(name,"Grunt1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346222 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt1_g____getter_16_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184346222 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt1_g____getter_16_0
          ;
          goto label_181ff458e;
        }
      }
      else if (uVar2 == 0x41d92326) {
        bVar1 = System_String__op_Equality(name,"Grunt3",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346224 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt3_g____getter_18_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184346224 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt3_g____getter_18_0
          ;
          goto label_181ff458e;
        }
      }
      else if (uVar2 == 0x42d924b9) {
        bVar1 = System_String__op_Equality(name,"Grunt2",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346223 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt2_g____getter_17_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184346223 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt2_g____getter_17_0
          ;
          goto label_181ff458e;
        }
      }
    }
    else if (uVar2 == 0x43d9264c) {
      bVar1 = System_String__op_Equality(name,"Grunt5",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346226 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt5_g____getter_20_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          Il2CppMethodInitialized_184346226 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt5_g____getter_20_0
        ;
        goto label_181ff458e;
      }
    }
    else if (uVar2 == 0x44d927df) {
      bVar1 = System_String__op_Equality(name,"Grunt4",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346225 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt4_g____getter_19_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          Il2CppMethodInitialized_184346225 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt4_g____getter_19_0
        ;
        goto label_181ff458e;
      }
    }
    else if (uVar2 == 0x45d92972) {
      bVar1 = System_String__op_Equality(name,"Grunt7",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346228 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt7_g____getter_22_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          Il2CppMethodInitialized_184346228 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt7_g____getter_22_0
        ;
        goto label_181ff458e;
      }
    }
    goto label_181ff45d0;
  }
  if (uVar2 < 0x926e2ded) {
    if (uVar2 < 0x88284e09) {
      if (uVar2 < 0x47d92c99) {
        if (uVar2 == 0x46d92b05) {
          bVar1 = System_String__op_Equality(name,"Grunt6",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346227 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt6_g____getter_21_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
              Il2CppMethodInitialized_184346227 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt6_g____getter_21_0
            ;
            goto label_181ff458e;
          }
        }
        else if (uVar2 == 0x47d92c98) {
          bVar1 = System_String__op_Equality(name,"Grunt9",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_18434622a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt9_g____getter_24_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
              Il2CppMethodInitialized_18434622a = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt9_g____getter_24_0
            ;
            goto label_181ff458e;
          }
        }
      }
      else if (uVar2 == 0x48d92e2b) {
        bVar1 = System_String__op_Equality(name,"Grunt8",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346229 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt8_g____getter_23_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184346229 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt8_g____getter_23_0
          ;
          goto label_181ff458e;
        }
      }
      else if (uVar2 == 0x655d504a) {
        bVar1 = System_String__op_Equality(name,"Hit",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434622c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hit_g____getter_26_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_18434622c = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hit_g____getter_26_0
          ;
          goto label_181ff458e;
        }
      }
      else if (uVar2 == 0x88284e08) {
        bVar1 = System_String__op_Equality(name,"Swing1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346217 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing1_g____getter_5_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184346217 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing1_g____getter_5_0
          ;
          goto label_181ff458e;
        }
      }
    }
    else if (uVar2 < 0x8e6e27a1) {
      if (uVar2 == 0x8a28512e) {
        bVar1 = System_String__op_Equality(name,"Swing3",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346219 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing3_g____getter_7_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184346219 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing3_g____getter_7_0
          ;
          goto label_181ff458e;
        }
      }
      else if (uVar2 == 0x8b2852c1) {
        bVar1 = System_String__op_Equality(name,"Swing2",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346218 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing2_g____getter_6_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184346218 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing2_g____getter_6_0
          ;
          goto label_181ff458e;
        }
      }
      else if (uVar2 == 0x8e6e27a0) {
        bVar1 = System_String__op_Equality(name,"Huff2",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346237 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff2_g____getter_37_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184346237 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff2_g____getter_37_0
          ;
          goto label_181ff458e;
        }
      }
    }
    else if (uVar2 == 0x8f6e2933) {
      bVar1 = System_String__op_Equality(name,"Huff3",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346238 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff3_g____getter_38_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          Il2CppMethodInitialized_184346238 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff3_g____getter_38_0
        ;
        goto label_181ff458e;
      }
    }
    else if (uVar2 == 0x916e2c59) {
      bVar1 = System_String__op_Equality(name,"Huff1",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346236 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff1_g____getter_36_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          Il2CppMethodInitialized_184346236 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff1_g____getter_36_0
        ;
        goto label_181ff458e;
      }
    }
    else if (uVar2 == 0x926e2dec) {
      bVar1 = System_String__op_Equality(name,"Huff6",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434623b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff6_g____getter_41_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          Il2CppMethodInitialized_18434623b = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff6_g____getter_41_0
        ;
        goto label_181ff458e;
      }
    }
    goto label_181ff45d0;
  }
  if (uVar2 < 0xad627478) {
    if (uVar2 < 0xa0091098) {
      if (uVar2 == 0x946e3112) {
        bVar1 = System_String__op_Equality(name,"Huff4",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346239 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff4_g____getter_39_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_184346239 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff4_g____getter_39_0
          ;
          goto label_181ff458e;
        }
      }
      else if (uVar2 == 0x956e32a5) {
        bVar1 = System_String__op_Equality(name,"Huff5",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434623a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff5_g____getter_40_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_18434623a = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff5_g____getter_40_0
          ;
          goto label_181ff458e;
        }
      }
      else if (uVar2 == 0xa0091097) {
        bVar1 = System_String__op_Equality(name,"RockThrow1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434623e == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockThrow1_g____getter_4
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
            ;
            Il2CppMethodInitialized_18434623e = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockThrow1_g____getter_4
          ;
          goto label_181ff458e;
        }
      }
    }
    else if (uVar2 == 0xa109122a) {
      bVar1 = System_String__op_Equality(name,"RockThrow2",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434623f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockThrow2_g____getter_4
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          Il2CppMethodInitialized_18434623f = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockThrow2_g____getter_4
        ;
        goto label_181ff458e;
      }
    }
    else if (uVar2 == 0xac6b6ce7) {
      bVar1 = System_String__op_Equality(name,"Bite2",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346233 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Bite2_g____getter_33_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          Il2CppMethodInitialized_184346233 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Bite2_g____getter_33_0
        ;
        goto label_181ff458e;
      }
    }
    else if (uVar2 == 0xad627477) {
      bVar1 = System_String__op_Equality(name,"DeathNoFall",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346230 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__DeathNoFall_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          Il2CppMethodInitialized_184346230 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__DeathNoFall_g____getter
        ;
        goto label_181ff458e;
      }
    }
  }
  else if (uVar2 < 0xb6407b94) {
    if (uVar2 == 0xad6b6e7a) {
      bVar1 = System_String__op_Equality(name,"Bite1",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346232 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Bite1_g____getter_32_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          Il2CppMethodInitialized_184346232 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Bite1_g____getter_32_0
        ;
        goto label_181ff458e;
      }
    }
    else if (uVar2 == 0xb2cdab90) {
      bVar1 = System_String__op_Equality(name,"Grunt10",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434622b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt10_g____getter_25_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          Il2CppMethodInitialized_18434622b = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt10_g____getter_25_0
        ;
        goto label_181ff458e;
      }
    }
    else if (uVar2 == 0xb6407b93) {
      bVar1 = System_String__op_Equality(name,"Steam",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346231 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Steam_g____getter_31_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
          Il2CppMethodInitialized_184346231 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Steam_g____getter_31_0
        ;
        goto label_181ff458e;
      }
    }
  }
  else if (uVar2 == 0xc25fad04) {
    bVar1 = System_String__op_Equality(name,"Laugh2",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346235 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Laugh2_g____getter_35_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
        Il2CppMethodInitialized_184346235 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
      ;
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Laugh2_g____getter_35_0
      ;
label_181ff458e:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor
                );
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar2 == 0xc55fb1bd) {
    bVar1 = System_String__op_Equality(name,"Laugh1",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346234 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Laugh1_g____getter_34_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
        Il2CppMethodInitialized_184346234 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
      ;
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Laugh1_g____getter_34_0
      ;
      goto label_181ff458e;
    }
  }
  else if (uVar2 == 0xfc4e544d) {
    bVar1 = System_String__op_Equality(name,"Decapitate",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346240 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Decapitate_g____getter_4
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
        Il2CppMethodInitialized_184346240 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object)
      ;
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Decapitate_g____getter_4
      ;
      goto label_181ff458e;
    }
  }
label_181ff45d0:
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTitanSoundEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep1 (const MethodInfo* method);
// 0x182004400

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346214 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep1_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346214 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep1_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep2 (const MethodInfo* method);
// 0x1820044a0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346215 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep2_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346215 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep2_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep3 (const MethodInfo* method);
// 0x182004540

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep3(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346216 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep3_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346216 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep3_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Swing1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing1 (const MethodInfo* method);
// 0x182007ce0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346217 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing1_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346217 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing1_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Swing2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing2 (const MethodInfo* method);
// 0x182007d80

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346218 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing2_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346218 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing2_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Swing3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing3 (const MethodInfo* method);
// 0x182007e20

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing3(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346219 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing3_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346219 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing3_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt1 (const MethodInfo* method);
// 0x1820052b0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434621a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt1_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434621a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt1_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt2 (const MethodInfo* method);
// 0x182005350

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434621b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt2_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434621b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt2_g____getter_9_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt3 (const MethodInfo* method);
// 0x1820053f0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt3(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434621c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt3_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434621c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt3_g____getter_10_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt4 (const MethodInfo* method);
// 0x182005490

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt4(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434621d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt4_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434621d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt4_g____getter_11_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt5 (const MethodInfo* method);
// 0x182005530

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt5(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434621e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt5_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434621e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt5_g____getter_12_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt6 (const MethodInfo* method);
// 0x1820055d0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt6(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434621f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt6_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434621f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt6_g____getter_13_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt7 (const MethodInfo* method);
// 0x182005670

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt7(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346220 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt7_g____getter_14_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346220 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt7_g____getter_14_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt8 (const MethodInfo* method);
// 0x182005710

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt8(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346221 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt8_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346221 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt8_g____getter_15_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt1 (const MethodInfo* method);
// 0x182004810

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346222 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt1_g____getter_16_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346222 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt1_g____getter_16_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt2 (const MethodInfo* method);
// 0x1820048b0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346223 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt2_g____getter_17_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346223 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt2_g____getter_17_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt3 (const MethodInfo* method);
// 0x182004950

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt3(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346224 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt3_g____getter_18_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346224 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt3_g____getter_18_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt4 (const MethodInfo* method);
// 0x1820049f0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt4(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346225 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt4_g____getter_19_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346225 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt4_g____getter_19_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt5 (const MethodInfo* method);
// 0x182004a90

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt5(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346226 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt5_g____getter_20_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346226 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt5_g____getter_20_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt6 (const MethodInfo* method);
// 0x182004b30

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt6(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346227 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt6_g____getter_21_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346227 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt6_g____getter_21_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt7 (const MethodInfo* method);
// 0x182004bd0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt7(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346228 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt7_g____getter_22_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346228 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt7_g____getter_22_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt8 (const MethodInfo* method);
// 0x182004c70

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt8(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346229 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt8_g____getter_23_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346229 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt8_g____getter_23_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt9
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt9 (const MethodInfo* method);
// 0x182004d10

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt9(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434622a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt9_g____getter_24_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434622a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt9_g____getter_24_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt10
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt10 (const MethodInfo* method);
// 0x182004770

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt10(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434622b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt10_g____getter_25_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434622b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt10_g____getter_25_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hit (const MethodInfo* method);
// 0x182004db0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hit(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434622c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hit_g____getter_26_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434622c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hit_g____getter_26_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Roar1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar1 (const MethodInfo* method);
// 0x182006de0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434622d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Roar1_g____getter_27_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434622d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Roar1_g____getter_27_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Roar2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar2 (const MethodInfo* method);
// 0x182006e80

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434622e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Roar2_g____getter_28_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434622e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Roar2_g____getter_28_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__DeathFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathFall (const MethodInfo* method);
// 0x182003550

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathFall(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434622f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__DeathFall_g____getter_29
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434622f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__DeathFall_g____getter_29
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__DeathNoFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathNoFall (const MethodInfo* method);
// 0x1820035f0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathNoFall(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346230 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__DeathNoFall_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346230 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__DeathNoFall_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Steam
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Steam (const MethodInfo* method);
// 0x182007920

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Steam(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346231 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Steam_g____getter_31_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346231 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Steam_g____getter_31_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Bite1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite1 (const MethodInfo* method);
// 0x182002bf0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346232 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Bite1_g____getter_32_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346232 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Bite1_g____getter_32_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Bite2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite2 (const MethodInfo* method);
// 0x182002c90

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346233 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Bite2_g____getter_33_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346233 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Bite2_g____getter_33_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Laugh1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh1 (const MethodInfo* method);
// 0x182005e90

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346234 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Laugh1_g____getter_34_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346234 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Laugh1_g____getter_34_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Laugh2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh2 (const MethodInfo* method);
// 0x182005f30

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346235 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Laugh2_g____getter_35_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346235 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Laugh2_g____getter_35_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff1 (const MethodInfo* method);
// 0x182004e50

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346236 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff1_g____getter_36_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346236 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff1_g____getter_36_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff2 (const MethodInfo* method);
// 0x182004ef0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346237 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff2_g____getter_37_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346237 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff2_g____getter_37_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff3 (const MethodInfo* method);
// 0x182004f90

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff3(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346238 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff3_g____getter_38_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346238 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff3_g____getter_38_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff4 (const MethodInfo* method);
// 0x182005030

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff4(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346239 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff4_g____getter_39_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346239 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff4_g____getter_39_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff5 (const MethodInfo* method);
// 0x1820050d0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff5(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434623a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff5_g____getter_40_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434623a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff5_g____getter_40_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff6 (const MethodInfo* method);
// 0x182005170

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff6(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434623b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff6_g____getter_41_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434623b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff6_g____getter_41_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__TitanJump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__TitanJump (const MethodInfo* method);
// 0x182008000

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__TitanJump(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434623c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__TitanJump_g____getter_42
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434623c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__TitanJump_g____getter_42
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__RockPickup
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockPickup (const MethodInfo* method);
// 0x182006f20

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockPickup(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434623d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockPickup_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434623d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockPickup_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__RockThrow1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow1 (const MethodInfo* method);
// 0x182006fc0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434623e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockThrow1_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434623e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockThrow1_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__RockThrow2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow2 (const MethodInfo* method);
// 0x182007060

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434623f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockThrow2_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_18434623f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockThrow2_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Decapitate
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Decapitate (const MethodInfo* method);
// 0x182003690

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Decapitate(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346240 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Decapitate_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_184346240 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Decapitate_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanSoundEnum_Bindings___cctor (const MethodInfo* method);
// 0x18200b0a0

void CustomLogic_CustomLogicTitanSoundEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346241 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt2");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff2");
    il2cpp_codegen_initialize_runtime_metadata(&"Swing3");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff4");
    il2cpp_codegen_initialize_runtime_metadata(&"DeathNoFall");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep1");
    il2cpp_codegen_initialize_runtime_metadata(&"RockThrow2");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff1");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt1");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanJump");
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh2");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt3");
    il2cpp_codegen_initialize_runtime_metadata(&"Bite1");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff6");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt4");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt5");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep3");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt2");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt6");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt10");
    il2cpp_codegen_initialize_runtime_metadata(&"Swing1");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt4");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt8");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff5");
    il2cpp_codegen_initialize_runtime_metadata(&"Hit");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt1");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt6");
    il2cpp_codegen_initialize_runtime_metadata(&"Bite2");
    il2cpp_codegen_initialize_runtime_metadata(&"Decapitate");
    il2cpp_codegen_initialize_runtime_metadata(&"Swing2");
    il2cpp_codegen_initialize_runtime_metadata(&"DeathFall");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep2");
    il2cpp_codegen_initialize_runtime_metadata(&"RockPickup");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt5");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt7");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt9");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar2");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt8");
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh1");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt3");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt7");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar1");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff3");
    il2cpp_codegen_initialize_runtime_metadata(&"Steam");
    il2cpp_codegen_initialize_runtime_metadata(&"RockThrow1");
    Il2CppMethodInitialized_184346241 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Footstep1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Footstep2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Footstep3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Swing1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Swing2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Swing3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hurt1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hurt2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hurt3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hurt4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hurt5",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hurt6",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hurt7",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hurt8",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt5",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt6",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt7",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt8",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt9",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt10",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hit",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Roar1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Roar2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DeathFall",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DeathNoFall",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Steam",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Bite1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Bite2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Laugh1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Laugh2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Huff1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Huff2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Huff3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Huff4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Huff5",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Huff6",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TitanJump",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RockPickup",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RockThrow1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RockThrow2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Decapitate",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep1>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep1_g____getter_2_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffcf00

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep1_g____getter_2_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346369 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346369 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Footstep1;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep2>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep2_g____getter_3_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffcf50

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep2_g____getter_3_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434636a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434636a = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Footstep2;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep3>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep3_g____getter_4_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffcfa0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep3_g____getter_4_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434636b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434636b = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Footstep3;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Swing1>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing1_g____getter_5_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffeb60

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing1_g____getter_5_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434636c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434636c = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Swing1;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Swing2>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing2_g____getter_6_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffebb0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing2_g____getter_6_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434636d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434636d = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Swing2;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Swing3>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing3_g____getter_7_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffec00

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing3_g____getter_7_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434636e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434636e = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Swing3;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt1>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt1_g____getter_8_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd960

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt1_g____getter_8_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434636f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434636f = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hurt1;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt2>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt2_g____getter_9_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd9b0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt2_g____getter_9_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346370 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346370 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hurt2;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt3>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt3_g____getter_10_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffda00

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt3_g____getter_10_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346371 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346371 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hurt3;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt4>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt4_g____getter_11_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffda50

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt4_g____getter_11_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346372 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346372 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hurt4;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt5>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt5_g____getter_12_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffdaa0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt5_g____getter_12_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346373 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346373 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hurt5;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt6>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt6_g____getter_13_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffdaf0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt6_g____getter_13_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346374 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346374 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hurt6;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt7>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt7_g____getter_14_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffdb40

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt7_g____getter_14_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346375 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346375 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hurt7;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt8>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt8_g____getter_15_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffdb90

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt8_g____getter_15_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346376 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346376 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hurt8;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt1>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt1_g____getter_16_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd330

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt1_g____getter_16_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346377 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346377 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt1;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt2>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt2_g____getter_17_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd380

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt2_g____getter_17_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346378 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346378 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt2;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt3>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt3_g____getter_18_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd3d0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt3_g____getter_18_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346379 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346379 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt3;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt4>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt4_g____getter_19_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd430

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt4_g____getter_19_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434637a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434637a = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt4;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt5>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt5_g____getter_20_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd490

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt5_g____getter_20_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434637b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434637b = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt5;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt6>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt6_g____getter_21_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd4f0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt6_g____getter_21_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434637c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434637c = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt6;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt7>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt7_g____getter_22_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd550

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt7_g____getter_22_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434637d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434637d = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt7;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt8>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt8_g____getter_23_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd5b0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt8_g____getter_23_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434637e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434637e = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt8;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt9>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt9_g____getter_24_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd610

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt9_g____getter_24_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434637f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434637f = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt9;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt10>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt10_g____getter_25_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd2d0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt10_g____getter_25_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346380 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346380 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt10;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hit>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hit_g____getter_26_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd670

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hit_g____getter_26_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346381 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346381 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hit;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Roar1>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Roar1_g____getter_27_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffe500

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Roar1_g____getter_27_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346382 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346382 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Roar1;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Roar2>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Roar2_g____getter_28_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffe560

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Roar2_g____getter_28_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346383 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346383 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Roar2;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__DeathFall>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__DeathFall_g____getter_29_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffca10

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__DeathFall_g____getter_29_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346384 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346384 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->DeathFall;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__DeathNoFall>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__DeathNoFall_g____getter_30_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffca70

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__DeathNoFall_g____getter_30_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346385 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346385 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->DeathNoFall;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Steam>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Steam_g____getter_31_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffea40

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Steam_g____getter_31_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346386 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346386 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Steam;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Bite1>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Bite1_g____getter_32_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffc560

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Bite1_g____getter_32_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346387 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346387 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Bite1;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Bite2>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Bite2_g____getter_33_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffc5c0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Bite2_g____getter_33_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346388 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346388 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Bite2;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Laugh1>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Laugh1_g____getter_34_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffde60

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Laugh1_g____getter_34_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346389 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346389 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Laugh1;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Laugh2>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Laugh2_g____getter_35_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffdec0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Laugh2_g____getter_35_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434638a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434638a = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Laugh2;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff1>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff1_g____getter_36_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd6d0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff1_g____getter_36_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434638b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434638b = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Huff1;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff2>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff2_g____getter_37_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd730

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff2_g____getter_37_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434638c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434638c = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Huff2;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff3>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff3_g____getter_38_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd790

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff3_g____getter_38_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434638d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434638d = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Huff3;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff4>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff4_g____getter_39_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd7f0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff4_g____getter_39_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434638e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434638e = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Huff4;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff5>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff5_g____getter_40_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd850

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff5_g____getter_40_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434638f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434638f = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Huff5;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff6>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff6_g____getter_41_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd8b0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff6_g____getter_41_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346390 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346390 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Huff6;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__TitanJump>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__TitanJump_g____getter_42_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffecd0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__TitanJump_g____getter_42_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346391 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346391 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->TitanJump;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__RockPickup>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockPickup_g____getter_43_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffe5c0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockPickup_g____getter_43_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346392 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346392 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->RockPickup;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__RockThrow1>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockThrow1_g____getter_44_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffe620

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockThrow1_g____getter_44_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346393 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346393 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->RockThrow1;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__RockThrow2>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockThrow2_g____getter_45_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffe680

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockThrow2_g____getter_45_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346394 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346394 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->RockThrow2;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Decapitate>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Decapitate_g____getter_46_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffcad0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Decapitate_g____getter_46_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346395 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346395 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Decapitate;
}


// CustomLogic.CustomLogicTitanSoundEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanSoundEnum___ctor (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x1820152c0

void CustomLogic_CustomLogicTitanSoundEnum___ctor
               (CustomLogic_CustomLogicTitanSoundEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843461e3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Footstep1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Footstep1 (const MethodInfo* method);
// 0x182015520

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Footstep1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461e4 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Footstep1;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Footstep2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Footstep2 (const MethodInfo* method);
// 0x182015570

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Footstep2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461e5 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Footstep2;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Footstep3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Footstep3 (const MethodInfo* method);
// 0x1820155c0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Footstep3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461e6 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Footstep3;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Swing1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Swing1 (const MethodInfo* method);
// 0x1820161d0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Swing1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461e7 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Swing1;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Swing2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Swing2 (const MethodInfo* method);
// 0x182016220

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Swing2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461e8 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Swing2;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Swing3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Swing3 (const MethodInfo* method);
// 0x182016270

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Swing3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461e9 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Swing3;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt1 (const MethodInfo* method);
// 0x182015c50

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461ea = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Hurt1;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt2 (const MethodInfo* method);
// 0x182015ca0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461eb = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Hurt2;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt3 (const MethodInfo* method);
// 0x182015cf0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461ec = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Hurt3;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt4
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt4 (const MethodInfo* method);
// 0x182015d40

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461ed = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Hurt4;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt5
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt5 (const MethodInfo* method);
// 0x182015d90

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt5(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461ee = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Hurt5;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt6
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt6 (const MethodInfo* method);
// 0x182015de0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt6(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461ef = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Hurt6;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt7
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt7 (const MethodInfo* method);
// 0x182015e30

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt7(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461f0 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Hurt7;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt8
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt8 (const MethodInfo* method);
// 0x182015e80

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt8(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461f1 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Hurt8;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt1 (const MethodInfo* method);
// 0x182015670

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461f2 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Grunt1;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt2 (const MethodInfo* method);
// 0x1820156c0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461f3 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Grunt2;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt3 (const MethodInfo* method);
// 0x182015710

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461f4 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Grunt3;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt4
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt4 (const MethodInfo* method);
// 0x182015770

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461f5 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Grunt4;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt5
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt5 (const MethodInfo* method);
// 0x1820157d0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt5(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461f6 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Grunt5;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt6
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt6 (const MethodInfo* method);
// 0x182015830

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt6(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461f7 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Grunt6;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt7
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt7 (const MethodInfo* method);
// 0x182015890

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt7(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461f8 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Grunt7;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt8
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt8 (const MethodInfo* method);
// 0x1820158f0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt8(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461f9 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Grunt8;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt9
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt9 (const MethodInfo* method);
// 0x182015950

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt9(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461fa = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Grunt9;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt10
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt10 (const MethodInfo* method);
// 0x182015610

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt10(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461fb = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Grunt10;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hit
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hit (const MethodInfo* method);
// 0x1820159b0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hit(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461fc = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Hit;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Roar1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Roar1 (const MethodInfo* method);
// 0x182015f90

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Roar1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461fd = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Roar1;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Roar2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Roar2 (const MethodInfo* method);
// 0x182015ff0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Roar2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461fe = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Roar2;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_DeathFall
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_DeathFall (const MethodInfo* method);
// 0x182015400

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_DeathFall(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_1843461ff = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->DeathFall;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_DeathNoFall
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_DeathNoFall (const MethodInfo* method);
// 0x182015460

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_DeathNoFall(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346200 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346200 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->DeathNoFall;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Steam
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Steam (const MethodInfo* method);
// 0x182016170

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Steam(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346201 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346201 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Steam;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Bite1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Bite1 (const MethodInfo* method);
// 0x182015310

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Bite1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346202 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346202 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Bite1;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Bite2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Bite2 (const MethodInfo* method);
// 0x182015370

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Bite2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346203 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346203 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Bite2;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Laugh1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Laugh1 (const MethodInfo* method);
// 0x182015ed0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Laugh1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346204 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346204 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Laugh1;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Laugh2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Laugh2 (const MethodInfo* method);
// 0x182015f30

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Laugh2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346205 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346205 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Laugh2;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff1 (const MethodInfo* method);
// 0x182015a10

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346206 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346206 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Huff1;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff2 (const MethodInfo* method);
// 0x182015a70

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346207 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346207 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Huff2;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff3 (const MethodInfo* method);
// 0x182015ad0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346208 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346208 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Huff3;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff4
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff4 (const MethodInfo* method);
// 0x182015b30

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346209 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346209 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Huff4;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff5
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff5 (const MethodInfo* method);
// 0x182015b90

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff5(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434620a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434620a = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Huff5;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff6
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff6 (const MethodInfo* method);
// 0x182015bf0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff6(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434620b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434620b = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Huff6;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_TitanJump
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_TitanJump (const MethodInfo* method);
// 0x1820162c0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_TitanJump(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434620c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434620c = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->TitanJump;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_RockPickup
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_RockPickup (const MethodInfo* method);
// 0x182016050

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_RockPickup(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434620d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434620d = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->RockPickup;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_RockThrow1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_RockThrow1 (const MethodInfo* method);
// 0x1820160b0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_RockThrow1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434620e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434620e = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->RockThrow1;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_RockThrow2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_RockThrow2 (const MethodInfo* method);
// 0x182016110

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_RockThrow2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434620f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_18434620f = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->RockThrow2;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Decapitate
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Decapitate (const MethodInfo* method);
// 0x1820154c0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Decapitate(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346210 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346210 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  return TypeInfo_Characters_TitanSounds->static_fields->Decapitate;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_ClassName (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x1820153d0

System_String_o *
CustomLogic_CustomLogicTitanSoundEnum__get_ClassName
          (CustomLogic_CustomLogicTitanSoundEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346211 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TitanSoundEnum");
    Il2CppMethodInitialized_184346211 = '\x01';
  }
  return "TitanSoundEnum";
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTitanSoundEnum__get_IsAbstract (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTitanSoundEnum__get_IsAbstract(CustomLogic_CustomLogicTitanSoundEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTitanSoundEnum__get_IsStatic (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTitanSoundEnum__get_IsStatic(CustomLogic_CustomLogicTitanSoundEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTitanSoundEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTitanSoundEnum__get_InheritBaseMembers(CustomLogic_CustomLogicTitanSoundEnum_o* __this, MethodInfo* method)

{
  return true;
}


