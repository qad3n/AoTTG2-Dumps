// Type: CustomLogic.CustomLogicCollideWithEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCollideWithEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCollideWithEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCollideWithEnum_o* CustomLogic_CustomLogicCollideWithEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa4b10

CustomLogic_CustomLogicCollideWithEnum_o *
CustomLogic_CustomLogicCollideWithEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345959 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollideWithEnum);
    Il2CppMethodInitialized_184345959 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum);
      if (Il2CppMethodInitialized_18434594e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_18434594e = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicCollideWithEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCollideWithEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCollideWithEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f80e50

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCollideWithEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_18434595a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Hitboxes");
    il2cpp_codegen_initialize_runtime_metadata(&"Characters");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"Entities");
    il2cpp_codegen_initialize_runtime_metadata(&"All");
    il2cpp_codegen_initialize_runtime_metadata(&"Projectiles");
    il2cpp_codegen_initialize_runtime_metadata(&"Humans");
    il2cpp_codegen_initialize_runtime_metadata(&"MapObjects");
    Il2CppMethodInitialized_18434595a = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x3d352248) {
    if (uVar2 < 0x1838400b) {
      if (uVar2 == 0xfadbf6b) {
        bVar1 = System_String__op_Equality(name,"Projectiles",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345960 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Projectiles_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
            Il2CppMethodInitialized_184345960 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Projectiles_g____getter
          ;
          goto label_181f8142e;
        }
      }
      else if (uVar2 == 0x1838400a) {
        bVar1 = System_String__op_Equality(name,"Entities",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345961 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Entities_g____getter_8
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
            Il2CppMethodInitialized_184345961 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Entities_g____getter_8
          ;
          goto label_181f8142e;
        }
      }
    }
    else if (uVar2 == 0x2787757f) {
      bVar1 = System_String__op_Equality(name,"Hitboxes",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345962 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Hitboxes_g____getter_9
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
          Il2CppMethodInitialized_184345962 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Hitboxes_g____getter_9
        ;
        goto label_181f8142e;
      }
    }
    else if (uVar2 == 0x3d352247) {
      bVar1 = System_String__op_Equality(name,"MapObjects",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434595c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__MapObjects_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
          Il2CppMethodInitialized_18434595c = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__MapObjects_g____getter
        ;
        goto label_181f8142e;
      }
    }
  }
  else if (uVar2 < 0x75afe365) {
    if (uVar2 == 0x5c14003e) {
      bVar1 = System_String__op_Equality(name,"Titans",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434595e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Titans_g____getter_5_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
          Il2CppMethodInitialized_18434595e = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Titans_g____getter_5_0
        ;
        goto label_181f8142e;
      }
    }
    else if (uVar2 == 0x75afe364) {
      bVar1 = System_String__op_Equality(name,"All",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434595b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__All_g____getter_2_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
          Il2CppMethodInitialized_18434595b = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__All_g____getter_2_0
        ;
        goto label_181f8142e;
      }
    }
  }
  else if (uVar2 == 0x930b044b) {
    bVar1 = System_String__op_Equality(name,"Humans",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
      }
      if (Il2CppMethodInitialized_18434595f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Humans_g____getter_6_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
        Il2CppMethodInitialized_18434595f = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Humans_g____getter_6_0
      ;
label_181f8142e:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum)
      ;
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)
                 MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar2 == 0xaa3084c4) {
    bVar1 = System_String__op_Equality(name,"MapEditor",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345963 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__MapEditor_g____getter_1
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
        Il2CppMethodInitialized_184345963 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__MapEditor_g____getter_1
      ;
      goto label_181f8142e;
    }
  }
  else if (uVar2 == 0xfc6ef2f9) {
    bVar1 = System_String__op_Equality(name,"Characters",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
      }
      if (Il2CppMethodInitialized_18434595d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Characters_g____getter
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
        Il2CppMethodInitialized_18434595d = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Characters_g____getter
      ;
      goto label_181f8142e;
    }
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCollideWithEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__All
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__All (const MethodInfo* method);
// 0x181f93dd0

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__All(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434595b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__All_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_18434595b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__All_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__MapObjects
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapObjects (const MethodInfo* method);
// 0x181f98dd0

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapObjects(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434595c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__MapObjects_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_18434595c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__MapObjects_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Characters
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Characters (const MethodInfo* method);
// 0x181f95db0

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Characters(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434595d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Characters_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_18434595d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Characters_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Titans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Titans (const MethodInfo* method);
// 0x181f9bdf0

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Titans(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434595e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Titans_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_18434595e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Titans_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Humans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Humans (const MethodInfo* method);
// 0x181f97de0

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Humans(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434595f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Humans_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_18434595f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Humans_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Projectiles
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Projectiles (const MethodInfo* method);
// 0x181f99870

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Projectiles(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345960 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Projectiles_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_184345960 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Projectiles_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Entities
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Entities (const MethodInfo* method);
// 0x181f96c10

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Entities(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345961 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Entities_g____getter_8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_184345961 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Entities_g____getter_8
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Hitboxes
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Hitboxes (const MethodInfo* method);
// 0x181f97ca0

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Hitboxes(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345962 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Hitboxes_g____getter_9
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_184345962 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Hitboxes_g____getter_9
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__MapEditor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapEditor (const MethodInfo* method);
// 0x181f98c90

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapEditor(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345963 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__MapEditor_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_184345963 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__MapEditor_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollideWithEnum_Bindings___cctor (const MethodInfo* method);
// 0x181f9cb00

void CustomLogic_CustomLogicCollideWithEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345964 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Hitboxes");
    il2cpp_codegen_initialize_runtime_metadata(&"Characters");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"Entities");
    il2cpp_codegen_initialize_runtime_metadata(&"All");
    il2cpp_codegen_initialize_runtime_metadata(&"Projectiles");
    il2cpp_codegen_initialize_runtime_metadata(&"Humans");
    il2cpp_codegen_initialize_runtime_metadata(&"MapObjects");
    Il2CppMethodInitialized_184345964 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"All",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MapObjects",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Characters",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titans",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Humans",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Projectiles",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Entities",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hitboxes",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MapEditor",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__All>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__All_g____getter_2_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x181f8ce10

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__All_g____getter_2_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_184345a16 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->All;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__MapObjects>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__MapObjects_g____getter_3_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x181f8f480

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__MapObjects_g____getter_3_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_184345a17 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->MapObjects;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Characters>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Characters_g____getter_4_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x181f8dc10

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Characters_g____getter_4_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_184345a18 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Characters;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Titans>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Titans_g____getter_5_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x181f914a0

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Titans_g____getter_5_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_184345a19 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Titans;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Humans>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Humans_g____getter_6_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x181f8e9b0

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Humans_g____getter_6_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_184345a1a = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Humans;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Projectiles>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Projectiles_g____getter_7_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x181f8fc80

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Projectiles_g____getter_7_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_184345a1b = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Projectiles;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Entities>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Entities_g____getter_8_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x181f8e0a0

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Entities_g____getter_8_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_184345a1c = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Entities;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Hitboxes>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Hitboxes_g____getter_9_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x181f8e910

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Hitboxes_g____getter_9_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_184345a1d = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Hitboxes;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__MapEditor>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__MapEditor_g____getter_10_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x181f8f2e0

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__MapEditor_g____getter_10_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_184345a1e = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->MapEditor;
}


// CustomLogic.CustomLogicCollideWithEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollideWithEnum___ctor (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x181f9fe00

void CustomLogic_CustomLogicCollideWithEnum___ctor
               (CustomLogic_CustomLogicCollideWithEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434594e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_18434594e = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_All
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_All (const MethodInfo* method);
// 0x181f9fe50

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_All(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434594f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_18434594f = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return TypeInfo_Map_MapObjectCollideWith->static_fields->All;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_MapObjects
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_MapObjects (const MethodInfo* method);
// 0x181fa0060

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_MapObjects(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345950 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_184345950 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return TypeInfo_Map_MapObjectCollideWith->static_fields->MapObjects;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Characters
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Characters (const MethodInfo* method);
// 0x181f9fea0

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Characters(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345951 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_184345951 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return TypeInfo_Map_MapObjectCollideWith->static_fields->Characters;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Titans
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Titans (const MethodInfo* method);
// 0x181fa0100

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Titans(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345952 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_184345952 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return TypeInfo_Map_MapObjectCollideWith->static_fields->Titans;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Humans
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Humans (const MethodInfo* method);
// 0x181f9ffc0

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Humans(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345953 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_184345953 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return TypeInfo_Map_MapObjectCollideWith->static_fields->Humans;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Projectiles
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Projectiles (const MethodInfo* method);
// 0x181fa00b0

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Projectiles(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345954 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_184345954 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return TypeInfo_Map_MapObjectCollideWith->static_fields->Projectiles;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Entities
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Entities (const MethodInfo* method);
// 0x181f9ff20

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Entities(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345955 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_184345955 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return TypeInfo_Map_MapObjectCollideWith->static_fields->Entities;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Hitboxes
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Hitboxes (const MethodInfo* method);
// 0x181f9ff70

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Hitboxes(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345956 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_184345956 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return TypeInfo_Map_MapObjectCollideWith->static_fields->Hitboxes;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_MapEditor
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_MapEditor (const MethodInfo* method);
// 0x181fa0010

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_MapEditor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345957 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_184345957 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return TypeInfo_Map_MapObjectCollideWith->static_fields->MapEditor;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_ClassName (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x181f9fef0

System_String_o *
CustomLogic_CustomLogicCollideWithEnum__get_ClassName
          (CustomLogic_CustomLogicCollideWithEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345958 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CollideWithEnum");
    Il2CppMethodInitialized_184345958 = '\x01';
  }
  return "CollideWithEnum";
}


// CustomLogic.CustomLogicCollideWithEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCollideWithEnum__get_IsAbstract (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCollideWithEnum__get_IsAbstract(CustomLogic_CustomLogicCollideWithEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCollideWithEnum__get_IsStatic (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCollideWithEnum__get_IsStatic(CustomLogic_CustomLogicCollideWithEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCollideWithEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCollideWithEnum__get_InheritBaseMembers(CustomLogic_CustomLogicCollideWithEnum_o* __this, MethodInfo* method)

{
  return true;
}


