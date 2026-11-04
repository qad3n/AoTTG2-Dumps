// Type: CustomLogic.CustomLogicTextFieldBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTextFieldBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTextFieldBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTextFieldBuiltin_o* CustomLogic_CustomLogicTextFieldBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182074a70

CustomLogic_CustomLogicTextFieldBuiltin_o *
CustomLogic_CustomLogicTextFieldBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTextFieldBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x18207b270

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184346624 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346624 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterValueChangedEventCallback>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_____CreateMethodBinding__RegisterValueChangedEventCallback_b__8_0 (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTextFieldBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182078680

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_____CreateMethodBinding__RegisterValueChangedEventCallback_b__8_0
          (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTextFieldBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_TextField_o *control;
  CustomLogic_UserMethod_o *value;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *object;
  DG_Tweening_Core_DOSetter_T__o *__this_00;
  
  if (Il2CppMethodInitialized_184346625 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346625 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_184346612 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_string);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_string
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_c__DisplayClass20_0_RegisterValueChangedEventCallback_b
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_c__DisplayClass20_0);
        Il2CppMethodInitialized_184346612 = '\x01';
      }
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_c__DisplayClass20_0)
      ;
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
        (object->fields).changeEvent = value;
        Il2CppCodeGenWriteBarrier(&(object->fields).changeEvent,value);
        control = (__c->fields)._textField;
        __this_00 = (DG_Tweening_Core_DOSetter_T__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_string
                              );
        UnityEngine_UIElements_EventCallback_object____ctor
                  (__this_00,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_c__DisplayClass20_0_RegisterValueChangedEventCallback_b
                   ,(MethodInfo_EB6EC0 *)0x0);
        UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_Vector3Int_
                  ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,
                   (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_00,
                   (MethodInfo_7118E0 *)
                   MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_string
                  );
        return (Il2CppObject *)__c;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__9_0 (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTextFieldBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18207a180

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__9_0
          (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTextFieldBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_TextField_o *pUVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346626 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346626 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((__c != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) &&
       (pUVar1 = (__c->fields)._textField, pUVar1 != (UnityEngine_UIElements_TextField_o *)0x0)) {
      (*(pUVar1->klass->vtable)._159_SetValueWithoutNotify.methodPtr)
                (pUVar1,pSVar2,(pUVar1->klass->vtable)._159_SetValueWithoutNotify.method);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x182052b80

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Func_CustomLogicTextFieldBuiltin__object__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this_01;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_184346614 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterValueChangedEventCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"SelectionColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Multiline");
    il2cpp_codegen_initialize_runtime_metadata(&"CursorColor");
    il2cpp_codegen_initialize_runtime_metadata(&"IsDelayed");
    Il2CppMethodInitialized_184346614 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0xd147f96b) {
    if (uVar3 < 0x6d3fc92a) {
      if (uVar3 == 0x14e6c5e8) {
        bVar2 = System_String__op_Equality(name,"SelectionColor",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346619 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__SelectionColor_g____ge
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__SelectionColor_g____se
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
            Il2CppMethodInitialized_184346619 = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__SelectionColor_g____ge
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__SelectionColor_g____se
          ;
          goto label_1820533ab;
        }
      }
      else if (uVar3 == 0x6d3fc929) {
        bVar2 = System_String__op_Equality(name,"IsDelayed",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346615 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__IsDelayed_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__IsDelayed_g____setter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
            Il2CppMethodInitialized_184346615 = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__IsDelayed_g____getter
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__IsDelayed_g____setter
          ;
          goto label_1820533ab;
        }
      }
    }
    else if (uVar3 == 0x9eccf29d) {
      bVar2 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346617 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_4_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object)
          ;
          Il2CppMethodInitialized_184346617 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_4_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_4_1
        ;
label_1820533ab:
        System_Action_object__object____ctor
                  (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
                   (System_Action_T__object__o *)__this_00,
                   (MethodInfo_12B8EE0 *)
                   MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)__this_01;
      }
    }
    else if (uVar3 == 0xd147f96a) {
      bVar2 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346618 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_5_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_5_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object)
          ;
          Il2CppMethodInitialized_184346618 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_5_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_5_1
        ;
        goto label_1820533ab;
      }
    }
  }
  else if (uVar3 < 0xd989409f) {
    if (uVar3 == 0xd1dd43b5) {
      bVar2 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434661c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434661c = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9__9_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9__9_0 =
               (System_Func_CustomLogicTextFieldBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9__9_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
    else if (uVar3 == 0xd989409e) {
      bVar2 = System_String__op_Equality(name,"CursorColor",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434661a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__CursorColor_g____gette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__CursorColor_g____sette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object)
          ;
          Il2CppMethodInitialized_18434661a = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__CursorColor_g____gette
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__CursorColor_g____sette
        ;
        goto label_1820533ab;
      }
    }
  }
  else if (uVar3 == 0xe890d540) {
    bVar2 = System_String__op_Equality(name,"Multiline",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346616 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object)
        ;
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Multiline_g____getter
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Multiline_g____setter
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
        Il2CppMethodInitialized_184346616 = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Multiline_g____getter
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Multiline_g____setter
      ;
      goto label_1820533ab;
    }
  }
  else if (uVar3 == 0xf35844be) {
    bVar2 = System_String__op_Equality(name,"RegisterValueChangedEventCallback",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434661b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c___CreateMethodBinding__RegisterValueChangedEv
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434661b = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
      }
      pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9__8_0;
      if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
        if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9;
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (pEVar4,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c___CreateMethodBinding__RegisterValueChangedEv
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9__8_0 =
             (System_Func_CustomLogicTextFieldBuiltin__object____object__o *)pEVar4;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9__8_0,
                   pEVar4);
      }
      pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                (pSVar5,(System_String_o *)pEVar4,
                 MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin_ctor);
      return (CustomLogic_ICLMemberBinding_o *)pSVar5;
    }
  }
  pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTextFieldBuiltin not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_02,pSVar6,(MethodInfo *)0x0);
  pMVar7 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar7);
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__IsDelayed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__IsDelayed (const MethodInfo* method);
// 0x1820625f0

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__IsDelayed(MethodInfo *method)

