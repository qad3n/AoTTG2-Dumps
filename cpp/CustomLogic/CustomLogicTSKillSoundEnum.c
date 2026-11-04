// Type: CustomLogic.CustomLogicTSKillSoundEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTSKillSoundEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTSKillSoundEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTSKillSoundEnum_o* CustomLogic_CustomLogicTSKillSoundEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x1820175b0

CustomLogic_CustomLogicTSKillSoundEnum_o *
CustomLogic_CustomLogicTSKillSoundEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicTSKillSoundEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843460ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_1843460ee = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
      if (Il2CppMethodInitialized_1843460e5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843460e5 = '\x01';
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
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTSKillSoundEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ff4640

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_1843460ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ArmorHit");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxRangeShot");
    il2cpp_codegen_initialize_runtime_metadata(&"Air");
    il2cpp_codegen_initialize_runtime_metadata(&"Ground");
    il2cpp_codegen_initialize_runtime_metadata(&"CloseShot");
    il2cpp_codegen_initialize_runtime_metadata(&"Kill");
    Il2CppMethodInitialized_1843460ef = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Kill",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
    }
    if (Il2CppMethodInitialized_1843460f0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Kill_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
      Il2CppMethodInitialized_1843460f0 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Kill_g____getter_2_0;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Air",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
      }
      if (Il2CppMethodInitialized_1843460f1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Air_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
        Il2CppMethodInitialized_1843460f1 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Air_g____getter_3_0;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Ground",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843460f2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Ground_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
          Il2CppMethodInitialized_1843460f2 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Ground_g____getter_4_0
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"ArmorHit",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843460f3 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__ArmorHit_g____getter_5
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
            Il2CppMethodInitialized_1843460f3 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
          pMVar3 = 
          MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__ArmorHit_g____getter_5
          ;
        }
        else {
          bVar1 = System_String__op_Equality(name,"CloseShot",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843460f4 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__CloseShot_g____getter_6
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
              Il2CppMethodInitialized_1843460f4 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
            pMVar3 = 
            MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__CloseShot_g____getter_6
            ;
          }
          else {
            bVar1 = System_String__op_Equality(name,"MaxRangeShot",(MethodInfo *)0x0);
            if (!bVar1) {
              pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTSKillSoundEnum not found");
              str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
              pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
              klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
              __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
              System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
              pMVar3 = il2cpp_codegen_get_runtime_metadata
                                 (&
                                  MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings_CreateMemberBinding
                                 );
              il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
            }
            if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843460f5 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__MaxRangeShot_g____gette
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
              Il2CppMethodInitialized_1843460f5 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
            pMVar3 = 
            MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__MaxRangeShot_g____gette
            ;
          }
        }
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__Kill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Kill (const MethodInfo* method);
// 0x182005c10

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Kill(MethodInfo *method)

