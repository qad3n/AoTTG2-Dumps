// Type: CustomLogic.CustomLogicTextAlignEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTextAlignEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTextAlignEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTextAlignEnum_o* CustomLogic_CustomLogicTextAlignEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182016d60

CustomLogic_CustomLogicTextAlignEnum_o *
CustomLogic_CustomLogicTextAlignEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434610e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextAlignEnum);
    Il2CppMethodInitialized_18434610e = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextAlignEnum);
      if (Il2CppMethodInitialized_18434610c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_18434610c = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicTextAlignEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTextAlignEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTextAlignEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ffb260

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTextAlignEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_18434610f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"UpperCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"UpperLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleRight");
    il2cpp_codegen_initialize_runtime_metadata(&"LowerLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"LowerCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"LowerRight");
    il2cpp_codegen_initialize_runtime_metadata(&"UpperRight");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleLeft");
    Il2CppMethodInitialized_18434610f = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x516feaaa) {
    if (uVar2 < 0x2505c52f) {
      if (uVar2 == 0x166f6d4a) {
        bVar1 = System_String__op_Equality(name,"UpperCenter",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346111 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__UpperCenter_g____getter_3
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
            Il2CppMethodInitialized_184346111 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__UpperCenter_g____getter_3
          ;
          goto label_181ffb83e;
        }
      }
      else if (uVar2 == 0x2505c52e) {
        bVar1 = System_String__op_Equality(name,"UpperLeft",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346110 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__UpperLeft_g____getter_2_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
            Il2CppMethodInitialized_184346110 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__UpperLeft_g____getter_2_0
          ;
          goto label_181ffb83e;
        }
      }
    }
    else if (uVar2 == 0x30130eca) {
      bVar1 = System_String__op_Equality(name,"MiddleRight",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346115 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__MiddleRight_g____getter_7
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
          Il2CppMethodInitialized_184346115 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__MiddleRight_g____getter_7
        ;
        goto label_181ffb83e;
      }
    }
    else if (uVar2 == 0x516feaa9) {
      bVar1 = System_String__op_Equality(name,"MiddleLeft",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346113 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__MiddleLeft_g____getter_5
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
          Il2CppMethodInitialized_184346113 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__MiddleLeft_g____getter_5
        ;
        goto label_181ffb83e;
      }
    }
  }
  else if (uVar2 < 0xb23900c2) {
    if (uVar2 == 0xae5b608f) {
      bVar1 = System_String__op_Equality(name,"LowerCenter",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346117 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__LowerCenter_g____getter_9
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
          Il2CppMethodInitialized_184346117 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__LowerCenter_g____getter_9
        ;
        goto label_181ffb83e;
      }
    }
    else if (uVar2 == 0xb23900c1) {
      bVar1 = System_String__op_Equality(name,"MiddleCenter",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346114 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__MiddleCenter_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
          Il2CppMethodInitialized_184346114 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__MiddleCenter_g____getter
        ;
        goto label_181ffb83e;
      }
    }
  }
  else if (uVar2 == 0xd4e02b97) {
    bVar1 = System_String__op_Equality(name,"LowerLeft",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346116 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__LowerLeft_g____getter_8_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
        Il2CppMethodInitialized_184346116 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__LowerLeft_g____getter_8_0
      ;
label_181ffb83e:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor)
      ;
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar2 == 0xdc00e203) {
    bVar1 = System_String__op_Equality(name,"UpperRight",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346112 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__UpperRight_g____getter_4
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
        Il2CppMethodInitialized_184346112 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__UpperRight_g____getter_4
      ;
      goto label_181ffb83e;
    }
  }
  else if (uVar2 == 0xe58fc308) {
    bVar1 = System_String__op_Equality(name,"LowerRight",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346118 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__LowerRight_g____getter_10
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
        Il2CppMethodInitialized_184346118 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__LowerRight_g____getter_10
      ;
      goto label_181ffb83e;
    }
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTextAlignEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__UpperLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperLeft (const MethodInfo* method);
// 0x182008870

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperLeft(MethodInfo *method)

{
  System_Func_CustomLogicTextAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346110 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__UpperLeft_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
    Il2CppMethodInitialized_184346110 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__UpperLeft_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__UpperCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperCenter (const MethodInfo* method);
// 0x1820087d0

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperCenter(MethodInfo *method)

{
  System_Func_CustomLogicTextAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346111 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__UpperCenter_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
    Il2CppMethodInitialized_184346111 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__UpperCenter_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__UpperRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperRight (const MethodInfo* method);
// 0x182008910

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperRight(MethodInfo *method)

{
  System_Func_CustomLogicTextAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346112 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__UpperRight_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
    Il2CppMethodInitialized_184346112 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__UpperRight_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__MiddleLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleLeft (const MethodInfo* method);
// 0x182006430

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleLeft(MethodInfo *method)

{
  System_Func_CustomLogicTextAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346113 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__MiddleLeft_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
    Il2CppMethodInitialized_184346113 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__MiddleLeft_g____getter_5
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__MiddleCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleCenter (const MethodInfo* method);
// 0x1820062f0

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleCenter(MethodInfo *method)

{
  System_Func_CustomLogicTextAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346114 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__MiddleCenter_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
    Il2CppMethodInitialized_184346114 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__MiddleCenter_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__MiddleRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleRight (const MethodInfo* method);
// 0x182006570

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleRight(MethodInfo *method)

{
  System_Func_CustomLogicTextAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346115 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__MiddleRight_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
    Il2CppMethodInitialized_184346115 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__MiddleRight_g____getter_7
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__LowerLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerLeft (const MethodInfo* method);
// 0x182006110

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerLeft(MethodInfo *method)

{
  System_Func_CustomLogicTextAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346116 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__LowerLeft_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
    Il2CppMethodInitialized_184346116 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__LowerLeft_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__LowerCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerCenter (const MethodInfo* method);
// 0x182005fd0

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerCenter(MethodInfo *method)

{
  System_Func_CustomLogicTextAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346117 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__LowerCenter_g____getter_9
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
    Il2CppMethodInitialized_184346117 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__LowerCenter_g____getter_9
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__LowerRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerRight (const MethodInfo* method);
// 0x1820061b0

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerRight(MethodInfo *method)

{
  System_Func_CustomLogicTextAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346118 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__LowerRight_g____getter_10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
    Il2CppMethodInitialized_184346118 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__LowerRight_g____getter_10
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTextAlignEnum_Bindings___cctor (const MethodInfo* method);
// 0x18200ace0

void CustomLogic_CustomLogicTextAlignEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346119 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"UpperCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"UpperLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleRight");
    il2cpp_codegen_initialize_runtime_metadata(&"LowerLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"LowerCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"LowerRight");
    il2cpp_codegen_initialize_runtime_metadata(&"UpperRight");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleLeft");
    Il2CppMethodInitialized_184346119 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UpperLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UpperCenter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UpperRight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MiddleLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MiddleCenter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MiddleRight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LowerLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LowerCenter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LowerRight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__UpperLeft>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__UpperLeft_g____getter_2_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__UpperLeft_g____getter_2_0(CustomLogic_CustomLogicTextAlignEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__UpperCenter>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__UpperCenter_g____getter_3_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__UpperCenter_g____getter_3_0(CustomLogic_CustomLogicTextAlignEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__UpperRight>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__UpperRight_g____getter_4_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x181ef2230

Il2CppObject*
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__UpperRight_g____getter_4_0(CustomLogic_CustomLogicTextAlignEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__MiddleLeft>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__MiddleLeft_g____getter_5_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x181f8d5d0

Il2CppObject*
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__MiddleLeft_g____getter_5_0(CustomLogic_CustomLogicTextAlignEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 3;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__MiddleCenter>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__MiddleCenter_g____getter_6_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x181f90f40

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__MiddleCenter_g____getter_6_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 4;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__MiddleRight>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__MiddleRight_g____getter_7_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x181f8cd20

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__MiddleRight_g____getter_7_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 5;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__LowerLeft>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__LowerLeft_g____getter_8_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x181ffdf50

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__LowerLeft_g____getter_8_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 6;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__LowerCenter>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__LowerCenter_g____getter_9_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x181ffdf20

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__LowerCenter_g____getter_9_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 7;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__LowerRight>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__LowerRight_g____getter_10_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x181ffdf80

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__LowerRight_g____getter_10_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 8;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTextAlignEnum___ctor (CustomLogic_CustomLogicTextAlignEnum_o* __this, const MethodInfo* method);
// 0x1820150c0

void CustomLogic_CustomLogicTextAlignEnum___ctor
               (CustomLogic_CustomLogicTextAlignEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434610c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_18434610c = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_UpperLeft
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_UpperLeft (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicTextAlignEnum__get_UpperLeft(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_UpperCenter
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_UpperCenter (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicTextAlignEnum__get_UpperCenter(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_UpperRight
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_UpperRight (const MethodInfo* method);
// 0x180846f80

int32_t
CustomLogic_CustomLogicTextAlignEnum__get_UpperRight(MethodInfo* method)

{
  return 2;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_MiddleLeft
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_MiddleLeft (const MethodInfo* method);
// 0x180565fb0

int32_t
CustomLogic_CustomLogicTextAlignEnum__get_MiddleLeft(MethodInfo* method)

{
  return 3;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_MiddleCenter
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_MiddleCenter (const MethodInfo* method);
// 0x180846f40

int32_t
CustomLogic_CustomLogicTextAlignEnum__get_MiddleCenter(MethodInfo* method)

{
  return 4;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_MiddleRight
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_MiddleRight (const MethodInfo* method);
// 0x1808680a0

int32_t
CustomLogic_CustomLogicTextAlignEnum__get_MiddleRight(MethodInfo* method)

{
  return 5;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_LowerLeft
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_LowerLeft (const MethodInfo* method);
// 0x180868060

int32_t
CustomLogic_CustomLogicTextAlignEnum__get_LowerLeft(MethodInfo* method)

{
  return 6;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_LowerCenter
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_LowerCenter (const MethodInfo* method);
// 0x18106dd80

int32_t
CustomLogic_CustomLogicTextAlignEnum__get_LowerCenter(MethodInfo* method)

{
  return 7;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_LowerRight
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_LowerRight (const MethodInfo* method);
// 0x180846f50

int32_t
CustomLogic_CustomLogicTextAlignEnum__get_LowerRight(MethodInfo* method)

{
  return 8;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTextAlignEnum__get_ClassName (CustomLogic_CustomLogicTextAlignEnum_o* __this, const MethodInfo* method);
// 0x182015110

System_String_o *
CustomLogic_CustomLogicTextAlignEnum__get_ClassName
          (CustomLogic_CustomLogicTextAlignEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434610d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TextAlignEnum");
    Il2CppMethodInitialized_18434610d = '\x01';
  }
  return "TextAlignEnum";
}


// CustomLogic.CustomLogicTextAlignEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTextAlignEnum__get_IsAbstract (CustomLogic_CustomLogicTextAlignEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTextAlignEnum__get_IsAbstract(CustomLogic_CustomLogicTextAlignEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTextAlignEnum__get_IsStatic (CustomLogic_CustomLogicTextAlignEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTextAlignEnum__get_IsStatic(CustomLogic_CustomLogicTextAlignEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTextAlignEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTextAlignEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTextAlignEnum__get_InheritBaseMembers(CustomLogic_CustomLogicTextAlignEnum_o* __this, MethodInfo* method)

{
  return true;
}


