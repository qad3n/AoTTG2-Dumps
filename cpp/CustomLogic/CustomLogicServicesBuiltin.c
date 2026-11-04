// Type: CustomLogic.CustomLogicServicesBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicServicesBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicServicesBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicServicesBuiltin_o* CustomLogic_CustomLogicServicesBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x18203ce80

CustomLogic_CustomLogicServicesBuiltin_o *
CustomLogic_CustomLogicServicesBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184346541 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicServicesBuiltin);
    Il2CppMethodInitialized_184346541 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin);
      if (Il2CppMethodInitialized_184346530 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184346530 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicServicesBuiltin_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicServicesBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x18207b350

void CustomLogic_CustomLogicServicesBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_18434654c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434654c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicServicesBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__CheckPermissions>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__CheckPermissions_b__2_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182076aa0

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__CheckPermissions_b__2_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *service;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_18434654d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434654d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      service = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      local_res18[0] = CustomLogic_CustomLogicServicesBuiltin__CheckPermissions(service,(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
      return pIVar1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetSecret>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__GetSecret_b__3_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182077450

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__GetSecret_b__3_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434654e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434654e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      pSVar1 = CustomLogic_CustomLogicServicesBuiltin__GetSecret(pSVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182077690

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *service;
  System_String_o *route;
  CustomLogic_UserMethod_o *callback;
  
  if (Il2CppMethodInitialized_18434654f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434654f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      service = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (1 < (uint)__a->max_length) {
        route = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if (2 < (uint)__a->max_length) {
          callback = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (__a->m_Items[2],
                                (MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
          CustomLogic_CustomLogicServicesBuiltin__Get(service,route,callback,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__Post>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Post_b__5_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820780d0

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Post_b__5_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_String_o *service;
  System_String_o *route;
  System_String_o *data;
  CustomLogic_UserMethod_o *callback;
  System_String_o *format;
  
  if (Il2CppMethodInitialized_184346550 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&"application/json");
    Il2CppMethodInitialized_184346550 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    service = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      route = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        data = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[2],
                          (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        format = "application/json";
        callback = (CustomLogic_UserMethod_o *)0x0;
        uVar1 = (uint)__a->max_length;
        if (3 < (int)uVar1) {
          if (uVar1 < 4) goto label_182078263;
          pIVar2 = __a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          callback = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (pIVar2,(MethodInfo_66EB70 *)
                                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
        }
        uVar1 = (uint)__a->max_length;
        if (4 < (int)uVar1) {
          if (uVar1 < 5) goto label_182078263;
          pIVar2 = __a->m_Items[4];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          format = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (pIVar2,(MethodInfo_66EB70 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        }
        CustomLogic_CustomLogicServicesBuiltin__Post(service,route,data,callback,format,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
  }
label_182078263:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__Put>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Put_b__6_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182078550

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Put_b__6_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_String_o *service;
  System_String_o *route;
  System_String_o *data;
  CustomLogic_UserMethod_o *callback;
  
  if (Il2CppMethodInitialized_184346551 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346551 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    service = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      route = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        data = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[2],
                          (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        callback = (CustomLogic_UserMethod_o *)0x0;
        uVar1 = (uint)__a->max_length;
        if (3 < (int)uVar1) {
          if (uVar1 < 4) goto label_182078678;
          pIVar2 = __a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          callback = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (pIVar2,(MethodInfo_66EB70 *)
                                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
        }
        CustomLogic_CustomLogicServicesBuiltin__Put(service,route,data,callback,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
  }
label_182078678:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__Delete>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Delete_b__7_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182076e70

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Delete_b__7_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_String_o *service;
  System_String_o *route;
  CustomLogic_UserMethod_o *callback;
  
  if (Il2CppMethodInitialized_184346552 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346552 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    service = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      route = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      callback = (CustomLogic_UserMethod_o *)0x0;
      uVar1 = (uint)__a->max_length;
      if (2 < (int)uVar1) {
        if (uVar1 < 3) goto label_182076f68;
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        callback = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (pIVar2,(MethodInfo_66EB70 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
      }
      CustomLogic_CustomLogicServicesBuiltin__Delete(service,route,callback,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
label_182076f68:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicServicesBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x182019700

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicServicesBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *lastManagedFrame;
  System_Func_CustomLogicServicesBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_184346542 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"CheckPermissions");
    il2cpp_codegen_initialize_runtime_metadata(&"Put");
    il2cpp_codegen_initialize_runtime_metadata(&"Post");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Get");
    il2cpp_codegen_initialize_runtime_metadata(&"GetSecret");
    Il2CppMethodInitialized_184346542 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"CheckPermissions",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184346543 == '\0') {
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
      Il2CppMethodInitialized_184346543 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__2_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182019df5;
    if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__CheckPermissions_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicServicesBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__2_0;
  }
  else {
    bVar2 = System_String__op_Equality(name,"GetSecret",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346544 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346544 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__3_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182019df5;
      if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__GetSecret_b__3_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__3_0 =
           (System_Func_CustomLogicServicesBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__3_0;
    }
    else {
      bVar2 = System_String__op_Equality(name,"Get",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346545 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346545 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__4_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182019df5;
        if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object
                           );
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__4_0 =
             (System_Func_CustomLogicServicesBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__4_0;
      }
      else {
        bVar2 = System_String__op_Equality(name,"Post",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346546 == '\0') {
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346546 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__5_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182019df5;
          if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Post_b__5_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__5_0 =
               (System_Func_CustomLogicServicesBuiltin__object____object__o *)__this;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__5_0
          ;
        }
        else {
          bVar2 = System_String__op_Equality(name,"Put",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184346547 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Put_b__6_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
              Il2CppMethodInitialized_184346547 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
            }
            __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__6_0;
            if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182019df5;
            if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9;
            __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Put_b__6_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__6_0 =
                 (System_Func_CustomLogicServicesBuiltin__object____object__o *)__this;
            targetAddress =
                 &TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__6_0;
          }
          else {
            bVar2 = System_String__op_Equality(name,"Delete",(MethodInfo *)0x0);
            if (!bVar2) {
              pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicServicesBuiltin not found");
              str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
              pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
              klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
              __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
              System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
              lastManagedFrame =
                   il2cpp_codegen_get_runtime_metadata
                             (&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_CreateMemberBinding)
              ;
              il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
            }
            if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184346548 == '\0') {
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
              Il2CppMethodInitialized_184346548 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
            }
            __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__7_0;
            if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182019df5;
            if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9;
            __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Delete_b__7_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__7_0 =
                 (System_Func_CustomLogicServicesBuiltin__object____object__o *)__this;
            targetAddress =
                 &TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__7_0;
          }
        }
      }
    }
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_182019df5:
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__CheckPermissions
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__CheckPermissions (const MethodInfo* method);
// 0x1820257f0

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__CheckPermissions(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346543 == '\0') {
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
    Il2CppMethodInitialized_184346543 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__2_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__CheckPermissions_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicServicesBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__2_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__GetSecret
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__GetSecret (const MethodInfo* method);
// 0x182028770

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__GetSecret(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346544 == '\0') {
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
    Il2CppMethodInitialized_184346544 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__3_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__GetSecret_b__3_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicServicesBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__3_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__Get
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Get (const MethodInfo* method);
// 0x182028bf0

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Get(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346545 == '\0') {
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
    Il2CppMethodInitialized_184346545 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicServicesBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__4_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__Post
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Post (const MethodInfo* method);
// 0x182029500

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Post(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346546 == '\0') {
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
    Il2CppMethodInitialized_184346546 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Post_b__5_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicServicesBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__5_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__Put
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Put (const MethodInfo* method);
// 0x182029980

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Put(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346547 == '\0') {
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
    Il2CppMethodInitialized_184346547 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Put_b__6_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicServicesBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__Delete
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Delete (const MethodInfo* method);
// 0x182026210

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Delete(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346548 == '\0') {
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
    Il2CppMethodInitialized_184346548 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicServicesBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Delete_b__7_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicServicesBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x182030960

void CustomLogic_CustomLogicServicesBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346549 == '\0') {
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
    Il2CppMethodInitialized_184346549 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CheckPermissions",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetSecret",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Get",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Post",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Put",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Delete",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16___ctor (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16___ctor(CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_IDisposable_Dispose (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, const MethodInfo* method);
// 0x1820751f0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18207525b: jmp 0x182075271
// asm:   0x18207525d: lea rcx, [rsp + 0x30]
// asm:   0x182075262: call 0x182044e90  ; il2cpp_runtime_helper_182044e90()
// asm:   0x182075267: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18207526c: test rcx, rcx
// asm:   0x18207526f: jne 0x182075277
// asm:   0x182075277: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_IDisposable_Dispose
               (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 1)) {
    if (Il2CppMethodInitialized_184346554 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_184346554 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields)._www_5__2 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._www_5__2);
    }
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__MoveNext (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, const MethodInfo* method);
// 0x182074e20
// eh: try 0x182074e81..0x182075191 -> pad 0x183315930 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182075129: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x18207512e: test rbx, rbx
// asm:   0x182075131: jne 0x182075191
// asm:   0x182075133: movzx eax, byte ptr [rsp + 0x80]
// asm:   0x182075191: lea rcx, [rsp + 0x30]
// asm:   0x182075196: call 0x182044f50  ; il2cpp_runtime_helper_182044f50()
// asm:   0x18207519b: mov rcx, rbx
// asm:   0x18207519e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__MoveNext
               (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Networking_UnityWebRequest_o *pUVar4;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *value;
  System_String_o *pSVar5;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar6;
  System_Enum_o local_30;
  int32_t local_20;
  
  if (Il2CppMethodInitialized_184346553 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Networking_UnityWebRequest_Result);
    Il2CppMethodInitialized_184346553 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pUVar4 = UnityEngine_Networking_UnityWebRequest__Delete((__this->fields).uri,(MethodInfo *)0x0);
    (__this->fields)._www_5__2 = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._www_5__2,pUVar4);
    (__this->fields).__1__state = -3;
    pUVar4 = (__this->fields)._www_5__2;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Networking_UnityWebRequest__set_timeout(pUVar4,0xf,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._www_5__2;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    value = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar4,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
    (__this->fields).__1__state = 1;
    bVar2 = true;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -3;
    pUVar4 = (__this->fields)._www_5__2;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    iVar3 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar4,(MethodInfo *)0x0);
    if (iVar3 != 1) {
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON
                         ((__this->fields)._www_5__2,(MethodInfo *)0x0);
    }
    if ((__this->fields).callback != (CustomLogic_UserMethod_o *)0x0) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      userMethod = (__this->fields).callback;
      parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      if (parameterValues == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      if (pSVar5 != (System_String_o *)0x0) {
        pIVar6 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pSVar5,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar6 == (Il2CppObject *)0x0) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
      }
      if ((int)parameterValues->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[0] = (Il2CppObject *)pSVar5;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items,pSVar5);
      pUVar4 = (__this->fields)._www_5__2;
      if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_20 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar4,(MethodInfo *)0x0);
      local_30.klass = (System_Enum_c *)TypeInfo_UnityEngine_Networking_UnityWebRequest_Result;
      local_30.monitor = &g_data_ffffffffffffffff;
      pSVar5 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
      if (pSVar5 != (System_String_o *)0x0) {
        pIVar6 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pSVar5,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar6 == (Il2CppObject *)0x0) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
      }
      if ((uint)parameterValues->max_length < 2) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[1] = (Il2CppObject *)pSVar5;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1,pSVar5);
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    }
    if (Il2CppMethodInitialized_184346554 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_184346554 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields)._www_5__2 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._www_5__2);
    }
    (__this->fields)._www_5__2 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._www_5__2,(void *)0x0);
    bVar2 = false;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$<>m__Finally1
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16____m__Finally1 (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, const MethodInfo* method);
// 0x182075280

void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16____m__Finally1
               (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346554 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_184346554 = '\x01';
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields)._www_5__2 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    InterfaceInvoker0_Invoke
              (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._www_5__2);
    return;
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, const MethodInfo* method);
// 0x1820751b0

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
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_Collections_IEnumerator_get_Current(CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13___ctor (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13___ctor(CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_IDisposable_Dispose (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, const MethodInfo* method);
// 0x1820756c0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18207572b: jmp 0x182075741
// asm:   0x18207572d: lea rcx, [rsp + 0x30]
// asm:   0x182075732: call 0x182044f80  ; il2cpp_runtime_helper_182044f80()
// asm:   0x182075737: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18207573c: test rcx, rcx
// asm:   0x18207573f: jne 0x182075747
// asm:   0x182075747: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_IDisposable_Dispose
               (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 1)) {
    if (Il2CppMethodInitialized_184346556 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_184346556 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields)._webRequest_5__2 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,
                 (Il2CppObject *)(__this->fields)._webRequest_5__2);
    }
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__MoveNext (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, const MethodInfo* method);
// 0x1820752d0
// eh: try 0x182075331..0x18207566b -> pad 0x183315930 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820755f9: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x1820755fe: test rbx, rbx
// asm:   0x182075601: jne 0x18207566b
// asm:   0x182075603: movzx eax, byte ptr [rsp + 0x80]
// asm:   0x18207566b: lea rcx, [rsp + 0x30]
// asm:   0x182075670: call 0x182044f60  ; il2cpp_runtime_helper_182044f60()
// asm:   0x182075675: mov rcx, rbx
// asm:   0x182075678: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__MoveNext
               (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Networking_UnityWebRequest_o *pUVar4;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *value;
  System_String_o *pSVar5;
  UnityEngine_Networking_DownloadHandler_o *__this_01;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar6;
  System_Enum_o local_30;
  int32_t local_20;
  
  if (Il2CppMethodInitialized_184346555 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Networking_UnityWebRequest_Result);
    Il2CppMethodInitialized_184346555 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pUVar4 = UnityEngine_Networking_UnityWebRequest__Get((__this->fields).uri,(MethodInfo *)0x0);
    (__this->fields)._webRequest_5__2 = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._webRequest_5__2,pUVar4);
    (__this->fields).__1__state = -3;
    pUVar4 = (__this->fields)._webRequest_5__2;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Networking_UnityWebRequest__set_timeout(pUVar4,0xf,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._webRequest_5__2;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    value = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar4,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
    (__this->fields).__1__state = 1;
    bVar2 = true;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -3;
    pUVar4 = (__this->fields)._webRequest_5__2;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar4,(MethodInfo *)0x0);
    if (iVar3 == 1) {
      pUVar4 = (__this->fields)._webRequest_5__2;
      if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_01 = (UnityEngine_Networking_DownloadHandler_o *)
                  UnityEngine_Tilemaps_Tile__get_sprite
                            ((Unity_Collections_NativeArray_Enumerator_T__o *)pUVar4,(MethodInfo_1536BF0 *)0x0
                            );
      if (__this_01 == (UnityEngine_Networking_DownloadHandler_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar5 = UnityEngine_Networking_DownloadHandler__get_text(__this_01,(MethodInfo *)0x0);
    }
    else {
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON
                         ((__this->fields)._webRequest_5__2,(MethodInfo *)0x0);
    }
    if ((__this->fields).callback != (CustomLogic_UserMethod_o *)0x0) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      userMethod = (__this->fields).callback;
      parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      if (parameterValues == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      if (pSVar5 != (System_String_o *)0x0) {
        pIVar6 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pSVar5,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar6 == (Il2CppObject *)0x0) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
      }
      if ((int)parameterValues->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[0] = (Il2CppObject *)pSVar5;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items,pSVar5);
      pUVar4 = (__this->fields)._webRequest_5__2;
      if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_20 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar4,(MethodInfo *)0x0);
      local_30.klass = (System_Enum_c *)TypeInfo_UnityEngine_Networking_UnityWebRequest_Result;
      local_30.monitor = &g_data_ffffffffffffffff;
      pSVar5 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
      if (pSVar5 != (System_String_o *)0x0) {
        pIVar6 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pSVar5,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar6 == (Il2CppObject *)0x0) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
      }
      if ((uint)parameterValues->max_length < 2) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[1] = (Il2CppObject *)pSVar5;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1,pSVar5);
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    }
    if (Il2CppMethodInitialized_184346556 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_184346556 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields)._webRequest_5__2 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,
                 (Il2CppObject *)(__this->fields)._webRequest_5__2);
    }
    (__this->fields)._webRequest_5__2 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._webRequest_5__2,(void *)0x0);
    bVar2 = false;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$<>m__Finally1
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13____m__Finally1 (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, const MethodInfo* method);
// 0x182075750

void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13____m__Finally1
               (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346556 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_184346556 = '\x01';
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields)._webRequest_5__2 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    InterfaceInvoker0_Invoke
              (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._webRequest_5__2)
    ;
    return;
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, const MethodInfo* method);
// 0x182075680

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
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_Collections_IEnumerator_get_Current(CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14___ctor (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14___ctor(CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_IDisposable_Dispose (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, const MethodInfo* method);
// 0x182075ba0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182075c0b: jmp 0x182075c21
// asm:   0x182075c0d: lea rcx, [rsp + 0x30]
// asm:   0x182075c12: call 0x182044ef0  ; il2cpp_runtime_helper_182044ef0()
// asm:   0x182075c17: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182075c1c: test rcx, rcx
// asm:   0x182075c1f: jne 0x182075c27
// asm:   0x182075c27: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_IDisposable_Dispose
               (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 1)) {
    if (Il2CppMethodInitialized_184346558 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_184346558 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields)._www_5__2 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._www_5__2);
    }
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__MoveNext (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, const MethodInfo* method);
// 0x1820757a0
// eh: try 0x182075801..0x182075b44 -> pad 0x183315930 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182075ad2: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x182075ad7: test rbx, rbx
// asm:   0x182075ada: jne 0x182075b44
// asm:   0x182075adc: movzx eax, byte ptr [rsp + 0x80]
// asm:   0x182075b44: lea rcx, [rsp + 0x30]
// asm:   0x182075b49: call 0x182044fe0  ; il2cpp_runtime_helper_182044fe0()
// asm:   0x182075b4e: mov rcx, rbx
// asm:   0x182075b51: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__MoveNext
               (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Networking_UnityWebRequest_o *pUVar4;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *value;
  UnityEngine_Networking_DownloadHandler_o *__this_01;
  System_String_o *pSVar5;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar6;
  System_Enum_o local_30;
  int32_t local_20;
  
  if (Il2CppMethodInitialized_184346557 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Networking_UnityWebRequest_Result);
    Il2CppMethodInitialized_184346557 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pUVar4 = UnityEngine_Networking_UnityWebRequest__Post
                       ((__this->fields).uri,(__this->fields).data,(__this->fields).format,(MethodInfo *)0x0);
    (__this->fields)._www_5__2 = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._www_5__2,pUVar4);
    (__this->fields).__1__state = -3;
    pUVar4 = (__this->fields)._www_5__2;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Networking_UnityWebRequest__set_timeout(pUVar4,0xf,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._www_5__2;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    value = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar4,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
    (__this->fields).__1__state = 1;
    bVar2 = true;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -3;
    pUVar4 = (__this->fields)._www_5__2;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar4,(MethodInfo *)0x0);
    if (iVar3 == 1) {
      pUVar4 = (__this->fields)._www_5__2;
      if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_01 = (UnityEngine_Networking_DownloadHandler_o *)
                  UnityEngine_Tilemaps_Tile__get_sprite
                            ((Unity_Collections_NativeArray_Enumerator_T__o *)pUVar4,(MethodInfo_1536BF0 *)0x0
                            );
      if (__this_01 == (UnityEngine_Networking_DownloadHandler_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar5 = UnityEngine_Networking_DownloadHandler__get_text(__this_01,(MethodInfo *)0x0);
    }
    else {
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON
                         ((__this->fields)._www_5__2,(MethodInfo *)0x0);
    }
    if ((__this->fields).callback != (CustomLogic_UserMethod_o *)0x0) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      userMethod = (__this->fields).callback;
      parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      if (parameterValues == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      if (pSVar5 != (System_String_o *)0x0) {
        pIVar6 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pSVar5,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar6 == (Il2CppObject *)0x0) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
      }
      if ((int)parameterValues->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[0] = (Il2CppObject *)pSVar5;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items,pSVar5);
      pUVar4 = (__this->fields)._www_5__2;
      if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_20 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar4,(MethodInfo *)0x0);
      local_30.klass = (System_Enum_c *)TypeInfo_UnityEngine_Networking_UnityWebRequest_Result;
      local_30.monitor = &g_data_ffffffffffffffff;
      pSVar5 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
      if (pSVar5 != (System_String_o *)0x0) {
        pIVar6 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pSVar5,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar6 == (Il2CppObject *)0x0) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
      }
      if ((uint)parameterValues->max_length < 2) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[1] = (Il2CppObject *)pSVar5;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1,pSVar5);
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    }
    if (Il2CppMethodInitialized_184346558 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_184346558 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields)._www_5__2 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._www_5__2);
    }
    (__this->fields)._www_5__2 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._www_5__2,(void *)0x0);
    bVar2 = false;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$<>m__Finally1
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14____m__Finally1 (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, const MethodInfo* method);
// 0x182075c30

void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14____m__Finally1
               (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_184346558 = '\x01';
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields)._www_5__2 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    InterfaceInvoker0_Invoke
              (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._www_5__2);
    return;
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, const MethodInfo* method);
// 0x182075b60

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
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_Collections_IEnumerator_get_Current(CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15___ctor (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15___ctor(CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_IDisposable_Dispose (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, const MethodInfo* method);
// 0x182076080
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820760eb: jmp 0x182076101
// asm:   0x1820760ed: lea rcx, [rsp + 0x30]
// asm:   0x1820760f2: call 0x182044e30  ; il2cpp_runtime_helper_182044e30()
// asm:   0x1820760f7: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820760fc: test rcx, rcx
// asm:   0x1820760ff: jne 0x182076107
// asm:   0x182076107: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_IDisposable_Dispose
               (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 1)) {
    if (Il2CppMethodInitialized_18434655a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_18434655a = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields)._www_5__2 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._www_5__2);
    }
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__MoveNext (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, const MethodInfo* method);
// 0x182075c80
// eh: try 0x182075ce1..0x182076020 -> pad 0x183315930 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182075fae: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x182075fb3: test rbx, rbx
// asm:   0x182075fb6: jne 0x182076020
// asm:   0x182075fb8: movzx eax, byte ptr [rsp + 0x80]
// asm:   0x182076020: lea rcx, [rsp + 0x30]
// asm:   0x182076025: call 0x182044f70  ; il2cpp_runtime_helper_182044f70()
// asm:   0x18207602a: mov rcx, rbx
// asm:   0x18207602d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__MoveNext
               (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Networking_UnityWebRequest_o *pUVar4;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *value;
  UnityEngine_Networking_DownloadHandler_o *__this_01;
  System_String_o *pSVar5;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar6;
  System_Enum_o local_30;
  int32_t local_20;
  
  if (Il2CppMethodInitialized_184346559 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Networking_UnityWebRequest_Result);
    Il2CppMethodInitialized_184346559 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pUVar4 = UnityEngine_Networking_UnityWebRequest__Put
                       ((__this->fields).uri,(__this->fields).data,(MethodInfo *)0x0);
    (__this->fields)._www_5__2 = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._www_5__2,pUVar4);
    (__this->fields).__1__state = -3;
    pUVar4 = (__this->fields)._www_5__2;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Networking_UnityWebRequest__set_timeout(pUVar4,0xf,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._www_5__2;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    value = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar4,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
    (__this->fields).__1__state = 1;
    bVar2 = true;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -3;
    pUVar4 = (__this->fields)._www_5__2;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar4,(MethodInfo *)0x0);
    if (iVar3 == 1) {
      pUVar4 = (__this->fields)._www_5__2;
      if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_01 = (UnityEngine_Networking_DownloadHandler_o *)
                  UnityEngine_Tilemaps_Tile__get_sprite
                            ((Unity_Collections_NativeArray_Enumerator_T__o *)pUVar4,(MethodInfo_1536BF0 *)0x0
                            );
      if (__this_01 == (UnityEngine_Networking_DownloadHandler_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar5 = UnityEngine_Networking_DownloadHandler__get_text(__this_01,(MethodInfo *)0x0);
    }
    else {
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON
                         ((__this->fields)._www_5__2,(MethodInfo *)0x0);
    }
    if ((__this->fields).callback != (CustomLogic_UserMethod_o *)0x0) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      userMethod = (__this->fields).callback;
      parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      if (parameterValues == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      if (pSVar5 != (System_String_o *)0x0) {
        pIVar6 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pSVar5,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar6 == (Il2CppObject *)0x0) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
      }
      if ((int)parameterValues->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[0] = (Il2CppObject *)pSVar5;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items,pSVar5);
      pUVar4 = (__this->fields)._www_5__2;
      if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_20 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar4,(MethodInfo *)0x0);
      local_30.klass = (System_Enum_c *)TypeInfo_UnityEngine_Networking_UnityWebRequest_Result;
      local_30.monitor = &g_data_ffffffffffffffff;
      pSVar5 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
      if (pSVar5 != (System_String_o *)0x0) {
        pIVar6 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pSVar5,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar6 == (Il2CppObject *)0x0) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
      }
      if ((uint)parameterValues->max_length < 2) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[1] = (Il2CppObject *)pSVar5;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1,pSVar5);
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    }
    if (Il2CppMethodInitialized_18434655a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_18434655a = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields)._www_5__2 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._www_5__2);
    }
    (__this->fields)._www_5__2 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._www_5__2,(void *)0x0);
    bVar2 = false;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$<>m__Finally1
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15____m__Finally1 (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, const MethodInfo* method);
// 0x182076110

void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15____m__Finally1
               (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434655a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_18434655a = '\x01';
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields)._www_5__2 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    InterfaceInvoker0_Invoke
              (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._www_5__2);
    return;
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, const MethodInfo* method);
// 0x182076040

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
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_Collections_IEnumerator_get_Current(CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin___ctor (CustomLogic_CustomLogicServicesBuiltin_o* __this, const MethodInfo* method);
// 0x18203c1e0

void CustomLogic_CustomLogicServicesBuiltin___ctor
               (CustomLogic_CustomLogicServicesBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346530 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184346530 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin$$IsAllowedToRunBase
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase (const MethodInfo* method);
// 0x18203bc20

bool CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase(MethodInfo *method)

{
  Settings_AdvancedSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346531 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346531 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicWasLocallyLoaded != false) {
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
      if ((pSVar1 != (Settings_AdvancedSettings_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).ServicesEnabled, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
        return (pSVar2->fields)._value;
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// CustomLogic.CustomLogicServicesBuiltin$$IsAllowedToRun
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRun (System_String_o* service, System_String_o** baseUrl, const MethodInfo* method);
// 0x18203bcf0

bool CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRun
               (System_String_o *service,System_String_o **baseUrl,MethodInfo *method)

{
  Settings_AdvancedSettings_o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346532 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346532 = '\x01';
  }
  *baseUrl = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(baseUrl,(void *)0x0);
  bVar1 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase((MethodInfo *)0x0);
  if (bVar1) {
    __this = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
    if (__this != (Settings_AdvancedSettings_o *)0x0) {
      bVar1 = Settings_AdvancedSettings__TryGetServiceUrl(__this,service,baseUrl,(MethodInfo *)0x0);
      return bVar1;
    }
    ThrowNullReferenceException();
  }
  return false;
}


// CustomLogic.CustomLogicServicesBuiltin$$CheckMe
// il2cpp: System_String_o* CustomLogic_CustomLogicServicesBuiltin__CheckMe (System_String_o* service, const MethodInfo* method);
// 0x18203afc0

System_String_o * CustomLogic_CustomLogicServicesBuiltin__CheckMe(System_String_o *service,MethodInfo *method)

{
  Settings_AdvancedSettings_o *__this;
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *pIVar3;
  System_Exception_o *pSVar4;
  MethodInfo *pMVar5;
  System_String_o *local_res8;
  System_Uri_o *local_res18 [2];
  
  if (Il2CppMethodInitialized_184346533 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    Il2CppMethodInitialized_184346533 = '\x01';
  }
  local_res8 = (System_String_o *)0x0;
  local_res18[0] = (System_Uri_o *)0x0;
  if (Il2CppMethodInitialized_184346532 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346532 = '\x01';
  }
  local_res8 = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&local_res8,(void *)0x0);
  bVar1 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase((MethodInfo *)0x0);
  if (bVar1) {
    __this = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
    if (__this == (Settings_AdvancedSettings_o *)0x0) goto label_18203b204;
    bVar1 = Settings_AdvancedSettings__TryGetServiceUrl(__this,service,&local_res8,(MethodInfo *)0x0);
    pSVar2 = local_res8;
    if (bVar1) {
      if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
      }
      bVar1 = System_Uri__TryCreate(pSVar2,1,local_res18,(MethodInfo *)0x0);
      if (!bVar1) {
label_18203b198:
        pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' is not registered to a valid http/https URL.");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Service '");
        pSVar2 = System_String__Concat_1969b70(str0,service,pSVar2,(MethodInfo *)0x0);
        pIVar3 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        pSVar4 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar3);
        System_Exception___ctor_1b6abf0(pSVar4,pSVar2,(MethodInfo *)0x0);
        pMVar5 = (MethodInfo *)
                 il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_CheckMe);
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar4,pMVar5);
      }
      if (local_res18[0] != (System_Uri_o *)0x0) {
        pSVar2 = System_Uri__get_Scheme(local_res18[0],(MethodInfo *)0x0);
        if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
        }
        bVar1 = System_String__op_Inequality
                          (pSVar2,TypeInfo_System_Uri->static_fields->UriSchemeHttp,(MethodInfo *)0x0);
        if (bVar1) {
          if (local_res18[0] == (System_Uri_o *)0x0) goto label_18203b204;
          pSVar2 = System_Uri__get_Scheme(local_res18[0],(MethodInfo *)0x0);
          if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
          }
          bVar1 = System_String__op_Inequality
                            (pSVar2,TypeInfo_System_Uri->static_fields->UriSchemeHttps,(MethodInfo *)0x0);
          if (bVar1) goto label_18203b198;
        }
        return local_res8;
      }
label_18203b204:
      ThrowNullReferenceException();
    }
  }
  pIVar3 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  pSVar4 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar3);
  pSVar2 = il2cpp_codegen_get_runtime_metadata(&"Not allowed to run services. Requires being the master client, services enabled, and the service key registered in Advanced Configuration.");
  System_Exception___ctor_1b6abf0(pSVar4,pSVar2,(MethodInfo *)0x0);
  pMVar5 = (MethodInfo *)
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_CheckMe);
  il2cpp_codegen_raise_exception((Il2CppObject *)pSVar4,pMVar5);
}


