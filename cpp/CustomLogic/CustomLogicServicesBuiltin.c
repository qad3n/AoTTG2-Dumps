// Type: CustomLogic.CustomLogicServicesBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicServicesBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicServicesBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicServicesBuiltin_o* CustomLogic_CustomLogicServicesBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5af84f0

CustomLogic_CustomLogicServicesBuiltin_o *
CustomLogic_CustomLogicServicesBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546f08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicServicesBuiltin);
    Il2CppMethodInitialized_07546f08 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicServicesBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin);
  if (Il2CppMethodInitialized_07546ef7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546ef7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicServicesBuiltin_o *)__this;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5af9170

void CustomLogic_CustomLogicServicesBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f11 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5af91e0

void CustomLogic_CustomLogicServicesBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__CheckPermissions>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__CheckPermissions_b__2_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af91f0

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__CheckPermissions_b__2_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Settings_AdvancedSettings_o *__this_00;
  bool bVar1;
  bool bVar2;
  System_String_o *key;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  undefined1 uStack_19;
  System_String_o *pSStack_18;
  
  if (Il2CppMethodInitialized_07546f12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f12 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05af92f1:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar3 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                  (pIVar3,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (Il2CppMethodInitialized_07546ef9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07546ef9 = '\x01';
  }
  pSStack_18 = (System_String_o *)0x0;
  bVar2 = false;
  method_00 = (MethodInfo *)&pSStack_18;
  Il2CppCodeGenWriteBarrier((void **)method_00);
  bVar1 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase(method_00);
  if (bVar1) {
    __this_00 = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
    if (__this_00 == (Settings_AdvancedSettings_o *)0x0) goto label_05af92f1;
    bVar2 = Settings_AdvancedSettings__TryGetServiceUrl(__this_00,key,&pSStack_18,(MethodInfo *)0x0);
  }
  uStack_19 = bVar2;
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_19);
  return pIVar3;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetSecret>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__GetSecret_b__3_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af9300

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__GetSecret_b__3_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546f13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f13 = '\x01';
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
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
  pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__GetSecret(pSVar1,method_00);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af9380

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *service;
  System_String_o *route;
  CustomLogic_UserMethod_o *callback;
  
  if (Il2CppMethodInitialized_07546f14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f14 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    service = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      route = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        callback = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[2],
                              (MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
        CustomLogic_CustomLogicServicesBuiltin__Get(service,route,callback,method);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__Post>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Post_b__5_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af9450

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Post_b__5_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *service;
  System_String_o *route;
  System_String_o *data;
  CustomLogic_UserMethod_o *callback;
  System_String_o *format;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07546f15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&"application/json");
    Il2CppMethodInitialized_07546f15 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    service = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar1,(MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      route = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        data = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[2],
                          (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        format = "application/json";
        if ((int)__a->max_length < 4) {
          callback = (CustomLogic_UserMethod_o *)0x0;
        }
        else {
          pIVar1 = __a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          callback = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (pIVar1,(MethodInfo_34BDE00 *)
                                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
          if (4 < (int)__a->max_length) {
            pIVar1 = __a->m_Items[4];
            if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
            }
            format = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (pIVar1,(MethodInfo_34BDE00 *)
                                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
          }
        }
        CustomLogic_CustomLogicServicesBuiltin__Post(service,route,data,callback,format,in_R9);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__Put>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Put_b__6_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af95c0

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Put_b__6_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *service;
  System_String_o *route;
  System_String_o *data;
  CustomLogic_UserMethod_o *callback;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07546f16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f16 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    service = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar1,(MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      route = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        data = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[2],
                          (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if ((int)__a->max_length < 4) {
          callback = (CustomLogic_UserMethod_o *)0x0;
        }
        else {
          pIVar1 = __a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          callback = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (pIVar1,(MethodInfo_34BDE00 *)
                                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
        }
        CustomLogic_CustomLogicServicesBuiltin__Put(service,route,data,callback,in_R8);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__Delete>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Delete_b__7_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af96d0

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Delete_b__7_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *service;
  System_String_o *route;
  CustomLogic_UserMethod_o *callback;
  
  if (Il2CppMethodInitialized_07546f17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f17 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    service = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar1,(MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      route = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if ((int)__a->max_length < 3) {
        callback = (CustomLogic_UserMethod_o *)0x0;
      }
      else {
        pIVar1 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        callback = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (pIVar1,(MethodInfo_34BDE00 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
      }
      CustomLogic_CustomLogicServicesBuiltin__Delete(service,route,callback,method);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicServicesBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5af8610

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicServicesBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicServicesBuiltin_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546f09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"CheckPermissions");
    il2cpp_codegen_initialize_runtime_metadata(&"Put");
    il2cpp_codegen_initialize_runtime_metadata(&"Post");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Get");
    il2cpp_codegen_initialize_runtime_metadata(&"GetSecret");
    Il2CppMethodInitialized_07546f09 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"CheckPermissions",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__CheckPermissions
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__CheckPermissions
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"GetSecret",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__GetSecret
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__GetSecret
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Get",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Get
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Get
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Post",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Post
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Put",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Put((MethodInfo *)pCVar4)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Delete",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Delete
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicServicesBuiltin not found");
  pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__CheckPermissions
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__CheckPermissions (const MethodInfo* method);
// 0x5af8880
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af88b5: jmp 0x5af8925

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__CheckPermissions(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicServicesBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicServicesBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__CheckPermissions_b__2_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f0a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__2_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__2_0;
  }
  if (__this == (System_Func_CustomLogicServicesBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__CheckPermissions_b__2_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    pCVar2->__9__2_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__2_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__GetSecret
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__GetSecret (const MethodInfo* method);
// 0x5af89c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af89f5: jmp 0x5af8a65

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__GetSecret(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicServicesBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicServicesBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__GetSecret_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f0b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicServicesBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__GetSecret_b__3_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__Get
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Get (const MethodInfo* method);
// 0x5af8b00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af8b35: jmp 0x5af8ba5

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Get(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicServicesBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicServicesBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f0c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicServicesBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__Post
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Post (const MethodInfo* method);
// 0x5af8c40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af8c75: jmp 0x5af8ce5

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Post(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicServicesBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicServicesBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Post_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f0d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicServicesBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Post_b__5_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__Put
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Put (const MethodInfo* method);
// 0x5af8d80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af8db5: jmp 0x5af8e25

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Put(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicServicesBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicServicesBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Put_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f0e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicServicesBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Put_b__6_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__Delete
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Delete (const MethodInfo* method);
// 0x5af8ec0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af8ef5: jmp 0x5af8f65

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Delete(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicServicesBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicServicesBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Delete_b__7_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f0f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicServicesBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Delete_b__7_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5af9000

void CustomLogic_CustomLogicServicesBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546f10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"CheckPermissions");
    il2cpp_codegen_initialize_runtime_metadata(&"Put");
    il2cpp_codegen_initialize_runtime_metadata(&"Post");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Get");
    il2cpp_codegen_initialize_runtime_metadata(&"GetSecret");
    Il2CppMethodInitialized_07546f10 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CheckPermissions",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetSecret",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Get",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Post",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Put",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Delete",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16___ctor (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5af82e0

void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16___ctor
               (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_IDisposable_Dispose (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, const MethodInfo* method);
// 0x5af97d0

void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_IDisposable_Dispose
               (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Networking_UnityWebRequest_o *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 1) || (iVar1 == -3)) {
    if (Il2CppMethodInitialized_07546f19 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_07546f19 = '\x01';
    }
    (__this->fields).__1__state = -1;
    obj = (__this->fields)._www_5__2;
    if (obj != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pIVar2 = (Il2CppClass *)obj->klass;
      uVar5 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_System_IDisposable)
          {
            pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar6);
            goto label_05af986f;
          }
          lVar6 = lVar6 + 0x10;
        } while (uVar5 * 0x10 != lVar6);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05af986f:
      (*pVVar4->methodPtr)((Il2CppObject *)obj,pVVar4->method);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__MoveNext (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, const MethodInfo* method);
// 0x5af9880
// eh: try 0x5af98f8..0x5af9bea -> pad 0x5af9bfe (+19 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5af9c1c..0x5af9c21 -> pad 0x5af9c49 cleanup
// eh: try 0x5af9c4c..0x5af9c56 -> pad 0x5af9c5e catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af9bea: jmp 0x5af9c04
// asm:   0x5af9bec: jmp 0x5af9c04
// asm:   0x5af9bee: jmp 0x5af9c04
// asm:   0x5af9bf0: jmp 0x5af9c04
// asm:   0x5af9bf2: jmp 0x5af9c04
// asm:   0x5af9bf4: jmp 0x5af9c04
// asm:   0x5af9bf6: jmp 0x5af9c04
// asm:   0x5af9bf8: jmp 0x5af9c04
// asm:   0x5af9bfa: jmp 0x5af9c04
// asm:   0x5af9bfc: jmp 0x5af9c04
// asm:   0x5af9bfe: jmp 0x5af9c04
// asm:   0x5af9c00: jmp 0x5af9c04
// asm:   0x5af9c02: jmp 0x5af9c04
// asm:   0x5af9c04: mov rbx, rax
// asm:   0x5af9c07: cmp edx, 1
// asm:   0x5af9c0a: jne 0x5af9c4c
// asm:   0x5af9c0c: mov rdi, rbx
// asm:   0x5af9c0f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5af9c14: mov rbx, qword ptr [rax]
// asm:   0x5af9c17: mov qword ptr [rsp + 8], rbx
// asm:   0x5af9c1c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5af9c21: test rbx, rbx
// asm:   0x5af9c24: jne 0x5af9c38
// asm:   0x5af9c38: mov rdi, qword ptr [rsp]
// asm:   0x5af9c3c: call 0x2fd6700  ; il2cpp_runtime_helper_02fd6700()
// asm:   0x5af9c41: mov rdi, rbx
// asm:   0x5af9c44: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5af9c49: mov rbx, rax
// asm:   0x5af9c4c: lea rdi, [rsp + 8]
// asm:   0x5af9c51: call 0x2fd6590  ; il2cpp_runtime_helper_02fd6590()
// asm:   0x5af9c56: mov rdi, rbx
// asm:   0x5af9c59: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5af9c5e: mov rdi, rax
// asm:   0x5af9c61: call 0x2ab61e0  ; __clang_call_terminate()

bool CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__MoveNext
               (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *pCVar4;
  int32_t iVar5;
  UnityEngine_Networking_UnityWebRequest_o *pUVar6;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *pUVar7;
  System_String_o *pSVar8;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar9;
  VirtualInvokeData *pVVar10;
  ulong uVar11;
  bool bVar12;
  MethodInfo *method_00;
  long lVar13;
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  System_Enum_o local_40;
  int32_t local_30;
  
  local_58 = __this;
  if (Il2CppMethodInitialized_07546f18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Networking_UnityWebRequest_Result);
    Il2CppMethodInitialized_07546f18 = '\x01';
  }
  local_48 = (undefined1 *)&local_58;
  local_50 = 0;
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -3;
    pUVar6 = (__this->fields)._www_5__2;
    if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar8 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    method_00 = (MethodInfo *)0x0;
    local_48 = (undefined1 *)&local_58;
    iVar5 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar6,(MethodInfo *)0x0);
    if (iVar5 != 1) {
      pSVar8 = CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON
                         ((local_58->fields)._www_5__2,method_00);
    }
    userMethod = (local_58->fields).callback;
    if (userMethod != (CustomLogic_UserMethod_o *)0x0) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        userMethod = (local_58->fields).callback;
      }
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      if (parameterValues == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      if (pSVar8 != (System_String_o *)0x0) {
        pIVar9 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pSVar8,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar9 == (Il2CppObject *)0x0) {
          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
        }
      }
      if ((int)parameterValues->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[0] = (Il2CppObject *)pSVar8;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
      pUVar6 = (local_58->fields)._www_5__2;
      if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_30 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar6,(MethodInfo *)0x0);
      local_40.klass = (System_Enum_c *)TypeInfo_UnityEngine_Networking_UnityWebRequest_Result;
      local_40.monitor = (void *)0xffffffffffffffff;
      pSVar8 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
      if (pSVar8 != (System_String_o *)0x0) {
        pIVar9 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pSVar8,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar9 == (Il2CppObject *)0x0) {
          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
        }
      }
      if ((parameterValues->max_length & 0xfffffffe) == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[1] = (Il2CppObject *)pSVar8;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1);
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    }
    pCVar4 = local_58;
    if (Il2CppMethodInitialized_07546f19 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_07546f19 = '\x01';
    }
    (pCVar4->fields).__1__state = -1;
    pUVar6 = (pCVar4->fields)._www_5__2;
    if (pUVar6 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pIVar2 = (Il2CppClass *)pUVar6->klass;
      uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar11 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_System_IDisposable
             ) {
            pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
            goto label_05af9b7d;
          }
          lVar13 = lVar13 + 0x10;
        } while (uVar11 * 0x10 != lVar13);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          ((Il2CppObject *)pUVar6,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05af9b7d:
      (*pVVar10->methodPtr)((Il2CppObject *)pUVar6,pVVar10->method);
    }
    (local_58->fields)._www_5__2 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    bVar12 = false;
    Il2CppCodeGenWriteBarrier(&(local_58->fields)._www_5__2);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    local_48 = (undefined1 *)&local_58;
    pUVar6 = UnityEngine_Networking_UnityWebRequest__Delete((__this->fields).uri,(MethodInfo *)0x0);
    (local_58->fields)._www_5__2 = pUVar6;
    Il2CppCodeGenWriteBarrier(&(local_58->fields)._www_5__2);
    (local_58->fields).__1__state = -3;
    pUVar6 = (local_58->fields)._www_5__2;
    if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Networking_UnityWebRequest__set_timeout(pUVar6,0xf,(MethodInfo *)0x0);
    pUVar6 = (local_58->fields)._www_5__2;
    if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar7 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar6,(MethodInfo *)0x0);
    (local_58->fields).__2__current = (Il2CppObject *)pUVar7;
    Il2CppCodeGenWriteBarrier(&(local_58->fields).__2__current);
    (local_58->fields).__1__state = 1;
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  return bVar12;
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$<>m__Finally1
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16____m__Finally1 (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, const MethodInfo* method);
// 0x5af9c70

void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16____m__Finally1
               (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this,MethodInfo *method)

{
  UnityEngine_Networking_UnityWebRequest_o *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_07546f19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_07546f19 = '\x01';
  }
  (__this->fields).__1__state = -1;
  obj = (__this->fields)._www_5__2;
  if (obj == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    return;
  }
  pIVar1 = (Il2CppClass *)obj->klass;
  uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar4 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar5) == TypeInfo_System_IDisposable) {
        pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar5);
        goto label_05af9cff;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 * 0x10 != lVar5);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05af9cff:
  (*pVVar3->methodPtr)((Il2CppObject *)obj,pVVar3->method);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, const MethodInfo* method);
// 0x5af9d10

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, const MethodInfo* method);
// 0x5af9d20

void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_CustomLogic_CustomLogicServicesBuiltin_DeleteRequest_d__16_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, const MethodInfo* method);
// 0x5af9d60

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13___ctor (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5af8280

void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13___ctor
               (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_IDisposable_Dispose (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, const MethodInfo* method);
// 0x5af9d70

void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_IDisposable_Dispose
               (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Networking_UnityWebRequest_o *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 1) || (iVar1 == -3)) {
    if (Il2CppMethodInitialized_07546f1b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_07546f1b = '\x01';
    }
    (__this->fields).__1__state = -1;
    obj = (__this->fields)._webRequest_5__2;
    if (obj != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pIVar2 = (Il2CppClass *)obj->klass;
      uVar5 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_System_IDisposable)
          {
            pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar6);
            goto label_05af9e0f;
          }
          lVar6 = lVar6 + 0x10;
        } while (uVar5 * 0x10 != lVar6);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05af9e0f:
      (*pVVar4->methodPtr)((Il2CppObject *)obj,pVVar4->method);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__MoveNext (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, const MethodInfo* method);
// 0x5af9e20
// eh: try 0x5af9e98..0x5afa1a4 -> pad 0x5afa1be (+23 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5afa1dc..0x5afa1e1 -> pad 0x5afa209 cleanup
// eh: try 0x5afa20c..0x5afa216 -> pad 0x5afa21e catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5afa1a4: jmp 0x5afa1c4
// asm:   0x5afa1a6: jmp 0x5afa1c4
// asm:   0x5afa1a8: jmp 0x5afa1c4
// asm:   0x5afa1aa: jmp 0x5afa1c4
// asm:   0x5afa1ac: jmp 0x5afa1c4
// asm:   0x5afa1ae: jmp 0x5afa1c4
// asm:   0x5afa1b0: jmp 0x5afa1c4
// asm:   0x5afa1b2: jmp 0x5afa1c4
// asm:   0x5afa1b4: jmp 0x5afa1c4
// asm:   0x5afa1b6: jmp 0x5afa1c4
// asm:   0x5afa1b8: jmp 0x5afa1c4
// asm:   0x5afa1ba: jmp 0x5afa1c4
// asm:   0x5afa1bc: jmp 0x5afa1c4
// asm:   0x5afa1be: jmp 0x5afa1c4
// asm:   0x5afa1c0: jmp 0x5afa1c4
// asm:   0x5afa1c2: jmp 0x5afa1c4
// asm:   0x5afa1c4: mov rbx, rax
// asm:   0x5afa1c7: cmp edx, 1
// asm:   0x5afa1ca: jne 0x5afa20c
// asm:   0x5afa1cc: mov rdi, rbx
// asm:   0x5afa1cf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5afa1d4: mov rbx, qword ptr [rax]
// asm:   0x5afa1d7: mov qword ptr [rsp + 8], rbx
// asm:   0x5afa1dc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5afa1e1: test rbx, rbx
// asm:   0x5afa1e4: jne 0x5afa1f8
// asm:   0x5afa1f8: mov rdi, qword ptr [rsp]
// asm:   0x5afa1fc: call 0x2fd67b0  ; il2cpp_runtime_helper_02fd67b0()
// asm:   0x5afa201: mov rdi, rbx
// asm:   0x5afa204: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5afa209: mov rbx, rax
// asm:   0x5afa20c: lea rdi, [rsp + 8]
// asm:   0x5afa211: call 0x2fd65b0  ; il2cpp_runtime_helper_02fd65b0()
// asm:   0x5afa216: mov rdi, rbx
// asm:   0x5afa219: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5afa21e: mov rdi, rax
// asm:   0x5afa221: call 0x2ab61e0  ; __clang_call_terminate()

bool CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__MoveNext
               (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *pCVar4;
  int32_t iVar5;
  UnityEngine_Networking_UnityWebRequest_o *pUVar6;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *pUVar7;
  UnityEngine_Networking_DownloadHandler_o *__this_01;
  System_String_o *pSVar8;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar9;
  VirtualInvokeData *pVVar10;
  ulong uVar11;
  bool bVar12;
  MethodInfo *method_00;
  long lVar13;
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  System_Enum_o local_40;
  int32_t local_30;
  
  local_58 = __this;
  if (Il2CppMethodInitialized_07546f1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Networking_UnityWebRequest_Result);
    Il2CppMethodInitialized_07546f1a = '\x01';
  }
  local_48 = (undefined1 *)&local_58;
  local_50 = 0;
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -3;
    pUVar6 = (__this->fields)._webRequest_5__2;
    if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)0x0;
    local_48 = (undefined1 *)&local_58;
    iVar5 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar6,(MethodInfo *)0x0);
    pUVar6 = (local_58->fields)._webRequest_5__2;
    if (iVar5 == 1) {
      if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_01 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(pUVar6,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Networking_DownloadHandler_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar8 = UnityEngine_Networking_DownloadHandler__get_text(__this_01,(MethodInfo *)0x0);
    }
    else {
      pSVar8 = CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON(pUVar6,method_00);
    }
    userMethod = (local_58->fields).callback;
    if (userMethod != (CustomLogic_UserMethod_o *)0x0) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        userMethod = (local_58->fields).callback;
      }
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      if (parameterValues == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      if (pSVar8 != (System_String_o *)0x0) {
        pIVar9 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pSVar8,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar9 == (Il2CppObject *)0x0) {
          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
        }
      }
      if ((int)parameterValues->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[0] = (Il2CppObject *)pSVar8;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
      pUVar6 = (local_58->fields)._webRequest_5__2;
      if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_30 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar6,(MethodInfo *)0x0);
      local_40.klass = (System_Enum_c *)TypeInfo_UnityEngine_Networking_UnityWebRequest_Result;
      local_40.monitor = (void *)0xffffffffffffffff;
      pSVar8 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
      if (pSVar8 != (System_String_o *)0x0) {
        pIVar9 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pSVar8,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar9 == (Il2CppObject *)0x0) {
          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
        }
      }
      if ((parameterValues->max_length & 0xfffffffe) == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[1] = (Il2CppObject *)pSVar8;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1);
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    }
    pCVar4 = local_58;
    if (Il2CppMethodInitialized_07546f1b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_07546f1b = '\x01';
    }
    (pCVar4->fields).__1__state = -1;
    pUVar6 = (pCVar4->fields)._webRequest_5__2;
    if (pUVar6 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pIVar2 = (Il2CppClass *)pUVar6->klass;
      uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar11 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_System_IDisposable
             ) {
            pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
            goto label_05afa12d;
          }
          lVar13 = lVar13 + 0x10;
        } while (uVar11 * 0x10 != lVar13);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          ((Il2CppObject *)pUVar6,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05afa12d:
      (*pVVar10->methodPtr)((Il2CppObject *)pUVar6,pVVar10->method);
    }
    (local_58->fields)._webRequest_5__2 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    bVar12 = false;
    Il2CppCodeGenWriteBarrier(&(local_58->fields)._webRequest_5__2);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    local_48 = (undefined1 *)&local_58;
    pUVar6 = UnityEngine_Networking_UnityWebRequest__Get((__this->fields).uri,(MethodInfo *)0x0);
    (local_58->fields)._webRequest_5__2 = pUVar6;
    Il2CppCodeGenWriteBarrier(&(local_58->fields)._webRequest_5__2);
    (local_58->fields).__1__state = -3;
    pUVar6 = (local_58->fields)._webRequest_5__2;
    if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Networking_UnityWebRequest__set_timeout(pUVar6,0xf,(MethodInfo *)0x0);
    pUVar6 = (local_58->fields)._webRequest_5__2;
    if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar7 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar6,(MethodInfo *)0x0);
    (local_58->fields).__2__current = (Il2CppObject *)pUVar7;
    Il2CppCodeGenWriteBarrier(&(local_58->fields).__2__current);
    (local_58->fields).__1__state = 1;
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  return bVar12;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$<>m__Finally1
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13____m__Finally1 (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, const MethodInfo* method);
// 0x5afa230

