// Type: CustomLogic.CustomLogicDictBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicDictBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicDictBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicDictBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicDictBuiltin_o* CustomLogic_CustomLogicDictBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ed9850

CustomLogic_CustomLogicDictBuiltin_o *
CustomLogic_CustomLogicDictBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t capacity;
  CustomLogic_CustomLogicDictBuiltin_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345179 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345179 = '\x01';
  }
  local_res8[0] = 0;
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length == 0) {
    pCVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin);
    if (Il2CppMethodInitialized_18434516e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Collections_Generic_Dictionary_object_object);
      Il2CppMethodInitialized_18434516e = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar1,(MethodInfo *)0x0);
    pSVar2 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_object_object);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
               (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_ctor);
    (pCVar1->fields)._dict = pSVar2;
    Il2CppCodeGenWriteBarrier(&(pCVar1->fields)._dict,pSVar2);
    return pCVar1;
  }
  if ((int)args->max_length == 1) {
    if ((int)args->max_length != 0) {
      obj = args->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      capacity = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                           (obj,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int
                           );
      pCVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin);
      if (Il2CppMethodInitialized_18434516f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ctor_40bd290);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Collections_Generic_Dictionary_object_object);
        Il2CppMethodInitialized_18434516f = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar1,(MethodInfo *)0x0);
      pSVar2 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_object_object);
      System_Collections_Generic_Dictionary_object__object____ctor_147a490
                (pSVar2,capacity,
                 (MethodInfo_147A490 *)
                 MethodInfo_System_Collections_Generic_Dictionary_object_object_ctor_40bd290);
      (pCVar1->fields)._dict = pSVar2;
      Il2CppCodeGenWriteBarrier(&(pCVar1->fields)._dict,pSVar2);
      return pCVar1;
    }
    ThrowIndexOutOfRangeException();
  }
  NullCheck(args);
  local_res8[0] = (int32_t)args->max_length;
  pSVar3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicDictBuiltin constructor found that takes ");
  pSVar3 = System_String__Concat_1969b70(str0,pSVar3,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicDictBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181ee3e10

void CustomLogic_CustomLogicDictBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184345184 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345184 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicDictBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__5_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edee20

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__5_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicDictBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  int32_t iVar3;
  
  if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345171 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_object_object_Clear);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
      Il2CppMethodInitialized_184345171 = '\x01';
    }
    pSVar2 = (__c->fields)._dict;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      iVar3 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                         (MethodInfo_13CDEB0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
      if (iVar3 != 0) {
        pSVar2 = (__c->fields)._dict;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181edee8f;
        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                   (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Clear)
        ;
        piVar1 = &(__c->fields)._version;
        *piVar1 = *piVar1 + 1;
      }
      return (Il2CppObject *)0x0;
    }
  }
