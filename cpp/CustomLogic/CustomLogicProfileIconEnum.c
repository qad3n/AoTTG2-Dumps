// Type: CustomLogic.CustomLogicProfileIconEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicProfileIconEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicProfileIconEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicProfileIconEnum_o* CustomLogic_CustomLogicProfileIconEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fefc90

CustomLogic_CustomLogicProfileIconEnum_o *
CustomLogic_CustomLogicProfileIconEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345f8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProfileIconEnum);
    Il2CppMethodInitialized_184345f8e = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum);
      if (Il2CppMethodInitialized_184345f03 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345f03 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicProfileIconEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicProfileIconEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicProfileIconEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fd0200

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicProfileIconEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184345f8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa3");
    il2cpp_codegen_initialize_runtime_metadata(&"Historia2");
    il2cpp_codegen_initialize_runtime_metadata(&"Falco1");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren3");
    il2cpp_codegen_initialize_runtime_metadata(&"Yelena3");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiCrying");
    il2cpp_codegen_initialize_runtime_metadata(&"Kenny2");
    il2cpp_codegen_initialize_runtime_metadata(&"Hitch1");
    il2cpp_codegen_initialize_runtime_metadata(&"Armin1");
    il2cpp_codegen_initialize_runtime_metadata(&"Dakros1");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan6");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi15");
    il2cpp_codegen_initialize_runtime_metadata(&"Ymir104");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan2");
    il2cpp_codegen_initialize_runtime_metadata(&"Historia3");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi8");
    il2cpp_codegen_initialize_runtime_metadata(&"Keith2");
    il2cpp_codegen_initialize_runtime_metadata(&"Gunther1");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan17");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan14");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin3");
    il2cpp_codegen_initialize_runtime_metadata(&"Keith1");
    il2cpp_codegen_initialize_runtime_metadata(&"Sasha1");
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch1");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiSmile");
    il2cpp_codegen_initialize_runtime_metadata(&"Pixis1");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan15");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi4");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie1");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren8");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren5");
    il2cpp_codegen_initialize_runtime_metadata(&"Kenny1");
    il2cpp_codegen_initialize_runtime_metadata(&"Historia7");
    il2cpp_codegen_initialize_runtime_metadata(&"Revolution1");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi3");
    il2cpp_codegen_initialize_runtime_metadata(&"Ricecake1");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan11");
    il2cpp_codegen_initialize_runtime_metadata(&"Pieck2");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan1");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan13");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan16");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan3");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi1");
    il2cpp_codegen_initialize_runtime_metadata(&"Yelena1");
    il2cpp_codegen_initialize_runtime_metadata(&"Historia8");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiThumbsUp");
    il2cpp_codegen_initialize_runtime_metadata(&"Conny1");
    il2cpp_codegen_initialize_runtime_metadata(&"Hannes1");
    il2cpp_codegen_initialize_runtime_metadata(&"Gabi1");
    il2cpp_codegen_initialize_runtime_metadata(&"Zeke2");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren2");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi17");
    il2cpp_codegen_initialize_runtime_metadata(&"Sasha2");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi2");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie3");
    il2cpp_codegen_initialize_runtime_metadata(&"Uri1");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren4");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan5");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie2");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi10");
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa2");
    il2cpp_codegen_initialize_runtime_metadata(&"Hannes2");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiCool");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren7");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin12");
    il2cpp_codegen_initialize_runtime_metadata(&"Keith3");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin2");
    il2cpp_codegen_initialize_runtime_metadata(&"Rico1");
    il2cpp_codegen_initialize_runtime_metadata(&"Frieda1");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi7");
    il2cpp_codegen_initialize_runtime_metadata(&"Nanaba1");
    il2cpp_codegen_initialize_runtime_metadata(&"Jean1");
    il2cpp_codegen_initialize_runtime_metadata(&"Pieck1");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan7");
    il2cpp_codegen_initialize_runtime_metadata(&"Conny2");
    il2cpp_codegen_initialize_runtime_metadata(&"Ilse1");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiShocked");
    il2cpp_codegen_initialize_runtime_metadata(&"Carula1");
    il2cpp_codegen_initialize_runtime_metadata(&"Bertholdt1");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren1");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi13");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan10");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin10");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi11");
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa1");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin11");
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa5");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin9");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren6");
    il2cpp_codegen_initialize_runtime_metadata(&"Reiner1");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie5");
    il2cpp_codegen_initialize_runtime_metadata(&"Acros1");
    il2cpp_codegen_initialize_runtime_metadata(&"Hange1");
    il2cpp_codegen_initialize_runtime_metadata(&"Ian1");
    il2cpp_codegen_initialize_runtime_metadata(&"Historia6");
    il2cpp_codegen_initialize_runtime_metadata(&"Zeke1");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin4");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan4");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi5");
    il2cpp_codegen_initialize_runtime_metadata(&"Frieda2");
    il2cpp_codegen_initialize_runtime_metadata(&"Petra2");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi16");
    il2cpp_codegen_initialize_runtime_metadata(&"Yelena2");
    il2cpp_codegen_initialize_runtime_metadata(&"Mike1");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin6");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin7");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiAngry");
    il2cpp_codegen_initialize_runtime_metadata(&"Sasha3");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiAnnoyed");
    il2cpp_codegen_initialize_runtime_metadata(&"Ymir2");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan9");
    il2cpp_codegen_initialize_runtime_metadata(&"Petra1");
    il2cpp_codegen_initialize_runtime_metadata(&"Fenglee1");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi12");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie4");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi6");
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa6");
    il2cpp_codegen_initialize_runtime_metadata(&"Ymir1");
    il2cpp_codegen_initialize_runtime_metadata(&"Rico2");
    il2cpp_codegen_initialize_runtime_metadata(&"Sasha4");
    il2cpp_codegen_initialize_runtime_metadata(&"Historia5");
    il2cpp_codegen_initialize_runtime_metadata(&"Isabel1");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiLove");
    il2cpp_codegen_initialize_runtime_metadata(&"Historia4");
    il2cpp_codegen_initialize_runtime_metadata(&"Etika1");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin8");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi14");
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa4");
    il2cpp_codegen_initialize_runtime_metadata(&"Nick1");
    il2cpp_codegen_initialize_runtime_metadata(&"Founding1");
    il2cpp_codegen_initialize_runtime_metadata(&"Historia1");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin1");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin5");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan8");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan12");
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa7");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi9");
    Il2CppMethodInitialized_184345f8f = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x7b162818) {
    if (uVar2 < 0x39533ae7) {
      if (uVar2 < 0x1284b408) {
        if (uVar2 < 0x884a44a) {
          if (uVar2 < 0x684a124) {
            if (uVar2 < 0x5849f91) {
              if (uVar2 == 0x41352b8) {
                bVar1 = System_String__op_Equality(name,"Hitch1",(MethodInfo *)0x0);
                if (bVar1) {
                  if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
                  }
                  if (Il2CppMethodInitialized_184345fc4 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&
                               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hitch1_g____getter_54_0
                              );
                    il2cpp_codegen_initialize_runtime_metadata
                              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                    il2cpp_codegen_initialize_runtime_metadata
                              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                    il2cpp_codegen_initialize_runtime_metadata
                              (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                    Il2CppMethodInitialized_184345fc4 = '\x01';
                  }
                  __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                           il2cpp_codegen_object_new
                                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                  pMVar4 = 
                  MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hitch1_g____getter_54_0
                  ;
                  goto label_181fd5976;
                }
              }
              else if (uVar2 == 0x5849f90) {
                bVar1 = System_String__op_Equality(name,"Eren5",(MethodInfo *)0x0);
                if (bVar1) {
                  if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
                  }
                  if (Il2CppMethodInitialized_184345fa0 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&
                               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren5_g____getter_18_0
                              );
                    il2cpp_codegen_initialize_runtime_metadata
                              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                    il2cpp_codegen_initialize_runtime_metadata
                              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                    il2cpp_codegen_initialize_runtime_metadata
                              (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                    Il2CppMethodInitialized_184345fa0 = '\x01';
                  }
                  __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                           il2cpp_codegen_object_new
                                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                  pMVar4 = 
                  MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren5_g____getter_18_0
                  ;
                  goto label_181fd5976;
                }
              }
            }
            else if (uVar2 == 0x67311b0) {
              bVar1 = System_String__op_Equality(name,"Levi7",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
                }
                if (Il2CppMethodInitialized_184345fd4 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi7_g____getter_70_0
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                  Il2CppMethodInitialized_184345fd4 = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi7_g____getter_70_0
                ;
                goto label_181fd5976;
              }
            }
            else if (uVar2 == 0x684a123) {
              bVar1 = System_String__op_Equality(name,"Eren4",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
                }
                if (Il2CppMethodInitialized_184345f9f == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren4_g____getter_17_0
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                  Il2CppMethodInitialized_184345f9f = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren4_g____getter_17_0
                ;
                goto label_181fd5976;
              }
            }
          }
          else if (uVar2 < 0x784a2b7) {
            if (uVar2 == 0x7731343) {
              bVar1 = System_String__op_Equality(name,"Levi6",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
                }
                if (Il2CppMethodInitialized_184345fd3 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi6_g____getter_69_0
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                  Il2CppMethodInitialized_184345fd3 = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi6_g____getter_69_0
                ;
                goto label_181fd5976;
              }
            }
            else if (uVar2 == 0x784a2b6) {
              bVar1 = System_String__op_Equality(name,"Eren7",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
                }
                if (Il2CppMethodInitialized_184345fa2 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren7_g____getter_20_0
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                  Il2CppMethodInitialized_184345fa2 = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren7_g____getter_20_0
                ;
                goto label_181fd5976;
              }
            }
          }
          else if (uVar2 == 0x87314d6) {
            bVar1 = System_String__op_Equality(name,"Levi5",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345fd2 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi5_g____getter_68_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345fd2 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi5_g____getter_68_0
              ;
              goto label_181fd5976;
            }
          }
          else if (uVar2 == 0x884a449) {
            bVar1 = System_String__op_Equality(name,"Eren6",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345fa1 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren6_g____getter_19_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345fa1 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren6_g____getter_19_0
              ;
              goto label_181fd5976;
            }
          }
          goto label_181fd59b8;
        }
        if (uVar2 < 0xb731990) {
          if (uVar2 < 0x984a5dd) {
            if (uVar2 == 0x9731669) {
              bVar1 = System_String__op_Equality(name,"Levi4",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
                }
                if (Il2CppMethodInitialized_184345fd1 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi4_g____getter_67_0
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                  Il2CppMethodInitialized_184345fd1 = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi4_g____getter_67_0
                ;
                goto label_181fd5976;
              }
            }
            else if (uVar2 == 0x984a5dc) {
              bVar1 = System_String__op_Equality(name,"Eren1",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
                }
                if (Il2CppMethodInitialized_184345f9c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren1_g____getter_14_0
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                  Il2CppMethodInitialized_184345f9c = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren1_g____getter_14_0
                ;
                goto label_181fd5976;
              }
            }
          }
          else if (uVar2 == 0xa7317fc) {
            bVar1 = System_String__op_Equality(name,"Levi3",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345fd0 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi3_g____getter_66_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345fd0 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi3_g____getter_66_0
              ;
              goto label_181fd5976;
            }
          }
          else if (uVar2 == 0xb73198f) {
            bVar1 = System_String__op_Equality(name,"Levi2",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345fcf == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi2_g____getter_65_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345fcf = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi2_g____getter_65_0
              ;
              goto label_181fd5976;
            }
          }
        }
        else if (uVar2 < 0xc731b23) {
          if (uVar2 == 0xb84a902) {
            bVar1 = System_String__op_Equality(name,"Eren3",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345f9e == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren3_g____getter_16_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345f9e = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren3_g____getter_16_0
              ;
              goto label_181fd5976;
            }
          }
          else if (uVar2 == 0xc731b22) {
            bVar1 = System_String__op_Equality(name,"Levi1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345fce == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi1_g____getter_64_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345fce = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi1_g____getter_64_0
              ;
              goto label_181fd5976;
            }
          }
        }
        else if (uVar2 == 0xc84aa95) {
          bVar1 = System_String__op_Equality(name,"Eren2",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345f9d == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren2_g____getter_15_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345f9d = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren2_g____getter_15_0
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0xfdec375) {
          bVar1 = System_String__op_Equality(name,"EmojiThumbsUp",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346018 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiThumbsUp_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184346018 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiThumbsUp_g____gett
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0x1284b407) {
          bVar1 = System_String__op_Equality(name,"Eren8",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fa3 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren8_g____getter_21_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fa3 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren8_g____getter_21_0
            ;
            goto label_181fd5976;
          }
        }
        goto label_181fd59b8;
      }
      if (uVar2 < 0x1fc500bf) {
        if (uVar2 < 0x1a9fa9a8) {
          if (uVar2 < 0x1573294e) {
            if (uVar2 == 0x147327ba) {
              bVar1 = System_String__op_Equality(name,"Levi9",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
                }
                if (Il2CppMethodInitialized_184345fd6 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi9_g____getter_72_0
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                  Il2CppMethodInitialized_184345fd6 = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi9_g____getter_72_0
                ;
                goto label_181fd5976;
              }
            }
            else if (uVar2 == 0x1573294d) {
              bVar1 = System_String__op_Equality(name,"Levi8",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
                }
                if (Il2CppMethodInitialized_184345fd5 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi8_g____getter_71_0
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                  Il2CppMethodInitialized_184345fd5 = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi8_g____getter_71_0
                ;
                goto label_181fd5976;
              }
            }
          }
          else if (uVar2 == 0x18826f8a) {
            bVar1 = System_String__op_Equality(name,"Fenglee1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345fb2 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Fenglee1_g____getter_36
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345fb2 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Fenglee1_g____getter_36
              ;
              goto label_181fd5976;
            }
          }
          else if (uVar2 == 0x1a9fa9a7) {
            bVar1 = System_String__op_Equality(name,"Ymir1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345ffb == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ymir1_g____getter_109_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345ffb = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ymir1_g____getter_109_0
              ;
              goto label_181fd5976;
            }
          }
        }
        else if (uVar2 < 0x1dc4fd99) {
          if (uVar2 == 0x1b9fab3a) {
            bVar1 = System_String__op_Equality(name,"Ymir2",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345ffc == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ymir2_g____getter_110_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345ffc = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ymir2_g____getter_110_0
              ;
              goto label_181fd5976;
            }
          }
          else if (uVar2 == 0x1dc4fd98) {
            bVar1 = System_String__op_Equality(name,"Sasha1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345ff3 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha1_g____getter_101
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345ff3 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha1_g____getter_101
              ;
              goto label_181fd5976;
            }
          }
        }
        else if (uVar2 == 0x1e2c72a0) {
          bVar1 = System_String__op_Equality(name,"Conny2",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345f9a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Conny2_g____getter_12_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345f9a = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Conny2_g____getter_12_0
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0x1fc500be) {
          bVar1 = System_String__op_Equality(name,"Sasha3",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ff5 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha3_g____getter_103
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345ff5 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha3_g____getter_103
            ;
            goto label_181fd5976;
          }
        }
        goto label_181fd59b8;
      }
      if (uVar2 < 0x22c50578) {
        if (uVar2 < 0x20c50252) {
          if (uVar2 == 0x2029eb0d) {
            bVar1 = System_String__op_Equality(name,"Armin1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345f96 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Armin1_g____getter_8_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345f96 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Armin1_g____getter_8_0
              ;
              goto label_181fd5976;
            }
          }
          else if (uVar2 == 0x20c50251) {
            bVar1 = System_String__op_Equality(name,"Sasha2",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345ff4 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha2_g____getter_102
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345ff4 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha2_g____getter_102
              ;
              goto label_181fd5976;
            }
          }
        }
        else if (uVar2 == 0x212c7759) {
          bVar1 = System_String__op_Equality(name,"Conny1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345f99 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Conny1_g____getter_11_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345f99 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Conny1_g____getter_11_0
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0x22c50577) {
          bVar1 = System_String__op_Equality(name,"Sasha4",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ff6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha4_g____getter_104
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345ff6 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha4_g____getter_104
            ;
            goto label_181fd5976;
          }
        }
      }
      else if (uVar2 < 0x2a97ab2a) {
        if (uVar2 == 0x242eee2a) {
          bVar1 = System_String__op_Equality(name,"Acros1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345f90 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Acros1_g____getter_2_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345f90 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Acros1_g____getter_2_0
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0x2a97ab29) {
          bVar1 = System_String__op_Equality(name,"EmojiLove",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346015 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiLove_g____getter_1
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184346015 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiLove_g____getter_1
            ;
            goto label_181fd5976;
          }
        }
      }
      else if (uVar2 == 0x34ad47d6) {
        bVar1 = System_String__op_Equality(name,"Ian1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fc5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ian1_g____getter_55_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fc5 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ian1_g____getter_55_0
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0x368ff356) {
        bVar1 = System_String__op_Equality(name,"Carula1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345f98 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Carula1_g____getter_10
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345f98 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Carula1_g____getter_10
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0x39533ae6) {
        bVar1 = System_String__op_Equality(name,"EmojiAngry",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346011 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiAngry_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184346011 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiAngry_g____getter
          ;
          goto label_181fd5976;
        }
      }
      goto label_181fd59b8;
    }
    if (uVar2 < 0x6f9ee39a) {
      if (uVar2 < 0x630d6fb8) {
        if (uVar2 < 0x440b9f9a) {
          if (uVar2 < 0x3e26156b) {
            if (uVar2 == 0x3cdaf13b) {
              bVar1 = System_String__op_Equality(name,"Nanaba1",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
                }
                if (Il2CppMethodInitialized_184345fe7 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Nanaba1_g____getter_89
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                  Il2CppMethodInitialized_184345fe7 = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Nanaba1_g____getter_89
                ;
                goto label_181fd5976;
              }
            }
            else if (uVar2 == 0x3e26156a) {
              bVar1 = System_String__op_Equality(name,"Jean1",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
                }
                if (Il2CppMethodInitialized_184345fc8 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Jean1_g____getter_58_0
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                  Il2CppMethodInitialized_184345fc8 = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Jean1_g____getter_58_0
                ;
                goto label_181fd5976;
              }
            }
          }
          else if (uVar2 == 0x42cdffc4) {
            bVar1 = System_String__op_Equality(name,"Uri1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345ff7 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Uri1_g____getter_105_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345ff7 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Uri1_g____getter_105_0
              ;
              goto label_181fd5976;
            }
          }
          else if (uVar2 == 0x440b9f99) {
            bVar1 = System_String__op_Equality(name,"Pixis1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345fed == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Pixis1_g____getter_95_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345fed = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Pixis1_g____getter_95_0
              ;
              goto label_181fd5976;
            }
          }
        }
        else if (uVar2 < 0x4febbf50) {
          if (uVar2 == 0x4517804f) {
            bVar1 = System_String__op_Equality(name,"Gabi1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345fb6 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Gabi1_g____getter_40_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345fb6 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Gabi1_g____getter_40_0
              ;
              goto label_181fd5976;
            }
          }
          else if (uVar2 == 0x4febbf4f) {
            bVar1 = System_String__op_Equality(name,"Zeke1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345ffe == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Zeke1_g____getter_112_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345ffe = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Zeke1_g____getter_112_0
              ;
              goto label_181fd5976;
            }
          }
        }
        else if (uVar2 == 0x50ebc0e2) {
          bVar1 = System_String__op_Equality(name,"Zeke2",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fff == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Zeke2_g____getter_113_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fff = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Zeke2_g____getter_113_0
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0x630d6fb7) {
          bVar1 = System_String__op_Equality(name,"Petra2",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fea == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Petra2_g____getter_92_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fea = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Petra2_g____getter_92_0
            ;
            goto label_181fd5976;
          }
        }
        goto label_181fd59b8;
      }
      if (uVar2 < 0x67078177) {
        if (uVar2 < 0x640d714b) {
          if (uVar2 == 0x6354a681) {
            bVar1 = System_String__op_Equality(name,"Gunther1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345fb8 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Gunther1_g____getter_42
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345fb8 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Gunther1_g____getter_42
              ;
              goto label_181fd5976;
            }
          }
          else if (uVar2 == 0x640d714a) {
            bVar1 = System_String__op_Equality(name,"Petra1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345fe9 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Petra1_g____getter_91_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345fe9 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Petra1_g____getter_91_0
              ;
              goto label_181fd5976;
            }
          }
        }
        else if (uVar2 == 0x65792cc5) {
          bVar1 = System_String__op_Equality(name,"Falco1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fb1 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Falco1_g____getter_35_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fb1 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Falco1_g____getter_35_0
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0x67078176) {
          bVar1 = System_String__op_Equality(name,"Historia8",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fc3 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia8_g____getter_5
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fc3 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia8_g____getter_5
            ;
            goto label_181fd5976;
          }
        }
      }
      else if (uVar2 < 0x6d078ae9) {
        if (uVar2 == 0x6c9edee0) {
          bVar1 = System_String__op_Equality(name,"Annie2",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345f92 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie2_g____getter_4_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345f92 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie2_g____getter_4_0
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0x6d078ae8) {
          bVar1 = System_String__op_Equality(name,"Historia2",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fbd == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia2_g____getter_4
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fbd = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia2_g____getter_4
            ;
            goto label_181fd5976;
          }
        }
      }
      else if (uVar2 == 0x6d9ee073) {
        bVar1 = System_String__op_Equality(name,"Annie3",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345f93 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie3_g____getter_5_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345f93 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie3_g____getter_5_0
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0x6e078c7b) {
        bVar1 = System_String__op_Equality(name,"Historia3",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fbe == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia3_g____getter_4
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fbe = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia3_g____getter_4
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0x6f9ee399) {
        bVar1 = System_String__op_Equality(name,"Annie1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345f91 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie1_g____getter_3_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345f91 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie1_g____getter_3_0
          ;
          goto label_181fd5976;
        }
      }
      goto label_181fd59b8;
    }
    if (uVar2 < 0x7307945b) {
      if (uVar2 < 0x71659f07) {
        if (uVar2 < 0x70659d74) {
          if (uVar2 == 0x70078fa1) {
            bVar1 = System_String__op_Equality(name,"Historia1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345fbc == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia1_g____getter_4
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345fbc = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia1_g____getter_4
              ;
              goto label_181fd5976;
            }
          }
          else if (uVar2 == 0x70659d73) {
            bVar1 = System_String__op_Equality(name,"Keith1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345fc9 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Keith1_g____getter_59_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345fc9 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Keith1_g____getter_59_0
              ;
              goto label_181fd5976;
            }
          }
        }
        else if (uVar2 == 0x71079134) {
          bVar1 = System_String__op_Equality(name,"Historia6",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fc1 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia6_g____getter_5
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fc1 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia6_g____getter_5
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0x71659f06) {
          bVar1 = System_String__op_Equality(name,"Keith2",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fca == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Keith2_g____getter_60_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fca = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Keith2_g____getter_60_0
            ;
            goto label_181fd5976;
          }
        }
      }
      else if (uVar2 < 0x7265a09a) {
        if (uVar2 == 0x720792c7) {
          bVar1 = System_String__op_Equality(name,"Historia7",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fc2 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia7_g____getter_5
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fc2 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia7_g____getter_5
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0x7265a099) {
          bVar1 = System_String__op_Equality(name,"Keith3",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fcb == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Keith3_g____getter_61_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fcb = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Keith3_g____getter_61_0
            ;
            goto label_181fd5976;
          }
        }
      }
      else if (uVar2 == 0x729ee852) {
        bVar1 = System_String__op_Equality(name,"Annie4",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345f94 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie4_g____getter_6_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345f94 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie4_g____getter_6_0
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0x7307945a) {
        bVar1 = System_String__op_Equality(name,"Historia4",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fbf == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia4_g____getter_4
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fbf = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia4_g____getter_4
          ;
          goto label_181fd5976;
        }
      }
      goto label_181fd59b8;
    }
    if (uVar2 < 0x771621cc) {
      if (uVar2 < 0x740795ee) {
        if (uVar2 == 0x739ee9e5) {
          bVar1 = System_String__op_Equality(name,"Annie5",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345f95 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie5_g____getter_7_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345f95 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie5_g____getter_7_0
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0x740795ed) {
          bVar1 = System_String__op_Equality(name,"Historia5",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fc0 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia5_g____getter_5
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fc0 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia5_g____getter_5
            ;
            goto label_181fd5976;
          }
        }
      }
      else if (uVar2 == 0x76162038) {
        bVar1 = System_String__op_Equality(name,"Titan10",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346009 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan10_g____getter_123
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184346009 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan10_g____getter_123
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0x771621cb) {
        bVar1 = System_String__op_Equality(name,"Titan11",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434600a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan11_g____getter_124
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_18434600a = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan11_g____getter_124
          ;
          goto label_181fd5976;
        }
      }
    }
    else if (uVar2 < 0x78fa7eae) {
      if (uVar2 == 0x7816235e) {
        bVar1 = System_String__op_Equality(name,"Titan12",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434600b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan12_g____getter_125
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_18434600b = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan12_g____getter_125
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0x78fa7ead) {
        bVar1 = System_String__op_Equality(name,"Revolution1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fef == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Revolution1_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fef = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Revolution1_g____getter
          ;
          goto label_181fd5976;
        }
      }
    }
    else if (uVar2 == 0x791624f1) {
      bVar1 = System_String__op_Equality(name,"Titan13",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434600c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan13_g____getter_126
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          Il2CppMethodInitialized_18434600c = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan13_g____getter_126
        ;
        goto label_181fd5976;
      }
    }
    else if (uVar2 == 0x7a162684) {
      bVar1 = System_String__op_Equality(name,"Titan14",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434600d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan14_g____getter_127
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          Il2CppMethodInitialized_18434600d = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan14_g____getter_127
        ;
        goto label_181fd5976;
      }
    }
    else if (uVar2 == 0x7b162817) {
      bVar1 = System_String__op_Equality(name,"Titan15",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434600e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan15_g____getter_128
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          Il2CppMethodInitialized_18434600e = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan15_g____getter_128
        ;
        goto label_181fd5976;
      }
    }
    goto label_181fd59b8;
  }
  if (uVar2 < 0xaeb7207c) {
    if (uVar2 < 0x9e146825) {
      if (uVar2 < 0x92145541) {
        if (uVar2 < 0x8bb9170c) {
          if (uVar2 < 0x7d162b3e) {
            if (uVar2 == 0x7c1629aa) {
              bVar1 = System_String__op_Equality(name,"Titan16",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
                }
                if (Il2CppMethodInitialized_18434600f == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan16_g____getter_129
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                  Il2CppMethodInitialized_18434600f = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan16_g____getter_129
                ;
                goto label_181fd5976;
              }
            }
            else if (uVar2 == 0x7d162b3d) {
              bVar1 = System_String__op_Equality(name,"Titan17",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
                }
                if (Il2CppMethodInitialized_184346010 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan17_g____getter_130
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                  Il2CppMethodInitialized_184346010 = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan17_g____getter_130
                ;
                goto label_181fd5976;
              }
            }
          }
          else if (uVar2 == 0x8b7c3313) {
            bVar1 = System_String__op_Equality(name,"Ymir104",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345ffd == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ymir104_g____getter_111
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345ffd = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ymir104_g____getter_111
              ;
              goto label_181fd5976;
            }
          }
          else if (uVar2 == 0x8bb9170b) {
            bVar1 = System_String__op_Equality(name,"Frieda1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345fb4 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Frieda1_g____getter_38
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345fb4 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Frieda1_g____getter_38
              ;
              goto label_181fd5976;
            }
          }
        }
        else if (uVar2 < 0x8e92c9c0) {
          if (uVar2 == 0x8cb9189e) {
            bVar1 = System_String__op_Equality(name,"Frieda2",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345fb5 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Frieda2_g____getter_39
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345fb5 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Frieda2_g____getter_39
              ;
              goto label_181fd5976;
            }
          }
          else if (uVar2 == 0x8e92c9bf) {
            bVar1 = System_String__op_Equality(name,"Hange1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345fb9 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hange1_g____getter_43_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345fb9 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hange1_g____getter_43_0
              ;
              goto label_181fd5976;
            }
          }
        }
        else if (uVar2 == 0x903e7c78) {
          bVar1 = System_String__op_Equality(name,"Bertholdt1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345f97 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Bertholdt1_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345f97 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Bertholdt1_g____getter
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0x92145540) {
          bVar1 = System_String__op_Equality(name,"Titan9",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346008 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan9_g____getter_122
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184346008 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan9_g____getter_122
            ;
            goto label_181fd5976;
          }
        }
        goto label_181fd59b8;
      }
      if (uVar2 < 0x9b8af8f7) {
        if (uVar2 < 0x9a1461d9) {
          if (uVar2 == 0x931456d3) {
            bVar1 = System_String__op_Equality(name,"Titan8",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184346007 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan8_g____getter_121
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184346007 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan8_g____getter_121
              ;
              goto label_181fd5976;
            }
          }
          else if (uVar2 == 0x9a1461d8) {
            bVar1 = System_String__op_Equality(name,"Titan1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184346000 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan1_g____getter_114
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184346000 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan1_g____getter_114
              ;
              goto label_181fd5976;
            }
          }
        }
        else if (uVar2 == 0x9a8af763) {
          bVar1 = System_String__op_Equality(name,"Erwin12",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345faf == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin12_g____getter_33
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345faf = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin12_g____getter_33
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0x9b8af8f6) {
          bVar1 = System_String__op_Equality(name,"Erwin11",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fae == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin11_g____getter_32
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fae = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin11_g____getter_32
            ;
            goto label_181fd5976;
          }
        }
      }
      else if (uVar2 < 0x9c8afa8a) {
        if (uVar2 == 0x9c1464fe) {
          bVar1 = System_String__op_Equality(name,"Titan3",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346002 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan3_g____getter_116
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184346002 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan3_g____getter_116
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0x9c8afa89) {
          bVar1 = System_String__op_Equality(name,"Erwin10",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fad == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin10_g____getter_31
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fad = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin10_g____getter_31
            ;
            goto label_181fd5976;
          }
        }
      }
      else if (uVar2 == 0x9d146691) {
        bVar1 = System_String__op_Equality(name,"Titan2",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346001 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan2_g____getter_115
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184346001 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan2_g____getter_115
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0x9d676aad) {
        bVar1 = System_String__op_Equality(name,"Nick1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fe8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Nick1_g____getter_90_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fe8 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Nick1_g____getter_90_0
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0x9e146824) {
        bVar1 = System_String__op_Equality(name,"Titan5",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346004 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan5_g____getter_118
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184346004 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan5_g____getter_118
          ;
          goto label_181fd5976;
        }
      }
      goto label_181fd59b8;
    }
    if (uVar2 < 0xa6484808) {
      if (uVar2 < 0xa1146cde) {
        if (uVar2 < 0xa0146b4b) {
          if (uVar2 == 0x9f1469b7) {
            bVar1 = System_String__op_Equality(name,"Titan4",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184346003 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan4_g____getter_117
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184346003 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan4_g____getter_117
              ;
              goto label_181fd5976;
            }
          }
          else if (uVar2 == 0xa0146b4a) {
            bVar1 = System_String__op_Equality(name,"Titan7",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184346006 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan7_g____getter_120
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184346006 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan7_g____getter_120
              ;
              goto label_181fd5976;
            }
          }
        }
        else if (uVar2 == 0xa0546208) {
          bVar1 = System_String__op_Equality(name,"Yelena1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ff8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Yelena1_g____getter_106
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345ff8 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Yelena1_g____getter_106
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0xa1146cdd) {
          bVar1 = System_String__op_Equality(name,"Titan6",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346005 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan6_g____getter_119
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184346005 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan6_g____getter_119
            ;
            goto label_181fd5976;
          }
        }
      }
      else if (uVar2 < 0xa35466c2) {
        if (uVar2 == 0xa254652e) {
          bVar1 = System_String__op_Equality(name,"Yelena3",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ffa == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Yelena3_g____getter_108
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345ffa = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Yelena3_g____getter_108
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0xa35466c1) {
          bVar1 = System_String__op_Equality(name,"Yelena2",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ff9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Yelena2_g____getter_107
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345ff9 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Yelena2_g____getter_107
            ;
            goto label_181fd5976;
          }
        }
      }
      else if (uVar2 == 0xa397caf4) {
        bVar1 = System_String__op_Equality(name,"Rico2",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ff1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Rico2_g____getter_99_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345ff1 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Rico2_g____getter_99_0
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0xa6484807) {
        bVar1 = System_String__op_Equality(name,"EmojiSmile",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346017 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiSmile_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184346017 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiSmile_g____getter
          ;
          goto label_181fd5976;
        }
      }
      goto label_181fd59b8;
    }
    if (uVar2 < 0xaa339bc4) {
      if (uVar2 < 0xa8290299) {
        if (uVar2 == 0xa697cfad) {
          bVar1 = System_String__op_Equality(name,"Rico1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ff0 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Rico1_g____getter_98_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345ff0 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Rico1_g____getter_98_0
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0xa8290298) {
          bVar1 = System_String__op_Equality(name,"Founding1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fb3 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Founding1_g____getter_3
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fb3 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Founding1_g____getter_3
            ;
            goto label_181fd5976;
          }
        }
      }
      else if (uVar2 == 0xa9339a30) {
        bVar1 = System_String__op_Equality(name,"Levi12",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fd9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi12_g____getter_75_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fd9 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi12_g____getter_75_0
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0xaa339bc3) {
        bVar1 = System_String__op_Equality(name,"Levi13",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fda == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi13_g____getter_76_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fda = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi13_g____getter_76_0
          ;
          goto label_181fd5976;
        }
      }
    }
    else if (uVar2 < 0xac339eea) {
      if (uVar2 == 0xab339d56) {
        bVar1 = System_String__op_Equality(name,"Levi10",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fd7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi10_g____getter_73_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fd7 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi10_g____getter_73_0
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0xac339ee9) {
        bVar1 = System_String__op_Equality(name,"Levi11",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fd8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi11_g____getter_74_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fd8 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi11_g____getter_74_0
          ;
          goto label_181fd5976;
        }
      }
    }
    else if (uVar2 == 0xad33a07c) {
      bVar1 = System_String__op_Equality(name,"Levi16",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345fdd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi16_g____getter_79_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          Il2CppMethodInitialized_184345fdd = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi16_g____getter_79_0
        ;
        goto label_181fd5976;
      }
    }
    else if (uVar2 == 0xae33a20f) {
      bVar1 = System_String__op_Equality(name,"Levi17",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345fde == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi17_g____getter_80_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          Il2CppMethodInitialized_184345fde = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi17_g____getter_80_0
        ;
        goto label_181fd5976;
      }
    }
    else if (uVar2 == 0xaeb7207b) {
      bVar1 = System_String__op_Equality(name,"Pieck2",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345fec == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Pieck2_g____getter_94_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          Il2CppMethodInitialized_184345fec = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Pieck2_g____getter_94_0
        ;
        goto label_181fd5976;
      }
    }
    goto label_181fd59b8;
  }
  if (uVar2 < 0xc2517bb8) {
    if (uVar2 < 0xbd5173d9) {
      if (uVar2 < 0xb033a536) {
        if (uVar2 < 0xafb7220f) {
          if (uVar2 == 0xaf33a3a2) {
            bVar1 = System_String__op_Equality(name,"Levi14",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345fdb == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi14_g____getter_77_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345fdb = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi14_g____getter_77_0
              ;
              goto label_181fd5976;
            }
          }
          else if (uVar2 == 0xafb7220e) {
            bVar1 = System_String__op_Equality(name,"Pieck1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345feb == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Pieck1_g____getter_93_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
                Il2CppMethodInitialized_184345feb = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Pieck1_g____getter_93_0
              ;
              goto label_181fd5976;
            }
          }
        }
        else if (uVar2 == 0xafd7fba5) {
          bVar1 = System_String__op_Equality(name,"EmojiCrying",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346014 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiCrying_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184346014 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiCrying_g____getter
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0xb033a535) {
          bVar1 = System_String__op_Equality(name,"Levi15",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fdc == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi15_g____getter_78_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fdc = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi15_g____getter_78_0
            ;
            goto label_181fd5976;
          }
        }
      }
      else if (uVar2 < 0xbc2e1657) {
        if (uVar2 == 0xbb2e14c3) {
          bVar1 = System_String__op_Equality(name,"Erwin1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fa4 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin1_g____getter_22_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fa4 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin1_g____getter_22_0
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0xbc2e1656) {
          bVar1 = System_String__op_Equality(name,"Erwin2",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fa5 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin2_g____getter_23_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fa5 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin2_g____getter_23_0
            ;
            goto label_181fd5976;
          }
        }
      }
      else if (uVar2 == 0xbd2e17e9) {
        bVar1 = System_String__op_Equality(name,"Erwin3",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fa6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin3_g____getter_24_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fa6 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin3_g____getter_24_0
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0xbd5173d8) {
        bVar1 = System_String__op_Equality(name,"Mikasa3",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fe1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa3_g____getter_83
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fe1 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa3_g____getter_83
          ;
          goto label_181fd5976;
        }
      }
      goto label_181fd59b8;
    }
    if (uVar2 < 0xbf5176ff) {
      if (uVar2 < 0xbe51756c) {
        if (uVar2 == 0xbe2e197c) {
          bVar1 = System_String__op_Equality(name,"Erwin4",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fa7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin4_g____getter_25_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fa7 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin4_g____getter_25_0
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0xbe51756b) {
          bVar1 = System_String__op_Equality(name,"Mikasa2",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fe0 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa2_g____getter_82
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fe0 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa2_g____getter_82
            ;
            goto label_181fd5976;
          }
        }
      }
      else if (uVar2 == 0xbf2e1b0f) {
        bVar1 = System_String__op_Equality(name,"Erwin5",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fa8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin5_g____getter_26_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fa8 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin5_g____getter_26_0
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0xbf5176fe) {
        bVar1 = System_String__op_Equality(name,"Mikasa1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fdf == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa1_g____getter_81
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fdf = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa1_g____getter_81
          ;
          goto label_181fd5976;
        }
      }
    }
    else if (uVar2 < 0xc12e1e36) {
      if (uVar2 == 0xc02e1ca2) {
        bVar1 = System_String__op_Equality(name,"Erwin6",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fa9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin6_g____getter_27_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fa9 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin6_g____getter_27_0
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0xc12e1e35) {
        bVar1 = System_String__op_Equality(name,"Erwin7",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345faa == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin7_g____getter_28_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345faa = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin7_g____getter_28_0
          ;
          goto label_181fd5976;
        }
      }
    }
    else if (uVar2 == 0xc1517a24) {
      bVar1 = System_String__op_Equality(name,"Mikasa7",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345fe5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa7_g____getter_87
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          Il2CppMethodInitialized_184345fe5 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa7_g____getter_87
        ;
        goto label_181fd5976;
      }
    }
    else if (uVar2 == 0xc22e1fc8) {
      bVar1 = System_String__op_Equality(name,"Erwin8",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345fab == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin8_g____getter_29_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          Il2CppMethodInitialized_184345fab = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin8_g____getter_29_0
        ;
        goto label_181fd5976;
      }
    }
    else if (uVar2 == 0xc2517bb7) {
      bVar1 = System_String__op_Equality(name,"Mikasa6",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345fe4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa6_g____getter_86
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          Il2CppMethodInitialized_184345fe4 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa6_g____getter_86
        ;
        goto label_181fd5976;
      }
    }
    goto label_181fd59b8;
  }
  if (uVar2 < 0xdef5bc1e) {
    if (uVar2 < 0xc6980c10) {
      if (uVar2 < 0xc3517d4b) {
        if (uVar2 == 0xc32e215b) {
          bVar1 = System_String__op_Equality(name,"Erwin9",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fac == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin9_g____getter_30_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fac = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin9_g____getter_30_0
            ;
            goto label_181fd5976;
          }
        }
        else if (uVar2 == 0xc3517d4a) {
          bVar1 = System_String__op_Equality(name,"Mikasa5",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345fe3 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa5_g____getter_85
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
              Il2CppMethodInitialized_184345fe3 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa5_g____getter_85
            ;
            goto label_181fd5976;
          }
        }
      }
      else if (uVar2 == 0xc4517edd) {
        bVar1 = System_String__op_Equality(name,"Mikasa4",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fe2 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa4_g____getter_84
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fe2 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa4_g____getter_84
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0xc6980c0f) {
        bVar1 = System_String__op_Equality(name,"Reiner1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fee == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Reiner1_g____getter_96
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fee = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Reiner1_g____getter_96
          ;
          goto label_181fd5976;
        }
      }
    }
    else if (uVar2 < 0xc6f962d0) {
      if (uVar2 == 0xc69d53e4) {
        bVar1 = System_String__op_Equality(name,"EmojiCool",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346013 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiCool_g____getter_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184346013 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiCool_g____getter_1
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0xc6f962cf) {
        bVar1 = System_String__op_Equality(name,"Ricecake1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ff2 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ricecake1_g____getter_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345ff2 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ricecake1_g____getter_1
          ;
          goto label_181fd5976;
        }
      }
    }
    else if (uVar2 == 0xcf165a08) {
      bVar1 = System_String__op_Equality(name,"Dakros1",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345f9b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Dakros1_g____getter_13
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          Il2CppMethodInitialized_184345f9b = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Dakros1_g____getter_13
        ;
        goto label_181fd5976;
      }
    }
    else if (uVar2 == 0xd8003066) {
      bVar1 = System_String__op_Equality(name,"Isabel1",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345fc7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Isabel1_g____getter_57
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          Il2CppMethodInitialized_184345fc7 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Isabel1_g____getter_57
        ;
        goto label_181fd5976;
      }
    }
    else if (uVar2 == 0xdef5bc1d) {
      bVar1 = System_String__op_Equality(name,"EmojiAnnoyed",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346012 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiAnnoyed_g____gette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          Il2CppMethodInitialized_184346012 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiAnnoyed_g____gette
        ;
        goto label_181fd5976;
      }
    }
    goto label_181fd59b8;
  }
  if (uVar2 < 0xedd08ab8) {
    if (uVar2 < 0xe7be6933) {
      if (uVar2 == 0xe6be679f) {
        bVar1 = System_String__op_Equality(name,"Kenny1",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fcc == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Kenny1_g____getter_62_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fcc = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Kenny1_g____getter_62_0
          ;
          goto label_181fd5976;
        }
      }
      else if (uVar2 == 0xe7be6932) {
        bVar1 = System_String__op_Equality(name,"Kenny2",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345fcd == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Kenny2_g____getter_63_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
            Il2CppMethodInitialized_184345fcd = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Kenny2_g____getter_63_0
          ;
          goto label_181fd5976;
        }
      }
    }
    else if (uVar2 == 0xed8f7d42) {
      bVar1 = System_String__op_Equality(name,"Mike1",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345fe6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mike1_g____getter_88_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          Il2CppMethodInitialized_184345fe6 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mike1_g____getter_88_0
        ;
        goto label_181fd5976;
      }
    }
    else if (uVar2 == 0xedd08ab7) {
      bVar1 = System_String__op_Equality(name,"Ilse1",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345fc6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ilse1_g____getter_56_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          Il2CppMethodInitialized_184345fc6 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ilse1_g____getter_56_0
        ;
        goto label_181fd5976;
      }
    }
  }
  else if (uVar2 < 0xf6ceb60d) {
    if (uVar2 == 0xf4223650) {
      bVar1 = System_String__op_Equality(name,"Gisketch1",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345fb7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Gisketch1_g____getter_4
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          Il2CppMethodInitialized_184345fb7 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Gisketch1_g____getter_4
        ;
        goto label_181fd5976;
      }
    }
    else if (uVar2 == 0xf6ceb60c) {
      bVar1 = System_String__op_Equality(name,"Hannes2",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345fbb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hannes2_g____getter_45
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
          Il2CppMethodInitialized_184345fbb = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hannes2_g____getter_45
        ;
        goto label_181fd5976;
      }
    }
  }
  else if (uVar2 == 0xf9cebac5) {
    bVar1 = System_String__op_Equality(name,"Hannes1",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345fba == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hannes1_g____getter_44
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        Il2CppMethodInitialized_184345fba = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hannes1_g____getter_44
      ;
label_181fd5976:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum)
      ;
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)
                 MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar2 == 0xfac4be40) {
    bVar1 = System_String__op_Equality(name,"EmojiShocked",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346016 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiShocked_g____gette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        Il2CppMethodInitialized_184346016 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiShocked_g____gette
      ;
      goto label_181fd5976;
    }
  }
  else if (uVar2 == 0xfe575152) {
    bVar1 = System_String__op_Equality(name,"Etika1",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345fb0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Etika1_g____getter_34_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
        Il2CppMethodInitialized_184345fb0 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Etika1_g____getter_34_0
      ;
      goto label_181fd5976;
    }
  }
label_181fd59b8:
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicProfileIconEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Acros1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Acros1 (const MethodInfo* method);
// 0x181fdeca0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Acros1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Acros1_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345f90 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Acros1_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Annie1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie1 (const MethodInfo* method);
// 0x181fdede0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie1_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345f91 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie1_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Annie2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie2 (const MethodInfo* method);
// 0x181fdee80

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie2_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345f92 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie2_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Annie3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie3 (const MethodInfo* method);
// 0x181fdef20

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie3(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie3_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345f93 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie3_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Annie4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie4 (const MethodInfo* method);
// 0x181fdefc0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie4(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie4_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345f94 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie4_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Annie5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie5 (const MethodInfo* method);
// 0x181fdf060

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie5(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie5_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345f95 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie5_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Armin1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Armin1 (const MethodInfo* method);
// 0x181fdf420

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Armin1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Armin1_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345f96 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Armin1_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Bertholdt1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Bertholdt1 (const MethodInfo* method);
// 0x181fe0640

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Bertholdt1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Bertholdt1_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345f97 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Bertholdt1_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Carula1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Carula1 (const MethodInfo* method);
// 0x181fe0a00

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Carula1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Carula1_g____getter_10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345f98 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Carula1_g____getter_10
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Conny1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Conny1 (const MethodInfo* method);
// 0x181fe0e60

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Conny1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Conny1_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345f99 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Conny1_g____getter_11_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Conny2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Conny2 (const MethodInfo* method);
// 0x181fe0f00

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Conny2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Conny2_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345f9a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Conny2_g____getter_12_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Dakros1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Dakros1 (const MethodInfo* method);
// 0x181fe10e0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Dakros1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Dakros1_g____getter_13
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345f9b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Dakros1_g____getter_13
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren1 (const MethodInfo* method);
// 0x181fe1c20

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren1_g____getter_14_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345f9c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren1_g____getter_14_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren2 (const MethodInfo* method);
// 0x181fe1cc0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren2_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345f9d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren2_g____getter_15_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren3 (const MethodInfo* method);
// 0x181fe1d60

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren3(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren3_g____getter_16_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345f9e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren3_g____getter_16_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren4 (const MethodInfo* method);
// 0x181fe1e00

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren4(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren4_g____getter_17_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345f9f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren4_g____getter_17_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren5 (const MethodInfo* method);
// 0x181fe1ea0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren5(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fa0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren5_g____getter_18_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fa0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren5_g____getter_18_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren6 (const MethodInfo* method);
// 0x181fe1f40

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren6(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren6_g____getter_19_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fa1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren6_g____getter_19_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren7 (const MethodInfo* method);
// 0x181fe1fe0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren7(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fa2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren7_g____getter_20_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fa2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren7_g____getter_20_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren8 (const MethodInfo* method);
// 0x181fe2080

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren8(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fa3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren8_g____getter_21_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fa3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren8_g____getter_21_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin1 (const MethodInfo* method);
// 0x181fe24e0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin1_g____getter_22_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fa4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin1_g____getter_22_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin2 (const MethodInfo* method);
// 0x181fe2580

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fa5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin2_g____getter_23_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fa5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin2_g____getter_23_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin3 (const MethodInfo* method);
// 0x181fe2620

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin3(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fa6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin3_g____getter_24_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fa6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin3_g____getter_24_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin4 (const MethodInfo* method);
// 0x181fe26c0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin4(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fa7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin4_g____getter_25_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fa7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin4_g____getter_25_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin5 (const MethodInfo* method);
// 0x181fe2760

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin5(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fa8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin5_g____getter_26_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fa8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin5_g____getter_26_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin6 (const MethodInfo* method);
// 0x181fe2800

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin6(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fa9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin6_g____getter_27_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fa9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin6_g____getter_27_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin7 (const MethodInfo* method);
// 0x181fe28a0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin7(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345faa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin7_g____getter_28_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345faa = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin7_g____getter_28_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin8 (const MethodInfo* method);
// 0x181fe2940

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin8(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin8_g____getter_29_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fab = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin8_g____getter_29_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin9
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin9 (const MethodInfo* method);
// 0x181fe29e0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin9(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin9_g____getter_30_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fac = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin9_g____getter_30_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin10
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin10 (const MethodInfo* method);
// 0x181fe2300

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin10(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin10_g____getter_31
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fad = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin10_g____getter_31
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin11
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin11 (const MethodInfo* method);
// 0x181fe23a0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin11(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin11_g____getter_32
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fae = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin11_g____getter_32
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin12
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin12 (const MethodInfo* method);
// 0x181fe2440

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin12(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345faf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin12_g____getter_33
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345faf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin12_g____getter_33
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Etika1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Etika1 (const MethodInfo* method);
// 0x181fe2b20

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Etika1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Etika1_g____getter_34_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fb0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Etika1_g____getter_34_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Falco1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Falco1 (const MethodInfo* method);
// 0x181fe2bc0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Falco1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Falco1_g____getter_35_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fb1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Falco1_g____getter_35_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Fenglee1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Fenglee1 (const MethodInfo* method);
// 0x181fe2c60

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Fenglee1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Fenglee1_g____getter_36
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fb2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Fenglee1_g____getter_36
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Founding1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Founding1 (const MethodInfo* method);
// 0x181fe2ee0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Founding1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Founding1_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fb3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Founding1_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Frieda1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Frieda1 (const MethodInfo* method);
// 0x181fe3020

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Frieda1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Frieda1_g____getter_38
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fb4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Frieda1_g____getter_38
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Frieda2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Frieda2 (const MethodInfo* method);
// 0x181fe30c0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Frieda2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Frieda2_g____getter_39
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fb5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Frieda2_g____getter_39
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Gabi1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Gabi1 (const MethodInfo* method);
// 0x181fe3160

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Gabi1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Gabi1_g____getter_40_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Gabi1_g____getter_40_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Gisketch1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Gisketch1 (const MethodInfo* method);
// 0x181fe32a0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Gisketch1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Gisketch1_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fb7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Gisketch1_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Gunther1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Gunther1 (const MethodInfo* method);
// 0x181fe33e0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Gunther1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Gunther1_g____getter_42
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fb8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Gunther1_g____getter_42
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Hange1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Hange1 (const MethodInfo* method);
// 0x181fe3480

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Hange1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hange1_g____getter_43_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fb9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hange1_g____getter_43_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Hannes1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Hannes1 (const MethodInfo* method);
// 0x181fe3520

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Hannes1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hannes1_g____getter_44
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fba = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hannes1_g____getter_44
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Hannes2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Hannes2 (const MethodInfo* method);
// 0x181fe35c0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Hannes2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hannes2_g____getter_45
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fbb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hannes2_g____getter_45
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia1 (const MethodInfo* method);
// 0x181fe3700

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia1_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fbc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia1_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia2 (const MethodInfo* method);
// 0x181fe37a0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia2_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fbd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia2_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia3 (const MethodInfo* method);
// 0x181fe3840

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia3(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia3_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fbe = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia3_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia4 (const MethodInfo* method);
// 0x181fe38e0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia4(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia4_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fbf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia4_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia5 (const MethodInfo* method);
// 0x181fe3980

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia5(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia5_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fc0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia5_g____getter_5
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia6 (const MethodInfo* method);
// 0x181fe3a20

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia6(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia6_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fc1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia6_g____getter_5
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia7 (const MethodInfo* method);
// 0x181fe3ac0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia7(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia7_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fc2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia7_g____getter_5
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia8 (const MethodInfo* method);
// 0x181fe3b60

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia8(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia8_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fc3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia8_g____getter_5
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Hitch1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Hitch1 (const MethodInfo* method);
// 0x181fe3c00

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Hitch1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hitch1_g____getter_54_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fc4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hitch1_g____getter_54_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ian1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ian1 (const MethodInfo* method);
// 0x181fe4100

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ian1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ian1_g____getter_55_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fc5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ian1_g____getter_55_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ilse1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ilse1 (const MethodInfo* method);
// 0x181fe41a0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ilse1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ilse1_g____getter_56_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fc6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ilse1_g____getter_56_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Isabel1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Isabel1 (const MethodInfo* method);
// 0x181fe42e0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Isabel1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Isabel1_g____getter_57
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fc7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Isabel1_g____getter_57
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Jean1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Jean1 (const MethodInfo* method);
// 0x181fe44c0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Jean1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Jean1_g____getter_58_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fc8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Jean1_g____getter_58_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Keith1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Keith1 (const MethodInfo* method);
// 0x181fe4600

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Keith1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Keith1_g____getter_59_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fc9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Keith1_g____getter_59_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Keith2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Keith2 (const MethodInfo* method);
// 0x181fe46a0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Keith2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Keith2_g____getter_60_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fca = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Keith2_g____getter_60_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Keith3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Keith3 (const MethodInfo* method);
// 0x181fe4740

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Keith3(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fcb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Keith3_g____getter_61_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fcb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Keith3_g____getter_61_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Kenny1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Kenny1 (const MethodInfo* method);
// 0x181fe47e0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Kenny1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Kenny1_g____getter_62_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fcc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Kenny1_g____getter_62_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Kenny2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Kenny2 (const MethodInfo* method);
// 0x181fe4880

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Kenny2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Kenny2_g____getter_63_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fcd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Kenny2_g____getter_63_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi1 (const MethodInfo* method);
// 0x181fe4f60

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi1_g____getter_64_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fce = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi1_g____getter_64_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi2 (const MethodInfo* method);
// 0x181fe5000

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fcf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi2_g____getter_65_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fcf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi2_g____getter_65_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi3 (const MethodInfo* method);
// 0x181fe50a0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi3(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi3_g____getter_66_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fd0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi3_g____getter_66_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi4 (const MethodInfo* method);
// 0x181fe5140

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi4(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi4_g____getter_67_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fd1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi4_g____getter_67_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi5 (const MethodInfo* method);
// 0x181fe51e0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi5(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi5_g____getter_68_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fd2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi5_g____getter_68_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi6 (const MethodInfo* method);
// 0x181fe5280

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi6(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi6_g____getter_69_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fd3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi6_g____getter_69_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi7 (const MethodInfo* method);
// 0x181fe5320

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi7(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi7_g____getter_70_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fd4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi7_g____getter_70_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi8 (const MethodInfo* method);
// 0x181fe53c0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi8(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi8_g____getter_71_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fd5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi8_g____getter_71_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi9
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi9 (const MethodInfo* method);
// 0x181fe5460

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi9(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi9_g____getter_72_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fd6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi9_g____getter_72_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi10
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi10 (const MethodInfo* method);
// 0x181fe4a60

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi10(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi10_g____getter_73_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fd7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi10_g____getter_73_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi11
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi11 (const MethodInfo* method);
// 0x181fe4b00

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi11(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi11_g____getter_74_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fd8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi11_g____getter_74_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi12
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi12 (const MethodInfo* method);
// 0x181fe4ba0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi12(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi12_g____getter_75_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fd9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi12_g____getter_75_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi13
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi13 (const MethodInfo* method);
// 0x181fe4c40

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi13(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi13_g____getter_76_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fda = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi13_g____getter_76_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi14
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi14 (const MethodInfo* method);
// 0x181fe4ce0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi14(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi14_g____getter_77_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fdb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi14_g____getter_77_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi15
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi15 (const MethodInfo* method);
// 0x181fe4d80

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi15(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi15_g____getter_78_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fdc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi15_g____getter_78_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi16
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi16 (const MethodInfo* method);
// 0x181fe4e20

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi16(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi16_g____getter_79_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fdd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi16_g____getter_79_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi17
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi17 (const MethodInfo* method);
// 0x181fe4ec0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi17(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi17_g____getter_80_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fde = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi17_g____getter_80_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa1 (const MethodInfo* method);
// 0x181fe5640

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa1_g____getter_81
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fdf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa1_g____getter_81
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa2 (const MethodInfo* method);
// 0x181fe56e0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fe0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa2_g____getter_82
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fe0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa2_g____getter_82
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa3 (const MethodInfo* method);
// 0x181fe5780

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa3(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fe1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa3_g____getter_83
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fe1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa3_g____getter_83
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa4 (const MethodInfo* method);
// 0x181fe5820

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa4(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fe2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa4_g____getter_84
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fe2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa4_g____getter_84
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa5 (const MethodInfo* method);
// 0x181fe58c0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa5(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fe3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa5_g____getter_85
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fe3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa5_g____getter_85
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa6 (const MethodInfo* method);
// 0x181fe5960

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa6(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fe4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa6_g____getter_86
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fe4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa6_g____getter_86
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa7 (const MethodInfo* method);
// 0x181fe5a00

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa7(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fe5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa7_g____getter_87
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fe5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa7_g____getter_87
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mike1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mike1 (const MethodInfo* method);
// 0x181fe5aa0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mike1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fe6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mike1_g____getter_88_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fe6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mike1_g____getter_88_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Nanaba1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Nanaba1 (const MethodInfo* method);
// 0x181fe5c80

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Nanaba1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fe7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Nanaba1_g____getter_89
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fe7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Nanaba1_g____getter_89
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Nick1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Nick1 (const MethodInfo* method);
// 0x181fe5d20

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Nick1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fe8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Nick1_g____getter_90_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fe8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Nick1_g____getter_90_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Petra1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Petra1 (const MethodInfo* method);
// 0x181fe6360

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Petra1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fe9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Petra1_g____getter_91_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fe9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Petra1_g____getter_91_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Petra2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Petra2 (const MethodInfo* method);
// 0x181fe6400

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Petra2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Petra2_g____getter_92_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fea = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Petra2_g____getter_92_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Pieck1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Pieck1 (const MethodInfo* method);
// 0x181fe64a0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Pieck1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345feb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Pieck1_g____getter_93_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345feb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Pieck1_g____getter_93_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Pieck2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Pieck2 (const MethodInfo* method);
// 0x181fe6540

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Pieck2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Pieck2_g____getter_94_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fec = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Pieck2_g____getter_94_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Pixis1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Pixis1 (const MethodInfo* method);
// 0x181fe65e0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Pixis1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Pixis1_g____getter_95_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fed = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Pixis1_g____getter_95_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Reiner1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Reiner1 (const MethodInfo* method);
// 0x181fe67c0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Reiner1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Reiner1_g____getter_96
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fee = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Reiner1_g____getter_96
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Revolution1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Revolution1 (const MethodInfo* method);
// 0x181fe6900

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Revolution1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Revolution1_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fef = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Revolution1_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Rico1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Rico1 (const MethodInfo* method);
// 0x181fe6a40

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Rico1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ff0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Rico1_g____getter_98_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345ff0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Rico1_g____getter_98_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Rico2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Rico2 (const MethodInfo* method);
// 0x181fe6ae0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Rico2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ff1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Rico2_g____getter_99_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345ff1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Rico2_g____getter_99_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ricecake1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ricecake1 (const MethodInfo* method);
// 0x181fe69a0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ricecake1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ff2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ricecake1_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345ff2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ricecake1_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Sasha1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Sasha1 (const MethodInfo* method);
// 0x181fe6d60

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Sasha1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ff3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha1_g____getter_101
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345ff3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha1_g____getter_101
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Sasha2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Sasha2 (const MethodInfo* method);
// 0x181fe6e00

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Sasha2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ff4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha2_g____getter_102
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345ff4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha2_g____getter_102
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Sasha3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Sasha3 (const MethodInfo* method);
// 0x181fe6ea0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Sasha3(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ff5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha3_g____getter_103
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345ff5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha3_g____getter_103
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Sasha4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Sasha4 (const MethodInfo* method);
// 0x181fe6f40

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Sasha4(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ff6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha4_g____getter_104
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345ff6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha4_g____getter_104
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Uri1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Uri1 (const MethodInfo* method);
// 0x181fe8fc0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Uri1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ff7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Uri1_g____getter_105_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345ff7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Uri1_g____getter_105_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Yelena1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Yelena1 (const MethodInfo* method);
// 0x181fe9420

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Yelena1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ff8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Yelena1_g____getter_106
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345ff8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Yelena1_g____getter_106
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Yelena2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Yelena2 (const MethodInfo* method);
// 0x181fe94c0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Yelena2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ff9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Yelena2_g____getter_107
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345ff9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Yelena2_g____getter_107
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Yelena3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Yelena3 (const MethodInfo* method);
// 0x181fe9560

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Yelena3(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ffa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Yelena3_g____getter_108
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345ffa = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Yelena3_g____getter_108
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ymir1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ymir1 (const MethodInfo* method);
// 0x181fe96a0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ymir1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ffb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ymir1_g____getter_109_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345ffb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ymir1_g____getter_109_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ymir2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ymir2 (const MethodInfo* method);
// 0x181fe9740

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ymir2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ffc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ymir2_g____getter_110_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345ffc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ymir2_g____getter_110_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ymir104
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ymir104 (const MethodInfo* method);
// 0x181fe9600

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ymir104(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ffd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ymir104_g____getter_111
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345ffd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ymir104_g____getter_111
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Zeke1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Zeke1 (const MethodInfo* method);
// 0x181fe97e0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Zeke1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ffe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Zeke1_g____getter_112_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345ffe = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Zeke1_g____getter_112_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Zeke2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Zeke2 (const MethodInfo* method);
// 0x181fe9880

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Zeke2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345fff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Zeke2_g____getter_113_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184345fff = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Zeke2_g____getter_113_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan1 (const MethodInfo* method);
// 0x181fe8480

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan1(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan1_g____getter_114
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346000 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan1_g____getter_114
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan2 (const MethodInfo* method);
// 0x181fe8520

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan2(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346001 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan2_g____getter_115
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346001 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan2_g____getter_115
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan3 (const MethodInfo* method);
// 0x181fe85c0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan3(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346002 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan3_g____getter_116
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346002 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan3_g____getter_116
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan4 (const MethodInfo* method);
// 0x181fe8660

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan4(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346003 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan4_g____getter_117
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346003 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan4_g____getter_117
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan5 (const MethodInfo* method);
// 0x181fe8700

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan5(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346004 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan5_g____getter_118
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346004 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan5_g____getter_118
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan6 (const MethodInfo* method);
// 0x181fe87a0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan6(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346005 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan6_g____getter_119
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346005 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan6_g____getter_119
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan7 (const MethodInfo* method);
// 0x181fe8840

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan7(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346006 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan7_g____getter_120
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346006 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan7_g____getter_120
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan8 (const MethodInfo* method);
// 0x181fe88e0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan8(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346007 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan8_g____getter_121
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346007 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan8_g____getter_121
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan9
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan9 (const MethodInfo* method);
// 0x181fe8980

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan9(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan9_g____getter_122
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346008 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan9_g____getter_122
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan10
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan10 (const MethodInfo* method);
// 0x181fe7f80

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan10(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346009 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan10_g____getter_123
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346009 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan10_g____getter_123
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan11
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan11 (const MethodInfo* method);
// 0x181fe8020

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan11(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434600a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan11_g____getter_124
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_18434600a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan11_g____getter_124
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan12
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan12 (const MethodInfo* method);
// 0x181fe80c0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan12(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434600b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan12_g____getter_125
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_18434600b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan12_g____getter_125
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan13
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan13 (const MethodInfo* method);
// 0x181fe8160

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan13(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434600c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan13_g____getter_126
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_18434600c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan13_g____getter_126
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan14
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan14 (const MethodInfo* method);
// 0x181fe8200

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan14(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434600d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan14_g____getter_127
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_18434600d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan14_g____getter_127
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan15
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan15 (const MethodInfo* method);
// 0x181fe82a0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan15(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434600e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan15_g____getter_128
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_18434600e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan15_g____getter_128
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan16
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan16 (const MethodInfo* method);
// 0x181fe8340

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan16(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434600f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan16_g____getter_129
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_18434600f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan16_g____getter_129
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan17
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan17 (const MethodInfo* method);
// 0x181fe83e0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan17(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346010 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan17_g____getter_130
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346010 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan17_g____getter_130
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiAngry
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiAngry (const MethodInfo* method);
// 0x181fe1680

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiAngry(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346011 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiAngry_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346011 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiAngry_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiAnnoyed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiAnnoyed (const MethodInfo* method);
// 0x181fe1720

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiAnnoyed(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346012 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiAnnoyed_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346012 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiAnnoyed_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiCool
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiCool (const MethodInfo* method);
// 0x181fe17c0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiCool(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346013 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiCool_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346013 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiCool_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiCrying
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiCrying (const MethodInfo* method);
// 0x181fe1860

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiCrying(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346014 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiCrying_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346014 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiCrying_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiLove
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiLove (const MethodInfo* method);
// 0x181fe1900

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiLove(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346015 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiLove_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346015 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiLove_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiShocked
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiShocked (const MethodInfo* method);
// 0x181fe19a0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiShocked(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346016 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiShocked_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346016 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiShocked_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiSmile
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiSmile (const MethodInfo* method);
// 0x181fe1a40

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiSmile(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346017 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiSmile_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346017 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiSmile_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiThumbsUp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiThumbsUp (const MethodInfo* method);
// 0x181fe1ae0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiThumbsUp(MethodInfo *method)

{
  System_Func_CustomLogicProfileIconEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346018 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiThumbsUp_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
    Il2CppMethodInitialized_184346018 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProfileIconEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiThumbsUp_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicProfileIconEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fea630

void CustomLogic_CustomLogicProfileIconEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346019 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa3");
    il2cpp_codegen_initialize_runtime_metadata(&"Historia2");
    il2cpp_codegen_initialize_runtime_metadata(&"Falco1");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren3");
    il2cpp_codegen_initialize_runtime_metadata(&"Yelena3");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiCrying");
    il2cpp_codegen_initialize_runtime_metadata(&"Kenny2");
    il2cpp_codegen_initialize_runtime_metadata(&"Hitch1");
    il2cpp_codegen_initialize_runtime_metadata(&"Armin1");
    il2cpp_codegen_initialize_runtime_metadata(&"Dakros1");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan6");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi15");
    il2cpp_codegen_initialize_runtime_metadata(&"Ymir104");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan2");
    il2cpp_codegen_initialize_runtime_metadata(&"Historia3");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi8");
    il2cpp_codegen_initialize_runtime_metadata(&"Keith2");
    il2cpp_codegen_initialize_runtime_metadata(&"Gunther1");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan17");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan14");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin3");
    il2cpp_codegen_initialize_runtime_metadata(&"Keith1");
    il2cpp_codegen_initialize_runtime_metadata(&"Sasha1");
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch1");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiSmile");
    il2cpp_codegen_initialize_runtime_metadata(&"Pixis1");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan15");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi4");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie1");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren8");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren5");
    il2cpp_codegen_initialize_runtime_metadata(&"Kenny1");
    il2cpp_codegen_initialize_runtime_metadata(&"Historia7");
    il2cpp_codegen_initialize_runtime_metadata(&"Revolution1");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi3");
    il2cpp_codegen_initialize_runtime_metadata(&"Ricecake1");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan11");
    il2cpp_codegen_initialize_runtime_metadata(&"Pieck2");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan1");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan13");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan16");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan3");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi1");
    il2cpp_codegen_initialize_runtime_metadata(&"Yelena1");
    il2cpp_codegen_initialize_runtime_metadata(&"Historia8");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiThumbsUp");
    il2cpp_codegen_initialize_runtime_metadata(&"Conny1");
    il2cpp_codegen_initialize_runtime_metadata(&"Hannes1");
    il2cpp_codegen_initialize_runtime_metadata(&"Gabi1");
    il2cpp_codegen_initialize_runtime_metadata(&"Zeke2");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren2");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi17");
    il2cpp_codegen_initialize_runtime_metadata(&"Sasha2");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi2");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie3");
    il2cpp_codegen_initialize_runtime_metadata(&"Uri1");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren4");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan5");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie2");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi10");
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa2");
    il2cpp_codegen_initialize_runtime_metadata(&"Hannes2");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiCool");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren7");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin12");
    il2cpp_codegen_initialize_runtime_metadata(&"Keith3");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin2");
    il2cpp_codegen_initialize_runtime_metadata(&"Rico1");
    il2cpp_codegen_initialize_runtime_metadata(&"Frieda1");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi7");
    il2cpp_codegen_initialize_runtime_metadata(&"Nanaba1");
    il2cpp_codegen_initialize_runtime_metadata(&"Jean1");
    il2cpp_codegen_initialize_runtime_metadata(&"Pieck1");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan7");
    il2cpp_codegen_initialize_runtime_metadata(&"Conny2");
    il2cpp_codegen_initialize_runtime_metadata(&"Ilse1");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiShocked");
    il2cpp_codegen_initialize_runtime_metadata(&"Carula1");
    il2cpp_codegen_initialize_runtime_metadata(&"Bertholdt1");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren1");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi13");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan10");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin10");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi11");
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa1");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin11");
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa5");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin9");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren6");
    il2cpp_codegen_initialize_runtime_metadata(&"Reiner1");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie5");
    il2cpp_codegen_initialize_runtime_metadata(&"Acros1");
    il2cpp_codegen_initialize_runtime_metadata(&"Hange1");
    il2cpp_codegen_initialize_runtime_metadata(&"Ian1");
    il2cpp_codegen_initialize_runtime_metadata(&"Historia6");
    il2cpp_codegen_initialize_runtime_metadata(&"Zeke1");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin4");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan4");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi5");
    il2cpp_codegen_initialize_runtime_metadata(&"Frieda2");
    il2cpp_codegen_initialize_runtime_metadata(&"Petra2");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi16");
    il2cpp_codegen_initialize_runtime_metadata(&"Yelena2");
    il2cpp_codegen_initialize_runtime_metadata(&"Mike1");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin6");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin7");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiAngry");
    il2cpp_codegen_initialize_runtime_metadata(&"Sasha3");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiAnnoyed");
    il2cpp_codegen_initialize_runtime_metadata(&"Ymir2");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan9");
    il2cpp_codegen_initialize_runtime_metadata(&"Petra1");
    il2cpp_codegen_initialize_runtime_metadata(&"Fenglee1");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi12");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie4");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi6");
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa6");
    il2cpp_codegen_initialize_runtime_metadata(&"Ymir1");
    il2cpp_codegen_initialize_runtime_metadata(&"Rico2");
    il2cpp_codegen_initialize_runtime_metadata(&"Sasha4");
    il2cpp_codegen_initialize_runtime_metadata(&"Historia5");
    il2cpp_codegen_initialize_runtime_metadata(&"Isabel1");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiLove");
    il2cpp_codegen_initialize_runtime_metadata(&"Historia4");
    il2cpp_codegen_initialize_runtime_metadata(&"Etika1");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin8");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi14");
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa4");
    il2cpp_codegen_initialize_runtime_metadata(&"Nick1");
    il2cpp_codegen_initialize_runtime_metadata(&"Founding1");
    il2cpp_codegen_initialize_runtime_metadata(&"Historia1");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin1");
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin5");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan8");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan12");
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa7");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi9");
    Il2CppMethodInitialized_184346019 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Acros1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Annie1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Annie2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Annie3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Annie4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Annie5",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Armin1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Bertholdt1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Carula1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Conny1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Conny2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dakros1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Eren1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Eren2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Eren3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Eren4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Eren5",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Eren6",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Eren7",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Eren8",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Erwin1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Erwin2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Erwin3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Erwin4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Erwin5",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Erwin6",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Erwin7",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Erwin8",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Erwin9",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Erwin10",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Erwin11",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Erwin12",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Etika1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Falco1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Fenglee1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Founding1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Frieda1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Frieda2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Gabi1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Gisketch1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Gunther1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hange1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hannes1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hannes2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Historia1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Historia2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Historia3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Historia4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Historia5",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Historia6",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Historia7",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Historia8",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hitch1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Ian1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Ilse1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Isabel1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jean1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Keith1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Keith2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Keith3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Kenny1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Kenny2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Levi1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Levi2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Levi3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Levi4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Levi5",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Levi6",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Levi7",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Levi8",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Levi9",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Levi10",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Levi11",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Levi12",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Levi13",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Levi14",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Levi15",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Levi16",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Levi17",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Mikasa1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Mikasa2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Mikasa3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Mikasa4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Mikasa5",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Mikasa6",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Mikasa7",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Mike1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Nanaba1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Nick1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Petra1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Petra2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Pieck1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Pieck2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Pixis1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Reiner1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Revolution1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rico1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rico2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Ricecake1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Sasha1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Sasha2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Sasha3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Sasha4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Uri1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Yelena1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Yelena2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Yelena3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Ymir1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Ymir2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Ymir104",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Zeke1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Zeke2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan5",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan6",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan7",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan8",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan9",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan10",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan11",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan12",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan13",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan14",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan15",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan16",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan17",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmojiAngry",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmojiAnnoyed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmojiCool",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmojiCrying",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmojiLove",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmojiShocked",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmojiSmile",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmojiThumbsUp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Acros1>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Acros1_g____getter_2_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdac50

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Acros1_g____getter_2_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Acros1");
    Il2CppMethodInitialized_184345f04 = '\x01';
  }
  return "Acros1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Annie1>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Annie1_g____getter_3_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdacd0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Annie1_g____getter_3_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Annie1");
    Il2CppMethodInitialized_184345f05 = '\x01';
  }
  return "Annie1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Annie2>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Annie2_g____getter_4_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdad00

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Annie2_g____getter_4_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Annie2");
    Il2CppMethodInitialized_184345f06 = '\x01';
  }
  return "Annie2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Annie3>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Annie3_g____getter_5_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdad30

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Annie3_g____getter_5_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Annie3");
    Il2CppMethodInitialized_184345f07 = '\x01';
  }
  return "Annie3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Annie4>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Annie4_g____getter_6_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdad60

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Annie4_g____getter_6_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Annie4");
    Il2CppMethodInitialized_184345f08 = '\x01';
  }
  return "Annie4";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Annie5>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Annie5_g____getter_7_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdad90

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Annie5_g____getter_7_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Annie5");
    Il2CppMethodInitialized_184345f09 = '\x01';
  }
  return "Annie5";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Armin1>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Armin1_g____getter_8_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdaef0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Armin1_g____getter_8_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armin1");
    Il2CppMethodInitialized_184345f0a = '\x01';
  }
  return "Armin1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Bertholdt1>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Bertholdt1_g____getter_9_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdbd90

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Bertholdt1_g____getter_9_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Bertholdt1");
    Il2CppMethodInitialized_184345f0b = '\x01';
  }
  return "Bertholdt1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Carula1>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Carula1_g____getter_10_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdbef0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Carula1_g____getter_10_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Carula1");
    Il2CppMethodInitialized_184345f0c = '\x01';
  }
  return "Carula1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Conny1>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Conny1_g____getter_11_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc020

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Conny1_g____getter_11_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Conny1");
    Il2CppMethodInitialized_184345f0d = '\x01';
  }
  return "Conny1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Conny2>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Conny2_g____getter_12_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc050

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Conny2_g____getter_12_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Conny2");
    Il2CppMethodInitialized_184345f0e = '\x01';
  }
  return "Conny2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Dakros1>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Dakros1_g____getter_13_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc140

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Dakros1_g____getter_13_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dakros1");
    Il2CppMethodInitialized_184345f0f = '\x01';
  }
  return "Dakros1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren1>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren1_g____getter_14_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc430

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren1_g____getter_14_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren1");
    Il2CppMethodInitialized_184345f10 = '\x01';
  }
  return "Eren1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren2>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren2_g____getter_15_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc460

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren2_g____getter_15_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren2");
    Il2CppMethodInitialized_184345f11 = '\x01';
  }
  return "Eren2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren3>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren3_g____getter_16_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc490

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren3_g____getter_16_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren3");
    Il2CppMethodInitialized_184345f12 = '\x01';
  }
  return "Eren3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren4>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren4_g____getter_17_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc4c0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren4_g____getter_17_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren4");
    Il2CppMethodInitialized_184345f13 = '\x01';
  }
  return "Eren4";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren5>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren5_g____getter_18_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc4f0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren5_g____getter_18_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren5");
    Il2CppMethodInitialized_184345f14 = '\x01';
  }
  return "Eren5";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren6>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren6_g____getter_19_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc520

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren6_g____getter_19_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren6");
    Il2CppMethodInitialized_184345f15 = '\x01';
  }
  return "Eren6";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren7>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren7_g____getter_20_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc550

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren7_g____getter_20_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren7");
    Il2CppMethodInitialized_184345f16 = '\x01';
  }
  return "Eren7";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren8>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren8_g____getter_21_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc580

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren8_g____getter_21_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren8");
    Il2CppMethodInitialized_184345f17 = '\x01';
  }
  return "Eren8";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin1>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin1_g____getter_22_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc6f0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin1_g____getter_22_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin1");
    Il2CppMethodInitialized_184345f18 = '\x01';
  }
  return "Erwin1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin2>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin2_g____getter_23_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc720

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin2_g____getter_23_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin2");
    Il2CppMethodInitialized_184345f19 = '\x01';
  }
  return "Erwin2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin3>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin3_g____getter_24_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc750

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin3_g____getter_24_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin3");
    Il2CppMethodInitialized_184345f1a = '\x01';
  }
  return "Erwin3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin4>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin4_g____getter_25_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc780

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin4_g____getter_25_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin4");
    Il2CppMethodInitialized_184345f1b = '\x01';
  }
  return "Erwin4";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin5>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin5_g____getter_26_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc7b0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin5_g____getter_26_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin5");
    Il2CppMethodInitialized_184345f1c = '\x01';
  }
  return "Erwin5";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin6>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin6_g____getter_27_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc7e0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin6_g____getter_27_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin6");
    Il2CppMethodInitialized_184345f1d = '\x01';
  }
  return "Erwin6";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin7>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin7_g____getter_28_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc810

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin7_g____getter_28_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin7");
    Il2CppMethodInitialized_184345f1e = '\x01';
  }
  return "Erwin7";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin8>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin8_g____getter_29_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc840

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin8_g____getter_29_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin8");
    Il2CppMethodInitialized_184345f1f = '\x01';
  }
  return "Erwin8";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin9>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin9_g____getter_30_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc870

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin9_g____getter_30_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin9");
    Il2CppMethodInitialized_184345f20 = '\x01';
  }
  return "Erwin9";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin10>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin10_g____getter_31_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc660

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin10_g____getter_31_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin10");
    Il2CppMethodInitialized_184345f21 = '\x01';
  }
  return "Erwin10";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin11>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin11_g____getter_32_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc690

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin11_g____getter_32_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin11");
    Il2CppMethodInitialized_184345f22 = '\x01';
  }
  return "Erwin11";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin12>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin12_g____getter_33_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc6c0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin12_g____getter_33_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin12");
    Il2CppMethodInitialized_184345f23 = '\x01';
  }
  return "Erwin12";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Etika1>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Etika1_g____getter_34_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc8d0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Etika1_g____getter_34_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Etika1");
    Il2CppMethodInitialized_184345f24 = '\x01';
  }
  return "Etika1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Falco1>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Falco1_g____getter_35_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc900

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Falco1_g____getter_35_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Falco1");
    Il2CppMethodInitialized_184345f25 = '\x01';
  }
  return "Falco1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Fenglee1>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Fenglee1_g____getter_36_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc930

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Fenglee1_g____getter_36_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Fenglee1");
    Il2CppMethodInitialized_184345f26 = '\x01';
  }
  return "Fenglee1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Founding1>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Founding1_g____getter_37_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc9b0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Founding1_g____getter_37_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Founding1");
    Il2CppMethodInitialized_184345f27 = '\x01';
  }
  return "Founding1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Frieda1>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Frieda1_g____getter_38_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdca10

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Frieda1_g____getter_38_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Frieda1");
    Il2CppMethodInitialized_184345f28 = '\x01';
  }
  return "Frieda1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Frieda2>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Frieda2_g____getter_39_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdca40

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Frieda2_g____getter_39_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Frieda2");
    Il2CppMethodInitialized_184345f29 = '\x01';
  }
  return "Frieda2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Gabi1>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Gabi1_g____getter_40_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdca70

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Gabi1_g____getter_40_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Gabi1");
    Il2CppMethodInitialized_184345f2a = '\x01';
  }
  return "Gabi1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Gisketch1>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Gisketch1_g____getter_41_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdcad0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Gisketch1_g____getter_41_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch1");
    Il2CppMethodInitialized_184345f2b = '\x01';
  }
  return "Gisketch1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Gunther1>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Gunther1_g____getter_42_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdcb30

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Gunther1_g____getter_42_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Gunther1");
    Il2CppMethodInitialized_184345f2c = '\x01';
  }
  return "Gunther1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Hange1>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Hange1_g____getter_43_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdcb60

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Hange1_g____getter_43_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Hange1");
    Il2CppMethodInitialized_184345f2d = '\x01';
  }
  return "Hange1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Hannes1>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Hannes1_g____getter_44_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdcb90

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Hannes1_g____getter_44_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Hannes1");
    Il2CppMethodInitialized_184345f2e = '\x01';
  }
  return "Hannes1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Hannes2>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Hannes2_g____getter_45_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdcbc0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Hannes2_g____getter_45_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Hannes2");
    Il2CppMethodInitialized_184345f2f = '\x01';
  }
  return "Hannes2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia1>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia1_g____getter_46_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdcbf0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia1_g____getter_46_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Historia1");
    Il2CppMethodInitialized_184345f30 = '\x01';
  }
  return "Historia1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia2>g____getter|47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia2_g____getter_47_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdcc20

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia2_g____getter_47_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Historia2");
    Il2CppMethodInitialized_184345f31 = '\x01';
  }
  return "Historia2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia3>g____getter|48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia3_g____getter_48_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdcc50

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia3_g____getter_48_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Historia3");
    Il2CppMethodInitialized_184345f32 = '\x01';
  }
  return "Historia3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia4>g____getter|49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia4_g____getter_49_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdcc80

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia4_g____getter_49_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Historia4");
    Il2CppMethodInitialized_184345f33 = '\x01';
  }
  return "Historia4";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia5>g____getter|50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia5_g____getter_50_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdccb0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia5_g____getter_50_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Historia5");
    Il2CppMethodInitialized_184345f34 = '\x01';
  }
  return "Historia5";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia6>g____getter|51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia6_g____getter_51_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdcce0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia6_g____getter_51_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Historia6");
    Il2CppMethodInitialized_184345f35 = '\x01';
  }
  return "Historia6";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia7>g____getter|52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia7_g____getter_52_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdcd10

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia7_g____getter_52_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Historia7");
    Il2CppMethodInitialized_184345f36 = '\x01';
  }
  return "Historia7";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia8>g____getter|53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia8_g____getter_53_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdcd40

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia8_g____getter_53_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Historia8");
    Il2CppMethodInitialized_184345f37 = '\x01';
  }
  return "Historia8";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Hitch1>g____getter|54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Hitch1_g____getter_54_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdcd70

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Hitch1_g____getter_54_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Hitch1");
    Il2CppMethodInitialized_184345f38 = '\x01';
  }
  return "Hitch1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ian1>g____getter|55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ian1_g____getter_55_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd0a0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ian1_g____getter_55_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Ian1");
    Il2CppMethodInitialized_184345f39 = '\x01';
  }
  return "Ian1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ilse1>g____getter|56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ilse1_g____getter_56_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd0d0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ilse1_g____getter_56_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Ilse1");
    Il2CppMethodInitialized_184345f3a = '\x01';
  }
  return "Ilse1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Isabel1>g____getter|57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Isabel1_g____getter_57_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd130

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Isabel1_g____getter_57_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Isabel1");
    Il2CppMethodInitialized_184345f3b = '\x01';
  }
  return "Isabel1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Jean1>g____getter|58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Jean1_g____getter_58_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd1c0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Jean1_g____getter_58_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Jean1");
    Il2CppMethodInitialized_184345f3c = '\x01';
  }
  return "Jean1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Keith1>g____getter|59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Keith1_g____getter_59_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd280

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Keith1_g____getter_59_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Keith1");
    Il2CppMethodInitialized_184345f3d = '\x01';
  }
  return "Keith1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Keith2>g____getter|60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Keith2_g____getter_60_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd2b0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Keith2_g____getter_60_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Keith2");
    Il2CppMethodInitialized_184345f3e = '\x01';
  }
  return "Keith2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Keith3>g____getter|61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Keith3_g____getter_61_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd2e0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Keith3_g____getter_61_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Keith3");
    Il2CppMethodInitialized_184345f3f = '\x01';
  }
  return "Keith3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Kenny1>g____getter|62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Kenny1_g____getter_62_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd310

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Kenny1_g____getter_62_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Kenny1");
    Il2CppMethodInitialized_184345f40 = '\x01';
  }
  return "Kenny1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Kenny2>g____getter|63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Kenny2_g____getter_63_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd340

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Kenny2_g____getter_63_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Kenny2");
    Il2CppMethodInitialized_184345f41 = '\x01';
  }
  return "Kenny2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi1>g____getter|64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi1_g____getter_64_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd5b0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi1_g____getter_64_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi1");
    Il2CppMethodInitialized_184345f42 = '\x01';
  }
  return "Levi1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi2>g____getter|65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi2_g____getter_65_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd5e0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi2_g____getter_65_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi2");
    Il2CppMethodInitialized_184345f43 = '\x01';
  }
  return "Levi2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi3>g____getter|66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi3_g____getter_66_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd610

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi3_g____getter_66_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi3");
    Il2CppMethodInitialized_184345f44 = '\x01';
  }
  return "Levi3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi4>g____getter|67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi4_g____getter_67_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd640

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi4_g____getter_67_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi4");
    Il2CppMethodInitialized_184345f45 = '\x01';
  }
  return "Levi4";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi5>g____getter|68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi5_g____getter_68_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd670

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi5_g____getter_68_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi5");
    Il2CppMethodInitialized_184345f46 = '\x01';
  }
  return "Levi5";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi6>g____getter|69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi6_g____getter_69_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd6a0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi6_g____getter_69_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi6");
    Il2CppMethodInitialized_184345f47 = '\x01';
  }
  return "Levi6";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi7>g____getter|70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi7_g____getter_70_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd6d0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi7_g____getter_70_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi7");
    Il2CppMethodInitialized_184345f48 = '\x01';
  }
  return "Levi7";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi8>g____getter|71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi8_g____getter_71_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd700

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi8_g____getter_71_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi8");
    Il2CppMethodInitialized_184345f49 = '\x01';
  }
  return "Levi8";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi9>g____getter|72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi9_g____getter_72_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd730

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi9_g____getter_72_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi9");
    Il2CppMethodInitialized_184345f4a = '\x01';
  }
  return "Levi9";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi10>g____getter|73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi10_g____getter_73_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd430

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi10_g____getter_73_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi10");
    Il2CppMethodInitialized_184345f4b = '\x01';
  }
  return "Levi10";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi11>g____getter|74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi11_g____getter_74_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd460

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi11_g____getter_74_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi11");
    Il2CppMethodInitialized_184345f4c = '\x01';
  }
  return "Levi11";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi12>g____getter|75_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi12_g____getter_75_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd490

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi12_g____getter_75_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi12");
    Il2CppMethodInitialized_184345f4d = '\x01';
  }
  return "Levi12";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi13>g____getter|76_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi13_g____getter_76_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd4c0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi13_g____getter_76_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi13");
    Il2CppMethodInitialized_184345f4e = '\x01';
  }
  return "Levi13";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi14>g____getter|77_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi14_g____getter_77_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd4f0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi14_g____getter_77_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi14");
    Il2CppMethodInitialized_184345f4f = '\x01';
  }
  return "Levi14";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi15>g____getter|78_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi15_g____getter_78_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd520

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi15_g____getter_78_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi15");
    Il2CppMethodInitialized_184345f50 = '\x01';
  }
  return "Levi15";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi16>g____getter|79_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi16_g____getter_79_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd550

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi16_g____getter_79_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi16");
    Il2CppMethodInitialized_184345f51 = '\x01';
  }
  return "Levi16";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi17>g____getter|80_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi17_g____getter_80_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd580

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi17_g____getter_80_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi17");
    Il2CppMethodInitialized_184345f52 = '\x01';
  }
  return "Levi17";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa1>g____getter|81_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa1_g____getter_81_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd760

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa1_g____getter_81_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa1");
    Il2CppMethodInitialized_184345f53 = '\x01';
  }
  return "Mikasa1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa2>g____getter|82_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa2_g____getter_82_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd790

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa2_g____getter_82_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa2");
    Il2CppMethodInitialized_184345f54 = '\x01';
  }
  return "Mikasa2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa3>g____getter|83_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa3_g____getter_83_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd7c0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa3_g____getter_83_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa3");
    Il2CppMethodInitialized_184345f55 = '\x01';
  }
  return "Mikasa3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa4>g____getter|84_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa4_g____getter_84_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd7f0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa4_g____getter_84_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa4");
    Il2CppMethodInitialized_184345f56 = '\x01';
  }
  return "Mikasa4";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa5>g____getter|85_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa5_g____getter_85_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd820

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa5_g____getter_85_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa5");
    Il2CppMethodInitialized_184345f57 = '\x01';
  }
  return "Mikasa5";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa6>g____getter|86_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa6_g____getter_86_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd850

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa6_g____getter_86_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa6");
    Il2CppMethodInitialized_184345f58 = '\x01';
  }
  return "Mikasa6";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa7>g____getter|87_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa7_g____getter_87_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd880

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa7_g____getter_87_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa7");
    Il2CppMethodInitialized_184345f59 = '\x01';
  }
  return "Mikasa7";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mike1>g____getter|88_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mike1_g____getter_88_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd8b0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mike1_g____getter_88_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mike1");
    Il2CppMethodInitialized_184345f5a = '\x01';
  }
  return "Mike1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Nanaba1>g____getter|89_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Nanaba1_g____getter_89_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd8e0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Nanaba1_g____getter_89_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Nanaba1");
    Il2CppMethodInitialized_184345f5b = '\x01';
  }
  return "Nanaba1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Nick1>g____getter|90_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Nick1_g____getter_90_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdd910

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Nick1_g____getter_90_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Nick1");
    Il2CppMethodInitialized_184345f5c = '\x01';
  }
  return "Nick1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Petra1>g____getter|91_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Petra1_g____getter_91_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fddc40

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Petra1_g____getter_91_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Petra1");
    Il2CppMethodInitialized_184345f5d = '\x01';
  }
  return "Petra1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Petra2>g____getter|92_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Petra2_g____getter_92_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fddc70

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Petra2_g____getter_92_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Petra2");
    Il2CppMethodInitialized_184345f5e = '\x01';
  }
  return "Petra2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Pieck1>g____getter|93_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Pieck1_g____getter_93_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fddca0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Pieck1_g____getter_93_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Pieck1");
    Il2CppMethodInitialized_184345f5f = '\x01';
  }
  return "Pieck1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Pieck2>g____getter|94_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Pieck2_g____getter_94_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fddcd0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Pieck2_g____getter_94_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Pieck2");
    Il2CppMethodInitialized_184345f60 = '\x01';
  }
  return "Pieck2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Pixis1>g____getter|95_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Pixis1_g____getter_95_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fddd00

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Pixis1_g____getter_95_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Pixis1");
    Il2CppMethodInitialized_184345f61 = '\x01';
  }
  return "Pixis1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Reiner1>g____getter|96_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Reiner1_g____getter_96_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fddd90

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Reiner1_g____getter_96_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Reiner1");
    Il2CppMethodInitialized_184345f62 = '\x01';
  }
  return "Reiner1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Revolution1>g____getter|97_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Revolution1_g____getter_97_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdddc0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Revolution1_g____getter_97_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Revolution1");
    Il2CppMethodInitialized_184345f63 = '\x01';
  }
  return "Revolution1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Rico1>g____getter|98_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Rico1_g____getter_98_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdde20

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Rico1_g____getter_98_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Rico1");
    Il2CppMethodInitialized_184345f64 = '\x01';
  }
  return "Rico1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Rico2>g____getter|99_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Rico2_g____getter_99_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdde50

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Rico2_g____getter_99_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Rico2");
    Il2CppMethodInitialized_184345f65 = '\x01';
  }
  return "Rico2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ricecake1>g____getter|100_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ricecake1_g____getter_100_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdddf0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ricecake1_g____getter_100_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Ricecake1");
    Il2CppMethodInitialized_184345f66 = '\x01';
  }
  return "Ricecake1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Sasha1>g____getter|101_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Sasha1_g____getter_101_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fddf50

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Sasha1_g____getter_101_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Sasha1");
    Il2CppMethodInitialized_184345f67 = '\x01';
  }
  return "Sasha1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Sasha2>g____getter|102_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Sasha2_g____getter_102_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fddf80

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Sasha2_g____getter_102_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Sasha2");
    Il2CppMethodInitialized_184345f68 = '\x01';
  }
  return "Sasha2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Sasha3>g____getter|103_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Sasha3_g____getter_103_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fddfb0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Sasha3_g____getter_103_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Sasha3");
    Il2CppMethodInitialized_184345f69 = '\x01';
  }
  return "Sasha3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Sasha4>g____getter|104_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Sasha4_g____getter_104_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fddfe0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Sasha4_g____getter_104_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Sasha4");
    Il2CppMethodInitialized_184345f6a = '\x01';
  }
  return "Sasha4";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Uri1>g____getter|105_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Uri1_g____getter_105_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde990

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Uri1_g____getter_105_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Uri1");
    Il2CppMethodInitialized_184345f6b = '\x01';
  }
  return "Uri1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Yelena1>g____getter|106_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Yelena1_g____getter_106_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdea80

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Yelena1_g____getter_106_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Yelena1");
    Il2CppMethodInitialized_184345f6c = '\x01';
  }
  return "Yelena1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Yelena2>g____getter|107_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Yelena2_g____getter_107_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdeab0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Yelena2_g____getter_107_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Yelena2");
    Il2CppMethodInitialized_184345f6d = '\x01';
  }
  return "Yelena2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Yelena3>g____getter|108_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Yelena3_g____getter_108_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdeae0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Yelena3_g____getter_108_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Yelena3");
    Il2CppMethodInitialized_184345f6e = '\x01';
  }
  return "Yelena3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ymir1>g____getter|109_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ymir1_g____getter_109_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdeb40

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ymir1_g____getter_109_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Ymir1");
    Il2CppMethodInitialized_184345f6f = '\x01';
  }
  return "Ymir1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ymir2>g____getter|110_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ymir2_g____getter_110_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdeb70

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ymir2_g____getter_110_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Ymir2");
    Il2CppMethodInitialized_184345f70 = '\x01';
  }
  return "Ymir2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ymir104>g____getter|111_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ymir104_g____getter_111_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdeb10

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ymir104_g____getter_111_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Ymir104");
    Il2CppMethodInitialized_184345f71 = '\x01';
  }
  return "Ymir104";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Zeke1>g____getter|112_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Zeke1_g____getter_112_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdeba0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Zeke1_g____getter_112_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Zeke1");
    Il2CppMethodInitialized_184345f72 = '\x01';
  }
  return "Zeke1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Zeke2>g____getter|113_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Zeke2_g____getter_113_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdebd0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Zeke2_g____getter_113_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Zeke2");
    Il2CppMethodInitialized_184345f73 = '\x01';
  }
  return "Zeke2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan1>g____getter|114_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan1_g____getter_114_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde630

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan1_g____getter_114_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan1");
    Il2CppMethodInitialized_184345f74 = '\x01';
  }
  return "Titan1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan2>g____getter|115_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan2_g____getter_115_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde660

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan2_g____getter_115_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan2");
    Il2CppMethodInitialized_184345f75 = '\x01';
  }
  return "Titan2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan3>g____getter|116_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan3_g____getter_116_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde690

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan3_g____getter_116_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan3");
    Il2CppMethodInitialized_184345f76 = '\x01';
  }
  return "Titan3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan4>g____getter|117_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan4_g____getter_117_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde6c0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan4_g____getter_117_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan4");
    Il2CppMethodInitialized_184345f77 = '\x01';
  }
  return "Titan4";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan5>g____getter|118_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan5_g____getter_118_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde6f0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan5_g____getter_118_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan5");
    Il2CppMethodInitialized_184345f78 = '\x01';
  }
  return "Titan5";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan6>g____getter|119_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan6_g____getter_119_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde720

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan6_g____getter_119_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan6");
    Il2CppMethodInitialized_184345f79 = '\x01';
  }
  return "Titan6";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan7>g____getter|120_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan7_g____getter_120_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde750

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan7_g____getter_120_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan7");
    Il2CppMethodInitialized_184345f7a = '\x01';
  }
  return "Titan7";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan8>g____getter|121_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan8_g____getter_121_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde780

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan8_g____getter_121_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan8");
    Il2CppMethodInitialized_184345f7b = '\x01';
  }
  return "Titan8";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan9>g____getter|122_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan9_g____getter_122_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde7b0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan9_g____getter_122_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan9");
    Il2CppMethodInitialized_184345f7c = '\x01';
  }
  return "Titan9";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan10>g____getter|123_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan10_g____getter_123_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde4b0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan10_g____getter_123_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan10");
    Il2CppMethodInitialized_184345f7d = '\x01';
  }
  return "Titan10";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan11>g____getter|124_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan11_g____getter_124_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde4e0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan11_g____getter_124_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan11");
    Il2CppMethodInitialized_184345f7e = '\x01';
  }
  return "Titan11";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan12>g____getter|125_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan12_g____getter_125_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde510

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan12_g____getter_125_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan12");
    Il2CppMethodInitialized_184345f7f = '\x01';
  }
  return "Titan12";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan13>g____getter|126_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan13_g____getter_126_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde540

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan13_g____getter_126_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan13");
    Il2CppMethodInitialized_184345f80 = '\x01';
  }
  return "Titan13";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan14>g____getter|127_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan14_g____getter_127_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde570

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan14_g____getter_127_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan14");
    Il2CppMethodInitialized_184345f81 = '\x01';
  }
  return "Titan14";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan15>g____getter|128_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan15_g____getter_128_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde5a0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan15_g____getter_128_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan15");
    Il2CppMethodInitialized_184345f82 = '\x01';
  }
  return "Titan15";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan16>g____getter|129_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan16_g____getter_129_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde5d0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan16_g____getter_129_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan16");
    Il2CppMethodInitialized_184345f83 = '\x01';
  }
  return "Titan16";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan17>g____getter|130_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan17_g____getter_130_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fde600

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan17_g____getter_130_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan17");
    Il2CppMethodInitialized_184345f84 = '\x01';
  }
  return "Titan17";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiAngry>g____getter|131_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiAngry_g____getter_131_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc280

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiAngry_g____getter_131_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiAngry");
    Il2CppMethodInitialized_184345f85 = '\x01';
  }
  return "EmojiAngry";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiAnnoyed>g____getter|132_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiAnnoyed_g____getter_132_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc2b0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiAnnoyed_g____getter_132_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiAnnoyed");
    Il2CppMethodInitialized_184345f86 = '\x01';
  }
  return "EmojiAnnoyed";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiCool>g____getter|133_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiCool_g____getter_133_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc2e0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiCool_g____getter_133_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiCool");
    Il2CppMethodInitialized_184345f87 = '\x01';
  }
  return "EmojiCool";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiCrying>g____getter|134_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiCrying_g____getter_134_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc310

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiCrying_g____getter_134_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiCrying");
    Il2CppMethodInitialized_184345f88 = '\x01';
  }
  return "EmojiCrying";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiLove>g____getter|135_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiLove_g____getter_135_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc340

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiLove_g____getter_135_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiLove");
    Il2CppMethodInitialized_184345f89 = '\x01';
  }
  return "EmojiLove";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiShocked>g____getter|136_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiShocked_g____getter_136_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc370

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiShocked_g____getter_136_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiShocked");
    Il2CppMethodInitialized_184345f8a = '\x01';
  }
  return "EmojiShocked";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiSmile>g____getter|137_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiSmile_g____getter_137_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc3a0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiSmile_g____getter_137_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiSmile");
    Il2CppMethodInitialized_184345f8b = '\x01';
  }
  return "EmojiSmile";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiThumbsUp>g____getter|138_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiThumbsUp_g____getter_138_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x181fdc3d0