void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13____m__Finally1
               (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this,MethodInfo *method)

{
  UnityEngine_Networking_UnityWebRequest_o *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_07546f1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_07546f1b = '\x01';
  }
  (__this->fields).__1__state = -1;
  obj = (__this->fields)._webRequest_5__2;
  if (obj == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    return;
  }
  pIVar1 = (Il2CppClass *)obj->klass;
  uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar4 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar5) == TypeInfo_System_IDisposable) {
        pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar5);
        goto label_05afa2bf;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 * 0x10 != lVar5);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05afa2bf:
  (*pVVar3->methodPtr)((Il2CppObject *)obj,pVVar3->method);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, const MethodInfo* method);
// 0x5afa2d0

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, const MethodInfo* method);
// 0x5afa2e0

void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_CustomLogic_CustomLogicServicesBuiltin_GetRequest_d__13_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, const MethodInfo* method);
// 0x5afa320

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14___ctor (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5af82a0

void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14___ctor
               (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_IDisposable_Dispose (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, const MethodInfo* method);
// 0x5afa330

void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_IDisposable_Dispose
               (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Networking_UnityWebRequest_o *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 1) || (iVar1 == -3)) {
    if (Il2CppMethodInitialized_07546f1d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_07546f1d = '\x01';
    }
    (__this->fields).__1__state = -1;
    obj = (__this->fields)._www_5__2;
    if (obj != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pIVar2 = (Il2CppClass *)obj->klass;
      uVar5 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_System_IDisposable)
          {
            pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar6);
            goto label_05afa3cf;
          }
          lVar6 = lVar6 + 0x10;
        } while (uVar5 * 0x10 != lVar6);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05afa3cf:
      (*pVVar4->methodPtr)((Il2CppObject *)obj,pVVar4->method);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__MoveNext (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, const MethodInfo* method);
