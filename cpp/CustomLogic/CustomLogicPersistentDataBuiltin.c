// Type: CustomLogic.CustomLogicPersistentDataBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPersistentDataBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicPersistentDataBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicPersistentDataBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPersistentDataBuiltin_o* CustomLogic_CustomLogicPersistentDataBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ed46c0

CustomLogic_CustomLogicPersistentDataBuiltin_o *
CustomLogic_CustomLogicPersistentDataBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_057039f5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPersistentDataBuiltin);
    DAT_057039f5 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPersistentDataBuiltin);
      if (DAT_057039ec == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057039ec = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicPersistentDataBuiltin_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicPersistentDataBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicPersistentDataBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3ed5620

void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057039ff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039ff = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3ed5690

void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetProperty>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__SetProperty_b__2_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed56a0

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_<>c__<__CreateMethodBinding__SetProperty>b__2_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *property;
  MethodInfo *method_00;
  
  if (DAT_05703a00 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a00 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    property = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      CustomLogic_CustomLogicPersistentDataBuiltin__SetProperty(property,__a->m_Items[1],method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetProperty>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__GetProperty_b__3_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed5730

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_<>c__<__CreateMethodBinding__GetProperty>b__3_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *defaultValue;
  Il2CppObject *pIVar1;
  
  if (DAT_05703a01 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a01 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      defaultValue = __a->m_Items[1];
      if (DAT_057039ee == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object_GetValueOrDefault_String_Object);
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
        DAT_057039ee = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault<object__object>
                         (*(System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o **)
                           (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90),pIVar1,defaultValue,MethodInfo_Object_GetValueOrDefault_String_Object)
      ;
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__LoadFromFile>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__LoadFromFile_b__4_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed5830

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_<>c__<__CreateMethodBinding__LoadFromFile>b__4_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  System_String_o *fileName;
  MethodInfo *method_00;
  
  if (DAT_05703a02 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a02 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fileName = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__a->m_Items[1],MethodInfo_Boolean_ConvertTo_Boolean);
      CustomLogic_CustomLogicPersistentDataBuiltin__LoadFromFile(fileName,uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__SaveToFile>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__SaveToFile_b__5_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed58e0

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_<>c__<__CreateMethodBinding__SaveToFile>b__5_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  System_String_o *fileName;
  MethodInfo *method_00;
  
  if (DAT_05703a03 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a03 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fileName = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__a->m_Items[1],MethodInfo_Boolean_ConvertTo_Boolean);
      CustomLogic_CustomLogicPersistentDataBuiltin__SaveToFile(fileName,uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__6_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed5990

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_<>c__<__CreateMethodBinding__Clear>b__6_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_057039f1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_057039f1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(__this_00,MethodInfo_Void_Clear);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsValidFileName>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__IsValidFileName_b__7_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed5a30

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_<>c__<__CreateMethodBinding__IsValidFileName>b__7_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *fileName;
  Il2CppObject *pIVar2;
  undefined1 local_9;
  
  if (DAT_05703a04 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a04 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fileName = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
      if (DAT_057039f2 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Util);
        DAT_057039f2 = '\x01';
      }
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
      local_9 = (undefined1)bVar1;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
      return pIVar2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__FileExists>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__FileExists_b__8_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed5b10

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_<>c__<__CreateMethodBinding__FileExists>b__8_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *fileName;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  undefined1 local_9;
  
  if (DAT_05703a05 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a05 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      fileName = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                           (pIVar2,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
      bVar1 = CustomLogic_CustomLogicPersistentDataBuiltin__FileExists(fileName,method_00);
      local_9 = (undefined1)bVar1;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
      return pIVar2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ed47e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  undefined8 uVar6;
  System_Exception_o *__this;
  System_Func_T__object____object__o *pSVar7;
  CustomLogic_CLMethodBinding_T__o *pCVar8;
  
  if (DAT_057039f6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"IsValidFileName");
    il2cpp_init_method_metadata(&"SetProperty");
    il2cpp_init_method_metadata(&"GetProperty");
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"SaveToFile");
    il2cpp_init_method_metadata(&"FileExists");
    il2cpp_init_method_metadata(&"LoadFromFile");
    DAT_057039f6 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x38dfc974) {
    if (uVar3 == 0x4a57fc2) {
      bVar4 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057039fb == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Clear_b__6_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057039fb = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x28,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xb488604) {
      bVar4 = System_String__op_Equality(name,"IsValidFileName",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057039fc == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsValidFileName_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057039fc = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x30,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x38dfc973) &&
            (bVar4 = System_String__op_Equality(name,"FileExists",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057039fd == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FileExists_b__8_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057039fd = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x38,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0x8f246a28) {
    if (uVar3 == 0x8f246a27) {
      bVar4 = System_String__op_Equality(name,"SaveToFile",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057039fa == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SaveToFile_b__5_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057039fa = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x3fc653c7) &&
            (bVar4 = System_String__op_Equality(name,"LoadFromFile",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057039f9 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LoadFromFile_b__4);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057039f9 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x18,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xb6e34446) {
    bVar4 = System_String__op_Equality(name,"GetProperty",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057039f8 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetProperty_b__3);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057039f8 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x10,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xecbfdf0a) &&
          (bVar4 = System_String__op_Equality(name,"SetProperty",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057039f7 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetProperty_b__2);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_057039f7 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar7;
      il2cpp_runtime_glue(lVar2 + 8,pSVar7);
    }
    pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicPersistentDataBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__SetProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SetProperty (const MethodInfo* method);
// 0x3ed4b50

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SetProperty
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this;
  
  if (DAT_057039f7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetProperty_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039f7 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
  return __this;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__GetProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__GetProperty (const MethodInfo* method);
// 0x3ed4ca0

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__GetProperty
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this;
  
  if (DAT_057039f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetProperty_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039f8 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
  return __this;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__LoadFromFile
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__LoadFromFile (const MethodInfo* method);
// 0x3ed4df0

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__LoadFromFile
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this;
  
  if (DAT_057039f9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LoadFromFile_b__4);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039f9 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
  return __this;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__SaveToFile
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SaveToFile (const MethodInfo* method);
// 0x3ed4f40

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SaveToFile
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this;
  
  if (DAT_057039fa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SaveToFile_b__5_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039fa = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
  return __this;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x3ed5090

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__Clear
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this;
  
  if (DAT_057039fb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Clear_b__6_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039fb = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
  return __this;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__IsValidFileName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__IsValidFileName (const MethodInfo* method);
// 0x3ed51e0

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__IsValidFileName
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this;
  
  if (DAT_057039fc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsValidFileName_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039fc = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
  return __this;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__FileExists
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__FileExists (const MethodInfo* method);
// 0x3ed5330

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__FileExists
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this;
  
  if (DAT_057039fd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FileExists_b__8_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039fd = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPersistentDataBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuilt);
  return __this;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3ed5480

void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057039fe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"IsValidFileName");
    il2cpp_init_method_metadata(&"SetProperty");
    il2cpp_init_method_metadata(&"GetProperty");
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"SaveToFile");
    il2cpp_init_method_metadata(&"FileExists");
    il2cpp_init_method_metadata(&"LoadFromFile");
    DAT_057039fe = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"SetProperty",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetProperty",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LoadFromFile",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SaveToFile",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Clear",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsValidFileName",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FileExists",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin___c___cctor (const MethodInfo* method);
// 0x3ed5bb0

void CustomLogic_CustomLogicPersistentDataBuiltin_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703a06 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a06 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin___c___ctor (CustomLogic_CustomLogicPersistentDataBuiltin___c_o* __this, const MethodInfo* method);
// 0x3ed5c20

void CustomLogic_CustomLogicPersistentDataBuiltin_<>c___ctor
               (CustomLogic_CustomLogicPersistentDataBuiltin___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.<>c$$<SaveToFile>b__4_0
// il2cpp: System_DateTime_o CustomLogic_CustomLogicPersistentDataBuiltin___c___SaveToFile_b__4_0 (CustomLogic_CustomLogicPersistentDataBuiltin___c_o* __this, System_IO_FileInfo_o* x, const MethodInfo* method);
// 0x3ed5c30

System_DateTime_o
CustomLogic_CustomLogicPersistentDataBuiltin_<>c__<SaveToFile>b__4_0
          (CustomLogic_CustomLogicPersistentDataBuiltin___c_o *__this,System_IO_FileInfo_o *x,
          MethodInfo *method)

{
  System_DateTime_o SVar1;
  
  if (x != (System_IO_FileInfo_o *)0x0) {
    SVar1 = System_IO_FileSystemInfo__get_LastWriteTime
                      ((System_IO_FileSystemInfo_o *)x,(MethodInfo *)0x0);
    return (System_DateTime_o)SVar1.fields._dateData;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin___ctor (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x3ed2e80

void CustomLogic_CustomLogicPersistentDataBuiltin___ctor
               (CustomLogic_CustomLogicPersistentDataBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057039ec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057039ec = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$SetProperty
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin__SetProperty (System_String_o* property, Il2CppObject* value, const MethodInfo* method);
// 0x3ed2ef0

void CustomLogic_CustomLogicPersistentDataBuiltin__SetProperty
               (System_String_o *property,Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  undefined8 uVar2;
  System_Exception_o *__this_00;
  System_String_o *message;
  
  if (DAT_057039ed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_057039ed = '\x01';
  }
  if ((((value != (Il2CppObject *)0x0) && (pIVar1 = value->klass, pIVar1 != DAT_05711098)) &&
      (pIVar1 != DAT_05711068)) && ((pIVar1 != DAT_057110b0 && (pIVar1 != DAT_05711048)))) {
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this_00 = (System_Exception_o *)il2cpp_runtime_glue(uVar2);
    message = (System_String_o *)il2cpp_init_method_metadata(&"PersistentData.SetProperty only supports null, float, int, string, or bool values.");
    System_Exception___ctor(__this_00,message,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_Void_SetProperty);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this,(Il2CppObject *)property,value,MethodInfo_Void_set_Item);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$GetProperty
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin__GetProperty (System_String_o* property, Il2CppObject* defaultValue, const MethodInfo* method);
// 0x3ed2ff0

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin__GetProperty
          (System_String_o *property,Il2CppObject *defaultValue,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (DAT_057039ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object_GetValueOrDefault_String_Object);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057039ee = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault<object__object>
                     (*(System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o **)
                       (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90),(Il2CppObject *)property,defaultValue
                      ,MethodInfo_Object_GetValueOrDefault_String_Object);
  return pIVar1;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$LoadFromFile
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin__LoadFromFile (System_String_o* fileName, bool encrypted, const MethodInfo* method);
// 0x3ed3070

void CustomLogic_CustomLogicPersistentDataBuiltin__LoadFromFile
               (System_String_o *fileName,bool_conflict encrypted,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *a;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  SimpleAES_o *__this_04;
  SimpleJSONFixed_JSONNode_o *__this_05;
  long *plVar5;
  System_String_array *pSVar6;
  undefined8 uVar7;
  System_Exception_o *__this_06;
  undefined8 in_stack_fffffffffffffee8;
  float in_stack_fffffffffffffef0;
  undefined4 in_stack_fffffffffffffef4;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffef8;
  InvokerMethod in_stack_ffffffffffffff00;
  Il2CppObject *in_stack_ffffffffffffff08;
  Il2CppClass *in_stack_ffffffffffffff10;
  Il2CppType *in_stack_ffffffffffffff18;
  System_Collections_Generic_List_T__o *in_stack_ffffffffffffff20;
  _union_13 in_stack_ffffffffffffff28;
  _union_14 local_d0;
  undefined1 local_c8 [80];
  Il2CppMethodPointer local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod local_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_057039ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&TypeInfo_Path);
    il2cpp_init_method_metadata(&TypeInfo_SimpleAES);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"int");
    il2cpp_init_method_metadata(&"string");
    il2cpp_init_method_metadata(&"bool");
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&"float");
    il2cpp_init_method_metadata(&"1");
    DAT_057039ef = '\x01';
  }
  local_c8._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_c8._56_8_ = (Il2CppRGCTXData *)0x0;
  local_c8._32_8_ = (Il2CppClass *)0x0;
  local_c8._40_8_ = (Il2CppType *)0x0;
  local_c8._16_8_ = (InvokerMethod)0x0;
  local_c8._24_8_ = (Il2CppObject *)0x0;
  local_c8._0_8_ = (Il2CppMethodPointer)0x0;
  local_c8._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_IO_Directory__CreateDirectory
            (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x48),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03ed3653:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary<object__object>__Clear(pSVar1,MethodInfo_Void_Clear);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    uVar7 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this_06 = (System_Exception_o *)il2cpp_runtime_glue(uVar7);
    pSVar4 = (System_String_o *)il2cpp_init_method_metadata(&"PersistentData.LoadFromFile only supports legal fileName characters.");
    System_Exception___ctor(__this_06,pSVar4,(MethodInfo *)0x0);
    uVar7 = il2cpp_init_method_metadata(&MethodInfo_Void_LoadFromFile);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_06,uVar7);
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x48);
  pSVar3 = System_String__Concat(fileName,".txt",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = System_IO_Path__Combine(pSVar4,pSVar3,(MethodInfo *)0x0);
  bVar2 = System_IO_File__Exists(pSVar4,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar4 = System_IO_File__ReadAllText(pSVar4,(MethodInfo *)0x0);
    if ((char)encrypted != '\0') {
      __this_04 = (SimpleAES_o *)il2cpp_runtime_glue(TypeInfo_SimpleAES);
      SimpleAES___ctor(__this_04,(MethodInfo *)0x0);
      if (__this_04 == (SimpleAES_o *)0x0) goto LAB_03ed3653;
      pSVar4 = SimpleAES__Decrypt(__this_04,pSVar4,(MethodInfo *)0x0);
    }
    __this_05 = SimpleJSONFixed_JSON__Parse(pSVar4,(MethodInfo *)0x0);
    if (__this_05 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_03ed3653;
    SimpleJSONFixed_JSONNode__get_Keys
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,__this_05,
               (MethodInfo *)0x0);
    local_38 = local_d0;
    local_78 = (Il2CppMethodPointer)CONCAT44(in_stack_fffffffffffffef4,in_stack_fffffffffffffef0);
    __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ =
         in_stack_fffffffffffffef0;
    __this_00.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffee8;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
         in_stack_fffffffffffffef4;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef8;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
         (Il2CppObject *)in_stack_ffffffffffffff00;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         in_stack_ffffffffffffff08;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff10;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff20;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff28.rgctx_data;
    pSStack_70 = in_stack_fffffffffffffef8;
    local_68 = in_stack_ffffffffffffff00;
    pIStack_60 = in_stack_ffffffffffffff08;
    local_58 = in_stack_ffffffffffffff10;
    pIStack_50 = in_stack_ffffffffffffff18;
    local_48 = in_stack_ffffffffffffff20;
    _Stack_40 = in_stack_ffffffffffffff28;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,__this_00,
               (MethodInfo *)&local_78);
    local_c8._64_8_ = local_d0;
    local_c8._0_8_ = CONCAT44(in_stack_fffffffffffffef4,in_stack_fffffffffffffef0);
    __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ =
         in_stack_fffffffffffffef0;
    __this_01.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffee8;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
         in_stack_fffffffffffffef4;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef8;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
         (Il2CppObject *)in_stack_ffffffffffffff00;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         in_stack_ffffffffffffff08;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff10;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff20;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff28.rgctx_data;
    local_c8._8_8_ = in_stack_fffffffffffffef8;
    local_c8._16_8_ = in_stack_ffffffffffffff00;
    local_c8._24_8_ = in_stack_ffffffffffffff08;
    local_c8._32_8_ = in_stack_ffffffffffffff10;
    local_c8._40_8_ = in_stack_ffffffffffffff18;
    local_c8._48_8_ = in_stack_ffffffffffffff20;
    local_c8._56_8_ = in_stack_ffffffffffffff28;
    bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_01,(MethodInfo *)local_c8);
    if ((char)bVar2 != '\0') {
      do {
        __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ =
             in_stack_fffffffffffffef0;
        __this_02.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffee8;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
             in_stack_fffffffffffffef4;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef8;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_ffffffffffffff00;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             in_stack_ffffffffffffff08;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff10;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff20;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff28.rgctx_data;
        pSVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                           (__this_02,(MethodInfo *)local_c8);
        plVar5 = (long *)(*(__this_05->klass->vtable)._7_get_Item.methodPtr)
                                   (__this_05,pSVar4,(__this_05->klass->vtable)._7_get_Item.method);
        if (((plVar5 == (long *)0x0) ||
            (pSVar3 = (System_String_o *)
                      (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0)),
            pSVar3 == (System_String_o *)0x0)) ||
           (pSVar6 = System_String__Split(pSVar3,0x3a,0,(MethodInfo *)0x0),
           pSVar6 == (System_String_array *)0x0)) goto LAB_03ed3653;
        if ((int)pSVar6->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        a = pSVar6->m_Items[0];
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
        bVar2 = System_String__op_Equality(a,"float",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          bVar2 = System_String__op_Equality(a,"int",(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            bVar2 = System_String__op_Equality(a,"string",(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              bVar2 = System_String__op_Equality(a,"bool",(MethodInfo *)0x0);
              if ((char)bVar2 == '\0') {
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
                if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto LAB_03ed3653;
                pSVar3 = (System_String_o *)
                         System_Collections_Generic_Dictionary<object__object>__get_Item
                                   (__this,(Il2CppObject *)pSVar4,MethodInfo_Object_get_Item);
              }
              else {
                pSVar3 = System_String__Substring
                                   (pSVar3,5,(pSVar3->fields)._stringLength + -5,(MethodInfo *)0x0);
                bVar2 = System_String__op_Equality(pSVar3,"1",(MethodInfo *)0x0);
                in_stack_fffffffffffffef0 =
                     (float)CONCAT31((int3)((uint)in_stack_fffffffffffffef0 >> 8),(char)bVar2);
                pSVar3 = (System_String_o *)
                         il2cpp_runtime_glue(DAT_05711048,&stack0xfffffffffffffef0);
              }
            }
            else {
              pSVar3 = System_String__Substring
                                 (pSVar3,7,(pSVar3->fields)._stringLength + -7,(MethodInfo *)0x0);
            }
          }
          else {
            pSVar3 = System_String__Substring
                               (pSVar3,4,(pSVar3->fields)._stringLength + -4,(MethodInfo *)0x0);
            in_stack_fffffffffffffef0 = (float)System_Int32__Parse(pSVar3,(MethodInfo *)0x0);
            pSVar3 = (System_String_o *)il2cpp_runtime_glue(DAT_05711068,&stack0xfffffffffffffef0);
          }
        }
        else {
          pSVar3 = System_String__Substring
                             (pSVar3,6,(pSVar3->fields)._stringLength + -6,(MethodInfo *)0x0);
          in_stack_fffffffffffffef0 = System_Single__Parse(pSVar3,(MethodInfo *)0x0);
          pSVar3 = (System_String_o *)il2cpp_runtime_glue(DAT_05711098,&stack0xfffffffffffffef0);
        }
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_03ed3653;
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar1,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar3,MethodInfo_Void_set_Item);
        __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ =
             in_stack_fffffffffffffef0;
        __this_03.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffee8;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
             in_stack_fffffffffffffef4;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef8;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_ffffffffffffff00;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             in_stack_ffffffffffffff08;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff10;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff20;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff28.rgctx_data;
        bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_03,(MethodInfo *)local_c8);
      } while ((char)bVar2 != '\0');
    }
  }
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$SaveToFile
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin__SaveToFile (System_String_o* fileName, bool encrypted, const MethodInfo* method);
// 0x3ed36b0

/* WARNING: Removing unreachable block (ram,0x03ed414b) */
/* WARNING: Removing unreachable block (ram,0x03ed4054) */

void CustomLogic_CustomLogicPersistentDataBuiltin__SaveToFile
               (System_String_o *fileName,bool_conflict encrypted,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  char cVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONObject_o *__this_02;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_03;
  Il2CppObject *pIVar9;
  char *pcVar10;
  undefined8 *puVar11;
  SimpleJSONFixed_JSONString_o *pSVar12;
  System_String_o *pSVar13;
  SimpleAES_o *__this_04;
  System_IO_DirectoryInfo_o *__this_05;
  System_IO_FileInfo_array *source;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar14;
  VirtualInvokeData *pVVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  System_Exception_o *__this_06;
  Il2CppClass *pIVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  undefined4 in_stack_ffffffffffffff90;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar23;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (DAT_057039f0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&TypeInfo_DirectoryInfo);
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_System_IO_FileInfo__OrderBy);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_IO_FileInfo__Skip_FileInfo);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&TypeInfo_Func_FileInfo__DateTime);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_FileInfo);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_FileInfo);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&TypeInfo_JSONString);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeInfo_Path);
    il2cpp_init_method_metadata(&TypeInfo_SimpleAES);
    il2cpp_init_method_metadata(&MethodInfo_DateTime__SaveToFile_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"int:");
    il2cpp_init_method_metadata(&"bool:");
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&"float:");
    il2cpp_init_method_metadata(&"string:");
    il2cpp_init_method_metadata(&"1");
    il2cpp_init_method_metadata(&"0");
    DAT_057039f0 = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_IO_Directory__CreateDirectory
            (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x48),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    uVar18 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this_06 = (System_Exception_o *)il2cpp_runtime_glue(uVar18);
    puVar22 = &"PersistentData.SaveToFile only supports legal fileName characters.";
LAB_03ed411d:
    pSVar8 = (System_String_o *)il2cpp_init_method_metadata(puVar22);
    System_Exception___ctor(__this_06,pSVar8,(MethodInfo *)0x0);
    uVar18 = il2cpp_init_method_metadata(&MethodInfo_Void_SaveToFile);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_06,uVar18);
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x48);
  pSVar7 = System_String__Concat(fileName,".txt",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar8 = System_IO_Path__Combine(pSVar8,pSVar7,(MethodInfo *)0x0);
  __this_02 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_02,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
  if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_03 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                            (pSVar2,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
     __this_03 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
LAB_03ed4080:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
            (&local_48,__this_03,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
  pSVar23 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
            local_48.fields._dictionary;
LAB_03ed39b5:
  do {
    if (__this_02 == (SimpleJSONFixed_JSONObject_o *)0x0) {
      do {
        do {
          __this_00.fields._index = in_stack_ffffffffffffff90;
          __this_00.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02;
          __this_00.fields._version = encrypted;
          __this_00.fields._currentKey = (Il2CppObject *)pSVar23;
          bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                            (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffff98);
          if ((char)bVar6 == '\0') goto LAB_03ed3cb1;
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_03ed4076;
          pIVar9 = System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar2,local_48.fields._currentKey,MethodInfo_Object_get_Item);
          pSVar7 = "float:";
        } while (pIVar9 == (Il2CppObject *)0x0);
        pIVar19 = pIVar9->klass;
        if (pIVar19 == DAT_05711098) {
          pSVar8 = (System_String_o *)
                   (*DAT_05711098->vtable[3].methodPtr)(pIVar9,DAT_05711098->vtable[3].method);
          pSVar8 = System_String__Concat(pSVar7,pSVar8,(MethodInfo *)0x0);
          pSVar12 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_glue(TypeInfo_JSONString);
          SimpleJSONFixed_JSONString___ctor(pSVar12,pSVar8,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (pIVar19 == DAT_05711068) goto LAB_03ed3bcf;
        if (pIVar19 == DAT_057110b0) goto LAB_03ed3c40;
      } while (pIVar19 != DAT_05711048);
    }
    else {
LAB_03ed39c0:
      do {
        do {
          __this.fields._index = in_stack_ffffffffffffff90;
          __this.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02;
          __this.fields._version = encrypted;
          __this.fields._currentKey = (Il2CppObject *)pSVar23;
          bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                            (__this,(MethodInfo_31D0850 *)&stack0xffffffffffffff98);
          if ((char)bVar6 == '\0') goto LAB_03ed3cb1;
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03ed4076:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pIVar9 = System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar2,local_48.fields._currentKey,MethodInfo_Object_get_Item);
          pSVar7 = "float:";
        } while (pIVar9 == (Il2CppObject *)0x0);
        pIVar19 = pIVar9->klass;
        if (pIVar19 == DAT_05711098) {
          pSVar13 = (System_String_o *)
                    (*DAT_05711098->vtable[3].methodPtr)(pIVar9,DAT_05711098->vtable[3].method);
          pSVar7 = System_String__Concat(pSVar7,pSVar13,(MethodInfo *)0x0);
          pSVar12 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_glue(TypeInfo_JSONString);
          SimpleJSONFixed_JSONString___ctor(pSVar12,pSVar7,(MethodInfo *)0x0);
          (*(__this_02->klass->vtable)._20_Add.methodPtr)
                    (__this_02,local_48.fields._currentKey,pSVar12,
                     (__this_02->klass->vtable)._20_Add.method);
          goto LAB_03ed39c0;
        }
        if (pIVar19 == DAT_05711068) goto LAB_03ed3bcf;
        if (pIVar19 == DAT_057110b0) goto LAB_03ed3c40;
      } while (pIVar19 != DAT_05711048);
    }
    pcVar10 = (char *)il2cpp_glue_022c7330(pIVar9);
    puVar11 = &"1";
    if (*pcVar10 == '\0') {
      puVar11 = &"0";
    }
    pSVar7 = System_String__Concat("bool:",(System_String_o *)*puVar11,(MethodInfo *)0x0);
    pSVar12 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_glue(TypeInfo_JSONString);
    SimpleJSONFixed_JSONString___ctor(pSVar12,pSVar7,(MethodInfo *)0x0);
    if (__this_02 == (SimpleJSONFixed_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(__this_02->klass->vtable)._20_Add.methodPtr)
              (__this_02,local_48.fields._currentKey,pSVar12,
               (__this_02->klass->vtable)._20_Add.method);
  } while( true );
LAB_03ed3cb1:
  __this_01.fields._index = in_stack_ffffffffffffff90;
  __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02;
  __this_01.fields._version = encrypted;
  __this_01.fields._currentKey = (Il2CppObject *)pSVar23;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
            (__this_01,(MethodInfo_31D0840 *)&stack0xffffffffffffff98);
  cVar5 = (char)encrypted;
  if (__this_02 == (SimpleJSONFixed_JSONObject_o *)0x0) goto LAB_03ed4080;
  pSVar7 = (System_String_o *)
           (*(__this_02->klass->vtable)._30_ToString.methodPtr)
                     (__this_02,4,(__this_02->klass->vtable)._30_ToString.method);
  if (cVar5 != '\0') {
    __this_04 = (SimpleAES_o *)il2cpp_runtime_glue(TypeInfo_SimpleAES);
    SimpleAES___ctor(__this_04,(MethodInfo *)0x0);
    if (__this_04 == (SimpleAES_o *)0x0) goto LAB_03ed4080;
    pSVar7 = SimpleAES__Encrypt(__this_04,pSVar7,(MethodInfo *)0x0);
  }
  if (pSVar7 == (System_String_o *)0x0) goto LAB_03ed4080;
  if (1000000 < (pSVar7->fields)._stringLength) {
    uVar18 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this_06 = (System_Exception_o *)il2cpp_runtime_glue(uVar18);
    puVar22 = &"PersistentData.SaveToFile exceeded 1 mb limit.";
    goto LAB_03ed411d;
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar13 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x48);
  __this_05 = (System_IO_DirectoryInfo_o *)il2cpp_runtime_glue(TypeInfo_DirectoryInfo);
  System_IO_DirectoryInfo___ctor(__this_05,pSVar13,(MethodInfo *)0x0);
  if (__this_05 == (System_IO_DirectoryInfo_o *)0x0) goto LAB_03ed4080;
  source = System_IO_DirectoryInfo__GetFiles(__this_05,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_FileInfo__DateTime);
    System_Func<object__DateTime>___ctor();
    lVar20 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar20 + 8) = keySelector;
    il2cpp_runtime_glue(lVar20 + 8,keySelector);
  }
  source_00 = System_Linq_Enumerable__OrderByDescending<object__DateTime>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,
                         MethodInfo_IOrderedEnumerable_1_System_IO_FileInfo__OrderBy);
  pSVar14 = System_Linq_Enumerable__Skip<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,100,
                       MethodInfo_IEnumerable_1_System_IO_FileInfo__Skip_FileInfo);
  if (pSVar14 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) goto LAB_03ed4080;
  pSVar3 = pSVar14->klass;
  uVar1._0_1_ = (pSVar3->_2).rank;
  uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
  if ((ulong)uVar1 == 0) goto LAB_03ed3eaf;
  pIVar4 = (pSVar3->_1).interfaceOffsets;
  lVar20 = 0;
  goto LAB_03ed3ea0;
  while (lVar20 = lVar20 + 0x10, (ulong)uVar1 << 4 != lVar20) {
LAB_03ed3ea0:
    if (*(long *)((long)&pIVar4->interfaceType + lVar20) == TypeInfo_IEnumerable_FileInfo) {
      pVVar15 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar20);
      goto LAB_03ed3ed1;
    }
  }
LAB_03ed3eaf:
  pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar14,TypeInfo_IEnumerable_FileInfo,0);
LAB_03ed3ed1:
  plVar16 = (long *)(*pVVar15->methodPtr)(pSVar14,pVVar15->method);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    lVar20 = *plVar16;
    if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
      lVar21 = 0;
      do {
        if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IEnumerator) {
          puVar11 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + lVar20 + 0x138);
          goto LAB_03ed3f53;
        }
        lVar21 = lVar21 + 0x10;
      } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar16,TypeInfo_IEnumerator,0);
LAB_03ed3f53:
    cVar5 = (*(code *)*puVar11)(plVar16,puVar11[1]);
    if (cVar5 == '\0') {
      if (plVar16 == (long *)0x0) goto LAB_03ed4046;
      lVar20 = *plVar16;
      if ((ulong)*(ushort *)(lVar20 + 0x12e) == 0) goto LAB_03ed401f;
      lVar21 = 0;
      goto LAB_03ed4010;
    }
    lVar20 = *plVar16;
    if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
      lVar21 = 0;
      do {
        if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IEnumerator_FileInfo) {
          puVar11 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + lVar20 + 0x138);
          goto LAB_03ed3fb3;
        }
        lVar21 = lVar21 + 0x10;
      } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar16,TypeInfo_IEnumerator_FileInfo,0);