Il2CppObject*
CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiThumbsUp_g____getter_138_0(CustomLogic_CustomLogicProfileIconEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345f8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiThumbsUp");
    Il2CppMethodInitialized_184345f8c = '\x01';
  }
  return "EmojiThumbsUp";
}


// CustomLogic.CustomLogicProfileIconEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicProfileIconEnum___ctor (CustomLogic_CustomLogicProfileIconEnum_o* __this, const MethodInfo* method);
// 0x181feec60

void CustomLogic_CustomLogicProfileIconEnum___ctor
               (CustomLogic_CustomLogicProfileIconEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345f03 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Acros1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Acros1 (const MethodInfo* method);
// 0x181fdac50

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Acros1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Acros1");
    Il2CppMethodInitialized_184345f04 = '\x01';
  }
  return "Acros1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Annie1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Annie1 (const MethodInfo* method);
// 0x181fdacd0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Annie1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Annie1");
    Il2CppMethodInitialized_184345f05 = '\x01';
  }
  return "Annie1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Annie2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Annie2 (const MethodInfo* method);
// 0x181fdad00

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Annie2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Annie2");
    Il2CppMethodInitialized_184345f06 = '\x01';
  }
  return "Annie2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Annie3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Annie3 (const MethodInfo* method);
// 0x181fdad30

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Annie3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Annie3");
    Il2CppMethodInitialized_184345f07 = '\x01';
  }
  return "Annie3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Annie4
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Annie4 (const MethodInfo* method);
// 0x181fdad60

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Annie4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Annie4");
    Il2CppMethodInitialized_184345f08 = '\x01';
  }
  return "Annie4";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Annie5
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Annie5 (const MethodInfo* method);
// 0x181fdad90

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Annie5(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Annie5");
    Il2CppMethodInitialized_184345f09 = '\x01';
  }
  return "Annie5";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Armin1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Armin1 (const MethodInfo* method);
