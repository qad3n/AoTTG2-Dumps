// Type: CustomLogic.CustomLogicVisualElementBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicVisualElementBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicVisualElementBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5b1ab80

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicVisualElementBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5b24070

void CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547134 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547134 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5b240e0

void CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Add>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Add_b__3_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b240f0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Add_b__3_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07547135 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547135 = '\x01';
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
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVisualElementBuiltin
                       );
    if (((__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0)) &&
       (__this_00 = (__c->fields)._visualElement, __this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0))
    {
      UnityEngine_UIElements_VisualElement__Add(__this_00,(pCVar1->fields)._visualElement,(MethodInfo *)0x0);
      return (Il2CppObject *)__c;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Remove>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__4_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24190

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__4_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07547136 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547136 = '\x01';
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
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVisualElementBuiltin
                       );
    if (((__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0)) &&
       (__this_00 = (__c->fields)._visualElement, __this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0))
    {
      UnityEngine_UIElements_VisualElement__Remove
                (__this_00,(pCVar1->fields)._visualElement,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveFromHierarchy>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RemoveFromHierarchy_b__5_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24230

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RemoveFromHierarchy_b__5_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  
  if ((__c == (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields)._visualElement, __this_00 == (UnityEngine_UIElements_VisualElement_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__6_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24250

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__6_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  
  if ((__c == (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields)._visualElement, __this_00 == (UnityEngine_UIElements_VisualElement_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_VisualElement__Clear(__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetElementAt>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__GetElementAt_b__7_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24270

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__GetElementAt_b__7_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t index;
  UnityEngine_UIElements_VisualElement_o *pUVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547137 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547137 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_07547091 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
        Il2CppMethodInitialized_07547091 = '\x01';
      }
      pUVar1 = (__c->fields)._visualElement;
      if (pUVar1 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
        pUVar1 = UnityEngine_UIElements_VisualElement__ElementAt(pUVar1,index,(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
        CustomLogic_CustomLogicVisualElementBuiltin___ctor(__this_00,pUVar1,method_00);
        return (Il2CppObject *)__this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__QueryByName>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__QueryByName_b__8_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24350

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__QueryByName_b__8_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  UnityEngine_UIElements_VisualElement_o *pUVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547138 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547138 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_07547092 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_UQueryExtensions);
        Il2CppMethodInitialized_07547092 = '\x01';
      }
      pUVar1 = (__c->fields)._visualElement;
      if ((TypeInfo_UnityEngine_UIElements_UQueryExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UIElements_UQueryExtensions);
      }
      pUVar1 = UnityEngine_UIElements_UQueryExtensions__Q_6b560c0
                         (pUVar1,name,(System_String_o *)0x0,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
      CustomLogic_CustomLogicVisualElementBuiltin___ctor(__this_00,pUVar1,method_00);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__QueryByClassName>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__QueryByClassName_b__9_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24460

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__QueryByClassName_b__9_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *className;
  UnityEngine_UIElements_VisualElement_o *pUVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547139 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547139 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    className = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_07547093 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_UQueryExtensions);
        Il2CppMethodInitialized_07547093 = '\x01';
      }
      pUVar1 = (__c->fields)._visualElement;
      if ((TypeInfo_UnityEngine_UIElements_UQueryExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UIElements_UQueryExtensions);
      }
      pUVar1 = UnityEngine_UIElements_UQueryExtensions__Q_6b560c0
                         (pUVar1,(System_String_o *)0x0,className,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
      CustomLogic_CustomLogicVisualElementBuiltin___ctor(__this_00,pUVar1,method_00);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterMouseEnterEventCallback>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RegisterMouseEnterEventCallback_b__10_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24570

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RegisterMouseEnterEventCallback_b__10_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *method_00;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *methodInfo;
  
  if (Il2CppMethodInitialized_0754713a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754713a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__RegisterMouseEnterEventCallback
                         (__c,method_00,methodInfo);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterMouseLeaveEventCallback>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RegisterMouseLeaveEventCallback_b__11_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24600

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RegisterMouseLeaveEventCallback_b__11_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *method_00;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *methodInfo;
  
  if (Il2CppMethodInitialized_0754713b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754713b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__RegisterMouseLeaveEventCallback
                         (__c,method_00,methodInfo);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterClickEventCallback>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RegisterClickEventCallback_b__12_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24690

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RegisterClickEventCallback_b__12_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *method_00;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *methodInfo;
  
  if (Il2CppMethodInitialized_0754713c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754713c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__RegisterClickEventCallback
                         (__c,method_00,methodInfo);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterFocusInEventCallback>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RegisterFocusInEventCallback_b__13_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24720

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RegisterFocusInEventCallback_b__13_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *method_00;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *methodInfo;
  
  if (Il2CppMethodInitialized_0754713d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754713d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__RegisterFocusInEventCallback
                         (__c,method_00,methodInfo);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterFocusOutEventCallback>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RegisterFocusOutEventCallback_b__14_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b247b0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RegisterFocusOutEventCallback_b__14_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *method_00;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *methodInfo;
  
  if (Il2CppMethodInitialized_0754713e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754713e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__RegisterFocusOutEventCallback
                         (__c,method_00,methodInfo);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Opacity>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Opacity_b__15_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24840

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Opacity_b__15_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754713f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754713f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__Opacity(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Active>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Active_b__16_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b248d0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Active_b__16_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  System_Object_array *extraout_RDX;
  System_Object_array *method_00;
  System_Object_array *extraout_RDX_00;
  
  method_00 = __a;
  if (Il2CppMethodInitialized_07547140 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547140 = '\x01';
    method_00 = extraout_RDX;
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      value = true;
    }
    else {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool)
      ;
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__Active(__c,value,(MethodInfo *)method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Visible>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Visible_b__17_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24970

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Visible_b__17_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  System_Object_array *extraout_RDX;
  System_Object_array *method_00;
  System_Object_array *extraout_RDX_00;
  
  method_00 = __a;
  if (Il2CppMethodInitialized_07547141 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547141 = '\x01';
    method_00 = extraout_RDX;
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      value = true;
    }
    else {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool)
      ;
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__Visible(__c,value,(MethodInfo *)method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransitionDuration>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TransitionDuration_b__18_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24a10

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TransitionDuration_b__18_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547142 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547142 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TransitionDuration(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Absolute>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Absolute_b__19_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24aa0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Absolute_b__19_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  System_Object_array *extraout_RDX;
  System_Object_array *method_00;
  System_Object_array *extraout_RDX_00;
  
  method_00 = __a;
  if (Il2CppMethodInitialized_07547143 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547143 = '\x01';
    method_00 = extraout_RDX;
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      value = true;
    }
    else {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool)
      ;
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__Absolute(__c,value,(MethodInfo *)method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Left>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Left_b__20_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24b40

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Left_b__20_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547144 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547144 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__Left(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Top>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Top_b__21_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24c30

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Top_b__21_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547145 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__Top(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Right>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Right_b__22_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24d20

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Right_b__22_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547146 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547146 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__Right(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Bottom>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Bottom_b__23_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24e10

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Bottom_b__23_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547147 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547147 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__Bottom(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FlexShrink>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FlexShrink_b__24_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24f00

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FlexShrink_b__24_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547148 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547148 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__FlexShrink(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FlexGrow>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FlexGrow_b__25_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b24f90

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FlexGrow_b__25_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547149 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547149 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__FlexGrow(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FlexDirection>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FlexDirection_b__26_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b25020

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FlexDirection_b__26_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754714a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754714a = '\x01';
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
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__FlexDirection(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FlexWrap>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FlexWrap_b__27_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b250b0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FlexWrap_b__27_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754714b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754714b = '\x01';
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
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__FlexWrap(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__AlignItems>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__AlignItems_b__28_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b25140

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__AlignItems_b__28_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754714c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754714c = '\x01';
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
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__AlignItems(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__JustifyContent>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__JustifyContent_b__29_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b251d0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__JustifyContent_b__29_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754714d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754714d = '\x01';
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
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__JustifyContent(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__AlignSelf>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__AlignSelf_b__30_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b25260

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__AlignSelf_b__30_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754714e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754714e = '\x01';
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
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__AlignSelf(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Width>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Width_b__31_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b252f0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Width_b__31_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754714f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754714f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__Width(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Height>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Height_b__32_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b253e0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Height_b__32_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547150 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547150 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__Height(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MinWidth>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MinWidth_b__33_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b254d0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MinWidth_b__33_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547151 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547151 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__MinWidth(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MinHeight>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MinHeight_b__34_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b255c0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MinHeight_b__34_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547152 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547152 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__MinHeight(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MaxWidth>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MaxWidth_b__35_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b256b0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MaxWidth_b__35_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547153 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547153 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__MaxWidth(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MaxHeight>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MaxHeight_b__36_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b257a0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MaxHeight_b__36_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547154 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547154 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__MaxHeight(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__AspectRatio>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__AspectRatio_b__37_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b25890

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__AspectRatio_b__37_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int32_t mode;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547155 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547155 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    mode = 0;
    method_00 = extraout_RDX;
    if (1 < (int)__a->max_length) {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      mode = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                       (pIVar1,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int
                       );
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__AspectRatio(__c,value,mode,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Margin>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Margin_b__38_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b25980

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Margin_b__38_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  float value;
  
  if (Il2CppMethodInitialized_07547156 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547156 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      CustomLogic_CustomLogicVisualElementBuiltin__MarginLeft(__c,value,percentage,method_00);
      CustomLogic_CustomLogicVisualElementBuiltin__MarginTop(__c,value,percentage,method_01);
      CustomLogic_CustomLogicVisualElementBuiltin__MarginRight(__c,value,percentage,method_02);
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__MarginBottom(__c,value,percentage,method_03);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MarginLeft>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MarginLeft_b__39_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b25aa0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MarginLeft_b__39_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547157 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547157 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__MarginLeft(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MarginTop>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MarginTop_b__40_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b25b90

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MarginTop_b__40_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547158 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547158 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__MarginTop(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MarginRight>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MarginRight_b__41_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b25c80

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MarginRight_b__41_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547159 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547159 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__MarginRight(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MarginBottom>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MarginBottom_b__42_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b25d70

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MarginBottom_b__42_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754715a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754715a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__MarginBottom(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Padding>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Padding_b__43_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b25e60

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Padding_b__43_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  float value;
  
  if (Il2CppMethodInitialized_0754715b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754715b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      CustomLogic_CustomLogicVisualElementBuiltin__PaddingLeft(__c,value,percentage,method_00);
      CustomLogic_CustomLogicVisualElementBuiltin__PaddingTop(__c,value,percentage,method_01);
      CustomLogic_CustomLogicVisualElementBuiltin__PaddingRight(__c,value,percentage,method_02);
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__PaddingBottom(__c,value,percentage,method_03);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__PaddingLeft>b__44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__PaddingLeft_b__44_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b25f80

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__PaddingLeft_b__44_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754715c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754715c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__PaddingLeft(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__PaddingTop>b__45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__PaddingTop_b__45_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26070

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__PaddingTop_b__45_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754715d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754715d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__PaddingTop(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__PaddingRight>b__46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__PaddingRight_b__46_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26160

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__PaddingRight_b__46_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754715e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754715e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__PaddingRight(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__PaddingBottom>b__47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__PaddingBottom_b__47_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26250

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__PaddingBottom_b__47_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754715f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754715f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 2) {
      percentage = false;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__PaddingBottom(__c,value,percentage,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FontStyle>b__48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FontStyle_b__48_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26340

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FontStyle_b__48_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547160 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547160 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__FontStyle(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FontSize>b__49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FontSize_b__49_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b263d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b264d2: movss xmm0, dword ptr [rsp + 0xc]

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FontSize_b__49_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  int32_t scaleMode;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  float value;
  
  if (Il2CppMethodInitialized_07547161 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547161 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    scaleMode = 0;
    if ((int)__a->max_length < 2) {
      percentage = false;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                             (pIVar1,(MethodInfo_34BD860 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if (2 < (int)__a->max_length) {
        pIVar1 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        scaleMode = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                              (pIVar1,(MethodInfo_34BDC20 *)
                                      MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      }
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__FontSize(__c,value,percentage,scaleMode,method);
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Color>b__50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Color_b__50_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26510

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Color_b__50_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547162 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547162 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    color = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__Color(__c,color,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextAlign>b__51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextAlign_b__51_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b265a0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextAlign_b__51_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547163 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547163 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextAlign(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextWrap>b__52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextWrap_b__52_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26630

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextWrap_b__52_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  System_Object_array *extraout_RDX;
  System_Object_array *method_00;
  System_Object_array *extraout_RDX_00;
  
  method_00 = __a;
  if (Il2CppMethodInitialized_07547164 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547164 = '\x01';
    method_00 = extraout_RDX;
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      value = true;
    }
    else {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool)
      ;
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextWrap(__c,value,(MethodInfo *)method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextOverflow>b__53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextOverflow_b__53_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b266d0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextOverflow_b__53_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547165 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547165 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextOverflow(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextOutlineWidth>b__54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextOutlineWidth_b__54_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26760

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextOutlineWidth_b__54_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547166 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547166 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextOutlineWidth(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextOutlineColor>b__55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextOutlineColor_b__55_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b267f0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextOutlineColor_b__55_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547167 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547167 = '\x01';
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
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextOutlineColor(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextShadowColor>b__56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextShadowColor_b__56_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26880

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextShadowColor_b__56_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547168 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547168 = '\x01';
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
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextShadowColor(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextShadowOffset>b__57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextShadowOffset_b__57_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26910

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextShadowOffset_b__57_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float horizontal;
  float vertical;
  
  if (Il2CppMethodInitialized_07547169 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547169 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b269bd:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    horizontal = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (obj,(MethodInfo_34BDFE0 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__a->max_length & 0xfffffffe) != 0) {
      method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
      vertical = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (__a->m_Items[1],
                            (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
      ;
      if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextShadowOffset
                           (__c,horizontal,vertical,method_00);
        return (Il2CppObject *)pCVar1;
      }
      goto label_05b269bd;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextShadowHorizontalOffset>b__58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextShadowHorizontalOffset_b__58_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b269d0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextShadowHorizontalOffset_b__58_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754716a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754716a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextShadowHorizontalOffset(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextShadowVerticalOffset>b__59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextShadowVerticalOffset_b__59_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26a60

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextShadowVerticalOffset_b__59_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754716b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754716b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextShadowVerticalOffset(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextShadowBlurRadius>b__60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextShadowBlurRadius_b__60_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26af0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextShadowBlurRadius_b__60_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754716c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754716c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextShadowBlurRadius(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextLetterSpacing>b__61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextLetterSpacing_b__61_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26b80

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextLetterSpacing_b__61_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754716d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754716d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextLetterSpacing(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextWordSpacing>b__62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextWordSpacing_b__62_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26c10

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextWordSpacing_b__62_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754716e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754716e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextWordSpacing(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextParagraphSpacing>b__63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextParagraphSpacing_b__63_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26ca0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextParagraphSpacing_b__63_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754716f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754716f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextParagraphSpacing(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BackgroundColor>b__64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BackgroundColor_b__64_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26d30

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BackgroundColor_b__64_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547170 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547170 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    color = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BackgroundColor(__c,color,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetBackgroundImage>b__65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__SetBackgroundImage_b__65_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26dc0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__SetBackgroundImage_b__65_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicImageBuiltin_o *image;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547171 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicImageBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547171 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    image = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicImageBuiltin);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__SetBackgroundImage(__c,image,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderColor>b__66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderColor_b__66_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26e50

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderColor_b__66_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  
  if (Il2CppMethodInitialized_07547172 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547172 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    color = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      CustomLogic_CustomLogicVisualElementBuiltin__BorderColorLeft(__c,color,method_00);
      CustomLogic_CustomLogicVisualElementBuiltin__BorderColorTop(__c,color,method_01);
      CustomLogic_CustomLogicVisualElementBuiltin__BorderColorRight(__c,color,method_02);
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderColorBottom(__c,color,method_03);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderColorLeft>b__67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderColorLeft_b__67_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26f00

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderColorLeft_b__67_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547173 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547173 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    color = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderColorLeft(__c,color,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderColorTop>b__68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderColorTop_b__68_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b26f90

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderColorTop_b__68_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547174 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547174 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    color = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderColorTop(__c,color,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderColorRight>b__69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderColorRight_b__69_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b27020

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderColorRight_b__69_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547175 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547175 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    color = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderColorRight(__c,color,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderColorBottom>b__70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderColorBottom_b__70_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b270b0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderColorBottom_b__70_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547176 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547176 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    color = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderColorBottom(__c,color,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderWidth>b__71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderWidth_b__71_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b27140

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderWidth_b__71_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547177 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547177 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthLeft(__c,value,method_00);
      CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthTop(__c,value,method_00);
      CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthRight(__c,value,method_00);
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthBottom(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderWidthLeft>b__72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderWidthLeft_b__72_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b27200

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderWidthLeft_b__72_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547178 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547178 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthLeft(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderWidthTop>b__73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderWidthTop_b__73_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b27290

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderWidthTop_b__73_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547179 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547179 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthTop(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderWidthRight>b__74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderWidthRight_b__74_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b27320

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderWidthRight_b__74_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754717a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754717a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthRight(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderWidthBottom>b__75_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderWidthBottom_b__75_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b273b0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderWidthBottom_b__75_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754717b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754717b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthBottom(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderRadius>b__76_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderRadius_b__76_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b27440

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderRadius_b__76_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754717c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754717c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopLeft(__c,value,method_00);
      CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopRight(__c,value,method_00);
      CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomLeft(__c,value,method_00);
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomRight(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderRadiusTopLeft>b__77_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderRadiusTopLeft_b__77_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b27500

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderRadiusTopLeft_b__77_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754717d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754717d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopLeft(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderRadiusTopRight>b__78_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderRadiusTopRight_b__78_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b27590

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderRadiusTopRight_b__78_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754717e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754717e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopRight(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderRadiusBottomLeft>b__79_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderRadiusBottomLeft_b__79_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b27620

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderRadiusBottomLeft_b__79_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_0754717f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754717f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomLeft(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderRadiusBottomRight>b__80_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderRadiusBottomRight_b__80_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b276b0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderRadiusBottomRight_b__80_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07547180 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547180 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomRight(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__OverflowX>b__81_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__OverflowX_b__81_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b27740

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__OverflowX_b__81_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547181 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547181 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__OverflowX(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__OverflowY>b__82_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__OverflowY_b__82_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b277d0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__OverflowY_b__82_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547182 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547182 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__OverflowY(__c,value,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTransformOrigin>b__83_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__SetTransformOrigin_b__83_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b27860

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__SetTransformOrigin_b__83_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float x;
  float y;
  
  if (Il2CppMethodInitialized_07547183 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547183 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b2796a:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    x = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                  (pIVar1,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__a->max_length & 0xfffffffe) != 0) {
      y = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__a->m_Items[1],
                     (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if ((int)__a->max_length < 3) {
        percentage = false;
        method_00 = extraout_RDX;
      }
      else {
        pIVar1 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                               (pIVar1,(MethodInfo_34BD860 *)
                                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
        method_00 = extraout_RDX_00;
      }
      if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
        pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__SetTransformOrigin(__c,x,y,percentage,method_00)
        ;
        return (Il2CppObject *)pCVar2;
      }
      goto label_05b2796a;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransformTranslate>b__84_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TransformTranslate_b__84_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b27980

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TransformTranslate_b__84_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool percentage;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float x;
  float y;
  
  if (Il2CppMethodInitialized_07547184 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547184 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b27a8a:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    x = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                  (pIVar1,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__a->max_length & 0xfffffffe) != 0) {
      y = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__a->m_Items[1],
                     (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if ((int)__a->max_length < 3) {
        percentage = false;
        method_00 = extraout_RDX;
      }
      else {
        pIVar1 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        percentage = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                               (pIVar1,(MethodInfo_34BD860 *)
                                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
        method_00 = extraout_RDX_00;
      }
      if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
        pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__TransformTranslate(__c,x,y,percentage,method_00)
        ;
        return (Il2CppObject *)pCVar2;
      }
      goto label_05b27a8a;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransformScale>b__85_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TransformScale_b__85_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b27aa0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TransformScale_b__85_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float x;
  float y;
  
  if (Il2CppMethodInitialized_07547185 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547185 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b27b4d:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    x = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                  (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__a->max_length & 0xfffffffe) != 0) {
      method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
      y = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__a->m_Items[1],
                     (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TransformScale(__c,x,y,method_00);
        return (Il2CppObject *)pCVar1;
      }
      goto label_05b27b4d;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransformRotate>b__86_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TransformRotate_b__86_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b27b60

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TransformRotate_b__86_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t angleUnit;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  float angle;
  
  if (Il2CppMethodInitialized_07547186 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547186 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b27c1c:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    angle = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__a->max_length & 0xfffffffe) != 0) {
      angleUnit = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                            (__a->m_Items[1],
                             (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TransformRotate(__c,angle,angleUnit,method_00);
        return (Il2CppObject *)pCVar1;
      }
      goto label_05b27c1c;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5b1ac10

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicVisualElementBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_075470dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"TextOutlineColor");
    il2cpp_codegen_initialize_runtime_metadata(&"MarginTop");
    il2cpp_codegen_initialize_runtime_metadata(&"Remove");
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    il2cpp_codegen_initialize_runtime_metadata(&"AlignSelf");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterFocusInEventCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterFocusOutEventCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveFromHierarchy");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterClickEventCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxWidth");
    il2cpp_codegen_initialize_runtime_metadata(&"TransformScale");
    il2cpp_codegen_initialize_runtime_metadata(&"FontSize");
    il2cpp_codegen_initialize_runtime_metadata(&"AlignItems");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexShrink");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderRadius");
    il2cpp_codegen_initialize_runtime_metadata(&"AspectRatio");
    il2cpp_codegen_initialize_runtime_metadata(&"TextWrap");
    il2cpp_codegen_initialize_runtime_metadata(&"MarginBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"JustifyContent");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxHeight");
    il2cpp_codegen_initialize_runtime_metadata(&"OverflowX");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexWrap");
    il2cpp_codegen_initialize_runtime_metadata(&"SetBackgroundImage");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderWidthLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TextShadowVerticalOffset");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderWidthTop");
    il2cpp_codegen_initialize_runtime_metadata(&"TextShadowHorizontalOffset");
    il2cpp_codegen_initialize_runtime_metadata(&"TextAlign");
    il2cpp_codegen_initialize_runtime_metadata(&"OverflowY");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderWidth");
    il2cpp_codegen_initialize_runtime_metadata(&"ChildCount");
    il2cpp_codegen_initialize_runtime_metadata(&"FontStyle");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderColorTop");
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexGrow");
    il2cpp_codegen_initialize_runtime_metadata(&"PaddingRight");
    il2cpp_codegen_initialize_runtime_metadata(&"TextLetterSpacing");
    il2cpp_codegen_initialize_runtime_metadata(&"MinHeight");
    il2cpp_codegen_initialize_runtime_metadata(&"MinWidth");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"TransitionDuration");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderWidthBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"PaddingBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"Active");
    il2cpp_codegen_initialize_runtime_metadata(&"TransformTranslate");
    il2cpp_codegen_initialize_runtime_metadata(&"TextShadowBlurRadius");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterMouseLeaveEventCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderRadiusTopRight");
    il2cpp_codegen_initialize_runtime_metadata(&"PaddingTop");
    il2cpp_codegen_initialize_runtime_metadata(&"PaddingLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Margin");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderColor");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterMouseEnterEventCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderRadiusBottomLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Width");
    il2cpp_codegen_initialize_runtime_metadata(&"QueryByName");
    il2cpp_codegen_initialize_runtime_metadata(&"Left");
    il2cpp_codegen_initialize_runtime_metadata(&"Bottom");
    il2cpp_codegen_initialize_runtime_metadata(&"TextShadowColor");
    il2cpp_codegen_initialize_runtime_metadata(&"MarginRight");
    il2cpp_codegen_initialize_runtime_metadata(&"GetElementAt");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"MarginLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TextWordSpacing");
    il2cpp_codegen_initialize_runtime_metadata(&"QueryByClassName");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderColorLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTransformOrigin");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderColorBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"TextShadowOffset");
    il2cpp_codegen_initialize_runtime_metadata(&"TextOutlineWidth");
    il2cpp_codegen_initialize_runtime_metadata(&"TextParagraphSpacing");
    il2cpp_codegen_initialize_runtime_metadata(&"TextOverflow");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderWidthRight");
    il2cpp_codegen_initialize_runtime_metadata(&"Opacity");
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"TransformRotate");
    il2cpp_codegen_initialize_runtime_metadata(&"Padding");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderRadiusBottomRight");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderRadiusTopLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Height");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderColorRight");
    Il2CppMethodInitialized_075470dd = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x933e48c7) {
    if (uVar2 < 0x3b42dfc0) {
      if (uVar2 < 0x175fb728) {
        if (uVar2 < 0x912e1f5) {
          if (uVar2 < 0x154c162) {
            if (uVar2 == 0xe19411) {
              bVar1 = System_String__op_Equality(name,"BorderColorTop",(MethodInfo *)0x0);
              if (bVar1) {
                pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
                if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
                }
                pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorTop
                                   ((MethodInfo *)pCVar6);
                return (CustomLogic_ICLMemberBinding_o *)pCVar3;
              }
            }
            else if (uVar2 == 0x154c161) {
              bVar1 = System_String__op_Equality(name,"TextShadowColor",(MethodInfo *)0x0);
              if (bVar1) {
                pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
                if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
                }
                pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowColor
                                   ((MethodInfo *)pCVar6);
                return (CustomLogic_ICLMemberBinding_o *)pCVar3;
              }
            }
          }
          else if (uVar2 == 0x4a57fc2) {
            bVar1 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Clear
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x736dd56) {
            bVar1 = System_String__op_Equality(name,"Padding",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Padding
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x912e1f4) {
            bVar1 = System_String__op_Equality(name,"GetElementAt",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__GetElementAt
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 < 0xaaf7cfa) {
          if (uVar2 == 0x99b73dc) {
            bVar1 = System_String__op_Equality(name,"Top",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Top
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0xaaf7cf9) {
            bVar1 = System_String__op_Equality(name,"BorderWidth",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidth
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0xbdcf7a2) {
          bVar1 = System_String__op_Equality(name,"MarginLeft",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginLeft
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x16378c9f) {
          bVar1 = System_String__op_Equality(name,"SetTransformOrigin",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__SetTransformOrigin
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x175fb727) {
          bVar1 = System_String__op_Equality(name,"BorderRadiusBottomLeft",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusBottomLeft
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x221f26c1) {
        if (uVar2 < 0x1e9e9f86) {
          if (uVar2 == 0x1bd13562) {
            bVar1 = System_String__op_Equality(name,"Height",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Height
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x1e9e9f85) {
            bVar1 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Right
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x1f89134f) {
          bVar1 = System_String__op_Equality(name,"Active",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Active
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x21a5901d) {
          bVar1 = System_String__op_Equality(name,"Remove",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Remove
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x221f26c0) {
          bVar1 = System_String__op_Equality(name,"RemoveFromHierarchy",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RemoveFromHierarchy
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x3040cf54) {
        if (uVar2 == 0x22b5f34a) {
          bVar1 = System_String__op_Equality(name,"Bottom",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Bottom
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x2e56c2bc) {
          bVar1 = System_String__op_Equality(name,"PaddingRight",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingRight
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x3040cf53) {
          bVar1 = System_String__op_Equality(name,"FlexShrink",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexShrink
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x380ec7b3) {
        bVar1 = System_String__op_Equality(name,"PaddingLeft",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingLeft
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x3841413d) {
        bVar1 = System_String__op_Equality(name,"BorderColorBottom",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorBottom
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x3b42dfbf) {
        bVar1 = System_String__op_Equality(name,"Width",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Width
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x623289d4) {
      if (uVar2 < 0x4872d0d9) {
        if (uVar2 < 0x3dcadc9d) {
          if (uVar2 == 0x3d51a7f8) {
            bVar1 = System_String__op_Equality(name,"AspectRatio",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__AspectRatio
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x3dcadc9c) {
            bVar1 = System_String__op_Equality(name,"TextOverflow",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextOverflow
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x4051a91f) {
          bVar1 = System_String__op_Equality(name,"TextAlign",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextAlign
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x4231df34) {
          bVar1 = System_String__op_Equality(name,"MarginBottom",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginBottom
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x4872d0d8) {
          bVar1 = System_String__op_Equality(name,"BorderRadiusBottomRight",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusBottomRight
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x54b7f689) {
        if (uVar2 == 0x517ab5aa) {
          bVar1 = System_String__op_Equality(name,"AlignItems",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__AlignItems
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x54b7f688) {
          bVar1 = System_String__op_Equality(name,"BorderWidthTop",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthTop
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x592a4941) {
        bVar1 = System_String__op_Equality(name,"Visible",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Visible
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x5cd165a7) {
        bVar1 = System_String__op_Equality(name,"TextWordSpacing",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextWordSpacing
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x623289d3) {
        bVar1 = System_String__op_Equality(name,"MaxWidth",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MaxWidth
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x7c58895b) {
      if (uVar2 < 0x67bd6402) {
        if (uVar2 == 0x63b03bb4) {
          bVar1 = System_String__op_Equality(name,"BorderWidthLeft",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthLeft
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x67bd6401) {
          bVar1 = System_String__op_Equality(name,"PaddingTop",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingTop
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x6c164db5) {
        bVar1 = System_String__op_Equality(name,"FontStyle",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FontStyle
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x74bf49d8) {
        bVar1 = System_String__op_Equality(name,"TransformRotate",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransformRotate
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x7c58895a) {
        bVar1 = System_String__op_Equality(name,"TextWrap",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextWrap
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x8371fa28) {
      if (uVar2 == 0x8098b0d8) {
        bVar1 = System_String__op_Equality(name,"AlignSelf",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__AlignSelf
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x826b7e5c) {
        bVar1 = System_String__op_Equality(name,"TextOutlineWidth",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextOutlineWidth
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x8371fa27) {
        bVar1 = System_String__op_Equality(name,"TextOutlineColor",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextOutlineColor
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x8e7f220d) {
      bVar1 = System_String__op_Equality(name,"PaddingBottom",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingBottom
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x92773890) {
      bVar1 = System_String__op_Equality(name,"Left",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Left
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x933e48c6) {
      bVar1 = System_String__op_Equality(name,"BorderColor",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColor
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xc476866e) {
    if (uVar2 < 0xb045c9bc) {
      if (uVar2 < 0x9f6bc249) {
        if (uVar2 < 0x9921c1dd) {
          if (uVar2 == 0x98c61698) {
            bVar1 = System_String__op_Equality(name,"JustifyContent",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__JustifyContent
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x9921c1dc) {
            bVar1 = System_String__op_Equality(name,"ChildCount",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreatePropertyBinding__ChildCount
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
        }
        else if (uVar2 == 0x9ab59d8d) {
          bVar1 = System_String__op_Equality(name,"TextShadowBlurRadius",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowBlurRadius
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x9dc3aa14) {
          bVar1 = System_String__op_Equality(name,"Add",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Add
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x9f6bc248) {
          bVar1 = System_String__op_Equality(name,"MinHeight",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MinHeight
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0xa29623c4) {
        if (uVar2 == 0xa26a44e1) {
          bVar1 = System_String__op_Equality(name,"FontSize",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FontSize
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0xa29623c3) {
          bVar1 = System_String__op_Equality(name,"BorderColorLeft",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorLeft
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0xa44eab36) {
        bVar1 = System_String__op_Equality(name,"BorderWidthBottom",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthBottom
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xab77dd0e) {
        bVar1 = System_String__op_Equality(name,"MaxHeight",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MaxHeight
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xb045c9bb) {
        bVar1 = System_String__op_Equality(name,"RegisterClickEventCallback",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterClickEventCallback
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xc0017a9f) {
      if (uVar2 < 0xb608da5e) {
        if (uVar2 == 0xb1d5595f) {
          bVar1 = System_String__op_Equality(name,"TextLetterSpacing",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextLetterSpacing
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0xb608da5d) {
          bVar1 = System_String__op_Equality(name,"FlexGrow",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexGrow
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0xb8db521d) {
        bVar1 = System_String__op_Equality(name,"QueryByName",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__QueryByName
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xb8e9fe05) {
        bVar1 = System_String__op_Equality(name,"BorderRadius",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadius
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xc0017a9e) {
        bVar1 = System_String__op_Equality(name,"RegisterMouseEnterEventCallback",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterMouseEnterEventCallback
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xc1c6e85f) {
      if (uVar2 == 0xc014fb96) {
        bVar1 = System_String__op_Equality(name,"OverflowY",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__OverflowY
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xc114fd29) {
        bVar1 = System_String__op_Equality(name,"OverflowX",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__OverflowX
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xc1c6e85e) {
        bVar1 = System_String__op_Equality(name,"TransitionDuration",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransitionDuration
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xc1da6f76) {
      bVar1 = System_String__op_Equality(name,"RegisterFocusInEventCallback",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterFocusInEventCallback
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xc24c3be7) {
      bVar1 = System_String__op_Equality(name,"FlexDirection",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexDirection
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xc476866d) {
      bVar1 = System_String__op_Equality(name,"RegisterMouseLeaveEventCallback",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterMouseLeaveEventCallback
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xe0a2f633) {
    if (uVar2 < 0xd61c1c80) {
      if (uVar2 < 0xd1496d31) {
        if (uVar2 == 0xc4cc799b) {
          bVar1 = System_String__op_Equality(name,"Margin",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Margin
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0xd1496d30) {
          bVar1 = System_String__op_Equality(name,"BackgroundColor",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BackgroundColor
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0xd14dd06b) {
        bVar1 = System_String__op_Equality(name,"TransformTranslate",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransformTranslate
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xd46a8ee6) {
        bVar1 = System_String__op_Equality(name,"BorderRadiusTopRight",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusTopRight
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xd61c1c7f) {
        bVar1 = System_String__op_Equality(name,"RegisterFocusOutEventCallback",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterFocusOutEventCallback
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xd9fedba6) {
      if (uVar2 == 0xd6c2f336) {
        bVar1 = System_String__op_Equality(name,"FlexWrap",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexWrap
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xd821b21d) {
        bVar1 = System_String__op_Equality(name,"QueryByClassName",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__QueryByClassName
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xd9fedba5) {
        bVar1 = System_String__op_Equality(name,"TextShadowHorizontalOffset",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowHorizontalOffset
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xdaf4ac3f) {
      bVar1 = System_String__op_Equality(name,"TextShadowVerticalOffset",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowVerticalOffset
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xde1f0406) {
      bVar1 = System_String__op_Equality(name,"Opacity",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Opacity
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe0a2f632) {
      bVar1 = System_String__op_Equality(name,"MarginTop",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginTop
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xe9c5ec6a) {
    if (uVar2 < 0xe5b43cf9) {
      if (uVar2 == 0xe0a5d4d5) {
        bVar1 = System_String__op_Equality(name,"TextParagraphSpacing",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextParagraphSpacing
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xe5b43cf8) {
        bVar1 = System_String__op_Equality(name,"Color",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Color
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xe6977c61) {
      bVar1 = System_String__op_Equality(name,"BorderWidthRight",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthRight
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe9999c8f) {
      bVar1 = System_String__op_Equality(name,"MarginRight",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginRight
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe9c5ec69) {
      bVar1 = System_String__op_Equality(name,"TextShadowOffset",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowOffset
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xf00299ae) {
    if (uVar2 == 0xed3ab484) {
      bVar1 = System_String__op_Equality(name,"SetBackgroundImage",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__SetBackgroundImage
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xee570bdc) {
      bVar1 = System_String__op_Equality(name,"Absolute",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Absolute
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xf00299ad) {
      bVar1 = System_String__op_Equality(name,"BorderRadiusTopLeft",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusTopLeft
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xfb0d0613) {
    bVar1 = System_String__op_Equality(name,"TransformScale",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransformScale
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xfe87ddd9) {
    bVar1 = System_String__op_Equality(name,"MinWidth",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MinWidth
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xffc019cc) {
    bVar1 = System_String__op_Equality(name,"BorderColorRight",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorRight
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicVisualElementBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreatePropertyBinding__ChildCount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreatePropertyBinding__ChildCount (const MethodInfo* method);
// 0x5b1cae0

CustomLogic_CLPropertyBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreatePropertyBinding__ChildCount(MethodInfo *method)

{
  System_Func_CustomLogicVisualElementBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings___CreatePropertyBinding__ChildCount_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object);
    Il2CppMethodInitialized_075470de = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings___CreatePropertyBinding__ChildCount_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVisualElementBuiltin
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVisualElementBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Add
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Add (const MethodInfo* method);
// 0x5b1cb80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1cbb5: jmp 0x5b1cc25

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Add(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Add_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470df = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Add_b__3_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Remove
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Remove (const MethodInfo* method);
// 0x5b1ccc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1ccf5: jmp 0x5b1cd65

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Remove(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Remove_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470e0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Remove_b__4_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RemoveFromHierarchy
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RemoveFromHierarchy (const MethodInfo* method);
// 0x5b1ce00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1ce35: jmp 0x5b1cea5

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RemoveFromHierarchy
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RemoveFromHierarch
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470e1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RemoveFromHierarch
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x5b1cf40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1cf75: jmp 0x5b1cfe5

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Clear_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470e2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Clear_b__6_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__GetElementAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__GetElementAt (const MethodInfo* method);
// 0x5b1d080
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1d0b5: jmp 0x5b1d125

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__GetElementAt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__GetElementAt_b__7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470e3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__GetElementAt_b__7
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__QueryByName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__QueryByName (const MethodInfo* method);
// 0x5b1d1c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1d1f5: jmp 0x5b1d265

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__QueryByName(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__QueryByName_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470e4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__QueryByName_b__8_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__QueryByClassName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__QueryByClassName (const MethodInfo* method);
// 0x5b1d300
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1d335: jmp 0x5b1d3a5

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__QueryByClassName
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__QueryByClassName_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470e5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__QueryByClassName_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RegisterMouseEnterEventCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterMouseEnterEventCallback (const MethodInfo* method);
// 0x5b1d440
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1d475: jmp 0x5b1d4e5

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterMouseEnterEventCallback
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RegisterMouseEnter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470e6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RegisterMouseEnter
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RegisterMouseLeaveEventCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterMouseLeaveEventCallback (const MethodInfo* method);
// 0x5b1d580
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1d5b5: jmp 0x5b1d625

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterMouseLeaveEventCallback
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RegisterMouseLeave
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470e7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RegisterMouseLeave
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RegisterClickEventCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterClickEventCallback (const MethodInfo* method);
// 0x5b1d6c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1d6f5: jmp 0x5b1d765

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterClickEventCallback
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RegisterClickEvent
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470e8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__12_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__12_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RegisterClickEvent
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__12_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RegisterFocusInEventCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterFocusInEventCallback (const MethodInfo* method);
// 0x5b1d800
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1d835: jmp 0x5b1d8a5

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterFocusInEventCallback
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RegisterFocusInEve
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470e9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__13_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__13_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RegisterFocusInEve
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__13_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RegisterFocusOutEventCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterFocusOutEventCallback (const MethodInfo* method);
// 0x5b1d940
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1d975: jmp 0x5b1d9e5

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterFocusOutEventCallback
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RegisterFocusOutEv
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470ea = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__14_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__14_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RegisterFocusOutEv
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__14_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Opacity
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Opacity (const MethodInfo* method);
// 0x5b1da80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1dab5: jmp 0x5b1db25

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Opacity(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Opacity_b__15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470eb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__15_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__15_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Opacity_b__15_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__15_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Active
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Active (const MethodInfo* method);
// 0x5b1dbc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1dbf5: jmp 0x5b1dc65

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Active(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Active_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470ec = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__16_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__16_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Active_b__16_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__16_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__16_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Visible
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Visible (const MethodInfo* method);
// 0x5b1dd00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1dd35: jmp 0x5b1dda5

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Visible(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Visible_b__17_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470ed = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__17_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__17_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Visible_b__17_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__17_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__17_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TransitionDuration
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransitionDuration (const MethodInfo* method);
// 0x5b1de40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1de78: jmp 0x5b1deeb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransitionDuration
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TransitionDuration
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470ee = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__18_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__18_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TransitionDuration
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__18_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__18_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Absolute
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Absolute (const MethodInfo* method);
// 0x5b1df80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1dfb8: jmp 0x5b1e02b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Absolute(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Absolute_b__19_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470ef = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__19_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__19_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Absolute_b__19_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__19_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__19_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Left
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Left (const MethodInfo* method);
// 0x5b1e0c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1e0f8: jmp 0x5b1e16b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Left(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Left_b__20_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470f0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__20_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__20_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Left_b__20_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__20_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__20_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Top
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Top (const MethodInfo* method);
// 0x5b1e200
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1e238: jmp 0x5b1e2ab

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Top(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Top_b__21_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470f1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__21_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__21_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Top_b__21_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__21_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__21_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Right
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Right (const MethodInfo* method);
// 0x5b1e340
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1e378: jmp 0x5b1e3eb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Right(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Right_b__22_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470f2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__22_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__22_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Right_b__22_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__22_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__22_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Bottom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Bottom (const MethodInfo* method);
// 0x5b1e480
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1e4b8: jmp 0x5b1e52b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Bottom(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Bottom_b__23_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470f3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__23_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__23_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Bottom_b__23_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__23_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__23_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FlexShrink
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexShrink (const MethodInfo* method);
// 0x5b1e5c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1e5f8: jmp 0x5b1e66b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexShrink(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FlexShrink_b__24_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470f4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__24_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__24_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FlexShrink_b__24_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__24_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__24_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FlexGrow
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexGrow (const MethodInfo* method);
// 0x5b1e700
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1e738: jmp 0x5b1e7ab

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexGrow(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FlexGrow_b__25_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470f5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__25_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__25_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FlexGrow_b__25_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__25_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__25_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FlexDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexDirection (const MethodInfo* method);
// 0x5b1e840
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1e878: jmp 0x5b1e8eb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexDirection(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FlexDirection_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470f6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__26_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__26_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FlexDirection_b__2
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__26_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__26_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FlexWrap
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexWrap (const MethodInfo* method);
// 0x5b1e980
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1e9b8: jmp 0x5b1ea2b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexWrap(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FlexWrap_b__27_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470f7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__27_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__27_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FlexWrap_b__27_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__27_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__27_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__AlignItems
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__AlignItems (const MethodInfo* method);
// 0x5b1eac0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1eaf8: jmp 0x5b1eb6b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__AlignItems(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__AlignItems_b__28_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470f8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__28_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__28_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__AlignItems_b__28_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__28_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__28_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__JustifyContent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__JustifyContent (const MethodInfo* method);
// 0x5b1ec00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1ec38: jmp 0x5b1ecab

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__JustifyContent
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__JustifyContent_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470f9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__29_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__29_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__JustifyContent_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__29_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__29_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__AlignSelf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__AlignSelf (const MethodInfo* method);
// 0x5b1ed40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1ed78: jmp 0x5b1edeb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__AlignSelf(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__AlignSelf_b__30_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470fa = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__30_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__30_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__AlignSelf_b__30_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__30_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__30_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Width
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Width (const MethodInfo* method);
// 0x5b1ee80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1eeb8: jmp 0x5b1ef2b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Width(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Width_b__31_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470fb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__31_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__31_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Width_b__31_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__31_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__31_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Height
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Height (const MethodInfo* method);
// 0x5b1efc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1eff8: jmp 0x5b1f06b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Height(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Height_b__32_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470fc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__32_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__32_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Height_b__32_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__32_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__32_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MinWidth
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MinWidth (const MethodInfo* method);
// 0x5b1f100
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1f138: jmp 0x5b1f1ab

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MinWidth(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MinWidth_b__33_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470fd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__33_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__33_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MinWidth_b__33_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__33_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__33_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MinHeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MinHeight (const MethodInfo* method);
// 0x5b1f240
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1f278: jmp 0x5b1f2eb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MinHeight(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MinHeight_b__34_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470fe = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__34_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__34_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MinHeight_b__34_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__34_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__34_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MaxWidth
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MaxWidth (const MethodInfo* method);
// 0x5b1f380
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1f3b8: jmp 0x5b1f42b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MaxWidth(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075470ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MaxWidth_b__35_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_075470ff = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__35_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__35_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MaxWidth_b__35_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__35_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__35_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MaxHeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MaxHeight (const MethodInfo* method);
// 0x5b1f4c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1f4f8: jmp 0x5b1f56b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MaxHeight(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547100 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MaxHeight_b__36_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547100 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__36_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__36_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MaxHeight_b__36_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__36_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__36_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__AspectRatio
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__AspectRatio (const MethodInfo* method);
// 0x5b1f600
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1f638: jmp 0x5b1f6ab

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__AspectRatio(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547101 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__AspectRatio_b__37
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547101 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__37_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__37_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__AspectRatio_b__37
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__37_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__37_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Margin
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Margin (const MethodInfo* method);
// 0x5b1f740
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1f778: jmp 0x5b1f7eb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Margin(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547102 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Margin_b__38_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547102 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__38_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__38_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Margin_b__38_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__38_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__38_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MarginLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginLeft (const MethodInfo* method);
// 0x5b1f880
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1f8b8: jmp 0x5b1f92b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginLeft(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547103 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MarginLeft_b__39_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547103 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__39_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__39_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MarginLeft_b__39_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__39_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__39_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MarginTop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginTop (const MethodInfo* method);
// 0x5b1f9c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1f9f8: jmp 0x5b1fa6b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginTop(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547104 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MarginTop_b__40_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547104 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__40_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__40_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MarginTop_b__40_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__40_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__40_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MarginRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginRight (const MethodInfo* method);
// 0x5b1fb00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1fb38: jmp 0x5b1fbab

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginRight(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547105 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MarginRight_b__41
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547105 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__41_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__41_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MarginRight_b__41
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__41_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__41_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MarginBottom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginBottom (const MethodInfo* method);
// 0x5b1fc40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1fc78: jmp 0x5b1fceb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginBottom(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547106 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MarginBottom_b__42
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547106 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__42_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__42_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MarginBottom_b__42
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__42_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__42_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Padding
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Padding (const MethodInfo* method);
// 0x5b1fd80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1fdb8: jmp 0x5b1fe2b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Padding(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547107 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Padding_b__43_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547107 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__43_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__43_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Padding_b__43_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__43_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__43_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__PaddingLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingLeft (const MethodInfo* method);
// 0x5b1fec0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1fef8: jmp 0x5b1ff6b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingLeft(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547108 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__PaddingLeft_b__44
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547108 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__44_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__44_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__PaddingLeft_b__44
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__44_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__44_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__PaddingTop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingTop (const MethodInfo* method);
// 0x5b20000
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b20038: jmp 0x5b200ab

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingTop(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547109 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__PaddingTop_b__45_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547109 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__45_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__45_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__PaddingTop_b__45_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__45_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__45_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__PaddingRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingRight (const MethodInfo* method);
// 0x5b20140
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b20178: jmp 0x5b201eb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingRight(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754710a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__PaddingRight_b__46
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754710a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__46_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__46_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__PaddingRight_b__46
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__46_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__46_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__PaddingBottom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingBottom (const MethodInfo* method);
// 0x5b20280
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b202b8: jmp 0x5b2032b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingBottom(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754710b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__PaddingBottom_b__4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754710b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__47_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__47_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__PaddingBottom_b__4
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__47_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__47_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FontStyle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FontStyle (const MethodInfo* method);
// 0x5b203c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b203f8: jmp 0x5b2046b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FontStyle(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754710c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FontStyle_b__48_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754710c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__48_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__48_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FontStyle_b__48_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__48_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__48_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FontSize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FontSize (const MethodInfo* method);
// 0x5b20500
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b20538: jmp 0x5b205ab

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FontSize(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754710d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FontSize_b__49_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754710d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__49_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__49_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FontSize_b__49_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__49_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__49_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Color
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Color (const MethodInfo* method);
// 0x5b20640
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b20678: jmp 0x5b206eb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Color(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754710e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Color_b__50_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754710e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__50_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__50_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Color_b__50_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__50_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__50_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextAlign
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextAlign (const MethodInfo* method);
// 0x5b20780
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b207b8: jmp 0x5b2082b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextAlign(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754710f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextAlign_b__51_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754710f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__51_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__51_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextAlign_b__51_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__51_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__51_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextWrap
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextWrap (const MethodInfo* method);
// 0x5b208c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b208f8: jmp 0x5b2096b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextWrap(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547110 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextWrap_b__52_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547110 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__52_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__52_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextWrap_b__52_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__52_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__52_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextOverflow
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextOverflow (const MethodInfo* method);
// 0x5b20a00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b20a38: jmp 0x5b20aab

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextOverflow(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547111 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextOverflow_b__53
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547111 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__53_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__53_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextOverflow_b__53
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__53_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__53_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextOutlineWidth
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextOutlineWidth (const MethodInfo* method);
// 0x5b20b40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b20b78: jmp 0x5b20beb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextOutlineWidth
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547112 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextOutlineWidth_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547112 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__54_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__54_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextOutlineWidth_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__54_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__54_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextOutlineColor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextOutlineColor (const MethodInfo* method);
// 0x5b20c80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b20cb8: jmp 0x5b20d2b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextOutlineColor
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547113 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextOutlineColor_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547113 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__55_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__55_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextOutlineColor_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__55_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__55_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextShadowColor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowColor (const MethodInfo* method);
// 0x5b20dc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b20df8: jmp 0x5b20e6b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowColor
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547114 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextShadowColor_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547114 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__56_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__56_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextShadowColor_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__56_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__56_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextShadowOffset
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowOffset (const MethodInfo* method);
// 0x5b20f00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b20f38: jmp 0x5b20fab

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowOffset
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547115 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextShadowOffset_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547115 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__57_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__57_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextShadowOffset_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__57_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__57_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextShadowHorizontalOffset
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowHorizontalOffset (const MethodInfo* method);
// 0x5b21040
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b21078: jmp 0x5b210eb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowHorizontalOffset
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547116 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextShadowHorizont
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547116 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__58_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__58_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextShadowHorizont
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__58_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__58_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextShadowVerticalOffset
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowVerticalOffset (const MethodInfo* method);
// 0x5b21180
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b211b8: jmp 0x5b2122b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowVerticalOffset
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547117 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextShadowVertical
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547117 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__59_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__59_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextShadowVertical
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__59_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__59_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextShadowBlurRadius
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowBlurRadius (const MethodInfo* method);
// 0x5b212c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b212f8: jmp 0x5b2136b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowBlurRadius
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547118 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextShadowBlurRadi
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547118 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__60_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__60_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextShadowBlurRadi
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__60_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__60_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextLetterSpacing
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextLetterSpacing (const MethodInfo* method);
// 0x5b21400
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b21438: jmp 0x5b214ab

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextLetterSpacing
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547119 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextLetterSpacing
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547119 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__61_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__61_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextLetterSpacing
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__61_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__61_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextWordSpacing
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextWordSpacing (const MethodInfo* method);
// 0x5b21540
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b21578: jmp 0x5b215eb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextWordSpacing
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754711a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextWordSpacing_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754711a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__62_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__62_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextWordSpacing_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__62_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__62_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextParagraphSpacing
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextParagraphSpacing (const MethodInfo* method);
// 0x5b21680
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b216b8: jmp 0x5b2172b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextParagraphSpacing
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754711b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextParagraphSpaci
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754711b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__63_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__63_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextParagraphSpaci
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__63_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__63_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BackgroundColor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BackgroundColor (const MethodInfo* method);
// 0x5b217c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b217f8: jmp 0x5b2186b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BackgroundColor
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754711c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BackgroundColor_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754711c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__64_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__64_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BackgroundColor_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__64_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__64_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__SetBackgroundImage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__SetBackgroundImage (const MethodInfo* method);
// 0x5b21900
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b21938: jmp 0x5b219ab

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__SetBackgroundImage
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754711d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__SetBackgroundImage
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754711d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__65_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__65_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__SetBackgroundImage
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__65_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__65_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderColor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColor (const MethodInfo* method);
// 0x5b21a40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b21a78: jmp 0x5b21aeb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColor(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754711e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderColor_b__66
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754711e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__66_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__66_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderColor_b__66
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__66_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__66_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderColorLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorLeft (const MethodInfo* method);
// 0x5b21b80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b21bb8: jmp 0x5b21c2b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorLeft
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754711f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderColorLeft_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754711f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__67_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__67_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderColorLeft_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__67_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__67_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderColorTop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorTop (const MethodInfo* method);
// 0x5b21cc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b21cf8: jmp 0x5b21d6b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorTop
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547120 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderColorTop_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547120 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__68_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__68_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderColorTop_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__68_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__68_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderColorRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorRight (const MethodInfo* method);
// 0x5b21e00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b21e38: jmp 0x5b21eab

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorRight
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547121 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderColorRight_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547121 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__69_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__69_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderColorRight_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__69_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__69_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderColorBottom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorBottom (const MethodInfo* method);
// 0x5b21f40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b21f78: jmp 0x5b21feb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorBottom
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547122 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderColorBottom
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547122 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__70_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__70_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderColorBottom
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__70_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__70_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderWidth
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidth (const MethodInfo* method);
// 0x5b22080
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b220b8: jmp 0x5b2212b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidth(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547123 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderWidth_b__71
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547123 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__71_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__71_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderWidth_b__71
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__71_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__71_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderWidthLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthLeft (const MethodInfo* method);
// 0x5b221c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b221f8: jmp 0x5b2226b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthLeft
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547124 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderWidthLeft_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547124 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__72_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__72_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderWidthLeft_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__72_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__72_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderWidthTop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthTop (const MethodInfo* method);
// 0x5b22300
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b22338: jmp 0x5b223ab

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthTop
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547125 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderWidthTop_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547125 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__73_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__73_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderWidthTop_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__73_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__73_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderWidthRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthRight (const MethodInfo* method);
// 0x5b22440
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b22478: jmp 0x5b224eb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthRight
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547126 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderWidthRight_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547126 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__74_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__74_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderWidthRight_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__74_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__74_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderWidthBottom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthBottom (const MethodInfo* method);
// 0x5b22580
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b225b8: jmp 0x5b2262b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthBottom
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547127 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderWidthBottom
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547127 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__75_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__75_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderWidthBottom
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__75_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__75_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderRadius
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadius (const MethodInfo* method);
// 0x5b226c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b226f8: jmp 0x5b2276b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadius(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547128 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderRadius_b__76
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547128 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__76_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__76_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderRadius_b__76
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__76_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__76_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderRadiusTopLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusTopLeft (const MethodInfo* method);
// 0x5b22800
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b22838: jmp 0x5b228ab

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusTopLeft
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547129 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderRadiusTopLef
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547129 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__77_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__77_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderRadiusTopLef
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__77_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__77_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderRadiusTopRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusTopRight (const MethodInfo* method);
// 0x5b22940
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b22978: jmp 0x5b229eb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusTopRight
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754712a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderRadiusTopRig
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754712a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__78_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__78_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderRadiusTopRig
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__78_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__78_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderRadiusBottomLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusBottomLeft (const MethodInfo* method);
// 0x5b22a80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b22ab8: jmp 0x5b22b2b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusBottomLeft
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754712b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderRadiusBottom
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754712b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__79_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__79_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderRadiusBottom
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__79_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__79_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderRadiusBottomRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusBottomRight (const MethodInfo* method);
// 0x5b22bc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b22bf8: jmp 0x5b22c6b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusBottomRight
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754712c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderRadiusBottom_71cb4d8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754712c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__80_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__80_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderRadiusBottom_71cb4d8
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__80_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__80_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__OverflowX
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__OverflowX (const MethodInfo* method);
// 0x5b22d00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b22d38: jmp 0x5b22dab

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__OverflowX(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754712d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__OverflowX_b__81_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754712d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__81_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__81_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__OverflowX_b__81_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__81_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__81_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__OverflowY
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__OverflowY (const MethodInfo* method);
// 0x5b22e40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b22e78: jmp 0x5b22eeb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__OverflowY(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754712e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__OverflowY_b__82_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754712e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__82_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__82_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__OverflowY_b__82_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__82_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__82_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__SetTransformOrigin
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__SetTransformOrigin (const MethodInfo* method);
// 0x5b22f80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b22fb8: jmp 0x5b2302b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__SetTransformOrigin
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754712f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__SetTransformOrigin
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754712f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__83_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__83_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__SetTransformOrigin
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__83_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__83_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TransformTranslate
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransformTranslate (const MethodInfo* method);
// 0x5b230c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b230f8: jmp 0x5b2316b

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransformTranslate
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547130 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TransformTranslate
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547130 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__84_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__84_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TransformTranslate
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__84_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__84_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TransformScale
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransformScale (const MethodInfo* method);
// 0x5b23200
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b23238: jmp 0x5b232ab

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransformScale
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547131 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TransformScale_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547131 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__85_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__85_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TransformScale_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__85_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__85_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TransformRotate
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransformRotate (const MethodInfo* method);
// 0x5b23340
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b23378: jmp 0x5b233eb

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransformRotate
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVisualElementBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547132 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TransformRotate_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547132 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__86_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__86_0;
  }
  if (__this == (System_Func_CustomLogicVisualElementBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicVisualElementBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TransformRotate_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c->static_fields;
    pCVar2->__9__86_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__86_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5b23480

void CustomLogic_CustomLogicVisualElementBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07547133 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"TextOutlineColor");
    il2cpp_codegen_initialize_runtime_metadata(&"MarginTop");
    il2cpp_codegen_initialize_runtime_metadata(&"Remove");
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    il2cpp_codegen_initialize_runtime_metadata(&"AlignSelf");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterFocusInEventCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterFocusOutEventCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveFromHierarchy");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterClickEventCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxWidth");
    il2cpp_codegen_initialize_runtime_metadata(&"TransformScale");
    il2cpp_codegen_initialize_runtime_metadata(&"FontSize");
    il2cpp_codegen_initialize_runtime_metadata(&"AlignItems");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexShrink");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderRadius");
    il2cpp_codegen_initialize_runtime_metadata(&"AspectRatio");
    il2cpp_codegen_initialize_runtime_metadata(&"TextWrap");
    il2cpp_codegen_initialize_runtime_metadata(&"MarginBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"JustifyContent");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxHeight");
    il2cpp_codegen_initialize_runtime_metadata(&"OverflowX");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexWrap");
    il2cpp_codegen_initialize_runtime_metadata(&"SetBackgroundImage");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderWidthLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TextShadowVerticalOffset");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderWidthTop");
    il2cpp_codegen_initialize_runtime_metadata(&"TextShadowHorizontalOffset");
    il2cpp_codegen_initialize_runtime_metadata(&"TextAlign");
    il2cpp_codegen_initialize_runtime_metadata(&"OverflowY");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderWidth");
    il2cpp_codegen_initialize_runtime_metadata(&"ChildCount");
    il2cpp_codegen_initialize_runtime_metadata(&"FontStyle");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderColorTop");
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexGrow");
    il2cpp_codegen_initialize_runtime_metadata(&"PaddingRight");
    il2cpp_codegen_initialize_runtime_metadata(&"TextLetterSpacing");
    il2cpp_codegen_initialize_runtime_metadata(&"MinHeight");
    il2cpp_codegen_initialize_runtime_metadata(&"MinWidth");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"TransitionDuration");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderWidthBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"PaddingBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"Active");
    il2cpp_codegen_initialize_runtime_metadata(&"TransformTranslate");
    il2cpp_codegen_initialize_runtime_metadata(&"TextShadowBlurRadius");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterMouseLeaveEventCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderRadiusTopRight");
    il2cpp_codegen_initialize_runtime_metadata(&"PaddingTop");
    il2cpp_codegen_initialize_runtime_metadata(&"PaddingLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Margin");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderColor");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterMouseEnterEventCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderRadiusBottomLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Width");
    il2cpp_codegen_initialize_runtime_metadata(&"QueryByName");
    il2cpp_codegen_initialize_runtime_metadata(&"Left");
    il2cpp_codegen_initialize_runtime_metadata(&"Bottom");
    il2cpp_codegen_initialize_runtime_metadata(&"TextShadowColor");
    il2cpp_codegen_initialize_runtime_metadata(&"MarginRight");
    il2cpp_codegen_initialize_runtime_metadata(&"GetElementAt");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"MarginLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TextWordSpacing");
    il2cpp_codegen_initialize_runtime_metadata(&"QueryByClassName");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderColorLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTransformOrigin");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderColorBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"TextShadowOffset");
    il2cpp_codegen_initialize_runtime_metadata(&"TextOutlineWidth");
    il2cpp_codegen_initialize_runtime_metadata(&"TextParagraphSpacing");
    il2cpp_codegen_initialize_runtime_metadata(&"TextOverflow");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderWidthRight");
    il2cpp_codegen_initialize_runtime_metadata(&"Opacity");
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"TransformRotate");
    il2cpp_codegen_initialize_runtime_metadata(&"Padding");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderRadiusBottomRight");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderRadiusTopLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Height");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderColorRight");
    Il2CppMethodInitialized_07547133 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ChildCount",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Add",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Remove",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RemoveFromHierarchy",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Clear",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetElementAt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QueryByName",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QueryByClassName",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RegisterMouseEnterEventCallback",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RegisterMouseLeaveEventCallback",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RegisterClickEventCallback",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RegisterFocusInEventCallback",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RegisterFocusOutEventCallback",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Opacity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Active",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Visible",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TransitionDuration",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Absolute",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Left",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Top",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Right",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Bottom",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FlexShrink",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FlexGrow",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FlexDirection",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FlexWrap",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AlignItems",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"JustifyContent",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AlignSelf",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Width",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Height",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MinWidth",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MinHeight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxWidth",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxHeight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AspectRatio",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Margin",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MarginLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MarginTop",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MarginRight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MarginBottom",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Padding",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PaddingLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PaddingTop",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PaddingRight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PaddingBottom",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FontStyle",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FontSize",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Color",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextAlign",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextWrap",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextOverflow",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextOutlineWidth",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextOutlineColor",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextShadowColor",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextShadowOffset",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextShadowHorizontalOffset",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextShadowVerticalOffset",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextShadowBlurRadius",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextLetterSpacing",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextWordSpacing",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextParagraphSpacing",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BackgroundColor",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetBackgroundImage",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BorderColor",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BorderColorLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BorderColorTop",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BorderColorRight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BorderColorBottom",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BorderWidth",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BorderWidthLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BorderWidthTop",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BorderWidthRight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BorderWidthBottom",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BorderRadius",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BorderRadiusTopLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BorderRadiusTopRight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BorderRadiusBottomLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BorderRadiusBottomRight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OverflowX",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OverflowY",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetTransformOrigin",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TransformTranslate",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TransformScale",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TransformRotate",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$<__CreatePropertyBinding__ChildCount>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings_____CreatePropertyBinding__ChildCount_g____getter_2_0 (CustomLogic_CustomLogicVisualElementBuiltin_o* __i, const MethodInfo* method);
// 0x5b24030

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_____CreatePropertyBinding__ChildCount_g____getter_2_0
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) ||
     (__this = (__i->fields)._visualElement, __this == (UnityEngine_UIElements_VisualElement_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_VisualElement__get_childCount(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c___cctor (const MethodInfo* method);
// 0x5b27c30

void CustomLogic_CustomLogicVisualElementBuiltin___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547187 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c);
    Il2CppMethodInitialized_07547187 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c->static_fields->__9 =
       (CustomLogic_CustomLogicVisualElementBuiltin___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c___ctor (CustomLogic_CustomLogicVisualElementBuiltin___c_o* __this, const MethodInfo* method);
// 0x5b27ca0

void CustomLogic_CustomLogicVisualElementBuiltin___c___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c$$<AspectRatio>b__40_2
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c___AspectRatio_b__40_2 (CustomLogic_CustomLogicVisualElementBuiltin___c_o* __this, UnityEngine_UIElements_GeometryChangedEvent_o* evt, const MethodInfo* method);
// 0x5b27cb0

void CustomLogic_CustomLogicVisualElementBuiltin___c___AspectRatio_b__40_2
               (CustomLogic_CustomLogicVisualElementBuiltin___c_o *__this,
               UnityEngine_UIElements_GeometryChangedEvent_o *evt,MethodInfo *method)

{
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass13_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0___ctor (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x5b14ec0

void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass13_0$$<RegisterMouseEnterEventCallback>b__0
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0___RegisterMouseEnterEventCallback_b__0 (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0_o* __this, UnityEngine_UIElements_MouseEnterEvent_o* evt, const MethodInfo* method);
// 0x5b27cc0

void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0___RegisterMouseEnterEventCallback_b__0
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0_o *__this,
               UnityEngine_UIElements_MouseEnterEvent_o *evt,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  
  if (Il2CppMethodInitialized_07547188 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07547188 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
            (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass14_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0___ctor (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x5b14fb0

void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass14_0$$<RegisterMouseLeaveEventCallback>b__0
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0___RegisterMouseLeaveEventCallback_b__0 (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0_o* __this, UnityEngine_UIElements_MouseLeaveEvent_o* evt, const MethodInfo* method);
// 0x5b27d50

void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0___RegisterMouseLeaveEventCallback_b__0
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0_o *__this,
               UnityEngine_UIElements_MouseLeaveEvent_o *evt,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  
  if (Il2CppMethodInitialized_07547189 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07547189 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
            (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass15_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0___ctor (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x5b150a0

void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass15_0$$<RegisterClickEventCallback>b__0
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0___RegisterClickEventCallback_b__0 (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0_o* __this, UnityEngine_UIElements_ClickEvent_o* evt, const MethodInfo* method);
// 0x5b27de0

void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0___RegisterClickEventCallback_b__0
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0_o *__this,
               UnityEngine_UIElements_ClickEvent_o *evt,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  
  if (Il2CppMethodInitialized_0754718a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_0754718a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
            (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass16_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0___ctor (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5b15190

void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass16_0$$<RegisterFocusInEventCallback>b__0
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0___RegisterFocusInEventCallback_b__0 (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0_o* __this, UnityEngine_UIElements_FocusInEvent_o* evt, const MethodInfo* method);
// 0x5b27e70

void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0___RegisterFocusInEventCallback_b__0
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0_o *__this,
               UnityEngine_UIElements_FocusInEvent_o *evt,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  
  if (Il2CppMethodInitialized_0754718b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_0754718b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
            (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass17_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0___ctor (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x5b15280

void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass17_0$$<RegisterFocusOutEventCallback>b__0
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0___RegisterFocusOutEventCallback_b__0 (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0_o* __this, UnityEngine_UIElements_FocusOutEvent_o* evt, const MethodInfo* method);
// 0x5b27f00

void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0___RegisterFocusOutEventCallback_b__0
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0_o *__this,
               UnityEngine_UIElements_FocusOutEvent_o *evt,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  
  if (Il2CppMethodInitialized_0754718c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_0754718c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
            (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass40_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0___ctor (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0_o* __this, const MethodInfo* method);
// 0x5b171e0

void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass40_0$$<AspectRatio>b__0
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0___AspectRatio_b__0 (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0_o* __this, UnityEngine_UIElements_GeometryChangedEvent_o* evt, const MethodInfo* method);
// 0x5b27f90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b28059: nop dword ptr [rax]

void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0___AspectRatio_b__0
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0_o *__this,
               UnityEngine_UIElements_GeometryChangedEvent_o *evt,MethodInfo *method)

{
  undefined4 uVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar5;
  ulong uVar6;
  long lVar7;
  UnityEngine_UIElements_StyleLength_o value;
  
  if (Il2CppMethodInitialized_0754718d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_0754718d = '\x01';
  }
  pCVar2 = (__this->fields).__4__this;
  if ((pCVar2 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) &&
     (__this_00 = (pCVar2->fields)._visualElement, __this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0)
     ) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if (evt != (UnityEngine_UIElements_GeometryChangedEvent_o *)0x0) {
      uVar1 = (evt->fields)._newRect_k__BackingField.fields.m_Width;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      value = UnityEngine_UIElements_StyleLength__op_Implicit_6b13540
                        ((float)uVar1 / (__this->fields).value,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar3 = obj->klass;
        uVar6 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar6 != 0) {
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          lVar7 = 0;
          do {
            if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar4->interfaceType + lVar7) ==
                TypeInfo_UnityEngine_UIElements_IStyle) {
              pVVar5 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar7) + 0x43);
              goto label_05b28095;
            }
            lVar7 = lVar7 + 0x10;
          } while (uVar6 * 0x10 != lVar7);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x43);
label_05b28095:
        (*pVVar5->methodPtr)(obj,value,pVVar5->method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass40_0$$<AspectRatio>b__1
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0___AspectRatio_b__1 (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0_o* __this, UnityEngine_UIElements_GeometryChangedEvent_o* evt, const MethodInfo* method);
// 0x5b280c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2818d: nop dword ptr [rax]

void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0___AspectRatio_b__1
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0_o *__this,
               UnityEngine_UIElements_GeometryChangedEvent_o *evt,MethodInfo *method)

{
  undefined4 uVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar5;
  ulong uVar6;
  long lVar7;
  UnityEngine_UIElements_StyleLength_o value;
  
  if (Il2CppMethodInitialized_0754718e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_0754718e = '\x01';
  }
  pCVar2 = (__this->fields).__4__this;
  if ((pCVar2 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) &&
     (__this_00 = (pCVar2->fields)._visualElement, __this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0)
     ) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if (evt != (UnityEngine_UIElements_GeometryChangedEvent_o *)0x0) {
      uVar1 = (evt->fields)._newRect_k__BackingField.fields.m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      value = UnityEngine_UIElements_StyleLength__op_Implicit_6b13540
                        ((float)uVar1 / (__this->fields).value,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar3 = obj->klass;
        uVar6 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar6 != 0) {
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          lVar7 = 0;
          do {
            if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar4->interfaceType + lVar7) ==
                TypeInfo_UnityEngine_UIElements_IStyle) {
              pVVar5 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar7) + 0xad);
              goto label_05b281c7;
            }
            lVar7 = lVar7 + 0x10;
          } while (uVar6 * 0x10 != lVar7);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0xad);
label_05b281c7:
        (*pVVar5->methodPtr)(obj,value,pVVar5->method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass52_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0___ctor (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x5b18080

void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass52_0$$<FontSize>b__0
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0___FontSize_b__0 (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0_o* __this, UnityEngine_UIElements_GeometryChangedEvent_o* evt, const MethodInfo* method);
// 0x5b281f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b28277: shufps xmm1, xmm1, 0x55
// asm:   0x5b2827b: jmp 0x5b282c3

void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0___FontSize_b__0
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0_o *__this,
               UnityEngine_UIElements_GeometryChangedEvent_o *evt,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar5;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar8;
  ulong uVar9;
  long lVar10;
  UnityEngine_UIElements_StyleLength_o value;
  
  if (Il2CppMethodInitialized_0754718f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_0754718f = '\x01';
  }
  fVar1 = (__this->fields).value;
  iVar4 = (__this->fields).scaleMode;
  if (iVar4 == 1) {
    if (evt == (UnityEngine_UIElements_GeometryChangedEvent_o *)0x0) goto label_05b2838f;
    uVar2 = (evt->fields)._newRect_k__BackingField.fields.m_Width;
    fVar3 = (float)uVar2;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
  }
  else if (iVar4 == 0) {
    if (evt == (UnityEngine_UIElements_GeometryChangedEvent_o *)0x0) goto label_05b2838f;
    fVar3 = (evt->fields)._newRect_k__BackingField.fields.m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
  }
  else {
    fVar3 = 1.0;
  }
  pCVar5 = (__this->fields).__4__this;
  if ((pCVar5 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) &&
     (__this_00 = (pCVar5->fields)._visualElement, __this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0)
     ) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    value = UnityEngine_UIElements_StyleLength__op_Implicit_6b13540((fVar1 / 100.0) * fVar3,(MethodInfo *)0x0)
    ;
    if (obj != (Il2CppObject *)0x0) {
      pIVar6 = obj->klass;
      uVar9 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar9 != 0) {
        pIVar7 = (pIVar6->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar7->interfaceType + lVar10) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar8 = pIVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar10) + 0x41);
            goto label_05b28375;
          }
          lVar10 = lVar10 + 0x10;
        } while (uVar9 * 0x10 != lVar10);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x41);
label_05b28375:
      (*pVVar8->methodPtr)(obj,value,pVVar8->method);
      return;
    }
  }
label_05b2838f:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___ctor (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, UnityEngine_UIElements_VisualElement_o* visualElement, const MethodInfo* method);
// 0x5b14af0

void CustomLogic_CustomLogicVisualElementBuiltin___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,
               UnityEngine_UIElements_VisualElement_o *visualElement,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__EventCallback_GeometryChangedEvent___o *__this_00;
  
  if (Il2CppMethodInitialized_07547090 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_EventCallback_GeometryChangedEvent_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_EventCallback_GeometryChangedEvent);
    Il2CppMethodInitialized_07547090 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_EventCallback_GeometryChangedEvent
                        );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_EventCallback_GeometryChangedEvent_ctor);
  (__this->fields)._onResize = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onResize);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._visualElement = visualElement;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._visualElement);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$get_ChildCount
// il2cpp: int32_t CustomLogic_CustomLogicVisualElementBuiltin__get_ChildCount (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, const MethodInfo* method);
// 0x5b14ba0

int32_t CustomLogic_CustomLogicVisualElementBuiltin__get_ChildCount
                  (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 == (UnityEngine_UIElements_VisualElement_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_UIElements_VisualElement__get_childCount(__this_00,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Add
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Add (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* visualElement, const MethodInfo* method);
// 0x5b14bc0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Add
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *visualElement,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  
  if ((visualElement == (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) ||
     (__this_00 = (__this->fields)._visualElement, __this_00 == (UnityEngine_UIElements_VisualElement_o *)0x0)
     ) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_VisualElement__Add
            (__this_00,(visualElement->fields)._visualElement,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Remove
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin__Remove (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* visualElement, const MethodInfo* method);
// 0x5b14bf0

void CustomLogic_CustomLogicVisualElementBuiltin__Remove
               (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,
               CustomLogic_CustomLogicVisualElementBuiltin_o *visualElement,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  
  if ((visualElement == (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) ||
     (__this_00 = (__this->fields)._visualElement, __this_00 == (UnityEngine_UIElements_VisualElement_o *)0x0)
     ) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_VisualElement__Remove
            (__this_00,(visualElement->fields)._visualElement,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$RemoveFromHierarchy
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin__RemoveFromHierarchy (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, const MethodInfo* method);
// 0x5b14c10

void CustomLogic_CustomLogicVisualElementBuiltin__RemoveFromHierarchy
               (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 == (UnityEngine_UIElements_VisualElement_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin__Clear (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, const MethodInfo* method);
// 0x5b14c30

void CustomLogic_CustomLogicVisualElementBuiltin__Clear
               (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 == (UnityEngine_UIElements_VisualElement_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_VisualElement__Clear(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$GetElementAt
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__GetElementAt (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x5b14c50

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__GetElementAt
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *pUVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547091 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
    Il2CppMethodInitialized_07547091 = '\x01';
  }
  pUVar1 = (__this->fields)._visualElement;
  if (pUVar1 == (UnityEngine_UIElements_VisualElement_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar1 = UnityEngine_UIElements_VisualElement__ElementAt(pUVar1,index,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor(__this_00,pUVar1,method_00);
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$QueryByName
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__QueryByName (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5b14cc0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__QueryByName
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *pUVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547092 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_UQueryExtensions);
    Il2CppMethodInitialized_07547092 = '\x01';
  }
  pUVar1 = (__this->fields)._visualElement;
  if ((TypeInfo_UnityEngine_UIElements_UQueryExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UIElements_UQueryExtensions);
  }
  pUVar1 = UnityEngine_UIElements_UQueryExtensions__Q_6b560c0
                     (pUVar1,name,(System_String_o *)0x0,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor(__this_00,pUVar1,method_00);
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$QueryByClassName
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__QueryByClassName (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, System_String_o* className, const MethodInfo* method);
// 0x5b14d50

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__QueryByClassName
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,System_String_o *className,MethodInfo *method
          )

{
  UnityEngine_UIElements_VisualElement_o *pUVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547093 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_UQueryExtensions);
    Il2CppMethodInitialized_07547093 = '\x01';
  }
  pUVar1 = (__this->fields)._visualElement;
  if ((TypeInfo_UnityEngine_UIElements_UQueryExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UIElements_UQueryExtensions);
  }
  pUVar1 = UnityEngine_UIElements_UQueryExtensions__Q_6b560c0
                     (pUVar1,(System_String_o *)0x0,className,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor(__this_00,pUVar1,method_00);
  return __this_00;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$RegisterMouseEnterEventCallback
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__RegisterMouseEnterEventCallback (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x5b14de0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__RegisterMouseEnterEventCallback
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,CustomLogic_UserMethod_o *method,
          MethodInfo *methodInfo)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0_o *__this_01;
  UnityEngine_UIElements_EventCallback_TEventType__o *__this_02;
  
  if (Il2CppMethodInitialized_07547094 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback_MouseEnterEvent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_EventCallback_MouseEnterEvent)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass13_0_RegisterMouseEnterEventCallback
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass13_0);
    Il2CppMethodInitialized_07547094 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass13_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0_o *)0x0) {
    (__this_01->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).method);
    __this_00 = (__this->fields)._visualElement;
    __this_02 = (UnityEngine_UIElements_EventCallback_TEventType__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_MouseEnterEvent);
    UnityEngine_UIElements_EventCallback_object____ctor
              (__this_02,(Il2CppObject *)__this_01,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass13_0_RegisterMouseEnterEventCallback
               ,(MethodInfo_4E7A6A0 *)0x0);
    if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
      UnityEngine_UIElements_CallbackEventHandler__RegisterCallback_object_
                ((UnityEngine_UIElements_CallbackEventHandler_o *)__this_00,__this_02,0,
                 (MethodInfo_347D920 *)
                 MethodInfo_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback_MouseEnterEvent);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$RegisterMouseLeaveEventCallback
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__RegisterMouseLeaveEventCallback (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x5b14ed0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__RegisterMouseLeaveEventCallback
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,CustomLogic_UserMethod_o *method,
          MethodInfo *methodInfo)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0_o *__this_01;
  UnityEngine_UIElements_EventCallback_TEventType__o *__this_02;
  
  if (Il2CppMethodInitialized_07547095 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback_MouseLeaveEvent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_EventCallback_MouseLeaveEvent)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass14_0_RegisterMouseLeaveEventCallback
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass14_0);
    Il2CppMethodInitialized_07547095 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass14_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0_o *)0x0) {
    (__this_01->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).method);
    __this_00 = (__this->fields)._visualElement;
    __this_02 = (UnityEngine_UIElements_EventCallback_TEventType__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_MouseLeaveEvent);
    UnityEngine_UIElements_EventCallback_object____ctor
              (__this_02,(Il2CppObject *)__this_01,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass14_0_RegisterMouseLeaveEventCallback
               ,(MethodInfo_4E7A6A0 *)0x0);
    if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
      UnityEngine_UIElements_CallbackEventHandler__RegisterCallback_object_
                ((UnityEngine_UIElements_CallbackEventHandler_o *)__this_00,__this_02,0,
                 (MethodInfo_347D920 *)
                 MethodInfo_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback_MouseLeaveEvent);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$RegisterClickEventCallback
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__RegisterClickEventCallback (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x5b14fc0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__RegisterClickEventCallback
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,CustomLogic_UserMethod_o *method,
          MethodInfo *methodInfo)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0_o *__this_01;
  UnityEngine_UIElements_EventCallback_TEventType__o *__this_02;
  
  if (Il2CppMethodInitialized_07547096 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback_ClickEvent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_EventCallback_ClickEvent);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass15_0_RegisterClickEventCallback_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass15_0);
    Il2CppMethodInitialized_07547096 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass15_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0_o *)0x0) {
    (__this_01->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).method);
    __this_00 = (__this->fields)._visualElement;
    __this_02 = (UnityEngine_UIElements_EventCallback_TEventType__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ClickEvent);
    UnityEngine_UIElements_EventCallback_object____ctor
              (__this_02,(Il2CppObject *)__this_01,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass15_0_RegisterClickEventCallback_b__0
               ,(MethodInfo_4E7A6A0 *)0x0);
    if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
      UnityEngine_UIElements_CallbackEventHandler__RegisterCallback_object_
                ((UnityEngine_UIElements_CallbackEventHandler_o *)__this_00,__this_02,0,
                 (MethodInfo_347D920 *)
                 MethodInfo_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback_ClickEvent);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$RegisterFocusInEventCallback
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__RegisterFocusInEventCallback (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x5b150b0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__RegisterFocusInEventCallback
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,CustomLogic_UserMethod_o *method,
          MethodInfo *methodInfo)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0_o *__this_01;
  UnityEngine_UIElements_EventCallback_TEventType__o *__this_02;
  
  if (Il2CppMethodInitialized_07547097 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback_FocusInEvent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_EventCallback_FocusInEvent);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass16_0_RegisterFocusInEventCallback_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass16_0);
    Il2CppMethodInitialized_07547097 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass16_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0_o *)0x0) {
    (__this_01->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).method);
    __this_00 = (__this->fields)._visualElement;
    __this_02 = (UnityEngine_UIElements_EventCallback_TEventType__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_FocusInEvent);
    UnityEngine_UIElements_EventCallback_object____ctor
              (__this_02,(Il2CppObject *)__this_01,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass16_0_RegisterFocusInEventCallback_b
               ,(MethodInfo_4E7A6A0 *)0x0);
    if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
      UnityEngine_UIElements_CallbackEventHandler__RegisterCallback_object_
                ((UnityEngine_UIElements_CallbackEventHandler_o *)__this_00,__this_02,0,
                 (MethodInfo_347D920 *)
                 MethodInfo_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback_FocusInEvent);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$RegisterFocusOutEventCallback
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__RegisterFocusOutEventCallback (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x5b151a0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__RegisterFocusOutEventCallback
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,CustomLogic_UserMethod_o *method,
          MethodInfo *methodInfo)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0_o *__this_01;
  UnityEngine_UIElements_EventCallback_TEventType__o *__this_02;
  
  if (Il2CppMethodInitialized_07547098 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback_FocusOutEvent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_EventCallback_FocusOutEvent);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass17_0_RegisterFocusOutEventCallback_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass17_0);
    Il2CppMethodInitialized_07547098 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass17_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0_o *)0x0) {
    (__this_01->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).method);
    __this_00 = (__this->fields)._visualElement;
    __this_02 = (UnityEngine_UIElements_EventCallback_TEventType__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_FocusOutEvent);
    UnityEngine_UIElements_EventCallback_object____ctor
              (__this_02,(Il2CppObject *)__this_01,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass17_0_RegisterFocusOutEventCallback_b
               ,(MethodInfo_4E7A6A0 *)0x0);
    if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
      UnityEngine_UIElements_CallbackEventHandler__RegisterCallback_object_
                ((UnityEngine_UIElements_CallbackEventHandler_o *)__this_00,__this_02,0,
                 (MethodInfo_347D920 *)
                 MethodInfo_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback_FocusOutEvent);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Opacity
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Opacity (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b15290
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1532f: nop 

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Opacity
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  UnityEngine_UIElements_StyleFloat_o value_00;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_07547099 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_07547099 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    fVar6 = value / 100.0;
    fVar7 = 1.0;
    if (fVar6 <= 1.0) {
      fVar7 = fVar6;
    }
    value_00 = UnityEngine_UIElements_StyleFloat__op_Implicit_6b12b80
                         ((float)(-(uint)(0.0 <= fVar6) & (uint)fVar7),(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x5b);
            goto label_05b15365;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x5b);
label_05b15365:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Active
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Active (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5b15390

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Active
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleEnum_T__o UVar6;
  
  if (Il2CppMethodInitialized_0754709a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_StyleEnum_DisplayStyle_op_Implicit);
    Il2CppMethodInitialized_0754709a = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar6 = UnityEngine_UIElements_StyleEnum_Int32Enum___op_Implicit_41273b0
                      ((uint)!value,
                       (MethodInfo_41273B0 *)
                       MethodInfo_UnityEngine_UIElements_StyleEnum_DisplayStyle_op_Implicit);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x33);
            goto label_05b15455;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x33);
label_05b15455:
      (*pVVar3->methodPtr)
                (obj,(UnityEngine_UIElements_StyleEnum_DisplayStyle__o)UVar6.fields.m_Value,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Visible
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Visible (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5b15480

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Visible
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleEnum_T__o UVar6;
  
  if (Il2CppMethodInitialized_0754709b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_StyleEnum_Visibility_op_Implicit);
    Il2CppMethodInitialized_0754709b = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar6 = UnityEngine_UIElements_StyleEnum_Int32Enum___op_Implicit_41273b0
                      ((uint)!value,
                       (MethodInfo_41273B0 *)
                       MethodInfo_UnityEngine_UIElements_StyleEnum_Visibility_op_Implicit);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0xa9);
            goto label_05b15547;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0xa9);
label_05b15547:
      (*pVVar3->methodPtr)
                (obj,(UnityEngine_UIElements_StyleEnum_Visibility__o)UVar6.fields.m_Value,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TransitionDuration
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TransitionDuration (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b15570

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TransitionDuration
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_UIElements_TimeValue_array *pUVar3;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  MethodInfo *pMVar6;
  System_Collections_Generic_List_TimeValue__o *__this_01;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar7;
  ulong uVar8;
  long lVar9;
  UnityEngine_UIElements_StyleList_T__o UVar10;
  UnityEngine_UIElements_StyleList_TimeValue__o value_00;
  UnityEngine_UIElements_TimeValue_Fields UStack_28;
  
  if (Il2CppMethodInitialized_0754709c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_TimeValue_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_TimeValue_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_TimeValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_StyleList_TimeValue_op_Implicit);
    Il2CppMethodInitialized_0754709c = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_TimeValue);
  System_Collections_Generic_List_TimeValue____ctor
            (__this_01,(MethodInfo_39D4700 *)MethodInfo_System_Collections_Generic_List_TimeValue_ctor);
  UStack_28.m_Value = 0.0;
  UStack_28.m_Unit = 0;
  UnityEngine_UIElements_TimeValue___ctor_6b15c40
            ((UnityEngine_UIElements_TimeValue_o *)&UStack_28,value,1,(MethodInfo *)0x0);
  pMVar6 = MethodInfo_System_Collections_Generic_List_TimeValue_Add;
  if (__this_01 != (System_Collections_Generic_List_TimeValue__o *)0x0) {
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (__this_01->fields)._items;
    if (pUVar3 != (UnityEngine_UIElements_TimeValue_array *)0x0) {
      uVar2 = (__this_01->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_01->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2].fields = UStack_28;
      }
      else {
        System_Collections_Generic_List_TimeValue___AddWithResize
                  (__this_01,(UnityEngine_UIElements_TimeValue_o)UStack_28,
                   (MethodInfo_39D5010 *)pMVar6->klass->rgctx_data[0xe].method);
      }
      UVar10 = UnityEngine_UIElements_StyleList_TimeValue___op_Implicit_4129c80
                         ((System_Collections_Generic_List_T__o *)__this_01,
                          (MethodInfo_4129C80 *)
                          MethodInfo_UnityEngine_UIElements_StyleList_TimeValue_op_Implicit);
      value_00.fields.m_Value = UVar10.fields.m_Value;
      __this_00 = (__this->fields)._visualElement;
      if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
        obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
        if (obj != (Il2CppObject *)0x0) {
          pIVar4 = obj->klass;
          uVar8 = (ulong)(pIVar4->_2).interface_offsets_count;
          if (uVar8 != 0) {
            pIVar5 = (pIVar4->_1).interfaceOffsets;
            lVar9 = 0;
            do {
              if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar5->interfaceType + lVar9) ==
                  TypeInfo_UnityEngine_UIElements_IStyle) {
                pVVar7 = pIVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar9) + 0x79);
                goto label_05b15705;
              }
              lVar9 = lVar9 + 0x10;
            } while (uVar8 * 0x10 != lVar9);
          }
          pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                             (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x79);
label_05b15705:
          value_00.fields._4_4_ = 0;
          value_00.fields.m_Keyword = UVar10.fields.m_Keyword;
          (*pVVar7->methodPtr)(obj,value_00,pVVar7->method);
          return __this;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Absolute
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Absolute (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5b15730

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Absolute
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleEnum_T__o UVar6;
  
  if (Il2CppMethodInitialized_0754709d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_StyleEnum_Position_op_Implicit);
    Il2CppMethodInitialized_0754709d = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar6 = UnityEngine_UIElements_StyleEnum_Int32Enum___op_Implicit_41273b0
                      ((uint)value,
                       (MethodInfo_41273B0 *)MethodInfo_UnityEngine_UIElements_StyleEnum_Position_op_Implicit)
    ;
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x67);
            goto label_05b157f5;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x67);
label_05b157f5:
      (*pVVar3->methodPtr)
                (obj,(UnityEngine_UIElements_StyleEnum_Position__o)UVar6.fields.m_Value,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Left
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Left (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b15820

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Left
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields UStack_28;
  
  if (Il2CppMethodInitialized_0754709e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_0754709e = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UStack_28.m_Value = 0.0;
    UStack_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&UStack_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)UStack_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x47);
            goto label_05b15905;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x47);
label_05b15905:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Top
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Top (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b15950

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Top
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields UStack_28;
  
  if (Il2CppMethodInitialized_0754709f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_0754709f = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UStack_28.m_Value = 0.0;
    UStack_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&UStack_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)UStack_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x73);
            goto label_05b15a35;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x73);
label_05b15a35:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Right
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Right (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b15a60

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Right
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields UStack_28;
  
  if (Il2CppMethodInitialized_075470a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470a0 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UStack_28.m_Value = 0.0;
    UStack_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&UStack_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)UStack_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x69);
            goto label_05b15b45;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x69);
label_05b15b45:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Bottom
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Bottom (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b15b70

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Bottom
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields UStack_28;
  
  if (Il2CppMethodInitialized_075470a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470a1 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UStack_28.m_Value = 0.0;
    UStack_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&UStack_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)UStack_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x2d);
            goto label_05b15c55;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x2d);
label_05b15c55:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$FlexShrink
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__FlexShrink (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b15c80

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__FlexShrink
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  UnityEngine_UIElements_StyleFloat_o value_00;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_075470a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470a2 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleFloat__op_Implicit_6b12b80(value,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x3d);
            goto label_05b15d35;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x3d);
label_05b15d35:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$FlexGrow
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__FlexGrow (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b15d60

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__FlexGrow
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  UnityEngine_UIElements_StyleFloat_o value_00;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_075470a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470a3 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleFloat__op_Implicit_6b12b80(value,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x3b);
            goto label_05b15e15;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x3b);
label_05b15e15:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$FlexDirection
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__FlexDirection (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5b15e40

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__FlexDirection
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppRuntimeInterfaceOffsetPair *pIVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  ulong uVar7;
  long lVar8;
  UnityEngine_UIElements_StyleEnum_T__o UVar9;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_075470a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UIElements_FlexDirection);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_StyleEnum_FlexDirection_op_Implicit);
    Il2CppMethodInitialized_075470a4 = '\x01';
  }
  handle = TypeRef_UnityEngine_UIElements_FlexDirection;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
  if (!bVar2) {
    iStack_30 = value;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
    pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown flex direction value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar3,(MethodInfo *)0x0);
    pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar6);
    System_ArgumentException___ctor_54186d0(__this_01,pSVar5,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_FlexDirection);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pIVar3 = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar9 = UnityEngine_UIElements_StyleEnum_Int32Enum___op_Implicit_41273b0
                      (value,(MethodInfo_41273B0 *)
                             MethodInfo_UnityEngine_UIElements_StyleEnum_FlexDirection_op_Implicit);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar3->klass;
      uVar7 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar1 = (pIVar6->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar1->interfaceType + lVar8) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar4 = pIVar6->vtable + (*(int *)((long)&pIVar1->offset + lVar8) + 0x39);
            goto label_05b15f95;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar3,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x39);
label_05b15f95:
      (*pVVar4->methodPtr)
                (pIVar3,(UnityEngine_UIElements_StyleEnum_FlexDirection__o)UVar9.fields.m_Value,pVVar4->method
                );
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$FlexWrap
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__FlexWrap (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5b16030

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__FlexWrap
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppRuntimeInterfaceOffsetPair *pIVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  ulong uVar7;
  long lVar8;
  UnityEngine_UIElements_StyleEnum_T__o UVar9;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_075470a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_StyleEnum_Wrap_op_Implicit);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UIElements_Wrap);
    Il2CppMethodInitialized_075470a5 = '\x01';
  }
  handle = TypeRef_UnityEngine_UIElements_Wrap;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
  if (!bVar2) {
    iStack_30 = value;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
    pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown wrap value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar3,(MethodInfo *)0x0);
    pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar6);
    System_ArgumentException___ctor_54186d0(__this_01,pSVar5,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_FlexWrap)
    ;
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pIVar3 = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar9 = UnityEngine_UIElements_StyleEnum_Int32Enum___op_Implicit_41273b0
                      (value,(MethodInfo_41273B0 *)
                             MethodInfo_UnityEngine_UIElements_StyleEnum_Wrap_op_Implicit);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar3->klass;
      uVar7 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar1 = (pIVar6->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar1->interfaceType + lVar8) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar4 = pIVar6->vtable + (*(int *)((long)&pIVar1->offset + lVar8) + 0x3f);
            goto label_05b16185;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar3,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x3f);
label_05b16185:
      (*pVVar4->methodPtr)
                (pIVar3,(UnityEngine_UIElements_StyleEnum_Wrap__o)UVar9.fields.m_Value,pVVar4->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$AlignItems
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__AlignItems (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5b16220

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__AlignItems
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppRuntimeInterfaceOffsetPair *pIVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  ulong uVar7;
  long lVar8;
  UnityEngine_UIElements_StyleEnum_T__o UVar9;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_075470a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UIElements_Align);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_StyleEnum_Align_op_Implicit)
    ;
    Il2CppMethodInitialized_075470a6 = '\x01';
  }
  handle = TypeRef_UnityEngine_UIElements_Align;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
  if (!bVar2) {
    iStack_30 = value;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
    pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown align value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar3,(MethodInfo *)0x0);
    pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar6);
    System_ArgumentException___ctor_54186d0(__this_01,pSVar5,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_AlignItems);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pIVar3 = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar9 = UnityEngine_UIElements_StyleEnum_Int32Enum___op_Implicit_41273b0
                      (value,(MethodInfo_41273B0 *)
                             MethodInfo_UnityEngine_UIElements_StyleEnum_Align_op_Implicit);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar3->klass;
      uVar7 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar1 = (pIVar6->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar1->interfaceType + lVar8) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar4 = pIVar6->vtable + (*(int *)((long)&pIVar1->offset + lVar8) + 3);
            goto label_05b16375;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar3,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,3);
label_05b16375:
      (*pVVar4->methodPtr)
                (pIVar3,(UnityEngine_UIElements_StyleEnum_Align__o)UVar9.fields.m_Value,pVVar4->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$JustifyContent
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__JustifyContent (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5b16410

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__JustifyContent
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppRuntimeInterfaceOffsetPair *pIVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  ulong uVar7;
  long lVar8;
  UnityEngine_UIElements_StyleEnum_T__o UVar9;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_075470a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UIElements_Justify);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_StyleEnum_Justify_op_Implicit);
    Il2CppMethodInitialized_075470a7 = '\x01';
  }
  handle = TypeRef_UnityEngine_UIElements_Justify;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
  if (!bVar2) {
    iStack_30 = value;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
    pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown justify value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar3,(MethodInfo *)0x0);
    pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar6);
    System_ArgumentException___ctor_54186d0(__this_01,pSVar5,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_JustifyContent);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pIVar3 = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar9 = UnityEngine_UIElements_StyleEnum_Int32Enum___op_Implicit_41273b0
                      (value,(MethodInfo_41273B0 *)
                             MethodInfo_UnityEngine_UIElements_StyleEnum_Justify_op_Implicit);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar3->klass;
      uVar7 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar1 = (pIVar6->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar1->interfaceType + lVar8) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar4 = pIVar6->vtable + (*(int *)((long)&pIVar1->offset + lVar8) + 0x45);
            goto label_05b16565;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar3,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x45);
label_05b16565:
      (*pVVar4->methodPtr)
                (pIVar3,(UnityEngine_UIElements_StyleEnum_Justify__o)UVar9.fields.m_Value,pVVar4->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$AlignSelf
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__AlignSelf (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5b16600

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__AlignSelf
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppRuntimeInterfaceOffsetPair *pIVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  ulong uVar7;
  long lVar8;
  UnityEngine_UIElements_StyleEnum_T__o UVar9;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_075470a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UIElements_Align);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_StyleEnum_Align_op_Implicit)
    ;
    Il2CppMethodInitialized_075470a8 = '\x01';
  }
  handle = TypeRef_UnityEngine_UIElements_Align;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
  if (!bVar2) {
    iStack_30 = value;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
    pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown align value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar3,(MethodInfo *)0x0);
    pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar6);
    System_ArgumentException___ctor_54186d0(__this_01,pSVar5,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_AlignSelf);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pIVar3 = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar9 = UnityEngine_UIElements_StyleEnum_Int32Enum___op_Implicit_41273b0
                      (value,(MethodInfo_41273B0 *)
                             MethodInfo_UnityEngine_UIElements_StyleEnum_Align_op_Implicit);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar3->klass;
      uVar7 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar1 = (pIVar6->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar1->interfaceType + lVar8) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar4 = pIVar6->vtable + (*(int *)((long)&pIVar1->offset + lVar8) + 5);
            goto label_05b16755;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar3,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,5);
label_05b16755:
      (*pVVar4->methodPtr)
                (pIVar3,(UnityEngine_UIElements_StyleEnum_Align__o)UVar9.fields.m_Value,pVVar4->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Width
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Width (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b167f0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Width
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields UStack_28;
  
  if (Il2CppMethodInitialized_075470a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470a9 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UStack_28.m_Value = 0.0;
    UStack_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&UStack_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)UStack_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0xad);
            goto label_05b168d7;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0xad);
label_05b168d7:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Height
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Height (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b16900

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Height
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields UStack_28;
  
  if (Il2CppMethodInitialized_075470aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470aa = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UStack_28.m_Value = 0.0;
    UStack_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&UStack_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)UStack_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x43);
            goto label_05b169e5;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x43);
label_05b169e5:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$MinWidth
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__MinWidth (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b16a10

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__MinWidth
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields UStack_28;
  
  if (Il2CppMethodInitialized_075470ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470ab = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UStack_28.m_Value = 0.0;
    UStack_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&UStack_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)UStack_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x59);
            goto label_05b16af5;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x59);
label_05b16af5:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$MinHeight
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__MinHeight (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b16b20

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__MinHeight
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields UStack_28;
  
  if (Il2CppMethodInitialized_075470ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470ac = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UStack_28.m_Value = 0.0;
    UStack_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&UStack_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)UStack_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x57);
            goto label_05b16c05;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x57);
label_05b16c05:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$MaxWidth
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__MaxWidth (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b16c30

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__MaxWidth
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields UStack_28;
  
  if (Il2CppMethodInitialized_075470ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470ad = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UStack_28.m_Value = 0.0;
    UStack_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&UStack_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)UStack_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x55);
            goto label_05b16d15;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x55);
label_05b16d15:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$MaxHeight
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__MaxHeight (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b16d40

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__MaxHeight
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields UStack_28;
  
  if (Il2CppMethodInitialized_075470ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470ae = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UStack_28.m_Value = 0.0;
    UStack_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&UStack_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)UStack_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x53);
            goto label_05b16e25;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x53);
label_05b16e25:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$AspectRatio
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__AspectRatio (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, int32_t mode, const MethodInfo* method);
// 0x5b16e50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1708b: jmp 0x5b1718c

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__AspectRatio
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,int32_t mode,MethodInfo *method)

{
  float fVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  UnityEngine_UIElements_VisualElement_o *pUVar3;
  Il2CppType *handle;
  bool bVar4;
  CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0_o *__this_00;
  System_Type_o *enumType;
  Il2CppObject *pIVar5;
  UnityEngine_UIElements_EventCallback_TEventType__o *__this_01;
  MethodInfo **ppMVar6;
  CustomLogic_CustomLogicVisualElementBuiltin___c_StaticFields *pCVar7;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  int32_t iStack_3c;
  UnityEngine_UIElements_EventCallback_TEventType__o *pUStack_38;
  
  if (Il2CppMethodInitialized_075470af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback_GeometryChangedEvent_71a3bf8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback_GeometryChangedEvent
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_EventCallback_GeometryChangedEvent_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_EventCallback_GeometryChangedEvent_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_CustomLogic_ElementAspectRatio);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_UIElements_EventCallback_GeometryChangedEvent);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c_AspectRatio_b__40_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass40_0_AspectRatio_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass40_0_AspectRatio_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass40_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c);
    il2cpp_codegen_initialize_runtime_metadata(&"AspectRatio");
    Il2CppMethodInitialized_075470af = '\x01';
  }
  pUStack_38 = (UnityEngine_UIElements_EventCallback_TEventType__o *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass40_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0_o *)0x0)
  goto label_05b1718c;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).value = value;
  handle = TypeRef_CustomLogic_ElementAspectRatio;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  iStack_3c = mode;
  pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_3c);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar5,(MethodInfo *)0x0);
  if (!bVar4) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Unknown aspect ratio mode");
    System_Exception___ctor_54fa440(__this_02,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_AspectRatio);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._onResize;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b1718c;
  bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar2,(Il2CppObject *)"AspectRatio",(Il2CppObject **)&pUStack_38,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_EventCallback_GeometryChangedEvent_TryGetValue
                    );
  if (bVar4) {
    pUVar3 = (__this->fields)._visualElement;
    if (pUVar3 == (UnityEngine_UIElements_VisualElement_o *)0x0) goto label_05b1718c;
    UnityEngine_UIElements_CallbackEventHandler__UnregisterCallback_object_
              ((UnityEngine_UIElements_CallbackEventHandler_o *)pUVar3,pUStack_38,0,
               (MethodInfo_34A69E0 *)
               MethodInfo_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback_GeometryChangedEvent)
    ;
  }
  fVar1 = (__this_00->fields).value;
  if ((fVar1 == 0.0) && (!NAN(fVar1))) {
    return __this;
  }
  if (mode == 0) {
    __this_01 = (UnityEngine_UIElements_EventCallback_TEventType__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_GeometryChangedEvent);
    ppMVar6 = &MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass40_0_AspectRatio_b__1;
label_05b17072:
    UnityEngine_UIElements_EventCallback_object____ctor
              (__this_01,(Il2CppObject *)__this_00,(intptr_t)*ppMVar6,(MethodInfo_4E7A6A0 *)0x0);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._onResize;
  }
  else {
    if (mode == 1) {
      __this_01 = (UnityEngine_UIElements_EventCallback_TEventType__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_GeometryChangedEvent
                            );
      ppMVar6 = &MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass40_0_AspectRatio_b__0;
      goto label_05b17072;
    }
    if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c)
      ;
      pCVar7 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c->static_fields;
      __this_01 = (UnityEngine_UIElements_EventCallback_TEventType__o *)pCVar7->__9__40_2;
      if (__this_01 != (UnityEngine_UIElements_EventCallback_TEventType__o *)0x0) goto label_05b170b3;
label_05b17121:
      if ((TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c);
        pCVar7 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c->static_fields;
      }
      pIVar5 = (Il2CppObject *)pCVar7->__9;
      __this_01 = (UnityEngine_UIElements_EventCallback_TEventType__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_GeometryChangedEvent
                            );
      UnityEngine_UIElements_EventCallback_object____ctor
                (__this_01,pIVar5,
                 (intptr_t)MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c_AspectRatio_b__40_2,
                 (MethodInfo_4E7A6A0 *)0x0);
      pCVar7 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c->static_fields;
      pCVar7->__9__40_2 = (UnityEngine_UIElements_EventCallback_GeometryChangedEvent__o *)__this_01;
      Il2CppCodeGenWriteBarrier(&pCVar7->__9__40_2);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._onResize;
    }
    else {
      pCVar7 = TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c->static_fields;
      __this_01 = (UnityEngine_UIElements_EventCallback_TEventType__o *)pCVar7->__9__40_2;
      if (__this_01 == (UnityEngine_UIElements_EventCallback_TEventType__o *)0x0) goto label_05b17121;
label_05b170b3:
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._onResize;
    }
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)"AspectRatio",(Il2CppObject *)__this_01,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_EventCallback_GeometryChangedEvent_set_Item
              );
    pUVar3 = (__this->fields)._visualElement;
    if (pUVar3 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
      UnityEngine_UIElements_CallbackEventHandler__RegisterCallback_object_
                ((UnityEngine_UIElements_CallbackEventHandler_o *)pUVar3,__this_01,0,
                 (MethodInfo_347D920 *)
                 MethodInfo_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback_GeometryChangedEvent_71a3bf8
                );
      return __this;
    }
  }
label_05b1718c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Margin
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Margin (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b171f0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Margin
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  CustomLogic_CustomLogicVisualElementBuiltin__MarginLeft(__this,value,percentage,method);
  if (__this == (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicVisualElementBuiltin__MarginTop(__this,value,percentage,method_00);
  CustomLogic_CustomLogicVisualElementBuiltin__MarginRight(__this,value,percentage,method_01);
  pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__MarginBottom(__this,value,percentage,method_02);
  return pCVar1;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$MarginLeft
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__MarginLeft (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b17250

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__MarginLeft
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (Il2CppMethodInitialized_075470b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470b0 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&local_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x4d);
            goto label_05b17335;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x4d);
label_05b17335:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$MarginTop
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__MarginTop (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b17360

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__MarginTop
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (Il2CppMethodInitialized_075470b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470b1 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&local_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x51);
            goto label_05b17445;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x51);
label_05b17445:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$MarginRight
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__MarginRight (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b17470

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__MarginRight
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (Il2CppMethodInitialized_075470b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470b2 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&local_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x4f);
            goto label_05b17555;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x4f);
label_05b17555:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$MarginBottom
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__MarginBottom (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b17580

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__MarginBottom
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields UStack_28;
  
  if (Il2CppMethodInitialized_075470b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470b3 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UStack_28.m_Value = 0.0;
    UStack_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&UStack_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)UStack_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x4b);
            goto label_05b17665;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x4b);
label_05b17665:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Padding
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Padding (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b17690

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Padding
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  CustomLogic_CustomLogicVisualElementBuiltin__PaddingLeft(__this,value,percentage,method);
  if (__this == (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicVisualElementBuiltin__PaddingTop(__this,value,percentage,method_00);
  CustomLogic_CustomLogicVisualElementBuiltin__PaddingRight(__this,value,percentage,method_01);
  pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__PaddingBottom(__this,value,percentage,method_02);
  return pCVar1;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$PaddingLeft
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__PaddingLeft (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b176f0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__PaddingLeft
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (Il2CppMethodInitialized_075470b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470b4 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&local_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x61);
            goto label_05b177d5;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x61);
label_05b177d5:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$PaddingTop
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__PaddingTop (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b17800

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__PaddingTop
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (Il2CppMethodInitialized_075470b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470b5 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&local_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x65);
            goto label_05b178e5;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x65);
label_05b178e5:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$PaddingRight
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__PaddingRight (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b17910

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__PaddingRight
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (Il2CppMethodInitialized_075470b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470b6 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&local_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 99);
            goto label_05b179f5;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,99);
label_05b179f5:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$PaddingBottom
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__PaddingBottom (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x5b17a20

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__PaddingBottom
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields UStack_28;
  
  if (Il2CppMethodInitialized_075470b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470b7 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UStack_28.m_Value = 0.0;
    UStack_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&UStack_28,value,(uint)percentage,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                         ((UnityEngine_UIElements_Length_o)UStack_28,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x5f);
            goto label_05b17b05;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x5f);
label_05b17b05:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$FontStyle
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__FontStyle (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5b17b30

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__FontStyle
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppRuntimeInterfaceOffsetPair *pIVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  ulong uVar7;
  long lVar8;
  UnityEngine_UIElements_StyleEnum_T__o UVar9;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_075470b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_FontStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_StyleEnum_FontStyle_op_Implicit);
    Il2CppMethodInitialized_075470b8 = '\x01';
  }
  handle = TypeRef_UnityEngine_FontStyle;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
  if (!bVar2) {
    iStack_30 = value;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
    pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown font style value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar3,(MethodInfo *)0x0);
    pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar6);
    System_ArgumentException___ctor_54186d0(__this_01,pSVar5,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_FontStyle);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pIVar3 = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar9 = UnityEngine_UIElements_StyleEnum_Int32Enum___op_Implicit_41273b0
                      (value,(MethodInfo_41273B0 *)
                             MethodInfo_UnityEngine_UIElements_StyleEnum_FontStyle_op_Implicit);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar3->klass;
      uVar7 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar1 = (pIVar6->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar1->interfaceType + lVar8) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar4 = pIVar6->vtable + (*(int *)((long)&pIVar1->offset + lVar8) + 0x89);
            goto label_05b17c87;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar3,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x89);
label_05b17c87:
      (*pVVar4->methodPtr)
                (pIVar3,(UnityEngine_UIElements_StyleEnum_FontStyle__o)UVar9.fields.m_Value,pVVar4->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$FontSize
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__FontSize (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, int32_t scaleMode, const MethodInfo* method);
// 0x5b17d20

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__FontSize
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,bool percentage,int32_t scaleMode
          ,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_UIElements_VisualElement_o *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Il2CppType *handle;
  bool bVar4;
  CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0_o *__this_00;
  System_Type_o *enumType;
  Il2CppObject *pIVar5;
  UnityEngine_UIElements_EventCallback_TEventType__o *__this_01;
  VirtualInvokeData *pVVar6;
  Il2CppClass *pIVar7;
  System_Exception_o *__this_02;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  ulong uVar8;
  long lVar9;
  UnityEngine_UIElements_StyleLength_o value_00;
  UnityEngine_UIElements_Length_Fields UStack_48;
  float fStack_3c;
  UnityEngine_UIElements_EventCallback_TEventType__o *pUStack_38;
  
  fStack_3c = value;
  if (Il2CppMethodInitialized_075470b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback_GeometryChangedEvent_71a3bf8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback_GeometryChangedEvent
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_EventCallback_GeometryChangedEvent_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_EventCallback_GeometryChangedEvent_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_UIElements_EventCallback_GeometryChangedEvent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_CustomLogic_FontScaleMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass52_0_FontSize_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass52_0);
    il2cpp_codegen_initialize_runtime_metadata(&"FontScaleMode");
    Il2CppMethodInitialized_075470b9 = '\x01';
  }
  pUStack_38 = (UnityEngine_UIElements_EventCallback_TEventType__o *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass52_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0_o *)0x0) {
    (__this_00->fields).value = fStack_3c;
    (__this_00->fields).scaleMode = scaleMode;
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    handle = TypeRef_CustomLogic_FontScaleMode;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    UStack_48.m_Value = (float)(__this_00->fields).scaleMode;
    pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&UStack_48);
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556760);
    }
    bVar4 = System_Enum__IsDefined(enumType,pIVar5,(MethodInfo *)0x0);
    if (!bVar4) {
      pIVar7 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar7);
      message = il2cpp_codegen_get_runtime_metadata(&"Unknown font scale mode");
      System_Exception___ctor_54fa440(__this_02,message,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_FontSize);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._onResize;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar1,(Il2CppObject *)"FontScaleMode",(Il2CppObject **)&pUStack_38,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_EventCallback_GeometryChangedEvent_TryGetValue
                        );
      if (bVar4) {
        pUVar2 = (__this->fields)._visualElement;
        if (pUVar2 == (UnityEngine_UIElements_VisualElement_o *)0x0) goto label_05b18026;
        UnityEngine_UIElements_CallbackEventHandler__UnregisterCallback_object_
                  ((UnityEngine_UIElements_CallbackEventHandler_o *)pUVar2,pUStack_38,0,
                   (MethodInfo_34A69E0 *)
                   MethodInfo_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback_GeometryChangedEvent
                  );
      }
      if (percentage) {
        __this_01 = (UnityEngine_UIElements_EventCallback_TEventType__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_UnityEngine_UIElements_EventCallback_GeometryChangedEvent);
        UnityEngine_UIElements_EventCallback_object____ctor
                  (__this_01,(Il2CppObject *)__this_00,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass52_0_FontSize_b__0,
                   (MethodInfo_4E7A6A0 *)0x0);
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._onResize;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar1,(Il2CppObject *)"FontScaleMode",(Il2CppObject *)__this_01,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_EventCallback_GeometryChangedEvent_set_Item
                    );
          pUVar2 = (__this->fields)._visualElement;
          if (pUVar2 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
            UnityEngine_UIElements_CallbackEventHandler__RegisterCallback_object_
                      ((UnityEngine_UIElements_CallbackEventHandler_o *)pUVar2,__this_01,0,
                       (MethodInfo_347D920 *)
                       MethodInfo_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback_GeometryChangedEvent_71a3bf8
                      );
            return __this;
          }
        }
      }
      else {
        pUVar2 = (__this->fields)._visualElement;
        if (pUVar2 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
          pIVar5 = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(pUVar2,(MethodInfo *)0x0);
          UStack_48.m_Value = 0.0;
          UStack_48.m_Unit = 0;
          UnityEngine_UIElements_Length___ctor
                    ((UnityEngine_UIElements_Length_o *)&UStack_48,(__this_00->fields).value,(MethodInfo *)0x0
                    );
          value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570
                               ((UnityEngine_UIElements_Length_o)UStack_48,(MethodInfo *)0x0);
          if (pIVar5 != (Il2CppObject *)0x0) {
            pIVar7 = pIVar5->klass;
            uVar8 = (ulong)(pIVar7->_2).interface_offsets_count;
            if (uVar8 != 0) {
              pIVar3 = (pIVar7->_1).interfaceOffsets;
              lVar9 = 0;
              do {
                if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar3->interfaceType + lVar9) ==
                    TypeInfo_UnityEngine_UIElements_IStyle) {
                  pVVar6 = pIVar7->vtable + (*(int *)((long)&pIVar3->offset + lVar9) + 0x41);
                  goto label_05b18005;
                }
                lVar9 = lVar9 + 0x10;
              } while (uVar8 * 0x10 != lVar9);
            }
            pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                               (pIVar5,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x41);
label_05b18005:
            (*pVVar6->methodPtr)(pIVar5,value_00,pVVar6->method);
            return __this;
          }
        }
      }
    }
  }
label_05b18026:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Color
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Color (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x5b18090
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1813c: nop dword ptr [rax]

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Color
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *color,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Utility_Color255_o *__this_01;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  UnityEngine_UIElements_StyleColor_o value;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_Color_o v;
  UnityEngine_UIElements_StyleColor_o local_30;
  
  if (Il2CppMethodInitialized_075470ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470ba = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (color->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      v = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      UnityEngine_UIElements_StyleColor__op_Implicit_6b12570(&local_30,v,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar1 = obj->klass;
        uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar4 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar5 = 0;
          do {
            if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
                TypeInfo_UnityEngine_UIElements_IStyle) {
              pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x2f);
              goto label_05b18175;
            }
            lVar5 = lVar5 + 0x10;
          } while (uVar4 * 0x10 != lVar5);
        }
        pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x2f);
label_05b18175:
        value.fields.m_Value.fields.b = local_30.fields.m_Value.fields.b;
        value.fields.m_Value.fields.a = local_30.fields.m_Value.fields.a;
        value.fields.m_Value.fields.r = local_30.fields.m_Value.fields.r;
        value.fields.m_Value.fields.g = local_30.fields.m_Value.fields.g;
        value.fields.m_Keyword = local_30.fields.m_Keyword;
        (*pVVar3->methodPtr)(obj,value,pVVar3->method);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextAlign
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextAlign (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5b181b0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextAlign
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppRuntimeInterfaceOffsetPair *pIVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  ulong uVar7;
  long lVar8;
  UnityEngine_UIElements_StyleEnum_T__o UVar9;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_075470bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_StyleEnum_TextAnchor_op_Implicit);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_TextAnchor);
    Il2CppMethodInitialized_075470bb = '\x01';
  }
  handle = TypeRef_UnityEngine_TextAnchor;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
  if (!bVar2) {
    iStack_30 = value;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
    pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown text align value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar3,(MethodInfo *)0x0);
    pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar6);
    System_ArgumentException___ctor_54186d0(__this_01,pSVar5,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_TextAlign);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pIVar3 = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar9 = UnityEngine_UIElements_StyleEnum_Int32Enum___op_Implicit_41273b0
                      (value,(MethodInfo_41273B0 *)
                             MethodInfo_UnityEngine_UIElements_StyleEnum_TextAnchor_op_Implicit);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar3->klass;
      uVar7 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar1 = (pIVar6->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar1->interfaceType + lVar8) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar4 = pIVar6->vtable + (*(int *)((long)&pIVar1->offset + lVar8) + 0x9d);
            goto label_05b18307;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar3,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x9d);
label_05b18307:
      (*pVVar4->methodPtr)
                (pIVar3,(UnityEngine_UIElements_StyleEnum_TextAnchor__o)UVar9.fields.m_Value,pVVar4->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextWrap
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextWrap (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5b183a0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextWrap
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleEnum_T__o UVar6;
  
  if (Il2CppMethodInitialized_075470bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_StyleEnum_WhiteSpace_op_Implicit);
    Il2CppMethodInitialized_075470bc = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar6 = UnityEngine_UIElements_StyleEnum_Int32Enum___op_Implicit_41273b0
                      ((uint)!value,
                       (MethodInfo_41273B0 *)
                       MethodInfo_UnityEngine_UIElements_StyleEnum_WhiteSpace_op_Implicit);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0xab);
            goto label_05b18467;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0xab);
label_05b18467:
      (*pVVar3->methodPtr)
                (obj,(UnityEngine_UIElements_StyleEnum_WhiteSpace__o)UVar6.fields.m_Value,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextOverflow
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextOverflow (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5b18490

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextOverflow
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppRuntimeInterfaceOffsetPair *pIVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  ulong uVar7;
  long lVar8;
  UnityEngine_UIElements_StyleEnum_T__o UVar9;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_075470bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_StyleEnum_TextOverflow_op_Implicit);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UIElements_TextOverflow);
    Il2CppMethodInitialized_075470bd = '\x01';
  }
  handle = TypeRef_UnityEngine_UIElements_TextOverflow;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
  if (!bVar2) {
    iStack_30 = value;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
    pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown text overflow value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar3,(MethodInfo *)0x0);
    pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar6);
    System_ArgumentException___ctor_54186d0(__this_01,pSVar5,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_TextOverflow);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pIVar3 = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar9 = UnityEngine_UIElements_StyleEnum_Int32Enum___op_Implicit_41273b0
                      (value,(MethodInfo_41273B0 *)
                             MethodInfo_UnityEngine_UIElements_StyleEnum_TextOverflow_op_Implicit);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar3->klass;
      uVar7 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar1 = (pIVar6->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar1->interfaceType + lVar8) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar4 = pIVar6->vtable + (*(int *)((long)&pIVar1->offset + lVar8) + 0x6f);
            goto label_05b185e5;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar3,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x6f);
label_05b185e5:
      (*pVVar4->methodPtr)
                (pIVar3,(UnityEngine_UIElements_StyleEnum_TextOverflow__o)UVar9.fields.m_Value,pVVar4->method)
      ;
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextOutlineWidth
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextOutlineWidth (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b18680

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextOutlineWidth
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  UnityEngine_UIElements_StyleFloat_o value_00;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_075470be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470be = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleFloat__op_Implicit_6b12b80(value,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0xa5);
            goto label_05b18737;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0xa5);
label_05b18737:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextOutlineColor
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextOutlineColor (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x5b18760
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1880c: nop dword ptr [rax]

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextOutlineColor
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *value,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Utility_Color255_o *__this_01;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  UnityEngine_UIElements_StyleColor_o value_00;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_Color_o v;
  UnityEngine_UIElements_StyleColor_o UStack_30;
  
  if (Il2CppMethodInitialized_075470bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470bf = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (value->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      v = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      UnityEngine_UIElements_StyleColor__op_Implicit_6b12570(&UStack_30,v,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar1 = obj->klass;
        uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar4 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar5 = 0;
          do {
            if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
                TypeInfo_UnityEngine_UIElements_IStyle) {
              pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0xa3);
              goto label_05b18847;
            }
            lVar5 = lVar5 + 0x10;
          } while (uVar4 * 0x10 != lVar5);
        }
        pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0xa3);
label_05b18847:
        value_00.fields.m_Value.fields.b = UStack_30.fields.m_Value.fields.b;
        value_00.fields.m_Value.fields.a = UStack_30.fields.m_Value.fields.a;
        value_00.fields.m_Value.fields.r = UStack_30.fields.m_Value.fields.r;
        value_00.fields.m_Value.fields.g = UStack_30.fields.m_Value.fields.g;
        value_00.fields.m_Keyword = UStack_30.fields.m_Keyword;
        (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextShadowColor
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextShadowColor (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x5b18880

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextShadowColor
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *value,
          MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *__this_01;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UnityEngine_UIElements_TextShadow_o v;
  UnityEngine_UIElements_StyleTextShadow_o value_00;
  undefined8 uVar7;
  undefined4 uVar8;
  UnityEngine_UIElements_TextShadow_o *pUVar9;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar10;
  ulong uVar11;
  long lVar12;
  UnityEngine_Color_Fields UVar13;
  UnityEngine_UIElements_StyleTextShadow_Fields UStack_38;
  
  if (Il2CppMethodInitialized_075470c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470c0 = '\x01';
  }
  if ((value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (__this_00 = (value->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
    UVar13 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
    (__this->fields)._textShadow.fields.color.fields = UVar13;
    __this_01 = (__this->fields)._visualElement;
    if (__this_01 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
      obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_01,(MethodInfo *)0x0);
      uVar3 = (__this->fields)._textShadow.fields.color.fields.r;
      uVar7 = (__this->fields)._textShadow.fields.offset;
      uVar8 = (__this->fields)._textShadow.fields.blurRadius;
      v.fields.blurRadius = (float)uVar8;
      v.fields.offset.fields = (UnityEngine_Vector2_Fields)uVar7;
      uVar4 = (__this->fields)._textShadow.fields.color.fields.g;
      pUVar9 = &(__this->fields)._textShadow;
      uVar5 = (pUVar9->fields).color.fields.b;
      uVar6 = (pUVar9->fields).color.fields.a;
      v.fields.color.fields.r = (float)uVar3;
      v.fields.color.fields.g = (float)uVar4;
      v.fields.color.fields.b = (float)uVar5;
      v.fields.color.fields.a = (float)uVar6;
      UnityEngine_UIElements_StyleTextShadow__op_Implicit_6b14800
                ((UnityEngine_UIElements_StyleTextShadow_o *)&UStack_38,v,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar1 = obj->klass;
        uVar11 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar11 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar12) ==
                TypeInfo_UnityEngine_UIElements_IStyle) {
              pVVar10 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar12) + 0x71);
              goto label_05b18985;
            }
            lVar12 = lVar12 + 0x10;
          } while (uVar11 * 0x10 != lVar12);
        }
        pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                            (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x71);
label_05b18985:
        value_00.fields.m_Value.fields.offset.fields.y = UStack_38.m_Value.fields.offset.fields.y;
        value_00.fields.m_Keyword = UStack_38.m_Keyword;
        value_00.fields.m_Value.fields.offset.fields.x = UStack_38.m_Value.fields.offset.fields.x;
        value_00.fields.m_Value.fields.blurRadius = UStack_38.m_Value.fields.blurRadius;
        value_00.fields.m_Value.fields.color.fields.r = UStack_38.m_Value.fields.color.fields.r;
        value_00.fields.m_Value.fields.color.fields.g = UStack_38.m_Value.fields.color.fields.g;
        value_00.fields.m_Value.fields.color.fields.b = UStack_38.m_Value.fields.color.fields.b;
        value_00.fields.m_Value.fields.color.fields.a = UStack_38.m_Value.fields.color.fields.a;
        (*pVVar10->methodPtr)(obj,value_00,pVVar10->method);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextShadowOffset
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextShadowOffset (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float horizontal, float vertical, const MethodInfo* method);
// 0x5b189c0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextShadowOffset
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float horizontal,float vertical,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UnityEngine_UIElements_TextShadow_o v;
  UnityEngine_UIElements_StyleTextShadow_o value;
  undefined8 uVar7;
  undefined4 uVar8;
  UnityEngine_UIElements_TextShadow_o *pUVar9;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar10;
  ulong uVar11;
  long lVar12;
  UnityEngine_UIElements_StyleTextShadow_Fields UStack_38;
  
  if (Il2CppMethodInitialized_075470c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470c1 = '\x01';
  }
  (__this->fields)._textShadow.fields.offset.fields.x = horizontal;
  (__this->fields)._textShadow.fields.offset.fields.y = vertical;
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    uVar3 = (__this->fields)._textShadow.fields.color.fields.r;
    uVar7 = (__this->fields)._textShadow.fields.offset;
    uVar8 = (__this->fields)._textShadow.fields.blurRadius;
    v.fields.blurRadius = (float)uVar8;
    v.fields.offset.fields = (UnityEngine_Vector2_Fields)uVar7;
    uVar4 = (__this->fields)._textShadow.fields.color.fields.g;
    pUVar9 = &(__this->fields)._textShadow;
    uVar5 = (pUVar9->fields).color.fields.b;
    uVar6 = (pUVar9->fields).color.fields.a;
    v.fields.color.fields.r = (float)uVar3;
    v.fields.color.fields.g = (float)uVar4;
    v.fields.color.fields.b = (float)uVar5;
    v.fields.color.fields.a = (float)uVar6;
    UnityEngine_UIElements_StyleTextShadow__op_Implicit_6b14800
              ((UnityEngine_UIElements_StyleTextShadow_o *)&UStack_38,v,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar11 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar11 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar12) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar10 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar12) + 0x71);
            goto label_05b18ac5;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar11 * 0x10 != lVar12);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x71);
label_05b18ac5:
      value.fields.m_Value.fields.offset.fields.y = UStack_38.m_Value.fields.offset.fields.y;
      value.fields.m_Keyword = UStack_38.m_Keyword;
      value.fields.m_Value.fields.offset.fields.x = UStack_38.m_Value.fields.offset.fields.x;
      value.fields.m_Value.fields.blurRadius = UStack_38.m_Value.fields.blurRadius;
      value.fields.m_Value.fields.color.fields.r = UStack_38.m_Value.fields.color.fields.r;
      value.fields.m_Value.fields.color.fields.g = UStack_38.m_Value.fields.color.fields.g;
      value.fields.m_Value.fields.color.fields.b = UStack_38.m_Value.fields.color.fields.b;
      value.fields.m_Value.fields.color.fields.a = UStack_38.m_Value.fields.color.fields.a;
      (*pVVar10->methodPtr)(obj,value,pVVar10->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextShadowHorizontalOffset
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextShadowHorizontalOffset (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b18b00

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextShadowHorizontalOffset
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UnityEngine_UIElements_TextShadow_o v;
  UnityEngine_UIElements_StyleTextShadow_o value_00;
  undefined8 uVar7;
  undefined4 uVar8;
  UnityEngine_UIElements_TextShadow_o *pUVar9;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar10;
  ulong uVar11;
  long lVar12;
  UnityEngine_UIElements_StyleTextShadow_Fields UStack_38;
  
  if (Il2CppMethodInitialized_075470c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470c2 = '\x01';
  }
  (__this->fields)._textShadow.fields.offset.fields.x = value;
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    uVar3 = (__this->fields)._textShadow.fields.color.fields.r;
    uVar7 = (__this->fields)._textShadow.fields.offset;
    uVar8 = (__this->fields)._textShadow.fields.blurRadius;
    v.fields.blurRadius = (float)uVar8;
    v.fields.offset.fields = (UnityEngine_Vector2_Fields)uVar7;
    uVar4 = (__this->fields)._textShadow.fields.color.fields.g;
    pUVar9 = &(__this->fields)._textShadow;
    uVar5 = (pUVar9->fields).color.fields.b;
    uVar6 = (pUVar9->fields).color.fields.a;
    v.fields.color.fields.r = (float)uVar3;
    v.fields.color.fields.g = (float)uVar4;
    v.fields.color.fields.b = (float)uVar5;
    v.fields.color.fields.a = (float)uVar6;
    UnityEngine_UIElements_StyleTextShadow__op_Implicit_6b14800
              ((UnityEngine_UIElements_StyleTextShadow_o *)&UStack_38,v,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar11 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar11 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar12) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar10 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar12) + 0x71);
            goto label_05b18bf5;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar11 * 0x10 != lVar12);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x71);
label_05b18bf5:
      value_00.fields.m_Value.fields.offset.fields.y = UStack_38.m_Value.fields.offset.fields.y;
      value_00.fields.m_Keyword = UStack_38.m_Keyword;
      value_00.fields.m_Value.fields.offset.fields.x = UStack_38.m_Value.fields.offset.fields.x;
      value_00.fields.m_Value.fields.blurRadius = UStack_38.m_Value.fields.blurRadius;
      value_00.fields.m_Value.fields.color.fields.r = UStack_38.m_Value.fields.color.fields.r;
      value_00.fields.m_Value.fields.color.fields.g = UStack_38.m_Value.fields.color.fields.g;
      value_00.fields.m_Value.fields.color.fields.b = UStack_38.m_Value.fields.color.fields.b;
      value_00.fields.m_Value.fields.color.fields.a = UStack_38.m_Value.fields.color.fields.a;
      (*pVVar10->methodPtr)(obj,value_00,pVVar10->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextShadowVerticalOffset
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextShadowVerticalOffset (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b18c30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b18cde: nop 

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextShadowVerticalOffset
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UnityEngine_UIElements_TextShadow_o v;
  UnityEngine_UIElements_StyleTextShadow_o value_00;
  undefined8 uVar7;
  undefined4 uVar8;
  UnityEngine_UIElements_TextShadow_o *pUVar9;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar10;
  ulong uVar11;
  long lVar12;
  UnityEngine_UIElements_StyleTextShadow_Fields UStack_30;
  
  if (Il2CppMethodInitialized_075470c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470c3 = '\x01';
  }
  (__this->fields)._textShadow.fields.offset.fields.y = value;
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    uVar3 = (__this->fields)._textShadow.fields.color.fields.r;
    uVar7 = (__this->fields)._textShadow.fields.offset;
    uVar8 = (__this->fields)._textShadow.fields.blurRadius;
    v.fields.blurRadius = (float)uVar8;
    v.fields.offset.fields = (UnityEngine_Vector2_Fields)uVar7;
    uVar4 = (__this->fields)._textShadow.fields.color.fields.g;
    pUVar9 = &(__this->fields)._textShadow;
    uVar5 = (pUVar9->fields).color.fields.b;
    uVar6 = (pUVar9->fields).color.fields.a;
    v.fields.color.fields.r = (float)uVar3;
    v.fields.color.fields.g = (float)uVar4;
    v.fields.color.fields.b = (float)uVar5;
    v.fields.color.fields.a = (float)uVar6;
    UnityEngine_UIElements_StyleTextShadow__op_Implicit_6b14800
              ((UnityEngine_UIElements_StyleTextShadow_o *)&UStack_30,v,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar11 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar11 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar12) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar10 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar12) + 0x71);
            goto label_05b18d15;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar11 * 0x10 != lVar12);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x71);
label_05b18d15:
      value_00.fields.m_Value.fields.offset.fields.y = UStack_30.m_Value.fields.offset.fields.y;
      value_00.fields.m_Keyword = UStack_30.m_Keyword;
      value_00.fields.m_Value.fields.offset.fields.x = UStack_30.m_Value.fields.offset.fields.x;
      value_00.fields.m_Value.fields.blurRadius = UStack_30.m_Value.fields.blurRadius;
      value_00.fields.m_Value.fields.color.fields.r = UStack_30.m_Value.fields.color.fields.r;
      value_00.fields.m_Value.fields.color.fields.g = UStack_30.m_Value.fields.color.fields.g;
      value_00.fields.m_Value.fields.color.fields.b = UStack_30.m_Value.fields.color.fields.b;
      value_00.fields.m_Value.fields.color.fields.a = UStack_30.m_Value.fields.color.fields.a;
      (*pVVar10->methodPtr)(obj,value_00,pVVar10->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextShadowBlurRadius
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextShadowBlurRadius (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b18d50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b18dfe: nop 

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextShadowBlurRadius
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UnityEngine_UIElements_TextShadow_o v;
  UnityEngine_UIElements_StyleTextShadow_o value_00;
  undefined8 uVar7;
  undefined4 uVar8;
  UnityEngine_UIElements_TextShadow_o *pUVar9;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar10;
  ulong uVar11;
  long lVar12;
  UnityEngine_UIElements_StyleTextShadow_Fields UStack_30;
  
  if (Il2CppMethodInitialized_075470c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470c4 = '\x01';
  }
  (__this->fields)._textShadow.fields.blurRadius = value;
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    uVar3 = (__this->fields)._textShadow.fields.color.fields.r;
    uVar7 = (__this->fields)._textShadow.fields.offset;
    uVar8 = (__this->fields)._textShadow.fields.blurRadius;
    v.fields.blurRadius = (float)uVar8;
    v.fields.offset.fields = (UnityEngine_Vector2_Fields)uVar7;
    uVar4 = (__this->fields)._textShadow.fields.color.fields.g;
    pUVar9 = &(__this->fields)._textShadow;
    uVar5 = (pUVar9->fields).color.fields.b;
    uVar6 = (pUVar9->fields).color.fields.a;
    v.fields.color.fields.r = (float)uVar3;
    v.fields.color.fields.g = (float)uVar4;
    v.fields.color.fields.b = (float)uVar5;
    v.fields.color.fields.a = (float)uVar6;
    UnityEngine_UIElements_StyleTextShadow__op_Implicit_6b14800
              ((UnityEngine_UIElements_StyleTextShadow_o *)&UStack_30,v,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar11 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar11 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar12) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar10 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar12) + 0x71);
            goto label_05b18e35;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar11 * 0x10 != lVar12);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x71);
label_05b18e35:
      value_00.fields.m_Value.fields.offset.fields.y = UStack_30.m_Value.fields.offset.fields.y;
      value_00.fields.m_Keyword = UStack_30.m_Keyword;
      value_00.fields.m_Value.fields.offset.fields.x = UStack_30.m_Value.fields.offset.fields.x;
      value_00.fields.m_Value.fields.blurRadius = UStack_30.m_Value.fields.blurRadius;
      value_00.fields.m_Value.fields.color.fields.r = UStack_30.m_Value.fields.color.fields.r;
      value_00.fields.m_Value.fields.color.fields.g = UStack_30.m_Value.fields.color.fields.g;
      value_00.fields.m_Value.fields.color.fields.b = UStack_30.m_Value.fields.color.fields.b;
      value_00.fields.m_Value.fields.color.fields.a = UStack_30.m_Value.fields.color.fields.a;
      (*pVVar10->methodPtr)(obj,value_00,pVVar10->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextLetterSpacing
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextLetterSpacing (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b18e70

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextLetterSpacing
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  
  if (Il2CppMethodInitialized_075470c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470c5 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13540(value,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x49);
            goto label_05b18f35;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x49);
label_05b18f35:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextWordSpacing
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextWordSpacing (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b18f60

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextWordSpacing
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  
  if (Il2CppMethodInitialized_075470c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470c6 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13540(value,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0xaf);
            goto label_05b19027;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0xaf);
label_05b19027:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextParagraphSpacing
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextParagraphSpacing (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b19050

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextParagraphSpacing
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  
  if (Il2CppMethodInitialized_075470c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470c7 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13540(value,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x8f);
            goto label_05b19117;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x8f);
label_05b19117:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BackgroundColor
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BackgroundColor (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x5b19140
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b191ec: nop dword ptr [rax]

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BackgroundColor
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *color,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Utility_Color255_o *__this_01;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  UnityEngine_UIElements_StyleColor_o value;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_Color_o v;
  UnityEngine_UIElements_StyleColor_o UStack_30;
  
  if (Il2CppMethodInitialized_075470c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470c8 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (color->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      v = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      UnityEngine_UIElements_StyleColor__op_Implicit_6b12570(&UStack_30,v,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar1 = obj->klass;
        uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar4 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar5 = 0;
          do {
            if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
                TypeInfo_UnityEngine_UIElements_IStyle) {
              pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 9);
              goto label_05b19225;
            }
            lVar5 = lVar5 + 0x10;
          } while (uVar4 * 0x10 != lVar5);
        }
        pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,9);
label_05b19225:
        value.fields.m_Value.fields.b = UStack_30.fields.m_Value.fields.b;
        value.fields.m_Value.fields.a = UStack_30.fields.m_Value.fields.a;
        value.fields.m_Value.fields.r = UStack_30.fields.m_Value.fields.r;
        value.fields.m_Value.fields.g = UStack_30.fields.m_Value.fields.g;
        value.fields.m_Keyword = UStack_30.fields.m_Keyword;
        (*pVVar3->methodPtr)(obj,value,pVVar3->method);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$SetBackgroundImage
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__SetBackgroundImage (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicImageBuiltin_o* image, const MethodInfo* method);
// 0x5b19260
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1935f: nop 

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__SetBackgroundImage
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,CustomLogic_CustomLogicImageBuiltin_o *image,
          MethodInfo *method)

{
  UnityEngine_Texture2D_o *v;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  UnityEngine_UIElements_StyleBackground_o value;
  bool bVar3;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  UnityEngine_UIElements_StyleBackground_o UStack_78;
  UnityEngine_Texture2D_o *pUStack_48;
  UnityEngine_Sprite_o *pUStack_40;
  UnityEngine_RenderTexture_o *pUStack_38;
  UnityEngine_UIElements_VectorImage_o *pUStack_30;
  int32_t iStack_28;
  undefined4 uStack_24;
  
  if (Il2CppMethodInitialized_075470c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075470c9 = '\x01';
  }
  if (image != (CustomLogic_CustomLogicImageBuiltin_o *)0x0) {
    v = (image->fields)._currentTexture;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)v,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      __this_00 = (__this->fields)._visualElement;
      if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
        obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
        UStack_78.fields.m_Value.fields.m_RenderTexture = (UnityEngine_RenderTexture_o *)0x0;
        UStack_78.fields.m_Value.fields.m_VectorImage = (UnityEngine_UIElements_VectorImage_o *)0x0;
        UStack_78.fields.m_Value.fields.m_Texture = (UnityEngine_Texture2D_o *)0x0;
        UStack_78.fields.m_Value.fields.m_Sprite = (UnityEngine_Sprite_o *)0x0;
        UStack_78.fields.m_Keyword = 0;
        UStack_78.fields._36_4_ = 0;
        UnityEngine_UIElements_StyleBackground___ctor_6b11ab0(&UStack_78,v,(MethodInfo *)0x0);
        if (obj != (Il2CppObject *)0x0) {
          iStack_28 = UStack_78.fields.m_Keyword;
          uStack_24 = UStack_78.fields._36_4_;
          pUStack_38 = UStack_78.fields.m_Value.fields.m_RenderTexture;
          pUStack_30 = UStack_78.fields.m_Value.fields.m_VectorImage;
          pUStack_48 = UStack_78.fields.m_Value.fields.m_Texture;
          pUStack_40 = UStack_78.fields.m_Value.fields.m_Sprite;
          pIVar1 = obj->klass;
          uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
          if (uVar5 != 0) {
            pIVar2 = (pIVar1->_1).interfaceOffsets;
            lVar6 = 0;
            do {
              if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar6) ==
                  TypeInfo_UnityEngine_UIElements_IStyle) {
                pVVar4 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar6) + 0xb);
                goto label_05b19395;
              }
              lVar6 = lVar6 + 0x10;
            } while (uVar5 * 0x10 != lVar6);
          }
          pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                             (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0xb);
label_05b19395:
          value.fields.m_Value.fields.m_Sprite = pUStack_40;
          value.fields.m_Value.fields.m_Texture = pUStack_48;
          value.fields.m_Value.fields.m_RenderTexture = pUStack_38;
          value.fields.m_Value.fields.m_VectorImage = pUStack_30;
          value.fields.m_Keyword = iStack_28;
          value.fields._36_4_ = uStack_24;
          (*pVVar4->methodPtr)(obj,value,pVVar4->method);
          return __this;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderColor
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderColor (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x5b193e0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderColor
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *color,
          MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  CustomLogic_CustomLogicVisualElementBuiltin__BorderColorLeft(__this,color,method);
  if (__this == (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicVisualElementBuiltin__BorderColorTop(__this,color,method_00);
  CustomLogic_CustomLogicVisualElementBuiltin__BorderColorRight(__this,color,method_01);
  pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderColorBottom(__this,color,method_02);
  return pCVar1;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderColorLeft
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderColorLeft (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x5b19430
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b194dc: nop dword ptr [rax]

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderColorLeft
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *color,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Utility_Color255_o *__this_01;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  UnityEngine_UIElements_StyleColor_o value;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_Color_o v;
  UnityEngine_UIElements_StyleColor_o local_30;
  
  if (Il2CppMethodInitialized_075470ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470ca = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (color->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      v = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      UnityEngine_UIElements_StyleColor__op_Implicit_6b12570(&local_30,v,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar1 = obj->klass;
        uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar4 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar5 = 0;
          do {
            if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
                TypeInfo_UnityEngine_UIElements_IStyle) {
              pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x1d);
              goto label_05b19515;
            }
            lVar5 = lVar5 + 0x10;
          } while (uVar4 * 0x10 != lVar5);
        }
        pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x1d);
label_05b19515:
        value.fields.m_Value.fields.b = local_30.fields.m_Value.fields.b;
        value.fields.m_Value.fields.a = local_30.fields.m_Value.fields.a;
        value.fields.m_Value.fields.r = local_30.fields.m_Value.fields.r;
        value.fields.m_Value.fields.g = local_30.fields.m_Value.fields.g;
        value.fields.m_Keyword = local_30.fields.m_Keyword;
        (*pVVar3->methodPtr)(obj,value,pVVar3->method);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderColorTop
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderColorTop (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x5b19550
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b195fc: nop dword ptr [rax]

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderColorTop
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *color,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Utility_Color255_o *__this_01;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  UnityEngine_UIElements_StyleColor_o value;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_Color_o v;
  UnityEngine_UIElements_StyleColor_o local_30;
  
  if (Il2CppMethodInitialized_075470cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470cb = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (color->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      v = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      UnityEngine_UIElements_StyleColor__op_Implicit_6b12570(&local_30,v,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar1 = obj->klass;
        uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar4 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar5 = 0;
          do {
            if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
                TypeInfo_UnityEngine_UIElements_IStyle) {
              pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x25);
              goto label_05b19635;
            }
            lVar5 = lVar5 + 0x10;
          } while (uVar4 * 0x10 != lVar5);
        }
        pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x25);
label_05b19635:
        value.fields.m_Value.fields.b = local_30.fields.m_Value.fields.b;
        value.fields.m_Value.fields.a = local_30.fields.m_Value.fields.a;
        value.fields.m_Value.fields.r = local_30.fields.m_Value.fields.r;
        value.fields.m_Value.fields.g = local_30.fields.m_Value.fields.g;
        value.fields.m_Keyword = local_30.fields.m_Keyword;
        (*pVVar3->methodPtr)(obj,value,pVVar3->method);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderColorRight
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderColorRight (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x5b19670
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1971c: nop dword ptr [rax]

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderColorRight
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *color,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Utility_Color255_o *__this_01;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  UnityEngine_UIElements_StyleColor_o value;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_Color_o v;
  UnityEngine_UIElements_StyleColor_o local_30;
  
  if (Il2CppMethodInitialized_075470cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470cc = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (color->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      v = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      UnityEngine_UIElements_StyleColor__op_Implicit_6b12570(&local_30,v,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar1 = obj->klass;
        uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar4 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar5 = 0;
          do {
            if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
                TypeInfo_UnityEngine_UIElements_IStyle) {
              pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x21);
              goto label_05b19755;
            }
            lVar5 = lVar5 + 0x10;
          } while (uVar4 * 0x10 != lVar5);
        }
        pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x21);
label_05b19755:
        value.fields.m_Value.fields.b = local_30.fields.m_Value.fields.b;
        value.fields.m_Value.fields.a = local_30.fields.m_Value.fields.a;
        value.fields.m_Value.fields.r = local_30.fields.m_Value.fields.r;
        value.fields.m_Value.fields.g = local_30.fields.m_Value.fields.g;
        value.fields.m_Keyword = local_30.fields.m_Keyword;
        (*pVVar3->methodPtr)(obj,value,pVVar3->method);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderColorBottom
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderColorBottom (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x5b19790
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1983c: nop dword ptr [rax]

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderColorBottom
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *color,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Utility_Color255_o *__this_01;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  UnityEngine_UIElements_StyleColor_o value;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_Color_o v;
  UnityEngine_UIElements_StyleColor_o UStack_30;
  
  if (Il2CppMethodInitialized_075470cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470cd = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (color->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      v = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      UnityEngine_UIElements_StyleColor__op_Implicit_6b12570(&UStack_30,v,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar1 = obj->klass;
        uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar4 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar5 = 0;
          do {
            if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
                TypeInfo_UnityEngine_UIElements_IStyle) {
              pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x15);
              goto label_05b19875;
            }
            lVar5 = lVar5 + 0x10;
          } while (uVar4 * 0x10 != lVar5);
        }
        pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x15);
label_05b19875:
        value.fields.m_Value.fields.b = UStack_30.fields.m_Value.fields.b;
        value.fields.m_Value.fields.a = UStack_30.fields.m_Value.fields.a;
        value.fields.m_Value.fields.r = UStack_30.fields.m_Value.fields.r;
        value.fields.m_Value.fields.g = UStack_30.fields.m_Value.fields.g;
        value.fields.m_Keyword = UStack_30.fields.m_Keyword;
        (*pVVar3->methodPtr)(obj,value,pVVar3->method);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderWidth
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderWidth (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b198b0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderWidth
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthLeft(__this,value,method);
  if (__this == (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthTop(__this,value,method);
  CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthRight(__this,value,method);
  pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthBottom(__this,value,method);
  return pCVar1;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderWidthLeft
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthLeft (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b19900

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthLeft
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  UnityEngine_UIElements_StyleFloat_o value_00;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_075470ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470ce = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleFloat__op_Implicit_6b12b80(value,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x1f);
            goto label_05b199b5;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x1f);
label_05b199b5:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderWidthTop
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthTop (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b199e0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthTop
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  UnityEngine_UIElements_StyleFloat_o value_00;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_075470cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470cf = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleFloat__op_Implicit_6b12b80(value,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x2b);
            goto label_05b19a95;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x2b);
label_05b19a95:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderWidthRight
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthRight (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b19ac0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthRight
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  UnityEngine_UIElements_StyleFloat_o value_00;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_075470d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470d0 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleFloat__op_Implicit_6b12b80(value,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x23);
            goto label_05b19b75;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x23);
label_05b19b75:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderWidthBottom
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthBottom (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b19ba0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthBottom
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  UnityEngine_UIElements_StyleFloat_o value_00;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_075470d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470d1 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleFloat__op_Implicit_6b12b80(value,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x1b);
            goto label_05b19c55;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x1b);
label_05b19c55:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderRadius
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderRadius (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b19c80

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderRadius
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopLeft(__this,value,method);
  if (__this == (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopRight(__this,value,method);
  CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomLeft(__this,value,method);
  pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomRight(__this,value,method);
  return pCVar1;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderRadiusTopLeft
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopLeft (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b19cd0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopLeft
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  
  if (Il2CppMethodInitialized_075470d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470d2 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13540(value,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x27);
            goto label_05b19d95;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x27);
label_05b19d95:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderRadiusTopRight
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopRight (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b19dc0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopRight
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  
  if (Il2CppMethodInitialized_075470d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470d3 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13540(value,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x29);
            goto label_05b19e85;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x29);
label_05b19e85:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderRadiusBottomLeft
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomLeft (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b19eb0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomLeft
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  
  if (Il2CppMethodInitialized_075470d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470d4 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13540(value,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x17);
            goto label_05b19f75;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x17);
label_05b19f75:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderRadiusBottomRight
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomRight (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b19fa0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomRight
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_StyleLength_o value_00;
  
  if (Il2CppMethodInitialized_075470d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470d5 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    value_00 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13540(value,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x19);
            goto label_05b1a065;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x19);
label_05b1a065:
      (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$OverflowX
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__OverflowX (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5b1a090

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__OverflowX
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppRuntimeInterfaceOffsetPair *pIVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  ulong uVar7;
  long lVar8;
  UnityEngine_UIElements_StyleEnum_T__o UVar9;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_075470d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UIElements_Overflow);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_StyleEnum_Overflow_op_Implicit);
    Il2CppMethodInitialized_075470d6 = '\x01';
  }
  handle = TypeRef_UnityEngine_UIElements_Overflow;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
  if (!bVar2) {
    iStack_30 = value;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
    pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown overflow value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar3,(MethodInfo *)0x0);
    pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar6);
    System_ArgumentException___ctor_54186d0(__this_01,pSVar5,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_OverflowX);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pIVar3 = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar9 = UnityEngine_UIElements_StyleEnum_Int32Enum___op_Implicit_41273b0
                      (value,(MethodInfo_41273B0 *)
                             MethodInfo_UnityEngine_UIElements_StyleEnum_Overflow_op_Implicit);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar3->klass;
      uVar7 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar1 = (pIVar6->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar1->interfaceType + lVar8) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar4 = pIVar6->vtable + (*(int *)((long)&pIVar1->offset + lVar8) + 0x5d);
            goto label_05b1a1e5;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar3,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x5d);
label_05b1a1e5:
      (*pVVar4->methodPtr)
                (pIVar3,(UnityEngine_UIElements_StyleEnum_Overflow__o)UVar9.fields.m_Value,pVVar4->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$OverflowY
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__OverflowY (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5b1a280

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__OverflowY
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppRuntimeInterfaceOffsetPair *pIVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  ulong uVar7;
  long lVar8;
  UnityEngine_UIElements_StyleEnum_T__o UVar9;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_075470d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UIElements_Overflow);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_StyleEnum_Overflow_op_Implicit);
    Il2CppMethodInitialized_075470d7 = '\x01';
  }
  handle = TypeRef_UnityEngine_UIElements_Overflow;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
  if (!bVar2) {
    iStack_30 = value;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
    pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown overflow value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar3,(MethodInfo *)0x0);
    pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar6);
    System_ArgumentException___ctor_54186d0(__this_01,pSVar5,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_OverflowY);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pIVar3 = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar9 = UnityEngine_UIElements_StyleEnum_Int32Enum___op_Implicit_41273b0
                      (value,(MethodInfo_41273B0 *)
                             MethodInfo_UnityEngine_UIElements_StyleEnum_Overflow_op_Implicit);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar3->klass;
      uVar7 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar1 = (pIVar6->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar1->interfaceType + lVar8) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar4 = pIVar6->vtable + (*(int *)((long)&pIVar1->offset + lVar8) + 0x5d);
            goto label_05b1a3d5;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar3,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x5d);
label_05b1a3d5:
      (*pVVar4->methodPtr)
                (pIVar3,(UnityEngine_UIElements_StyleEnum_Overflow__o)UVar9.fields.m_Value,pVVar4->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$SetTransformOrigin
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__SetTransformOrigin (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float x, float y, bool percentage, const MethodInfo* method);
// 0x5b1a470

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__SetTransformOrigin
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float x,float y,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  UnityEngine_UIElements_TransformOrigin_o v;
  UnityEngine_UIElements_StyleTransformOrigin_o value;
  UnityEngine_UIElements_Length_Fields x_00;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_Length_Fields UStack_78;
  UnityEngine_UIElements_Length_Fields UStack_70;
  float fStack_68;
  int32_t iStack_64;
  UnityEngine_UIElements_TransformOrigin_o UStack_58;
  UnityEngine_UIElements_StyleTransformOrigin_o UStack_38;
  
  if (Il2CppMethodInitialized_075470d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470d8 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UStack_78.m_Value = 0.0;
    UStack_78.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&UStack_78,x,(uint)percentage,(MethodInfo *)0x0);
    x_00 = UStack_78;
    UStack_78.m_Value = 0.0;
    UStack_78.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&UStack_78,y,(uint)percentage,(MethodInfo *)0x0);
    UStack_58.fields.m_X.fields.m_Value = 0.0;
    UStack_58.fields.m_X.fields.m_Unit = 0;
    UStack_58.fields.m_Y.fields.m_Value = 0.0;
    UStack_58.fields.m_Y.fields.m_Unit = 0;
    UStack_58.fields.m_Z = 0.0;
    UnityEngine_UIElements_TransformOrigin___ctor
              (&UStack_58,(UnityEngine_UIElements_Length_o)x_00,(UnityEngine_UIElements_Length_o)UStack_78,0.0
               ,(MethodInfo *)0x0);
    v.fields.m_Y.fields = UStack_58.fields.m_Y.fields;
    v.fields.m_X.fields = UStack_58.fields.m_X.fields;
    v.fields.m_Z = UStack_58.fields.m_Z;
    UnityEngine_UIElements_StyleTransformOrigin__op_Implicit_6b14c10(&UStack_38,v,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      fStack_68 = UStack_38.fields.m_Value.fields.m_Z;
      iStack_64 = UStack_38.fields.m_Keyword;
      UStack_78 = UStack_38.fields.m_Value.fields.m_X.fields;
      UStack_70 = UStack_38.fields.m_Value.fields.m_Y.fields;
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x75);
            goto label_05b1a5c5;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x75);
label_05b1a5c5:
      value.fields.m_Value.fields.m_Y.fields = UStack_70;
      value.fields.m_Value.fields.m_X.fields = UStack_78;
      value.fields.m_Value.fields.m_Z = (float)_fStack_68;
      value.fields.m_Keyword = SUB84(_fStack_68,4);
      (*pVVar3->methodPtr)(obj,value,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TransformTranslate
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TransformTranslate (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float x, float y, bool percentage, const MethodInfo* method);
// 0x5b1a600
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b1a71e: nop 

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TransformTranslate
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float x,float y,bool percentage,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  UnityEngine_UIElements_Translate_o v;
  UnityEngine_UIElements_StyleTranslate_o value;
  UnityEngine_UIElements_Length_Fields x_00;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_Length_Fields UStack_78;
  float fStack_70;
  int32_t iStack_6c;
  float fStack_68;
  bool bStack_64;
  undefined3 uStack_63;
  int32_t iStack_60;
  UnityEngine_UIElements_Translate_o UStack_58;
  UnityEngine_UIElements_StyleTranslate_o UStack_40;
  
  if (Il2CppMethodInitialized_075470d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470d9 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UStack_78.m_Value = 0.0;
    UStack_78.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&UStack_78,x,(uint)percentage,(MethodInfo *)0x0);
    x_00 = UStack_78;
    UStack_78.m_Value = 0.0;
    UStack_78.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor_6b0ea70
              ((UnityEngine_UIElements_Length_o *)&UStack_78,y,(uint)percentage,(MethodInfo *)0x0);
    UStack_58.fields.m_X.fields.m_Value = 0.0;
    UStack_58.fields.m_X.fields.m_Unit = 0;
    UStack_58.fields.m_Y.fields.m_Value = 0.0;
    UStack_58.fields.m_Y.fields.m_Unit = 0;
    UStack_58.fields.m_Z = 0.0;
    UStack_58.fields.m_isNone = false;
    UStack_58.fields._21_3_ = 0;
    UnityEngine_UIElements_Translate___ctor
              (&UStack_58,(UnityEngine_UIElements_Length_o)x_00,(UnityEngine_UIElements_Length_o)UStack_78,0.0
               ,(MethodInfo *)0x0);
    v.fields.m_Y.fields.m_Value = UStack_58.fields.m_Y.fields.m_Value;
    v.fields.m_X.fields = UStack_58.fields.m_X.fields;
    v.fields.m_Y.fields.m_Unit = UStack_58.fields.m_Y.fields.m_Unit;
    v.fields.m_Z = UStack_58.fields.m_Z;
    v.fields._20_4_ = UStack_58.fields._20_4_;
    UnityEngine_UIElements_StyleTranslate__op_Implicit_6b15100(&UStack_40,v,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      fStack_68 = UStack_40.fields.m_Value.fields.m_Z;
      bStack_64 = UStack_40.fields.m_Value.fields.m_isNone;
      uStack_63 = UStack_40.fields.m_Value.fields._21_3_;
      iStack_60 = UStack_40.fields.m_Keyword;
      UStack_78 = UStack_40.fields.m_Value.fields.m_X.fields;
      fStack_70 = UStack_40.fields.m_Value.fields.m_Y.fields.m_Value;
      iStack_6c = UStack_40.fields.m_Value.fields.m_Y.fields.m_Unit;
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x7f);
            goto label_05b1a755;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x7f);
label_05b1a755:
      value.fields.m_Value.fields.m_Y.fields.m_Value = fStack_70;
      value.fields.m_Value.fields.m_X.fields = UStack_78;
      value.fields.m_Value.fields.m_Y.fields.m_Unit = iStack_6c;
      value.fields.m_Value.fields.m_Z = fStack_68;
      value.fields.m_Value.fields._20_4_ = (int)_bStack_64;
      value.fields.m_Keyword = SUB84(_bStack_64,4);
      (*pVVar3->methodPtr)(obj,value,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TransformScale
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TransformScale (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float x, float y, const MethodInfo* method);
// 0x5b1a790

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TransformScale
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float x,float y,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  UnityEngine_Vector2_o scale;
  UnityEngine_UIElements_StyleScale_o value;
  UnityEngine_UIElements_Scale_o v;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_UIElements_Scale_o UStack_78;
  UnityEngine_Vector3_Fields UStack_68;
  bool bStack_5c;
  undefined3 uStack_5b;
  int32_t iStack_58;
  UnityEngine_UIElements_StyleScale_o UStack_50;
  float fStack_38;
  float fStack_28;
  
  fStack_38 = y;
  fStack_28 = x;
  if (Il2CppMethodInitialized_075470da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470da = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    obj = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UStack_78.fields.m_Scale.fields.x = 0.0;
    UStack_78.fields.m_Scale.fields.y = 0.0;
    UStack_78.fields.m_Scale.fields.z = 0.0;
    UStack_78.fields.m_IsNone = false;
    UStack_78.fields._13_3_ = 0;
    scale.fields.y = fStack_38;
    scale.fields.x = fStack_28;
    UnityEngine_UIElements_Scale___ctor(&UStack_78,scale,(MethodInfo *)0x0);
    v.fields.m_Scale.fields.z = UStack_78.fields.m_Scale.fields.z;
    v.fields.m_IsNone = UStack_78.fields.m_IsNone;
    v.fields._13_3_ = UStack_78.fields._13_3_;
    v.fields.m_Scale.fields.x = UStack_78.fields.m_Scale.fields.x;
    v.fields.m_Scale.fields.y = UStack_78.fields.m_Scale.fields.y;
    UnityEngine_UIElements_StyleScale__op_Implicit_6b14480(&UStack_50,v,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      iStack_58 = UStack_50.fields.m_Keyword;
      UStack_68.x = UStack_50.fields.m_Value.fields.m_Scale.fields.x;
      UStack_68.y = UStack_50.fields.m_Value.fields.m_Scale.fields.y;
      UStack_68.z = UStack_50.fields.m_Value.fields.m_Scale.fields.z;
      bStack_5c = UStack_50.fields.m_Value.fields.m_IsNone;
      uStack_5b = UStack_50.fields.m_Value.fields._13_3_;
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0x6d);
            goto label_05b1a885;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x6d);
label_05b1a885:
      value.fields.m_Value.fields.m_Scale.fields.z = UStack_68.z;
      value.fields.m_Value.fields.m_IsNone = bStack_5c;
      value.fields.m_Value.fields._13_3_ = uStack_5b;
      value.fields.m_Value.fields.m_Scale.fields.x = UStack_68.x;
      value.fields.m_Value.fields.m_Scale.fields.y = UStack_68.y;
      value.fields.m_Keyword = iStack_58;
      (*pVVar3->methodPtr)(obj,value,pVVar3->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TransformRotate
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TransformRotate (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float angle, int32_t angleUnit, const MethodInfo* method);
// 0x5b1a8c0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TransformRotate
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float angle,int32_t angleUnit,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Il2CppRuntimeInterfaceOffsetPair *pIVar1;
  UnityEngine_UIElements_Rotate_o v;
  UnityEngine_UIElements_StyleRotate_o value;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  ulong uVar7;
  long lVar8;
  UnityEngine_UIElements_Angle_Fields UStack_90;
  UnityEngine_UIElements_Angle_Fields UStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  bool bStack_74;
  undefined3 uStack_73;
  int32_t iStack_70;
  UnityEngine_UIElements_Rotate_o UStack_68;
  UnityEngine_UIElements_StyleRotate_o UStack_48;
  
  if (Il2CppMethodInitialized_075470db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UIElements_AngleUnit);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    Il2CppMethodInitialized_075470db = '\x01';
  }
  handle = TypeRef_UnityEngine_UIElements_AngleUnit;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  UStack_88.m_Value = (float)angleUnit;
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&UStack_88);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
  if (!bVar2) {
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&UStack_88);
    pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown angle unit: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar3,(MethodInfo *)0x0);
    pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar6);
    System_ArgumentException___ctor_54186d0(__this_01,pSVar5,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_TransformRotate);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pIVar3 = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UStack_90.m_Value = 0.0;
    UStack_90.m_Unit = 0;
    UnityEngine_UIElements_Angle___ctor
              ((UnityEngine_UIElements_Angle_o *)&UStack_90,angle,angleUnit,(MethodInfo *)0x0);
    UStack_68.fields.m_Angle.fields.m_Value = 0.0;
    UStack_68.fields.m_Angle.fields.m_Unit = 0;
    UStack_68.fields.m_Axis.fields.x = 0.0;
    UStack_68.fields.m_Axis.fields.y = 0.0;
    UStack_68.fields.m_Axis.fields.z = 0.0;
    UStack_68.fields.m_IsNone = false;
    UStack_68.fields._21_3_ = 0;
    UnityEngine_UIElements_Rotate___ctor_6b10a30
              (&UStack_68,(UnityEngine_UIElements_Angle_o)UStack_90,(MethodInfo *)0x0);
    v.fields.m_Axis.fields.x = UStack_68.fields.m_Axis.fields.x;
    v.fields.m_Angle.fields = UStack_68.fields.m_Angle.fields;
    v.fields.m_Axis.fields.y = UStack_68.fields.m_Axis.fields.y;
    v.fields.m_Axis.fields.z = UStack_68.fields.m_Axis.fields.z;
    v.fields._20_4_ = UStack_68.fields._20_4_;
    UnityEngine_UIElements_StyleRotate__op_Implicit_6b13fc0(&UStack_48,v,(MethodInfo *)0x0);
    if (pIVar3 != (Il2CppObject *)0x0) {
      fStack_78 = UStack_48.fields.m_Value.fields.m_Axis.fields.z;
      bStack_74 = UStack_48.fields.m_Value.fields.m_IsNone;
      uStack_73 = UStack_48.fields.m_Value.fields._21_3_;
      iStack_70 = UStack_48.fields.m_Keyword;
      UStack_88 = UStack_48.fields.m_Value.fields.m_Angle.fields;
      fStack_80 = UStack_48.fields.m_Value.fields.m_Axis.fields.x;
      fStack_7c = UStack_48.fields.m_Value.fields.m_Axis.fields.y;
      pIVar6 = pIVar3->klass;
      uVar7 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar1 = (pIVar6->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar1->interfaceType + lVar8) ==
              TypeInfo_UnityEngine_UIElements_IStyle) {
            pVVar4 = pIVar6->vtable + (*(int *)((long)&pIVar1->offset + lVar8) + 0x6b);
            goto label_05b1aa75;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar3,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x6b);
label_05b1aa75:
      value.fields.m_Value.fields.m_Axis.fields.x = fStack_80;
      value.fields.m_Value.fields.m_Angle.fields = UStack_88;
      value.fields.m_Value.fields.m_Axis.fields.y = fStack_7c;
      value.fields.m_Value.fields.m_Axis.fields.z = fStack_78;
      value.fields.m_Value.fields._20_4_ = (int)_bStack_74;
      value.fields.m_Keyword = SUB84(_bStack_74,4);
      (*pVVar4->methodPtr)(pIVar3,value,pVVar4->method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$GetLength
// il2cpp: UnityEngine_UIElements_Length_o CustomLogic_CustomLogicVisualElementBuiltin__GetLength (float value, bool percentage, const MethodInfo* method);
// 0x5b15930

UnityEngine_UIElements_Length_o
CustomLogic_CustomLogicVisualElementBuiltin__GetLength(float value,bool percentage,MethodInfo *method)

{
  undefined7 in_register_00000039;
  UnityEngine_UIElements_Length_Fields UStack_8;
  
  UStack_8.m_Value = 0.0;
  UStack_8.m_Unit = 0;
  UnityEngine_UIElements_Length___ctor_6b0ea70
            ((UnityEngine_UIElements_Length_o *)&UStack_8,value,
             (int32_t)CONCAT71(in_register_00000039,percentage),(MethodInfo *)0x0);
  return (UnityEngine_UIElements_Length_o)UStack_8;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicVisualElementBuiltin__get_ClassName (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, const MethodInfo* method);
// 0x5b1ab20

System_String_o *
CustomLogic_CustomLogicVisualElementBuiltin__get_ClassName
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075470dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"VisualElement");
    Il2CppMethodInitialized_075470dc = '\x01';
  }
  return "VisualElement";
}


// CustomLogic.CustomLogicVisualElementBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicVisualElementBuiltin__get_IsAbstract (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, const MethodInfo* method);
// 0x5b1ab50

bool CustomLogic_CustomLogicVisualElementBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicVisualElementBuiltin__get_IsStatic (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, const MethodInfo* method);
// 0x5b1ab60

bool CustomLogic_CustomLogicVisualElementBuiltin__get_IsStatic
               (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicVisualElementBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, const MethodInfo* method);
// 0x5b1ab70

bool CustomLogic_CustomLogicVisualElementBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


