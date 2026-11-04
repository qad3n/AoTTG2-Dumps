// Type: CustomLogic.CustomLogicUILabelEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicUILabelEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicUILabelEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicUILabelEnum_o* CustomLogic_CustomLogicUILabelEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x1820176e0

CustomLogic_CustomLogicUILabelEnum_o *
CustomLogic_CustomLogicUILabelEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184346262 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUILabelEnum);
    Il2CppMethodInitialized_184346262 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUILabelEnum);
      if (Il2CppMethodInitialized_184346257 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184346257 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicUILabelEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicUILabelEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicUILabelEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicUILabelEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ff2260

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicUILabelEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184346263 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"TopRight");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleRight");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TopLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TopCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomRight");
    Il2CppMethodInitialized_184346263 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x516feaaa) {
    if (uVar2 < 0xb6af656) {
      if (uVar2 == 0x6348be7) {
        bVar1 = System_String__op_Equality(name,"BottomLeft",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434626b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__BottomLeft_g____getter_9_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
            Il2CppMethodInitialized_18434626b = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__BottomLeft_g____getter_9_0
          ;
          goto label_181ff283e;
        }
      }
      else if (uVar2 == 0xb6af655) {
        bVar1 = System_String__op_Equality(name,"TopCenter",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346264 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__TopCenter_g____getter_2_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
            Il2CppMethodInitialized_184346264 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__TopCenter_g____getter_2_0
          ;
          goto label_181ff283e;
        }
      }
    }
    else if (uVar2 == 0x30130eca) {
      bVar1 = System_String__op_Equality(name,"MiddleRight",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346269 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__MiddleRight_g____getter_7_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
          Il2CppMethodInitialized_184346269 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__MiddleRight_g____getter_7_0
        ;
        goto label_181ff283e;
      }
    }
    else if (uVar2 == 0x516feaa9) {
      bVar1 = System_String__op_Equality(name,"MiddleLeft",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346268 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__MiddleLeft_g____getter_6_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
          Il2CppMethodInitialized_184346268 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__MiddleLeft_g____getter_6_0
        ;
        goto label_181ff283e;
      }
    }
  }
  else if (uVar2 < 0x984f3d99) {
    if (uVar2 == 0x7dfdc8a6) {
      bVar1 = System_String__op_Equality(name,"TopRight",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346266 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__TopRight_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
          Il2CppMethodInitialized_184346266 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__TopRight_g____getter_4_0
        ;
        goto label_181ff283e;
      }
    }
    else if (uVar2 == 0x984f3d98) {
      bVar1 = System_String__op_Equality(name,"BottomRight",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434626c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__BottomRight_g____getter_10
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
          Il2CppMethodInitialized_18434626c = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__BottomRight_g____getter_10
        ;
        goto label_181ff283e;
      }
    }
  }
  else if (uVar2 == 0xa87d916d) {
    bVar1 = System_String__op_Equality(name,"TopLeft",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_184346265 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__TopLeft_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
        Il2CppMethodInitialized_184346265 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__TopLeft_g____getter_3_0;
label_181ff283e:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar2 == 0xb23900c1) {
    bVar1 = System_String__op_Equality(name,"MiddleCenter",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_184346267 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__MiddleCenter_g____getter_5
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
        Il2CppMethodInitialized_184346267 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__MiddleCenter_g____getter_5
      ;
      goto label_181ff283e;
    }
  }
  else if (uVar2 == 0xbd631cff) {
    bVar1 = System_String__op_Equality(name,"BottomCenter",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_18434626a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__BottomCenter_g____getter_8
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
        Il2CppMethodInitialized_18434626a = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__BottomCenter_g____getter_8
      ;
      goto label_181ff283e;
    }
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicUILabelEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__TopCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopCenter (const MethodInfo* method);
// 0x182008140

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopCenter(MethodInfo *method)

{
  System_Func_CustomLogicUILabelEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346264 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__TopCenter_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
    Il2CppMethodInitialized_184346264 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__TopCenter_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__TopLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopLeft (const MethodInfo* method);
// 0x1820081e0

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopLeft(MethodInfo *method)

{
  System_Func_CustomLogicUILabelEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346265 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__TopLeft_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
    Il2CppMethodInitialized_184346265 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__TopLeft_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__TopRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopRight (const MethodInfo* method);
// 0x182008280

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopRight(MethodInfo *method)

{
  System_Func_CustomLogicUILabelEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346266 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__TopRight_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
    Il2CppMethodInitialized_184346266 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__TopRight_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__MiddleCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleCenter (const MethodInfo* method);
// 0x182006390

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleCenter(MethodInfo *method)

{
  System_Func_CustomLogicUILabelEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346267 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__MiddleCenter_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
    Il2CppMethodInitialized_184346267 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__MiddleCenter_g____getter_5
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__MiddleLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleLeft (const MethodInfo* method);
// 0x1820064d0

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleLeft(MethodInfo *method)

{
  System_Func_CustomLogicUILabelEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346268 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__MiddleLeft_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
    Il2CppMethodInitialized_184346268 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__MiddleLeft_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__MiddleRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleRight (const MethodInfo* method);
// 0x182006610

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleRight(MethodInfo *method)

{
  System_Func_CustomLogicUILabelEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346269 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__MiddleRight_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
    Il2CppMethodInitialized_184346269 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__MiddleRight_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__BottomCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomCenter (const MethodInfo* method);
// 0x182002fb0

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomCenter(MethodInfo *method)

{
  System_Func_CustomLogicUILabelEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434626a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__BottomCenter_g____getter_8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
    Il2CppMethodInitialized_18434626a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__BottomCenter_g____getter_8
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__BottomLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomLeft (const MethodInfo* method);
// 0x182003050

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomLeft(MethodInfo *method)

{
  System_Func_CustomLogicUILabelEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434626b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__BottomLeft_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
    Il2CppMethodInitialized_18434626b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__BottomLeft_g____getter_9_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__BottomRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomRight (const MethodInfo* method);
// 0x1820030f0

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomRight(MethodInfo *method)

{
  System_Func_CustomLogicUILabelEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434626c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__BottomRight_g____getter_10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUILabelEnum_object);
    Il2CppMethodInitialized_18434626c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__BottomRight_g____getter_10
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicUILabelEnum_Bindings___cctor (const MethodInfo* method);
// 0x18200a8a0

void CustomLogic_CustomLogicUILabelEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434626d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"TopRight");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleRight");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TopLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TopCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomRight");
    Il2CppMethodInitialized_18434626d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TopCenter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TopLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TopRight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MiddleCenter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MiddleLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MiddleRight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BottomCenter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BottomLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BottomRight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUILabelEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__TopCenter>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__TopCenter_g____getter_2_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x181ffed80

Il2CppObject*
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__TopCenter_g____getter_2_0(CustomLogic_CustomLogicUILabelEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346258 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TopCenter");
    Il2CppMethodInitialized_184346258 = '\x01';
  }
  return "TopCenter";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__TopLeft>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__TopLeft_g____getter_3_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x181ffedb0

Il2CppObject*
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__TopLeft_g____getter_3_0(CustomLogic_CustomLogicUILabelEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346259 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TopLeft");
    Il2CppMethodInitialized_184346259 = '\x01';
  }
  return "TopLeft";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__TopRight>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__TopRight_g____getter_4_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x181ffede0

Il2CppObject*
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__TopRight_g____getter_4_0(CustomLogic_CustomLogicUILabelEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434625a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TopRight");
    Il2CppMethodInitialized_18434625a = '\x01';
  }
  return "TopRight";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__MiddleCenter>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__MiddleCenter_g____getter_5_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x181ffe040

Il2CppObject*
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__MiddleCenter_g____getter_5_0(CustomLogic_CustomLogicUILabelEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434625b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleCenter");
    Il2CppMethodInitialized_18434625b = '\x01';
  }
  return "MiddleCenter";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__MiddleLeft>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__MiddleLeft_g____getter_6_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x181ffe070

Il2CppObject*
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__MiddleLeft_g____getter_6_0(CustomLogic_CustomLogicUILabelEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434625c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleLeft");
    Il2CppMethodInitialized_18434625c = '\x01';
  }
  return "MiddleLeft";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__MiddleRight>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__MiddleRight_g____getter_7_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x181ffe0a0

Il2CppObject*
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__MiddleRight_g____getter_7_0(CustomLogic_CustomLogicUILabelEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434625d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleRight");
    Il2CppMethodInitialized_18434625d = '\x01';
  }
  return "MiddleRight";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__BottomCenter>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__BottomCenter_g____getter_8_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x181ffc720

Il2CppObject*
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__BottomCenter_g____getter_8_0(CustomLogic_CustomLogicUILabelEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434625e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"BottomCenter");
    Il2CppMethodInitialized_18434625e = '\x01';
  }
  return "BottomCenter";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__BottomLeft>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__BottomLeft_g____getter_9_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x181ffc750

Il2CppObject*
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__BottomLeft_g____getter_9_0(CustomLogic_CustomLogicUILabelEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434625f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"BottomLeft");
    Il2CppMethodInitialized_18434625f = '\x01';
  }
  return "BottomLeft";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__BottomRight>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__BottomRight_g____getter_10_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x181ffc780

Il2CppObject*
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__BottomRight_g____getter_10_0(CustomLogic_CustomLogicUILabelEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346260 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"BottomRight");
    Il2CppMethodInitialized_184346260 = '\x01';
  }
  return "BottomRight";
}


// CustomLogic.CustomLogicUILabelEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicUILabelEnum___ctor (CustomLogic_CustomLogicUILabelEnum_o* __this, const MethodInfo* method);
// 0x1820163a0

void CustomLogic_CustomLogicUILabelEnum___ctor
               (CustomLogic_CustomLogicUILabelEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346257 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184346257 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUILabelEnum$$get_TopCenter
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_TopCenter (const MethodInfo* method);
// 0x181ffed80

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_TopCenter(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346258 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TopCenter");
    Il2CppMethodInitialized_184346258 = '\x01';
  }
  return "TopCenter";
}


// CustomLogic.CustomLogicUILabelEnum$$get_TopLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_TopLeft (const MethodInfo* method);
// 0x181ffedb0

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_TopLeft(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346259 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TopLeft");
    Il2CppMethodInitialized_184346259 = '\x01';
  }
  return "TopLeft";
}


// CustomLogic.CustomLogicUILabelEnum$$get_TopRight
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_TopRight (const MethodInfo* method);
// 0x181ffede0

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_TopRight(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434625a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TopRight");
    Il2CppMethodInitialized_18434625a = '\x01';
  }
  return "TopRight";
}


// CustomLogic.CustomLogicUILabelEnum$$get_MiddleCenter
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_MiddleCenter (const MethodInfo* method);
// 0x181ffe040

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_MiddleCenter(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434625b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleCenter");
    Il2CppMethodInitialized_18434625b = '\x01';
  }
  return "MiddleCenter";
}


// CustomLogic.CustomLogicUILabelEnum$$get_MiddleLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_MiddleLeft (const MethodInfo* method);
// 0x181ffe070

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_MiddleLeft(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434625c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleLeft");
    Il2CppMethodInitialized_18434625c = '\x01';
  }
  return "MiddleLeft";
}


