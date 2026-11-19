// Type: CustomLogic.CustomLogicDictBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicDictBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicDictBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicDictBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicDictBuiltin_o* CustomLogic_CustomLogicDictBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59ae290

CustomLogic_CustomLogicDictBuiltin_o *
CustomLogic_CustomLogicDictBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t capacity;
  CustomLogic_CustomLogicDictBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  MethodInfo *method_00;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07545b12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b12 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length == 0) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin);
    CustomLogic_CustomLogicDictBuiltin___ctor(__this,method);
  }
  else {
    if ((int)args->max_length != 1) {
      NullCheck(args);
      pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
      str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicDictBuiltin constructor found that takes ");
      str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
      pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicDictBuiltin_Factory_CreateInstance);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    obj = args->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    capacity = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                         (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int)
    ;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin);
    CustomLogic_CustomLogicDictBuiltin___ctor_58ad9a0(__this,capacity,method_00);
  }
  return __this;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x59af260

void CustomLogic_CustomLogicDictBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545b1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b1d = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x59af2d0

void CustomLogic_CustomLogicDictBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__5_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59af2e0

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__5_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicDictBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicDictBuiltin__Clear(__c,(MethodInfo *)__c);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Get_b__6_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59af300

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Get_b__6_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicDictBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *key;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIStack_20;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if (iVar1 == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (iVar1 < 2) {
      pIVar3 = (Il2CppObject *)0x0;
    }
    else {
      pIVar3 = __a->m_Items[1];
    }
    if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      key = __a->m_Items[0];
      if (Il2CppMethodInitialized_07545b0b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_object_object_TryGetValue);
        Il2CppMethodInitialized_07545b0b = '\x01';
      }
      pIStack_20 = (Il2CppObject *)0x0;
      __this_00 = (__c->fields)._dict;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (__this_00,key,&pIStack_20,
                           (MethodInfo_4AAF440 *)
                           MethodInfo_System_Collections_Generic_Dictionary_object_object_TryGetValue);
        if (bVar2) {
          pIVar3 = pIStack_20;
        }
        return pIVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Set>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Set_b__7_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59af3a0

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Set_b__7_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicDictBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  Il2CppObject *key;
  Il2CppObject *value;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (__a != (System_Object_array *)0x0) {
    iVar2 = (int)__a->max_length;
    if ((iVar2 == 0) || (iVar2 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      key = __a->m_Items[0];
      value = __a->m_Items[1];
      if (Il2CppMethodInitialized_07545b0c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_object_object_set_Item);
        Il2CppMethodInitialized_07545b0c = '\x01';
      }
      __this_00 = (__c->fields)._dict;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (__this_00,key,value,
                   (MethodInfo_4AAD4C0 *)
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
// 0x59af420

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
      if (Il2CppMethodInitialized_07545b0d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_object_object_Remove);
        Il2CppMethodInitialized_07545b0d = '\x01';
      }
      __this_00 = (__c->fields)._dict;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_object__object___Remove
                          (__this_00,key,
                           (MethodInfo_4AAED10 *)
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
// 0x59af490

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__9_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicDictBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      pIVar2 = __a->m_Items[0];
      uStack_18 = in_RAX;
      if (Il2CppMethodInitialized_07545b0e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
        Il2CppMethodInitialized_07545b0e = '\x01';
      }
      __this_00 = (__c->fields)._dict;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (__this_00,pIVar2,
                           (MethodInfo_4AAD6F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
        uStack_18 = CONCAT17(bVar1,(undefined7)uStack_18);
        pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
        return pIVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicDictBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59ae3e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicDictBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicDictBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545b13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Remove");
    il2cpp_codegen_initialize_runtime_metadata(&"Keys");
    il2cpp_codegen_initialize_runtime_metadata(&"Values");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Count");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"Contains");
    il2cpp_codegen_initialize_runtime_metadata(&"Get");
    Il2CppMethodInitialized_07545b13 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x602b32ee) {
    if (uVar2 < 0x21a5901e) {
      if (uVar2 == 0x4a57fc2) {
        bVar1 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Clear
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Clear
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x21a5901d) {
        bVar1 = System_String__op_Equality(name,"Remove",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Remove
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Remove
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x28b19ea3) {
      bVar1 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Set
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Set
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x602b32ed) {
      bVar1 = System_String__op_Equality(name,"Keys",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Keys
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Keys
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0x8d4d225c) {
    if (uVar2 == 0x8d4d225b) {
      bVar1 = System_String__op_Equality(name,"Values",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Values
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Values
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x669c4958) {
      bVar1 = System_String__op_Equality(name,"Contains",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Contains
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Contains
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xb6973ef7) {
    bVar1 = System_String__op_Equality(name,"Get",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings)
        ;
        pCVar3 = CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Get((MethodInfo *)pCVar6)
        ;
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Get
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xe1e7b894) {
    bVar1 = System_String__op_Equality(name,"Count",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings)
        ;
        pCVar4 = CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Count
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
      pCVar4 = CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Count
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicDictBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreatePropertyBinding__Count
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Count (const MethodInfo* method);
// 0x59ae7d0

CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Count(MethodInfo *method)

{
  System_Func_CustomLogicDictBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDictBuiltin_object);
    Il2CppMethodInitialized_07545b14 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreatePropertyBinding__Keys
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Keys (const MethodInfo* method);
// 0x59ae870

CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Keys(MethodInfo *method)

{
  System_Func_CustomLogicDictBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Keys_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDictBuiltin_object);
    Il2CppMethodInitialized_07545b15 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Keys_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreatePropertyBinding__Values
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Values (const MethodInfo* method);
// 0x59ae910

CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Values(MethodInfo *method)

{
  System_Func_CustomLogicDictBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Values_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDictBuiltin_object);
    Il2CppMethodInitialized_07545b16 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Values_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x59ae9b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ae9e5: jmp 0x59aea55

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicDictBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicDictBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Clear_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b17 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicDictBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Clear_b__5_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Get
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Get (const MethodInfo* method);
// 0x59aeaf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59aeb25: jmp 0x59aeb95

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Get(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicDictBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicDictBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Get_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b18 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicDictBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Get_b__6_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x59aec30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59aec65: jmp 0x59aecd5

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicDictBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicDictBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Set_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b19 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicDictBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Set_b__7_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Remove
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Remove (const MethodInfo* method);
// 0x59aed70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59aeda5: jmp 0x59aee15

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Remove(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicDictBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicDictBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Remove_b__8_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b1a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicDictBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Remove_b__8_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Contains
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Contains (const MethodInfo* method);
// 0x59aeeb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59aeee5: jmp 0x59aef55

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Contains(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicDictBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicDictBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b1b == '\0') {
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
    Il2CppMethodInitialized_07545b1b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicDictBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDictBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Contains_b__9_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDictBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x59aeff0

void CustomLogic_CustomLogicDictBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545b1c == '\0') {
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
    Il2CppMethodInitialized_07545b1c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Count",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Keys",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Values",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Clear",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Get",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Set",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Remove",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Contains",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicDictBuiltin_Bindings->static_fields->MemberNames)
  ;
  return;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$<__CreatePropertyBinding__Count>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0 (CustomLogic_CustomLogicDictBuiltin_o* __i, const MethodInfo* method);
// 0x59af1b0

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0
          (CustomLogic_CustomLogicDictBuiltin_o *__i,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *pIVar1;
  int32_t local_c;
  
  if (__i != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545b09 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
      Il2CppMethodInitialized_07545b09 = '\x01';
    }
    __this = (__i->fields)._dict;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      local_c = System_Collections_Generic_Dictionary_object__object___get_Count
                          (__this,(MethodInfo_4AAD0E0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,&local_c);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$<__CreatePropertyBinding__Keys>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Keys_g____getter_3_0 (CustomLogic_CustomLogicDictBuiltin_o* __i, const MethodInfo* method);
// 0x59af220

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Keys_g____getter_3_0
          (CustomLogic_CustomLogicDictBuiltin_o *__i,MethodInfo *method)

{
  if (__i == (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__i,method);
  return (Il2CppObject *)(__i->fields)._cachedKeys;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$<__CreatePropertyBinding__Values>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Values_g____getter_4_0 (CustomLogic_CustomLogicDictBuiltin_o* __i, const MethodInfo* method);
// 0x59af240

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Values_g____getter_4_0
          (CustomLogic_CustomLogicDictBuiltin_o *__i,MethodInfo *method)

{
  if (__i == (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__i,method);
  return (Il2CppObject *)(__i->fields)._cachedValues;
}


// CustomLogic.CustomLogicDictBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin___ctor (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x59ad900

void CustomLogic_CustomLogicDictBuiltin___ctor
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_object_object);
    Il2CppMethodInitialized_07545b07 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_object_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            (__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_ctor);
  (__this->fields)._dict = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dict);
  return;
}


// CustomLogic.CustomLogicDictBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin___ctor (CustomLogic_CustomLogicDictBuiltin_o* __this, int32_t capacity, const MethodInfo* method);
// 0x59ad9a0

void CustomLogic_CustomLogicDictBuiltin___ctor_58ad9a0
               (CustomLogic_CustomLogicDictBuiltin_o *__this,int32_t capacity,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ctor_718aa10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_object_object);
    Il2CppMethodInitialized_07545b08 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_object_object);
  System_Collections_Generic_Dictionary_object__object____ctor_4aac930
            (__this_00,capacity,
             (MethodInfo_4AAC930 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_ctor_718aa10
            );
  (__this->fields)._dict = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dict);
  return;
}


// CustomLogic.CustomLogicDictBuiltin$$get_Count
// il2cpp: int32_t CustomLogic_CustomLogicDictBuiltin__get_Count (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x59ada40

int32_t CustomLogic_CustomLogicDictBuiltin__get_Count
                  (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07545b09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
    Il2CppMethodInitialized_07545b09 = '\x01';
  }
  __this_00 = (__this->fields)._dict;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = System_Collections_Generic_Dictionary_object__object___get_Count
                    (__this_00,
                     (MethodInfo_4AAD0E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
  return iVar1;
}


// CustomLogic.CustomLogicDictBuiltin$$get_Keys
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicDictBuiltin__get_Keys (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x59ada80

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicDictBuiltin__get_Keys(CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__this,method);
  return (__this->fields)._cachedKeys;
}


// CustomLogic.CustomLogicDictBuiltin$$get_Values
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicDictBuiltin__get_Values (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x59adba0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicDictBuiltin__get_Values
          (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__this,method);
  return (__this->fields)._cachedValues;
}


// CustomLogic.CustomLogicDictBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__Clear (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x59adbb0

void CustomLogic_CustomLogicDictBuiltin__Clear
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_07545b0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
    Il2CppMethodInitialized_07545b0a = '\x01';
  }
  pSVar2 = (__this->fields)._dict;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_059adc15:
    ThrowNullReferenceException();
  }
  iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count
                    (pSVar2,(MethodInfo_4AAD0E0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
  if (iVar3 != 0) {
    pSVar2 = (__this->fields)._dict;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_059adc15;
    System_Collections_Generic_Dictionary_object__object___Clear
              (pSVar2,(MethodInfo_4AAD690 *)
                      MethodInfo_System_Collections_Generic_Dictionary_object_object_Clear);
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
  }
  return;
}


// CustomLogic.CustomLogicDictBuiltin$$Get
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin__Get (CustomLogic_CustomLogicDictBuiltin_o* __this, Il2CppObject* key, Il2CppObject* defaultValue, const MethodInfo* method);
// 0x59adc30

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin__Get
          (CustomLogic_CustomLogicDictBuiltin_o *__this,Il2CppObject *key,Il2CppObject *defaultValue,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Il2CppObject *local_20;
  
  if (Il2CppMethodInitialized_07545b0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_TryGetValue);
    Il2CppMethodInitialized_07545b0b = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._dict;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this_00,key,&local_20,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_object_object_TryGetValue);
  if (bVar1) {
    defaultValue = local_20;
  }
  return defaultValue;
}


// CustomLogic.CustomLogicDictBuiltin$$Set
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__Set (CustomLogic_CustomLogicDictBuiltin_o* __this, Il2CppObject* key, Il2CppObject* value, const MethodInfo* method);
// 0x59adcb0

void CustomLogic_CustomLogicDictBuiltin__Set
               (CustomLogic_CustomLogicDictBuiltin_o *__this,Il2CppObject *key,Il2CppObject *value,
               MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_set_Item);
    Il2CppMethodInitialized_07545b0c = '\x01';
  }
  __this_00 = (__this->fields)._dict;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this_00,key,value,
             (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_set_Item);
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  return;
}


// CustomLogic.CustomLogicDictBuiltin$$Remove
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__Remove (CustomLogic_CustomLogicDictBuiltin_o* __this, Il2CppObject* key, const MethodInfo* method);
// 0x59add10

void CustomLogic_CustomLogicDictBuiltin__Remove
               (CustomLogic_CustomLogicDictBuiltin_o *__this,Il2CppObject *key,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545b0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_Remove);
    Il2CppMethodInitialized_07545b0d = '\x01';
  }
  __this_00 = (__this->fields)._dict;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__object___Remove
                    (__this_00,key,
                     (MethodInfo_4AAED10 *)
                     MethodInfo_System_Collections_Generic_Dictionary_object_object_Remove);
  if (bVar2) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
  }
  return;
}


// CustomLogic.CustomLogicDictBuiltin$$Contains
// il2cpp: bool CustomLogic_CustomLogicDictBuiltin__Contains (CustomLogic_CustomLogicDictBuiltin_o* __this, Il2CppObject* key, const MethodInfo* method);
// 0x59add70

bool CustomLogic_CustomLogicDictBuiltin__Contains
               (CustomLogic_CustomLogicDictBuiltin_o *__this,Il2CppObject *key,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545b0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_07545b0e = '\x01';
  }
  __this_00 = (__this->fields)._dict;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (__this_00,key,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
  return bVar1;
}


// CustomLogic.CustomLogicDictBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicDictBuiltin__ToString (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x59addc0
// eh: try 0x59adf76..0x59ae04e -> pad 0x59ae05f (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59ae077..0x59ae07c -> pad 0x59ae0a1 cleanup
// eh: try 0x59ae0a4..0x59ae0ae -> pad 0x59ae0b6 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ae053: jmp 0x59ae05f
// asm:   0x59ae055: jmp 0x59ae05f
// asm:   0x59ae057: jmp 0x59ae05f
// asm:   0x59ae059: jmp 0x59ae05f
// asm:   0x59ae05b: jmp 0x59ae05f
// asm:   0x59ae05d: jmp 0x59ae05f
// asm:   0x59ae05f: mov rbx, rax
// asm:   0x59ae062: cmp edx, 1
// asm:   0x59ae065: jne 0x59ae0a4
// asm:   0x59ae067: mov rdi, rbx
// asm:   0x59ae06a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59ae06f: mov rbx, qword ptr [rax]
// asm:   0x59ae072: mov qword ptr [rsp + 0x40], rbx
// asm:   0x59ae077: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59ae07c: lea rax, [rip + 0x18e1b4d]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_object_object_Dispose
// asm:   0x59ae083: mov rsi, qword ptr [rax]
// asm:   0x59ae086: lea rdi, [rsp + 0x10]
// asm:   0x59ae08b: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x59ae090: test rbx, rbx
// asm:   0x59ae093: je 0x59adff4
// asm:   0x59ae099: mov rdi, rbx
// asm:   0x59ae09c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59ae0a1: mov rbx, rax
// asm:   0x59ae0a4: lea rdi, [rsp + 0x40]
// asm:   0x59ae0a9: call 0x2fd4df0  ; il2cpp_runtime_helper_02fd4df0()
// asm:   0x59ae0ae: mov rdi, rbx
// asm:   0x59ae0b1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59ae0b6: mov rdi, rax
// asm:   0x59ae0b9: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
CustomLogic_CustomLogicDictBuiltin__ToString(CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppObject *obj;
  bool bVar2;
  int32_t iVar3;
  CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o __this_00;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar5;
  CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o CStack_90;
  undefined1 auStack_88 [16];
  Il2CppObject *pIStack_78;
  Il2CppObject *pIStack_70;
  int32_t iStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [16];
  Il2CppObject *pIStack_48;
  Il2CppObject *pIStack_40;
  int32_t iStack_38;
  undefined4 uStack_34;
  
  if (Il2CppMethodInitialized_07545b0f == '\0') {
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
    Il2CppMethodInitialized_07545b0f = '\x01';
  }
  pSVar1 = (__this->fields)._dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count
                      (pSVar1,(MethodInfo_4AAD0E0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
    if (iVar3 == 0) {
      return "{}";
    }
    __this_00.fields.builder =
         (CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_Fields)
         il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor
              ((System_Text_StringBuilder_o *)__this_00.fields.builder,(MethodInfo *)0x0);
    CStack_90.fields.builder = __this_00.fields.builder;
    Il2CppCodeGenWriteBarrier((void **)&CStack_90);
    if (CStack_90.fields.builder != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_530ed80
                ((System_Text_StringBuilder_o *)CStack_90.fields.builder,"{",
                 (MethodInfo *)0x0);
      pSVar1 = (__this->fields)._dict;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count
                          (pSVar1,(MethodInfo_4AAD0E0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
        pSVar1 = (__this->fields)._dict;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,pSVar1,
                     (MethodInfo_4AAD970 *)
                     MethodInfo_System_Collections_Generic_Dictionary_object_object_GetEnumerator);
          iStack_68 = iStack_38;
          uStack_64 = uStack_34;
          pIStack_78 = pIStack_48;
          pIStack_70 = pIStack_40;
          auStack_88._0_8_ = auStack_58._0_8_;
          auStack_88._8_8_ = auStack_58._8_8_;
          auStack_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          iVar5 = 0;
          auStack_58._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_88;
          while (bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                   ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                                    auStack_88,
                                    (MethodInfo_4CE66D0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_Enumerator_object_object_MoveNext
                                   ), obj = pIStack_70, bVar2) {
            CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0(pIStack_78,&CStack_90,method_00);
            if (CStack_90.fields.builder == (System_Text_StringBuilder_o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Text_StringBuilder__Append_530ed80
                      ((System_Text_StringBuilder_o *)CStack_90.fields.builder,": ",
                       (MethodInfo *)0x0);
            CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0(obj,&CStack_90,method_01);
            if (iVar5 < iVar3 + -1) {
              if (CStack_90.fields.builder == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Text_StringBuilder__Append_530ed80
                        ((System_Text_StringBuilder_o *)CStack_90.fields.builder,", ",
                         (MethodInfo *)0x0);
            }
            iVar5 = iVar5 + 1;
          }
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                    ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_88,
                     (MethodInfo_4CE67F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Enumerator_object_object_Dispose);
          if ((CStack_90.fields.builder != (System_Text_StringBuilder_o *)0x0) &&
             (System_Text_StringBuilder__Append_530ed80
                        ((System_Text_StringBuilder_o *)CStack_90.fields.builder,"}",
                         (MethodInfo *)0x0), CStack_90.fields.builder != (System_Text_StringBuilder_o *)0x0))
          {
            pSVar4 = (System_String_o *)
                     (**(code **)(*(long *)CStack_90.fields.builder + 0x168))
                               (CStack_90.fields.builder,
                                *(undefined8 *)(*(long *)CStack_90.fields.builder + 0x170));
            return pSVar4;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin$$InvalidateCache
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__InvalidateCache (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x59adc20

void CustomLogic_CustomLogicDictBuiltin__InvalidateCache
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  return;
}


// CustomLogic.CustomLogicDictBuiltin$$EnsureListsUpToDate
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x59ada90

void CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *enumerable;
  CustomLogic_CustomLogicListBuiltin_o *pCVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *enumerable_00;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07545b10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Values);
    Il2CppMethodInitialized_07545b10 = '\x01';
  }
  if (((__this->fields)._listsVersion == (__this->fields)._version) &&
     ((__this->fields)._cachedKeys != (CustomLogic_CustomLogicListBuiltin_o *)0x0)) {
    return;
  }
  pSVar1 = (__this->fields)._dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    enumerable = System_Collections_Generic_Dictionary_object__object___get_Keys
                           (pSVar1,(MethodInfo_4AAD0F0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Keys);
    pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor_58ae130
              (pCVar2,(System_Collections_Generic_IEnumerable_object__o *)enumerable,true,in_RCX);
    (__this->fields)._cachedKeys = pCVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedKeys);
    pSVar1 = (__this->fields)._dict;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      enumerable_00 =
           System_Collections_Generic_Dictionary_object__object___get_Values
                     (pSVar1,(MethodInfo_4AAD2A0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Values);
      pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
      CustomLogic_CustomLogicListBuiltin___ctor_58ae130
                (pCVar2,(System_Collections_Generic_IEnumerable_object__o *)enumerable_00,true,in_RCX);
      (__this->fields)._cachedValues = pCVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedValues);
      (__this->fields)._listsVersion = (__this->fields)._version;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDictBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicDictBuiltin__get_ClassName (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x59ae230

System_String_o *
CustomLogic_CustomLogicDictBuiltin__get_ClassName
          (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545b11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dict");
    Il2CppMethodInitialized_07545b11 = '\x01';
  }
  return "Dict";
}


// CustomLogic.CustomLogicDictBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicDictBuiltin__get_IsAbstract (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x59ae260

bool CustomLogic_CustomLogicDictBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicDictBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicDictBuiltin__get_IsStatic (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x59ae270

bool CustomLogic_CustomLogicDictBuiltin__get_IsStatic
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicDictBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicDictBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x59ae280

bool CustomLogic_CustomLogicDictBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicDictBuiltin$$<ToString>g__Append|18_0
// il2cpp: void CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0 (Il2CppObject* obj, CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o* , const MethodInfo* method);
// 0x59ae0c0

void CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0
               (Il2CppObject *obj,CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o *param_2,
               MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  
  if ((obj == (Il2CppObject *)0x0) || (obj->klass != g_data_07556758)) {
    pSVar1 = (param_2->fields).builder;
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_530f7b0(pSVar1,obj,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pSVar1 = (param_2->fields).builder;
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      pSVar1 = System_Text_StringBuilder__Append_530f6a0(pSVar1,0x22,(MethodInfo *)0x0);
      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
        pSVar1 = System_Text_StringBuilder__Append_530ed80(pSVar1,(System_String_o *)obj,(MethodInfo *)0x0);
        if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Append_530f6a0(pSVar1,0x22,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