label_181edee8f:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Get_b__6_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edf8f0

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Get_b__6_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicDictBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *key;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *local_res18 [2];
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181edf997:
      ThrowIndexOutOfRangeException();
    }
    pIVar3 = (Il2CppObject *)0x0;
    uVar1 = (uint)__a->max_length;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) goto label_181edf997;
      pIVar3 = __a->m_Items[1];
    }
    if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      key = __a->m_Items[0];
      if (Il2CppMethodInitialized_184345172 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_object_object_TryGetValue);
        Il2CppMethodInitialized_184345172 = '\x01';
      }
      __this_00 = (__c->fields)._dict;
      local_res18[0] = (Il2CppObject *)0x0;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (__this_00,key,local_res18,
                           (MethodInfo_14769C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_object_object_TryGetValue);
        if (bVar2) {
          pIVar3 = local_res18[0];
        }
        return pIVar3;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Set>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Set_b__7_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee1be0

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Set_b__7_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicDictBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  Il2CppObject *key;
  Il2CppObject *value;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      key = __a->m_Items[0];
      value = __a->m_Items[1];
      if (Il2CppMethodInitialized_184345173 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_object_object_set_Item);
        Il2CppMethodInitialized_184345173 = '\x01';
      }
      __this_00 = (__c->fields)._dict;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (__this_00,key,value,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_object_object_set_Item);
        piVar1 = &(__c->fields)._version;
        *piVar1 = *piVar1 + 1;
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Remove>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__8_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee15b0

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__8_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicDictBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  Il2CppObject *key;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      key = __a->m_Items[0];
      if (Il2CppMethodInitialized_184345174 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_object_object_Remove);
        Il2CppMethodInitialized_184345174 = '\x01';
      }
      __this_00 = (__c->fields)._dict;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_object__object___Remove
                          (__this_00,key,
                           (MethodInfo_1470BF0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_object_object_Remove);
        if (bVar2) {
          piVar1 = &(__c->fields)._version;
          *piVar1 = *piVar1 + 1;
        }
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__9_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edf040

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__9_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicDictBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      pIVar1 = __a->m_Items[0];
      if (Il2CppMethodInitialized_184345175 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
        Il2CppMethodInitialized_184345175 = '\x01';
      }
      __this_00 = (__c->fields)._dict;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        local_res18[0] =
             System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,pIVar1,
                        (MethodInfo_1455450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
        pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicDictBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ec1cd0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicDictBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *__this_01;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_02;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_03;
  MethodInfo *pMVar5;
  System_Func_CustomLogicDictBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_18434517a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Remove");
    il2cpp_codegen_initialize_runtime_metadata(&"Keys");
    il2cpp_codegen_initialize_runtime_metadata(&"Values");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Count");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"Contains");
    il2cpp_codegen_initialize_runtime_metadata(&"Get");
    Il2CppMethodInitialized_18434517a = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x602b32ee) {
    if (uVar3 < 0x21a5901e) {
      if (uVar3 == 0x4a57fc2) {
        bVar2 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec255a;
        if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434517e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Clear_b__5_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434517e = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__5_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec2526;
        if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Clear_b__5_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__5_0 =
             (System_Func_CustomLogicDictBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__5_0;
      }
      else {
        if (uVar3 != 0x21a5901d) goto label_181ec255a;
        bVar2 = System_String__op_Equality(name,"Remove",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec255a;
        if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345181 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Remove_b__8_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345181 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__8_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec2526;
        if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Remove_b__8_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__8_0 =
             (System_Func_CustomLogicDictBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__8_0;
      }
    }
    else {
      if (uVar3 != 0x28b19ea3) {
        if (uVar3 == 0x602b32ed) {
          bVar2 = System_String__op_Equality(name,"Keys",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434517c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Keys_g____getter_3_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDictBuiltin_object);
              Il2CppMethodInitialized_18434517c = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Keys_g____getter_3_0
            ;
            goto label_181ec1f2d;
          }
        }
        goto label_181ec255a;
      }
      bVar2 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ec255a;
      if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_184345180 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Set_b__7_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
        Il2CppMethodInitialized_184345180 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__7_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec2526;
      if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Set_b__7_0,
                 (MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__7_0 =
           (System_Func_CustomLogicDictBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__7_0;
    }
  }
  else if (uVar3 < 0x8d4d225c) {
    if (uVar3 != 0x669c4958) {
      if (uVar3 == 0x8d4d225b) {
        bVar2 = System_String__op_Equality(name,"Values",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434517d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Values_g____getter_4_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDictBuiltin_object);
            Il2CppMethodInitialized_18434517d = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Values_g____getter_4_0
          ;
          goto label_181ec1f2d;
        }
      }
      goto label_181ec255a;
    }
    bVar2 = System_String__op_Equality(name,"Contains",(MethodInfo *)0x0);
    if (!bVar2) goto label_181ec255a;
    if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184345182 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin)
      ;
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Contains_b__9_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
      Il2CppMethodInitialized_184345182 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)
      ;
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__9_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec2526;
    if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)
      ;
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Contains_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicDictBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__9_0;
  }
  else {
    if (uVar3 != 0xb6973ef7) {
      if (uVar3 == 0xe1e7b894) {
        bVar2 = System_String__op_Equality(name,"Count",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434517b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDictBuiltin_object);
            Il2CppMethodInitialized_18434517b = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
          ;
label_181ec1f2d:
          System_Func_object__object____ctor
                    (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar5,(MethodInfo_16E67D0 *)0x0);
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin)
          ;
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this_00,
                     (System_Action_T__object__o *)0x0,
                     (MethodInfo_12B8EE0 *)
                     MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)__this_01;
        }
      }