// 0x181fdaef0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Armin1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armin1");
    Il2CppMethodInitialized_184345f0a = '\x01';
  }
  return "Armin1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Bertholdt1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Bertholdt1 (const MethodInfo* method);
// 0x181fdbd90

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Bertholdt1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Bertholdt1");
    Il2CppMethodInitialized_184345f0b = '\x01';
  }
  return "Bertholdt1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Carula1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Carula1 (const MethodInfo* method);
// 0x181fdbef0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Carula1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Carula1");
    Il2CppMethodInitialized_184345f0c = '\x01';
  }
  return "Carula1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Conny1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Conny1 (const MethodInfo* method);
// 0x181fdc020

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Conny1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Conny1");
    Il2CppMethodInitialized_184345f0d = '\x01';
  }
  return "Conny1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Conny2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Conny2 (const MethodInfo* method);
// 0x181fdc050

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Conny2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Conny2");
    Il2CppMethodInitialized_184345f0e = '\x01';
  }
  return "Conny2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Dakros1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Dakros1 (const MethodInfo* method);
// 0x181fdc140

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Dakros1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dakros1");
    Il2CppMethodInitialized_184345f0f = '\x01';
  }
  return "Dakros1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Eren1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Eren1 (const MethodInfo* method);
// 0x181fdc430

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Eren1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren1");
    Il2CppMethodInitialized_184345f10 = '\x01';
  }
  return "Eren1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Eren2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Eren2 (const MethodInfo* method);
