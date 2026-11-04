// Type: CustomLogic.CustomLogicProgressBarBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicProgressBarBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicProgressBarBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicProgressBarBuiltin_o* CustomLogic_CustomLogicProgressBarBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182074580

CustomLogic_CustomLogicProgressBarBuiltin_o *
CustomLogic_CustomLogicProgressBarBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  local_res8[0] = 0;
  NullCheck(args);
  local_res8[0] = (int32_t)args->max_length;
  pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicProgressBarBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x18207b4a0

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843465ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_1843465ca = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__6_0 (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicProgressBarBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182078030

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__6_0
          (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicProgressBarBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *value;
  
  if (Il2CppMethodInitialized_1843465cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465cb = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) {
      (__c->fields)._valueChangedEvent = value;
      Il2CppCodeGenWriteBarrier(&(__c->fields)._valueChangedEvent,value);
      return (Il2CppObject *)__c;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__7_0 (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicProgressBarBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18207a0e0

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__7_0
          (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicProgressBarBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  float newValue;
  
  if (Il2CppMethodInitialized_1843465cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465cc = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    newValue = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                         );
    if ((__c != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
       (__this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__c->fields)._progressBar,
       __this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
      UnityEngine_UIElements_AbstractProgressBar__SetValueWithoutNotify(__this_00,newValue,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetPercentage>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__GetPercentage_b__8_0 (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicProgressBarBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820772f0

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__GetPercentage_b__8_0
          (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicProgressBarBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  Il2CppObject *pIVar2;
  float fVar3;
  float local_res10 [6];
  
  if ((__c != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (pUVar1 = (__c->fields)._progressBar, pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    if ((pUVar1->fields).m_HighValue == (pUVar1->fields).m_LowValue) {
      local_res10[0] = 0.0;
    }
    else {
      fVar3 = (*(pUVar1->klass->vtable)._146_get_value.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._146_get_value.method);
      pUVar1 = (__c->fields)._progressBar;
      if (pUVar1 == (UnityEngine_UIElements_ProgressBar_o *)0x0) goto label_182077379;
      local_res10[0] =
           ((fVar3 - (pUVar1->fields).m_LowValue) /
           ((pUVar1->fields).m_HighValue - (pUVar1->fields).m_LowValue)) * 100.0;
    }
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res10);
    return pIVar2;
  }
label_182077379:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPercentage>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__SetPercentage_b__9_0 (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicProgressBarBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820799d0

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__SetPercentage_b__9_0
          (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicProgressBarBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_1843465cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465cd = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) {
      if (fVar2 < 0.0) {
        fVar2 = 0.0;
      }
      else if (100.0 < fVar2) {
        fVar2 = 100.0;
      }
      pUVar1 = (__c->fields)._progressBar;
      if (pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
        (*(pUVar1->klass->vtable)._147_set_value.methodPtr)
                  (pUVar1,(((pUVar1->fields).m_HighValue - (pUVar1->fields).m_LowValue) * fVar2) / 100.0 +
                          (pUVar1->fields).m_LowValue,(pUVar1->klass->vtable)._147_set_value.method);
        return (Il2CppObject *)__c;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x182052190

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  System_Func_CustomLogicProgressBarBuiltin__object__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *__this_01;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_1843465bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"OnValueChanged");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"HighValue");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"GetPercentage");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPercentage");
    il2cpp_codegen_initialize_runtime_metadata(&"LowValue");
    Il2CppMethodInitialized_1843465bc = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x8991c1ec) {
    if (uVar3 < 0x24d471aa) {
      if (uVar3 == 0xf54ee6e) {
        bVar2 = System_String__op_Equality(name,"LowValue",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843465bf == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__LowValue_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__LowValue_g____setter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object);
            Il2CppMethodInitialized_1843465bf = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__LowValue_g____getter
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__LowValue_g____setter
          ;
label_182052ac9:
          System_Action_object__object____ctor
                    (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo *)0x0);
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
                     (System_Action_T__object__o *)__this_00,
                     (MethodInfo_12B8EE0 *)
                     MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)__this_01;
        }
      }
      else if (uVar3 == 0x24d471a9) {
        bVar2 = System_String__op_Equality(name,"Title",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843465bd == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Title_g____getter_2
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Title_g____setter_2
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object);
            Il2CppMethodInitialized_1843465bd = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Title_g____getter_2
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Title_g____setter_2
          ;
          goto label_182052ac9;
        }
      }
    }
    else if (uVar3 == 0x4c979c42) {
      bVar2 = System_String__op_Equality(name,"HighValue",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843465c0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__HighValue_g____gette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__HighValue_g____sette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object);
          Il2CppMethodInitialized_1843465c0 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__HighValue_g____gette
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__HighValue_g____sette
        ;
        goto label_182052ac9;
      }
    }
    else if (uVar3 == 0x8991c1eb) {
      bVar2 = System_String__op_Equality(name,"SetPercentage",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843465c4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__SetPercentage_b__9_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843465c4 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__9_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__SetPercentage_b__9_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__9_0 =
               (System_Func_CustomLogicProgressBarBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__9_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin)
        ;
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
  }
  else if (uVar3 < 0xd1dd43b6) {
    if (uVar3 == 0xd147f96a) {
      bVar2 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843465be == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object);
          Il2CppMethodInitialized_1843465be = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3
        ;
        goto label_182052ac9;
      }
    }
    else if (uVar3 == 0xd1dd43b5) {
      bVar2 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843465c2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotif
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843465c2 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__7_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotif
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__7_0 =
               (System_Func_CustomLogicProgressBarBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__7_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin)
        ;
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
  }
  else if (uVar3 == 0xda3ade4f) {
    bVar2 = System_String__op_Equality(name,"GetPercentage",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843465c3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__GetPercentage_b__8_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843465c3 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
      }
      pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__8_0;
      if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
        if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9;
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (pEVar4,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__GetPercentage_b__8_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__8_0 =
             (System_Func_CustomLogicProgressBarBuiltin__object____object__o *)pEVar4;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__8_0,
                   pEVar4);
      }
      pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                (pSVar5,(System_String_o *)pEVar4,
                 MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
      return (CustomLogic_ICLMemberBinding_o *)pSVar5;
    }
  }
  else if (uVar3 == 0xf722a79f) {
    bVar2 = System_String__op_Equality(name,"OnValueChanged",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843465c1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__6
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843465c1 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
      }
      pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__6_0;
      if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
        if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9;
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (pEVar4,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__6
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__6_0 =
             (System_Func_CustomLogicProgressBarBuiltin__object____object__o *)pEVar4;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__6_0,
                   pEVar4);
      }
      pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                (pSVar5,(System_String_o *)pEVar4,
                 MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
      return (CustomLogic_ICLMemberBinding_o *)pSVar5;
    }
  }
  pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicProgressBarBuiltin not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_02,pSVar6,(MethodInfo *)0x0);
  pMVar7 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar7);
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__Title
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Title (const MethodInfo* method);
// 0x1820639f0

CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Title(MethodInfo *method)

{
  System_Func_CustomLogicProgressBarBuiltin__object__o *__this;
  System_Action_CustomLogicProgressBarBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Title_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Title_g____setter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object);
    Il2CppMethodInitialized_1843465bd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Title_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Title_g____setter_2
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x182063f40

CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_CustomLogicProgressBarBuiltin__object__o *__this;
  System_Action_CustomLogicProgressBarBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object);
    Il2CppMethodInitialized_1843465be = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__LowValue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__LowValue (const MethodInfo* method);
// 0x182062d20

CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__LowValue(MethodInfo *method)

{
  System_Func_CustomLogicProgressBarBuiltin__object__o *__this;
  System_Action_CustomLogicProgressBarBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__LowValue_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__LowValue_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object);
    Il2CppMethodInitialized_1843465bf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__LowValue_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__LowValue_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__HighValue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__HighValue (const MethodInfo* method);
// 0x182062050

CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__HighValue(MethodInfo *method)

{
  System_Func_CustomLogicProgressBarBuiltin__object__o *__this;
  System_Action_CustomLogicProgressBarBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__HighValue_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__HighValue_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object);
    Il2CppMethodInitialized_1843465c0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__HighValue_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__HighValue_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__OnValueChanged (const MethodInfo* method);
// 0x18205b9a0

CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__OnValueChanged(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843465c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__6
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_1843465c1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__6
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicProgressBarBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__6_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x18205f0f0

CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843465c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotif
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_1843465c2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotif
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicProgressBarBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__7_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__GetPercentage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__GetPercentage (const MethodInfo* method);
// 0x182059d80

CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__GetPercentage(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843465c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__GetPercentage_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_1843465c3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__GetPercentage_b__8_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicProgressBarBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__8_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__SetPercentage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetPercentage (const MethodInfo* method);
// 0x18205e8f0

CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetPercentage(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843465c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__SetPercentage_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_1843465c4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__SetPercentage_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicProgressBarBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9__9_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x182065d40

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843465c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"OnValueChanged");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"HighValue");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"GetPercentage");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPercentage");
    il2cpp_codegen_initialize_runtime_metadata(&"LowValue");
    Il2CppMethodInitialized_1843465c5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Title",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Value",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LowValue",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HighValue",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OnValueChanged",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetValueWithoutNotify",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetPercentage",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPercentage",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->static_fields->MemberNames,__this
              );
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Title>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Title_g____getter_2_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, const MethodInfo* method);
// 0x1820564c0

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Title_g____getter_2_0
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  System_String_o *pSVar1;
  
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     __this != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    pSVar1 = UnityEngine_UIElements_AbstractProgressBar__get_title(__this,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Title>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Title_g____setter_2_1 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x1820564f0

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Title_g____setter_2_1
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_1843465c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465c6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     __this != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_title(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, const MethodInfo* method);
// 0x1820565e0

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._progressBar, pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    local_res8[0] =
         (*(pUVar1->klass->vtable)._146_get_value.methodPtr)
                   (pUVar1,(pUVar1->klass->vtable)._146_get_value.method);
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182056710

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_1843465c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465c7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._progressBar, pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    (*(pUVar1->klass->vtable)._147_set_value.methodPtr)
              (pUVar1,fVar2,(pUVar1->klass->vtable)._147_set_value.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____getter_4_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, const MethodInfo* method);
// 0x182055710

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____getter_4_0
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._progressBar, pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    local_res8[0] = (pUVar1->fields).m_LowValue;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____setter_4_1 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182055750

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____setter_4_1
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_1843465c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465c8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     __this != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____getter_5_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, const MethodInfo* method);
// 0x1820549f0

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____getter_5_0
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._progressBar, pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    local_res8[0] = (pUVar1->fields).m_HighValue;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____setter_5_1 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182054b70

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____setter_5_1
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_1843465c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465c9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     __this != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin___ctor (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, UnityEngine_UIElements_ProgressBar_o* progressBar, const MethodInfo* method);
// 0x182067d90