label_181ec255a:
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicDictBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_03 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_03,pSVar4,(MethodInfo *)0x0);
      pMVar5 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,pMVar5);
    }
    bVar2 = System_String__op_Equality(name,"Get",(MethodInfo *)0x0);
    if (!bVar2) goto label_181ec255a;
    if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434517f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin)
      ;
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Get_b__6_0);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
      Il2CppMethodInitialized_18434517f = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)
      ;
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__6_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec2526;
    if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)
      ;
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Get_b__6_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicDictBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__6_0;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_181ec2526:
  __this_02 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_02,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_02;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreatePropertyBinding__Count
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Count (const MethodInfo* method);
// 0x181eca9c0

CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Count(MethodInfo *method)

{
  System_Func_CustomLogicDictBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434517b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDictBuiltin_object);
    Il2CppMethodInitialized_18434517b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreatePropertyBinding__Keys
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Keys (const MethodInfo* method);
// 0x181ecb000

CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Keys(MethodInfo *method)

{
  System_Func_CustomLogicDictBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434517c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Keys_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDictBuiltin_object);
    Il2CppMethodInitialized_18434517c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Keys_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreatePropertyBinding__Values
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Values (const MethodInfo* method);
// 0x181ecb870

CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Values(MethodInfo *method)

{
  System_Func_CustomLogicDictBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434517d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Values_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDictBuiltin_object);
    Il2CppMethodInitialized_18434517d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Values_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x181ec4cb0

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434517e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Clear_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434517e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Clear_b__5_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicDictBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__5_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Get
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Get (const MethodInfo* method);
// 0x181ec5c80

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Get(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434517f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Get_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434517f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Get_b__6_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicDictBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x181ec8080

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345180 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Set_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345180 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Set_b__7_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicDictBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Remove
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Remove (const MethodInfo* method);
// 0x181ec7ae0

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Remove(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345181 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Remove_b__8_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345181 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Remove_b__8_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicDictBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Contains
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Contains (const MethodInfo* method);
// 0x181ec5130

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Contains(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345182 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Contains_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345182 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Contains_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicDictBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181ecc240

void CustomLogic_CustomLogicDictBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345183 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Remove");
    il2cpp_codegen_initialize_runtime_metadata(&"Keys");
    il2cpp_codegen_initialize_runtime_metadata(&"Values");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Count");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"Contains");
    il2cpp_codegen_initialize_runtime_metadata(&"Get");
    Il2CppMethodInitialized_184345183 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Count",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Keys",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Values",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Clear",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Get",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Set",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Remove",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Contains",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$<__CreatePropertyBinding__Count>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0 (CustomLogic_CustomLogicDictBuiltin_o* __i, const MethodInfo* method);
// 0x181ec39b0

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0
          (CustomLogic_CustomLogicDictBuiltin_o *__i,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345170 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
      Il2CppMethodInitialized_184345170 = '\x01';
    }
    __this = (__i->fields)._dict;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      local_res8[0] =
           System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                      (MethodInfo_13CDEB0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
      pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$<__CreatePropertyBinding__Keys>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Keys_g____getter_3_0 (CustomLogic_CustomLogicDictBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3e20

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Keys_g____getter_3_0
          (CustomLogic_CustomLogicDictBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)(__i->fields)._cachedKeys;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$<__CreatePropertyBinding__Values>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Values_g____getter_4_0 (CustomLogic_CustomLogicDictBuiltin_o* __i, const MethodInfo* method);
// 0x181ec41f0

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Values_g____getter_4_0
          (CustomLogic_CustomLogicDictBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)(__i->fields)._cachedValues;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin___ctor (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x181ecff50

void CustomLogic_CustomLogicDictBuiltin___ctor
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (Il2CppMethodInitialized_18434516e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_object_object);
    Il2CppMethodInitialized_18434516e = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_object_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_ctor);
  (__this->fields)._dict = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dict,__this_00);
  return;
}


// CustomLogic.CustomLogicDictBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin___ctor (CustomLogic_CustomLogicDictBuiltin_o* __this, int32_t capacity, const MethodInfo* method);
// 0x181ecfff0

void CustomLogic_CustomLogicDictBuiltin___ctor_1ecfff0
               (CustomLogic_CustomLogicDictBuiltin_o *__this,int32_t capacity,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (Il2CppMethodInitialized_18434516f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ctor_40bd290);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_object_object);
    Il2CppMethodInitialized_18434516f = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_object_object);
  System_Collections_Generic_Dictionary_object__object____ctor_147a490
            (__this_00,capacity,
             (MethodInfo_147A490 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_ctor_40bd290
            );
  (__this->fields)._dict = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dict,__this_00);
  return;
}


// CustomLogic.CustomLogicDictBuiltin$$get_Count
// il2cpp: int32_t CustomLogic_CustomLogicDictBuiltin__get_Count (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x181ed00d0

int32_t CustomLogic_CustomLogicDictBuiltin__get_Count
                  (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184345170 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
    Il2CppMethodInitialized_184345170 = '\x01';
  }
  __this_00 = (__this->fields)._dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (MethodInfo_13CDEB0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin$$get_Keys
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicDictBuiltin__get_Keys (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x181ed0120

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicDictBuiltin__get_Keys(CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__this,(MethodInfo *)0x0);
  return (__this->fields)._cachedKeys;
}


// CustomLogic.CustomLogicDictBuiltin$$get_Values
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicDictBuiltin__get_Values (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x181ed0140

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicDictBuiltin__get_Values
          (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__this,(MethodInfo *)0x0);
  return (__this->fields)._cachedValues;
}


// CustomLogic.CustomLogicDictBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__Clear (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x181ecf760

void CustomLogic_CustomLogicDictBuiltin__Clear
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_184345171 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
    Il2CppMethodInitialized_184345171 = '\x01';
  }
  pSVar2 = (__this->fields)._dict;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                       (MethodInfo_13CDEB0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
    if (iVar3 != 0) {
      pSVar2 = (__this->fields)._dict;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181ecf7c8;
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Clear);
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
    }
    return;
  }