// 0x181fdc460

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Eren2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren2");
    Il2CppMethodInitialized_184345f11 = '\x01';
  }
  return "Eren2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Eren3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Eren3 (const MethodInfo* method);
// 0x181fdc490

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Eren3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren3");
    Il2CppMethodInitialized_184345f12 = '\x01';
  }
  return "Eren3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Eren4
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Eren4 (const MethodInfo* method);
// 0x181fdc4c0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Eren4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren4");
    Il2CppMethodInitialized_184345f13 = '\x01';
  }
  return "Eren4";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Eren5
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Eren5 (const MethodInfo* method);
// 0x181fdc4f0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Eren5(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren5");
    Il2CppMethodInitialized_184345f14 = '\x01';
  }
  return "Eren5";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Eren6
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Eren6 (const MethodInfo* method);
// 0x181fdc520

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Eren6(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren6");
    Il2CppMethodInitialized_184345f15 = '\x01';
  }
  return "Eren6";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Eren7
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Eren7 (const MethodInfo* method);
// 0x181fdc550

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Eren7(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren7");
    Il2CppMethodInitialized_184345f16 = '\x01';
  }
  return "Eren7";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Eren8
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Eren8 (const MethodInfo* method);
// 0x181fdc580

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Eren8(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren8");
    Il2CppMethodInitialized_184345f17 = '\x01';
  }
  return "Eren8";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin1 (const MethodInfo* method);