// CustomLogic.CustomLogicUILabelEnum$$get_MiddleRight
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_MiddleRight (const MethodInfo* method);
// 0x181ffe0a0

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_MiddleRight(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434625d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleRight");
    Il2CppMethodInitialized_18434625d = '\x01';
  }
  return "MiddleRight";
}


// CustomLogic.CustomLogicUILabelEnum$$get_BottomCenter
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_BottomCenter (const MethodInfo* method);
// 0x181ffc720

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_BottomCenter(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434625e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"BottomCenter");
    Il2CppMethodInitialized_18434625e = '\x01';
  }
  return "BottomCenter";
}


// CustomLogic.CustomLogicUILabelEnum$$get_BottomLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_BottomLeft (const MethodInfo* method);
// 0x181ffc750

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_BottomLeft(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434625f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"BottomLeft");
    Il2CppMethodInitialized_18434625f = '\x01';
  }
  return "BottomLeft";
}


// CustomLogic.CustomLogicUILabelEnum$$get_BottomRight
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_BottomRight (const MethodInfo* method);
// 0x181ffc780

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_BottomRight(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346260 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"BottomRight");
    Il2CppMethodInitialized_184346260 = '\x01';
  }
  return "BottomRight";
}


// CustomLogic.CustomLogicUILabelEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_ClassName (CustomLogic_CustomLogicUILabelEnum_o* __this, const MethodInfo* method);
// 0x1820163f0

System_String_o *
CustomLogic_CustomLogicUILabelEnum__get_ClassName
          (CustomLogic_CustomLogicUILabelEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346261 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"UILabelEnum");
    Il2CppMethodInitialized_184346261 = '\x01';
  }
  return "UILabelEnum";
}


// CustomLogic.CustomLogicUILabelEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicUILabelEnum__get_IsAbstract (CustomLogic_CustomLogicUILabelEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicUILabelEnum__get_IsAbstract(CustomLogic_CustomLogicUILabelEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicUILabelEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicUILabelEnum__get_IsStatic (CustomLogic_CustomLogicUILabelEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicUILabelEnum__get_IsStatic(CustomLogic_CustomLogicUILabelEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicUILabelEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicUILabelEnum__get_InheritBaseMembers (CustomLogic_CustomLogicUILabelEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicUILabelEnum__get_InheritBaseMembers(CustomLogic_CustomLogicUILabelEnum_o* __this, MethodInfo* method)

{
  return true;
}


