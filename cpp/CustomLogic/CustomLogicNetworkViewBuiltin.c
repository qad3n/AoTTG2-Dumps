// Type: CustomLogic.CustomLogicNetworkViewBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicNetworkViewBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicNetworkViewBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicNetworkViewBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicNetworkViewBuiltin_o* CustomLogic_CustomLogicNetworkViewBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f7b7e0

CustomLogic_CustomLogicNetworkViewBuiltin_o *
CustomLogic_CustomLogicNetworkViewBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *obj;
  Map_MapObject_o *value;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_CustomLogicClassInstance__o *__this_01;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_02;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345755 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin);
    Il2CppMethodInitialized_184345755 = '\x01';
  }
  local_res8[0] = 0;
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)args->max_length != 1) {
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicNetworkViewBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_02 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_02,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
  }
  if ((int)args->max_length != 0) {
    obj = args->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_MapObject);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin);
    if (Il2CppMethodInitialized_184345744 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Collections_Generic_List_CustomLogicComponentInstance);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Collections_Generic_List_CustomLogicClassInstance);
      Il2CppMethodInitialized_184345744 = '\x01';
    }
    (__this->fields).OwnerId = -1;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Collections_Generic_List_CustomLogicComponentInstance);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
               (MethodInfo_92A240 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_ctor);
    (__this->fields)._classInstances = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._classInstances,__this_00);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicClassInstance);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_ctor);
    (__this->fields)._addonInstances = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._addonInstances,__this_01);
    (__this->fields)._isTransformSynced = true;
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).MapObject = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).MapObject,value);
    return __this;
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f80740

void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184345761 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_184345761 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__Transfer>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__Transfer_b__4_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7ff60

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__Transfer_b__4_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  CustomLogic_CustomLogicPlayerBuiltin_o *player;
  Photon_Pun_PhotonView_o *pPVar2;
  
  if (Il2CppMethodInitialized_184345762 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345762 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    player = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    if ((__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Sync, pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
      pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)pCVar1,(MethodInfo *)0x0);
      if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
        if ((pPVar2->fields)._IsMine_k__BackingField != false) {
          pCVar1 = (__c->fields).Sync;
          if (pCVar1 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) goto label_181f8000f;
          CustomLogic_CustomLogicPhotonSync__Transfer(pCVar1,player,(MethodInfo *)0x0);
        }
        return (Il2CppObject *)0x0;
      }
    }
  }