// 0x5afa3e0
// eh: try 0x5afa460..0x5afa764 -> pad 0x5afa77e (+23 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5afa79c..0x5afa7a1 -> pad 0x5afa7c9 cleanup
// eh: try 0x5afa7cc..0x5afa7d6 -> pad 0x5afa7de catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5afa764: jmp 0x5afa784
// asm:   0x5afa766: jmp 0x5afa784
// asm:   0x5afa768: jmp 0x5afa784
// asm:   0x5afa76a: jmp 0x5afa784
// asm:   0x5afa76c: jmp 0x5afa784
// asm:   0x5afa76e: jmp 0x5afa784
// asm:   0x5afa770: jmp 0x5afa784
// asm:   0x5afa772: jmp 0x5afa784
// asm:   0x5afa774: jmp 0x5afa784
// asm:   0x5afa776: jmp 0x5afa784
// asm:   0x5afa778: jmp 0x5afa784
// asm:   0x5afa77a: jmp 0x5afa784
// asm:   0x5afa77c: jmp 0x5afa784
// asm:   0x5afa77e: jmp 0x5afa784
// asm:   0x5afa780: jmp 0x5afa784
// asm:   0x5afa782: jmp 0x5afa784
// asm:   0x5afa784: mov rbx, rax
// asm:   0x5afa787: cmp edx, 1
// asm:   0x5afa78a: jne 0x5afa7cc
// asm:   0x5afa78c: mov rdi, rbx
// asm:   0x5afa78f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5afa794: mov rbx, qword ptr [rax]
// asm:   0x5afa797: mov qword ptr [rsp + 8], rbx
// asm:   0x5afa79c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5afa7a1: test rbx, rbx
// asm:   0x5afa7a4: jne 0x5afa7b8
// asm:   0x5afa7b8: mov rdi, qword ptr [rsp]
// asm:   0x5afa7bc: call 0x2fd6860  ; il2cpp_runtime_helper_02fd6860()
// asm:   0x5afa7c1: mov rdi, rbx
// asm:   0x5afa7c4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5afa7c9: mov rbx, rax
// asm:   0x5afa7cc: lea rdi, [rsp + 8]
// asm:   0x5afa7d1: call 0x2fd65d0  ; il2cpp_runtime_helper_02fd65d0()
// asm:   0x5afa7d6: mov rdi, rbx
// asm:   0x5afa7d9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5afa7de: mov rdi, rax
// asm:   0x5afa7e1: call 0x2ab61e0  ; __clang_call_terminate()