label_181ecf7c8:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin$$Get
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin__Get (CustomLogic_CustomLogicDictBuiltin_o* __this, Il2CppObject* key, Il2CppObject* defaultValue, const MethodInfo* method);
// 0x181ecf940

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin__Get
          (CustomLogic_CustomLogicDictBuiltin_o *__this,Il2CppObject *key,Il2CppObject *defaultValue,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Il2CppObject *local_res8;
  
  if (Il2CppMethodInitialized_184345172 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_TryGetValue);
    Il2CppMethodInitialized_184345172 = '\x01';
  }
  __this_00 = (__this->fields)._dict;
  local_res8 = (Il2CppObject *)0x0;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,key,&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_TryGetValue);
    if (bVar1) {
      defaultValue = local_res8;
    }
    return defaultValue;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin$$Set
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__Set (CustomLogic_CustomLogicDictBuiltin_o* __this, Il2CppObject* key, Il2CppObject* value, const MethodInfo* method);
// 0x181ecfa30

void CustomLogic_CustomLogicDictBuiltin__Set
               (CustomLogic_CustomLogicDictBuiltin_o *__this,Il2CppObject *key,Il2CppObject *value,
               MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (Il2CppMethodInitialized_184345173 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_set_Item);
    Il2CppMethodInitialized_184345173 = '\x01';
  }
  __this_00 = (__this->fields)._dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,key,value,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_set_Item);
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin$$Remove
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__Remove (CustomLogic_CustomLogicDictBuiltin_o* __this, Il2CppObject* key, const MethodInfo* method);
// 0x181ecf9d0