label_181f8000f:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessage>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessage_b__5_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7f120

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessage_b__5_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar1;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_184345763 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345763 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f7f1e9:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    if (1 < (uint)__a->max_length) {
      message = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (((__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
          (pCVar1 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0)) &&
         (__this_00 = (__c->fields).Sync, __this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
        CustomLogic_CustomLogicPhotonSync__SendMessage
                  (__this_00,(pCVar1->fields).Player,message,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_181f7f1e9;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageAll>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessageAll_b__6_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7efe0

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessageAll_b__6_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_184345764 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345764 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    message = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                        );
    if ((__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Sync, __this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
      CustomLogic_CustomLogicPhotonSync__SendMessageAll(__this_00,message,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageOthers>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessageOthers_b__7_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7f080

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessageOthers_b__7_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_184345765 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345765 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    message = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                        );
    if ((__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Sync, __this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
      CustomLogic_CustomLogicPhotonSync__SendMessageOthers(__this_00,message,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendStream>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendStream_b__8_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7f200

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendStream_b__8_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicNetworkViewBuiltin__SendStream(__c,__a->m_Items[0],(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__ReceiveStream>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__ReceiveStream_b__9_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7e870
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f7e9f2: mov rdi, rbx

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__ReceiveStream_b__9_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  CustomLogic_CustomLogicQuaternionBuiltin_o *obj;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar3;
  undefined8 *puVar4;
  UnityEngine_Quaternion_Fields local_18;
  
  if (__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345751 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_RemoveAt);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
      Il2CppMethodInitialized_184345751 = '\x01';
    }
    pSVar2 = (__c->fields)._streamObjects;
    if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
      obj = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
            System_Collections_Generic_List_object___System_Collections_IList_get_Item
                      (pSVar2,0,(MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_object_get_Item);
      if (Il2CppMethodInitialized_184345753 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_184345753 = '\x01';
      }
      if (obj != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
        pCVar3 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0;
        if ((Il2CppClass *)obj->klass == (Il2CppClass *)TypeInfo_UnityEngine_Vector3) {
          pCVar3 = obj;
        }
        if (pCVar3 == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
          bVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
          if ((bVar1 <= (((Il2CppClass *)obj->klass)->_2).typeHierarchyDepth) &&
             ((((Il2CppClass *)obj->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) {
            pCVar3 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
            if ((((Il2CppClass *)obj->klass)->_1).element_class !=
                (TypeInfo_UnityEngine_Quaternion->_1).element_class) {
              il2cpp_codegen_raise_invalid_cast_exception();
            }
            puVar4 = il2cpp_object_unbox((Il2CppObject *)obj);
            local_18._0_8_ = *puVar4;
            local_18._8_8_ = puVar4[1];
            CustomLogic_CustomLogicQuaternionBuiltin___ctor_1ed2b60
                      (pCVar3,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
            obj = pCVar3;
          }
        }
        else {
          pCVar3 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          if ((((Il2CppClass *)obj->klass)->_1).element_class !=
              (TypeInfo_UnityEngine_Vector3->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          puVar4 = il2cpp_object_unbox((Il2CppObject *)obj);
          local_18._0_8_ = *puVar4;
          local_18.z = *(float *)(puVar4 + 1);
          CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                    ((CustomLogic_CustomLogicVector3Builtin_o *)pCVar3,(UnityEngine_Vector3_o *)&local_18,
                     (MethodInfo *)0x0);
          obj = pCVar3;
        }
      }
      pSVar2 = (__c->fields)._streamObjects;
      if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List_object___RemoveAt
                  (pSVar2,0,(MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_object_RemoveAt);
        return (Il2CppObject *)obj;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f59f70

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Func_CustomLogicNetworkViewBuiltin__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *pCVar5;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Action_CustomLogicNetworkViewBuiltin__object__o *__this_00;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_01;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *lastManagedFrame;
  System_Func_CustomLogicNetworkViewBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_184345756 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"SendStream");
    il2cpp_codegen_initialize_runtime_metadata(&"Transfer");
    il2cpp_codegen_initialize_runtime_metadata(&"ReceiveStream");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessage");
    il2cpp_codegen_initialize_runtime_metadata(&"SyncTransforms");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageAll");
    il2cpp_codegen_initialize_runtime_metadata(&"Owner");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageOthers");
    Il2CppMethodInitialized_184345756 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x396d88ce) {
    if (uVar3 < 0x121de31e) {
      if (uVar3 == 0x895e8a6) {
        bVar2 = System_String__op_Equality(name,"Transfer",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5a906;
        if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345759 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__Transfer_b__4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345759 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__4_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5a8d2;
        if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__Transfer_b__4_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__4_0 =
             (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)__this;
        targetAddress =
             &TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__4_0;
      }
      else {
        if (uVar3 != 0x121de31d) goto label_181f5a906;
        bVar2 = System_String__op_Equality(name,"SendMessageAll",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5a906;
        if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434575b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessageAll_b__6
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434575b = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__6_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5a8d2;
        if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessageAll_b__6
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__6_0 =
             (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)__this;
        targetAddress =
             &TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__6_0;
      }
    }
    else if (uVar3 == 0x1de8ebcf) {
      bVar2 = System_String__op_Equality(name,"SendStream",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f5a906;
      if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434575d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendStream_b__8_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434575d = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__8_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5a8d2;
      if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)
               TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendStream_b__8_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__8_0 =
           (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__8_0;
    }
    else {
      if (uVar3 != 0x396d88cd) goto label_181f5a906;
      bVar2 = System_String__op_Equality(name,"SendMessageOthers",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f5a906;
      if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434575c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessageOthers_b
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434575c = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__7_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5a8d2;
      if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)
               TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessageOthers_b
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__7_0 =
           (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__7_0;
    }
  }
  else if (uVar3 < 0x8b3137a4) {
    if (uVar3 != 0x67ac82ce) {
      if (uVar3 == 0x8b3137a3) {
        bVar2 = System_String__op_Equality(name,"SyncTransforms",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345757 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicNetworkViewBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__SyncTransforms_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__SyncTransforms_g_40c59b8
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object);
            Il2CppMethodInitialized_184345757 = '\x01';
          }
          pSVar4 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)pSVar4,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__SyncTransforms_g
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNetworkViewBuiltin_object);
          System_Action_object__object____ctor
                    ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
                     (Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__SyncTransforms_g_40c59b8
                     ,(MethodInfo *)0x0);
          pCVar5 = il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,(System_Func_T__object__o *)pSVar4,
                     (System_Action_T__object__o *)__this_00,
                     (MethodInfo_12B8EE0 *)
                     MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pCVar5;
        }
      }
      goto label_181f5a906;
    }
    bVar2 = System_String__op_Equality(name,"SendMessage",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f5a906;
    if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434575a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessage_b__5_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
      Il2CppMethodInitialized_18434575a = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__5_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5a8d2;
    if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessage_b__5_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__5_0;
  }
  else {
    if (uVar3 == 0x9b22be74) {
      bVar2 = System_String__op_Equality(name,"Owner",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345758 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__Owner_g____getter_3
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object);
          Il2CppMethodInitialized_184345758 = '\x01';
        }
        pSVar4 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)pSVar4,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__Owner_g____getter_3
                   ,(MethodInfo_16E67D0 *)0x0);
        pCVar5 = il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,(System_Func_T__object__o *)pSVar4,
                   (System_Action_T__object__o *)0x0,
                   (MethodInfo_12B8EE0 *)
                   MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pCVar5;
      }
label_181f5a906:
      pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicNetworkViewBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_02,pSVar6,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
    }
    if (uVar3 != 0xf3e2723a) goto label_181f5a906;
    bVar2 = System_String__op_Equality(name,"ReceiveStream",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f5a906;
    if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434575e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__ReceiveStream_b__9_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
      Il2CppMethodInitialized_18434575e = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__9_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5a8d2;
    if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__ReceiveStream_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__9_0;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_181f5a8d2:
  __this_01 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_01,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_01;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreatePropertyBinding__SyncTransforms
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__SyncTransforms (const MethodInfo* method);
// 0x181f6e130

CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__SyncTransforms
          (MethodInfo *method)

{
  System_Func_CustomLogicNetworkViewBuiltin__object__o *__this;
  System_Action_CustomLogicNetworkViewBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345757 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicNetworkViewBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__SyncTransforms_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__SyncTransforms_g_40c59b8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object);
    Il2CppMethodInitialized_184345757 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__SyncTransforms_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNetworkViewBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__SyncTransforms_g_40c59b8
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreatePropertyBinding__Owner
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__Owner (const MethodInfo* method);
// 0x181f6cd80

CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__Owner(MethodInfo *method)

{
  System_Func_CustomLogicNetworkViewBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345758 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__Owner_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object);
    Il2CppMethodInitialized_184345758 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__Owner_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__Transfer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__Transfer (const MethodInfo* method);
// 0x181f6a9d0

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__Transfer(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345759 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__Transfer_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_184345759 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__Transfer_b__4_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__4_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendMessage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessage (const MethodInfo* method);
// 0x181f69e80

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessage(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434575a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessage_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_18434575a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessage_b__5_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__5_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendMessageAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageAll (const MethodInfo* method);
// 0x181f69c40

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageAll(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434575b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessageAll_b__6
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_18434575b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessageAll_b__6
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__6_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendMessageOthers
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageOthers (const MethodInfo* method);
// 0x181f69d60

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageOthers
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434575c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessageOthers_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_18434575c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessageOthers_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__7_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendStream
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendStream (const MethodInfo* method);
// 0x181f69fa0

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendStream(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434575d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendStream_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_18434575d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendStream_b__8_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__8_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__ReceiveStream
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__ReceiveStream (const MethodInfo* method);
// 0x181f698d0

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__ReceiveStream(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434575e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__ReceiveStream_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_18434575e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__ReceiveStream_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9__9_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181f6f620

void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434575f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"SendStream");
    il2cpp_codegen_initialize_runtime_metadata(&"Transfer");
    il2cpp_codegen_initialize_runtime_metadata(&"ReceiveStream");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessage");
    il2cpp_codegen_initialize_runtime_metadata(&"SyncTransforms");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageAll");
    il2cpp_codegen_initialize_runtime_metadata(&"Owner");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageOthers");
    Il2CppMethodInitialized_18434575f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SyncTransforms",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Owner",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Transfer",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SendMessage",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SendMessageAll",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SendMessageOthers",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SendStream",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReceiveStream",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->static_fields->MemberNames,__this
              );
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$<__CreatePropertyBinding__SyncTransforms>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__SyncTransforms_g____getter_2_0 (CustomLogic_CustomLogicNetworkViewBuiltin_o* __i, const MethodInfo* method);
// 0x181f66300

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__SyncTransforms_g____getter_2_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    local_res8[0] = (__i->fields)._isTransformSynced;
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$<__CreatePropertyBinding__SyncTransforms>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__SyncTransforms_g____setter_2_1 (CustomLogic_CustomLogicNetworkViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f66330

void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__SyncTransforms_g____setter_2_1
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  bool value;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184345760 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345760 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345745 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184345745 = '\x01';
    }
    pCVar1 = (__i->fields).Sync;
    (__i->fields)._isTransformSynced = value;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__i->fields).Sync;
      if (pCVar1 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) goto label_181f66408;
      CustomLogic_CustomLogicPhotonSync__set_SyncTransforms(pCVar1,value,(MethodInfo *)0x0);
    }
    return;
  }
label_181f66408:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$<__CreatePropertyBinding__Owner>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__Owner_g____getter_3_0 (CustomLogic_CustomLogicNetworkViewBuiltin_o* __i, const MethodInfo* method);
// 0x181f646f0

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__Owner_g____getter_3_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  Photon_Realtime_Player_o *value;
  bool bVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (__i != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345746 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184345746 = '\x01';
    }
    pCVar1 = (__i->fields).Sync;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return (Il2CppObject *)0x0;
    }
    pCVar1 = (__i->fields).Sync;
    if (pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)pCVar1,(MethodInfo *)0x0);
      if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
        value = (pPVar3->fields)._Owner_k__BackingField;
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
        if (Il2CppMethodInitialized_184345766 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_184345766 = '\x01';
        }
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
        (__this->fields).Player = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Player,value);
        return (Il2CppObject *)__this;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin___ctor (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x181f77d00

void CustomLogic_CustomLogicNetworkViewBuiltin___ctor
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_CustomLogicClassInstance__o *__this_01;
  
  if (Il2CppMethodInitialized_184345744 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_CustomLogicComponentInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_CustomLogicClassInstance);
    Il2CppMethodInitialized_184345744 = '\x01';
  }
  (__this->fields).OwnerId = -1;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicComponentInstance)
  ;
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_ctor
            );
  (__this->fields)._classInstances = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._classInstances,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicClassInstance);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_ctor);
  (__this->fields)._addonInstances = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._addonInstances,__this_01);
  (__this->fields)._isTransformSynced = true;
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).MapObject = obj;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MapObject,obj);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_SyncTransforms
// il2cpp: bool CustomLogic_CustomLogicNetworkViewBuiltin__get_SyncTransforms (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x18198c740

bool
CustomLogic_CustomLogicNetworkViewBuiltin__get_SyncTransforms(CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields)._isTransformSynced;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$set_SyncTransforms
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__set_SyncTransforms (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f77f40

void CustomLogic_CustomLogicNetworkViewBuiltin__set_SyncTransforms
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,bool value,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184345745 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345745 = '\x01';
  }
  pCVar1 = (__this->fields).Sync;
  (__this->fields)._isTransformSynced = value;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields).Sync;
    if (pCVar1 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      ThrowNullReferenceException();
    }
    CustomLogic_CustomLogicPhotonSync__set_SyncTransforms(pCVar1,value,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_Owner
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x181f77e40

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  Photon_Realtime_Player_o *value;
  bool bVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_184345746 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345746 = '\x01';
  }
  pCVar1 = (__this->fields).Sync;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pCVar1 = (__this->fields).Sync;
    if (pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)pCVar1,(MethodInfo *)0x0);
      if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
        value = (pPVar3->fields)._Owner_k__BackingField;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
        if (Il2CppMethodInitialized_184345766 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_184345766 = '\x01';
        }
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
        (__this_00->fields).Player = value;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).Player,value);
        return __this_00;
      }
    }
    ThrowNullReferenceException();
  }
  return (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$OnSecond
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__OnSecond (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x181f76e90

void CustomLogic_CustomLogicNetworkViewBuiltin__OnSecond
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345747 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184345747 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$RegisterComponentInstance
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__RegisterComponentInstance (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicComponentInstance_o* instance, const MethodInfo* method);
// 0x181f77170

void CustomLogic_CustomLogicNetworkViewBuiltin__RegisterComponentInstance
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicComponentInstance_o *instance,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  CustomLogic_CustomLogicComponentInstance_array *pCVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184345748 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_Add);
    Il2CppMethodInitialized_184345748 = '\x01';
  }
  pMVar4 = MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_Add;
  __this_00 = (__this->fields)._classInstances;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar3 = (__this_00->fields)._items;
    if (pCVar3 != (CustomLogic_CustomLogicComponentInstance_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if ((uint)pCVar3->max_length <= uVar2) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)instance,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        return;
      }
      (__this_00->fields)._size = uVar2 + 1;
      if (uVar2 < (uint)pCVar3->max_length) {
        pCVar3->m_Items[(int)uVar2] = instance;
        Il2CppCodeGenWriteBarrier(pCVar3->m_Items + (int)uVar2,instance);
        return;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$RegisterAddonInstance
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__RegisterAddonInstance (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicClassInstance_o* instance, const MethodInfo* method);
// 0x181f77090

void CustomLogic_CustomLogicNetworkViewBuiltin__RegisterAddonInstance
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicClassInstance_o *instance,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicClassInstance__o *pSVar3;
  CustomLogic_CustomLogicClassInstance_array *pCVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  
  if (Il2CppMethodInitialized_184345749 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Contains);
    Il2CppMethodInitialized_184345749 = '\x01';
  }
  pSVar3 = (__this->fields)._addonInstances;
  if (pSVar3 != (System_Collections_Generic_List_CustomLogicClassInstance__o *)0x0) {
    bVar6 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)instance,
                       (MethodInfo_93FC70 *)
                       MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Contains);
    pMVar5 = MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Add;
    if (bVar6) {
      return;
    }
    pSVar3 = (__this->fields)._addonInstances;
    if (pSVar3 != (System_Collections_Generic_List_CustomLogicClassInstance__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pCVar4 = (pSVar3->fields)._items;
      if (pCVar4 != (CustomLogic_CustomLogicClassInstance_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if ((uint)pCVar4->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)instance,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          return;
        }
        (pSVar3->fields)._size = uVar2 + 1;
        if ((uint)pCVar4->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pCVar4->m_Items[(int)uVar2] = instance;
        Il2CppCodeGenWriteBarrier(pCVar4->m_Items + (int)uVar2,instance);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$OnNetworkTransfer
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkTransfer (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* oldOwner, CustomLogic_CustomLogicPlayerBuiltin_o* newOwner, const MethodInfo* method);
// 0x181f76c40
// eh: try 0x181f76d50..0x181f76e84 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f76e29: mov rdx, qword ptr [rip + 0x2103ae0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x181f76e30: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f76e35: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f76e3a: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f76e3f: test rcx, rcx
// asm:   0x181f76e42: jne 0x181f76e84
// asm:   0x181f76e84: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkTransfer
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *oldOwner,
               CustomLogic_CustomLogicPlayerBuiltin_o *newOwner,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  undefined1 local_60 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_18434574a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"OnNetworkTransfer");
    Il2CppMethodInitialized_18434574a = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pMVar1 = (__this->fields).MapObject;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      __this_00 = (__this->fields)._classInstances;
      if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
      goto label_181f76e8a;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
      local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._current = (Il2CppObject *)local_50;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_48,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                          );
        pIVar4 = local_48.fields._current;
        if (!bVar2) break;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
        if (parameters == (System_Object_array *)0x0) {
          ThrowNullReferenceException();
        }
        if (oldOwner != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
          pIVar3 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)oldOwner,(((parameters->obj).klass)->_1).element_class);
          if (pIVar3 == (Il2CppObject *)0x0) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = (Il2CppObject *)oldOwner;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,oldOwner);
        if (newOwner != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
          pIVar3 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)newOwner,(((parameters->obj).klass)->_1).element_class);
          if (pIVar3 == (Il2CppObject *)0x0) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
        }
        if ((uint)parameters->max_length < 2) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[1] = (Il2CppObject *)newOwner;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,newOwner);
        if ((CustomLogic_CustomLogicComponentInstance_o *)pIVar4 ==
            (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
          ThrowNullReferenceException();
        }
        CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                  ((CustomLogic_CustomLogicComponentInstance_o *)pIVar4,"OnNetworkTransfer",parameters,
                   (MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    }
    return;
  }
label_181f76e8a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SetSyncDynamic
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPhotonSync_o* sync, const MethodInfo* method);
// 0x181f777c0

void CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,CustomLogic_CustomLogicPhotonSync_o *sync,
               MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  Photon_Pun_PhotonView_o *pPVar2;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  
  if (Il2CppMethodInitialized_18434574b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_18434574b = '\x01';
  }
  (__this->fields).Sync = sync;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Sync,sync);
  if (sync != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)sync,(MethodInfo *)0x0);
    if ((pPVar2 != (Photon_Pun_PhotonView_o *)0x0) &&
       (pPVar1 = (pPVar2->fields)._Owner_k__BackingField, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
      __this_00 = (__this->fields).Sync;
      (__this->fields).OwnerId = (pPVar1->fields).actorNumber;
      if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
        CustomLogic_CustomLogicPhotonSync__set_SyncTransforms
                  (__this_00,(__this->fields)._isTransformSynced,(MethodInfo *)0x0);
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pCVar3 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                             (__this_01,(__this->fields).MapObject,(MethodInfo *)0x0);
          if (pCVar3 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
            (pCVar3->fields)._NetworkView_k__BackingField = __this;
            Il2CppCodeGenWriteBarrier(&(pCVar3->fields)._NetworkView_k__BackingField,__this);
          }
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SetSync
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SetSync (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPhotonSync_o* sync, const MethodInfo* method);
// 0x181f778a0
// eh: try 0x181f77b00..0x181f77c9c -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f77bdd: mov rdx, qword ptr [rip + 0x2102d2c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x181f77be4: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f77be9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f77bee: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f77bf3: test rcx, rcx
// asm:   0x181f77bf6: jne 0x181f77c9c
// asm:   0x181f77bfc: mov rsi, qword ptr [rsp + 0xa0]
// asm:   0x181f77c9c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void CustomLogic_CustomLogicNetworkViewBuiltin__SetSync
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,CustomLogic_CustomLogicPhotonSync_o *sync,
               MethodInfo *method)

{
  int32_t id;
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  CustomLogic_CustomLogicComponentInstance_o *__this_02;
  bool bVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  Photon_Realtime_Player_o *pPVar5;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_03;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_04;
  System_Object_array *parameters;
  Il2CppObject *pIVar6;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar7;
  undefined1 local_70 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_60;
  undefined1 local_58 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_50;
  CustomLogic_CustomLogicComponentInstance_o *local_48;
  
  if (Il2CppMethodInitialized_18434574c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"OnNetworkTransfer");
    Il2CppMethodInitialized_18434574c = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_48 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  id = (__this->fields).OwnerId;
  (__this->fields).Sync = sync;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Sync,sync);
  if (sync != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)sync,(MethodInfo *)0x0);
    if ((pPVar4 != (Photon_Pun_PhotonView_o *)0x0) &&
       (pPVar5 = (pPVar4->fields)._Owner_k__BackingField, pPVar5 != (Photon_Realtime_Player_o *)0x0)) {
      (__this->fields).OwnerId = (pPVar5->fields).actorNumber;
      pCVar1 = (__this->fields).Sync;
      if (pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
        CustomLogic_CustomLogicPhotonSync__set_SyncTransforms
                  (pCVar1,(__this->fields)._isTransformSynced,(MethodInfo *)0x0);
        if (-1 < id) {
          if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
          }
          pPVar5 = Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
          __this_03 = (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0;
          if (pPVar5 != (Photon_Realtime_Player_o *)0x0) {
            __this_03 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
            CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_03,pPVar5,(MethodInfo *)0x0);
          }
          pCVar1 = (__this->fields).Sync;
          if (pCVar1 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) goto label_181f77c62;
          pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                             ((Photon_Pun_MonoBehaviourPun_o *)pCVar1,(MethodInfo *)0x0);
          if (pPVar4 == (Photon_Pun_PhotonView_o *)0x0) goto label_181f77c62;
          pPVar5 = (pPVar4->fields)._Owner_k__BackingField;
          __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
          if (Il2CppMethodInitialized_184345766 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
            Il2CppMethodInitialized_184345766 = '\x01';
          }
          if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
          }
          CustomLogic_BuiltinClassInstance___ctor
                    ((CustomLogic_BuiltinClassInstance_o *)__this_04,(MethodInfo *)0x0);
          (__this_04->fields).Player = pPVar5;
          Il2CppCodeGenWriteBarrier(&(__this_04->fields).Player,pPVar5);
          pMVar2 = (__this->fields).MapObject;
          if (pMVar2 == (Map_MapObject_o *)0x0) goto label_181f77c62;
          x = (UnityEngine_Object_o *)(pMVar2->fields).GameObject;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            __this_00 = (__this->fields)._classInstances;
            if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
            goto label_181f77c62;
            System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
                       (System_Collections_Generic_List_T__o *)__this_00,
                       (MethodInfo_91F180 *)
                       MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
            local_58 = (undefined1  [8])local_70._0_8_;
            pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70._8_8_;
            local_48 = local_60;
            local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
            local_70._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
            while( true ) {
              bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                                 (MethodInfo_153A2A0 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                );
              __this_02 = local_48;
              if (!bVar3) break;
              parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
              if (parameters == (System_Object_array *)0x0) {
                ThrowNullReferenceException();
              }
              if (__this_03 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
                pIVar6 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)__this_03,(((parameters->obj).klass)->_1).element_class);
                if (pIVar6 == (Il2CppObject *)0x0) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
              }
              if ((int)parameters->max_length == 0) {
                ThrowIndexOutOfRangeException();
              }
              parameters->m_Items[0] = (Il2CppObject *)__this_03;
              Il2CppCodeGenWriteBarrier(parameters->m_Items,__this_03);
              if (__this_04 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
                pIVar6 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)__this_04,(((parameters->obj).klass)->_1).element_class);
                if (pIVar6 == (Il2CppObject *)0x0) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
              }
              if ((uint)parameters->max_length < 2) {
                ThrowIndexOutOfRangeException();
              }
              parameters->m_Items[1] = (Il2CppObject *)__this_04;
              Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,__this_04);
              if (__this_02 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
                ThrowNullReferenceException();
              }
              CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                        (__this_02,"OnNetworkTransfer",parameters,(MethodInfo *)0x0);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
                       MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
                      );
          }
        }
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pCVar7 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                             (__this_01,(__this->fields).MapObject,(MethodInfo *)0x0);
          if (pCVar7 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
            (pCVar7->fields)._NetworkView_k__BackingField = __this;
            Il2CppCodeGenWriteBarrier(&(pCVar7->fields)._NetworkView_k__BackingField,__this);
          }
          return;
        }
      }
    }
  }