// 0x181fdc6f0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin1");
    Il2CppMethodInitialized_184345f18 = '\x01';
  }
  return "Erwin1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin2 (const MethodInfo* method);
// 0x181fdc720

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin2");
    Il2CppMethodInitialized_184345f19 = '\x01';
  }
  return "Erwin2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin3 (const MethodInfo* method);
// 0x181fdc750

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin3");
    Il2CppMethodInitialized_184345f1a = '\x01';
  }
  return "Erwin3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin4
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin4 (const MethodInfo* method);
// 0x181fdc780

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin4");
    Il2CppMethodInitialized_184345f1b = '\x01';
  }
  return "Erwin4";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin5
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin5 (const MethodInfo* method);
// 0x181fdc7b0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin5(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin5");
    Il2CppMethodInitialized_184345f1c = '\x01';
  }
  return "Erwin5";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin6
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin6 (const MethodInfo* method);
// 0x181fdc7e0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin6(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin6");
    Il2CppMethodInitialized_184345f1d = '\x01';
  }
  return "Erwin6";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin7
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin7 (const MethodInfo* method);
// 0x181fdc810

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin7(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin7");
    Il2CppMethodInitialized_184345f1e = '\x01';
  }
  return "Erwin7";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin8
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin8 (const MethodInfo* method);
// 0x181fdc840

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin8(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin8");
    Il2CppMethodInitialized_184345f1f = '\x01';
  }
  return "Erwin8";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin9
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin9 (const MethodInfo* method);
// 0x181fdc870

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin9(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin9");
    Il2CppMethodInitialized_184345f20 = '\x01';
  }
  return "Erwin9";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin10
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin10 (const MethodInfo* method);
// 0x181fdc660

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin10(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin10");
    Il2CppMethodInitialized_184345f21 = '\x01';
  }
  return "Erwin10";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin11
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin11 (const MethodInfo* method);
// 0x181fdc690

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin11(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin11");
    Il2CppMethodInitialized_184345f22 = '\x01';
  }
  return "Erwin11";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin12
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin12 (const MethodInfo* method);
// 0x181fdc6c0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin12(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Erwin12");
    Il2CppMethodInitialized_184345f23 = '\x01';
  }
  return "Erwin12";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Etika1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Etika1 (const MethodInfo* method);