bool CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__MoveNext
               (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *pCVar4;
  int32_t iVar5;
  UnityEngine_Networking_UnityWebRequest_o *pUVar6;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *pUVar7;
  UnityEngine_Networking_DownloadHandler_o *__this_01;
  System_String_o *pSVar8;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar9;
  VirtualInvokeData *pVVar10;
  ulong uVar11;
  bool bVar12;
  MethodInfo *method_00;
  long lVar13;
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  System_Enum_o local_40;
  int32_t local_30;
  
  local_58 = __this;
  if (Il2CppMethodInitialized_07546f1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Networking_UnityWebRequest_Result);
    Il2CppMethodInitialized_07546f1c = '\x01';
  }
  local_48 = (undefined1 *)&local_58;
  local_50 = 0;
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -3;
    pUVar6 = (__this->fields)._www_5__2;
    if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)0x0;
    local_48 = (undefined1 *)&local_58;
    iVar5 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar6,(MethodInfo *)0x0);
    pUVar6 = (local_58->fields)._www_5__2;
    if (iVar5 == 1) {
      if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_01 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(pUVar6,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Networking_DownloadHandler_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar8 = UnityEngine_Networking_DownloadHandler__get_text(__this_01,(MethodInfo *)0x0);
    }
    else {
      pSVar8 = CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON(pUVar6,method_00);
    }
    userMethod = (local_58->fields).callback;
    if (userMethod != (CustomLogic_UserMethod_o *)0x0) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        userMethod = (local_58->fields).callback;
      }
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      if (parameterValues == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      if (pSVar8 != (System_String_o *)0x0) {
        pIVar9 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pSVar8,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar9 == (Il2CppObject *)0x0) {
          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
        }
      }
      if ((int)parameterValues->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[0] = (Il2CppObject *)pSVar8;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
      pUVar6 = (local_58->fields)._www_5__2;
      if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_30 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar6,(MethodInfo *)0x0);
      local_40.klass = (System_Enum_c *)TypeInfo_UnityEngine_Networking_UnityWebRequest_Result;
      local_40.monitor = (void *)0xffffffffffffffff;
      pSVar8 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
      if (pSVar8 != (System_String_o *)0x0) {
        pIVar9 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pSVar8,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar9 == (Il2CppObject *)0x0) {
          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
        }
      }
      if ((parameterValues->max_length & 0xfffffffe) == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[1] = (Il2CppObject *)pSVar8;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1);
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    }
    pCVar4 = local_58;
    if (Il2CppMethodInitialized_07546f1d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_07546f1d = '\x01';
    }
    (pCVar4->fields).__1__state = -1;
    pUVar6 = (pCVar4->fields)._www_5__2;
    if (pUVar6 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pIVar2 = (Il2CppClass *)pUVar6->klass;
      uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar11 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_System_IDisposable
             ) {
            pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
            goto label_05afa6ed;
          }
          lVar13 = lVar13 + 0x10;
        } while (uVar11 * 0x10 != lVar13);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          ((Il2CppObject *)pUVar6,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05afa6ed:
      (*pVVar10->methodPtr)((Il2CppObject *)pUVar6,pVVar10->method);
    }
    (local_58->fields)._www_5__2 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    bVar12 = false;
    Il2CppCodeGenWriteBarrier(&(local_58->fields)._www_5__2);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    local_48 = (undefined1 *)&local_58;
    pUVar6 = UnityEngine_Networking_UnityWebRequest__Post
                       ((__this->fields).uri,(__this->fields).data,(__this->fields).format,(MethodInfo *)0x0);
    (local_58->fields)._www_5__2 = pUVar6;
    Il2CppCodeGenWriteBarrier(&(local_58->fields)._www_5__2);
    (local_58->fields).__1__state = -3;
    pUVar6 = (local_58->fields)._www_5__2;
    if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Networking_UnityWebRequest__set_timeout(pUVar6,0xf,(MethodInfo *)0x0);
    pUVar6 = (local_58->fields)._www_5__2;
    if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar7 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar6,(MethodInfo *)0x0);
    (local_58->fields).__2__current = (Il2CppObject *)pUVar7;
    Il2CppCodeGenWriteBarrier(&(local_58->fields).__2__current);
    (local_58->fields).__1__state = 1;
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  return bVar12;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$<>m__Finally1
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14____m__Finally1 (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, const MethodInfo* method);
// 0x5afa7f0

void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14____m__Finally1
               (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this,MethodInfo *method)

{
  UnityEngine_Networking_UnityWebRequest_o *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_07546f1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_07546f1d = '\x01';
  }
  (__this->fields).__1__state = -1;
  obj = (__this->fields)._www_5__2;
  if (obj == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    return;
  }
  pIVar1 = (Il2CppClass *)obj->klass;
  uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar4 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar5) == TypeInfo_System_IDisposable) {
        pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar5);
        goto label_05afa87f;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 * 0x10 != lVar5);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05afa87f:
  (*pVVar3->methodPtr)((Il2CppObject *)obj,pVVar3->method);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, const MethodInfo* method);