{
  System_Func_CustomLogicTextFieldBuiltin__object__o *__this;
  System_Action_CustomLogicTextFieldBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184346615 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__IsDelayed_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__IsDelayed_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
    Il2CppMethodInitialized_184346615 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__IsDelayed_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__IsDelayed_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__Multiline
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Multiline (const MethodInfo* method);
// 0x182062f00

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Multiline(MethodInfo *method)

{
  System_Func_CustomLogicTextFieldBuiltin__object__o *__this;
  System_Action_CustomLogicTextFieldBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184346616 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Multiline_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Multiline_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
    Il2CppMethodInitialized_184346616 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Multiline_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Multiline_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__Label
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Label (const MethodInfo* method);
// 0x182062960

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Label(MethodInfo *method)

{
  System_Func_CustomLogicTextFieldBuiltin__object__o *__this;
  System_Action_CustomLogicTextFieldBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184346617 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_4_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
    Il2CppMethodInitialized_184346617 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_4_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x182063e50

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_CustomLogicTextFieldBuiltin__object__o *__this;
  System_Action_CustomLogicTextFieldBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184346618 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_5_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
    Il2CppMethodInitialized_184346618 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_5_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__SelectionColor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__SelectionColor (const MethodInfo* method);
// 0x1820633b0

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__SelectionColor(MethodInfo *method)

{
  System_Func_CustomLogicTextFieldBuiltin__object__o *__this;
  System_Action_CustomLogicTextFieldBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184346619 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__SelectionColor_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__SelectionColor_g____se
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
    Il2CppMethodInitialized_184346619 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__SelectionColor_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__SelectionColor_g____se
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__CursorColor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__CursorColor (const MethodInfo* method);
// 0x182061920

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__CursorColor(MethodInfo *method)

{
  System_Func_CustomLogicTextFieldBuiltin__object__o *__this;
  System_Action_CustomLogicTextFieldBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434661a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__CursorColor_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__CursorColor_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
    Il2CppMethodInitialized_18434661a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__CursorColor_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__CursorColor_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreateMethodBinding__RegisterValueChangedEventCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__RegisterValueChangedEventCallback (const MethodInfo* method);
// 0x18205cd40

CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__RegisterValueChangedEventCallback
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434661b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c___CreateMethodBinding__RegisterValueChangedEv
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434661b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c___CreateMethodBinding__RegisterValueChangedEv
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicTextFieldBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x18205f210

CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434661c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434661c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicTextFieldBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x182065f00

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434661d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterValueChangedEventCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"SelectionColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Multiline");
    il2cpp_codegen_initialize_runtime_metadata(&"CursorColor");
    il2cpp_codegen_initialize_runtime_metadata(&"IsDelayed");
    Il2CppMethodInitialized_18434661d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsDelayed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Multiline",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Label",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Value",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SelectionColor",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CursorColor",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RegisterValueChangedEventCallback",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetValueWithoutNotify",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__IsDelayed>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__IsDelayed_g____getter_2_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x182054f80

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__IsDelayed_g____getter_2_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434660a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_isDelayed);
      Il2CppMethodInitialized_18434660a = '\x01';
    }
    __this = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      local_res8[0] =
           UnityEngine_UIElements_TextInputBaseField_object___get_isDelayed
                     (__this,(MethodInfo_E19750 *)
                             MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_isDelayed);
      pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__IsDelayed>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__IsDelayed_g____setter_2_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182054fe0

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__IsDelayed_g____setter_2_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_18434661e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434661e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434660b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_set_isDelayed);
      Il2CppMethodInitialized_18434660b = '\x01';
    }
    __this = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_TextInputBaseField_object___set_isDelayed
                (__this,value,
                 (MethodInfo_E1EC90 *)
                 MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_set_isDelayed);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Multiline>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Multiline_g____getter_3_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x182055930

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Multiline_g____getter_3_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) &&
     (__this = (__i->fields)._textField, __this != (UnityEngine_UIElements_TextField_o *)0x0)) {
    local_res8[0] = UnityEngine_UIElements_TextField__get_multiline(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Multiline>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Multiline_g____setter_3_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182055970

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Multiline_g____setter_3_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_18434661f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434661f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) &&
     (__this = (__i->fields)._textField, __this != (UnityEngine_UIElements_TextField_o *)0x0)) {
    UnityEngine_UIElements_TextField__set_multiline(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_4_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x1820551e0

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_4_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434660c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_BaseField_string_get_label);
      Il2CppMethodInitialized_18434660c = '\x01';
    }
    __this = (__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextField_o *)0x0) {
      pSVar1 = UnityEngine_UIElements_BaseField_Vector2Int___get_label
                         ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,
                          (MethodInfo_100AEC0 *)MethodInfo_UnityEngine_UIElements_BaseField_string_get_label);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_4_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182055470

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_4_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184346620 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346620 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434660d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_BaseField_string_set_label);
      Il2CppMethodInitialized_18434660d = '\x01';
    }
    __this = (__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextField_o *)0x0) {
      UnityEngine_UIElements_BaseField_Vector2Int___set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,value,
                 (MethodInfo_100C7D0 *)MethodInfo_UnityEngine_UIElements_BaseField_string_set_label);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_5_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x1820565b0

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_5_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *pUVar1;
  System_String_o *pSVar2;
  
  if ((__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._textField, pUVar1 != (UnityEngine_UIElements_TextField_o *)0x0)) {
    pSVar2 = (*(pUVar1->klass->vtable)._148_get_value.methodPtr)
                       (pUVar1,(pUVar1->klass->vtable)._148_get_value.method);
    return (Il2CppObject *)pSVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_5_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182056940

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_5_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *pUVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346621 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346621 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._textField, pUVar1 != (UnityEngine_UIElements_TextField_o *)0x0)) {
    (*(pUVar1->klass->vtable)._149_set_value.methodPtr)
              (pUVar1,pSVar2,(pUVar1->klass->vtable)._149_set_value.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__SelectionColor>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__SelectionColor_g____getter_6_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x182055ec0

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__SelectionColor_g____getter_6_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  UnityEngine_Color_o local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434660e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_selectionColor);
      Il2CppMethodInitialized_18434660e = '\x01';
    }
    __this = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor
                (local_28,__this,
                 (MethodInfo_E1B540 *)
                 MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_selectionColor);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_1ecf3a0(__this_00,local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__SelectionColor>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__SelectionColor_g____setter_6_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182055f60

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__SelectionColor_g____setter_6_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this;
  Utility_Color255_o *__this_00;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar6;
  Il2CppObject *obj;
  UnityEngine_Color_o *pUVar7;
  VirtualInvokeData *pVVar8;
  ushort uVar9;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346622 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346622 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434660f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_ITextSelection);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_textSelection);
      Il2CppMethodInitialized_18434660f = '\x01';
    }
    __this = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      obj = (Il2CppObject *)
            UnityEngine_UIElements_TextInputBaseField_ulong___get_textEdition
                      (__this,(MethodInfo_DC2A90 *)
                              MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_textSelection);
      if ((pCVar6 != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
         (__this_00 = (pCVar6->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
        pUVar7 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_28,__this_00,(MethodInfo *)0x0);
        if (obj != (Il2CppObject *)0x0) {
          pIVar2 = obj->klass;
          uVar4._0_4_ = (pUVar7->fields).r;
          uVar4._4_4_ = (pUVar7->fields).g;
          uVar5._0_4_ = (pUVar7->fields).b;
          uVar5._4_4_ = (pUVar7->fields).a;
          uVar1 = (pIVar2->_2).interface_offsets_count;
          if (uVar1 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            uVar9 = 0;
            do {
              if (pIVar3[uVar9].interfaceType == (Il2CppClass *)TypeInfo_UnityEngine_UIElements_ITextSelection
                 ) {
                pVVar8 = pIVar2->vtable + (pIVar3[uVar9].offset + 5);
                goto label_182056087;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar1);
          }
          pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                             (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_ITextSelection,5);
label_182056087:
          local_28[0]._0_8_ = uVar4;
          local_28[0]._8_8_ = uVar5;
          (*pVVar8->methodPtr)(obj,(UnityEngine_Color_o *)local_28,pVVar8->method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__CursorColor>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__CursorColor_g____getter_7_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x182054170

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__CursorColor_g____getter_7_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  UnityEngine_Color_o local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184346610 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_cursorColor);
      Il2CppMethodInitialized_184346610 = '\x01';
    }
    __this = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor
                (local_28,__this,
                 (MethodInfo_E184E0 *)
                 MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_cursorColor);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_1ecf3a0(__this_00,local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__CursorColor>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__CursorColor_g____setter_7_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182054210

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__CursorColor_g____setter_7_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this;
  Utility_Color255_o *__this_00;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar6;
  Il2CppObject *obj;
  UnityEngine_Color_o *pUVar7;
  VirtualInvokeData *pVVar8;
  ushort uVar9;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346623 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184346611 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_ITextSelection);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_textSelection);
      Il2CppMethodInitialized_184346611 = '\x01';
    }
    __this = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      obj = (Il2CppObject *)
            UnityEngine_UIElements_TextInputBaseField_ulong___get_textEdition
                      (__this,(MethodInfo_DC2A90 *)
                              MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_textSelection);
      if ((pCVar6 != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
         (__this_00 = (pCVar6->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
        pUVar7 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_28,__this_00,(MethodInfo *)0x0);
        if (obj != (Il2CppObject *)0x0) {
          pIVar2 = obj->klass;
          uVar4._0_4_ = (pUVar7->fields).r;
          uVar4._4_4_ = (pUVar7->fields).g;
          uVar5._0_4_ = (pUVar7->fields).b;
          uVar5._4_4_ = (pUVar7->fields).a;
          uVar1 = (pIVar2->_2).interface_offsets_count;
          if (uVar1 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            uVar9 = 0;
            do {
              if (pIVar3[uVar9].interfaceType == (Il2CppClass *)TypeInfo_UnityEngine_UIElements_ITextSelection
                 ) {
                pVVar8 = pIVar2->vtable + (pIVar3[uVar9].offset + 3);
                goto label_182054337;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar1);
          }
          pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                             (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_ITextSelection,3);
label_182054337:
          local_28[0]._0_8_ = uVar4;
          local_28[0]._8_8_ = uVar5;
          (*pVVar8->methodPtr)(obj,(UnityEngine_Color_o *)local_28,pVVar8->method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.<>c__DisplayClass20_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.<>c__DisplayClass20_0$$<RegisterValueChangedEventCallback>b__0
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___RegisterValueChangedEventCallback_b__0 (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o* __this, UnityEngine_UIElements_ChangeEvent_string__o* evt, const MethodInfo* method);
// 0x18207b090

void CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___RegisterValueChangedEventCallback_b__0
               (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this,
               UnityEngine_UIElements_ChangeEvent_string__o *evt,MethodInfo *method)

{
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_String_o *pSVar1;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_184346627 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_ChangeEvent_string_get_newValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_ChangeEvent_string_get_previousValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_184346627 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  userMethod = (__this->fields).changeEvent;
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if ((evt == (UnityEngine_UIElements_ChangeEvent_string__o *)0x0) ||
     (parameterValues == (System_Object_array *)0x0)) {
label_18207b1c7:
    ThrowNullReferenceException();
  }
  pSVar1 = (evt->fields)._newValue_k__BackingField;
  if (pSVar1 != (System_String_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst
                       ((Il2CppObject *)pSVar1,(((parameterValues->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = (Il2CppObject *)pSVar1;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items,pSVar1);
    pSVar1 = (evt->fields)._previousValue_k__BackingField;
    if (pSVar1 != (System_String_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)pSVar1,(((parameterValues->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)parameterValues->max_length) {
      parameterValues->m_Items[1] = (Il2CppObject *)pSVar1;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1,pSVar1);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                  (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        return;
      }
      goto label_18207b1c7;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin___ctor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, UnityEngine_UIElements_TextField_o* textField, const MethodInfo* method);
// 0x182067970

void CustomLogic_CustomLogicTextFieldBuiltin___ctor
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,
               UnityEngine_UIElements_TextField_o *textField,MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)textField,(MethodInfo *)0x0);
  (__this->fields)._textField = textField;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._textField,textField);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_IsDelayed
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_IsDelayed (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x182069a60

bool CustomLogic_CustomLogicTextFieldBuiltin__get_IsDelayed
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434660a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_isDelayed);
    Il2CppMethodInitialized_18434660a = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    bVar1 = UnityEngine_UIElements_TextInputBaseField_object___get_isDelayed
                      (__this_00,
                       (MethodInfo_E19750 *)
                       MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_isDelayed);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_IsDelayed
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_IsDelayed (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x182069cd0

void CustomLogic_CustomLogicTextFieldBuiltin__set_IsDelayed
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  
  if (Il2CppMethodInitialized_18434660b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_set_isDelayed);
    Il2CppMethodInitialized_18434660b = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UnityEngine_UIElements_TextInputBaseField_object___set_isDelayed
              (__this_00,value,
               (MethodInfo_E1EC90 *)MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_set_isDelayed)
    ;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_Multiline
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_Multiline (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x182069b00

bool CustomLogic_CustomLogicTextFieldBuiltin__get_Multiline
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields)._textField;
  if (__this_00 != (UnityEngine_UIElements_TextField_o *)0x0) {
    bVar1 = UnityEngine_UIElements_TextField__get_multiline(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_Multiline
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_Multiline (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x182069d90

void CustomLogic_CustomLogicTextFieldBuiltin__set_Multiline
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this_00;
  
  __this_00 = (__this->fields)._textField;
  if (__this_00 != (UnityEngine_UIElements_TextField_o *)0x0) {
    UnityEngine_UIElements_TextField__set_multiline(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_Label
// il2cpp: System_String_o* CustomLogic_CustomLogicTextFieldBuiltin__get_Label (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x182069ab0

System_String_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_Label
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this_00;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434660c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_string_get_label);
    Il2CppMethodInitialized_18434660c = '\x01';
  }
  __this_00 = (__this->fields)._textField;
  if (__this_00 != (UnityEngine_UIElements_TextField_o *)0x0) {
    pSVar1 = UnityEngine_UIElements_BaseField_Vector2Int___get_label
                       ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,
                        (MethodInfo_100AEC0 *)MethodInfo_UnityEngine_UIElements_BaseField_string_get_label);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_Label
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_Label (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182069d30

void CustomLogic_CustomLogicTextFieldBuiltin__set_Label
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this_00;
  
  if (Il2CppMethodInitialized_18434660d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_string_set_label);
    Il2CppMethodInitialized_18434660d = '\x01';
  }
  __this_00 = (__this->fields)._textField;
  if (__this_00 != (UnityEngine_UIElements_TextField_o *)0x0) {
    UnityEngine_UIElements_BaseField_Vector2Int___set_label
              ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,value,
               (MethodInfo_100C7D0 *)MethodInfo_UnityEngine_UIElements_BaseField_string_set_label);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_Value
// il2cpp: System_String_o* CustomLogic_CustomLogicTextFieldBuiltin__get_Value (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x182066f00

System_String_o*
CustomLogic_CustomLogicTextFieldBuiltin__get_Value(CustomLogic_CustomLogicTextFieldBuiltin_o* __this, MethodInfo* method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (__this->fields)._textField;
  if (pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    uVar2 = (*(pUVar1->klass->vtable)._148_get_value.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._148_get_value.method);
    return (bool)uVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_Value (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1820671c0

void
CustomLogic_CustomLogicTextFieldBuiltin__set_Value(CustomLogic_CustomLogicTextFieldBuiltin_o* __this, System_String_o* value, MethodInfo* method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  
  pUVar1 = (__this->fields)._textField;
  if (pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    (*(pUVar1->klass->vtable)._149_set_value.methodPtr)
              (pUVar1,value,(pUVar1->klass->vtable)._149_set_value.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_SelectionColor
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x182069b20

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *__this_01;
  UnityEngine_Color_o local_28 [2];
  
  if (Il2CppMethodInitialized_18434660e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_selectionColor);
    Il2CppMethodInitialized_18434660e = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor
              (local_28,__this_00,
               (MethodInfo_E1B540 *)
               MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_selectionColor);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_1ecf3a0(__this_01,local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_SelectionColor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x182069db0

void CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *value
               ,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  Utility_Color255_o *__this_01;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Il2CppObject *obj;
  UnityEngine_Color_o *pUVar6;
  VirtualInvokeData *pVVar7;
  ushort uVar8;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_18434660f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_ITextSelection);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_textSelection);
    Il2CppMethodInitialized_18434660f = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    obj = (Il2CppObject *)
          UnityEngine_UIElements_TextInputBaseField_ulong___get_textEdition
                    (__this_00,
                     (MethodInfo_DC2A90 *)
                     MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_textSelection);
    if ((value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (value->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      pUVar6 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_28,__this_01,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar2 = obj->klass;
        uVar4._0_4_ = (pUVar6->fields).r;
        uVar4._4_4_ = (pUVar6->fields).g;
        uVar5._0_4_ = (pUVar6->fields).b;
        uVar5._4_4_ = (pUVar6->fields).a;
        uVar1 = (pIVar2->_2).interface_offsets_count;
        if (uVar1 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          uVar8 = 0;
          do {
            if (pIVar3[uVar8].interfaceType == (Il2CppClass *)TypeInfo_UnityEngine_UIElements_ITextSelection)
            {
              pVVar7 = pIVar2->vtable + (pIVar3[uVar8].offset + 5);
              goto label_182069e85;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar1);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_ITextSelection,5);
label_182069e85:
        local_28[0]._0_8_ = uVar4;
        local_28[0]._8_8_ = uVar5;
        (*pVVar7->methodPtr)(obj,(UnityEngine_Color_o *)local_28,pVVar7->method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_CursorColor
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicTextFieldBuiltin__get_CursorColor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x1820699d0

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_CursorColor
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *__this_01;
  UnityEngine_Color_o local_28 [2];
  
  if (Il2CppMethodInitialized_184346610 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_cursorColor);
    Il2CppMethodInitialized_184346610 = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor
              (local_28,__this_00,
               (MethodInfo_E184E0 *)
               MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_cursorColor);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_1ecf3a0(__this_01,local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_CursorColor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x182069bb0

void CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *value
               ,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  Utility_Color255_o *__this_01;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Il2CppObject *obj;
  UnityEngine_Color_o *pUVar6;
  VirtualInvokeData *pVVar7;
  ushort uVar8;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346611 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_ITextSelection);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_textSelection);
    Il2CppMethodInitialized_184346611 = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    obj = (Il2CppObject *)
          UnityEngine_UIElements_TextInputBaseField_ulong___get_textEdition
                    (__this_00,
                     (MethodInfo_DC2A90 *)
                     MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_textSelection);
    if ((value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (value->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      pUVar6 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_28,__this_01,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar2 = obj->klass;
        uVar4._0_4_ = (pUVar6->fields).r;
        uVar4._4_4_ = (pUVar6->fields).g;
        uVar5._0_4_ = (pUVar6->fields).b;
        uVar5._4_4_ = (pUVar6->fields).a;
        uVar1 = (pIVar2->_2).interface_offsets_count;
        if (uVar1 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          uVar8 = 0;
          do {
            if (pIVar3[uVar8].interfaceType == (Il2CppClass *)TypeInfo_UnityEngine_UIElements_ITextSelection)
            {
              pVVar7 = pIVar2->vtable + (pIVar3[uVar8].offset + 3);
              goto label_182069c85;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar1);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_ITextSelection,3);
label_182069c85:
        local_28[0]._0_8_ = uVar4;
        local_28[0]._8_8_ = uVar5;
        (*pVVar7->methodPtr)(obj,(UnityEngine_Color_o *)local_28,pVVar7->method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$RegisterValueChangedEventCallback
// il2cpp: CustomLogic_CustomLogicTextFieldBuiltin_o* CustomLogic_CustomLogicTextFieldBuiltin__RegisterValueChangedEventCallback (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, CustomLogic_UserMethod_o* changeEvent, const MethodInfo* method);
// 0x1820698c0

CustomLogic_CustomLogicTextFieldBuiltin_o *
CustomLogic_CustomLogicTextFieldBuiltin__RegisterValueChangedEventCallback
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,CustomLogic_UserMethod_o *changeEvent,
          MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *control;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *object;
  DG_Tweening_Core_DOSetter_T__o *__this_00;
  
  if (Il2CppMethodInitialized_184346612 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_string
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_c__DisplayClass20_0_RegisterValueChangedEventCallback_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_c__DisplayClass20_0);
    Il2CppMethodInitialized_184346612 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_c__DisplayClass20_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (object->fields).changeEvent = changeEvent;
    Il2CppCodeGenWriteBarrier(&(object->fields).changeEvent,changeEvent);
    control = (__this->fields)._textField;
    __this_00 = (DG_Tweening_Core_DOSetter_T__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_string);
    UnityEngine_UIElements_EventCallback_object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_c__DisplayClass20_0_RegisterValueChangedEventCallback_b
               ,(MethodInfo_EB6EC0 *)0x0);
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_Vector3Int_
              ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,
               (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_00,
               (MethodInfo_7118E0 *)
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_string
              );
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182066a20

void
CustomLogic_CustomLogicTextFieldBuiltin__SetValueWithoutNotify(CustomLogic_CustomLogicTextFieldBuiltin_o* __this, System_String_o* value, MethodInfo* method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  
  pUVar1 = (__this->fields)._textField;
  if (pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    (*(pUVar1->klass->vtable)._159_SetValueWithoutNotify.methodPtr)
              (pUVar1,value,(pUVar1->klass->vtable)._159_SetValueWithoutNotify.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTextFieldBuiltin__get_ClassName (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x1820699a0

System_String_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_ClassName
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346613 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TextField");
    Il2CppMethodInitialized_184346613 = '\x01';
  }
  return "TextField";
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_IsAbstract (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTextFieldBuiltin__get_IsAbstract(CustomLogic_CustomLogicTextFieldBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_IsStatic (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicTextFieldBuiltin__get_IsStatic(CustomLogic_CustomLogicTextFieldBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTextFieldBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicTextFieldBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