// CustomLogic.CustomLogicServicesBuiltin$$CheckPermissions
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__CheckPermissions (System_String_o* service, const MethodInfo* method);
// 0x18203b210

bool CustomLogic_CustomLogicServicesBuiltin__CheckPermissions(System_String_o *service,MethodInfo *method)

{
  Settings_AdvancedSettings_o *__this;
  bool bVar1;
  System_String_o *local_res8 [4];
  
  local_res8[0] = (System_String_o *)0x0;
  if (Il2CppMethodInitialized_184346532 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346532 = '\x01';
  }
  local_res8[0] = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(local_res8,(void *)0x0);
  bVar1 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase((MethodInfo *)0x0);
  if (bVar1) {
    __this = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
    if (__this != (Settings_AdvancedSettings_o *)0x0) {
      bVar1 = Settings_AdvancedSettings__TryGetServiceUrl(__this,service,local_res8,(MethodInfo *)0x0);
      return bVar1;
    }
    ThrowNullReferenceException();
  }
  return false;
}


// CustomLogic.CustomLogicServicesBuiltin$$GetSecret
// il2cpp: System_String_o* CustomLogic_CustomLogicServicesBuiltin__GetSecret (System_String_o* key, const MethodInfo* method);
// 0x18203b860

System_String_o * CustomLogic_CustomLogicServicesBuiltin__GetSecret(System_String_o *key,MethodInfo *method)

