// Type: CustomLogic.CustomLogicScrollViewBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicScrollViewBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicScrollViewBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicScrollViewBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5b02cb0

CustomLogic_CustomLogicScrollViewBuiltin_o *
CustomLogic_CustomLogicScrollViewBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  NullCheck(args);
  pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicScrollViewBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5b042a0

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546fa7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546fa7 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields->__9)
  ;
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5b04310

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__Elasticity>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__Elasticity_b__7_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b04320

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__Elasticity_b__7_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicScrollViewBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546fa8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fa8 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicScrollViewBuiltin__Elasticity(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScrollDecelerationRate>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__SetScrollDecelerationRate_b__8_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b043b0

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__SetScrollDecelerationRate_b__8_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_ScrollView_o *__this_00;
  float fVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_07546fa9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fa9 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__c != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields)._scrollView, __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      fVar2 = 1.0;
      if (fVar1 <= 1.0) {
        fVar2 = fVar1;
      }
      UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
                (__this_00,(float)(-(uint)(0.0 <= fVar1) & (uint)fVar2),(MethodInfo *)0x0);
      return (Il2CppObject *)__c;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScrollOffset>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__SetScrollOffset_b__9_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b04460

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__SetScrollOffset_b__9_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_ScrollView_o *__this_00;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546faa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546faa = '\x01';
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
                       (obj,(MethodInfo_34BDE00 *)
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
// 0x5b04500

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__ScrollToTop_b__10_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  
  if ((__c == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields)._scrollView, __this_00 == (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar1 = UnityEngine_UIElements_ScrollView__get_scrollOffset(__this_00,(MethodInfo *)0x0);
  UVar1.fields.y = 0.0;
  UnityEngine_UIElements_ScrollView__set_scrollOffset(__this_00,UVar1,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__ScrollToBottom>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__ScrollToBottom_b__11_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b04540

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__ScrollToBottom_b__11_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *child;
  
  if ((__c == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields)._scrollView, __this_00 == (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  child = (*(__this_00->klass->vtable)._138_get_contentContainer.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._138_get_contentContainer.method);
  UnityEngine_UIElements_ScrollView__ScrollTo(__this_00,child,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5b02d40

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07546f96 == '\0') {
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
    Il2CppMethodInitialized_07546f96 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x7558c33d) {
    if (uVar2 < 0x3d05784e) {
      if (uVar2 == 0x28129cd) {
        bVar1 = System_String__op_Equality(name,"SetScrollOffset",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
            pCVar4 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollOffset
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
          pCVar4 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollOffset
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x3d05784d) {
        bVar1 = System_String__op_Equality(name,"ScrollDecelerationRate",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollDecelerationRate
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollDecelerationRate
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x53995e54) {
      bVar1 = System_String__op_Equality(name,"Elasticity",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__Elasticity
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__Elasticity
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x6af069af) {
      bVar1 = System_String__op_Equality(name,"SetScrollDecelerationRate",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollDecelerationRate
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollDecelerationRate
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x7558c33c) {
      bVar1 = System_String__op_Equality(name,"ScrollToTop",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToTop
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToTop
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xf0c8d07a) {
    if (uVar2 == 0x8e3d182a) {
      bVar1 = System_String__op_Equality(name,"ScrollToBottom",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToBottom
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToBottom
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xf0c8d079) {
      bVar1 = System_String__op_Equality(name,"HorizontalScrollEnabled",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__HorizontalScrollEnabled
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__HorizontalScrollEnabled
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xf2482abb) {
    bVar1 = System_String__op_Equality(name,"MouseWheelScrollSize",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__MouseWheelScrollSize
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__MouseWheelScrollSize
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xfaaf0aaf) {
    bVar1 = System_String__op_Equality(name,"VerticalScrollEnabled",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__VerticalScrollEnabled
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__VerticalScrollEnabled
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xfe24aa77) {
    bVar1 = System_String__op_Equality(name,"ScrollOffset",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollOffset
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollOffset
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicScrollViewBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__ScrollOffset
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollOffset (const MethodInfo* method);
// 0x5b03200

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollOffset(MethodInfo *method)

{
  System_Func_CustomLogicScrollViewBuiltin__object__o *__this;
  System_Action_CustomLogicScrollViewBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f97 == '\0') {
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
    Il2CppMethodInitialized_07546f97 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollOffset_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollOffset_g____set
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__ScrollDecelerationRate
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollDecelerationRate (const MethodInfo* method);
// 0x5b032e0

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollDecelerationRate
          (MethodInfo *method)

{
  System_Func_CustomLogicScrollViewBuiltin__object__o *__this;
  System_Action_CustomLogicScrollViewBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollDecelerationRat
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollDecelerationRat_71c1560
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
    Il2CppMethodInitialized_07546f98 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollDecelerationRat
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollDecelerationRat_71c1560
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__MouseWheelScrollSize
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__MouseWheelScrollSize (const MethodInfo* method);
// 0x5b033c0

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__MouseWheelScrollSize
          (MethodInfo *method)

{
  System_Func_CustomLogicScrollViewBuiltin__object__o *__this;
  System_Action_CustomLogicScrollViewBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__MouseWheelScrollSize
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__MouseWheelScrollSize_71c1550
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
    Il2CppMethodInitialized_07546f99 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__MouseWheelScrollSize
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__MouseWheelScrollSize_71c1550
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__HorizontalScrollEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__HorizontalScrollEnabled (const MethodInfo* method);
// 0x5b034a0

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__HorizontalScrollEnabled
          (MethodInfo *method)

{
  System_Func_CustomLogicScrollViewBuiltin__object__o *__this;
  System_Action_CustomLogicScrollViewBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__HorizontalScrollEnabl
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__HorizontalScrollEnabl_71c1540
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
    Il2CppMethodInitialized_07546f9a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__HorizontalScrollEnabl
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__HorizontalScrollEnabl_71c1540
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__VerticalScrollEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__VerticalScrollEnabled (const MethodInfo* method);
// 0x5b03580

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__VerticalScrollEnabled
          (MethodInfo *method)

{
  System_Func_CustomLogicScrollViewBuiltin__object__o *__this;
  System_Action_CustomLogicScrollViewBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__VerticalScrollEnabled
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__VerticalScrollEnabled_71c1580
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
    Il2CppMethodInitialized_07546f9b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__VerticalScrollEnabled
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicScrollViewBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__VerticalScrollEnabled_71c1580
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__Elasticity
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__Elasticity (const MethodInfo* method);
// 0x5b03660
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b03695: jmp 0x5b03705

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__Elasticity(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicScrollViewBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f9c == '\0') {
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
    Il2CppMethodInitialized_07546f9c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicScrollViewBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__Elasticity_b__7_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__SetScrollDecelerationRate
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollDecelerationRate (const MethodInfo* method);
// 0x5b037a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b037d5: jmp 0x5b03845

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollDecelerationRate
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicScrollViewBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f9d == '\0') {
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
    Il2CppMethodInitialized_07546f9d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicScrollViewBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__SetScrollDeceleration
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__SetScrollOffset
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollOffset (const MethodInfo* method);
// 0x5b038e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b03915: jmp 0x5b03985

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollOffset(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicScrollViewBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f9e == '\0') {
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
    Il2CppMethodInitialized_07546f9e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicScrollViewBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__SetScrollOffset_b__9
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__ScrollToTop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToTop (const MethodInfo* method);
// 0x5b03a20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b03a55: jmp 0x5b03ac5

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToTop(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicScrollViewBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f9f == '\0') {
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
    Il2CppMethodInitialized_07546f9f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicScrollViewBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__ScrollToTop_b__10_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__ScrollToBottom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToBottom (const MethodInfo* method);
// 0x5b03b60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b03b95: jmp 0x5b03c05

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToBottom(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicScrollViewBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546fa0 == '\0') {
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
    Il2CppMethodInitialized_07546fa0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicScrollViewBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollViewBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__ScrollToBottom_b__11
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5b03ca0

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546fa1 == '\0') {
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
    Il2CppMethodInitialized_07546fa1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ScrollOffset",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ScrollDecelerationRate",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MouseWheelScrollSize",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorizontalScrollEnabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"VerticalScrollEnabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Elasticity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetScrollDecelerationRate",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetScrollOffset",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ScrollToTop",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ScrollToBottom",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollOffset>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollOffset_g____getter_2_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x5b03ea0

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollOffset_g____getter_2_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  
  if (__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546f93 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
      Il2CppMethodInitialized_07546f93 = '\x01';
    }
    __this = (__i->fields)._scrollView;
    if (__this != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      value = UnityEngine_UIElements_ScrollView__get_scrollOffset(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
      CustomLogic_CustomLogicVector2Builtin___ctor_58d8ad0(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollOffset>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollOffset_g____setter_2_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b03f10

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollOffset_g____setter_2_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546fa2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fa2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
  if (((__i == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) ||
      (pCVar1 == (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) ||
     (__this = (__i->fields)._scrollView, __this == (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_ScrollView__set_scrollOffset
            (__this,(UnityEngine_Vector2_o)(pCVar1->fields)._value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollDecelerationRate>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollDecelerationRate_g____getter_3_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x5b03fa0

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollDecelerationRate_g____getter_3_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) ||
     (__this = (__i->fields)._scrollView, __this == (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_ScrollView__get_scrollDecelerationRate(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollDecelerationRate>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollDecelerationRate_g____setter_3_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b03fe0

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollDecelerationRate_g____setter_3_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07546fa3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fa3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) ||
     (__this = (__i->fields)._scrollView, __this == (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__MouseWheelScrollSize>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__MouseWheelScrollSize_g____getter_4_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x5b04060

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__MouseWheelScrollSize_g____getter_4_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) ||
     (__this = (__i->fields)._scrollView, __this == (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_ScrollView__get_mouseWheelScrollSize(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__MouseWheelScrollSize>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__MouseWheelScrollSize_g____setter_4_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b040a0

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__MouseWheelScrollSize_g____setter_4_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07546fa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fa4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) ||
     (__this = (__i->fields)._scrollView, __this == (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__HorizontalScrollEnabled>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__HorizontalScrollEnabled_g____getter_5_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x5b04120

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__HorizontalScrollEnabled_g____getter_5_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) ||
     ((__i->fields)._scrollView == (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__HorizontalScrollEnabled>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__HorizontalScrollEnabled_g____setter_5_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b04160

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__HorizontalScrollEnabled_g____setter_5_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546fa5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fa5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicScrollViewBuiltin__set_HorizontalScrollEnabled(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__VerticalScrollEnabled>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__VerticalScrollEnabled_g____getter_6_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x5b041e0

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__VerticalScrollEnabled_g____getter_6_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) ||
     ((__i->fields)._scrollView == (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__VerticalScrollEnabled>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__VerticalScrollEnabled_g____setter_6_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b04220

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__VerticalScrollEnabled_g____setter_6_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546fa6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fa6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin___ctor (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, UnityEngine_UIElements_ScrollView_o* scrollView, const MethodInfo* method);
// 0x5b02790

void CustomLogic_CustomLogicScrollViewBuiltin___ctor
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,
               UnityEngine_UIElements_ScrollView_o *scrollView,MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)scrollView,(MethodInfo *)0x0);
  (__this->fields)._scrollView = scrollView;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scrollView);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_ScrollOffset
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicScrollViewBuiltin__get_ScrollOffset (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x5b027c0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicScrollViewBuiltin__get_ScrollOffset
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *__this_01;
  
  if (Il2CppMethodInitialized_07546f93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07546f93 = '\x01';
  }
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 == (UnityEngine_UIElements_ScrollView_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = UnityEngine_UIElements_ScrollView__get_scrollOffset(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  CustomLogic_CustomLogicVector2Builtin___ctor_58d8ad0(__this_01,value,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_ScrollOffset
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_ScrollOffset (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, CustomLogic_CustomLogicVector2Builtin_o* value, const MethodInfo* method);
// 0x5b02830

void CustomLogic_CustomLogicScrollViewBuiltin__set_ScrollOffset
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,
               CustomLogic_CustomLogicVector2Builtin_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  
  if ((value == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) ||
     (__this_00 = (__this->fields)._scrollView, __this_00 == (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_ScrollView__set_scrollOffset
            (__this_00,(UnityEngine_Vector2_o)(value->fields)._value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_ScrollDecelerationRate
// il2cpp: float CustomLogic_CustomLogicScrollViewBuiltin__get_ScrollDecelerationRate (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x5b02860

float CustomLogic_CustomLogicScrollViewBuiltin__get_ScrollDecelerationRate
                (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 == (UnityEngine_UIElements_ScrollView_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_UIElements_ScrollView__get_scrollDecelerationRate(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_ScrollDecelerationRate
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_ScrollDecelerationRate (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b02880

void CustomLogic_CustomLogicScrollViewBuiltin__set_ScrollDecelerationRate
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 == (UnityEngine_UIElements_ScrollView_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_MouseWheelScrollSize
// il2cpp: float CustomLogic_CustomLogicScrollViewBuiltin__get_MouseWheelScrollSize (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x5b028a0

float CustomLogic_CustomLogicScrollViewBuiltin__get_MouseWheelScrollSize
                (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 == (UnityEngine_UIElements_ScrollView_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_UIElements_ScrollView__get_mouseWheelScrollSize(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_MouseWheelScrollSize
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_MouseWheelScrollSize (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b028c0

void CustomLogic_CustomLogicScrollViewBuiltin__set_MouseWheelScrollSize
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 == (UnityEngine_UIElements_ScrollView_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_HorizontalScrollEnabled
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_HorizontalScrollEnabled (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x5b028e0

bool CustomLogic_CustomLogicScrollViewBuiltin__get_HorizontalScrollEnabled
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *pUVar1;
  
  pUVar1 = (__this->fields)._scrollView;
  if (pUVar1 == (UnityEngine_UIElements_ScrollView_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pUVar1->fields).m_Mode - 1U < 2;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_HorizontalScrollEnabled
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_HorizontalScrollEnabled (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5b02900

void CustomLogic_CustomLogicScrollViewBuiltin__set_HorizontalScrollEnabled
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,bool value,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  undefined7 in_register_00000031;
  UnityEngine_UIElements_ScrollView_o *pUVar3;
  
  pUVar3 = (__this->fields)._scrollView;
  if ((int)CONCAT71(in_register_00000031,value) == 0) {
    if (pUVar3 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar3,2,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._scrollView;
      if (pUVar3 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if ((pUVar3->fields).m_Mode == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar3,0,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
    goto label_05b0298a;
  }
  if (pUVar3 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_05b0298a;
  iVar1 = (pUVar3->fields).m_Mode;
  if (iVar1 == 1) {
label_05b0296b:
    iVar2 = 1;
label_05b02970:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar3,iVar2,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 0) {
      iVar2 = 2;
      goto label_05b02970;
    }
    iVar2 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar3,(MethodInfo *)0x0);
    if (iVar2 == 2) {
      pUVar3 = (__this->fields)._scrollView;
      if (pUVar3 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_05b0298a;
      goto label_05b0296b;
    }
  }
  pUVar3 = (__this->fields)._scrollView;
  if (pUVar3 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar3,0,(MethodInfo *)0x0);
    return;
  }
label_05b0298a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_VerticalScrollEnabled
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_VerticalScrollEnabled (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x5b02990

bool CustomLogic_CustomLogicScrollViewBuiltin__get_VerticalScrollEnabled
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *pUVar1;
  
  pUVar1 = (__this->fields)._scrollView;
  if (pUVar1 == (UnityEngine_UIElements_ScrollView_o *)0x0) {
    ThrowNullReferenceException();
  }
  return ((pUVar1->fields).m_Mode & 0xfffffffdU) == 0;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_VerticalScrollEnabled
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5b029b0

void CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,bool value,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  undefined7 in_register_00000031;
  UnityEngine_UIElements_ScrollView_o *pUVar3;
  
  pUVar3 = (__this->fields)._scrollView;
  if ((int)CONCAT71(in_register_00000031,value) == 0) {
    if (pUVar3 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar3,2,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._scrollView;
      if (pUVar3 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if ((pUVar3->fields).m_Mode == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar3,1,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
    goto label_05b02a3a;
  }
  if (pUVar3 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_05b02a3a;
  iVar1 = (pUVar3->fields).m_Mode;
  if (iVar1 == 0) {
label_05b02a1e:
    iVar2 = 0;
label_05b02a20:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar3,iVar2,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      iVar2 = 2;
      goto label_05b02a20;
    }
    iVar2 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar3,(MethodInfo *)0x0);
    if (iVar2 == 2) {
      pUVar3 = (__this->fields)._scrollView;
      if (pUVar3 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_05b02a3a;
      goto label_05b02a1e;
    }
  }
  pUVar3 = (__this->fields)._scrollView;
  if (pUVar3 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar3,0,(MethodInfo *)0x0);
    return;
  }
label_05b02a3a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$Elasticity
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicScrollViewBuiltin__Elasticity (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5b02a40

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
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_07546f94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UIElements_ScrollView_TouchScrollBehavior)
    ;
    Il2CppMethodInitialized_07546f94 = '\x01';
  }
  handle = TypeRef_UnityEngine_UIElements_ScrollView_TouchScrollBehavior;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._scrollView;
    if (__this_00 == (UnityEngine_UIElements_ScrollView_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_UIElements_ScrollView__set_touchScrollBehavior(__this_00,value,(MethodInfo *)0x0);
    return __this;
  }
  iStack_30 = value;
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown elasticity value: {0}");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this_01,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Elasticity);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicScrollViewBuiltin$$SetScrollDecelerationRate
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicScrollViewBuiltin__SetScrollDecelerationRate (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, float rate, const MethodInfo* method);
// 0x5b02b80

CustomLogic_CustomLogicScrollViewBuiltin_o *
CustomLogic_CustomLogicScrollViewBuiltin__SetScrollDecelerationRate
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,float rate,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 == (UnityEngine_UIElements_ScrollView_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = 1.0;
  if (rate <= 1.0) {
    fVar1 = rate;
  }
  UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
            (__this_00,(float)(-(uint)(0.0 <= rate) & (uint)fVar1),(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$SetScrollOffset
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicScrollViewBuiltin__SetScrollOffset (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, CustomLogic_CustomLogicVector2Builtin_o* offset, const MethodInfo* method);
// 0x5b02bc0

CustomLogic_CustomLogicScrollViewBuiltin_o *
CustomLogic_CustomLogicScrollViewBuiltin__SetScrollOffset
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,CustomLogic_CustomLogicVector2Builtin_o *offset,
          MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  
  if ((offset == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) ||
     (__this_00 = (__this->fields)._scrollView, __this_00 == (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_ScrollView__set_scrollOffset
            (__this_00,(UnityEngine_Vector2_o)(offset->fields)._value.fields,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$ScrollToTop
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__ScrollToTop (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x5b02bf0

void CustomLogic_CustomLogicScrollViewBuiltin__ScrollToTop
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 == (UnityEngine_UIElements_ScrollView_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = UnityEngine_UIElements_ScrollView__get_scrollOffset(__this_00,(MethodInfo *)0x0);
  UVar1.fields.y = 0.0;
  UnityEngine_UIElements_ScrollView__set_scrollOffset(__this_00,UVar1,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$ScrollToBottom
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__ScrollToBottom (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x5b02c20

void CustomLogic_CustomLogicScrollViewBuiltin__ScrollToBottom
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *child;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 == (UnityEngine_UIElements_ScrollView_o *)0x0) {
    ThrowNullReferenceException();
  }
  child = (*(__this_00->klass->vtable)._138_get_contentContainer.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._138_get_contentContainer.method);
  UnityEngine_UIElements_ScrollView__ScrollTo(__this_00,child,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicScrollViewBuiltin__get_ClassName (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x5b02c50

System_String_o *
CustomLogic_CustomLogicScrollViewBuiltin__get_ClassName
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546f95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView");
    Il2CppMethodInitialized_07546f95 = '\x01';
  }
  return "ScrollView";
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_IsAbstract (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x5b02c80

bool CustomLogic_CustomLogicScrollViewBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_IsStatic (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x5b02c90

bool CustomLogic_CustomLogicScrollViewBuiltin__get_IsStatic
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x5b02ca0

bool CustomLogic_CustomLogicScrollViewBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