// 0x5afa890

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, const MethodInfo* method);
// 0x5afa8a0

void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_CustomLogic_CustomLogicServicesBuiltin_PostRequest_d__14_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, const MethodInfo* method);
// 0x5afa8e0

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15___ctor (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5af82c0

void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15___ctor
               (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_IDisposable_Dispose (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, const MethodInfo* method);
// 0x5afa8f0

void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_IDisposable_Dispose
               (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Networking_UnityWebRequest_o *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 1) || (iVar1 == -3)) {
    if (Il2CppMethodInitialized_07546f1f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_07546f1f = '\x01';
    }
    (__this->fields).__1__state = -1;
    obj = (__this->fields)._www_5__2;
    if (obj != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pIVar2 = (Il2CppClass *)obj->klass;
      uVar5 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_System_IDisposable)
          {
            pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar6);
            goto label_05afa98f;
          }
          lVar6 = lVar6 + 0x10;
        } while (uVar5 * 0x10 != lVar6);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05afa98f:
      (*pVVar4->methodPtr)((Il2CppObject *)obj,pVVar4->method);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__MoveNext (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, const MethodInfo* method);
// 0x5afa9a0
// eh: try 0x5afaa1c..0x5afad24 -> pad 0x5afad3e (+23 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5afad5c..0x5afad61 -> pad 0x5afad89 cleanup
// eh: try 0x5afad8c..0x5afad96 -> pad 0x5afad9e catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5afad24: jmp 0x5afad44
// asm:   0x5afad26: jmp 0x5afad44
// asm:   0x5afad28: jmp 0x5afad44
// asm:   0x5afad2a: jmp 0x5afad44
// asm:   0x5afad2c: jmp 0x5afad44
// asm:   0x5afad2e: jmp 0x5afad44
// asm:   0x5afad30: jmp 0x5afad44
// asm:   0x5afad32: jmp 0x5afad44
// asm:   0x5afad34: jmp 0x5afad44
// asm:   0x5afad36: jmp 0x5afad44
// asm:   0x5afad38: jmp 0x5afad44
// asm:   0x5afad3a: jmp 0x5afad44
// asm:   0x5afad3c: jmp 0x5afad44
// asm:   0x5afad3e: jmp 0x5afad44
// asm:   0x5afad40: jmp 0x5afad44
// asm:   0x5afad42: jmp 0x5afad44
// asm:   0x5afad44: mov rbx, rax
// asm:   0x5afad47: cmp edx, 1
// asm:   0x5afad4a: jne 0x5afad8c
// asm:   0x5afad4c: mov rdi, rbx
// asm:   0x5afad4f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5afad54: mov rbx, qword ptr [rax]
// asm:   0x5afad57: mov qword ptr [rsp + 8], rbx
// asm:   0x5afad5c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5afad61: test rbx, rbx
// asm:   0x5afad64: jne 0x5afad78
// asm:   0x5afad78: mov rdi, qword ptr [rsp]
// asm:   0x5afad7c: call 0x2fd6910  ; il2cpp_runtime_helper_02fd6910()
// asm:   0x5afad81: mov rdi, rbx
// asm:   0x5afad84: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5afad89: mov rbx, rax
// asm:   0x5afad8c: lea rdi, [rsp + 8]
// asm:   0x5afad91: call 0x2fd65f0  ; il2cpp_runtime_helper_02fd65f0()
// asm:   0x5afad96: mov rdi, rbx
// asm:   0x5afad99: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5afad9e: mov rdi, rax
// asm:   0x5afada1: call 0x2ab61e0  ; __clang_call_terminate()

bool CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__MoveNext
               (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *pCVar4;
  int32_t iVar5;
  UnityEngine_Networking_UnityWebRequest_o *pUVar6;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *pUVar7;
  UnityEngine_Networking_DownloadHandler_o *__this_01;
  System_String_o *pSVar8;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar9;
  VirtualInvokeData *pVVar10;
  ulong uVar11;
  bool bVar12;
  MethodInfo *method_00;
  long lVar13;
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  System_Enum_o local_40;
  int32_t local_30;
  
  local_58 = __this;
  if (Il2CppMethodInitialized_07546f1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Networking_UnityWebRequest_Result);
    Il2CppMethodInitialized_07546f1e = '\x01';
  }
  local_48 = (undefined1 *)&local_58;
  local_50 = 0;
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -3;
    pUVar6 = (__this->fields)._www_5__2;
    if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)0x0;
    local_48 = (undefined1 *)&local_58;
    iVar5 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar6,(MethodInfo *)0x0);
    pUVar6 = (local_58->fields)._www_5__2;
    if (iVar5 == 1) {
      if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_01 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(pUVar6,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Networking_DownloadHandler_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar8 = UnityEngine_Networking_DownloadHandler__get_text(__this_01,(MethodInfo *)0x0);
    }
    else {
      pSVar8 = CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON(pUVar6,method_00);
    }
    userMethod = (local_58->fields).callback;
    if (userMethod != (CustomLogic_UserMethod_o *)0x0) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        userMethod = (local_58->fields).callback;
      }
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      if (parameterValues == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      if (pSVar8 != (System_String_o *)0x0) {
        pIVar9 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pSVar8,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar9 == (Il2CppObject *)0x0) {
          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
        }
      }
      if ((int)parameterValues->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[0] = (Il2CppObject *)pSVar8;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
      pUVar6 = (local_58->fields)._www_5__2;
      if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_30 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar6,(MethodInfo *)0x0);
      local_40.klass = (System_Enum_c *)TypeInfo_UnityEngine_Networking_UnityWebRequest_Result;
      local_40.monitor = (void *)0xffffffffffffffff;
      pSVar8 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
      if (pSVar8 != (System_String_o *)0x0) {
        pIVar9 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pSVar8,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar9 == (Il2CppObject *)0x0) {
          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
        }
      }
      if ((parameterValues->max_length & 0xfffffffe) == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[1] = (Il2CppObject *)pSVar8;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1);
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    }
    pCVar4 = local_58;
    if (Il2CppMethodInitialized_07546f1f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_07546f1f = '\x01';
    }
    (pCVar4->fields).__1__state = -1;
    pUVar6 = (pCVar4->fields)._www_5__2;
    if (pUVar6 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pIVar2 = (Il2CppClass *)pUVar6->klass;
      uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar11 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_System_IDisposable
             ) {
            pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
            goto label_05afacad;
          }
          lVar13 = lVar13 + 0x10;
        } while (uVar11 * 0x10 != lVar13);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          ((Il2CppObject *)pUVar6,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05afacad:
      (*pVVar10->methodPtr)((Il2CppObject *)pUVar6,pVVar10->method);
    }
    (local_58->fields)._www_5__2 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    bVar12 = false;
    Il2CppCodeGenWriteBarrier(&(local_58->fields)._www_5__2);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    local_48 = (undefined1 *)&local_58;
    pUVar6 = UnityEngine_Networking_UnityWebRequest__Put
                       ((__this->fields).uri,(__this->fields).data,(MethodInfo *)0x0);
    (local_58->fields)._www_5__2 = pUVar6;
    Il2CppCodeGenWriteBarrier(&(local_58->fields)._www_5__2);
    (local_58->fields).__1__state = -3;
    pUVar6 = (local_58->fields)._www_5__2;
    if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Networking_UnityWebRequest__set_timeout(pUVar6,0xf,(MethodInfo *)0x0);
    pUVar6 = (local_58->fields)._www_5__2;
    if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar7 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar6,(MethodInfo *)0x0);
    (local_58->fields).__2__current = (Il2CppObject *)pUVar7;
    Il2CppCodeGenWriteBarrier(&(local_58->fields).__2__current);
    (local_58->fields).__1__state = 1;
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  return bVar12;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$<>m__Finally1
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15____m__Finally1 (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, const MethodInfo* method);
// 0x5afadb0