{
  Settings_AdvancedSettings_o *__this;
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *pIVar3;
  System_Exception_o *pSVar4;
  MethodInfo *pMVar5;
  System_String_o *local_res18 [2];
  
  if (Il2CppMethodInitialized_184346534 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346534 = '\x01';
  }
  local_res18[0] = (System_String_o *)0x0;
  bVar1 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase((MethodInfo *)0x0);
  if (!bVar1) {
    pIVar3 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    pSVar4 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar3);
    pSVar2 = il2cpp_codegen_get_runtime_metadata(&"Not allowed to access secrets. Requires being the master client, running locally loaded logic, with services enabled in Advanced Configuration.");
    System_Exception___ctor_1b6abf0(pSVar4,pSVar2,(MethodInfo *)0x0);
    pMVar5 = (MethodInfo *)
             il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_GetSecret)
    ;
    il2cpp_codegen_raise_exception((Il2CppObject *)pSVar4,pMVar5);
  }
  __this = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
  if (__this == (Settings_AdvancedSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Settings_AdvancedSettings__TryGetSecretValue(__this,key,local_res18,(MethodInfo *)0x0);
  if (bVar1) {
    return local_res18[0];
  }
  pSVar2 = il2cpp_codegen_get_runtime_metadata(&"'.");
  str0 = il2cpp_codegen_get_runtime_metadata(&"No secret registered for key '");
  pSVar2 = System_String__Concat_1969b70(str0,key,pSVar2,(MethodInfo *)0x0);
  pIVar3 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  pSVar4 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar3);
  System_Exception___ctor_1b6abf0(pSVar4,pSVar2,(MethodInfo *)0x0);
  pMVar5 = (MethodInfo *)
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_GetSecret);
  il2cpp_codegen_raise_exception((Il2CppObject *)pSVar4,pMVar5);
}