label_181f77c62:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendNetworkStream
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendNetworkStream (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x181f77290
// eh: try 0x181f773a3..0x181f77456 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f773eb: mov rdx, qword ptr [rip + 0x210351e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x181f773f2: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f773f7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f773fc: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f77401: test rcx, rcx
// asm:   0x181f77404: jne 0x181f77456
// asm:   0x181f77406: mov rsi, qword ptr [rsp + 0x78]
// asm:   0x181f7740b: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x181f77456: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void CustomLogic_CustomLogicNetworkViewBuiltin__SendNetworkStream
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *obj;
  undefined1 local_40 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  CustomLogic_CustomLogicComponentInstance_o *local_18;
  
  if (Il2CppMethodInitialized_18434574d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    il2cpp_codegen_initialize_runtime_metadata(&"SendNetworkStream");
    Il2CppMethodInitialized_18434574d = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar2,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_object_ctor);
  (__this->fields)._streamObjects = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._streamObjects,pSVar2);
  __this_00 = (__this->fields)._classInstances;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                        );
      if (!bVar1) break;
      if (local_18 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                (local_18,"SendNetworkStream",(System_Object_array *)0x0,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    pSVar2 = (__this->fields)._streamObjects;
    if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
      obj = System_Collections_Generic_List_object___ToArray
                      ((System_Collections_Generic_List_T__o *)pSVar2,
                       (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_object_ToArray);
      if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
        Photon_Pun_PhotonStream__SendNext(stream,&obj->obj,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$OnNetworkStream
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkStream (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, System_Object_array* objs, const MethodInfo* method);
// 0x181f76a60
// eh: try 0x181f76bb0..0x181f76c25 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f76bf4: mov rdx, qword ptr [rip + 0x2103d15]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x181f76bfb: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f76c00: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f76c05: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f76c0a: test rcx, rcx
// asm:   0x181f76c0d: jne 0x181f76c25
// asm:   0x181f76c25: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkStream
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,System_Object_array *objs,
               MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar2;
  System_Collections_Generic_List_object__o *__this_01;
  undefined1 local_40 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_18434574e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_ctor_40c4be8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"OnNetworkStream");
    Il2CppMethodInitialized_18434574e = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor_94fb10
            (__this_01,(System_Collections_Generic_IEnumerable_T__o *)objs,
             (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_object_ctor_40c4be8);
  (__this->fields)._streamObjects = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._streamObjects,__this_01);
  pMVar1 = (__this->fields).MapObject;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      __this_00 = (__this->fields)._classInstances;
      if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
      goto label_181f76c2b;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
      local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      local_28.fields._index = local_40._8_4_;
      local_28.fields._version = local_40._12_4_;
      local_28.fields._current = (Il2CppObject *)local_30;
      local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_40._8_8_ = &local_28;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_28,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                          );
        if (!bVar2) break;
        if ((CustomLogic_CustomLogicComponentInstance_o *)local_28.fields._current ==
            (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
          ThrowNullReferenceException();
        }
        CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                  ((CustomLogic_CustomLogicComponentInstance_o *)local_28.fields._current,
                   "OnNetworkStream",(System_Object_array *)0x0,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    }
    return;
  }
label_181f76c2b:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$OnNetworkMessage
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkMessage (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, System_String_o* message, double sentServerTime, const MethodInfo* method);
// 0x181f76470
// eh: try 0x181f76620..0x181f76a4b -> pad 0x18331aad0 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 42 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f76619: nop dword ptr [rax]
// asm:   0x181f76750: mov rdx, qword ptr [rip + 0x21041b9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x181f76757: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181f7675c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f76761: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f76766: test rcx, rcx
// asm:   0x181f76769: jne 0x181f769fe
// asm:   0x181f7676f: xor esi, esi
// asm:   0x181f76771: movsd xmm6, qword ptr [rsp + 0xf8]
// asm:   0x181f7677a: mov r15, qword ptr [rsp + 0xf0]
// asm:   0x181f76782: mov r12, qword ptr [rsp + 0xe8]
// asm:   0x181f7678a: mov r13, qword ptr [rsp + 0xe0]
// asm:   0x181f7697c: mov rdx, qword ptr [rip + 0x21037ad]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicClassInstance_Dispose
// asm:   0x181f76983: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181f76988: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f7698d: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f76992: test rcx, rcx
// asm:   0x181f76995: jne 0x181f76a4b
// asm:   0x181f769fe: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181f76a4b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18331aad0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18331aad5: push rbp
// asm:   0x18331aad6: sub rsp, 0x30
// asm:   0x18331aada: mov rbp, rdx
// asm:   0x18331aadd: mov rax, qword ptr [rbp + 0x80]
// asm:   0x18331aae4: mov rcx, qword ptr [rax]
// asm:   0x18331aae7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18331aaeb: movabs rax, 0
// asm:   0x18331aaf5: add rsp, 0x30
// asm:   0x18331aaf9: pop rbp
// asm:   0x18331aafa: ret 
// asm:   0x18333dc60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333dc65: push rbp
// asm:   0x18333dc66: sub rsp, 0x30
// asm:   0x18333dc6a: mov rbp, rdx
// asm:   0x18333dc6d: mov rax, qword ptr [rbp + 0x88]
// asm:   0x18333dc74: mov rcx, qword ptr [rax]
// asm:   0x18333dc77: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333dc7b: movabs rax, 0
// asm:   0x18333dc85: add rsp, 0x30
// asm:   0x18333dc89: pop rbp
// asm:   0x18333dc8a: ret 

void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkMessage
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *player,System_String_o *message,double sentServerTime,
               MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_CustomLogicClassInstance__o *__this_01;
  CustomLogic_CustomLogicEvaluator_o *__this_02;
  CustomLogic_CustomLogicComponentInstance_o *pCVar2;
  bool bVar3;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  undefined1 local_a8 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_98;
  double local_90;
  undefined1 local_88 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_80;
  CustomLogic_CustomLogicComponentInstance_o *local_78;
  undefined1 local_70 [8];
  uint64_t uStack_68;
  CustomLogic_CustomLogicComponentInstance_o *local_60;
  
  if (Il2CppMethodInitialized_18434574f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicClassInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicClassInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicClassInstance_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"OnNetworkMessage");
    Il2CppMethodInitialized_18434574f = '\x01';
  }
  local_88 = (undefined1  [8])0x0;
  pUStack_80 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_78 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  local_70 = (undefined1  [8])0x0;
  uStack_68 = 0;
  local_60 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator ==
      (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return;
  }
  pMVar1 = (__this->fields).MapObject;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
      local_88 = (undefined1  [8])local_a8._0_8_;
      pUStack_80 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8._8_8_;
      local_78 = local_98;
      local_a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_a8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88;
      while (bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                               ), pCVar2 = local_78, bVar3) {
        pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
        if (pSVar4 == (System_Object_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((player != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)player,(((pSVar4->obj).klass)->_1).element_class)
           , pIVar5 == (Il2CppObject *)0x0)) {
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
        if ((int)pSVar4->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        pSVar4->m_Items[0] = (Il2CppObject *)player;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items,player);
        if ((message != (System_String_o *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)message,(((pSVar4->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) {
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
        if ((uint)pSVar4->max_length < 2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar4->m_Items[1] = (Il2CppObject *)message;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,message);
        local_90 = sentServerTime;
        pIVar5 = il2cpp_value_box(g_data_184354e40,&local_90);
        if ((pIVar5 != (Il2CppObject *)0x0) &&
           (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
           pIVar6 == (Il2CppObject *)0x0)) {
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
        if ((uint)pSVar4->max_length < 3) {
          ThrowIndexOutOfRangeException();
        }
        pSVar4->m_Items[2] = pIVar5;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 2,pIVar5);
        if (pCVar2 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
          ThrowNullReferenceException();
        }
        CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                  (pCVar2,"OnNetworkMessage",pSVar4,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88,
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
      __this_01 = (__this->fields)._addonInstances;
      if (__this_01 != (System_Collections_Generic_List_CustomLogicClassInstance__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
                   (System_Collections_Generic_List_T__o *)__this_01,
                   (MethodInfo_91F180 *)
                   MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_GetEnumerator);
        local_70 = (undefined1  [8])local_a8._0_8_;
        uStack_68 = local_a8._8_8_;
        local_60 = local_98;
        local_a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_a8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70;
        while( true ) {
          do {
            do {
              bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_70,
                                 (MethodInfo_153A2A0 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicClassInstance_MoveNext
                                );
              pCVar2 = local_60;
              if (!bVar3) {
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70,
                           MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicClassInstance_Dispose
                          );
                return;
              }
              if (local_60 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar3 = (*(local_60->klass->vtable)._4_get_Enabled.methodPtr)
                                (local_60,(local_60->klass->vtable)._4_get_Enabled.method);
            } while (!bVar3);
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            __this_02 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
          } while ((__this_02 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
                  (bVar3 = CustomLogic_CustomLogicEvaluator__HasMethod
                                     (__this_02,(CustomLogic_CustomLogicClassInstance_o *)pCVar2,
                                      "OnNetworkMessage",(MethodInfo *)0x0), !bVar3));
          pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
          if (pSVar4 == (System_Object_array *)0x0) {
            ThrowNullReferenceException();
          }
          if ((player != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
             (pIVar5 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)player,(((pSVar4->obj).klass)->_1).element_class),
             pIVar5 == (Il2CppObject *)0x0)) {
            pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
          }
          if ((int)pSVar4->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          pSVar4->m_Items[0] = (Il2CppObject *)player;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items,player);
          if ((message != (System_String_o *)0x0) &&
             (pIVar5 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)message,(((pSVar4->obj).klass)->_1).element_class),
             pIVar5 == (Il2CppObject *)0x0)) {
            pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
          }
          if ((uint)pSVar4->max_length < 2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar4->m_Items[1] = (Il2CppObject *)message;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,message);
          local_90 = sentServerTime;
          pIVar5 = il2cpp_value_box(g_data_184354e40,&local_90);
          if ((pIVar5 != (Il2CppObject *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) break;
          if ((uint)pSVar4->max_length < 3) {
            ThrowIndexOutOfRangeException();
          }
          pSVar4->m_Items[2] = pIVar5;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 2,pIVar5);
          CustomLogic_CustomLogicEvaluator__EvaluateMethod
                    (__this_02,(CustomLogic_CustomLogicClassInstance_o *)pCVar2,"OnNetworkMessage",pSVar4,0
                     ,(MethodInfo *)0x0);
        }
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$Transfer
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__Transfer (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, const MethodInfo* method);
// 0x181f77cb0

void CustomLogic_CustomLogicNetworkViewBuiltin__Transfer
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *player,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  
  pCVar1 = (__this->fields).Sync;
  if (pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)pCVar1,(MethodInfo *)0x0);
    if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
      if ((pPVar2->fields)._IsMine_k__BackingField != false) {
        pCVar1 = (__this->fields).Sync;
        if (pCVar1 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) goto label_181f77cfa;
        CustomLogic_CustomLogicPhotonSync__Transfer(pCVar1,player,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_181f77cfa:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendMessage
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessage (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* target, System_String_o* msg, const MethodInfo* method);
// 0x181f77260

void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessage
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *target,System_String_o *msg,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  
  if ((target != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Sync, __this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
    CustomLogic_CustomLogicPhotonSync__SendMessage(__this_00,(target->fields).Player,msg,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendMessageAll
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessageAll (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, System_String_o* msg, const MethodInfo* method);
// 0x181f77220

void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessageAll
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,System_String_o *msg,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  
  __this_00 = (__this->fields).Sync;
  if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    CustomLogic_CustomLogicPhotonSync__SendMessageAll(__this_00,msg,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendMessageOthers
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessageOthers (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, System_String_o* msg, const MethodInfo* method);
// 0x181f77240

void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessageOthers
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,System_String_o *msg,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  
  __this_00 = (__this->fields).Sync;
  if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    CustomLogic_CustomLogicPhotonSync__SendMessageOthers(__this_00,msg,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendStream
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendStream (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x181f77460

void CustomLogic_CustomLogicNetworkViewBuiltin__SendStream
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar4;
  MethodInfo *pMVar5;
  Il2CppClass *pIVar6;
  Il2CppClass **data;
  Il2CppClass *local_28;
  undefined4 local_20;
  Il2CppClass *local_18;
  void *pvStack_10;
  
  if (Il2CppMethodInitialized_184345750 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    Il2CppMethodInitialized_184345750 = '\x01';
  }
  if (Il2CppMethodInitialized_184345752 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_184345752 = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    pIVar6 = obj->klass;
    bVar2 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
    if (((pIVar6->_2).typeHierarchyDepth < bVar2) ||
       ((pIVar6->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
      bVar2 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
      if (((pIVar6->_2).typeHierarchyDepth < bVar2) ||
         ((pIVar6->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) goto label_181f77557;
      bVar2 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
      if (((pIVar6->_2).typeHierarchyDepth < bVar2) ||
         ((pIVar6->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) {
        il2cpp_codegen_raise_invalid_cast_exception(obj);
      }
      local_18 = obj[3].klass;
      pvStack_10 = obj[3].monitor;
      data = &local_18;
      pIVar6 = (Il2CppClass *)TypeInfo_UnityEngine_Quaternion;
    }
    else {
      bVar2 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
      if (((pIVar6->_2).typeHierarchyDepth < bVar2) ||
         ((pIVar6->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
        il2cpp_codegen_raise_invalid_cast_exception(obj);
      }
      local_28 = obj[3].klass;
      data = &local_28;
      local_20 = *(undefined4 *)&obj[3].monitor;
      pIVar6 = (Il2CppClass *)TypeInfo_UnityEngine_Vector3;
    }
    obj = il2cpp_value_box(pIVar6,data);
  }
label_181f77557:
  pMVar5 = MethodInfo_System_Collections_Generic_List_object_Add;
  __this_00 = (__this->fields)._streamObjects;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this_00->fields)._items;
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar3 = (__this_00->fields)._size;
      if ((uint)pSVar4->max_length <= uVar3) {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,obj,(MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
        return;
      }
      (__this_00->fields)._size = uVar3 + 1;
      if (uVar3 < (uint)pSVar4->max_length) {
        pSVar4->m_Items[(int)uVar3] = obj;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar3,obj);
        return;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$ReceiveStream
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin__ReceiveStream (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x181f76ed0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f7704a: mov rdi, rbx

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin__ReceiveStream
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  CustomLogic_CustomLogicQuaternionBuiltin_o *obj;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar3;
  undefined8 *puVar4;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_184345751 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    Il2CppMethodInitialized_184345751 = '\x01';
  }
  pSVar2 = (__this->fields)._streamObjects;
  if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
    obj = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
          System_Collections_Generic_List_object___System_Collections_IList_get_Item
                    (pSVar2,0,(MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_object_get_Item)
    ;
    if (Il2CppMethodInitialized_184345753 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_184345753 = '\x01';
    }
    if (obj != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
      pCVar3 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0;
      if ((Il2CppClass *)obj->klass == (Il2CppClass *)TypeInfo_UnityEngine_Vector3) {
        pCVar3 = obj;
      }
      if (pCVar3 == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
        bVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
        if ((bVar1 <= (((Il2CppClass *)obj->klass)->_2).typeHierarchyDepth) &&
           ((((Il2CppClass *)obj->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) {
          pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)
          ;
          if ((((Il2CppClass *)obj->klass)->_1).element_class !=
              (TypeInfo_UnityEngine_Quaternion->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          puVar4 = il2cpp_object_unbox((Il2CppObject *)obj);
          local_18._0_8_ = *puVar4;
          local_18._8_8_ = puVar4[1];
          CustomLogic_CustomLogicQuaternionBuiltin___ctor_1ed2b60
                    (pCVar3,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
          obj = pCVar3;
        }
      }
      else {
        pCVar3 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        if ((((Il2CppClass *)obj->klass)->_1).element_class !=
            (TypeInfo_UnityEngine_Vector3->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        puVar4 = il2cpp_object_unbox((Il2CppObject *)obj);
        local_18._0_8_ = *puVar4;
        local_18.z = *(float *)(puVar4 + 1);
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                  ((CustomLogic_CustomLogicVector3Builtin_o *)pCVar3,(UnityEngine_Vector3_o *)&local_18,
                   (MethodInfo *)0x0);
        obj = pCVar3;
      }
    }
    pSVar2 = (__this->fields)._streamObjects;
    if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___RemoveAt
                (pSVar2,0,(MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_object_RemoveAt);
      return (Il2CppObject *)obj;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SerializeStreamObj
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin__SerializeStreamObj (Il2CppObject* obj, const MethodInfo* method);
// 0x181f77660

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin__SerializeStreamObj(Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *local_18;
  void *pvStack_10;
  
  if (Il2CppMethodInitialized_184345752 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_184345752 = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    pIVar2 = obj->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
    if ((bVar1 <= (pIVar2->_2).typeHierarchyDepth) &&
       ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar2->_2).typeHierarchyDepth) &&
         ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
        local_18 = obj[3].klass;
        pvStack_10 = (void *)CONCAT44(pvStack_10._4_4_,*(undefined4 *)&obj[3].monitor);
        pIVar3 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_18);
        return pIVar3;
      }
      il2cpp_codegen_raise_invalid_cast_exception(obj);
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
    if ((bVar1 <= (pIVar2->_2).typeHierarchyDepth) &&
       ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar2->_2).typeHierarchyDepth) &&
         ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) {
        local_18 = obj[3].klass;
        pvStack_10 = obj[3].monitor;
        pIVar3 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Quaternion,&local_18);
        return pIVar3;
      }
      il2cpp_codegen_raise_invalid_cast_exception(obj);
    }
  }
  return obj;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$DeserializeStreamObj
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin__DeserializeStreamObj (Il2CppObject* obj, const MethodInfo* method);
// 0x181f76300

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin__DeserializeStreamObj(Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this;
  undefined8 *puVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  Il2CppObject *pIVar3;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_184345753 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_184345753 = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    pIVar3 = (Il2CppObject *)0x0;
    if (obj->klass == (Il2CppClass *)TypeInfo_UnityEngine_Vector3) {
      pIVar3 = obj;
    }
    if (pIVar3 != (Il2CppObject *)0x0) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      if ((obj->klass->_1).element_class == (TypeInfo_UnityEngine_Vector3->_1).element_class) {
        puVar2 = il2cpp_object_unbox(obj);
        local_18._0_8_ = *puVar2;
        local_18.z = *(float *)(puVar2 + 1);
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                  (__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_00;
      }
      il2cpp_codegen_raise_invalid_cast_exception(obj,TypeInfo_UnityEngine_Vector3);
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
    if ((bVar1 <= (obj->klass->_2).typeHierarchyDepth) &&
       ((obj->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      if ((obj->klass->_1).element_class == (TypeInfo_UnityEngine_Quaternion->_1).element_class) {
        puVar2 = il2cpp_object_unbox(obj);
        local_18._0_8_ = *puVar2;
        local_18._8_8_ = puVar2[1];
        CustomLogic_CustomLogicQuaternionBuiltin___ctor_1ed2b60
                  (__this,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
        return (Il2CppObject *)__this;
      }
      il2cpp_codegen_raise_invalid_cast_exception(obj,TypeInfo_UnityEngine_Quaternion);
    }
  }
  return obj;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicNetworkViewBuiltin__get_ClassName (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x181f77e10

System_String_o *
CustomLogic_CustomLogicNetworkViewBuiltin__get_ClassName
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345754 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"NetworkView");
    Il2CppMethodInitialized_184345754 = '\x01';
  }
  return "NetworkView";
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicNetworkViewBuiltin__get_IsAbstract (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicNetworkViewBuiltin__get_IsAbstract(CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicNetworkViewBuiltin__get_IsStatic (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicNetworkViewBuiltin__get_IsStatic(CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicNetworkViewBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicNetworkViewBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