void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15____m__Finally1
               (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this,MethodInfo *method)

{
  UnityEngine_Networking_UnityWebRequest_o *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_07546f1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_07546f1f = '\x01';
  }
  (__this->fields).__1__state = -1;
  obj = (__this->fields)._www_5__2;
  if (obj == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    return;
  }
  pIVar1 = (Il2CppClass *)obj->klass;
  uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar4 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar5) == TypeInfo_System_IDisposable) {
        pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar5);
        goto label_05afae3f;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 * 0x10 != lVar5);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05afae3f:
  (*pVVar3->methodPtr)((Il2CppObject *)obj,pVVar3->method);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, const MethodInfo* method);
// 0x5afae50

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, const MethodInfo* method);
// 0x5afae60

void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_CustomLogic_CustomLogicServicesBuiltin_PutRequest_d__15_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, const MethodInfo* method);
// 0x5afaea0

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin___ctor (CustomLogic_CustomLogicServicesBuiltin_o* __this, const MethodInfo* method);
// 0x5af7370

void CustomLogic_CustomLogicServicesBuiltin___ctor
               (CustomLogic_CustomLogicServicesBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ef7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546ef7 = '\x01';
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


// CustomLogic.CustomLogicServicesBuiltin$$IsAllowedToRunBase
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase (const MethodInfo* method);
// 0x5af73e0

bool CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase(MethodInfo *method)

{
  char cVar1;
  Settings_AdvancedSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  bool bVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_07546ef8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07546ef8 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar5 = false;
  bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      cVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicWasLocallyLoaded;
    }
    else {
      cVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicWasLocallyLoaded;
    }
    if (cVar1 == '\0') {
      return false;
    }
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
    if ((pSVar2 == (Settings_AdvancedSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).ServicesEnabled, pSVar3 == (Settings_BoolSetting_o *)0x0)) {
      ThrowNullReferenceException();
    }
    bVar5 = (pSVar3->fields)._value != false;
  }
  return bVar5;
}


// CustomLogic.CustomLogicServicesBuiltin$$IsAllowedToRun
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRun (System_String_o* service, System_String_o** baseUrl, const MethodInfo* method);
// 0x5af74c0

bool CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRun
               (System_String_o *service,System_String_o **baseUrl,MethodInfo *method)

{
  Settings_AdvancedSettings_o *__this;
  bool bVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546ef9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07546ef9 = '\x01';
  }
  *baseUrl = (System_String_o *)0x0;
  method_00 = (MethodInfo *)baseUrl;
  Il2CppCodeGenWriteBarrier(baseUrl);
  bVar1 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase(method_00);
  if (bVar1) {
    __this = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
    if (__this == (Settings_AdvancedSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = Settings_AdvancedSettings__TryGetServiceUrl(__this,service,baseUrl,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// CustomLogic.CustomLogicServicesBuiltin$$CheckMe
// il2cpp: System_String_o* CustomLogic_CustomLogicServicesBuiltin__CheckMe (System_String_o* service, const MethodInfo* method);
// 0x5af7540

System_String_o * CustomLogic_CustomLogicServicesBuiltin__CheckMe(System_String_o *service,MethodInfo *method)

{
  Settings_AdvancedSettings_o *__this;
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  Il2CppClass *pIVar3;
  System_Exception_o *__this_00;
  MethodInfo *pMVar4;
  System_String_o *local_28;
  System_Uri_o *local_20;
  
  if (Il2CppMethodInitialized_07546efa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    Il2CppMethodInitialized_07546efa = '\x01';
  }
  local_20 = (System_Uri_o *)0x0;
  if (Il2CppMethodInitialized_07546ef9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07546ef9 = '\x01';
  }
  pMVar4 = (MethodInfo *)&local_28;
  local_28 = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&local_28);
  bVar1 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase(pMVar4);
  if (bVar1) {
    __this = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
    if (__this == (Settings_AdvancedSettings_o *)0x0) goto label_05af76ae;
    bVar1 = Settings_AdvancedSettings__TryGetServiceUrl(__this,service,&local_28,(MethodInfo *)0x0);
    pSVar2 = local_28;
    if (bVar1) {
      if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
      }
      bVar1 = System_Uri__TryCreate(pSVar2,1,&local_20,(MethodInfo *)0x0);
      if (bVar1) {
        if (local_20 == (System_Uri_o *)0x0) {
label_05af76ae:
          ThrowNullReferenceException();
        }
        pSVar2 = System_Uri__get_Scheme(local_20,(MethodInfo *)0x0);
        if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
        }
        bVar1 = System_String__op_Inequality
                          (pSVar2,TypeInfo_System_Uri->static_fields->UriSchemeHttp,(MethodInfo *)0x0);
        if (!bVar1) {
          return local_28;
        }
        if (local_20 == (System_Uri_o *)0x0) goto label_05af76ae;
        pSVar2 = System_Uri__get_Scheme(local_20,(MethodInfo *)0x0);
        if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
        }
        bVar1 = System_String__op_Inequality
                          (pSVar2,TypeInfo_System_Uri->static_fields->UriSchemeHttps,(MethodInfo *)0x0);
        if (!bVar1) {
          return local_28;
        }
      }
      pSVar2 = il2cpp_codegen_get_runtime_metadata(&"Service '");
      str2 = il2cpp_codegen_get_runtime_metadata(&"' is not registered to a valid http/https URL.");
      pSVar2 = System_String__Concat_5301f10(pSVar2,service,str2,(MethodInfo *)0x0);
      pIVar3 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar3);
      goto label_05af7729;
    }
  }
  pIVar3 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar3);
  pSVar2 = il2cpp_codegen_get_runtime_metadata(&"Not allowed to run services. Requires being the master client, services enabled, and the service key registered in Advanced Configuration.");
label_05af7729:
  System_Exception___ctor_54fa440(__this_00,pSVar2,(MethodInfo *)0x0);
  pMVar4 = (MethodInfo *)
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_CheckMe);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,pMVar4);
}


// CustomLogic.CustomLogicServicesBuiltin$$CheckPermissions
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__CheckPermissions (System_String_o* service, const MethodInfo* method);
// 0x5af7750

bool CustomLogic_CustomLogicServicesBuiltin__CheckPermissions(System_String_o *service,MethodInfo *method)