{
  System_Func_CustomLogicTSKillSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843460f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Kill_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
    Il2CppMethodInitialized_1843460f0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Kill_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__Air
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Air (const MethodInfo* method);
// 0x1820007b0

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Air(MethodInfo *method)

{
  System_Func_CustomLogicTSKillSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843460f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Air_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
    Il2CppMethodInitialized_1843460f1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Air_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__Ground
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Ground (const MethodInfo* method);
// 0x1820046d0

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Ground(MethodInfo *method)

{
  System_Func_CustomLogicTSKillSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843460f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Ground_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
    Il2CppMethodInitialized_1843460f2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Ground_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__ArmorHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__ArmorHit (const MethodInfo* method);
// 0x182000990

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__ArmorHit(MethodInfo *method)

{
  System_Func_CustomLogicTSKillSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843460f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__ArmorHit_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
    Il2CppMethodInitialized_1843460f3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__ArmorHit_g____getter_5
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__CloseShot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__CloseShot (const MethodInfo* method);
// 0x182003370

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__CloseShot(MethodInfo *method)

{
  System_Func_CustomLogicTSKillSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843460f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__CloseShot_g____getter_6
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
    Il2CppMethodInitialized_1843460f4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__CloseShot_g____getter_6
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__MaxRangeShot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__MaxRangeShot (const MethodInfo* method);
// 0x182006250

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__MaxRangeShot(MethodInfo *method)

{
  System_Func_CustomLogicTSKillSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843460f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__MaxRangeShot_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
    Il2CppMethodInitialized_1843460f5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__MaxRangeShot_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTSKillSoundEnum_Bindings___cctor (const MethodInfo* method);
// 0x18200a2e0

void CustomLogic_CustomLogicTSKillSoundEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843460f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ArmorHit");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxRangeShot");
    il2cpp_codegen_initialize_runtime_metadata(&"Air");
    il2cpp_codegen_initialize_runtime_metadata(&"Ground");
    il2cpp_codegen_initialize_runtime_metadata(&"CloseShot");
    il2cpp_codegen_initialize_runtime_metadata(&"Kill");
    Il2CppMethodInitialized_1843460f6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Kill",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Air",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Ground",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ArmorHit",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CloseShot",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxRangeShot",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__Kill>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Kill_g____getter_2_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffdd70

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Kill_g____getter_2_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_1843460f7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  if (Il2CppMethodInitialized_18434635e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_18434635e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_kill;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__Air>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Air_g____getter_3_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffb9c0

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Air_g____getter_3_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_1843460f8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  if (Il2CppMethodInitialized_18434635f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_18434635f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_air;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__Ground>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Ground_g____getter_4_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffd240

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Ground_g____getter_4_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_1843460f9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  if (Il2CppMethodInitialized_184346360 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_184346360 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_ground;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__ArmorHit>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__ArmorHit_g____getter_5_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffbab0

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__ArmorHit_g____getter_5_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_1843460fa = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  if (Il2CppMethodInitialized_184346361 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_184346361 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_armorHit;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__CloseShot>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__CloseShot_g____getter_6_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffc920

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__CloseShot_g____getter_6_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_1843460fb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  if (Il2CppMethodInitialized_184346362 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_184346362 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_closeShot;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__MaxRangeShot>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__MaxRangeShot_g____getter_7_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x181ffdfb0

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__MaxRangeShot_g____getter_7_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_1843460fc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  if (Il2CppMethodInitialized_184346363 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_184346363 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_maxRangeShot;
}


// CustomLogic.CustomLogicTSKillSoundEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTSKillSoundEnum___ctor (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x182014c50

void CustomLogic_CustomLogicTSKillSoundEnum___ctor
               (CustomLogic_CustomLogicTSKillSoundEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843460e5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_Kill
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_Kill (const MethodInfo* method);
// 0x182014e10

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_Kill(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_1843460e6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_kill;
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_Air
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_Air (const MethodInfo* method);
// 0x182014ca0

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_Air(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_1843460e7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_air;
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_Ground
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_Ground (const MethodInfo* method);
// 0x182014dc0

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_Ground(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_1843460e8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_ground;
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_ArmorHit
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_ArmorHit (const MethodInfo* method);
// 0x182014cf0

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_ArmorHit(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_1843460e9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_armorHit;
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_CloseShot
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_CloseShot (const MethodInfo* method);
// 0x182014d70

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_CloseShot(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_1843460ea = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_closeShot;
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_MaxRangeShot
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_MaxRangeShot (const MethodInfo* method);
// 0x182014e60

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_MaxRangeShot(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_1843460eb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_maxRangeShot;
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_ClassName (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x182014d40

System_String_o *
CustomLogic_CustomLogicTSKillSoundEnum__get_ClassName
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TSKillSoundEnum");
    Il2CppMethodInitialized_1843460ec = '\x01';
  }
  return "TSKillSoundEnum";
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTSKillSoundEnum__get_IsAbstract (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTSKillSoundEnum__get_IsAbstract(CustomLogic_CustomLogicTSKillSoundEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTSKillSoundEnum__get_IsStatic (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTSKillSoundEnum__get_IsStatic(CustomLogic_CustomLogicTSKillSoundEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTSKillSoundEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTSKillSoundEnum__get_InheritBaseMembers(CustomLogic_CustomLogicTSKillSoundEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTSKillSoundEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicTSKillSoundEnum___cctor (const MethodInfo* method);
// 0x182014a30

void CustomLogic_CustomLogicTSKillSoundEnum___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_98;
  undefined4 local_88;
  System_Enum_o local_80;
  undefined4 local_70;
  System_Enum_o local_68;
  undefined4 local_58;
  System_Enum_o local_50;
  undefined4 local_40;
  System_Enum_o local_38;
  undefined4 local_28;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (Il2CppMethodInitialized_1843460ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_TSKillType);
    Il2CppMethodInitialized_1843460ed = '\x01';
  }
  local_98.klass = (System_Enum_c *)TypeInfo_Projectiles_TSKillType;
  local_98.monitor = &g_data_ffffffffffffffff;
  local_88 = 2;
  pSVar1 = System_Enum__ToString(&local_98,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_kill = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_kill,pSVar1);
  local_80.klass = (System_Enum_c *)TypeInfo_Projectiles_TSKillType;
  local_80.monitor = &g_data_ffffffffffffffff;
  local_70 = 0;
  pSVar1 = System_Enum__ToString(&local_80,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_air = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_air,pSVar1);
  local_68.klass = (System_Enum_c *)TypeInfo_Projectiles_TSKillType;
  local_68.monitor = &g_data_ffffffffffffffff;
  local_58 = 1;
  pSVar1 = System_Enum__ToString(&local_68,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_ground = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_ground,pSVar1);
  local_50.klass = (System_Enum_c *)TypeInfo_Projectiles_TSKillType;
  local_50.monitor = &g_data_ffffffffffffffff;
  local_40 = 3;
  pSVar1 = System_Enum__ToString(&local_50,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_armorHit = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_armorHit,pSVar1)
  ;
  local_38.klass = (System_Enum_c *)TypeInfo_Projectiles_TSKillType;
  local_38.monitor = &g_data_ffffffffffffffff;
  local_28 = 4;
  pSVar1 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_closeShot = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_closeShot,pSVar1);
  local_20.klass = (System_Enum_c *)TypeInfo_Projectiles_TSKillType;
  local_20.monitor = &g_data_ffffffffffffffff;
  local_10 = 5;
  pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_maxRangeShot = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_maxRangeShot,pSVar1);
  return;
}


