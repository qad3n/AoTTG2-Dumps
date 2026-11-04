// Type: CustomLogic.CustomLogicScrollViewBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicScrollViewBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicScrollViewBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicScrollViewBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182074c50

CustomLogic_CustomLogicScrollViewBuiltin_o *
CustomLogic_CustomLogicScrollViewBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicScrollViewBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x18207b510

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843465e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843465e2 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__Elasticity>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__Elasticity_b__7_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182077130

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__Elasticity_b__7_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  Il2CppType *handle;
  bool bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  int32_t local_res18 [2];
  
  if (Il2CppMethodInitialized_1843465e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465e3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (pIVar2,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843465cf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeRef_UnityEngine_UIElements_ScrollView_TouchScrollBehavior);
        Il2CppMethodInitialized_1843465cf = '\x01';
      }
      handle = TypeRef_UnityEngine_UIElements_ScrollView_TouchScrollBehavior;
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      local_res18[0] = value;
      pIVar2 = il2cpp_value_box(g_data_184354e08,local_res18);
      if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e58);
      }
      bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
      if (!bVar1) {
        local_res18[0] = value;
        pIVar2 = il2cpp_value_box(g_data_184354e08,local_res18);
        pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown elasticity value: {0}");
        pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
        __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
        System_ArgumentException___ctor_1a77cc0(__this_01,pSVar3,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Elasticity);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
      }
      __this_00 = (__c->fields)._scrollView;
      if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_touchScrollBehavior(__this_00,value,(MethodInfo *)0x0);
        return (Il2CppObject *)__c;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScrollDecelerationRate>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__SetScrollDecelerationRate_b__8_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182079cf0

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__SetScrollDecelerationRate_b__8_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_ScrollView_o *__this_00;
  float value;
  
  if (Il2CppMethodInitialized_1843465e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465e4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
      __this_00 = (__c->fields)._scrollView;
      if (value < 0.0) {
        value = 0.0;
      }
      else if (1.0 < value) {
        value = 1.0;
      }
      if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate(__this_00,value,(MethodInfo *)0x0);
        return (Il2CppObject *)__c;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScrollOffset>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__SetScrollOffset_b__9_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182079db0

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__SetScrollOffset_b__9_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_ScrollView_o *__this_00;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_1843465e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465e5 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    if (((__c != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) &&
       (__this_00 = (__c->fields)._scrollView, __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      UnityEngine_UIElements_ScrollView__set_scrollOffset
                (__this_00,(UnityEngine_Vector2_o)(pCVar1->fields)._value.fields,(MethodInfo *)0x0);
      return (Il2CppObject *)__c;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__ScrollToTop>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__ScrollToTop_b__10_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182078990

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__ScrollToTop_b__10_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  
  if ((__c != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields)._scrollView, __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UVar1 = UnityEngine_UIElements_ScrollView__get_scrollOffset(__this_00,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this_00,(UnityEngine_Vector2_o)(UVar1.fields & 0xffffffff),(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__ScrollToBottom>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__ScrollToBottom_b__11_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182078940

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__ScrollToBottom_b__11_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *child;
  
  if ((__c != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields)._scrollView, __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    child = (*(__this_00->klass->vtable)._138_get_contentContainer.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._138_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(__this_00,child,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x182053460

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Func_CustomLogicScrollViewBuiltin__object__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this_01;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_1843465d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollOffset");
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollDecelerationRate");
    il2cpp_codegen_initialize_runtime_metadata(&"VerticalScrollEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollToTop");
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollToBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"Elasticity");
    il2cpp_codegen_initialize_runtime_metadata(&"HorizontalScrollEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SetScrollDecelerationRate");
    il2cpp_codegen_initialize_runtime_metadata(&"SetScrollOffset");
    il2cpp_codegen_initialize_runtime_metadata(&"MouseWheelScrollSize");
    Il2CppMethodInitialized_1843465d1 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x7558c33d) {
    if (uVar3 < 0x3d05784e) {
      if (uVar3 == 0x28129cd) {
        bVar2 = System_String__op_Equality(name,"SetScrollOffset",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843465d9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__SetScrollOffset_b__9
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843465d9 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__9_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__SetScrollOffset_b__9
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__9_0 =
                 (System_Func_CustomLogicScrollViewBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__9_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin
                             );
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0x3d05784d) {
        bVar2 = System_String__op_Equality(name,"ScrollDecelerationRate",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843465d3 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollDecelerationRat
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollDecelerationRat_40d7f98
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
            Il2CppMethodInitialized_1843465d3 = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollDecelerationRat
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollDecelerationRat_40d7f98
          ;
          goto label_182053fd6;
        }
      }
    }
    else if (uVar3 == 0x53995e54) {
      bVar2 = System_String__op_Equality(name,"Elasticity",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843465d7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__Elasticity_b__7_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843465d7 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__7_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__Elasticity_b__7_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__7_0 =
               (System_Func_CustomLogicScrollViewBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__7_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
    else if (uVar3 == 0x6af069af) {
      bVar2 = System_String__op_Equality(name,"SetScrollDecelerationRate",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843465d8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__SetScrollDeceleration
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843465d8 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__8_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__SetScrollDeceleration
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__8_0 =
               (System_Func_CustomLogicScrollViewBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__8_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
    else if (uVar3 == 0x7558c33c) {
      bVar2 = System_String__op_Equality(name,"ScrollToTop",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843465da == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__ScrollToTop_b__10_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843465da = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__10_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__ScrollToTop_b__10_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__10_0 =
               (System_Func_CustomLogicScrollViewBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__10_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
  }
  else if (uVar3 < 0xf0c8d07a) {
    if (uVar3 == 0x8e3d182a) {
      bVar2 = System_String__op_Equality(name,"ScrollToBottom",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843465db == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__ScrollToBottom_b__11
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843465db = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__11_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__ScrollToBottom_b__11
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__11_0 =
               (System_Func_CustomLogicScrollViewBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__11_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
    else if (uVar3 == 0xf0c8d079) {
      bVar2 = System_String__op_Equality(name,"HorizontalScrollEnabled",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843465d5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__HorizontalScrollEnabl
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__HorizontalScrollEnabl_40d7c18
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
          Il2CppMethodInitialized_1843465d5 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__HorizontalScrollEnabl
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__HorizontalScrollEnabl_40d7c18
        ;
        goto label_182053fd6;
      }
    }
  }
  else if (uVar3 == 0xf2482abb) {
    bVar2 = System_String__op_Equality(name,"MouseWheelScrollSize",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843465d4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__MouseWheelScrollSize
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__MouseWheelScrollSize_40d7dd8
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
        Il2CppMethodInitialized_1843465d4 = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__MouseWheelScrollSize
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__MouseWheelScrollSize_40d7dd8
      ;
label_182053fd6:
      System_Action_object__object____ctor
                (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)__this_00,
                 (MethodInfo_12B8EE0 *)
                 MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor);
      return (CustomLogic_ICLMemberBinding_o *)__this_01;
    }
  }
  else if (uVar3 == 0xfaaf0aaf) {
    bVar2 = System_String__op_Equality(name,"VerticalScrollEnabled",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843465d6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__VerticalScrollEnabled
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__VerticalScrollEnabled_40d8318
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
        Il2CppMethodInitialized_1843465d6 = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__VerticalScrollEnabled
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__VerticalScrollEnabled_40d8318
      ;
      goto label_182053fd6;
    }
  }
  else if (uVar3 == 0xfe24aa77) {
    bVar2 = System_String__op_Equality(name,"ScrollOffset",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843465d2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollOffset_g____get
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollOffset_g____set
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
        Il2CppMethodInitialized_1843465d2 = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollOffset_g____get
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollOffset_g____set
      ;
      goto label_182053fd6;
    }
  }
  pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicScrollViewBuiltin not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_02,pSVar6,(MethodInfo *)0x0);
  pMVar7 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar7);
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__ScrollOffset
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollOffset (const MethodInfo* method);
// 0x1820632c0

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollOffset(MethodInfo *method)

{
  System_Func_CustomLogicScrollViewBuiltin__object__o *__this;
  System_Action_CustomLogicScrollViewBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollOffset_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollOffset_g____set
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
    Il2CppMethodInitialized_1843465d2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollOffset_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollOffset_g____set
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__ScrollDecelerationRate
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollDecelerationRate (const MethodInfo* method);
// 0x1820631d0

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollDecelerationRate
          (MethodInfo *method)

{
  System_Func_CustomLogicScrollViewBuiltin__object__o *__this;
  System_Action_CustomLogicScrollViewBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollDecelerationRat
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollDecelerationRat_40d7f98
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
    Il2CppMethodInitialized_1843465d3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollDecelerationRat
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollDecelerationRat_40d7f98
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__MouseWheelScrollSize
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__MouseWheelScrollSize (const MethodInfo* method);
// 0x182062e10

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__MouseWheelScrollSize
          (MethodInfo *method)

{
  System_Func_CustomLogicScrollViewBuiltin__object__o *__this;
  System_Action_CustomLogicScrollViewBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__MouseWheelScrollSize
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__MouseWheelScrollSize_40d7dd8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
    Il2CppMethodInitialized_1843465d4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__MouseWheelScrollSize
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__MouseWheelScrollSize_40d7dd8
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__HorizontalScrollEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__HorizontalScrollEnabled (const MethodInfo* method);
// 0x182062230

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__HorizontalScrollEnabled
          (MethodInfo *method)

{
  System_Func_CustomLogicScrollViewBuiltin__object__o *__this;
  System_Action_CustomLogicScrollViewBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__HorizontalScrollEnabl
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__HorizontalScrollEnabl_40d7c18
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
    Il2CppMethodInitialized_1843465d5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__HorizontalScrollEnabl
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__HorizontalScrollEnabl_40d7c18
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__VerticalScrollEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__VerticalScrollEnabled (const MethodInfo* method);
// 0x182064030

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__VerticalScrollEnabled
          (MethodInfo *method)

{
  System_Func_CustomLogicScrollViewBuiltin__object__o *__this;
  System_Action_CustomLogicScrollViewBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__VerticalScrollEnabled
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__VerticalScrollEnabled_40d8318
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
    Il2CppMethodInitialized_1843465d6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__VerticalScrollEnabled
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__VerticalScrollEnabled_40d8318
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__Elasticity
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__Elasticity (const MethodInfo* method);
// 0x182059420

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__Elasticity(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843465d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__Elasticity_b__7_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843465d7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__Elasticity_b__7_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicScrollViewBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__SetScrollDecelerationRate
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollDecelerationRate (const MethodInfo* method);
// 0x18205ec60

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollDecelerationRate
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843465d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__SetScrollDeceleration
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843465d8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__SetScrollDeceleration
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicScrollViewBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__SetScrollOffset
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollOffset (const MethodInfo* method);
// 0x18205ed80

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollOffset(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843465d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__SetScrollOffset_b__9
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843465d9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__SetScrollOffset_b__9
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicScrollViewBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__ScrollToTop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToTop (const MethodInfo* method);
// 0x18205d410

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToTop(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843465da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__ScrollToTop_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843465da = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__ScrollToTop_b__10_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicScrollViewBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__10_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__ScrollToBottom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToBottom (const MethodInfo* method);
// 0x18205d2f0

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToBottom(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843465db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__ScrollToBottom_b__11
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843465db = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__ScrollToBottom_b__11
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicScrollViewBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9__11_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x182064e60

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843465dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollOffset");
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollDecelerationRate");
    il2cpp_codegen_initialize_runtime_metadata(&"VerticalScrollEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollToTop");
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollToBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"Elasticity");
    il2cpp_codegen_initialize_runtime_metadata(&"HorizontalScrollEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SetScrollDecelerationRate");
    il2cpp_codegen_initialize_runtime_metadata(&"SetScrollOffset");
    il2cpp_codegen_initialize_runtime_metadata(&"MouseWheelScrollSize");
    Il2CppMethodInitialized_1843465dc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ScrollOffset",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ScrollDecelerationRate",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MouseWheelScrollSize",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorizontalScrollEnabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"VerticalScrollEnabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Elasticity",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetScrollDecelerationRate",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetScrollOffset",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ScrollToTop",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ScrollToBottom",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->static_fields->MemberNames,__this)
    ;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollOffset>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollOffset_g____getter_2_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x182055da0

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollOffset_g____getter_2_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  
  if (__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843465ce == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
      Il2CppMethodInitialized_1843465ce = '\x01';
    }
    __this = (__i->fields)._scrollView;
    if (__this != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      value = UnityEngine_UIElements_ScrollView__get_scrollOffset(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
      CustomLogic_CustomLogicVector2Builtin___ctor_1ed51c0(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollOffset>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollOffset_g____setter_2_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182055e20

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollOffset_g____setter_2_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_1843465dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465dd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
  if (((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
      (pCVar1 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) &&
     (__this = (__i->fields)._scrollView, __this != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this,(UnityEngine_Vector2_o)(pCVar1->fields)._value.fields,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollDecelerationRate>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollDecelerationRate_g____getter_3_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x182055cd0

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollDecelerationRate_g____getter_3_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (__this = (__i->fields)._scrollView, __this != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    local_res8[0] = UnityEngine_UIElements_ScrollView__get_scrollDecelerationRate(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollDecelerationRate>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollDecelerationRate_g____setter_3_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182055d10

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollDecelerationRate_g____setter_3_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_1843465de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465de = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (__this = (__i->fields)._scrollView, __this != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__MouseWheelScrollSize>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__MouseWheelScrollSize_g____getter_4_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x182055860

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__MouseWheelScrollSize_g____getter_4_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (__this = (__i->fields)._scrollView, __this != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    local_res8[0] = UnityEngine_UIElements_ScrollView__get_mouseWheelScrollSize(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__MouseWheelScrollSize>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__MouseWheelScrollSize_g____setter_4_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x1820558a0

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__MouseWheelScrollSize_g____setter_4_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_1843465df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465df = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (__this = (__i->fields)._scrollView, __this != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__HorizontalScrollEnabled>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__HorizontalScrollEnabled_g____getter_5_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x182054c00

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__HorizontalScrollEnabled_g____getter_5_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *pUVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._scrollView, pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    if ((pUVar1->fields).m_Mode == 1) {
      local_res8[0] = true;
    }
    else {
      local_res8[0] = (pUVar1->fields).m_Mode == 2;
    }
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__HorizontalScrollEnabled>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__HorizontalScrollEnabled_g____setter_5_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182054c50

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__HorizontalScrollEnabled_g____setter_5_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_UIElements_ScrollView_o *pUVar3;
  
  if (Il2CppMethodInitialized_1843465e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465e0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) ||
     (pUVar3 = (__i->fields)._scrollView, pUVar3 == (UnityEngine_UIElements_ScrollView_o *)0x0))
  goto label_182054d63;
  if (!bVar1) {
    UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar3,2,(MethodInfo *)0x0);
    pUVar3 = (__i->fields)._scrollView;
    if (pUVar3 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if ((pUVar3->fields).m_Mode == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar3,0,(MethodInfo *)0x0);
      }
      return;
    }
    goto label_182054d63;
  }
  if (pUVar3 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_182054d63;
  if ((pUVar3->fields).m_Mode == 0) {
    iVar2 = 2;
label_182054d3e:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar3,iVar2,(MethodInfo *)0x0);
  }
  else {
    if ((pUVar3->fields).m_Mode == 1) {
label_182054d29:
      pUVar3 = (__i->fields)._scrollView;
      if (pUVar3 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_182054d63;
      iVar2 = 1;
      goto label_182054d3e;
    }
    iVar2 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar3,(MethodInfo *)0x0);
    if (iVar2 == 2) goto label_182054d29;
  }
  pUVar3 = (__i->fields)._scrollView;
  if (pUVar3 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar3,0,(MethodInfo *)0x0);
    return;
  }
label_182054d63:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__VerticalScrollEnabled>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__VerticalScrollEnabled_g____getter_6_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x1820569d0

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__VerticalScrollEnabled_g____getter_6_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *pUVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._scrollView, pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    if ((pUVar1->fields).m_Mode == 0) {
      local_res8[0] = true;
    }
    else {
      local_res8[0] = (pUVar1->fields).m_Mode == 2;
    }
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__VerticalScrollEnabled>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__VerticalScrollEnabled_g____setter_6_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182056a20

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__VerticalScrollEnabled_g____setter_6_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_UIElements_ScrollView_o *pUVar3;
  
  if (Il2CppMethodInitialized_1843465e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465e1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) ||
     (pUVar3 = (__i->fields)._scrollView, pUVar3 == (UnityEngine_UIElements_ScrollView_o *)0x0))
  goto label_182056b33;
  if (!bVar1) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar3,2,(MethodInfo *)0x0);
    pUVar3 = (__i->fields)._scrollView;
    if (pUVar3 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if ((pUVar3->fields).m_Mode == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar3,1,(MethodInfo *)0x0);
      }
      return;
    }
    goto label_182056b33;
  }
  if (pUVar3 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_182056b33;
  if ((pUVar3->fields).m_Mode == 1) {
    iVar2 = 2;
label_182056b0e:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar3,iVar2,(MethodInfo *)0x0);
  }
  else {
    if ((pUVar3->fields).m_Mode == 0) {
label_182056afc:
      pUVar3 = (__i->fields)._scrollView;
      if (pUVar3 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_182056b33;
      iVar2 = 0;
      goto label_182056b0e;
    }
    iVar2 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar3,(MethodInfo *)0x0);
    if (iVar2 == 2) goto label_182056afc;
  }
  pUVar3 = (__i->fields)._scrollView;
  if (pUVar3 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar3,0,(MethodInfo *)0x0);
    return;
  }
label_182056b33:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin___ctor (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, UnityEngine_UIElements_ScrollView_o* scrollView, const MethodInfo* method);
// 0x182067970

void
CustomLogic_CustomLogicScrollViewBuiltin___ctor(CustomLogic_CustomLogicScrollViewBuiltin_o* __this, UnityEngine_UIElements_ScrollView_o* scrollView, MethodInfo* method)

{
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)textField,(MethodInfo *)0x0);
  (__this->fields)._scrollView = textField;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scrollView,textField);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_ScrollOffset
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicScrollViewBuiltin__get_ScrollOffset (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x182068290

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicScrollViewBuiltin__get_ScrollOffset
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *__this_01;
  
  if (Il2CppMethodInitialized_1843465ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_1843465ce = '\x01';
  }
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    value = UnityEngine_UIElements_ScrollView__get_scrollOffset(__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    CustomLogic_CustomLogicVector2Builtin___ctor_1ed51c0(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_ScrollOffset
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_ScrollOffset (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, CustomLogic_CustomLogicVector2Builtin_o* value, const MethodInfo* method);
// 0x182068450

void CustomLogic_CustomLogicScrollViewBuiltin__set_ScrollOffset
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,
               CustomLogic_CustomLogicVector2Builtin_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  
  if ((value != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (__this_00 = (__this->fields)._scrollView, __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this_00,(UnityEngine_Vector2_o)(value->fields)._value.fields,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_ScrollDecelerationRate
// il2cpp: float CustomLogic_CustomLogicScrollViewBuiltin__get_ScrollDecelerationRate (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x182068270

float CustomLogic_CustomLogicScrollViewBuiltin__get_ScrollDecelerationRate
                (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar1 = UnityEngine_UIElements_ScrollView__get_scrollDecelerationRate(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_ScrollDecelerationRate
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_ScrollDecelerationRate (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, float value, const MethodInfo* method);
// 0x182068430

void CustomLogic_CustomLogicScrollViewBuiltin__set_ScrollDecelerationRate
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_MouseWheelScrollSize
// il2cpp: float CustomLogic_CustomLogicScrollViewBuiltin__get_MouseWheelScrollSize (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x182068250

float CustomLogic_CustomLogicScrollViewBuiltin__get_MouseWheelScrollSize
                (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar1 = UnityEngine_UIElements_ScrollView__get_mouseWheelScrollSize(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_MouseWheelScrollSize
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_MouseWheelScrollSize (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, float value, const MethodInfo* method);
// 0x182068410

void CustomLogic_CustomLogicScrollViewBuiltin__set_MouseWheelScrollSize
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_HorizontalScrollEnabled
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_HorizontalScrollEnabled (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x182068210

bool CustomLogic_CustomLogicScrollViewBuiltin__get_HorizontalScrollEnabled
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *pUVar1;
  
  pUVar1 = (__this->fields)._scrollView;
  if (pUVar1 == (UnityEngine_UIElements_ScrollView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pUVar1->fields).m_Mode == 1) {
    return true;
  }
  return (pUVar1->fields).m_Mode == 2;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_HorizontalScrollEnabled
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_HorizontalScrollEnabled (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x182068350

void CustomLogic_CustomLogicScrollViewBuiltin__set_HorizontalScrollEnabled
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,bool value,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_UIElements_ScrollView_o *pUVar2;
  
  pUVar2 = (__this->fields)._scrollView;
  if (pUVar2 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_1820683fc;
  if (!value) {
    UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar2,2,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._scrollView;
    if (pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if ((pUVar2->fields).m_Mode == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar2,0,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    goto label_1820683fc;
  }
  if (pUVar2 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_1820683fc;
  if ((pUVar2->fields).m_Mode == 0) {
    iVar1 = 2;
label_1820683dc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar2,iVar1,(MethodInfo *)0x0);
  }
  else {
    if ((pUVar2->fields).m_Mode == 1) {
label_1820683c7:
      pUVar2 = (__this->fields)._scrollView;
      if (pUVar2 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_1820683fc;
      iVar1 = 1;
      goto label_1820683dc;
    }
    iVar1 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar2,(MethodInfo *)0x0);
    if (iVar1 == 2) goto label_1820683c7;
  }
  pUVar2 = (__this->fields)._scrollView;
  if (pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar2,0,(MethodInfo *)0x0);
    return;
  }
label_1820683fc:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_VerticalScrollEnabled
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_VerticalScrollEnabled (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x182068310

bool CustomLogic_CustomLogicScrollViewBuiltin__get_VerticalScrollEnabled
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *pUVar1;
  
  pUVar1 = (__this->fields)._scrollView;
  if (pUVar1 == (UnityEngine_UIElements_ScrollView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pUVar1->fields).m_Mode == 0) {
    return true;
  }
  return (pUVar1->fields).m_Mode == 2;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_VerticalScrollEnabled
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x182068490

void CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,bool value,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_UIElements_ScrollView_o *pUVar2;
  
  pUVar2 = (__this->fields)._scrollView;
  if (pUVar2 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_18206853c;
  if (!value) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar2,2,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._scrollView;
    if (pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if ((pUVar2->fields).m_Mode == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar2,1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    goto label_18206853c;
  }
  if (pUVar2 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_18206853c;
  if ((pUVar2->fields).m_Mode == 1) {
    iVar1 = 2;
label_18206851c:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar2,iVar1,(MethodInfo *)0x0);
  }
  else {
    if ((pUVar2->fields).m_Mode == 0) {
label_18206850a:
      pUVar2 = (__this->fields)._scrollView;
      if (pUVar2 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_18206853c;
      iVar1 = 0;
      goto label_18206851c;
    }
    iVar1 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar2,(MethodInfo *)0x0);
    if (iVar1 == 2) goto label_18206850a;
  }
  pUVar2 = (__this->fields)._scrollView;
  if (pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar2,0,(MethodInfo *)0x0);
    return;
  }
label_18206853c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$Elasticity
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicScrollViewBuiltin__Elasticity (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x182067f90

CustomLogic_CustomLogicScrollViewBuiltin_o *
CustomLogic_CustomLogicScrollViewBuiltin__Elasticity
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  Il2CppType *handle;
  bool bVar1;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  int32_t local_res10 [6];
  
  if (Il2CppMethodInitialized_1843465cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UIElements_ScrollView_TouchScrollBehavior)
    ;
    Il2CppMethodInitialized_1843465cf = '\x01';
  }
  handle = TypeRef_UnityEngine_UIElements_ScrollView_TouchScrollBehavior;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  local_res10[0] = value;
  pIVar2 = il2cpp_value_box(g_data_184354e08,local_res10);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._scrollView;
    if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior(__this_00,value,(MethodInfo *)0x0);
      return __this;
    }
    ThrowNullReferenceException();
  }
  local_res10[0] = value;
  pIVar2 = il2cpp_value_box(g_data_184354e08,local_res10);
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown elasticity value: {0}");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this_01,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Elasticity);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicScrollViewBuiltin$$SetScrollDecelerationRate
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicScrollViewBuiltin__SetScrollDecelerationRate (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, float rate, const MethodInfo* method);
// 0x182068150

CustomLogic_CustomLogicScrollViewBuiltin_o *
CustomLogic_CustomLogicScrollViewBuiltin__SetScrollDecelerationRate
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,float rate,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  
  __this_00 = (__this->fields)._scrollView;
  if (rate < 0.0) {
    rate = 0.0;
  }
  else if (1.0 < rate) {
    rate = 1.0;
  }
  if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate(__this_00,rate,(MethodInfo *)0x0);
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$SetScrollOffset
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicScrollViewBuiltin__SetScrollOffset (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, CustomLogic_CustomLogicVector2Builtin_o* offset, const MethodInfo* method);
// 0x1820681a0

CustomLogic_CustomLogicScrollViewBuiltin_o *
CustomLogic_CustomLogicScrollViewBuiltin__SetScrollOffset
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,CustomLogic_CustomLogicVector2Builtin_o *offset,
          MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  
  if ((offset != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (__this_00 = (__this->fields)._scrollView, __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this_00,(UnityEngine_Vector2_o)(offset->fields)._value.fields,(MethodInfo *)0x0);
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$ScrollToTop
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__ScrollToTop (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x182068100

void CustomLogic_CustomLogicScrollViewBuiltin__ScrollToTop
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar1 = UnityEngine_UIElements_ScrollView__get_scrollOffset(__this_00,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this_00,(UnityEngine_Vector2_o)(UVar1.fields & 0xffffffff),(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$ScrollToBottom
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__ScrollToBottom (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x1820680c0

void CustomLogic_CustomLogicScrollViewBuiltin__ScrollToBottom
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *child;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (*(__this_00->klass->vtable)._138_get_contentContainer.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._138_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(__this_00,child,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicScrollViewBuiltin__get_ClassName (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x1820681e0

System_String_o *
CustomLogic_CustomLogicScrollViewBuiltin__get_ClassName
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843465d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView");
    Il2CppMethodInitialized_1843465d0 = '\x01';
  }
  return "ScrollView";
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_IsAbstract (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicScrollViewBuiltin__get_IsAbstract(CustomLogic_CustomLogicScrollViewBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_IsStatic (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicScrollViewBuiltin__get_IsStatic(CustomLogic_CustomLogicScrollViewBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicScrollViewBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicScrollViewBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