void CustomLogic_CustomLogicProgressBarBuiltin___ctor
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,
               UnityEngine_UIElements_ProgressBar_o *progressBar,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *control;
  DG_Tweening_Core_DOSetter_T__o *__this_00;
  
  if (Il2CppMethodInitialized_1843465b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_ctor_b__2_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_float
              );
    Il2CppMethodInitialized_1843465b8 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)progressBar,(MethodInfo *)0x0);
  (__this->fields)._progressBar = progressBar;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._progressBar,progressBar);
  control = (__this->fields)._progressBar;
  __this_00 = (DG_Tweening_Core_DOSetter_T__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_ctor_b__2_0,
             (MethodInfo_EB6EC0 *)0x0);
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_Vector3Int_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,
             (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_00,
             (MethodInfo_7118E0 *)
             MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_float
            );
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x182067a60

void CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_1843465b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_1843465b9 = '\x01';
  }
  if ((__this->fields)._valueChangedEvent == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  userMethod = (__this->fields)._valueChangedEvent;
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  local_res8[0] = value;
  pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
  if (parameterValues != (System_Object_array *)0x0) {
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameterValues->obj).klass)->_1).element_class),
       pIVar2 == (Il2CppObject *)0x0)) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
    if ((int)parameterValues->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameterValues->m_Items[0] = pIVar1;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items,pIVar1);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_Title