// 0x181fdc8d0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Etika1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Etika1");
    Il2CppMethodInitialized_184345f24 = '\x01';
  }
  return "Etika1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Falco1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Falco1 (const MethodInfo* method);
// 0x181fdc900

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Falco1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Falco1");
    Il2CppMethodInitialized_184345f25 = '\x01';
  }
  return "Falco1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Fenglee1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Fenglee1 (const MethodInfo* method);
// 0x181fdc930

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Fenglee1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Fenglee1");
    Il2CppMethodInitialized_184345f26 = '\x01';
  }
  return "Fenglee1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Founding1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Founding1 (const MethodInfo* method);
// 0x181fdc9b0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Founding1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Founding1");
    Il2CppMethodInitialized_184345f27 = '\x01';
  }
  return "Founding1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Frieda1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Frieda1 (const MethodInfo* method);
// 0x181fdca10

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Frieda1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Frieda1");
    Il2CppMethodInitialized_184345f28 = '\x01';
  }
  return "Frieda1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Frieda2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Frieda2 (const MethodInfo* method);
// 0x181fdca40

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Frieda2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Frieda2");
    Il2CppMethodInitialized_184345f29 = '\x01';
  }
  return "Frieda2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Gabi1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Gabi1 (const MethodInfo* method);
// 0x181fdca70

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Gabi1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Gabi1");
    Il2CppMethodInitialized_184345f2a = '\x01';
  }
  return "Gabi1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Gisketch1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Gisketch1 (const MethodInfo* method);