// CustomLogic.CustomLogicServicesBuiltin$$GetEndpoint
// il2cpp: System_String_o* CustomLogic_CustomLogicServicesBuiltin__GetEndpoint (System_String_o* baseUrl, System_String_o* route, const MethodInfo* method);
// 0x18203b520

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
  System_Uri_c *pSVar6;
  Il2CppClass *pIVar7;
  System_InvalidOperationException_o *__this_01;
  MethodInfo *pMVar8;
  System_ArgumentException_o *__this_02;
  
  if (Il2CppMethodInitialized_184346535 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    il2cpp_codegen_initialize_runtime_metadata(&"\\");
    il2cpp_codegen_initialize_runtime_metadata(&"..");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_184346535 = '\x01';
  }
  if (baseUrl != (System_String_o *)0x0) {
    bVar1 = System_String__EndsWith(baseUrl,"/",(MethodInfo *)0x0);
    if (!bVar1) {
      baseUrl = System_String__Concat_1969e50(baseUrl,"/",(MethodInfo *)0x0);
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Uri);
    System_Uri___ctor(__this,baseUrl,(MethodInfo *)0x0);
    bVar1 = System_String__IsNullOrWhiteSpace(route,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this != (System_Uri_o *)0x0) {
        pSVar6 = __this->klass;
        pMVar8 = (pSVar6->vtable)._3_ToString.method;
label_18203b700:
        pSVar4 = (*(pSVar6->vtable)._3_ToString.methodPtr)(__this,pMVar8);
        return pSVar4;
      }
    }
    else if (route != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(route,"..",(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__Contains(route,"\\",(MethodInfo *)0x0);
        if (!bVar1) {
          if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
          }
          bVar1 = System_Uri__IsWellFormedUriString(route,1,(MethodInfo *)0x0);
          if (!bVar1) {
            __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Uri);
            System_Uri___ctor_27be4f0(__this_00,__this,route,(MethodInfo *)0x0);
            if (__this_00 != (System_Uri_o *)0x0) {
              pSVar4 = System_Uri__get_Host(__this_00,(MethodInfo *)0x0);
              if (__this != (System_Uri_o *)0x0) {
                pSVar5 = System_Uri__get_Host(__this,(MethodInfo *)0x0);
                if (pSVar4 != (System_String_o *)0x0) {
                  bVar1 = System_String__Equals_196c240(pSVar4,pSVar5,5,(MethodInfo *)0x0);
                  if (bVar1) {
                    pSVar4 = System_Uri__get_Scheme(__this_00,(MethodInfo *)0x0);
                    pSVar5 = System_Uri__get_Scheme(__this,(MethodInfo *)0x0);
                    bVar1 = System_String__op_Inequality(pSVar4,pSVar5,(MethodInfo *)0x0);
                    if (!bVar1) {
                      iVar2 = System_Uri__get_Port(__this_00,(MethodInfo *)0x0);
                      iVar3 = System_Uri__get_Port(__this,(MethodInfo *)0x0);
                      if (iVar2 == iVar3) {
                        pSVar6 = __this_00->klass;
                        pMVar8 = (pSVar6->vtable)._3_ToString.method;
                        __this = __this_00;
                        goto label_18203b700;
                      }
                    }
                  }
                  pIVar7 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
                  __this_01 = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(pIVar7);
                  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Route escapes the base service URL.");
                  System_InvalidOperationException___ctor_1b2aec0(__this_01,pSVar4,(MethodInfo *)0x0);
                  pMVar8 = (MethodInfo *)
                           il2cpp_codegen_get_runtime_metadata
                                     (&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_GetEndpoint);
                  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar8);
                }
              }
            }
            goto label_18203b72a;
          }
        }
      }
      pIVar7 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_02 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar7);
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Invalid route: must be a relative path without '..' or backslashes.");
      System_ArgumentException___ctor_1a77cc0(__this_02,pSVar4,(MethodInfo *)0x0);
      pMVar8 = (MethodInfo *)
               il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_GetEndpoint);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar8);
    }
  }