// il2cpp: System_String_o* CustomLogic_CustomLogicProgressBarBuiltin__get_Title (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x182067eb0

System_String_o *
CustomLogic_CustomLogicProgressBarBuiltin__get_Title
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  System_String_o *pSVar1;
  
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    pSVar1 = UnityEngine_UIElements_AbstractProgressBar__get_title(__this_00,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$set_Title
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__set_Title (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182067f40

void CustomLogic_CustomLogicProgressBarBuiltin__set_Title
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_title(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_Value
// il2cpp: float CustomLogic_CustomLogicProgressBarBuiltin__get_Value (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x182067ed0

float CustomLogic_CustomLogicProgressBarBuiltin__get_Value
                (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  float fVar2;
  
  pUVar1 = (__this->fields)._progressBar;
  if (pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    fVar2 = (*(pUVar1->klass->vtable)._146_get_value.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._146_get_value.method);
    return fVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__set_Value (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x182067f60

void CustomLogic_CustomLogicProgressBarBuiltin__set_Value
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  
  pUVar1 = (__this->fields)._progressBar;
  if (pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    (*(pUVar1->klass->vtable)._147_set_value.methodPtr)
              (pUVar1,value,(pUVar1->klass->vtable)._147_set_value.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_LowValue
// il2cpp: float CustomLogic_CustomLogicProgressBarBuiltin__get_LowValue (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x182067e90

float CustomLogic_CustomLogicProgressBarBuiltin__get_LowValue
                (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  
  pUVar1 = (__this->fields)._progressBar;
  if (pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    return (pUVar1->fields).m_LowValue;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$set_LowValue
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__set_LowValue (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x182067f20

void CustomLogic_CustomLogicProgressBarBuiltin__set_LowValue
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_HighValue
// il2cpp: float CustomLogic_CustomLogicProgressBarBuiltin__get_HighValue (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x182067e70

float CustomLogic_CustomLogicProgressBarBuiltin__get_HighValue
                (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  
  pUVar1 = (__this->fields)._progressBar;
  if (pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    return (pUVar1->fields).m_HighValue;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$set_HighValue
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__set_HighValue (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x182067f00

void CustomLogic_CustomLogicProgressBarBuiltin__set_HighValue
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$OnValueChanged
// il2cpp: CustomLogic_CustomLogicProgressBarBuiltin_o* CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x18055deb0

CustomLogic_CustomLogicProgressBarBuiltin_o*
CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged(CustomLogic_CustomLogicProgressBarBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, MethodInfo* method)

{
  (__this->fields)._valueChangedEvent = action;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._valueChangedEvent,action);
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x182067c10

void CustomLogic_CustomLogicProgressBarBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__SetValueWithoutNotify(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$GetPercentage
// il2cpp: float CustomLogic_CustomLogicProgressBarBuiltin__GetPercentage (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x1820679e0

float CustomLogic_CustomLogicProgressBarBuiltin__GetPercentage
                (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  float fVar2;
  
  pUVar1 = (__this->fields)._progressBar;
  if (pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    if ((pUVar1->fields).m_HighValue == (pUVar1->fields).m_LowValue) {
      return 0.0;
    }
    fVar2 = (*(pUVar1->klass->vtable)._146_get_value.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._146_get_value.method);
    pUVar1 = (__this->fields)._progressBar;
    if (pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
      return ((fVar2 - (pUVar1->fields).m_LowValue) /
             ((pUVar1->fields).m_HighValue - (pUVar1->fields).m_LowValue)) * 100.0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$SetPercentage
// il2cpp: CustomLogic_CustomLogicProgressBarBuiltin_o* CustomLogic_CustomLogicProgressBarBuiltin__SetPercentage (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float percentage, const MethodInfo* method);
// 0x182067b90

CustomLogic_CustomLogicProgressBarBuiltin_o *
CustomLogic_CustomLogicProgressBarBuiltin__SetPercentage
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float percentage,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  
  if (percentage < 0.0) {
    percentage = 0.0;
  }
  else if (100.0 < percentage) {
    percentage = 100.0;
  }
  pUVar1 = (__this->fields)._progressBar;
  if (pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    (*(pUVar1->klass->vtable)._147_set_value.methodPtr)
              (pUVar1,(((pUVar1->fields).m_HighValue - (pUVar1->fields).m_LowValue) * percentage) / 100.0 +
                      (pUVar1->fields).m_LowValue,(pUVar1->klass->vtable)._147_set_value.method);
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicProgressBarBuiltin__get_ClassName (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x182067e40

System_String_o *
CustomLogic_CustomLogicProgressBarBuiltin__get_ClassName
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843465ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ProgressBar");
    Il2CppMethodInitialized_1843465ba = '\x01';
  }
  return "ProgressBar";
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicProgressBarBuiltin__get_IsAbstract (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicProgressBarBuiltin__get_IsAbstract(CustomLogic_CustomLogicProgressBarBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicProgressBarBuiltin__get_IsStatic (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicProgressBarBuiltin__get_IsStatic(CustomLogic_CustomLogicProgressBarBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicProgressBarBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicProgressBarBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicProgressBarBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$<.ctor>b__2_0
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin____ctor_b__2_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_float__o* evt, const MethodInfo* method);
// 0x182067c30

void CustomLogic_CustomLogicProgressBarBuiltin____ctor_b__2_0
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,
               UnityEngine_UIElements_ChangeEvent_float__o *evt,MethodInfo *method)

{
  undefined4 uVar1;
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined4 local_res10 [2];
  
  if (Il2CppMethodInitialized_1843465bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_ChangeEvent_float_get_newValue);
    Il2CppMethodInitialized_1843465bb = '\x01';
  }
  if (evt == (UnityEngine_UIElements_ChangeEvent_float__o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = *(undefined4 *)&(evt->fields).field_0x5c;
  if (Il2CppMethodInitialized_1843465b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_1843465b9 = '\x01';
  }
  if ((__this->fields)._valueChangedEvent != (CustomLogic_UserMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    userMethod = (__this->fields)._valueChangedEvent;
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_res10[0] = uVar1;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res10);
    if (parameterValues != (System_Object_array *)0x0) {
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameterValues->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
      if ((int)parameterValues->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[0] = pIVar2;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items,pIVar2);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                  (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