// 0x181fdcad0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Gisketch1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch1");
    Il2CppMethodInitialized_184345f2b = '\x01';
  }
  return "Gisketch1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Gunther1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Gunther1 (const MethodInfo* method);
// 0x181fdcb30

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Gunther1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Gunther1");
    Il2CppMethodInitialized_184345f2c = '\x01';
  }
  return "Gunther1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Hange1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Hange1 (const MethodInfo* method);
// 0x181fdcb60

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Hange1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Hange1");
    Il2CppMethodInitialized_184345f2d = '\x01';
  }
  return "Hange1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Hannes1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Hannes1 (const MethodInfo* method);
// 0x181fdcb90

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Hannes1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Hannes1");
    Il2CppMethodInitialized_184345f2e = '\x01';
  }
  return "Hannes1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Hannes2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Hannes2 (const MethodInfo* method);
// 0x181fdcbc0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Hannes2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Hannes2");
    Il2CppMethodInitialized_184345f2f = '\x01';
  }
  return "Hannes2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Historia1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Historia1 (const MethodInfo* method);
// 0x181fdcbf0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Historia1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Historia1");
    Il2CppMethodInitialized_184345f30 = '\x01';
  }
  return "Historia1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Historia2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Historia2 (const MethodInfo* method);
// 0x181fdcc20

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Historia2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Historia2");
    Il2CppMethodInitialized_184345f31 = '\x01';
  }
  return "Historia2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Historia3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Historia3 (const MethodInfo* method);
// 0x181fdcc50

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Historia3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Historia3");
    Il2CppMethodInitialized_184345f32 = '\x01';
  }
  return "Historia3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Historia4
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Historia4 (const MethodInfo* method);
// 0x181fdcc80

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Historia4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Historia4");
    Il2CppMethodInitialized_184345f33 = '\x01';
  }
  return "Historia4";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Historia5
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Historia5 (const MethodInfo* method);
// 0x181fdccb0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Historia5(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Historia5");
    Il2CppMethodInitialized_184345f34 = '\x01';
  }
  return "Historia5";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Historia6
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Historia6 (const MethodInfo* method);
// 0x181fdcce0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Historia6(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Historia6");
    Il2CppMethodInitialized_184345f35 = '\x01';
  }
  return "Historia6";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Historia7
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Historia7 (const MethodInfo* method);
// 0x181fdcd10

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Historia7(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Historia7");
    Il2CppMethodInitialized_184345f36 = '\x01';
  }
  return "Historia7";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Historia8
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Historia8 (const MethodInfo* method);
// 0x181fdcd40

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Historia8(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Historia8");
    Il2CppMethodInitialized_184345f37 = '\x01';
  }
  return "Historia8";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Hitch1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Hitch1 (const MethodInfo* method);
// 0x181fdcd70

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Hitch1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Hitch1");
    Il2CppMethodInitialized_184345f38 = '\x01';
  }
  return "Hitch1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Ian1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Ian1 (const MethodInfo* method);
// 0x181fdd0a0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Ian1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Ian1");
    Il2CppMethodInitialized_184345f39 = '\x01';
  }
  return "Ian1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Ilse1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Ilse1 (const MethodInfo* method);
// 0x181fdd0d0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Ilse1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Ilse1");
    Il2CppMethodInitialized_184345f3a = '\x01';
  }
  return "Ilse1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Isabel1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Isabel1 (const MethodInfo* method);
// 0x181fdd130

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Isabel1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Isabel1");
    Il2CppMethodInitialized_184345f3b = '\x01';
  }
  return "Isabel1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Jean1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Jean1 (const MethodInfo* method);
// 0x181fdd1c0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Jean1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Jean1");
    Il2CppMethodInitialized_184345f3c = '\x01';
  }
  return "Jean1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Keith1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Keith1 (const MethodInfo* method);
// 0x181fdd280

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Keith1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Keith1");
    Il2CppMethodInitialized_184345f3d = '\x01';
  }
  return "Keith1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Keith2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Keith2 (const MethodInfo* method);
// 0x181fdd2b0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Keith2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Keith2");
    Il2CppMethodInitialized_184345f3e = '\x01';
  }
  return "Keith2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Keith3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Keith3 (const MethodInfo* method);
// 0x181fdd2e0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Keith3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Keith3");
    Il2CppMethodInitialized_184345f3f = '\x01';
  }
  return "Keith3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Kenny1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Kenny1 (const MethodInfo* method);
