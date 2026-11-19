// Type: CustomLogic.CustomLogicStringBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicStringBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicStringBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicStringBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicStringBuiltin_o* CustomLogic_CustomLogicStringBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5b36ff0

CustomLogic_CustomLogicStringBuiltin_o *
CustomLogic_CustomLogicStringBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07547233 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin);
    Il2CppMethodInitialized_07547233 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicStringBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicStringBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin);
  if (Il2CppMethodInitialized_0754722b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754722b = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicStringBuiltin_o *)__this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicStringBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5b694e0

void CustomLogic_CustomLogicStringBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075472fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_075472fe = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicStringBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5b69550

void CustomLogic_CustomLogicStringBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__FormatFloat>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__FormatFloat_b__3_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b69560

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__FormatFloat_b__3_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t decimals;
  System_String_o *pSVar1;
  float val;
  
  if (Il2CppMethodInitialized_075472ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075472ff = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    val = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__a->max_length & 0xfffffffe) != 0) {
      decimals = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                           (__a->m_Items[1],
                            (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      pSVar1 = CustomLogic_CustomLogicStringBuiltin__FormatFloat(val,decimals,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__FormatFromList>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__FormatFromList_b__4_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b69620

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__FormatFromList_b__4_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  CustomLogic_CustomLogicListBuiltin_o *list;
  
  if (Il2CppMethodInitialized_07547300 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547300 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      list = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (__a->m_Items[1],
                        (MethodInfo_34BDE00 *)
                        MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
      pSVar1 = CustomLogic_CustomLogicStringBuiltin__FormatFromList(pSVar1,list,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Split>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Split_b__5_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b696e0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Split_b__5_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *obj;
  bool removeEmptyEntries;
  System_String_o *toSplit;
  CustomLogic_CustomLogicListBuiltin_o *pCVar3;
  
  if (Il2CppMethodInitialized_07547301 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547301 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    toSplit = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    uVar1 = (uint)__a->max_length;
    if (1 < uVar1) {
      pIVar2 = __a->m_Items[1];
      if ((int)uVar1 < 3) {
        removeEmptyEntries = false;
      }
      else {
        obj = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        removeEmptyEntries =
             CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      }
      pCVar3 = CustomLogic_CustomLogicStringBuiltin__Split
                         (toSplit,pIVar2,removeEmptyEntries,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Join>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Join_b__6_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b697d0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Join_b__6_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicListBuiltin_o *list;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547302 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547302 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    list = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      pSVar1 = CustomLogic_CustomLogicStringBuiltin__Join(list,pSVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Substring>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Substring_b__7_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b69890

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Substring_b__7_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t startIndex;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547303 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547303 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      startIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                             (__a->m_Items[1],
                              (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int)
      ;
      pSVar1 = CustomLogic_CustomLogicStringBuiltin__Substring(pSVar1,startIndex,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__SubstringWithLength>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__SubstringWithLength_b__8_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b69940

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__SubstringWithLength_b__8_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t startIndex;
  int32_t length;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547304 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547304 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      startIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                             (__a->m_Items[1],
                              (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int)
      ;
      if (2 < (uint)__a->max_length) {
        length = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                           (__a->m_Items[2],
                            (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
        pSVar1 = CustomLogic_CustomLogicStringBuiltin__SubstringWithLength
                           (pSVar1,startIndex,length,(MethodInfo *)0x0);
        return (Il2CppObject *)pSVar1;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Length>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Length_b__9_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b69a10

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Length_b__9_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *str;
  Il2CppObject *pIVar1;
  int32_t iStack_c;
  
  if (Il2CppMethodInitialized_07547305 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547305 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar1 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  str = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                  (pIVar1,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  iStack_c = CustomLogic_CustomLogicStringBuiltin__Length(str,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_c);
  return pIVar1;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Replace>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Replace_b__10_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b69ab0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Replace_b__10_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  System_String_o *replace;
  System_String_o *with;
  
  if (Il2CppMethodInitialized_07547306 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547306 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      replace = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
      ;
      if (2 < (uint)__a->max_length) {
        with = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[2],
                          (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        pSVar1 = CustomLogic_CustomLogicStringBuiltin__Replace(pSVar1,replace,with,(MethodInfo *)0x0);
        return (Il2CppObject *)pSVar1;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__11_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b69b80

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__11_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *str;
  System_String_o *match;
  Il2CppObject *pIVar1;
  undefined1 uStack_19;
  
  if (Il2CppMethodInitialized_07547307 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547307 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    str = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar1,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                    );
    if ((__a->max_length & 0xfffffffe) != 0) {
      match = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      uStack_19 = CustomLogic_CustomLogicStringBuiltin__Contains(str,match,(MethodInfo *)0x0);
      pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_19);
      return pIVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__StartsWith>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__StartsWith_b__12_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b69c50

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__StartsWith_b__12_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *str;
  System_String_o *match;
  Il2CppObject *pIVar1;
  undefined1 uStack_19;
  
  if (Il2CppMethodInitialized_07547308 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547308 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    str = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar1,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                    );
    if ((__a->max_length & 0xfffffffe) != 0) {
      match = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      uStack_19 = CustomLogic_CustomLogicStringBuiltin__StartsWith(str,match,(MethodInfo *)0x0);
      pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_19);
      return pIVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__EndsWith>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__EndsWith_b__13_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b69d20

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__EndsWith_b__13_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *str;
  System_String_o *match;
  Il2CppObject *pIVar1;
  undefined1 uStack_19;
  
  if (Il2CppMethodInitialized_07547309 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547309 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    str = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar1,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                    );
    if ((__a->max_length & 0xfffffffe) != 0) {
      match = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      uStack_19 = CustomLogic_CustomLogicStringBuiltin__EndsWith(str,match,(MethodInfo *)0x0);
      pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_19);
      return pIVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Trim>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Trim_b__14_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b69df0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Trim_b__14_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754730a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754730a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  pSVar1 = CustomLogic_CustomLogicStringBuiltin__Trim(pSVar1,(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Insert>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Insert_b__15_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b69e70

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Insert_b__15_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t index;
  System_String_o *pSVar1;
  System_String_o *insert;
  
  if (Il2CppMethodInitialized_0754730b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754730b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      insert = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                          (__a->m_Items[2],
                           (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
        pSVar1 = CustomLogic_CustomLogicStringBuiltin__Insert(pSVar1,insert,index,(MethodInfo *)0x0);
        return (Il2CppObject *)pSVar1;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Capitalize>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Capitalize_b__16_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b69f40

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Capitalize_b__16_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754730c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754730c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  pSVar1 = CustomLogic_CustomLogicStringBuiltin__Capitalize(pSVar1,(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToUpper>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__ToUpper_b__17_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b69fc0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__ToUpper_b__17_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754730d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754730d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  pSVar1 = CustomLogic_CustomLogicStringBuiltin__ToUpper(pSVar1,(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToLower>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__ToLower_b__18_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b6a040

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__ToLower_b__18_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754730e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754730e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  pSVar1 = CustomLogic_CustomLogicStringBuiltin__ToLower(pSVar1,(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__IndexOf>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__IndexOf_b__19_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b6a0c0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__IndexOf_b__19_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *str;
  System_String_o *substring;
  Il2CppObject *pIVar1;
  int32_t iStack_1c;
  
  if (Il2CppMethodInitialized_0754730f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754730f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    str = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar1,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                    );
    if ((__a->max_length & 0xfffffffe) != 0) {
      substring = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (__a->m_Items[1],
                             (MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      iStack_1c = CustomLogic_CustomLogicStringBuiltin__IndexOf(str,substring,(MethodInfo *)0x0);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_1c);
      return pIVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicStringBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5b37110

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicStringBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicStringBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07547234 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Newline");
    il2cpp_codegen_initialize_runtime_metadata(&"Insert");
    il2cpp_codegen_initialize_runtime_metadata(&"Replace");
    il2cpp_codegen_initialize_runtime_metadata(&"IndexOf");
    il2cpp_codegen_initialize_runtime_metadata(&"StartsWith");
    il2cpp_codegen_initialize_runtime_metadata(&"Length");
    il2cpp_codegen_initialize_runtime_metadata(&"FormatFloat");
    il2cpp_codegen_initialize_runtime_metadata(&"Join");
    il2cpp_codegen_initialize_runtime_metadata(&"Split");
    il2cpp_codegen_initialize_runtime_metadata(&"Trim");
    il2cpp_codegen_initialize_runtime_metadata(&"Capitalize");
    il2cpp_codegen_initialize_runtime_metadata(&"ToUpper");
    il2cpp_codegen_initialize_runtime_metadata(&"EndsWith");
    il2cpp_codegen_initialize_runtime_metadata(&"SubstringWithLength");
    il2cpp_codegen_initialize_runtime_metadata(&"Contains");
    il2cpp_codegen_initialize_runtime_metadata(&"ToLower");
    il2cpp_codegen_initialize_runtime_metadata(&"Substring");
    il2cpp_codegen_initialize_runtime_metadata(&"FormatFromList");
    Il2CppMethodInitialized_07547234 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x669c4959) {
    if (uVar2 < 0x3002539a) {
      if (uVar2 < 0xf317949) {
        if (uVar2 == 0x9390c03) {
          bVar1 = System_String__op_Equality(name,"Capitalize",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Capitalize
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0xf317948) {
          bVar1 = System_String__op_Equality(name,"Insert",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Insert
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x16a15383) {
        bVar1 = System_String__op_Equality(name,"Split",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Split
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x30025399) {
        bVar1 = System_String__op_Equality(name,"Join",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Join
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x38e8329d) {
      if (uVar2 == 0x325686ab) {
        bVar1 = System_String__op_Equality(name,"Newline",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreatePropertyBinding__Newline
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x38e8329c) {
        bVar1 = System_String__op_Equality(name,"SubstringWithLength",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__SubstringWithLength
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x43415f31) {
      bVar1 = System_String__op_Equality(name,"ToLower",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToLower
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x5101d130) {
      bVar1 = System_String__op_Equality(name,"FormatFloat",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFloat
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x669c4958) {
      bVar1 = System_String__op_Equality(name,"Contains",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Contains
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xc2b173c9) {
    if (uVar2 < 0xb4ede919) {
      if (uVar2 == 0xaadc121e) {
        bVar1 = System_String__op_Equality(name,"IndexOf",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__IndexOf
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xb4ede918) {
        bVar1 = System_String__op_Equality(name,"ToUpper",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToUpper
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xbbed73fc) {
      bVar1 = System_String__op_Equality(name,"StartsWith",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__StartsWith
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xc2b173c8) {
      bVar1 = System_String__op_Equality(name,"Substring",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Substring
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xe4d54f64) {
    if (uVar2 == 0xcc5e1935) {
      bVar1 = System_String__op_Equality(name,"Length",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Length
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe4d54f63) {
      bVar1 = System_String__op_Equality(name,"Replace",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Replace
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xf5c087e9) {
    bVar1 = System_String__op_Equality(name,"Trim",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Trim
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xfe1f90a3) {
    bVar1 = System_String__op_Equality(name,"EndsWith",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__EndsWith
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xfefe1622) {
    bVar1 = System_String__op_Equality(name,"FormatFromList",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFromList
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicStringBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreatePropertyBinding__Newline
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreatePropertyBinding__Newline (const MethodInfo* method);
// 0x5b37810

CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreatePropertyBinding__Newline(MethodInfo *method)

{
  System_Func_CustomLogicStringBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547235 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings___CreatePropertyBinding__Newline_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicStringBuiltin_object);
    Il2CppMethodInitialized_07547235 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings___CreatePropertyBinding__Newline_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__FormatFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFloat (const MethodInfo* method);
// 0x5b378b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b378e5: jmp 0x5b37955

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFloat(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicStringBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547236 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__FormatFloat_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547236 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicStringBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__FormatFloat_b__3_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__FormatFromList
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFromList (const MethodInfo* method);
// 0x5b379f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b37a25: jmp 0x5b37a95

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFromList(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicStringBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547237 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__FormatFromList_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547237 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicStringBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__FormatFromList_b__4_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Split
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Split (const MethodInfo* method);
// 0x5b37b30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b37b65: jmp 0x5b37bd5

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Split(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicStringBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547238 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Split_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547238 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicStringBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Split_b__5_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Join
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Join (const MethodInfo* method);
// 0x5b37c70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b37ca5: jmp 0x5b37d15

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Join(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicStringBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547239 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Join_b__6_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547239 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicStringBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Join_b__6_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Substring
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Substring (const MethodInfo* method);
// 0x5b37db0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b37de5: jmp 0x5b37e55

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Substring(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicStringBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754723a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Substring_b__7_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754723a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicStringBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Substring_b__7_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__SubstringWithLength
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__SubstringWithLength (const MethodInfo* method);
// 0x5b37ef0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b37f25: jmp 0x5b37f95

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__SubstringWithLength(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicStringBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754723b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__SubstringWithLength_b__8
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754723b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicStringBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__SubstringWithLength_b__8
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Length
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Length (const MethodInfo* method);
// 0x5b38030
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b38065: jmp 0x5b380d5

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Length(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicStringBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754723c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Length_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754723c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicStringBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Length_b__9_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Replace
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Replace (const MethodInfo* method);
// 0x5b38170
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b381a5: jmp 0x5b38215

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Replace(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicStringBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754723d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Replace_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754723d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicStringBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Replace_b__10_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Contains
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Contains (const MethodInfo* method);
// 0x5b382b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b382e5: jmp 0x5b38355

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Contains(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicStringBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754723e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Contains_b__11_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754723e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicStringBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Contains_b__11_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__StartsWith
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__StartsWith (const MethodInfo* method);
// 0x5b383f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b38425: jmp 0x5b38495

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__StartsWith(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicStringBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754723f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__StartsWith_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754723f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__12_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__12_0;
  }
  if (__this == (System_Func_CustomLogicStringBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__StartsWith_b__12_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    pCVar2->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__12_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__EndsWith
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__EndsWith (const MethodInfo* method);
// 0x5b38530
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b38565: jmp 0x5b385d5

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__EndsWith(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicStringBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547240 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__EndsWith_b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547240 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__13_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__13_0;
  }
  if (__this == (System_Func_CustomLogicStringBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__EndsWith_b__13_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    pCVar2->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__13_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Trim
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Trim (const MethodInfo* method);
// 0x5b38670
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b386a5: jmp 0x5b38715

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Trim(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicStringBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547241 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Trim_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547241 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__14_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__14_0;
  }
  if (__this == (System_Func_CustomLogicStringBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Trim_b__14_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    pCVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__14_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Insert
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Insert (const MethodInfo* method);
// 0x5b387b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b387e5: jmp 0x5b38855

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Insert(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicStringBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547242 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Insert_b__15_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547242 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__15_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__15_0;
  }
  if (__this == (System_Func_CustomLogicStringBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Insert_b__15_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    pCVar2->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__15_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Capitalize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Capitalize (const MethodInfo* method);
// 0x5b388f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b38925: jmp 0x5b38995

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Capitalize(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicStringBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547243 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Capitalize_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547243 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__16_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__16_0;
  }
  if (__this == (System_Func_CustomLogicStringBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Capitalize_b__16_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    pCVar2->__9__16_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__16_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__ToUpper
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToUpper (const MethodInfo* method);
// 0x5b38a30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b38a65: jmp 0x5b38ad5

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToUpper(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicStringBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547244 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__ToUpper_b__17_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547244 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__17_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__17_0;
  }
  if (__this == (System_Func_CustomLogicStringBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__ToUpper_b__17_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    pCVar2->__9__17_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__17_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__ToLower
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToLower (const MethodInfo* method);
// 0x5b38b70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b38ba8: jmp 0x5b38c1b

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToLower(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicStringBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547245 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__ToLower_b__18_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547245 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__18_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__18_0;
  }
  if (__this == (System_Func_CustomLogicStringBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__ToLower_b__18_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    pCVar2->__9__18_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__18_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__IndexOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__IndexOf (const MethodInfo* method);
// 0x5b38cb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b38ce8: jmp 0x5b38d5b

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__IndexOf(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicStringBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547246 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__IndexOf_b__19_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547246 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__19_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__19_0;
  }
  if (__this == (System_Func_CustomLogicStringBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__IndexOf_b__19_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields;
    pCVar2->__9__19_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__19_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicStringBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5b38df0

void CustomLogic_CustomLogicStringBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07547247 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Newline");
    il2cpp_codegen_initialize_runtime_metadata(&"Insert");
    il2cpp_codegen_initialize_runtime_metadata(&"Replace");
    il2cpp_codegen_initialize_runtime_metadata(&"IndexOf");
    il2cpp_codegen_initialize_runtime_metadata(&"StartsWith");
    il2cpp_codegen_initialize_runtime_metadata(&"Length");
    il2cpp_codegen_initialize_runtime_metadata(&"FormatFloat");
    il2cpp_codegen_initialize_runtime_metadata(&"Join");
    il2cpp_codegen_initialize_runtime_metadata(&"Split");
    il2cpp_codegen_initialize_runtime_metadata(&"Trim");
    il2cpp_codegen_initialize_runtime_metadata(&"Capitalize");
    il2cpp_codegen_initialize_runtime_metadata(&"ToUpper");
    il2cpp_codegen_initialize_runtime_metadata(&"EndsWith");
    il2cpp_codegen_initialize_runtime_metadata(&"SubstringWithLength");
    il2cpp_codegen_initialize_runtime_metadata(&"Contains");
    il2cpp_codegen_initialize_runtime_metadata(&"ToLower");
    il2cpp_codegen_initialize_runtime_metadata(&"Substring");
    il2cpp_codegen_initialize_runtime_metadata(&"FormatFromList");
    Il2CppMethodInitialized_07547247 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Newline",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FormatFloat",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FormatFromList",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Split",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Join",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Substring",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SubstringWithLength",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Length",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Replace",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Contains",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StartsWith",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EndsWith",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Trim",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Insert",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Capitalize",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToUpper",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToLower",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IndexOf",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$<__CreatePropertyBinding__Newline>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings_____CreatePropertyBinding__Newline_g____getter_2_0 (CustomLogic_CustomLogicStringBuiltin_o* __i, const MethodInfo* method);
// 0x5b390f0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_____CreatePropertyBinding__Newline_g____getter_2_0
          (CustomLogic_CustomLogicStringBuiltin_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754722c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_0754722c = '\x01';
  }
  return (Il2CppObject *)"\n";
}


// CustomLogic.CustomLogicStringBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicStringBuiltin___ctor (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x5b36460

void CustomLogic_CustomLogicStringBuiltin___ctor
               (CustomLogic_CustomLogicStringBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754722b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754722b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicStringBuiltin$$get_Newline
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__get_Newline (const MethodInfo* method);
// 0x5b364d0

System_String_o * CustomLogic_CustomLogicStringBuiltin__get_Newline(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754722c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_0754722c = '\x01';
  }
  return "\n";
}


// CustomLogic.CustomLogicStringBuiltin$$FormatFloat
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__FormatFloat (float val, int32_t decimals, const MethodInfo* method);
// 0x5b36500

System_String_o *
CustomLogic_CustomLogicStringBuiltin__FormatFloat(float val,int32_t decimals,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754722d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_0754722d = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar1 = Utility_Util__FormatFloat(val,decimals,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicStringBuiltin$$FormatFromList
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__FormatFromList (System_String_o* str, CustomLogic_CustomLogicListBuiltin_o* list, const MethodInfo* method);
// 0x5b36570

System_String_o *
CustomLogic_CustomLogicStringBuiltin__FormatFromList
          (System_String_o *str,CustomLogic_CustomLogicListBuiltin_o *list,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *args;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754722e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ToArray);
    Il2CppMethodInitialized_0754722e = '\x01';
  }
  if ((list == (CustomLogic_CustomLogicListBuiltin_o *)0x0) ||
     (__this = (list->fields).List, __this == (System_Collections_Generic_List_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  args = System_Collections_Generic_List_object___ToArray
                   (__this,(MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_object_ToArray);
  pSVar1 = System_String__Format_5302cf0(str,args,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicStringBuiltin$$Split
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicStringBuiltin__Split (System_String_o* toSplit, Il2CppObject* splitter, bool removeEmptyEntries, const MethodInfo* method);
// 0x5b365d0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicStringBuiltin__Split
          (System_String_o *toSplit,Il2CppObject *splitter,bool removeEmptyEntries,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  System_Object_array *pSVar5;
  MethodInfo *pMVar6;
  uint16_t separator;
  int iVar7;
  CustomLogic_CustomLogicListBuiltin_o *__this;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  ulong uVar10;
  ulong uVar11;
  Il2CppClass *pIVar12;
  long lVar13;
  
  if (Il2CppMethodInitialized_0754722f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_0754722f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this,(MethodInfo *)0x0);
  if (splitter == (Il2CppObject *)0x0) goto label_05b36762;
  pIVar12 = splitter->klass;
  if (pIVar12 == g_data_07556758) {
    if (*(int *)&splitter[1].klass == 1) {
      separator = System_String__get_Chars((System_String_o *)splitter,0,(MethodInfo *)0x0);
      if ((toSplit == (System_String_o *)0x0) ||
         (pSVar8 = System_String__Split(toSplit,separator,(uint)removeEmptyEntries,(MethodInfo *)0x0),
         pSVar8 == (System_String_array *)0x0)) goto label_05b36762;
      iVar7 = (int)pSVar8->max_length;
      if (__this != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        if (iVar7 < 1) {
          return __this;
        }
        uVar10 = pSVar8->max_length & 0xffffffff;
        uVar11 = 0;
        while (pMVar6 = MethodInfo_System_Collections_Generic_List_object_Add, uVar11 < uVar10) {
          pSVar4 = (__this->fields).List;
          if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) goto label_05b36762;
          pSVar9 = pSVar8->m_Items[uVar11];
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (pSVar4->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) goto label_05b36762;
          uVar3 = (pSVar4->fields)._size;
          if (uVar3 < (uint)pSVar5->max_length) {
            (pSVar4->fields)._size = uVar3 + 1;
            pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pSVar9;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar4,(Il2CppObject *)pSVar9,
                       (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          }
          uVar11 = uVar11 + 1;
          uVar3 = (uint)pSVar8->max_length;
          uVar10 = (ulong)uVar3;
          if ((long)(int)uVar3 <= (long)uVar11) {
            return __this;
          }
        }
label_05b369eb:
        ThrowIndexOutOfRangeException();
      }
    }
    else {
      if ((toSplit == (System_String_o *)0x0) ||
         (pSVar8 = System_String__Split_5305be0
                             (toSplit,(System_String_o *)splitter,(uint)removeEmptyEntries,(MethodInfo *)0x0),
         pSVar8 == (System_String_array *)0x0)) goto label_05b36762;
      iVar7 = (int)pSVar8->max_length;
      if (__this != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        if (iVar7 < 1) {
          return __this;
        }
        uVar10 = pSVar8->max_length & 0xffffffff;
        uVar11 = 0;
        while (pMVar6 = MethodInfo_System_Collections_Generic_List_object_Add, uVar11 < uVar10) {
          pSVar4 = (__this->fields).List;
          if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) goto label_05b36762;
          pSVar9 = pSVar8->m_Items[uVar11];
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (pSVar4->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) goto label_05b36762;
          uVar3 = (pSVar4->fields)._size;
          if (uVar3 < (uint)pSVar5->max_length) {
            (pSVar4->fields)._size = uVar3 + 1;
            pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pSVar9;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar4,(Il2CppObject *)pSVar9,
                       (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          }
          uVar11 = uVar11 + 1;
          uVar3 = (uint)pSVar8->max_length;
          uVar10 = (ulong)uVar3;
          if ((long)(int)uVar3 <= (long)uVar11) {
            return __this;
          }
        }
        goto label_05b369eb;
      }
    }
  }
  else {
    bVar2 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
    if (((pIVar12->_2).typeHierarchyDepth < bVar2) ||
       ((pIVar12->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin)) {
      il2cpp_codegen_raise_invalid_cast_exception(splitter);
    }
    if (splitter[3].klass == (Il2CppClass *)0x0) goto label_05b36762;
    pSVar8 = (System_String_array *)
             SZArrayNew(TypeInfo_string_array,*(uint32_t *)&((splitter[3].klass)->_1).namespaze);
    pIVar12 = splitter[3].klass;
    if (pIVar12 == (Il2CppClass *)0x0) goto label_05b36762;
    if (pSVar8 != (System_String_array *)0x0) {
      lVar13 = 0;
      uVar10 = 0;
      do {
        if ((long)*(int *)&(pIVar12->_1).namespaze <= (long)uVar10) goto label_05b36843;
        pSVar9 = (System_String_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pIVar12,(int32_t)uVar10,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
        if ((pSVar9 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar9->klass != g_data_07556758)) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar9);
        }
        if ((uint)pSVar8->max_length <= uVar10) goto label_05b369eb;
        pSVar8->m_Items[uVar10] = pSVar9;
        Il2CppCodeGenWriteBarrier((void **)((long)pSVar8->m_Items + lVar13));
        uVar10 = uVar10 + 1;
        pIVar12 = splitter[3].klass;
        lVar13 = lVar13 + 8;
      } while (pIVar12 != (Il2CppClass *)0x0);
      goto label_05b36762;
    }
    if (0 < *(int *)&(pIVar12->_1).namespaze) {
      System_Collections_Generic_List_object___get_Item
                ((System_Collections_Generic_List_object__o *)pIVar12,0,
                 (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
      ThrowNullReferenceException();
    }
label_05b36843:
    if ((toSplit == (System_String_o *)0x0) ||
       (pSVar8 = System_String__Split_5306040(toSplit,pSVar8,(uint)removeEmptyEntries,(MethodInfo *)0x0),
       pSVar8 == (System_String_array *)0x0)) goto label_05b36762;
    iVar7 = (int)pSVar8->max_length;
    if (__this != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (iVar7 < 1) {
        return __this;
      }
      uVar10 = pSVar8->max_length & 0xffffffff;
      uVar11 = 0;
      while (pMVar6 = MethodInfo_System_Collections_Generic_List_object_Add, uVar11 < uVar10) {
        pSVar4 = (__this->fields).List;
        if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) goto label_05b36762;
        pSVar9 = pSVar8->m_Items[uVar11];
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (pSVar4->fields)._items;
        if (pSVar5 == (System_Object_array *)0x0) goto label_05b36762;
        uVar3 = (pSVar4->fields)._size;
        if (uVar3 < (uint)pSVar5->max_length) {
          (pSVar4->fields)._size = uVar3 + 1;
          pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pSVar9;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar4,(Il2CppObject *)pSVar9,(MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method
                    );
        }
        uVar11 = uVar11 + 1;
        uVar3 = (uint)pSVar8->max_length;
        uVar10 = (ulong)uVar3;
        if ((long)(int)uVar3 <= (long)uVar11) {
          return __this;
        }
      }
      goto label_05b369eb;
    }
  }
  if (iVar7 < 1) {
    return __this;
  }
label_05b36762:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin$$Join
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Join (CustomLogic_CustomLogicListBuiltin_o* list, System_String_o* separator, const MethodInfo* method);
// 0x5b36a20
// eh: try 0x5b36b5f..0x5b36d3d -> pad 0x5b36d45 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b36d5d..0x5b36d62 -> pad 0x5b36d85 cleanup
// eh: try 0x5b36d88..0x5b36d92 -> pad 0x5b36d9a catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b36b34: lea r13, [rip + 0x1757ae5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext
// asm:   0x5b36b3b: mov r15, rsp
// asm:   0x5b36b3e: lea rbp, [rip + 0x175fe13]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5b36b45: lea r12, [rip + 0x1a1fb7c]
// asm:   0x5b36b4c: jmp 0x5b36b6a
// asm:   0x5b36ccd: test rbp, rbp
// asm:   0x5b36cd0: je 0x5b36d38
// asm:   0x5b36d26: jmp 0x5b36d38
// asm:   0x5b36d3d: jmp 0x5b36d45
// asm:   0x5b36d3f: jmp 0x5b36d45
// asm:   0x5b36d41: jmp 0x5b36d45
// asm:   0x5b36d43: jmp 0x5b36d45
// asm:   0x5b36d45: mov rbp, rax
// asm:   0x5b36d48: cmp edx, 1
// asm:   0x5b36d4b: jne 0x5b36d88
// asm:   0x5b36d4d: mov rdi, rbp
// asm:   0x5b36d50: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b36d55: mov rbp, qword ptr [rax]
// asm:   0x5b36d58: mov qword ptr [rsp + 0x18], rbp
// asm:   0x5b36d5d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b36d62: lea rax, [rip + 0x17578af]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x5b36d69: mov rsi, qword ptr [rax]
// asm:   0x5b36d6c: mov rdi, rsp
// asm:   0x5b36d6f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b36d74: test rbp, rbp
// asm:   0x5b36d77: je 0x5b36c82
// asm:   0x5b36d7d: mov rdi, rbp
// asm:   0x5b36d80: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b36d85: mov rbp, rax
// asm:   0x5b36d88: lea rdi, [rsp + 0x18]
// asm:   0x5b36d8d: call 0x2fd6a20  ; il2cpp_runtime_helper_02fd6a20()
// asm:   0x5b36d92: mov rdi, rbp
// asm:   0x5b36d95: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b36d9a: mov rdi, rax
// asm:   0x5b36d9d: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
CustomLogic_CustomLogicStringBuiltin__Join
          (CustomLogic_CustomLogicListBuiltin_o *list,System_String_o *separator,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this;
  System_String_c *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar6;
  char *pcVar7;
  System_String_o **ppSVar8;
  System_String_array *pSVar9;
  undefined1 auStack_68 [8];
  undefined1 *puStack_60;
  System_String_o *pSStack_58;
  undefined1 auStack_50 [16];
  System_String_o *pSStack_40;
  System_String_o *pSStack_38;
  
  if (Il2CppMethodInitialized_07547230 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07547230 = '\x01';
  }
  auStack_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  pSStack_58 = (System_String_o *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((list != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this = (list->fields).List, __this != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_50,__this,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    pSStack_58 = pSStack_40;
    auStack_68 = (undefined1  [8])auStack_50._0_8_;
    puStack_60 = (undefined1 *)auStack_50._8_8_;
    auStack_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    auStack_50._8_8_ = auStack_68;
    pSStack_38 = separator;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
      auStack_50._8_8_ = auStack_68;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
      pSVar6 = pSStack_58;
      if (bVar5) {
        if (Il2CppMethodInitialized_07547193 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"null");
          il2cpp_codegen_initialize_runtime_metadata(&"false");
          il2cpp_codegen_initialize_runtime_metadata(&"true");
          Il2CppMethodInitialized_07547193 = '\x01';
        }
        if ((pSVar6 != (System_String_o *)0x0) && (pSVar3 = pSVar6->klass, pSVar3 != g_data_07556758)) {
          if (pSVar3 == g_data_075566f0) {
            il2cpp_vm_Object_Unbox((Il2CppObject *)pSVar6);
          }
          else {
            (*(pSVar3->vtable)._3_ToString.methodPtr)(pSVar6,(pSVar3->vtable)._3_ToString.method);
          }
        }
label_05b36d38:
        ThrowNullReferenceException();
      }
    }
    else {
      while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext),
            pSVar6 = pSStack_58, bVar5) {
        if (Il2CppMethodInitialized_07547193 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"null");
          il2cpp_codegen_initialize_runtime_metadata(&"false");
          il2cpp_codegen_initialize_runtime_metadata(&"true");
          Il2CppMethodInitialized_07547193 = '\x01';
        }
        if (pSVar6 == (System_String_o *)0x0) {
          ppSVar8 = &"null";
label_05b36bf7:
          pSVar6 = *ppSVar8;
        }
        else {
          pSVar3 = pSVar6->klass;
          if (pSVar3 != g_data_07556758) {
            if (pSVar3 == g_data_075566f0) {
              pcVar7 = il2cpp_vm_Object_Unbox((Il2CppObject *)pSVar6);
              if (*pcVar7 == '\0') {
                ppSVar8 = &"false";
              }
              else {
                ppSVar8 = &"true";
              }
              goto label_05b36bf7;
            }
            pSVar6 = (*(pSVar3->vtable)._3_ToString.methodPtr)(pSVar6,(pSVar3->vtable)._3_ToString.method);
          }
        }
        pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar9 = (__this_00->fields)._items;
        if (pSVar9 == (System_String_array *)0x0) goto label_05b36d38;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar9->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar9->m_Items[(int)uVar2] = pSVar6;
          Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar6,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    pSVar6 = pSStack_38;
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar9 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      pSVar6 = System_String__Join(pSVar6,pSVar9,(MethodInfo *)0x0);
      return pSVar6;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin$$Substring
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Substring (System_String_o* str, int32_t startIndex, const MethodInfo* method);
// 0x5b36db0

System_String_o *
CustomLogic_CustomLogicStringBuiltin__Substring(System_String_o *str,int32_t startIndex,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_String__Substring(str,startIndex,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicStringBuiltin$$SubstringWithLength
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__SubstringWithLength (System_String_o* str, int32_t startIndex, int32_t length, const MethodInfo* method);
// 0x5b36dd0

System_String_o *
CustomLogic_CustomLogicStringBuiltin__SubstringWithLength
          (System_String_o *str,int32_t startIndex,int32_t length,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_String__Substring_53042f0(str,startIndex,length,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicStringBuiltin$$Length
// il2cpp: int32_t CustomLogic_CustomLogicStringBuiltin__Length (System_String_o* str, const MethodInfo* method);
// 0x5b36df0

int32_t CustomLogic_CustomLogicStringBuiltin__Length(System_String_o *str,MethodInfo *method)

{
  if (str == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (str->fields)._stringLength;
}


// CustomLogic.CustomLogicStringBuiltin$$Replace
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Replace (System_String_o* str, System_String_o* replace, System_String_o* with, const MethodInfo* method);
// 0x5b36e00

System_String_o *
CustomLogic_CustomLogicStringBuiltin__Replace
          (System_String_o *str,System_String_o *replace,System_String_o *with,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_String__Replace_5304550(str,replace,with,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicStringBuiltin$$Contains
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__Contains (System_String_o* str, System_String_o* match, const MethodInfo* method);
// 0x5b36e20

bool CustomLogic_CustomLogicStringBuiltin__Contains
               (System_String_o *str,System_String_o *match,MethodInfo *method)

{
  bool bVar1;
  
  if (str == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__Contains(str,match,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicStringBuiltin$$StartsWith
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__StartsWith (System_String_o* str, System_String_o* match, const MethodInfo* method);
// 0x5b36e40

bool CustomLogic_CustomLogicStringBuiltin__StartsWith
               (System_String_o *str,System_String_o *match,MethodInfo *method)

{
  bool bVar1;
  
  if (str == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__StartsWith(str,match,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicStringBuiltin$$EndsWith
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__EndsWith (System_String_o* str, System_String_o* match, const MethodInfo* method);
// 0x5b36e60

bool CustomLogic_CustomLogicStringBuiltin__EndsWith
               (System_String_o *str,System_String_o *match,MethodInfo *method)

{
  bool bVar1;
  
  if (str == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__EndsWith(str,match,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicStringBuiltin$$Trim
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Trim (System_String_o* str, const MethodInfo* method);
// 0x5b36e80

System_String_o * CustomLogic_CustomLogicStringBuiltin__Trim(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_String__Trim(str,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicStringBuiltin$$Insert
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Insert (System_String_o* str, System_String_o* insert, int32_t index, const MethodInfo* method);
// 0x5b36ea0

System_String_o *
CustomLogic_CustomLogicStringBuiltin__Insert
          (System_String_o *str,System_String_o *insert,int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_String__Insert(str,index,insert,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicStringBuiltin$$Capitalize
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Capitalize (System_String_o* str, const MethodInfo* method);
// 0x5b36ec0

System_String_o * CustomLogic_CustomLogicStringBuiltin__Capitalize(System_String_o *str,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547231 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_07547231 = '\x01';
    uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    pSVar2 = MiscExtensions__UpperFirstLetter(str,(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = MiscExtensions__UpperFirstLetter(str,(MethodInfo *)0x0);
  return pSVar2;
}


// CustomLogic.CustomLogicStringBuiltin$$ToUpper
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__ToUpper (System_String_o* str, const MethodInfo* method);
// 0x5b36f30

System_String_o * CustomLogic_CustomLogicStringBuiltin__ToUpper(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_String__ToUpper(str,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicStringBuiltin$$ToLower
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__ToLower (System_String_o* str, const MethodInfo* method);
// 0x5b36f50

System_String_o * CustomLogic_CustomLogicStringBuiltin__ToLower(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_String__ToLower(str,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicStringBuiltin$$IndexOf
// il2cpp: int32_t CustomLogic_CustomLogicStringBuiltin__IndexOf (System_String_o* str, System_String_o* substring, const MethodInfo* method);
// 0x5b36f70

int32_t CustomLogic_CustomLogicStringBuiltin__IndexOf
                  (System_String_o *str,System_String_o *substring,MethodInfo *method)

{
  int32_t iVar1;
  
  if (str == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = System_String__IndexOf_53072b0(str,substring,4,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicStringBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__get_ClassName (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x5b36f90

System_String_o *
CustomLogic_CustomLogicStringBuiltin__get_ClassName
          (CustomLogic_CustomLogicStringBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547232 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"String");
    Il2CppMethodInitialized_07547232 = '\x01';
  }
  return "String";
}


// CustomLogic.CustomLogicStringBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__get_IsAbstract (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x5b36fc0

bool CustomLogic_CustomLogicStringBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicStringBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicStringBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__get_IsStatic (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x5b36fd0

bool CustomLogic_CustomLogicStringBuiltin__get_IsStatic
               (CustomLogic_CustomLogicStringBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicStringBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x5b36fe0

bool CustomLogic_CustomLogicStringBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicStringBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