{
  Settings_AdvancedSettings_o *__this;
  bool bVar1;
  bool bVar2;
  MethodInfo *method_00;
  System_String_o *pSStack_18;
  
  if (Il2CppMethodInitialized_07546ef9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07546ef9 = '\x01';
  }
  method_00 = (MethodInfo *)&pSStack_18;
  pSStack_18 = (System_String_o *)0x0;
  bVar2 = false;
  Il2CppCodeGenWriteBarrier(&pSStack_18);
  bVar1 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase(method_00);
  if (bVar1) {
    __this = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
    if (__this == (Settings_AdvancedSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = Settings_AdvancedSettings__TryGetServiceUrl(__this,service,&pSStack_18,(MethodInfo *)0x0);
  }
  return bVar2;
}


// CustomLogic.CustomLogicServicesBuiltin$$GetSecret
// il2cpp: System_String_o* CustomLogic_CustomLogicServicesBuiltin__GetSecret (System_String_o* key, const MethodInfo* method);
// 0x5af77d0

System_String_o * CustomLogic_CustomLogicServicesBuiltin__GetSecret(System_String_o *key,MethodInfo *method)

{
  Settings_AdvancedSettings_o *__this;
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  Il2CppClass *pIVar3;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  Settings_SettingsManager_c **method_00;
  System_String_o *pSStack_18;
  
  method_00 = (Settings_SettingsManager_c **)key;
  if (g_data_07546efb == '\0') {
    method_00 = &TypeInfo_Settings_SettingsManager;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    g_data_07546efb = '\x01';
  }
  pSStack_18 = (System_String_o *)0x0;
  bVar1 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase((MethodInfo *)method_00);
  if (bVar1) {
    __this = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
    if (__this == (Settings_AdvancedSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = Settings_AdvancedSettings__TryGetSecretValue(__this,key,&pSStack_18,(MethodInfo *)0x0);
    if (bVar1) {
      return pSStack_18;
    }
    pSVar2 = il2cpp_codegen_get_runtime_metadata(&"No secret registered for key '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"'.");
    pSVar2 = System_String__Concat_5301f10(pSVar2,key,str2,(MethodInfo *)0x0);
    pIVar3 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar3);
  }
  else {
    pIVar3 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar3);
    pSVar2 = il2cpp_codegen_get_runtime_metadata(&"Not allowed to access secrets. Requires being the master client, running locally loaded logic, with services enabled in Advanced Configuration.");
  }
  System_Exception___ctor_54fa440(__this_00,pSVar2,(MethodInfo *)0x0);
  lastManagedFrame =
       (MethodInfo *)
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_GetSecret);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicServicesBuiltin$$GetEndpoint
// il2cpp: System_String_o* CustomLogic_CustomLogicServicesBuiltin__GetEndpoint (System_String_o* baseUrl, System_String_o* route, const MethodInfo* method);
// 0x5af78e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af7995: jmp 0x5af7ad1

System_String_o *
CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
          (System_String_o *baseUrl,System_String_o *route,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  System_Uri_o *__this;
  System_Uri_o *__this_00;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_07546efc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    il2cpp_codegen_initialize_runtime_metadata(&"\\");
    il2cpp_codegen_initialize_runtime_metadata(&"..");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_07546efc = '\x01';
  }
  if (baseUrl == (System_String_o *)0x0) {
label_05af7ad1:
    ThrowNullReferenceException();
  }
  bVar1 = System_String__EndsWith(baseUrl,"/",(MethodInfo *)0x0);
  if (!bVar1) {
    baseUrl = System_String__Concat_52f0320(baseUrl,"/",(MethodInfo *)0x0);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Uri);
  System_Uri___ctor(__this,baseUrl,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrWhiteSpace(route,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = __this;
    if (__this != (System_Uri_o *)0x0) {
label_05af7aaf:
      pSVar5 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      return pSVar5;
    }
    goto label_05af7ad1;
  }
  if (route == (System_String_o *)0x0) goto label_05af7ad1;
  bVar1 = System_String__Contains(route,"..",(MethodInfo *)0x0);
  if ((!bVar1) && (bVar1 = System_String__Contains(route,"\\",(MethodInfo *)0x0), !bVar1)) {
    if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
    }
    bVar1 = System_Uri__IsWellFormedUriString(route,1,(MethodInfo *)0x0);
    if (!bVar1) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Uri);
      System_Uri___ctor_61703f0(__this_00,__this,route,(MethodInfo *)0x0);
      if (((__this_00 == (System_Uri_o *)0x0) ||
          (pSVar5 = System_Uri__get_Host(__this_00,(MethodInfo *)0x0), __this == (System_Uri_o *)0x0)) ||
         (pSVar4 = System_Uri__get_Host(__this,(MethodInfo *)0x0), pSVar5 == (System_String_o *)0x0))
      goto label_05af7ad1;
      bVar1 = System_String__Equals_52ffb20(pSVar5,pSVar4,5,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar5 = System_Uri__get_Scheme(__this_00,(MethodInfo *)0x0);
        pSVar4 = System_Uri__get_Scheme(__this,(MethodInfo *)0x0);
        bVar1 = System_String__op_Inequality(pSVar5,pSVar4,(MethodInfo *)0x0);
        if (!bVar1) {
          iVar2 = System_Uri__get_Port(__this_00,(MethodInfo *)0x0);
          iVar3 = System_Uri__get_Port(__this,(MethodInfo *)0x0);
          if (iVar2 == iVar3) goto label_05af7aaf;
        }
      }
      pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
      __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar6);
      pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Route escapes the base service URL.");
      System_InvalidOperationException___ctor_54b9a80
                ((System_InvalidOperationException_o *)__this_01,pSVar5,(MethodInfo *)0x0);
      goto label_05af7b38;
    }
  }
  pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar6);
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Invalid route: must be a relative path without '..' or backslashes.");
  System_ArgumentException___ctor_54186d0(__this_01,pSVar5,(MethodInfo *)0x0);
label_05af7b38:
  lastManagedFrame =
       (MethodInfo *)
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_GetEndpoint);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicServicesBuiltin$$Get
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__Get (System_String_o* service, System_String_o* route, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x5af7b50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af7c4f: jmp 0x5af7bd0

void CustomLogic_CustomLogicServicesBuiltin__Get
               (System_String_o *service,System_String_o *route,CustomLogic_UserMethod_o *callback,
               MethodInfo *method)

{
  CustomLogic_CustomLogicManager_o *__this;
  System_String_o *pSVar1;
  CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)route;
  if (Il2CppMethodInitialized_07546efd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546efd = '\x01';
  }
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(service,method_01);
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar1,route,method_00);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  }
  else {
    __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  }
  if (Il2CppMethodInitialized_07546f02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_GetRequest_d__13);
    Il2CppMethodInitialized_07546f02 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_GetRequest_d__13);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).uri = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).uri);
  (__this_00->fields).callback = callback;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).callback);
  if (__this == (CustomLogic_CustomLogicManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin$$Post
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__Post (System_String_o* service, System_String_o* route, System_String_o* data, CustomLogic_UserMethod_o* callback, System_String_o* format, const MethodInfo* method);
// 0x5af7ce0

void CustomLogic_CustomLogicServicesBuiltin__Post
               (System_String_o *service,System_String_o *route,System_String_o *data,
               CustomLogic_UserMethod_o *callback,System_String_o *format,MethodInfo *method)

{
  CustomLogic_CustomLogicManager_o *__this;
  System_String_o *pSVar1;
  System_String_o *format_00;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  method_01 = (MethodInfo *)route;
  method_02 = (MethodInfo *)format;
  if (Il2CppMethodInitialized_07546efe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546efe = '\x01';
  }
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(service,method_01);
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar1,route,method_00);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  format_00 = CustomLogic_CustomLogicServicesBuiltin__GetContentType(format,(MethodInfo *)route);
  routine = CustomLogic_CustomLogicServicesBuiltin__PostRequest(pSVar1,data,callback,format_00,method_02);
  if (__this == (CustomLogic_CustomLogicManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin$$GetContentType
// il2cpp: System_String_o* CustomLogic_CustomLogicServicesBuiltin__GetContentType (System_String_o* format, const MethodInfo* method);
// 0x5af7d90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af7de9: nop dword ptr [rax]

System_String_o *
CustomLogic_CustomLogicServicesBuiltin__GetContentType(System_String_o *format,MethodInfo *method)

{
  bool bVar1;
  uint16_t c;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  int index;
  
  if (Il2CppMethodInitialized_07546eff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"application/json");
    Il2CppMethodInitialized_07546eff = '\x01';
  }
  bVar1 = System_String__IsNullOrWhiteSpace(format,(MethodInfo *)0x0);
  if (bVar1) {
    format = "application/json";
  }
  else {
    if (format == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (0 < (format->fields)._stringLength) {
      index = 0;
      do {
        c = System_String__get_Chars(format,index,(MethodInfo *)0x0);
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        bVar1 = System_Char__IsControl(c,(MethodInfo *)0x0);
        if (bVar1) {
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
          __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
          message = il2cpp_codegen_get_runtime_metadata(&"Invalid content type: must not contain control characters.");
          System_ArgumentException___ctor_54186d0(__this,message,(MethodInfo *)0x0);
          lastManagedFrame =
               (MethodInfo *)
               il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_GetContentType);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
        }
        index = index + 1;
      } while (index < (format->fields)._stringLength);
    }
  }
  return format;
}


// CustomLogic.CustomLogicServicesBuiltin$$Put
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__Put (System_String_o* service, System_String_o* route, System_String_o* data, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x5af7f40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af8051: jmp 0x5af7fc4

void CustomLogic_CustomLogicServicesBuiltin__Put
               (System_String_o *service,System_String_o *route,System_String_o *data,
               CustomLogic_UserMethod_o *callback,MethodInfo *method)

{
  CustomLogic_CustomLogicManager_o *__this;
  System_String_o *pSVar1;
  CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)route;
  if (Il2CppMethodInitialized_07546f00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546f00 = '\x01';
  }
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(service,method_01);
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar1,route,method_00);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  }
  else {
    __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  }
  if (Il2CppMethodInitialized_07546f04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_PutRequest_d__15);
    Il2CppMethodInitialized_07546f04 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_PutRequest_d__15);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).uri = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).uri);
  (__this_00->fields).data = data;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).data);
  (__this_00->fields).callback = callback;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).callback);
  if (__this == (CustomLogic_CustomLogicManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin$$Delete
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__Delete (System_String_o* service, System_String_o* route, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x5af80f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af81ef: jmp 0x5af8170

void CustomLogic_CustomLogicServicesBuiltin__Delete
               (System_String_o *service,System_String_o *route,CustomLogic_UserMethod_o *callback,
               MethodInfo *method)

{
  CustomLogic_CustomLogicManager_o *__this;
  System_String_o *pSVar1;
  CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)route;
  if (Il2CppMethodInitialized_07546f01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546f01 = '\x01';
  }
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(service,method_01);
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar1,route,method_00);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  }
  else {
    __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  }
  if (Il2CppMethodInitialized_07546f05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_DeleteRequest_d__16);
    Il2CppMethodInitialized_07546f05 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_DeleteRequest_d__16);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).uri = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).uri);
  (__this_00->fields).callback = callback;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).callback);
  if (__this == (CustomLogic_CustomLogicManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin$$GetRequest
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicServicesBuiltin__GetRequest (System_String_o* uri, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x5af7c60

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicServicesBuiltin__GetRequest
          (System_String_o *uri,CustomLogic_UserMethod_o *callback,MethodInfo *method)

{
  CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this;
  
  if (Il2CppMethodInitialized_07546f02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_GetRequest_d__13);
    Il2CppMethodInitialized_07546f02 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_GetRequest_d__13);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).uri = uri;
  Il2CppCodeGenWriteBarrier(&(__this->fields).uri);
  (__this->fields).callback = callback;
  Il2CppCodeGenWriteBarrier(&(__this->fields).callback);
  return (System_Collections_IEnumerator_o *)__this;
}


// CustomLogic.CustomLogicServicesBuiltin$$PostRequest
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicServicesBuiltin__PostRequest (System_String_o* uri, System_String_o* data, CustomLogic_UserMethod_o* callback, System_String_o* format, const MethodInfo* method);
// 0x5af7e90

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicServicesBuiltin__PostRequest
          (System_String_o *uri,System_String_o *data,CustomLogic_UserMethod_o *callback,
          System_String_o *format,MethodInfo *method)

{
  CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this;
  
  if (Il2CppMethodInitialized_07546f03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_PostRequest_d__14);
    Il2CppMethodInitialized_07546f03 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_PostRequest_d__14);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).uri = uri;
  Il2CppCodeGenWriteBarrier(&(__this->fields).uri);
  (__this->fields).data = data;
  Il2CppCodeGenWriteBarrier(&(__this->fields).data);
  (__this->fields).callback = callback;
  Il2CppCodeGenWriteBarrier(&(__this->fields).callback);
  (__this->fields).format = format;
  Il2CppCodeGenWriteBarrier(&(__this->fields).format);
  return (System_Collections_IEnumerator_o *)__this;
}


