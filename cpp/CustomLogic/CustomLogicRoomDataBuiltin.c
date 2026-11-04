// Type: CustomLogic.CustomLogicRoomDataBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicRoomDataBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicRoomDataBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicRoomDataBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicRoomDataBuiltin_o* CustomLogic_CustomLogicRoomDataBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x18203c260

CustomLogic_CustomLogicRoomDataBuiltin_o *
CustomLogic_CustomLogicRoomDataBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184346527 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin);
    Il2CppMethodInitialized_184346527 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin);
      if (Il2CppMethodInitialized_184346522 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184346522 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicRoomDataBuiltin_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicRoomDataBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x1820449d0

void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_18434652d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434652d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetProperty>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__SetProperty_b__2_0 (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRoomDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182042340

Il2CppObject *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__SetProperty_b__2_0
          (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRoomDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar2;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *lastManagedFrame;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_18434652e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434652e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_18204248e:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar1,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      pIVar1 = __a->m_Items[1];
      if (Il2CppMethodInitialized_184346523 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
        Il2CppMethodInitialized_184346523 = '\x01';
      }
      if (pIVar1 != (Il2CppObject *)0x0) {
        pIVar3 = (Il2CppObject *)0x0;
        if (pIVar1->klass == g_data_184354e38) {
          pIVar3 = pIVar1;
        }
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar3 = (Il2CppObject *)0x0;
          if (pIVar1->klass == g_data_184354e08) {
            pIVar3 = pIVar1;
          }
          if (pIVar3 == (Il2CppObject *)0x0) {
            pIVar3 = (Il2CppObject *)0x0;
            if (pIVar1->klass == g_data_184354e50) {
              pIVar3 = pIVar1;
            }
            if (pIVar3 == (Il2CppObject *)0x0) {
              pIVar3 = (Il2CppObject *)0x0;
              if (pIVar1->klass == g_data_184354de8) {
                pIVar3 = pIVar1;
              }
              if (pIVar3 == (Il2CppObject *)0x0) {
                klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
                __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
                pSVar2 = il2cpp_codegen_get_runtime_metadata(&"RoomData.SetProperty only supports null, float, int, string, or bool values.");
                System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
                lastManagedFrame =
                     il2cpp_codegen_get_runtime_metadata
                               (&MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_SetProperty);
                il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
              }
            }
          }
        }
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  TypeInfo_CustomLogic_CustomLogicManager->static_fields->RoomData;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (__this_00,(Il2CppObject *)pSVar2,pIVar1,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
        return (Il2CppObject *)0x0;
      }
      goto label_18204248e;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetProperty>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__GetProperty_b__3_0 (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRoomDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203fd80

Il2CppObject *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__GetProperty_b__3_0
          (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRoomDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *key;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_18434652f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434652f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar1,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if (1 < (uint)__a->max_length) {
      pIVar1 = __a->m_Items[1];
      if (Il2CppMethodInitialized_184346524 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_object
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_184346524 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pIVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__65cd20
                         ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                          TypeInfo_CustomLogic_CustomLogicManager->static_fields->RoomData,(Il2CppObject *)key
                          ,pIVar1,(MethodInfo_65CD20 *)
                                  MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_object
                         );
      return pIVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__4_0 (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRoomDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203d6a0

Il2CppObject *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__4_0
          (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRoomDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__object__o *__this_00;
  
  if (Il2CppMethodInitialized_184346525 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    Il2CppMethodInitialized_184346525 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->RoomData;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicRoomDataBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x182022e70

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  System_Func_CustomLogicRoomDataBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_184346528 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"SetProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"GetProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    Il2CppMethodInitialized_184346528 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"SetProperty",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184346529 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__SetProperty_b__2_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
      Il2CppMethodInitialized_184346529 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__2_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820231ff;
    if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__SetProperty_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicRoomDataBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__2_0;
  }
  else {
    bVar2 = System_String__op_Equality(name,"GetProperty",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434652a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__GetProperty_b__3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434652a = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__3_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820231ff;
      if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__GetProperty_b__3_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__3_0 =
           (System_Func_CustomLogicRoomDataBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__3_0;
    }
    else {
      bVar2 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicRoomDataBuiltin not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_CreateMemberBinding);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
      }
      if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434652b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__Clear_b__4_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434652b = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__4_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_1820231ff;
      if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__Clear_b__4_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__4_0 =
           (System_Func_CustomLogicRoomDataBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__4_0;
    }
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_1820231ff:
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$__CreateMethodBinding__SetProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o* CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__SetProperty (const MethodInfo* method);
// 0x18202b5e0

CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__SetProperty(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346529 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__SetProperty_b__2_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346529 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__2_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__SetProperty_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicRoomDataBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__2_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$__CreateMethodBinding__GetProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o* CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__GetProperty (const MethodInfo* method);
// 0x182028410

CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__GetProperty(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434652a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__GetProperty_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434652a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__3_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__GetProperty_b__3_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicRoomDataBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__3_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o* CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x182025910

CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434652b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__Clear_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434652b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__Clear_b__4_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicRoomDataBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9__4_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x1820303b0

void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434652c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"SetProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"GetProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    Il2CppMethodInitialized_18434652c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetProperty",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetProperty",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Clear",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRoomDataBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin___ctor (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x18203af40

void CustomLogic_CustomLogicRoomDataBuiltin___ctor
               (CustomLogic_CustomLogicRoomDataBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346522 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184346522 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRoomDataBuiltin$$SetProperty
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin__SetProperty (System_String_o* property, Il2CppObject* value, const MethodInfo* method);
// 0x18203ae10

void CustomLogic_CustomLogicRoomDataBuiltin__SetProperty
               (System_String_o *property,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_184346523 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    Il2CppMethodInitialized_184346523 = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    pIVar1 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e38) {
      pIVar1 = value;
    }
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e08) {
        pIVar1 = value;
      }
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = (Il2CppObject *)0x0;
        if (value->klass == g_data_184354e50) {
          pIVar1 = value;
        }
        if (pIVar1 == (Il2CppObject *)0x0) {
          pIVar1 = (Il2CppObject *)0x0;
          if (value->klass == g_data_184354de8) {
            pIVar1 = value;
          }
          if (pIVar1 == (Il2CppObject *)0x0) {
            klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
            __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
            message = il2cpp_codegen_get_runtime_metadata(&"RoomData.SetProperty only supports null, float, int, string, or bool values.");
            System_Exception___ctor_1b6abf0(__this_00,message,(MethodInfo *)0x0);
            lastManagedFrame =
                 il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_SetProperty);
            il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
          }
        }
      }
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomLogic_CustomLogicManager->static_fields->RoomData;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this,(Il2CppObject *)property,value,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRoomDataBuiltin$$GetProperty
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRoomDataBuiltin__GetProperty (System_String_o* property, Il2CppObject* defaultValue, const MethodInfo* method);
// 0x18203ad90

Il2CppObject *
CustomLogic_CustomLogicRoomDataBuiltin__GetProperty
          (System_String_o *property,Il2CppObject *defaultValue,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_184346524 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346524 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pIVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__65cd20
                     ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                      TypeInfo_CustomLogic_CustomLogicManager->static_fields->RoomData,
                      (Il2CppObject *)property,defaultValue,
                      (MethodInfo_65CD20 *)
                      MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_object
                     );
  return pIVar1;
}


// CustomLogic.CustomLogicRoomDataBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin__Clear (const MethodInfo* method);
// 0x18203ad10

void CustomLogic_CustomLogicRoomDataBuiltin__Clear(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__object__o *__this;
  
  if (Il2CppMethodInitialized_184346525 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    Il2CppMethodInitialized_184346525 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->RoomData;
  if (__this != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRoomDataBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicRoomDataBuiltin__get_ClassName (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x18203af90

System_String_o *
CustomLogic_CustomLogicRoomDataBuiltin__get_ClassName
          (CustomLogic_CustomLogicRoomDataBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346526 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"RoomData");
    Il2CppMethodInitialized_184346526 = '\x01';
  }
  return "RoomData";
}


// CustomLogic.CustomLogicRoomDataBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicRoomDataBuiltin__get_IsAbstract (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicRoomDataBuiltin__get_IsAbstract(CustomLogic_CustomLogicRoomDataBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicRoomDataBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicRoomDataBuiltin__get_IsStatic (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicRoomDataBuiltin__get_IsStatic(CustomLogic_CustomLogicRoomDataBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicRoomDataBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicRoomDataBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicRoomDataBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicRoomDataBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