// 0x181fdd310

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Kenny1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Kenny1");
    Il2CppMethodInitialized_184345f40 = '\x01';
  }
  return "Kenny1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Kenny2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Kenny2 (const MethodInfo* method);
// 0x181fdd340

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Kenny2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Kenny2");
    Il2CppMethodInitialized_184345f41 = '\x01';
  }
  return "Kenny2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi1 (const MethodInfo* method);
// 0x181fdd5b0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi1");
    Il2CppMethodInitialized_184345f42 = '\x01';
  }
  return "Levi1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi2 (const MethodInfo* method);
// 0x181fdd5e0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi2");
    Il2CppMethodInitialized_184345f43 = '\x01';
  }
  return "Levi2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi3 (const MethodInfo* method);
// 0x181fdd610

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi3");
    Il2CppMethodInitialized_184345f44 = '\x01';
  }
  return "Levi3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi4
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi4 (const MethodInfo* method);
// 0x181fdd640

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi4");
    Il2CppMethodInitialized_184345f45 = '\x01';
  }
  return "Levi4";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi5
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi5 (const MethodInfo* method);
// 0x181fdd670

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi5(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi5");
    Il2CppMethodInitialized_184345f46 = '\x01';
  }
  return "Levi5";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi6
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi6 (const MethodInfo* method);
// 0x181fdd6a0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi6(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi6");
    Il2CppMethodInitialized_184345f47 = '\x01';
  }
  return "Levi6";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi7
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi7 (const MethodInfo* method);
// 0x181fdd6d0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi7(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi7");
    Il2CppMethodInitialized_184345f48 = '\x01';
  }
  return "Levi7";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi8
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi8 (const MethodInfo* method);
// 0x181fdd700

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi8(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi8");
    Il2CppMethodInitialized_184345f49 = '\x01';
  }
  return "Levi8";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi9
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi9 (const MethodInfo* method);
// 0x181fdd730

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi9(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi9");
    Il2CppMethodInitialized_184345f4a = '\x01';
  }
  return "Levi9";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi10
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi10 (const MethodInfo* method);
// 0x181fdd430

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi10(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi10");
    Il2CppMethodInitialized_184345f4b = '\x01';
  }
  return "Levi10";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi11
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi11 (const MethodInfo* method);
// 0x181fdd460

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi11(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi11");
    Il2CppMethodInitialized_184345f4c = '\x01';
  }
  return "Levi11";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi12
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi12 (const MethodInfo* method);
// 0x181fdd490

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi12(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi12");
    Il2CppMethodInitialized_184345f4d = '\x01';
  }
  return "Levi12";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi13
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi13 (const MethodInfo* method);
// 0x181fdd4c0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi13(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi13");
    Il2CppMethodInitialized_184345f4e = '\x01';
  }
  return "Levi13";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi14
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi14 (const MethodInfo* method);
// 0x181fdd4f0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi14(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi14");
    Il2CppMethodInitialized_184345f4f = '\x01';
  }
  return "Levi14";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi15
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi15 (const MethodInfo* method);
// 0x181fdd520

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi15(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi15");
    Il2CppMethodInitialized_184345f50 = '\x01';
  }
  return "Levi15";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi16
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi16 (const MethodInfo* method);
// 0x181fdd550

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi16(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi16");
    Il2CppMethodInitialized_184345f51 = '\x01';
  }
  return "Levi16";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi17
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi17 (const MethodInfo* method);
// 0x181fdd580

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi17(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Levi17");
    Il2CppMethodInitialized_184345f52 = '\x01';
  }
  return "Levi17";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Mikasa1 (const MethodInfo* method);
// 0x181fdd760

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Mikasa1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa1");
    Il2CppMethodInitialized_184345f53 = '\x01';
  }
  return "Mikasa1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Mikasa2 (const MethodInfo* method);
// 0x181fdd790

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Mikasa2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa2");
    Il2CppMethodInitialized_184345f54 = '\x01';
  }
  return "Mikasa2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Mikasa3 (const MethodInfo* method);
// 0x181fdd7c0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Mikasa3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa3");
    Il2CppMethodInitialized_184345f55 = '\x01';
  }
  return "Mikasa3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa4
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Mikasa4 (const MethodInfo* method);
// 0x181fdd7f0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Mikasa4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa4");
    Il2CppMethodInitialized_184345f56 = '\x01';
  }
  return "Mikasa4";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa5
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Mikasa5 (const MethodInfo* method);
// 0x181fdd820

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Mikasa5(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa5");
    Il2CppMethodInitialized_184345f57 = '\x01';
  }
  return "Mikasa5";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa6
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Mikasa6 (const MethodInfo* method);
// 0x181fdd850

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Mikasa6(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa6");
    Il2CppMethodInitialized_184345f58 = '\x01';
  }
  return "Mikasa6";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa7
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Mikasa7 (const MethodInfo* method);
// 0x181fdd880

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Mikasa7(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mikasa7");
    Il2CppMethodInitialized_184345f59 = '\x01';
  }
  return "Mikasa7";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Mike1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Mike1 (const MethodInfo* method);
// 0x181fdd8b0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Mike1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mike1");
    Il2CppMethodInitialized_184345f5a = '\x01';
  }
  return "Mike1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Nanaba1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Nanaba1 (const MethodInfo* method);
// 0x181fdd8e0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Nanaba1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Nanaba1");
    Il2CppMethodInitialized_184345f5b = '\x01';
  }
  return "Nanaba1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Nick1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Nick1 (const MethodInfo* method);
// 0x181fdd910

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Nick1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Nick1");
    Il2CppMethodInitialized_184345f5c = '\x01';
  }
  return "Nick1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Petra1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Petra1 (const MethodInfo* method);
// 0x181fddc40

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Petra1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Petra1");
    Il2CppMethodInitialized_184345f5d = '\x01';
  }
  return "Petra1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Petra2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Petra2 (const MethodInfo* method);
// 0x181fddc70

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Petra2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Petra2");
    Il2CppMethodInitialized_184345f5e = '\x01';
  }
  return "Petra2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Pieck1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Pieck1 (const MethodInfo* method);
// 0x181fddca0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Pieck1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Pieck1");
    Il2CppMethodInitialized_184345f5f = '\x01';
  }
  return "Pieck1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Pieck2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Pieck2 (const MethodInfo* method);
// 0x181fddcd0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Pieck2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Pieck2");
    Il2CppMethodInitialized_184345f60 = '\x01';
  }
  return "Pieck2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Pixis1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Pixis1 (const MethodInfo* method);
// 0x181fddd00

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Pixis1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Pixis1");
    Il2CppMethodInitialized_184345f61 = '\x01';
  }
  return "Pixis1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Reiner1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Reiner1 (const MethodInfo* method);
// 0x181fddd90

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Reiner1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Reiner1");
    Il2CppMethodInitialized_184345f62 = '\x01';
  }
  return "Reiner1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Revolution1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Revolution1 (const MethodInfo* method);
// 0x181fdddc0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Revolution1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Revolution1");
    Il2CppMethodInitialized_184345f63 = '\x01';
  }
  return "Revolution1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Rico1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Rico1 (const MethodInfo* method);
// 0x181fdde20

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Rico1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Rico1");
    Il2CppMethodInitialized_184345f64 = '\x01';
  }
  return "Rico1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Rico2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Rico2 (const MethodInfo* method);
// 0x181fdde50

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Rico2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Rico2");
    Il2CppMethodInitialized_184345f65 = '\x01';
  }
  return "Rico2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Ricecake1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Ricecake1 (const MethodInfo* method);
// 0x181fdddf0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Ricecake1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Ricecake1");
    Il2CppMethodInitialized_184345f66 = '\x01';
  }
  return "Ricecake1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Sasha1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Sasha1 (const MethodInfo* method);
// 0x181fddf50

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Sasha1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Sasha1");
    Il2CppMethodInitialized_184345f67 = '\x01';
  }
  return "Sasha1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Sasha2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Sasha2 (const MethodInfo* method);
// 0x181fddf80

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Sasha2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Sasha2");
    Il2CppMethodInitialized_184345f68 = '\x01';
  }
  return "Sasha2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Sasha3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Sasha3 (const MethodInfo* method);
// 0x181fddfb0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Sasha3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Sasha3");
    Il2CppMethodInitialized_184345f69 = '\x01';
  }
  return "Sasha3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Sasha4
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Sasha4 (const MethodInfo* method);
// 0x181fddfe0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Sasha4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Sasha4");
    Il2CppMethodInitialized_184345f6a = '\x01';
  }
  return "Sasha4";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Uri1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Uri1 (const MethodInfo* method);
// 0x181fde990

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Uri1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Uri1");
    Il2CppMethodInitialized_184345f6b = '\x01';
  }
  return "Uri1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Yelena1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Yelena1 (const MethodInfo* method);
// 0x181fdea80

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Yelena1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Yelena1");
    Il2CppMethodInitialized_184345f6c = '\x01';
  }
  return "Yelena1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Yelena2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Yelena2 (const MethodInfo* method);
// 0x181fdeab0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Yelena2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Yelena2");
    Il2CppMethodInitialized_184345f6d = '\x01';
  }
  return "Yelena2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Yelena3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Yelena3 (const MethodInfo* method);
// 0x181fdeae0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Yelena3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Yelena3");
    Il2CppMethodInitialized_184345f6e = '\x01';
  }
  return "Yelena3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Ymir1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Ymir1 (const MethodInfo* method);
// 0x181fdeb40

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Ymir1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Ymir1");
    Il2CppMethodInitialized_184345f6f = '\x01';
  }
  return "Ymir1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Ymir2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Ymir2 (const MethodInfo* method);
// 0x181fdeb70

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Ymir2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Ymir2");
    Il2CppMethodInitialized_184345f70 = '\x01';
  }
  return "Ymir2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Ymir104
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Ymir104 (const MethodInfo* method);
// 0x181fdeb10

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Ymir104(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Ymir104");
    Il2CppMethodInitialized_184345f71 = '\x01';
  }
  return "Ymir104";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Zeke1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Zeke1 (const MethodInfo* method);
// 0x181fdeba0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Zeke1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Zeke1");
    Il2CppMethodInitialized_184345f72 = '\x01';
  }
  return "Zeke1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Zeke2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Zeke2 (const MethodInfo* method);
// 0x181fdebd0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Zeke2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Zeke2");
    Il2CppMethodInitialized_184345f73 = '\x01';
  }
  return "Zeke2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan1 (const MethodInfo* method);
// 0x181fde630

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan1");
    Il2CppMethodInitialized_184345f74 = '\x01';
  }
  return "Titan1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan2 (const MethodInfo* method);
// 0x181fde660

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan2");
    Il2CppMethodInitialized_184345f75 = '\x01';
  }
  return "Titan2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan3 (const MethodInfo* method);
// 0x181fde690

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan3");
    Il2CppMethodInitialized_184345f76 = '\x01';
  }
  return "Titan3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan4
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan4 (const MethodInfo* method);
// 0x181fde6c0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan4");
    Il2CppMethodInitialized_184345f77 = '\x01';
  }
  return "Titan4";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan5
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan5 (const MethodInfo* method);
// 0x181fde6f0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan5(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan5");
    Il2CppMethodInitialized_184345f78 = '\x01';
  }
  return "Titan5";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan6
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan6 (const MethodInfo* method);
// 0x181fde720

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan6(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan6");
    Il2CppMethodInitialized_184345f79 = '\x01';
  }
  return "Titan6";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan7
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan7 (const MethodInfo* method);
// 0x181fde750

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan7(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan7");
    Il2CppMethodInitialized_184345f7a = '\x01';
  }
  return "Titan7";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan8
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan8 (const MethodInfo* method);
// 0x181fde780

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan8(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan8");
    Il2CppMethodInitialized_184345f7b = '\x01';
  }
  return "Titan8";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan9
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan9 (const MethodInfo* method);
// 0x181fde7b0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan9(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan9");
    Il2CppMethodInitialized_184345f7c = '\x01';
  }
  return "Titan9";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan10
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan10 (const MethodInfo* method);
// 0x181fde4b0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan10(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan10");
    Il2CppMethodInitialized_184345f7d = '\x01';
  }
  return "Titan10";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan11
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan11 (const MethodInfo* method);
// 0x181fde4e0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan11(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan11");
    Il2CppMethodInitialized_184345f7e = '\x01';
  }
  return "Titan11";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan12
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan12 (const MethodInfo* method);
// 0x181fde510

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan12(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan12");
    Il2CppMethodInitialized_184345f7f = '\x01';
  }
  return "Titan12";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan13
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan13 (const MethodInfo* method);
// 0x181fde540

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan13(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan13");
    Il2CppMethodInitialized_184345f80 = '\x01';
  }
  return "Titan13";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan14
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan14 (const MethodInfo* method);
// 0x181fde570

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan14(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan14");
    Il2CppMethodInitialized_184345f81 = '\x01';
  }
  return "Titan14";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan15
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan15 (const MethodInfo* method);
// 0x181fde5a0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan15(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan15");
    Il2CppMethodInitialized_184345f82 = '\x01';
  }
  return "Titan15";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan16
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan16 (const MethodInfo* method);
// 0x181fde5d0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan16(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan16");
    Il2CppMethodInitialized_184345f83 = '\x01';
  }
  return "Titan16";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan17
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan17 (const MethodInfo* method);
// 0x181fde600

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan17(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan17");
    Il2CppMethodInitialized_184345f84 = '\x01';
  }
  return "Titan17";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_EmojiAngry
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_EmojiAngry (const MethodInfo* method);
// 0x181fdc280

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_EmojiAngry(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiAngry");
    Il2CppMethodInitialized_184345f85 = '\x01';
  }
  return "EmojiAngry";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_EmojiAnnoyed
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_EmojiAnnoyed (const MethodInfo* method);
// 0x181fdc2b0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_EmojiAnnoyed(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiAnnoyed");
    Il2CppMethodInitialized_184345f86 = '\x01';
  }
  return "EmojiAnnoyed";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_EmojiCool
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_EmojiCool (const MethodInfo* method);
// 0x181fdc2e0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_EmojiCool(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiCool");
    Il2CppMethodInitialized_184345f87 = '\x01';
  }
  return "EmojiCool";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_EmojiCrying
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_EmojiCrying (const MethodInfo* method);
// 0x181fdc310

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_EmojiCrying(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiCrying");
    Il2CppMethodInitialized_184345f88 = '\x01';
  }
  return "EmojiCrying";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_EmojiLove
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_EmojiLove (const MethodInfo* method);
// 0x181fdc340

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_EmojiLove(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiLove");
    Il2CppMethodInitialized_184345f89 = '\x01';
  }
  return "EmojiLove";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_EmojiShocked
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_EmojiShocked (const MethodInfo* method);
// 0x181fdc370

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_EmojiShocked(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiShocked");
    Il2CppMethodInitialized_184345f8a = '\x01';
  }
  return "EmojiShocked";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_EmojiSmile
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_EmojiSmile (const MethodInfo* method);
// 0x181fdc3a0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_EmojiSmile(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiSmile");
    Il2CppMethodInitialized_184345f8b = '\x01';
  }
  return "EmojiSmile";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_EmojiThumbsUp
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_EmojiThumbsUp (const MethodInfo* method);
// 0x181fdc3d0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_EmojiThumbsUp(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiThumbsUp");
    Il2CppMethodInitialized_184345f8c = '\x01';
  }
  return "EmojiThumbsUp";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_ClassName (CustomLogic_CustomLogicProfileIconEnum_o* __this, const MethodInfo* method);
// 0x181feecb0

System_String_o *
CustomLogic_CustomLogicProfileIconEnum__get_ClassName
          (CustomLogic_CustomLogicProfileIconEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345f8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ProfileIconEnum");
    Il2CppMethodInitialized_184345f8d = '\x01';
  }
  return "ProfileIconEnum";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicProfileIconEnum__get_IsAbstract (CustomLogic_CustomLogicProfileIconEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicProfileIconEnum__get_IsAbstract(CustomLogic_CustomLogicProfileIconEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicProfileIconEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicProfileIconEnum__get_IsStatic (CustomLogic_CustomLogicProfileIconEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicProfileIconEnum__get_IsStatic(CustomLogic_CustomLogicProfileIconEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicProfileIconEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicProfileIconEnum__get_InheritBaseMembers (CustomLogic_CustomLogicProfileIconEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicProfileIconEnum__get_InheritBaseMembers(CustomLogic_CustomLogicProfileIconEnum_o* __this, MethodInfo* method)

{
  return true;
}