// CustomLogic.CustomLogicServicesBuiltin$$PutRequest
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicServicesBuiltin__PutRequest (System_String_o* uri, System_String_o* data, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x5af8060

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicServicesBuiltin__PutRequest
          (System_String_o *uri,System_String_o *data,CustomLogic_UserMethod_o *callback,MethodInfo *method)

{
  CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this;
  
  if (Il2CppMethodInitialized_07546f04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_PutRequest_d__15);
    Il2CppMethodInitialized_07546f04 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_PutRequest_d__15);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).uri = uri;
  Il2CppCodeGenWriteBarrier(&(__this->fields).uri);
  (__this->fields).data = data;
  Il2CppCodeGenWriteBarrier(&(__this->fields).data);
  (__this->fields).callback = callback;
  Il2CppCodeGenWriteBarrier(&(__this->fields).callback);
  return (System_Collections_IEnumerator_o *)__this;
}


// CustomLogic.CustomLogicServicesBuiltin$$DeleteRequest
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicServicesBuiltin__DeleteRequest (System_String_o* uri, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x5af8200

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicServicesBuiltin__DeleteRequest
          (System_String_o *uri,CustomLogic_UserMethod_o *callback,MethodInfo *method)

{
  CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this;
  
  if (Il2CppMethodInitialized_07546f05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_DeleteRequest_d__16);
    Il2CppMethodInitialized_07546f05 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_DeleteRequest_d__16);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).uri = uri;
  Il2CppCodeGenWriteBarrier(&(__this->fields).uri);
  (__this->fields).callback = callback;
  Il2CppCodeGenWriteBarrier(&(__this->fields).callback);
  return (System_Collections_IEnumerator_o *)__this;
}


// CustomLogic.CustomLogicServicesBuiltin$$GetWebRequestFailureJSON
// il2cpp: System_String_o* CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON (UnityEngine_Networking_UnityWebRequest_o* webRequest, const MethodInfo* method);
// 0x5af8300

System_String_o *
CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON
          (UnityEngine_Networking_UnityWebRequest_o *webRequest,MethodInfo *method)

{
  System_String_o *pSVar1;
  SimpleJSONFixed_JSONObject_o *__this;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONString_o *pSVar3;
  System_Enum_o local_40;
  int32_t local_30;
  
  if (Il2CppMethodInitialized_07546f06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Networking_UnityWebRequest_Result);
    il2cpp_codegen_initialize_runtime_metadata(&"error");
    il2cpp_codegen_initialize_runtime_metadata(&"status");
    Il2CppMethodInitialized_07546f06 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  if (webRequest != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    local_30 = UnityEngine_Networking_UnityWebRequest__get_result(webRequest,(MethodInfo *)0x0);
    local_40.klass = (System_Enum_c *)TypeInfo_UnityEngine_Networking_UnityWebRequest_Result;
    local_40.monitor = (void *)0xffffffffffffffff;
    pSVar2 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
    SimpleJSONFixed_JSONString___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
    if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this->klass->vtable)._20_Add.methodPtr)
                (__this,"status",(SimpleJSONFixed_JSONNode_o *)pSVar3,
                 (__this->klass->vtable)._20_Add.method);
      pSVar2 = UnityEngine_Networking_UnityWebRequest__get_error(webRequest,(MethodInfo *)0x0);
      pSVar1 = "error";
      if (pSVar2 == (System_String_o *)0x0) {
        pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
      pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
      SimpleJSONFixed_JSONString___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._20_Add.methodPtr)
                (__this,pSVar1,(SimpleJSONFixed_JSONNode_o *)pSVar3,(__this->klass->vtable)._20_Add.method);
      pSVar2 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicServicesBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicServicesBuiltin__get_ClassName (CustomLogic_CustomLogicServicesBuiltin_o* __this, const MethodInfo* method);
// 0x5af8490

System_String_o *
CustomLogic_CustomLogicServicesBuiltin__get_ClassName
          (CustomLogic_CustomLogicServicesBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546f07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Service");
    Il2CppMethodInitialized_07546f07 = '\x01';
  }
  return "Service";
}


// CustomLogic.CustomLogicServicesBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__get_IsAbstract (CustomLogic_CustomLogicServicesBuiltin_o* __this, const MethodInfo* method);
// 0x5af84c0

bool CustomLogic_CustomLogicServicesBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicServicesBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicServicesBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__get_IsStatic (CustomLogic_CustomLogicServicesBuiltin_o* __this, const MethodInfo* method);
// 0x5af84d0

bool CustomLogic_CustomLogicServicesBuiltin__get_IsStatic
               (CustomLogic_CustomLogicServicesBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicServicesBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicServicesBuiltin_o* __this, const MethodInfo* method);
// 0x5af84e0

bool CustomLogic_CustomLogicServicesBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicServicesBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