LAB_03ed3fb3:
    plVar17 = (long *)(*(code *)*puVar11)(plVar16,puVar11[1]);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (**(code **)(*plVar17 + 0x1e8))(plVar17,*(undefined8 *)(*plVar17 + 0x1f0));
  } while( true );
LAB_03ed3bcf:
  pSVar7 = "int:";
  pSVar13 = (System_String_o *)(*pIVar19->vtable[3].methodPtr)(pIVar9,pIVar19->vtable[3].method);
  pSVar7 = System_String__Concat(pSVar7,pSVar13,(MethodInfo *)0x0);
  pSVar12 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_glue(TypeInfo_JSONString);
  SimpleJSONFixed_JSONString___ctor(pSVar12,pSVar7,(MethodInfo *)0x0);
  if (__this_02 == (SimpleJSONFixed_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(__this_02->klass->vtable)._20_Add.methodPtr)
            (__this_02,local_48.fields._currentKey,pSVar12,(__this_02->klass->vtable)._20_Add.method
            );
  goto LAB_03ed39b5;
LAB_03ed3c40:
  pSVar7 = "string:";
  pSVar13 = (System_String_o *)(*pIVar19->vtable[3].methodPtr)(pIVar9,pIVar19->vtable[3].method);
  pSVar7 = System_String__Concat(pSVar7,pSVar13,(MethodInfo *)0x0);
  pSVar12 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_glue(TypeInfo_JSONString);
  SimpleJSONFixed_JSONString___ctor(pSVar12,pSVar7,(MethodInfo *)0x0);
  if (__this_02 == (SimpleJSONFixed_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(__this_02->klass->vtable)._20_Add.methodPtr)
            (__this_02,local_48.fields._currentKey,pSVar12,(__this_02->klass->vtable)._20_Add.method
            );
  goto LAB_03ed39b5;
  while (lVar21 = lVar21 + 0x10, (ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21) {
LAB_03ed4010:
    if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
      puVar11 = (undefined8 *)
                (lVar20 + (long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
      goto LAB_03ed403d;
    }
  }
LAB_03ed401f:
  puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar16,TypeInfo_IDisposable,0);
LAB_03ed403d:
  (*(code *)*puVar11)(plVar16,puVar11[1]);
LAB_03ed4046:
  System_IO_File__WriteAllText(pSVar8,pSVar7,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin__Clear (const MethodInfo* method);
// 0x3ed4420

void CustomLogic_CustomLogicPersistentDataBuiltin__Clear(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (DAT_057039f1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_057039f1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(__this,MethodInfo_Void_Clear);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$IsValidFileName
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__IsValidFileName (System_String_o* fileName, const MethodInfo* method);
// 0x3ed44c0

bool_conflict
CustomLogic_CustomLogicPersistentDataBuiltin__IsValidFileName
          (System_String_o *fileName,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  
  if (DAT_057039f2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_057039f2 = '\x01';
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  }
  if (iVar1 != 0) {
    bVar2 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
    return bVar2;
  }
  il2cpp_init_class();
  bVar2 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$FileExists
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__FileExists (System_String_o* fileName, const MethodInfo* method);
// 0x3ed4530

bool_conflict
CustomLogic_CustomLogicPersistentDataBuiltin__FileExists
          (System_String_o *fileName,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *path2;
  System_String_o *pSVar2;
  undefined8 uVar3;
  System_Exception_o *__this;
  
  if (DAT_057039f3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&TypeInfo_Path);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&".txt");
    DAT_057039f3 = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x48);
    path2 = System_String__Concat(fileName,".txt",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = System_IO_Path__Combine(pSVar2,path2,(MethodInfo *)0x0);
    bVar1 = System_IO_File__Exists(pSVar2,(MethodInfo *)0x0);
    return bVar1;
  }
  uVar3 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar3);
  pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"PersistentData.FileExists only supports legal fileName characters.");
  System_Exception___ctor(__this,pSVar2,(MethodInfo *)0x0);
  uVar3 = il2cpp_init_method_metadata(&MethodInfo_Boolean_FileExists);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar3);
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPersistentDataBuiltin__get_ClassName (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x3ed4660

System_String_o *
CustomLogic_CustomLogicPersistentDataBuiltin__get_ClassName
          (CustomLogic_CustomLogicPersistentDataBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_057039f4 == '\0') {
    il2cpp_init_method_metadata(&"PersistentData");
    DAT_057039f4 = '\x01';
  }
  return "PersistentData";
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__get_IsAbstract (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x3ed4690

bool_conflict
CustomLogic_CustomLogicPersistentDataBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicPersistentDataBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__get_IsStatic (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x3ed46a0

bool_conflict
CustomLogic_CustomLogicPersistentDataBuiltin__get_IsStatic
          (CustomLogic_CustomLogicPersistentDataBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x3ed46b0

bool_conflict
CustomLogic_CustomLogicPersistentDataBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicPersistentDataBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