label_18203b72a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicServicesBuiltin$$Get
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__Get (System_String_o* service, System_String_o* route, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x18203bb30

void CustomLogic_CustomLogicServicesBuiltin__Get
               (System_String_o *service,System_String_o *route,CustomLogic_UserMethod_o *callback,
               MethodInfo *method)

{
  CustomLogic_CustomLogicManager_o *__this;
  System_String_o *pSVar1;
  CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this_00;
  
  if (Il2CppMethodInitialized_184346536 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346536 = '\x01';
  }
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(service,(MethodInfo *)0x0);
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar1,route,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  if (Il2CppMethodInitialized_18434653b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_GetRequest_d__13);
    Il2CppMethodInitialized_18434653b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_GetRequest_d__13);
  CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *)0x0) {
    (__this_00->fields).uri = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).uri,pSVar1);
    (__this_00->fields).callback = callback;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).callback,callback);
    if (__this != (CustomLogic_CustomLogicManager_o *)0x0) {
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicServicesBuiltin$$Post
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__Post (System_String_o* service, System_String_o* route, System_String_o* data, CustomLogic_UserMethod_o* callback, System_String_o* format, const MethodInfo* method);
// 0x18203be30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18203beeb: nop dword ptr [rax + rax]
// asm:   0x18203bf32: mov rdi, qword ptr [rip + 0x204fb4f]  ; "application/json"

void CustomLogic_CustomLogicServicesBuiltin__Post
               (System_String_o *service,System_String_o *route,System_String_o *data,
               CustomLogic_UserMethod_o *callback,System_String_o *format,MethodInfo *method)

{
  CustomLogic_CustomLogicManager_o *__this;
  bool bVar1;
  uint16_t c;
  System_String_o *pSVar2;
  CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this_00;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  int32_t index;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184346537 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346537 = '\x01';
  }
  pSVar2 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(service,(MethodInfo *)0x0);
  pSVar2 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar2,route,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  if (Il2CppMethodInitialized_184346538 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"application/json");
    Il2CppMethodInitialized_184346538 = '\x01';
  }
  bVar1 = System_String__IsNullOrWhiteSpace(format,(MethodInfo *)0x0);
  value = "application/json";
  if (!bVar1) {
    index = 0;
    if (format == (System_String_o *)0x0) goto label_18203bfdb;
    for (; value = format, index < (format->fields)._stringLength; index = index + 1) {
      c = System_String__get_Chars(format,index,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      bVar1 = System_Char__IsControl(c,(MethodInfo *)0x0);
      if (bVar1) {
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
        __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
        pSVar2 = il2cpp_codegen_get_runtime_metadata(&"Invalid content type: must not contain control characters.");
        System_ArgumentException___ctor_1a77cc0(__this_01,pSVar2,(MethodInfo *)0x0);
        lastManagedFrame =
             (MethodInfo *)
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_GetContentType);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
      }
    }
  }
  if (Il2CppMethodInitialized_18434653c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_PostRequest_d__14);
    Il2CppMethodInitialized_18434653c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_PostRequest_d__14);
  CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *)0x0) {
    (__this_00->fields).uri = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).uri,pSVar2);
    (__this_00->fields).data = data;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).data,data);
    (__this_00->fields).callback = callback;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).callback,callback);
    (__this_00->fields).format = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).format,value);
    if (__this != (CustomLogic_CustomLogicManager_o *)0x0) {
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_18203bfdb:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicServicesBuiltin$$GetContentType
// il2cpp: System_String_o* CustomLogic_CustomLogicServicesBuiltin__GetContentType (System_String_o* format, const MethodInfo* method);
// 0x18203b420
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18203b465: mov qword ptr [rsp + 0x38], rsi
// asm:   0x18203b46a: nop word ptr [rax + rax]

System_String_o *
CustomLogic_CustomLogicServicesBuiltin__GetContentType(System_String_o *format,MethodInfo *method)

{
  bool bVar1;
  uint16_t c;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  int32_t index;
  
  if (Il2CppMethodInitialized_184346538 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"application/json");
    Il2CppMethodInitialized_184346538 = '\x01';
  }
  bVar1 = System_String__IsNullOrWhiteSpace(format,(MethodInfo *)0x0);
  if (bVar1) {
    return "application/json";
  }
  index = 0;
  if (format == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  while( true ) {
    if ((format->fields)._stringLength <= index) {
      return format;
    }
    c = System_String__get_Chars(format,index,(MethodInfo *)0x0);
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    bVar1 = System_Char__IsControl(c,(MethodInfo *)0x0);
    if (bVar1) break;
    index = index + 1;
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  message = il2cpp_codegen_get_runtime_metadata(&"Invalid content type: must not contain control characters.");
  System_ArgumentException___ctor_1a77cc0(__this,message,(MethodInfo *)0x0);
  lastManagedFrame =
       (MethodInfo *)
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_GetContentType);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicServicesBuiltin$$Put
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__Put (System_String_o* service, System_String_o* route, System_String_o* data, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x18203c0d0

void CustomLogic_CustomLogicServicesBuiltin__Put
               (System_String_o *service,System_String_o *route,System_String_o *data,
               CustomLogic_UserMethod_o *callback,MethodInfo *method)

{
  CustomLogic_CustomLogicManager_o *__this;
  System_String_o *pSVar1;
  CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this_00;
  
  if (Il2CppMethodInitialized_184346539 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346539 = '\x01';
  }
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(service,(MethodInfo *)0x0);
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar1,route,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  if (Il2CppMethodInitialized_18434653d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_PutRequest_d__15);
    Il2CppMethodInitialized_18434653d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_PutRequest_d__15);
  CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *)0x0) {
    (__this_00->fields).uri = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).uri,pSVar1);
    (__this_00->fields).data = data;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).data,data);
    (__this_00->fields).callback = callback;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).callback,callback);
    if (__this != (CustomLogic_CustomLogicManager_o *)0x0) {
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicServicesBuiltin$$Delete
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__Delete (System_String_o* service, System_String_o* route, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x18203b330

void CustomLogic_CustomLogicServicesBuiltin__Delete
               (System_String_o *service,System_String_o *route,CustomLogic_UserMethod_o *callback,
               MethodInfo *method)

{
  CustomLogic_CustomLogicManager_o *__this;
  System_String_o *pSVar1;
  CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this_00;
  
  if (Il2CppMethodInitialized_18434653a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_18434653a = '\x01';
  }
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(service,(MethodInfo *)0x0);
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar1,route,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  if (Il2CppMethodInitialized_18434653e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_DeleteRequest_d__16);
    Il2CppMethodInitialized_18434653e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_DeleteRequest_d__16);
  CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *)0x0) {
    (__this_00->fields).uri = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).uri,pSVar1);
    (__this_00->fields).callback = callback;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).callback,callback);
    if (__this != (CustomLogic_CustomLogicManager_o *)0x0) {
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicServicesBuiltin$$GetRequest
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicServicesBuiltin__GetRequest (System_String_o* uri, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x18203b7d0

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicServicesBuiltin__GetRequest
          (System_String_o *uri,CustomLogic_UserMethod_o *callback,MethodInfo *method)

{
  CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this;
  
  if (Il2CppMethodInitialized_18434653b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_GetRequest_d__13);
    Il2CppMethodInitialized_18434653b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_GetRequest_d__13);
  CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this,0,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *)0x0) {
    (__this->fields).uri = uri;
    Il2CppCodeGenWriteBarrier(&(__this->fields).uri,uri);
    (__this->fields).callback = callback;
    Il2CppCodeGenWriteBarrier(&(__this->fields).callback,callback);
    return (System_Collections_IEnumerator_o *)__this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicServicesBuiltin$$PostRequest
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicServicesBuiltin__PostRequest (System_String_o* uri, System_String_o* data, CustomLogic_UserMethod_o* callback, System_String_o* format, const MethodInfo* method);
// 0x18203bd80

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicServicesBuiltin__PostRequest
          (System_String_o *uri,System_String_o *data,CustomLogic_UserMethod_o *callback,
          System_String_o *format,MethodInfo *method)

{
  CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this;
  
  if (Il2CppMethodInitialized_18434653c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_PostRequest_d__14);
    Il2CppMethodInitialized_18434653c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_PostRequest_d__14);
  CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this,0,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *)0x0) {
    (__this->fields).uri = uri;
    Il2CppCodeGenWriteBarrier(&(__this->fields).uri,uri);
    (__this->fields).data = data;
    Il2CppCodeGenWriteBarrier(&(__this->fields).data,data);
    (__this->fields).callback = callback;
    Il2CppCodeGenWriteBarrier(&(__this->fields).callback,callback);
    (__this->fields).format = format;
    Il2CppCodeGenWriteBarrier(&(__this->fields).format,format);
    return (System_Collections_IEnumerator_o *)__this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicServicesBuiltin$$PutRequest
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicServicesBuiltin__PutRequest (System_String_o* uri, System_String_o* data, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x18203c030

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicServicesBuiltin__PutRequest
          (System_String_o *uri,System_String_o *data,CustomLogic_UserMethod_o *callback,MethodInfo *method)

{
  CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this;
  
  if (Il2CppMethodInitialized_18434653d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_PutRequest_d__15);
    Il2CppMethodInitialized_18434653d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_PutRequest_d__15);
  CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this,0,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *)0x0) {
    (__this->fields).uri = uri;
    Il2CppCodeGenWriteBarrier(&(__this->fields).uri,uri);
    (__this->fields).data = data;
    Il2CppCodeGenWriteBarrier(&(__this->fields).data,data);
    (__this->fields).callback = callback;
    Il2CppCodeGenWriteBarrier(&(__this->fields).callback,callback);
    return (System_Collections_IEnumerator_o *)__this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicServicesBuiltin$$DeleteRequest
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicServicesBuiltin__DeleteRequest (System_String_o* uri, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x18203b2a0

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicServicesBuiltin__DeleteRequest
          (System_String_o *uri,CustomLogic_UserMethod_o *callback,MethodInfo *method)

{
  CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this;
  
  if (Il2CppMethodInitialized_18434653e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicServicesBuiltin_DeleteRequest_d__16);
    Il2CppMethodInitialized_18434653e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicServicesBuiltin_DeleteRequest_d__16);
  CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this,0,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *)0x0) {
    (__this->fields).uri = uri;
    Il2CppCodeGenWriteBarrier(&(__this->fields).uri,uri);
    (__this->fields).callback = callback;
    Il2CppCodeGenWriteBarrier(&(__this->fields).callback,callback);
    return (System_Collections_IEnumerator_o *)__this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicServicesBuiltin$$GetWebRequestFailureJSON
// il2cpp: System_String_o* CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON (UnityEngine_Networking_UnityWebRequest_o* webRequest, const MethodInfo* method);
// 0x18203b9a0

System_String_o *
CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON
          (UnityEngine_Networking_UnityWebRequest_o *webRequest,MethodInfo *method)

{
  System_String_o *pSVar1;
  SimpleJSONFixed_JSONObject_o *__this;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONString_o *pSVar3;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (Il2CppMethodInitialized_18434653f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Networking_UnityWebRequest_Result);
    il2cpp_codegen_initialize_runtime_metadata(&"error");
    il2cpp_codegen_initialize_runtime_metadata(&"status");
    Il2CppMethodInitialized_18434653f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  if (webRequest != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    local_18 = UnityEngine_Networking_UnityWebRequest__get_result(webRequest,(MethodInfo *)0x0);
    local_28.klass = (System_Enum_c *)TypeInfo_UnityEngine_Networking_UnityWebRequest_Result;
    local_28.monitor = &g_data_ffffffffffffffff;
    pSVar2 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
    SimpleJSONFixed_JSONString___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
    if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this->klass->vtable)._20_Add.methodPtr)
                (__this,"status",(SimpleJSONFixed_JSONNode_o *)pSVar3,
                 (__this->klass->vtable)._20_Add.method);
      pSVar2 = UnityEngine_Networking_UnityWebRequest__get_error(webRequest,(MethodInfo *)0x0);
      pSVar1 = "error";
      if (pSVar2 == (System_String_o *)0x0) {
        pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
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
// 0x18203c230

System_String_o *
CustomLogic_CustomLogicServicesBuiltin__get_ClassName
          (CustomLogic_CustomLogicServicesBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346540 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Service");
    Il2CppMethodInitialized_184346540 = '\x01';
  }
  return "Service";
}


// CustomLogic.CustomLogicServicesBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__get_IsAbstract (CustomLogic_CustomLogicServicesBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicServicesBuiltin__get_IsAbstract(CustomLogic_CustomLogicServicesBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicServicesBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__get_IsStatic (CustomLogic_CustomLogicServicesBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicServicesBuiltin__get_IsStatic(CustomLogic_CustomLogicServicesBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicServicesBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicServicesBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicServicesBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicServicesBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