void CustomLogic_CustomLogicDictBuiltin__Remove
               (CustomLogic_CustomLogicDictBuiltin_o *__this,Il2CppObject *key,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184345174 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_Remove);
    Il2CppMethodInitialized_184345174 = '\x01';
  }
  __this_00 = (__this->fields)._dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___Remove
                      (__this_00,key,
                       (MethodInfo_1470BF0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_Remove);
    if (bVar2) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin$$Contains
// il2cpp: bool CustomLogic_CustomLogicDictBuiltin__Contains (CustomLogic_CustomLogicDictBuiltin_o* __this, Il2CppObject* key, const MethodInfo* method);
// 0x181ecf7d0

bool CustomLogic_CustomLogicDictBuiltin__Contains
               (CustomLogic_CustomLogicDictBuiltin_o *__this,Il2CppObject *key,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184345175 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_184345175 = '\x01';
  }
  __this_00 = (__this->fields)._dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,key,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicDictBuiltin__ToString (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x181ecfaa0
// eh: try 0x181ecfc70..0x181ecfeb2 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ecfdfe: mov rdx, qword ptr [rip + 0x21e4b7b]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_object_object_Dispose
// asm:   0x181ecfe05: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181ecfe0a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ecfe0f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181ecfe14: test rcx, rcx
// asm:   0x181ecfe17: jne 0x181ecfeb2
// asm:   0x181ecfe6f: mov rax, qword ptr [rip + 0x21cbff2]  ; "{}"
// asm:   0x181ecfe76: jmp 0x181ecfe56
// asm:   0x181ecfeb2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_String_o *
CustomLogic_CustomLogicDictBuiltin__ToString(CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppObject *value;
  bool bVar2;
  int32_t iVar3;
  System_Text_StringBuilder_o *pSVar4;
  System_String_o *pSVar5;
  int iVar6;
  System_Text_StringBuilder_o *local_res8;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_70;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_184345176 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_object_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_object_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_object_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_object_object_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_object_object_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"{");
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"}");
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"{}");
    Il2CppMethodInitialized_184345176 = '\x01';
  }
  local_res8 = (System_Text_StringBuilder_o *)0x0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  pSVar1 = (__this->fields)._dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                       (MethodInfo_13CDEB0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
    if (iVar3 == 0) {
      return "{}";
    }
    pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor(pSVar4,(MethodInfo *)0x0);
    local_res8 = pSVar4;
    Il2CppCodeGenWriteBarrier(&local_res8,pSVar4);
    if (local_res8 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_197dca0(local_res8,"{",(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._dict;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        iVar3 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                           (MethodInfo_13CDEB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
        pSVar1 = (__this->fields)._dict;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          iVar6 = 0;
          System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
                    (&local_48,(System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                     (MethodInfo_13C1150 *)
                     MethodInfo_System_Collections_Generic_Dictionary_object_object_GetEnumerator);
          local_70.fields._dictionary = local_48.fields._dictionary;
          local_70.fields._version = local_48.fields._version;
          local_70.fields._index = local_48.fields._index;
          local_70.fields._current.fields.key = local_48.fields._current.fields.key;
          local_70.fields._current.fields.value = local_48.fields._current.fields.value;
          local_70.fields._getEnumeratorRetType = local_48.fields._getEnumeratorRetType;
          local_70.fields._36_4_ = local_48.fields._36_4_;
          while (bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                   (&local_70,
                                    (MethodInfo_1585360 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_Enumerator_object_object_MoveNext
                                   ), value = local_70.fields._current.fields.value, bVar2) {
            if ((System_String_o *)local_70.fields._current.fields.key == (System_String_o *)0x0) {
label_181ecfcfd:
              if (local_res8 == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Text_StringBuilder__Append_197de50
                        (local_res8,local_70.fields._current.fields.key,(MethodInfo *)0x0);
            }
            else {
              pSVar5 = (System_String_o *)0x0;
              if ((System_String_c *)(local_70.fields._current.fields.key)->klass == g_data_184354e50) {
                pSVar5 = (System_String_o *)local_70.fields._current.fields.key;
              }
              if (pSVar5 == (System_String_o *)0x0) goto label_181ecfcfd;
              if (local_res8 == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar4 = System_Text_StringBuilder__Append_197e090(local_res8,0x22,(MethodInfo *)0x0);
              if (pSVar4 == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar4 = System_Text_StringBuilder__Append_197dca0(pSVar4,pSVar5,(MethodInfo *)0x0);
              if (pSVar4 == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Text_StringBuilder__Append_197e090(pSVar4,0x22,(MethodInfo *)0x0);
            }
            if (local_res8 == (System_Text_StringBuilder_o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Text_StringBuilder__Append_197dca0(local_res8,": ",(MethodInfo *)0x0);
            if ((System_String_o *)value == (System_String_o *)0x0) {
label_181ecfda0:
              if (local_res8 == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Text_StringBuilder__Append_197de50(local_res8,value,(MethodInfo *)0x0);
            }
            else {
              pSVar5 = (System_String_o *)0x0;
              if ((System_String_c *)value->klass == g_data_184354e50) {
                pSVar5 = (System_String_o *)value;
              }
              if (pSVar5 == (System_String_o *)0x0) goto label_181ecfda0;
              if (local_res8 == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar4 = System_Text_StringBuilder__Append_197e090(local_res8,0x22,(MethodInfo *)0x0);
              if (pSVar4 == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar4 = System_Text_StringBuilder__Append_197dca0(pSVar4,pSVar5,(MethodInfo *)0x0);
              if (pSVar4 == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Text_StringBuilder__Append_197e090(pSVar4,0x22,(MethodInfo *)0x0);
            }
            if (iVar6 < iVar3 + -1) {
              if (local_res8 == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Text_StringBuilder__Append_197dca0(local_res8,", ",(MethodInfo *)0x0);
            }
            iVar6 = iVar6 + 1;
          }
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_70,
                     MethodInfo_System_Collections_Generic_Dictionary_Enumerator_object_object_Dispose);
          if ((local_res8 != (System_Text_StringBuilder_o *)0x0) &&
             (System_Text_StringBuilder__Append_197dca0(local_res8,"}",(MethodInfo *)0x0),
             local_res8 != (System_Text_StringBuilder_o *)0x0)) {
            pSVar5 = (*(local_res8->klass->vtable)._3_ToString.methodPtr)
                               (local_res8,(local_res8->klass->vtable)._3_ToString.method);
            return pSVar5;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin$$InvalidateCache
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__InvalidateCache (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x181ecf9c0

void
CustomLogic_CustomLogicDictBuiltin__InvalidateCache(CustomLogic_CustomLogicDictBuiltin_o* __this, MethodInfo* method)

{
  int32_t *piVar1;
  
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  return;
}


// CustomLogic.CustomLogicDictBuiltin$$EnsureListsUpToDate
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x181ecf830

void CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_IEnumerable_TKey__o *enumerable;
  CustomLogic_CustomLogicListBuiltin_o *pCVar2;
  System_Collections_Generic_IEnumerable_TValue__o *enumerable_00;
  
  if (Il2CppMethodInitialized_184345177 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Values);
    Il2CppMethodInitialized_184345177 = '\x01';
  }
  if (((__this->fields)._listsVersion == (__this->fields)._version) &&
     ((__this->fields)._cachedKeys != (CustomLogic_CustomLogicListBuiltin_o *)0x0)) {
    return;
  }
  pSVar1 = (__this->fields)._dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    enumerable = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                            (MethodInfo_13C6500 *)
                            MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Keys);
    pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor_1ed1870
              (pCVar2,(System_Collections_Generic_IEnumerable_object__o *)enumerable,true,(MethodInfo *)0x0);
    (__this->fields)._cachedKeys = pCVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedKeys,pCVar2);
    pSVar1 = (__this->fields)._dict;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      enumerable_00 =
           System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                      (MethodInfo_13C65A0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Values);
      pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
      CustomLogic_CustomLogicListBuiltin___ctor_1ed1870
                (pCVar2,(System_Collections_Generic_IEnumerable_object__o *)enumerable_00,true,
                 (MethodInfo *)0x0);
      (__this->fields)._cachedValues = pCVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedValues,pCVar2);
      (__this->fields)._listsVersion = (__this->fields)._version;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicDictBuiltin__get_ClassName (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x181ed00a0

System_String_o *
CustomLogic_CustomLogicDictBuiltin__get_ClassName
          (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345178 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dict");
    Il2CppMethodInitialized_184345178 = '\x01';
  }
  return "Dict";
}


// CustomLogic.CustomLogicDictBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicDictBuiltin__get_IsAbstract (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicDictBuiltin__get_IsAbstract(CustomLogic_CustomLogicDictBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicDictBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicDictBuiltin__get_IsStatic (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicDictBuiltin__get_IsStatic(CustomLogic_CustomLogicDictBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicDictBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicDictBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicDictBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicDictBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicDictBuiltin$$<ToString>g__Append|18_0
// il2cpp: void CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0 (Il2CppObject* obj, CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o* , const MethodInfo* method);
// 0x181ecfec0

void CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0
               (Il2CppObject *obj,CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o *param_2,
               MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  System_String_o *value;
  
  if (obj == (Il2CppObject *)0x0) {
    pSVar1 = (param_2->fields).builder;
  }
  else {
    pSVar1 = (param_2->fields).builder;
    value = (System_String_o *)0x0;
    if (obj->klass == g_data_184354e50) {
      value = (System_String_o *)obj;
    }
    if (value != (System_String_o *)0x0) {
      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
        pSVar1 = System_Text_StringBuilder__Append_197e090(pSVar1,0x22,(MethodInfo *)0x0);
        if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
          pSVar1 = System_Text_StringBuilder__Append_197dca0(pSVar1,value,(MethodInfo *)0x0);
          if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_197e090(pSVar1,0x22,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_181ecff3f;
    }
  }
  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append_197de50(pSVar1,obj,(MethodInfo *)0x0);
    return;
  }
label_181ecff3f:
  ThrowNullReferenceException();
}


