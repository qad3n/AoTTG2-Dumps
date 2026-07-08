// Type: CustomLogic.CustomLogicVisualElementBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicVisualElementBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicVisualElementBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3efb0e0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this;
  undefined1 local_14 [4];
  
  il2cpp_glue_01f2f1a0();
  pSVar1 = System_Int32__ToString((int32_t)local_14,(MethodInfo *)0x0);
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicVisualElementBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVisualElementBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3f32b80

void CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703cf8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703cf8 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3f32bf0

void CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Add>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Add_b__3_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f32c00

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__Add>b__3_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703cf9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVisualElementBuiltin_ConvertTo_Custom);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703cf9 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pCVar1 = (CustomLogic_CustomLogicVisualElementBuiltin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVisualElementBuiltin_ConvertTo_Custom);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__Add(__c,pCVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Remove>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__4_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f32c90

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__Remove>b__4_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *visualElement;
  
  if (DAT_05703cfa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVisualElementBuiltin_ConvertTo_Custom);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703cfa = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    visualElement =
         (CustomLogic_CustomLogicVisualElementBuiltin_o *)
         CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVisualElementBuiltin_ConvertTo_Custom);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      CustomLogic_CustomLogicVisualElementBuiltin__Remove(__c,visualElement,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveFromHierarchy>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RemoveFromHierarchy_b__5_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f32d30

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__RemoveFromHierarchy>b__5_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
    CustomLogic_CustomLogicVisualElementBuiltin__RemoveFromHierarchy(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__6_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f32d50

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__Clear>b__6_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
    CustomLogic_CustomLogicVisualElementBuiltin__Clear(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetElementAt>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__GetElementAt_b__7_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f32d70

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__GetElementAt>b__7_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t index;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703cfb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703cfb = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__GetElementAt
                         (__c,index,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__QueryByName>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__QueryByName_b__8_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f32e00

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__QueryByName>b__8_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703cfc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703cfc = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    name = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__QueryByName(__c,name,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__QueryByClassName>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__QueryByClassName_b__9_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f32e90

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__QueryByClassName>b__9_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *className;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703cfd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703cfd = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    className = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__QueryByClassName
                         (__c,className,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterMouseEnterEventCallback>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RegisterMouseEnterEventCallback_b__10_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f32f20

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__RegisterMouseEnterEventCallback>b__10_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703cfe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703cfe = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__RegisterMouseEnterEventCallback();
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterMouseLeaveEventCallback>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RegisterMouseLeaveEventCallback_b__11_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f32fb0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__RegisterMouseLeaveEventCallback>b__11_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703cff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703cff = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__RegisterMouseLeaveEventCallback();
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterClickEventCallback>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RegisterClickEventCallback_b__12_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f33040

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__RegisterClickEventCallback>b__12_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d00 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d00 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__RegisterClickEventCallback();
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterFocusInEventCallback>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RegisterFocusInEventCallback_b__13_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f330d0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__RegisterFocusInEventCallback>b__13_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d01 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d01 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__RegisterFocusInEventCallback();
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterFocusOutEventCallback>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__RegisterFocusOutEventCallback_b__14_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f33160

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__RegisterFocusOutEventCallback>b__14_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d02 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d02 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__RegisterFocusOutEventCallback();
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Opacity>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Opacity_b__15_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f331f0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__Opacity>b__15_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d03 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d03 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__Opacity(__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Active>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Active_b__16_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f33280

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__Active>b__16_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  byte bVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  bool_conflict bVar2;
  
  if (DAT_05703d04 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d04 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      bVar1 = 1;
    }
    else {
      if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
      bVar1 = (byte)bVar2;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__Active
                         (__c,(uint)bVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Visible>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Visible_b__17_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f33320

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__Visible>b__17_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  byte bVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  bool_conflict bVar2;
  
  if (DAT_05703d05 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d05 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      bVar1 = 1;
    }
    else {
      if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
      bVar1 = (byte)bVar2;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__Visible
                         (__c,(uint)bVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransitionDuration>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TransitionDuration_b__18_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f333c0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__TransitionDuration>b__18_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d06 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d06 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TransitionDuration
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Absolute>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Absolute_b__19_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f33450

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__Absolute>b__19_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  byte bVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  bool_conflict bVar2;
  
  if (DAT_05703d07 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d07 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      bVar1 = 1;
    }
    else {
      if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
      bVar1 = (byte)bVar2;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__Absolute
                         (__c,(uint)bVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Left>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Left_b__20_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f334f0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__Left>b__20_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d08 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d08 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__Left
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Top>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Top_b__21_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f335e0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__Top>b__21_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d09 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d09 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__Top
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Right>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Right_b__22_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f336d0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__Right>b__22_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d0a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d0a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__Right
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Bottom>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Bottom_b__23_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f337c0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__Bottom>b__23_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d0b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d0b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__Bottom
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FlexShrink>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FlexShrink_b__24_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f338b0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__FlexShrink>b__24_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d0c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d0c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__FlexShrink(__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FlexGrow>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FlexGrow_b__25_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f33940

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__FlexGrow>b__25_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d0d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d0d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__FlexGrow(__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FlexDirection>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FlexDirection_b__26_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f339d0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__FlexDirection>b__26_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d0e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d0e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__FlexDirection
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FlexWrap>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FlexWrap_b__27_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f33a60

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__FlexWrap>b__27_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d0f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d0f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__FlexWrap(__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__AlignItems>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__AlignItems_b__28_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f33af0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__AlignItems>b__28_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d10 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d10 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__AlignItems(__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__JustifyContent>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__JustifyContent_b__29_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f33b80

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__JustifyContent>b__29_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d11 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d11 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__JustifyContent
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__AlignSelf>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__AlignSelf_b__30_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f33c10

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__AlignSelf>b__30_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d12 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d12 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__AlignSelf(__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Width>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Width_b__31_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f33ca0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__Width>b__31_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d13 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d13 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__Width
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Height>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Height_b__32_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f33d90

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__Height>b__32_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d14 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d14 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__Height
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MinWidth>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MinWidth_b__33_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f33e80

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__MinWidth>b__33_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d15 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d15 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__MinWidth
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MinHeight>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MinHeight_b__34_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f33f70

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__MinHeight>b__34_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d16 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d16 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__MinHeight
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MaxWidth>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MaxWidth_b__35_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f34060

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__MaxWidth>b__35_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d17 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d17 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__MaxWidth
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MaxHeight>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MaxHeight_b__36_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f34150

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__MaxHeight>b__36_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d18 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d18 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__MaxHeight
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__AspectRatio>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__AspectRatio_b__37_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f34240

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__AspectRatio>b__37_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int32_t mode;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  float value;
  
  if (DAT_05703d19 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d19 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    mode = 0;
    if (1 < (int)__a->max_length) {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      mode = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicVisualElementBuiltin__AspectRatio
                         (__c,value,mode,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Margin>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Margin_b__38_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f34330

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__Margin>b__38_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d1a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d1a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__Margin
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MarginLeft>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MarginLeft_b__39_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f34420

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__MarginLeft>b__39_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d1b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d1b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__MarginLeft
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MarginTop>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MarginTop_b__40_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f34510

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__MarginTop>b__40_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d1c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d1c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__MarginTop
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MarginRight>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MarginRight_b__41_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f34600

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__MarginRight>b__41_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d1d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d1d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__MarginRight
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MarginBottom>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__MarginBottom_b__42_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f346f0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__MarginBottom>b__42_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d1e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d1e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__MarginBottom
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Padding>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Padding_b__43_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f347e0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__Padding>b__43_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d1f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d1f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__Padding
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__PaddingLeft>b__44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__PaddingLeft_b__44_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f348d0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__PaddingLeft>b__44_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d20 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d20 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__PaddingLeft
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__PaddingTop>b__45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__PaddingTop_b__45_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f349c0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__PaddingTop>b__45_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d21 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d21 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__PaddingTop
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__PaddingRight>b__46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__PaddingRight_b__46_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f34ab0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__PaddingRight>b__46_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d22 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d22 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__PaddingRight
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__PaddingBottom>b__47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__PaddingBottom_b__47_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f34ba0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__PaddingBottom>b__47_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d23 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d23 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__PaddingBottom
                         (__c,value,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FontStyle>b__48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FontStyle_b__48_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f34c90

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__FontStyle>b__48_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d24 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d24 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__FontStyle(__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FontSize>b__49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__FontSize_b__49_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f34d20

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__FontSize>b__49_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  int32_t scaleMode;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float value;
  
  if (DAT_05703d25 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d25 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    scaleMode = 0;
    if ((int)__a->max_length < 2) {
      uVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
      if (2 < (int)__a->max_length) {
        pIVar1 = __a->m_Items[2];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        scaleMode = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
      }
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__FontSize
                         (__c,value,uVar2 & 0xff,scaleMode,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Color>b__50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__Color_b__50_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f34e60

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__Color>b__50_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d26 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d26 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    color = (CustomLogic_CustomLogicColorBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__Color(__c,color,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextAlign>b__51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextAlign_b__51_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f34ef0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__TextAlign>b__51_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d27 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d27 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextAlign(__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextWrap>b__52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextWrap_b__52_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f34f80

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__TextWrap>b__52_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  byte bVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  bool_conflict bVar2;
  
  if (DAT_05703d28 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d28 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      bVar1 = 1;
    }
    else {
      if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
      bVar1 = (byte)bVar2;
    }
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__TextWrap
                         (__c,(uint)bVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextOverflow>b__53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextOverflow_b__53_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35020

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__TextOverflow>b__53_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d29 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d29 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextOverflow
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextOutlineWidth>b__54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextOutlineWidth_b__54_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f350b0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__TextOutlineWidth>b__54_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d2a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d2a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextOutlineWidth
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextOutlineColor>b__55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextOutlineColor_b__55_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35140

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__TextOutlineColor>b__55_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d2b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d2b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = (CustomLogic_CustomLogicColorBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextOutlineColor
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextShadowColor>b__56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextShadowColor_b__56_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f351d0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__TextShadowColor>b__56_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d2c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d2c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = (CustomLogic_CustomLogicColorBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextShadowColor
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextShadowOffset>b__57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextShadowOffset_b__57_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35260

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__TextShadowOffset>b__57_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float horizontal;
  float vertical;
  
  if (DAT_05703d2d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d2d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f35311:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    horizontal = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (1 < (uint)__a->max_length) {
      vertical = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
      if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextShadowOffset
                           (__c,horizontal,vertical,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar1;
      }
      goto LAB_03f35311;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextShadowHorizontalOffset>b__58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextShadowHorizontalOffset_b__58_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35320

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__TextShadowHorizontalOffset>b__58_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d2e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d2e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextShadowHorizontalOffset
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextShadowVerticalOffset>b__59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextShadowVerticalOffset_b__59_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f353b0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__TextShadowVerticalOffset>b__59_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d2f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d2f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextShadowVerticalOffset
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextShadowBlurRadius>b__60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextShadowBlurRadius_b__60_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35440

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__TextShadowBlurRadius>b__60_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d30 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d30 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextShadowBlurRadius
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextLetterSpacing>b__61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextLetterSpacing_b__61_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f354d0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__TextLetterSpacing>b__61_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d31 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d31 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextLetterSpacing
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextWordSpacing>b__62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextWordSpacing_b__62_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35560

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__TextWordSpacing>b__62_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d32 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d32 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextWordSpacing
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextParagraphSpacing>b__63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TextParagraphSpacing_b__63_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f355f0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__TextParagraphSpacing>b__63_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d33 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d33 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TextParagraphSpacing
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BackgroundColor>b__64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BackgroundColor_b__64_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35680

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__BackgroundColor>b__64_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d34 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d34 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    color = (CustomLogic_CustomLogicColorBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BackgroundColor
                         (__c,color,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetBackgroundImage>b__65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__SetBackgroundImage_b__65_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35710

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__SetBackgroundImage>b__65_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicImageBuiltin_o *image;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d35 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicImageBuiltin_ConvertTo_CustomLogicIma);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d35 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    image = (CustomLogic_CustomLogicImageBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicImageBuiltin_ConvertTo_CustomLogicIma);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__SetBackgroundImage
                         (__c,image,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderColor>b__66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderColor_b__66_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f357a0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__BorderColor>b__66_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d36 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d36 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    color = (CustomLogic_CustomLogicColorBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderColor(__c,color,(MethodInfo *)0x0)
      ;
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderColorLeft>b__67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderColorLeft_b__67_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35830

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__BorderColorLeft>b__67_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d37 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d37 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    color = (CustomLogic_CustomLogicColorBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderColorLeft
                         (__c,color,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderColorTop>b__68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderColorTop_b__68_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f358c0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__BorderColorTop>b__68_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d38 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d38 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    color = (CustomLogic_CustomLogicColorBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderColorTop
                         (__c,color,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderColorRight>b__69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderColorRight_b__69_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35950

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__BorderColorRight>b__69_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d39 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d39 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    color = (CustomLogic_CustomLogicColorBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderColorRight
                         (__c,color,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderColorBottom>b__70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderColorBottom_b__70_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f359e0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__BorderColorBottom>b__70_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d3a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d3a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    color = (CustomLogic_CustomLogicColorBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderColorBottom
                         (__c,color,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderWidth>b__71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderWidth_b__71_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35a70

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__BorderWidth>b__71_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d3b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d3b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderWidth(__c,value,(MethodInfo *)0x0)
      ;
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderWidthLeft>b__72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderWidthLeft_b__72_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35b00

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__BorderWidthLeft>b__72_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d3c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d3c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthLeft
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderWidthTop>b__73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderWidthTop_b__73_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35b90

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__BorderWidthTop>b__73_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d3d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d3d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthTop
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderWidthRight>b__74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderWidthRight_b__74_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35c20

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__BorderWidthRight>b__74_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d3e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d3e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthRight
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderWidthBottom>b__75_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderWidthBottom_b__75_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35cb0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__BorderWidthBottom>b__75_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d3f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d3f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthBottom
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderRadius>b__76_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderRadius_b__76_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35d40

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__BorderRadius>b__76_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d40 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d40 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderRadius
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderRadiusTopLeft>b__77_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderRadiusTopLeft_b__77_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35dd0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__BorderRadiusTopLeft>b__77_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d41 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d41 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopLeft
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderRadiusTopRight>b__78_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderRadiusTopRight_b__78_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35e60

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__BorderRadiusTopRight>b__78_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d42 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d42 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopRight
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderRadiusBottomLeft>b__79_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderRadiusBottomLeft_b__79_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35ef0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__BorderRadiusBottomLeft>b__79_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d43 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d43 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomLeft
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderRadiusBottomRight>b__80_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__BorderRadiusBottomRight_b__80_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f35f80

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__BorderRadiusBottomRight>b__80_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float value;
  
  if (DAT_05703d44 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d44 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomRight
                         (__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__OverflowX>b__81_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__OverflowX_b__81_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f36010

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__OverflowX>b__81_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d45 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d45 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__OverflowX(__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__OverflowY>b__82_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__OverflowY_b__82_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f360a0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__OverflowY>b__82_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  if (DAT_05703d46 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d46 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__OverflowY(__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTransformOrigin>b__83_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__SetTransformOrigin_b__83_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f36130

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__SetTransformOrigin>b__83_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float x;
  float y;
  
  if (DAT_05703d47 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d47 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f36243:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    x = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if (1 < (uint)__a->max_length) {
      y = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
      if ((int)__a->max_length < 3) {
        uVar2 = 0;
      }
      else {
        pIVar1 = __a->m_Items[2];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
      }
      if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
        pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__SetTransformOrigin
                           (__c,x,y,uVar2 & 0xff,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar3;
      }
      goto LAB_03f36243;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransformTranslate>b__84_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TransformTranslate_b__84_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f36250

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__TransformTranslate>b__84_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  float x;
  float y;
  
  if (DAT_05703d48 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d48 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f36363:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    x = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if (1 < (uint)__a->max_length) {
      y = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
      if ((int)__a->max_length < 3) {
        uVar2 = 0;
      }
      else {
        pIVar1 = __a->m_Items[2];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
      }
      if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
        pCVar3 = CustomLogic_CustomLogicVisualElementBuiltin__TransformTranslate
                           (__c,x,y,uVar2 & 0xff,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar3;
      }
      goto LAB_03f36363;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransformScale>b__85_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TransformScale_b__85_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f36370

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__TransformScale>b__85_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float x;
  float y;
  
  if (DAT_05703d49 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d49 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f36421:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    x = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (1 < (uint)__a->max_length) {
      y = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
      if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TransformScale
                           (__c,x,y,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar1;
      }
      goto LAB_03f36421;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransformRotate>b__86_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_____CreateMethodBinding__TransformRotate_b__86_0 (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f36430

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings_<>c__<__CreateMethodBinding__TransformRotate>b__86_0
          (CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t angleUnit;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  float angle;
  
  if (DAT_05703d4a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d4a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f364f0:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    angle = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (1 < (uint)__a->max_length) {
      angleUnit = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
      if (__c != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__TransformRotate
                           (__c,angle,angleUnit,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar1;
      }
      goto LAB_03f364f0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3efb170

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  undefined8 uVar6;
  System_Exception_o *__this;
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_T__o *__this_00;
  System_Func_T__object____object__o *pSVar7;
  CustomLogic_CLMethodBinding_T__o *pCVar8;
  
  if (DAT_05703bf0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"TextOutlineColor");
    il2cpp_init_method_metadata(&"MarginTop");
    il2cpp_init_method_metadata(&"Remove");
    il2cpp_init_method_metadata(&"Add");
    il2cpp_init_method_metadata(&"AlignSelf");
    il2cpp_init_method_metadata(&"RegisterFocusInEventCallback");
    il2cpp_init_method_metadata(&"RegisterFocusOutEventCallback");
    il2cpp_init_method_metadata(&"Top");
    il2cpp_init_method_metadata(&"Right");
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"RemoveFromHierarchy");
    il2cpp_init_method_metadata(&"RegisterClickEventCallback");
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"MaxWidth");
    il2cpp_init_method_metadata(&"TransformScale");
    il2cpp_init_method_metadata(&"FontSize");
    il2cpp_init_method_metadata(&"AlignItems");
    il2cpp_init_method_metadata(&"FlexShrink");
    il2cpp_init_method_metadata(&"BorderRadius");
    il2cpp_init_method_metadata(&"AspectRatio");
    il2cpp_init_method_metadata(&"TextWrap");
    il2cpp_init_method_metadata(&"MarginBottom");
    il2cpp_init_method_metadata(&"JustifyContent");
    il2cpp_init_method_metadata(&"MaxHeight");
    il2cpp_init_method_metadata(&"OverflowX");
    il2cpp_init_method_metadata(&"FlexWrap");
    il2cpp_init_method_metadata(&"SetBackgroundImage");
    il2cpp_init_method_metadata(&"BorderWidthLeft");
    il2cpp_init_method_metadata(&"TextShadowVerticalOffset");
    il2cpp_init_method_metadata(&"BorderWidthTop");
    il2cpp_init_method_metadata(&"TextShadowHorizontalOffset");
    il2cpp_init_method_metadata(&"TextAlign");
    il2cpp_init_method_metadata(&"OverflowY");
    il2cpp_init_method_metadata(&"BorderWidth");
    il2cpp_init_method_metadata(&"ChildCount");
    il2cpp_init_method_metadata(&"FontStyle");
    il2cpp_init_method_metadata(&"BorderColorTop");
    il2cpp_init_method_metadata(&"Visible");
    il2cpp_init_method_metadata(&"FlexGrow");
    il2cpp_init_method_metadata(&"PaddingRight");
    il2cpp_init_method_metadata(&"TextLetterSpacing");
    il2cpp_init_method_metadata(&"MinHeight");
    il2cpp_init_method_metadata(&"MinWidth");
    il2cpp_init_method_metadata(&"FlexDirection");
    il2cpp_init_method_metadata(&"TransitionDuration");
    il2cpp_init_method_metadata(&"BorderWidthBottom");
    il2cpp_init_method_metadata(&"PaddingBottom");
    il2cpp_init_method_metadata(&"Active");
    il2cpp_init_method_metadata(&"TransformTranslate");
    il2cpp_init_method_metadata(&"TextShadowBlurRadius");
    il2cpp_init_method_metadata(&"RegisterMouseLeaveEventCallback");
    il2cpp_init_method_metadata(&"BorderRadiusTopRight");
    il2cpp_init_method_metadata(&"PaddingTop");
    il2cpp_init_method_metadata(&"PaddingLeft");
    il2cpp_init_method_metadata(&"Margin");
    il2cpp_init_method_metadata(&"BorderColor");
    il2cpp_init_method_metadata(&"RegisterMouseEnterEventCallback");
    il2cpp_init_method_metadata(&"BorderRadiusBottomLeft");
    il2cpp_init_method_metadata(&"Width");
    il2cpp_init_method_metadata(&"QueryByName");
    il2cpp_init_method_metadata(&"Left");
    il2cpp_init_method_metadata(&"Bottom");
    il2cpp_init_method_metadata(&"TextShadowColor");
    il2cpp_init_method_metadata(&"MarginRight");
    il2cpp_init_method_metadata(&"GetElementAt");
    il2cpp_init_method_metadata(&"Absolute");
    il2cpp_init_method_metadata(&"MarginLeft");
    il2cpp_init_method_metadata(&"TextWordSpacing");
    il2cpp_init_method_metadata(&"QueryByClassName");
    il2cpp_init_method_metadata(&"BorderColorLeft");
    il2cpp_init_method_metadata(&"SetTransformOrigin");
    il2cpp_init_method_metadata(&"BorderColorBottom");
    il2cpp_init_method_metadata(&"TextShadowOffset");
    il2cpp_init_method_metadata(&"TextOutlineWidth");
    il2cpp_init_method_metadata(&"TextParagraphSpacing");
    il2cpp_init_method_metadata(&"TextOverflow");
    il2cpp_init_method_metadata(&"BorderWidthRight");
    il2cpp_init_method_metadata(&"Opacity");
    il2cpp_init_method_metadata(&"BackgroundColor");
    il2cpp_init_method_metadata(&"TransformRotate");
    il2cpp_init_method_metadata(&"Padding");
    il2cpp_init_method_metadata(&"BorderRadiusBottomRight");
    il2cpp_init_method_metadata(&"BorderRadiusTopLeft");
    il2cpp_init_method_metadata(&"Height");
    il2cpp_init_method_metadata(&"BorderColorRight");
    DAT_05703bf0 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x933e48c7) {
    if (uVar3 < 0x3b42dfc0) {
      if (uVar3 < 0x175fb728) {
        if (uVar3 < 0x912e1f5) {
          if (uVar3 < 0x154c162) {
            if (uVar3 == 0xe19411) {
              bVar4 = System_String__op_Equality(name,"BorderColorTop",(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                if (DAT_05703c33 == '\0') {
                  il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
                  il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
                  il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
                  il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderColorTop_b);
                  il2cpp_init_method_metadata(&TypeInfo_c);
                  DAT_05703c33 = '\x01';
                  iVar1 = *(int *)(TypeInfo_c + 0xe4);
                }
                else {
                  iVar1 = *(int *)(TypeInfo_c + 0xe4);
                }
                if (iVar1 == 0) {
                  il2cpp_init_class();
                  pSVar7 = *(System_Func_T__object____object__o **)
                            (*(long *)(TypeInfo_c + 0xb8) + 0x210);
                }
                else {
                  pSVar7 = *(System_Func_T__object____object__o **)
                            (*(long *)(TypeInfo_c + 0xb8) + 0x210);
                }
                if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
                  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
                  System_Func<object__object__object>___ctor();
                  lVar2 = *(long *)(TypeInfo_c + 0xb8);
                  *(System_Func_T__object____object__o **)(lVar2 + 0x210) = pSVar7;
                  il2cpp_runtime_glue(lVar2 + 0x210,pSVar7);
                }
                pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
                CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
                return (CustomLogic_ICLMemberBinding_o *)pCVar8;
              }
            }
            else if ((uVar3 == 0x154c161) &&
                    (bVar4 = System_String__op_Equality(name,"TextShadowColor",(MethodInfo *)0x0),
                    (char)bVar4 != '\0')) {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05703c27 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
                il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextShadowColor_b);
                il2cpp_init_method_metadata(&TypeInfo_c);
                DAT_05703c27 = '\x01';
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_init_class();
                pSVar7 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0x1b0);
              }
              else {
                pSVar7 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0x1b0);
              }
              if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
                System_Func<object__object__object>___ctor();
                lVar2 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_T__object____object__o **)(lVar2 + 0x1b0) = pSVar7;
                il2cpp_runtime_glue(lVar2 + 0x1b0,pSVar7);
              }
              pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              return (CustomLogic_ICLMemberBinding_o *)pCVar8;
            }
          }
          else if (uVar3 == 0x4a57fc2) {
            bVar4 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05703bf5 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
                il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Clear_b__6_0);
                il2cpp_init_method_metadata(&TypeInfo_c);
                DAT_05703bf5 = '\x01';
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_init_class();
                pSVar7 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0x20);
              }
              else {
                pSVar7 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0x20);
              }
              if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
                System_Func<object__object__object>___ctor();
                lVar2 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar7;
                il2cpp_runtime_glue(lVar2 + 0x20,pSVar7);
              }
              pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              return (CustomLogic_ICLMemberBinding_o *)pCVar8;
            }
          }
          else if (uVar3 == 0x736dd56) {
            bVar4 = System_String__op_Equality(name,"Padding",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05703c1a == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
                il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Padding_b__43_0);
                il2cpp_init_method_metadata(&TypeInfo_c);
                DAT_05703c1a = '\x01';
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_init_class();
                pSVar7 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0x148);
              }
              else {
                pSVar7 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0x148);
              }
              if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
                System_Func<object__object__object>___ctor();
                lVar2 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_T__object____object__o **)(lVar2 + 0x148) = pSVar7;
                il2cpp_runtime_glue(lVar2 + 0x148,pSVar7);
              }
              pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              return (CustomLogic_ICLMemberBinding_o *)pCVar8;
            }
          }
          else if ((uVar3 == 0x912e1f4) &&
                  (bVar4 = System_String__op_Equality(name,"GetElementAt",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703bf6 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetElementAt_b__7);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703bf6 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x28);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x28);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x28,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if (uVar3 < 0xaaf7cfa) {
          if (uVar3 == 0x99b73dc) {
            bVar4 = System_String__op_Equality(name,"Top",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05703c04 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
                il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Top_b__21_0);
                il2cpp_init_method_metadata(&TypeInfo_c);
                DAT_05703c04 = '\x01';
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_init_class();
                pSVar7 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0x98);
              }
              else {
                pSVar7 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0x98);
              }
              if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
                System_Func<object__object__object>___ctor();
                lVar2 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_T__object____object__o **)(lVar2 + 0x98) = pSVar7;
                il2cpp_runtime_glue(lVar2 + 0x98,pSVar7);
              }
              pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              return (CustomLogic_ICLMemberBinding_o *)pCVar8;
            }
          }
          else if ((uVar3 == 0xaaf7cf9) &&
                  (bVar4 = System_String__op_Equality(name,"BorderWidth",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703c36 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderWidth_b__71);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703c36 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x228);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x228);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x228) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x228,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if (uVar3 == 0xbdcf7a2) {
          bVar4 = System_String__op_Equality(name,"MarginLeft",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703c16 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MarginLeft_b__39);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703c16 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x128);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x128);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x128) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x128,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if (uVar3 == 0x16378c9f) {
          bVar4 = System_String__op_Equality(name,"SetTransformOrigin",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703c42 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetTransformOrigi);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703c42 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x288);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x288);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x288) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x288,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0x175fb727) &&
                (bVar4 = System_String__op_Equality(name,"BorderRadiusBottomLeft",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c3e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderRadiusBotto);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c3e = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x268);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x268);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x268) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x268,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 < 0x221f26c1) {
        if (uVar3 < 0x1e9e9f86) {
          if (uVar3 == 0x1bd13562) {
            bVar4 = System_String__op_Equality(name,"Height",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05703c0f == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
                il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Height_b__32_0);
                il2cpp_init_method_metadata(&TypeInfo_c);
                DAT_05703c0f = '\x01';
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_init_class();
                pSVar7 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0xf0);
              }
              else {
                pSVar7 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0xf0);
              }
              if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
                System_Func<object__object__object>___ctor();
                lVar2 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_T__object____object__o **)(lVar2 + 0xf0) = pSVar7;
                il2cpp_runtime_glue(lVar2 + 0xf0,pSVar7);
              }
              pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              return (CustomLogic_ICLMemberBinding_o *)pCVar8;
            }
          }
          else if ((uVar3 == 0x1e9e9f85) &&
                  (bVar4 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703c05 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Right_b__22_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703c05 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0xa0);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0xa0);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0xa0,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if (uVar3 == 0x1f89134f) {
          bVar4 = System_String__op_Equality(name,"Active",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703bff == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Active_b__16_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703bff = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x70);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x70);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x70,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if (uVar3 == 0x21a5901d) {
          bVar4 = System_String__op_Equality(name,"Remove",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703bf3 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Remove_b__4_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703bf3 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x10,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0x221f26c0) &&
                (bVar4 = System_String__op_Equality(name,"RemoveFromHierarchy",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703bf4 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RemoveFromHierarc);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703bf4 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x18,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 < 0x3040cf54) {
        if (uVar3 == 0x22b5f34a) {
          bVar4 = System_String__op_Equality(name,"Bottom",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703c06 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Bottom_b__23_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703c06 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0xa8);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0xa8);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0xa8,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if (uVar3 == 0x2e56c2bc) {
          bVar4 = System_String__op_Equality(name,"PaddingRight",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703c1d == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PaddingRight_b__4);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703c1d = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x160);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x160);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x160) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x160,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0x3040cf53) &&
                (bVar4 = System_String__op_Equality(name,"FlexShrink",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c07 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FlexShrink_b__24);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c07 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb0)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb0)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xb0) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0xb0,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x380ec7b3) {
        bVar4 = System_String__op_Equality(name,"PaddingLeft",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c1b == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PaddingLeft_b__44);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c1b = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x150);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x150);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x150) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x150,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x3841413d) {
        bVar4 = System_String__op_Equality(name,"BorderColorBottom",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c35 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderColorBottom);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c35 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x220);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x220);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x220) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x220,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x3b42dfbf) &&
              (bVar4 = System_String__op_Equality(name,"Width",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703c0e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Width_b__31_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703c0e = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe8);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe8);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0xe8) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0xe8,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0x623289d4) {
      if (uVar3 < 0x4872d0d9) {
        if (uVar3 < 0x3dcadc9d) {
          if (uVar3 == 0x3d51a7f8) {
            bVar4 = System_String__op_Equality(name,"AspectRatio",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05703c14 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
                il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AspectRatio_b__37);
                il2cpp_init_method_metadata(&TypeInfo_c);
                DAT_05703c14 = '\x01';
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_init_class();
                pSVar7 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0x118);
              }
              else {
                pSVar7 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0x118);
              }
              if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
                System_Func<object__object__object>___ctor();
                lVar2 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_T__object____object__o **)(lVar2 + 0x118) = pSVar7;
                il2cpp_runtime_glue(lVar2 + 0x118,pSVar7);
              }
              pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              return (CustomLogic_ICLMemberBinding_o *)pCVar8;
            }
          }
          else if ((uVar3 == 0x3dcadc9c) &&
                  (bVar4 = System_String__op_Equality(name,"TextOverflow",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703c24 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextOverflow_b__5);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703c24 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x198);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x198);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x198) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x198,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if (uVar3 == 0x4051a91f) {
          bVar4 = System_String__op_Equality(name,"TextAlign",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703c22 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextAlign_b__51_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703c22 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x188);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x188);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x188) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x188,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if (uVar3 == 0x4231df34) {
          bVar4 = System_String__op_Equality(name,"MarginBottom",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703c19 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MarginBottom_b__4);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703c19 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x140);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x140);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x140) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x140,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0x4872d0d8) &&
                (bVar4 = System_String__op_Equality(name,"BorderRadiusBottomRight",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c3f == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderRadiusBotto);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c3f = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x270);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x270);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x270) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x270,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 < 0x54b7f689) {
        if (uVar3 == 0x517ab5aa) {
          bVar4 = System_String__op_Equality(name,"AlignItems",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703c0b == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AlignItems_b__28);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703c0b = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0xd0);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0xd0);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xd0) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0xd0,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0x54b7f688) &&
                (bVar4 = System_String__op_Equality(name,"BorderWidthTop",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c38 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderWidthTop_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c38 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x238);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x238);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x238) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x238,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x592a4941) {
        bVar4 = System_String__op_Equality(name,"Visible",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c00 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Visible_b__17_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c00 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x78,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x5cd165a7) {
        bVar4 = System_String__op_Equality(name,"TextWordSpacing",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c2d == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextWordSpacing_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c2d = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x1e0);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x1e0);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x1e0) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x1e0,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x623289d3) &&
              (bVar4 = System_String__op_Equality(name,"MaxWidth",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703c12 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MaxWidth_b__35_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703c12 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x108);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x108);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x108) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x108,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0x7c58895b) {
      if (uVar3 < 0x67bd6402) {
        if (uVar3 == 0x63b03bb4) {
          bVar4 = System_String__op_Equality(name,"BorderWidthLeft",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703c37 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderWidthLeft_b);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703c37 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x230);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x230);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x230) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x230,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0x67bd6401) &&
                (bVar4 = System_String__op_Equality(name,"PaddingTop",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c1c == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PaddingTop_b__45);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c1c = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x158);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x158);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x158) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x158,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x6c164db5) {
        bVar4 = System_String__op_Equality(name,"FontStyle",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c1f == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FontStyle_b__48_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c1f = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x170);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x170);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x170) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x170,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x74bf49d8) {
        bVar4 = System_String__op_Equality(name,"TransformRotate",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c45 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TransformRotate_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c45 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x2a0);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x2a0);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x2a0) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x2a0,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x7c58895a) &&
              (bVar4 = System_String__op_Equality(name,"TextWrap",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703c23 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextWrap_b__52_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703c23 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 400);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 400);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 400) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 400,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0x8371fa28) {
      if (uVar3 == 0x8098b0d8) {
        bVar4 = System_String__op_Equality(name,"AlignSelf",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c0d == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AlignSelf_b__30_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c0d = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe0)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe0)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xe0) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0xe0,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x826b7e5c) {
        bVar4 = System_String__op_Equality(name,"TextOutlineWidth",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c25 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextOutlineWidth);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c25 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x1a0);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x1a0);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x1a0) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x1a0,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x8371fa27) &&
              (bVar4 = System_String__op_Equality(name,"TextOutlineColor",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703c26 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextOutlineColor);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703c26 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1a8);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1a8);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x1a8) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x1a8,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x8e7f220d) {
      bVar4 = System_String__op_Equality(name,"PaddingBottom",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703c1e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PaddingBottom_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703c1e = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x168);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x168);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x168) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x168,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x92773890) {
      bVar4 = System_String__op_Equality(name,"Left",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703c03 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Left_b__20_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703c03 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x90) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x90,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x933e48c6) &&
            (bVar4 = System_String__op_Equality(name,"BorderColor",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703c31 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderColor_b__66);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703c31 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x200);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x200);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x200) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x200,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xc476866e) {
    if (uVar3 < 0xb045c9bc) {
      if (uVar3 < 0x9f6bc249) {
        if (uVar3 < 0x9921c1dd) {
          if (uVar3 == 0x98c61698) {
            bVar4 = System_String__op_Equality(name,"JustifyContent",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05703c0c == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
                il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__JustifyContent_b);
                il2cpp_init_method_metadata(&TypeInfo_c);
                DAT_05703c0c = '\x01';
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_init_class();
                pSVar7 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0xd8);
              }
              else {
                pSVar7 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0xd8);
              }
              if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
                System_Func<object__object__object>___ctor();
                lVar2 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_T__object____object__o **)(lVar2 + 0xd8) = pSVar7;
                il2cpp_runtime_glue(lVar2 + 0xd8,pSVar7);
              }
              pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              return (CustomLogic_ICLMemberBinding_o *)pCVar8;
            }
          }
          else if ((uVar3 == 0x9921c1dc) &&
                  (bVar4 = System_String__op_Equality(name,"ChildCount",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703bf1 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ChildCount_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVisualElementBuil);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              DAT_05703bf1 = '\x01';
            }
            getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object>___ctor();
            __this_00 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVisualElementBuilti);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (__this_00,getter,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVisualElementBuil);
            return (CustomLogic_ICLMemberBinding_o *)__this_00;
          }
        }
        else if (uVar3 == 0x9ab59d8d) {
          bVar4 = System_String__op_Equality(name,"TextShadowBlurRadius",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703c2b == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextShadowBlurRad);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703c2b = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x1d0);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x1d0);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x1d0) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x1d0,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if (uVar3 == 0x9dc3aa14) {
          bVar4 = System_String__op_Equality(name,"Add",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703bf2 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Add_b__3_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703bf2 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 8,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0x9f6bc248) &&
                (bVar4 = System_String__op_Equality(name,"MinHeight",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c11 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MinHeight_b__34_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c11 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x100);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x100);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x100) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x100,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 < 0xa29623c4) {
        if (uVar3 == 0xa26a44e1) {
          bVar4 = System_String__op_Equality(name,"FontSize",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703c20 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FontSize_b__49_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703c20 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x178);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x178);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x178) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x178,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0xa29623c3) &&
                (bVar4 = System_String__op_Equality(name,"BorderColorLeft",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c32 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderColorLeft_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c32 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x208);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x208);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x208) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x208,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0xa44eab36) {
        bVar4 = System_String__op_Equality(name,"BorderWidthBottom",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c3a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderWidthBottom);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c3a = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x248);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x248);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x248) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x248,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0xab77dd0e) {
        bVar4 = System_String__op_Equality(name,"MaxHeight",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c13 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MaxHeight_b__36_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c13 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x110);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x110);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x110) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x110,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0xb045c9bb) &&
              (bVar4 = System_String__op_Equality(name,"RegisterClickEventCallback",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703bfb == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterClickEven);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703bfb = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x50,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0xc0017a9f) {
      if (uVar3 < 0xb608da5e) {
        if (uVar3 == 0xb1d5595f) {
          bVar4 = System_String__op_Equality(name,"TextLetterSpacing",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703c2c == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextLetterSpacing);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703c2c = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x1d8);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x1d8);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x1d8) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x1d8,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0xb608da5d) &&
                (bVar4 = System_String__op_Equality(name,"FlexGrow",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c08 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FlexGrow_b__25_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c08 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb8)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb8)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xb8) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0xb8,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0xb8db521d) {
        bVar4 = System_String__op_Equality(name,"QueryByName",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703bf7 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__QueryByName_b__8);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703bf7 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x30,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0xb8e9fe05) {
        bVar4 = System_String__op_Equality(name,"BorderRadius",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c3b == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderRadius_b__7);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c3b = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x250);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x250);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x250) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x250,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0xc0017a9e) &&
              (bVar4 = System_String__op_Equality(name,"RegisterMouseEnterEventCallback",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703bf9 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterMouseEnte);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703bf9 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x40,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0xc1c6e85f) {
      if (uVar3 == 0xc014fb96) {
        bVar4 = System_String__op_Equality(name,"OverflowY",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c41 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__OverflowY_b__82_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c41 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x280);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x280);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x280) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x280,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0xc114fd29) {
        bVar4 = System_String__op_Equality(name,"OverflowX",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c40 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__OverflowX_b__81_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c40 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x278);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x278);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x278) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x278,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0xc1c6e85e) &&
              (bVar4 = System_String__op_Equality(name,"TransitionDuration",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703c01 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TransitionDuratio);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703c01 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x80,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xc1da6f76) {
      bVar4 = System_String__op_Equality(name,"RegisterFocusInEventCallback",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703bfc == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterFocusInEv);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703bfc = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x58,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xc24c3be7) {
      bVar4 = System_String__op_Equality(name,"FlexDirection",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703c09 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FlexDirection_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703c09 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xc0);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xc0);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0xc0) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0xc0,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xc476866d) &&
            (bVar4 = System_String__op_Equality(name,"RegisterMouseLeaveEventCallback",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703bfa == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterMouseLeav);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703bfa = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x48,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xe0a2f633) {
    if (uVar3 < 0xd61c1c80) {
      if (uVar3 < 0xd1496d31) {
        if (uVar3 == 0xc4cc799b) {
          bVar4 = System_String__op_Equality(name,"Margin",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703c15 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Margin_b__38_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703c15 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x120);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x120);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x120) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x120,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0xd1496d30) &&
                (bVar4 = System_String__op_Equality(name,"BackgroundColor",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c2f == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BackgroundColor_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c2f = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x1f0);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x1f0);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x1f0) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x1f0,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0xd14dd06b) {
        bVar4 = System_String__op_Equality(name,"TransformTranslate",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c43 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TransformTranslat);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c43 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x290);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x290);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x290) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x290,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0xd46a8ee6) {
        bVar4 = System_String__op_Equality(name,"BorderRadiusTopRight",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c3d == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderRadiusTopRi);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c3d = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x260);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x260);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x260) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x260,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0xd61c1c7f) &&
              (bVar4 = System_String__op_Equality(name,"RegisterFocusOutEventCallback",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703bfd == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterFocusOutE);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703bfd = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x60,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0xd9fedba6) {
      if (uVar3 == 0xd6c2f336) {
        bVar4 = System_String__op_Equality(name,"FlexWrap",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c0a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FlexWrap_b__27_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c0a = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 200);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 200);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 200) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 200,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0xd821b21d) {
        bVar4 = System_String__op_Equality(name,"QueryByClassName",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703bf8 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__QueryByClassName);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703bf8 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x38,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0xd9fedba5) &&
              (bVar4 = System_String__op_Equality(name,"TextShadowHorizontalOffset",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703c29 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextShadowHorizon);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703c29 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1c0);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1c0);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x1c0) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x1c0,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xdaf4ac3f) {
      bVar4 = System_String__op_Equality(name,"TextShadowVerticalOffset",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703c2a == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextShadowVertica);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703c2a = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1c8);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1c8);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x1c8) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x1c8,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xde1f0406) {
      bVar4 = System_String__op_Equality(name,"Opacity",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703bfe == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Opacity_b__15_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703bfe = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x68,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xe0a2f632) &&
            (bVar4 = System_String__op_Equality(name,"MarginTop",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703c17 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MarginTop_b__40_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703c17 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x130);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x130);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x130) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x130,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xe9c5ec6a) {
    if (uVar3 < 0xe5b43cf9) {
      if (uVar3 == 0xe0a5d4d5) {
        bVar4 = System_String__op_Equality(name,"TextParagraphSpacing",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703c2e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextParagraphSpac);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703c2e = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x1e8);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x1e8);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x1e8) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x1e8,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0xe5b43cf8) &&
              (bVar4 = System_String__op_Equality(name,"Color",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703c21 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Color_b__50_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703c21 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x180);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x180);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x180) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x180,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xe6977c61) {
      bVar4 = System_String__op_Equality(name,"BorderWidthRight",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703c39 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderWidthRight);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703c39 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x240);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x240);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x240) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x240,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xe9999c8f) {
      bVar4 = System_String__op_Equality(name,"MarginRight",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703c18 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MarginRight_b__41);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703c18 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x138);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x138);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x138) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x138,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xe9c5ec69) &&
            (bVar4 = System_String__op_Equality(name,"TextShadowOffset",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703c28 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextShadowOffset);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703c28 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1b8);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1b8);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x1b8) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x1b8,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xf00299ae) {
    if (uVar3 == 0xed3ab484) {
      bVar4 = System_String__op_Equality(name,"SetBackgroundImage",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703c30 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetBackgroundImag);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703c30 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1f8);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1f8);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x1f8) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x1f8,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xee570bdc) {
      bVar4 = System_String__op_Equality(name,"Absolute",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703c02 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Absolute_b__19_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703c02 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x88) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x88,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xf00299ad) &&
            (bVar4 = System_String__op_Equality(name,"BorderRadiusTopLeft",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703c3c == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderRadiusTopLe);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703c3c = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 600);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 600);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 600) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 600,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xfb0d0613) {
    bVar4 = System_String__op_Equality(name,"TransformScale",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703c44 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TransformScale_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703c44 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x298);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x298);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x298) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x298,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xfe87ddd9) {
    bVar4 = System_String__op_Equality(name,"MinWidth",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703c10 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MinWidth_b__33_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703c10 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf8);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf8);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0xf8) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0xf8,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xffc019cc) &&
          (bVar4 = System_String__op_Equality(name,"BorderColorRight",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703c34 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderColorRight);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703c34 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x218);
    }
    else {
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x218);
    }
    if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x218) = pSVar7;
      il2cpp_runtime_glue(lVar2 + 0x218,pSVar7);
    }
    pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicVisualElementBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreatePropertyBinding__ChildCount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreatePropertyBinding__ChildCount (const MethodInfo* method);
// 0x3efd040

CustomLogic_CLPropertyBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreatePropertyBinding__ChildCount
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703bf1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ChildCount_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVisualElementBuil);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    DAT_05703bf1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVisualElementBuilti);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVisualElementBuil);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Add
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Add (const MethodInfo* method);
// 0x3efd0e0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Add(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703bf2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Add_b__3_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703bf2 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Remove
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Remove (const MethodInfo* method);
// 0x3efd230

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Remove
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703bf3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Remove_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703bf3 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RemoveFromHierarchy
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RemoveFromHierarchy (const MethodInfo* method);
// 0x3efd380

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RemoveFromHierarchy
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703bf4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RemoveFromHierarc);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703bf4 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x3efd4d0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Clear
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703bf5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Clear_b__6_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703bf5 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__GetElementAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__GetElementAt (const MethodInfo* method);
// 0x3efd620

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__GetElementAt
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703bf6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetElementAt_b__7);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703bf6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__QueryByName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__QueryByName (const MethodInfo* method);
// 0x3efd770

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__QueryByName
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703bf7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__QueryByName_b__8);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703bf7 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__QueryByClassName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__QueryByClassName (const MethodInfo* method);
// 0x3efd8c0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__QueryByClassName
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703bf8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__QueryByClassName);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703bf8 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RegisterMouseEnterEventCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterMouseEnterEventCallback (const MethodInfo* method);
// 0x3efda10

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterMouseEnterEventCallback
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703bf9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterMouseEnte);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703bf9 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RegisterMouseLeaveEventCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterMouseLeaveEventCallback (const MethodInfo* method);
// 0x3efdb60

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterMouseLeaveEventCallback
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703bfa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterMouseLeav);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703bfa = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RegisterClickEventCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterClickEventCallback (const MethodInfo* method);
// 0x3efdcb0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterClickEventCallback
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703bfb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterClickEven);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703bfb = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RegisterFocusInEventCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterFocusInEventCallback (const MethodInfo* method);
// 0x3efde00

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterFocusInEventCallback
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703bfc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterFocusInEv);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703bfc = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RegisterFocusOutEventCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterFocusOutEventCallback (const MethodInfo* method);
// 0x3efdf50

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__RegisterFocusOutEventCallback
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703bfd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterFocusOutE);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703bfd = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Opacity
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Opacity (const MethodInfo* method);
// 0x3efe0a0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Opacity
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703bfe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Opacity_b__15_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703bfe = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Active
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Active (const MethodInfo* method);
// 0x3efe1f0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Active
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703bff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Active_b__16_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703bff = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Visible
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Visible (const MethodInfo* method);
// 0x3efe340

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Visible
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c00 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Visible_b__17_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c00 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_glue(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TransitionDuration
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransitionDuration (const MethodInfo* method);
// 0x3efe490

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransitionDuration
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c01 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TransitionDuratio);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c01 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_glue(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Absolute
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Absolute (const MethodInfo* method);
// 0x3efe5e0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Absolute
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c02 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Absolute_b__19_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c02 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x88) = function;
    il2cpp_runtime_glue(lVar2 + 0x88,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Left
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Left (const MethodInfo* method);
// 0x3efe730

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Left
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c03 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Left_b__20_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c03 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x90) = function;
    il2cpp_runtime_glue(lVar2 + 0x90,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Top
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Top (const MethodInfo* method);
// 0x3efe880

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Top(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c04 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Top_b__21_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c04 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x98) = function;
    il2cpp_runtime_glue(lVar2 + 0x98,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Right
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Right (const MethodInfo* method);
// 0x3efe9d0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Right
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c05 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Right_b__22_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c05 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = function;
    il2cpp_runtime_glue(lVar2 + 0xa0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Bottom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Bottom (const MethodInfo* method);
// 0x3efeb20

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Bottom
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c06 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Bottom_b__23_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c06 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = function;
    il2cpp_runtime_glue(lVar2 + 0xa8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FlexShrink
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexShrink (const MethodInfo* method);
// 0x3efec70

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexShrink
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c07 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FlexShrink_b__24);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c07 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xb0) = function;
    il2cpp_runtime_glue(lVar2 + 0xb0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FlexGrow
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexGrow (const MethodInfo* method);
// 0x3efedc0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexGrow
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c08 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FlexGrow_b__25_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c08 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xb8) = function;
    il2cpp_runtime_glue(lVar2 + 0xb8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FlexDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexDirection (const MethodInfo* method);
// 0x3efef10

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexDirection
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c09 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FlexDirection_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c09 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xc0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xc0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xc0) = function;
    il2cpp_runtime_glue(lVar2 + 0xc0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FlexWrap
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexWrap (const MethodInfo* method);
// 0x3eff060

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FlexWrap
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c0a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FlexWrap_b__27_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c0a = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 200);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 200);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 200) = function;
    il2cpp_runtime_glue(lVar2 + 200,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__AlignItems
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__AlignItems (const MethodInfo* method);
// 0x3eff1b0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__AlignItems
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c0b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AlignItems_b__28);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c0b = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xd0) = function;
    il2cpp_runtime_glue(lVar2 + 0xd0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__JustifyContent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__JustifyContent (const MethodInfo* method);
// 0x3eff300

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__JustifyContent
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c0c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__JustifyContent_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c0c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xd8) = function;
    il2cpp_runtime_glue(lVar2 + 0xd8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__AlignSelf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__AlignSelf (const MethodInfo* method);
// 0x3eff450

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__AlignSelf
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c0d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AlignSelf_b__30_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c0d = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xe0) = function;
    il2cpp_runtime_glue(lVar2 + 0xe0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Width
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Width (const MethodInfo* method);
// 0x3eff5a0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Width
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c0e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Width_b__31_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c0e = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xe8) = function;
    il2cpp_runtime_glue(lVar2 + 0xe8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Height
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Height (const MethodInfo* method);
// 0x3eff6f0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Height
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c0f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Height_b__32_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c0f = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xf0) = function;
    il2cpp_runtime_glue(lVar2 + 0xf0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MinWidth
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MinWidth (const MethodInfo* method);
// 0x3eff840

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MinWidth
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c10 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MinWidth_b__33_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c10 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xf8) = function;
    il2cpp_runtime_glue(lVar2 + 0xf8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MinHeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MinHeight (const MethodInfo* method);
// 0x3eff990

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MinHeight
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c11 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MinHeight_b__34_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c11 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x100);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x100);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x100) = function;
    il2cpp_runtime_glue(lVar2 + 0x100,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MaxWidth
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MaxWidth (const MethodInfo* method);
// 0x3effae0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MaxWidth
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c12 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MaxWidth_b__35_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c12 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x108);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x108);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x108) = function;
    il2cpp_runtime_glue(lVar2 + 0x108,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MaxHeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MaxHeight (const MethodInfo* method);
// 0x3effc30

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MaxHeight
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c13 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MaxHeight_b__36_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c13 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x110);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x110);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x110) = function;
    il2cpp_runtime_glue(lVar2 + 0x110,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__AspectRatio
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__AspectRatio (const MethodInfo* method);
// 0x3effd80

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__AspectRatio
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c14 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AspectRatio_b__37);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c14 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x118);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x118);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x118) = function;
    il2cpp_runtime_glue(lVar2 + 0x118,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Margin
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Margin (const MethodInfo* method);
// 0x3effed0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Margin
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c15 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Margin_b__38_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c15 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x120);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x120);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x120) = function;
    il2cpp_runtime_glue(lVar2 + 0x120,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MarginLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginLeft (const MethodInfo* method);
// 0x3f00020

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginLeft
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c16 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MarginLeft_b__39);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c16 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x128);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x128);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x128) = function;
    il2cpp_runtime_glue(lVar2 + 0x128,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MarginTop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginTop (const MethodInfo* method);
// 0x3f00170

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginTop
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c17 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MarginTop_b__40_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c17 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x130);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x130);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x130) = function;
    il2cpp_runtime_glue(lVar2 + 0x130,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MarginRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginRight (const MethodInfo* method);
// 0x3f002c0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginRight
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c18 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MarginRight_b__41);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c18 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x138);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x138);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x138) = function;
    il2cpp_runtime_glue(lVar2 + 0x138,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MarginBottom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginBottom (const MethodInfo* method);
// 0x3f00410

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__MarginBottom
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c19 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MarginBottom_b__4);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c19 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x140);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x140);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x140) = function;
    il2cpp_runtime_glue(lVar2 + 0x140,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Padding
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Padding (const MethodInfo* method);
// 0x3f00560

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Padding
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c1a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Padding_b__43_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c1a = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x148);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x148);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x148) = function;
    il2cpp_runtime_glue(lVar2 + 0x148,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__PaddingLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingLeft (const MethodInfo* method);
// 0x3f006b0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingLeft
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c1b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PaddingLeft_b__44);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c1b = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x150);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x150);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x150) = function;
    il2cpp_runtime_glue(lVar2 + 0x150,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__PaddingTop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingTop (const MethodInfo* method);
// 0x3f00800

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingTop
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c1c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PaddingTop_b__45);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c1c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x158);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x158);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x158) = function;
    il2cpp_runtime_glue(lVar2 + 0x158,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__PaddingRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingRight (const MethodInfo* method);
// 0x3f00950

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingRight
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c1d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PaddingRight_b__4);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c1d = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x160);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x160);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x160) = function;
    il2cpp_runtime_glue(lVar2 + 0x160,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__PaddingBottom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingBottom (const MethodInfo* method);
// 0x3f00aa0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__PaddingBottom
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c1e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PaddingBottom_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c1e = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x168);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x168);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x168) = function;
    il2cpp_runtime_glue(lVar2 + 0x168,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FontStyle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FontStyle (const MethodInfo* method);
// 0x3f00bf0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FontStyle
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c1f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FontStyle_b__48_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c1f = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x170);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x170);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x170) = function;
    il2cpp_runtime_glue(lVar2 + 0x170,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FontSize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FontSize (const MethodInfo* method);
// 0x3f00d40

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__FontSize
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c20 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FontSize_b__49_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c20 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x178);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x178);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x178) = function;
    il2cpp_runtime_glue(lVar2 + 0x178,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Color
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Color (const MethodInfo* method);
// 0x3f00e90

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__Color
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c21 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Color_b__50_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c21 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x180);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x180);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x180) = function;
    il2cpp_runtime_glue(lVar2 + 0x180,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextAlign
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextAlign (const MethodInfo* method);
// 0x3f00fe0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextAlign
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c22 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextAlign_b__51_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c22 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x188);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x188);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x188) = function;
    il2cpp_runtime_glue(lVar2 + 0x188,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextWrap
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextWrap (const MethodInfo* method);
// 0x3f01130

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextWrap
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c23 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextWrap_b__52_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c23 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 400);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 400);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 400) = function;
    il2cpp_runtime_glue(lVar2 + 400,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextOverflow
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextOverflow (const MethodInfo* method);
// 0x3f01280

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextOverflow
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c24 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextOverflow_b__5);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c24 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x198);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x198);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x198) = function;
    il2cpp_runtime_glue(lVar2 + 0x198,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextOutlineWidth
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextOutlineWidth (const MethodInfo* method);
// 0x3f013d0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextOutlineWidth
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c25 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextOutlineWidth);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c25 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1a0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1a0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x1a0) = function;
    il2cpp_runtime_glue(lVar2 + 0x1a0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextOutlineColor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextOutlineColor (const MethodInfo* method);
// 0x3f01520

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextOutlineColor
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c26 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextOutlineColor);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c26 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1a8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1a8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x1a8) = function;
    il2cpp_runtime_glue(lVar2 + 0x1a8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextShadowColor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowColor (const MethodInfo* method);
// 0x3f01670

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowColor
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c27 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextShadowColor_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c27 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1b0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1b0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x1b0) = function;
    il2cpp_runtime_glue(lVar2 + 0x1b0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextShadowOffset
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowOffset (const MethodInfo* method);
// 0x3f017c0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowOffset
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c28 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextShadowOffset);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c28 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1b8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1b8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x1b8) = function;
    il2cpp_runtime_glue(lVar2 + 0x1b8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextShadowHorizontalOffset
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowHorizontalOffset (const MethodInfo* method);
// 0x3f01910

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowHorizontalOffset
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c29 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextShadowHorizon);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c29 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1c0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1c0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x1c0) = function;
    il2cpp_runtime_glue(lVar2 + 0x1c0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextShadowVerticalOffset
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowVerticalOffset (const MethodInfo* method);
// 0x3f01a60

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowVerticalOffset
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c2a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextShadowVertica);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c2a = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1c8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1c8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x1c8) = function;
    il2cpp_runtime_glue(lVar2 + 0x1c8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextShadowBlurRadius
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowBlurRadius (const MethodInfo* method);
// 0x3f01bb0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextShadowBlurRadius
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c2b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextShadowBlurRad);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c2b = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1d0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1d0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x1d0) = function;
    il2cpp_runtime_glue(lVar2 + 0x1d0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextLetterSpacing
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextLetterSpacing (const MethodInfo* method);
// 0x3f01d00

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextLetterSpacing
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c2c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextLetterSpacing);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c2c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1d8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1d8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x1d8) = function;
    il2cpp_runtime_glue(lVar2 + 0x1d8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextWordSpacing
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextWordSpacing (const MethodInfo* method);
// 0x3f01e50

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextWordSpacing
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c2d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextWordSpacing_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c2d = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1e0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1e0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x1e0) = function;
    il2cpp_runtime_glue(lVar2 + 0x1e0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextParagraphSpacing
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextParagraphSpacing (const MethodInfo* method);
// 0x3f01fa0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TextParagraphSpacing
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c2e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextParagraphSpac);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c2e = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1e8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1e8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x1e8) = function;
    il2cpp_runtime_glue(lVar2 + 0x1e8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BackgroundColor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BackgroundColor (const MethodInfo* method);
// 0x3f020f0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BackgroundColor
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c2f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BackgroundColor_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c2f = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1f0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1f0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x1f0) = function;
    il2cpp_runtime_glue(lVar2 + 0x1f0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__SetBackgroundImage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__SetBackgroundImage (const MethodInfo* method);
// 0x3f02240

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__SetBackgroundImage
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c30 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetBackgroundImag);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c30 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1f8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x1f8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x1f8) = function;
    il2cpp_runtime_glue(lVar2 + 0x1f8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderColor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColor (const MethodInfo* method);
// 0x3f02390

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColor
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c31 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderColor_b__66);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c31 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x200);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x200);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x200) = function;
    il2cpp_runtime_glue(lVar2 + 0x200,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderColorLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorLeft (const MethodInfo* method);
// 0x3f024e0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorLeft
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c32 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderColorLeft_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c32 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x208);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x208);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x208) = function;
    il2cpp_runtime_glue(lVar2 + 0x208,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderColorTop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorTop (const MethodInfo* method);
// 0x3f02630

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorTop
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c33 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderColorTop_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c33 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x210);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x210);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x210) = function;
    il2cpp_runtime_glue(lVar2 + 0x210,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderColorRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorRight (const MethodInfo* method);
// 0x3f02780

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorRight
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c34 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderColorRight);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c34 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x218);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x218);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x218) = function;
    il2cpp_runtime_glue(lVar2 + 0x218,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderColorBottom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorBottom (const MethodInfo* method);
// 0x3f028d0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderColorBottom
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c35 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderColorBottom);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c35 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x220);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x220);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x220) = function;
    il2cpp_runtime_glue(lVar2 + 0x220,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderWidth
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidth (const MethodInfo* method);
// 0x3f02a20

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidth
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c36 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderWidth_b__71);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c36 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x228);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x228);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x228) = function;
    il2cpp_runtime_glue(lVar2 + 0x228,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderWidthLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthLeft (const MethodInfo* method);
// 0x3f02b70

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthLeft
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c37 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderWidthLeft_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c37 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x230);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x230);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x230) = function;
    il2cpp_runtime_glue(lVar2 + 0x230,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderWidthTop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthTop (const MethodInfo* method);
// 0x3f02cc0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthTop
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c38 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderWidthTop_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c38 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x238);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x238);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x238) = function;
    il2cpp_runtime_glue(lVar2 + 0x238,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderWidthRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthRight (const MethodInfo* method);
// 0x3f02e10

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthRight
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c39 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderWidthRight);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c39 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x240);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x240);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x240) = function;
    il2cpp_runtime_glue(lVar2 + 0x240,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderWidthBottom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthBottom (const MethodInfo* method);
// 0x3f02f60

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderWidthBottom
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c3a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderWidthBottom);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c3a = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x248);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x248);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x248) = function;
    il2cpp_runtime_glue(lVar2 + 0x248,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderRadius
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadius (const MethodInfo* method);
// 0x3f030b0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadius
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c3b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderRadius_b__7);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c3b = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x250);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x250);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x250) = function;
    il2cpp_runtime_glue(lVar2 + 0x250,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderRadiusTopLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusTopLeft (const MethodInfo* method);
// 0x3f03200

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusTopLeft
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c3c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderRadiusTopLe);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c3c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 600);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 600);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 600) = function;
    il2cpp_runtime_glue(lVar2 + 600,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderRadiusTopRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusTopRight (const MethodInfo* method);
// 0x3f03350

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusTopRight
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c3d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderRadiusTopRi);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c3d = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x260);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x260);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x260) = function;
    il2cpp_runtime_glue(lVar2 + 0x260,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderRadiusBottomLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusBottomLeft (const MethodInfo* method);
// 0x3f034a0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusBottomLeft
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c3e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderRadiusBotto);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c3e = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x268);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x268);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x268) = function;
    il2cpp_runtime_glue(lVar2 + 0x268,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderRadiusBottomRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusBottomRight (const MethodInfo* method);
// 0x3f035f0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__BorderRadiusBottomRight
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c3f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BorderRadiusBotto);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c3f = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x270);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x270);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x270) = function;
    il2cpp_runtime_glue(lVar2 + 0x270,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__OverflowX
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__OverflowX (const MethodInfo* method);
// 0x3f03740

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__OverflowX
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c40 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__OverflowX_b__81_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c40 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x278);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x278);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x278) = function;
    il2cpp_runtime_glue(lVar2 + 0x278,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__OverflowY
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__OverflowY (const MethodInfo* method);
// 0x3f03890

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__OverflowY
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c41 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__OverflowY_b__82_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c41 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x280);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x280);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x280) = function;
    il2cpp_runtime_glue(lVar2 + 0x280,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__SetTransformOrigin
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__SetTransformOrigin (const MethodInfo* method);
// 0x3f039e0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__SetTransformOrigin
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c42 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetTransformOrigi);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c42 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x288);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x288);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x288) = function;
    il2cpp_runtime_glue(lVar2 + 0x288,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TransformTranslate
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransformTranslate (const MethodInfo* method);
// 0x3f03b30

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransformTranslate
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c43 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TransformTranslat);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c43 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x290);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x290);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x290) = function;
    il2cpp_runtime_glue(lVar2 + 0x290,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TransformScale
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransformScale (const MethodInfo* method);
// 0x3f03c80

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransformScale
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c44 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TransformScale_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c44 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x298);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x298);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x298) = function;
    il2cpp_runtime_glue(lVar2 + 0x298,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TransformRotate
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o* CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransformRotate (const MethodInfo* method);
// 0x3f03dd0

CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings____CreateMethodBinding__TransformRotate
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *__this;
  
  if (DAT_05703c45 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TransformRotate_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c45 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x2a0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x2a0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVisualElementBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x2a0) = function;
    il2cpp_runtime_glue(lVar2 + 0x2a0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVisualElementBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVisualElementBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVisualElementBuilti);
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3f03f20

void CustomLogic_CustomLogicVisualElementBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703c46 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"TextOutlineColor");
    il2cpp_init_method_metadata(&"MarginTop");
    il2cpp_init_method_metadata(&"Remove");
    il2cpp_init_method_metadata(&"Add");
    il2cpp_init_method_metadata(&"AlignSelf");
    il2cpp_init_method_metadata(&"RegisterFocusInEventCallback");
    il2cpp_init_method_metadata(&"RegisterFocusOutEventCallback");
    il2cpp_init_method_metadata(&"Top");
    il2cpp_init_method_metadata(&"Right");
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"RemoveFromHierarchy");
    il2cpp_init_method_metadata(&"RegisterClickEventCallback");
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"MaxWidth");
    il2cpp_init_method_metadata(&"TransformScale");
    il2cpp_init_method_metadata(&"FontSize");
    il2cpp_init_method_metadata(&"AlignItems");
    il2cpp_init_method_metadata(&"FlexShrink");
    il2cpp_init_method_metadata(&"BorderRadius");
    il2cpp_init_method_metadata(&"AspectRatio");
    il2cpp_init_method_metadata(&"TextWrap");
    il2cpp_init_method_metadata(&"MarginBottom");
    il2cpp_init_method_metadata(&"JustifyContent");
    il2cpp_init_method_metadata(&"MaxHeight");
    il2cpp_init_method_metadata(&"OverflowX");
    il2cpp_init_method_metadata(&"FlexWrap");
    il2cpp_init_method_metadata(&"SetBackgroundImage");
    il2cpp_init_method_metadata(&"BorderWidthLeft");
    il2cpp_init_method_metadata(&"TextShadowVerticalOffset");
    il2cpp_init_method_metadata(&"BorderWidthTop");
    il2cpp_init_method_metadata(&"TextShadowHorizontalOffset");
    il2cpp_init_method_metadata(&"TextAlign");
    il2cpp_init_method_metadata(&"OverflowY");
    il2cpp_init_method_metadata(&"BorderWidth");
    il2cpp_init_method_metadata(&"ChildCount");
    il2cpp_init_method_metadata(&"FontStyle");
    il2cpp_init_method_metadata(&"BorderColorTop");
    il2cpp_init_method_metadata(&"Visible");
    il2cpp_init_method_metadata(&"FlexGrow");
    il2cpp_init_method_metadata(&"PaddingRight");
    il2cpp_init_method_metadata(&"TextLetterSpacing");
    il2cpp_init_method_metadata(&"MinHeight");
    il2cpp_init_method_metadata(&"MinWidth");
    il2cpp_init_method_metadata(&"FlexDirection");
    il2cpp_init_method_metadata(&"TransitionDuration");
    il2cpp_init_method_metadata(&"BorderWidthBottom");
    il2cpp_init_method_metadata(&"PaddingBottom");
    il2cpp_init_method_metadata(&"Active");
    il2cpp_init_method_metadata(&"TransformTranslate");
    il2cpp_init_method_metadata(&"TextShadowBlurRadius");
    il2cpp_init_method_metadata(&"RegisterMouseLeaveEventCallback");
    il2cpp_init_method_metadata(&"BorderRadiusTopRight");
    il2cpp_init_method_metadata(&"PaddingTop");
    il2cpp_init_method_metadata(&"PaddingLeft");
    il2cpp_init_method_metadata(&"Margin");
    il2cpp_init_method_metadata(&"BorderColor");
    il2cpp_init_method_metadata(&"RegisterMouseEnterEventCallback");
    il2cpp_init_method_metadata(&"BorderRadiusBottomLeft");
    il2cpp_init_method_metadata(&"Width");
    il2cpp_init_method_metadata(&"QueryByName");
    il2cpp_init_method_metadata(&"Left");
    il2cpp_init_method_metadata(&"Bottom");
    il2cpp_init_method_metadata(&"TextShadowColor");
    il2cpp_init_method_metadata(&"MarginRight");
    il2cpp_init_method_metadata(&"GetElementAt");
    il2cpp_init_method_metadata(&"Absolute");
    il2cpp_init_method_metadata(&"MarginLeft");
    il2cpp_init_method_metadata(&"TextWordSpacing");
    il2cpp_init_method_metadata(&"QueryByClassName");
    il2cpp_init_method_metadata(&"BorderColorLeft");
    il2cpp_init_method_metadata(&"SetTransformOrigin");
    il2cpp_init_method_metadata(&"BorderColorBottom");
    il2cpp_init_method_metadata(&"TextShadowOffset");
    il2cpp_init_method_metadata(&"TextOutlineWidth");
    il2cpp_init_method_metadata(&"TextParagraphSpacing");
    il2cpp_init_method_metadata(&"TextOverflow");
    il2cpp_init_method_metadata(&"BorderWidthRight");
    il2cpp_init_method_metadata(&"Opacity");
    il2cpp_init_method_metadata(&"BackgroundColor");
    il2cpp_init_method_metadata(&"TransformRotate");
    il2cpp_init_method_metadata(&"Padding");
    il2cpp_init_method_metadata(&"BorderRadiusBottomRight");
    il2cpp_init_method_metadata(&"BorderRadiusTopLeft");
    il2cpp_init_method_metadata(&"Height");
    il2cpp_init_method_metadata(&"BorderColorRight");
    DAT_05703c46 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"ChildCount",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Add",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Remove",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RemoveFromHierarchy",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Clear",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetElementAt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"QueryByName",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"QueryByClassName",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RegisterMouseEnterEventCallback",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RegisterMouseLeaveEventCallback",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RegisterClickEventCallback",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RegisterFocusInEventCallback",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RegisterFocusOutEventCallback",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Opacity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Active",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Visible",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TransitionDuration",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Absolute",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Left",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Top",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Right",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Bottom",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FlexShrink",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FlexGrow",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FlexDirection",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FlexWrap",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AlignItems",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"JustifyContent",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AlignSelf",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Width",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Height",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MinWidth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MinHeight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MaxWidth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MaxHeight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AspectRatio",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Margin",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MarginLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MarginTop",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MarginRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MarginBottom",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Padding",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PaddingLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PaddingTop",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PaddingRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PaddingBottom",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FontStyle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FontSize",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Color",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextAlign",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextWrap",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextOverflow",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextOutlineWidth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextOutlineColor",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextShadowColor",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextShadowOffset",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextShadowHorizontalOffset",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextShadowVerticalOffset",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextShadowBlurRadius",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextLetterSpacing",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextWordSpacing",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextParagraphSpacing",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BackgroundColor",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetBackgroundImage",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BorderColor",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BorderColorLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BorderColorTop",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BorderColorRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BorderColorBottom",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BorderWidth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BorderWidthLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BorderWidthTop",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BorderWidthRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BorderWidthBottom",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BorderRadius",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BorderRadiusTopLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BorderRadiusTopRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BorderRadiusBottomLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BorderRadiusBottomRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"OverflowX",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"OverflowY",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetTransformOrigin",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TransformTranslate",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TransformScale",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TransformRotate",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$<__CreatePropertyBinding__ChildCount>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVisualElementBuiltin_Bindings_____CreatePropertyBinding__ChildCount_g____getter_2_0 (CustomLogic_CustomLogicVisualElementBuiltin_o* __i, const MethodInfo* method);
// 0x3f04ad0

Il2CppObject *
CustomLogic_CustomLogicVisualElementBuiltin_Bindings__<__CreatePropertyBinding__ChildCount>g____getter_2_0
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) &&
     (__this = (__i->fields)._visualElement, __this != (UnityEngine_UIElements_VisualElement_o *)0x0
     )) {
    UnityEngine_UIElements_VisualElement__get_childCount(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c___cctor (const MethodInfo* method);
// 0x3f36500

void CustomLogic_CustomLogicVisualElementBuiltin_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703d4b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d4b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c___ctor (CustomLogic_CustomLogicVisualElementBuiltin___c_o* __this, const MethodInfo* method);
// 0x3f36570

void CustomLogic_CustomLogicVisualElementBuiltin_<>c___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c$$<AspectRatio>b__40_2
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c___AspectRatio_b__40_2 (CustomLogic_CustomLogicVisualElementBuiltin___c_o* __this, UnityEngine_UIElements_GeometryChangedEvent_o* evt, const MethodInfo* method);
// 0x3f36580

void CustomLogic_CustomLogicVisualElementBuiltin_<>c__<AspectRatio>b__40_2
               (CustomLogic_CustomLogicVisualElementBuiltin___c_o *__this,
               UnityEngine_UIElements_GeometryChangedEvent_o *evt,MethodInfo *method)

{
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass13_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0___ctor (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x3f36590

void CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass13_0___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass13_0$$<RegisterMouseEnterEventCallback>b__0
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0___RegisterMouseEnterEventCallback_b__0 (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0_o* __this, UnityEngine_UIElements_MouseEnterEvent_o* evt, const MethodInfo* method);
// 0x3f365a0

void CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass13_0__<RegisterMouseEnterEventCallback>b__0
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0_o *__this,
               UnityEngine_UIElements_MouseEnterEvent_o *evt,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  
  if (DAT_05703d4c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703d4c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod
              (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass14_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0___ctor (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x3f36630

void CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass14_0___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass14_0$$<RegisterMouseLeaveEventCallback>b__0
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0___RegisterMouseLeaveEventCallback_b__0 (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0_o* __this, UnityEngine_UIElements_MouseLeaveEvent_o* evt, const MethodInfo* method);
// 0x3f36640

void CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass14_0__<RegisterMouseLeaveEventCallback>b__0
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0_o *__this,
               UnityEngine_UIElements_MouseLeaveEvent_o *evt,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  
  if (DAT_05703d4d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703d4d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod
              (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass15_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0___ctor (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x3f366d0

void CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass15_0___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass15_0$$<RegisterClickEventCallback>b__0
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0___RegisterClickEventCallback_b__0 (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0_o* __this, UnityEngine_UIElements_ClickEvent_o* evt, const MethodInfo* method);
// 0x3f366e0

void CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass15_0__<RegisterClickEventCallback>b__0
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0_o *__this,
               UnityEngine_UIElements_ClickEvent_o *evt,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  
  if (DAT_05703d4e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703d4e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod
              (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass16_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0___ctor (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x3f36770

void CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass16_0___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass16_0$$<RegisterFocusInEventCallback>b__0
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0___RegisterFocusInEventCallback_b__0 (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0_o* __this, UnityEngine_UIElements_FocusInEvent_o* evt, const MethodInfo* method);
// 0x3f36780

void CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass16_0__<RegisterFocusInEventCallback>b__0
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0_o *__this,
               UnityEngine_UIElements_FocusInEvent_o *evt,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  
  if (DAT_05703d4f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703d4f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod
              (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass17_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0___ctor (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x3f36810

void CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass17_0___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass17_0$$<RegisterFocusOutEventCallback>b__0
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0___RegisterFocusOutEventCallback_b__0 (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0_o* __this, UnityEngine_UIElements_FocusOutEvent_o* evt, const MethodInfo* method);
// 0x3f36820

void CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass17_0__<RegisterFocusOutEventCallback>b__0
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0_o *__this,
               UnityEngine_UIElements_FocusOutEvent_o *evt,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  
  if (DAT_05703d50 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703d50 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod
              (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass40_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0___ctor (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0_o* __this, const MethodInfo* method);
// 0x3f368b0

void CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass40_0___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass40_0$$<AspectRatio>b__0
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0___AspectRatio_b__0 (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0_o* __this, UnityEngine_UIElements_GeometryChangedEvent_o* evt, const MethodInfo* method);
// 0x3f368c0

void CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass40_0__<AspectRatio>b__0
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0_o *__this,
               UnityEngine_UIElements_GeometryChangedEvent_o *evt,MethodInfo *method)

{
  ushort uVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_UIElements_IStyle_o *pUVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  UnityEngine_UIElements_StyleLength_o UVar8;
  
  if (DAT_05703d51 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703d51 = '\x01';
  }
  pCVar2 = (__this->fields).__4__this;
  if ((pCVar2 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) &&
     (__this_00 = (pCVar2->fields)._visualElement,
     __this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0)) {
    pUVar5 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if (evt != (UnityEngine_UIElements_GeometryChangedEvent_o *)0x0) {
      UVar8 = UnityEngine_UIElements_StyleLength__op_Implicit
                        ((evt->fields)._newRect_k__BackingField.fields.m_Width /
                         (__this->fields).value,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_UIElements_IStyle_o *)0x0) {
        pUVar3 = pUVar5->klass;
        uVar1._0_1_ = (pUVar3->_2).rank;
        uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar7 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar7) == TypeInfo_IStyle) {
              pVVar6 = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar7) + 0x1c);
              goto LAB_03f36995;
            }
            lVar7 = lVar7 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar7);
        }
        pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar5,TypeInfo_IStyle,0x1c);
LAB_03f36995:
        (*pVVar6->methodPtr)
                  (pUVar5,UVar8.fields.m_Value.fields.fields,(ulong)(uint)UVar8.fields.m_Keyword,
                   pVVar6->method,pVVar6->methodPtr);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass40_0$$<AspectRatio>b__1
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0___AspectRatio_b__1 (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0_o* __this, UnityEngine_UIElements_GeometryChangedEvent_o* evt, const MethodInfo* method);
// 0x3f369c0

void CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass40_0__<AspectRatio>b__1
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0_o *__this,
               UnityEngine_UIElements_GeometryChangedEvent_o *evt,MethodInfo *method)

{
  undefined4 uVar1;
  ushort uVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar3;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  UnityEngine_UIElements_IStyle_o *pUVar6;
  VirtualInvokeData *pVVar7;
  long lVar8;
  UnityEngine_UIElements_StyleLength_o UVar9;
  
  if (DAT_05703d52 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703d52 = '\x01';
  }
  pCVar3 = (__this->fields).__4__this;
  if ((pCVar3 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) &&
     (__this_00 = (pCVar3->fields)._visualElement,
     __this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0)) {
    pUVar6 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if (evt != (UnityEngine_UIElements_GeometryChangedEvent_o *)0x0) {
      uVar1 = (evt->fields)._newRect_k__BackingField.fields.m_Height;
      UVar9 = UnityEngine_UIElements_StyleLength__op_Implicit
                        ((float)uVar1 / (__this->fields).value,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_UIElements_IStyle_o *)0x0) {
        pUVar4 = pUVar6->klass;
        uVar2._0_1_ = (pUVar4->_2).rank;
        uVar2._1_1_ = (pUVar4->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar5 = (pUVar4->_1).interfaceOffsets;
          lVar8 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar8) == TypeInfo_IStyle) {
              pVVar7 = pUVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar8) + 0x49);
              goto LAB_03f36aa5;
            }
            lVar8 = lVar8 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar8);
        }
        pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar6,TypeInfo_IStyle,0x49);
LAB_03f36aa5:
        (*pVVar7->methodPtr)
                  (pUVar6,UVar9.fields.m_Value.fields.fields,(ulong)(uint)UVar9.fields.m_Keyword,
                   pVVar7->method,pVVar7->methodPtr);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass52_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0___ctor (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x3f36ad0

void CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass52_0___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass52_0$$<FontSize>b__0
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0___FontSize_b__0 (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0_o* __this, UnityEngine_UIElements_GeometryChangedEvent_o* evt, const MethodInfo* method);
// 0x3f36ae0

void CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass52_0__<FontSize>b__0
               (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0_o *__this,
               UnityEngine_UIElements_GeometryChangedEvent_o *evt,MethodInfo *method)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar4;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  uint uVar7;
  UnityEngine_UIElements_IStyle_o *pUVar8;
  VirtualInvokeData *pVVar9;
  long lVar10;
  float fVar11;
  UnityEngine_UIElements_StyleLength_o UVar12;
  
  if (DAT_05703d53 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703d53 = '\x01';
  }
  fVar1 = (__this->fields).value;
  iVar3 = (__this->fields).scaleMode;
  if (iVar3 == 1) {
    uVar7 = 0;
joined_r0x03f36b33:
    if (evt == (UnityEngine_UIElements_GeometryChangedEvent_o *)0x0) goto LAB_03f36bf3;
    fVar11 = (&(evt->fields)._newRect_k__BackingField.fields.m_Width)[uVar7];
    pCVar4 = (__this->fields).__4__this;
  }
  else {
    if (iVar3 == 0) {
      uVar7 = 1;
      goto joined_r0x03f36b33;
    }
    fVar11 = 1.0;
    pCVar4 = (__this->fields).__4__this;
  }
  if ((pCVar4 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) &&
     (__this_00 = (pCVar4->fields)._visualElement,
     __this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0)) {
    pUVar8 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar12 = UnityEngine_UIElements_StyleLength__op_Implicit
                       ((fVar1 / 100.0) * fVar11,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar5 = pUVar8->klass;
      uVar2._0_1_ = (pUVar5->_2).rank;
      uVar2._1_1_ = (pUVar5->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar6 = (pUVar5->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar10) == TypeInfo_IStyle) {
            pVVar9 = pUVar5->vtable + (*(int *)((long)&pIVar6->offset + lVar10) + 0x1b);
            goto LAB_03f36c0f;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar10);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar8,TypeInfo_IStyle,0x1b);
LAB_03f36c0f:
      (*pVVar9->methodPtr)
                (pUVar8,UVar12.fields.m_Value.fields.fields,(ulong)(uint)UVar12.fields.m_Keyword,
                 pVVar9->method,pVVar9->methodPtr);
      return;
    }
  }
LAB_03f36bf3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin___ctor (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, UnityEngine_UIElements_VisualElement_o* visualElement, const MethodInfo* method);
// 0x3edc7e0

void CustomLogic_CustomLogicVisualElementBuiltin___ctor
               (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,
               UnityEngine_UIElements_VisualElement_o *visualElement,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_05703ba3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_UIElement);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__EventCallback_GeometryChanged);
    DAT_05703ba3 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__EventCallback_GeometryChanged);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_UnityEngine_UIElement);
  (__this->fields)._onResize =
       (System_Collections_Generic_Dictionary_string__EventCallback_GeometryChangedEvent___o *)
       __this_00;
  il2cpp_runtime_glue(&(__this->fields)._onResize);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._visualElement = visualElement;
  il2cpp_runtime_glue(&(__this->fields)._visualElement,visualElement);
  return;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$get_ChildCount
// il2cpp: int32_t CustomLogic_CustomLogicVisualElementBuiltin__get_ChildCount (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, const MethodInfo* method);
// 0x3ef5040

int32_t CustomLogic_CustomLogicVisualElementBuiltin__get_ChildCount
                  (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    iVar1 = UnityEngine_UIElements_VisualElement__get_childCount(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Add
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Add (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* visualElement, const MethodInfo* method);
// 0x3ef5060

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Add
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,
          CustomLogic_CustomLogicVisualElementBuiltin_o *visualElement,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  
  if ((visualElement != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields)._visualElement,
     __this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0)) {
    UnityEngine_UIElements_VisualElement__Add
              (__this_00,(visualElement->fields)._visualElement,(MethodInfo *)0x0);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Remove
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin__Remove (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicVisualElementBuiltin_o* visualElement, const MethodInfo* method);
// 0x3ef5090

void CustomLogic_CustomLogicVisualElementBuiltin__Remove
               (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,
               CustomLogic_CustomLogicVisualElementBuiltin_o *visualElement,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  
  if ((visualElement != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields)._visualElement,
     __this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0)) {
    UnityEngine_UIElements_VisualElement__Remove
              (__this_00,(visualElement->fields)._visualElement,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$RemoveFromHierarchy
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin__RemoveFromHierarchy (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, const MethodInfo* method);
// 0x3ef50b0

void CustomLogic_CustomLogicVisualElementBuiltin__RemoveFromHierarchy
               (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicVisualElementBuiltin__Clear (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, const MethodInfo* method);
// 0x3ef50d0

void CustomLogic_CustomLogicVisualElementBuiltin__Clear
               (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this_00;
  
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    UnityEngine_UIElements_VisualElement__Clear(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$GetElementAt
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__GetElementAt (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x3ef50f0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__GetElementAt
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *pUVar1;
  undefined1 auVar2 [16];
  
  if (DAT_05703ba4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVisualElementBuiltin);
    DAT_05703ba4 = '\x01';
  }
  pUVar1 = (__this->fields)._visualElement;
  if (pUVar1 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar1 = UnityEngine_UIElements_VisualElement__ElementAt(pUVar1,index,(MethodInfo *)0x0);
    auVar2 = il2cpp_runtime_glue(TypeInfo_CustomLogicVisualElementBuiltin);
    CustomLogic_CustomLogicVisualElementBuiltin___ctor(auVar2._0_8_,pUVar1,auVar2._8_8_);
    return auVar2._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$QueryByName
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__QueryByName (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3ef5160

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__QueryByName
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,System_String_o *name,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *pUVar1;
  undefined1 auVar2 [16];
  
  if (DAT_05703ba5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_UQueryExtensions);
    DAT_05703ba5 = '\x01';
  }
  pUVar1 = (__this->fields)._visualElement;
  if (*(int *)(TypeInfo_UQueryExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar1 = UnityEngine_UIElements_UQueryExtensions__Q
                     (pUVar1,name,(System_String_o *)0x0,(MethodInfo *)0x0);
  auVar2 = il2cpp_runtime_glue(TypeInfo_CustomLogicVisualElementBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor(auVar2._0_8_,pUVar1,auVar2._8_8_);
  return auVar2._0_8_;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$QueryByClassName
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__QueryByClassName (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, System_String_o* className, const MethodInfo* method);
// 0x3ef51f0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__QueryByClassName
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,System_String_o *className,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *pUVar1;
  undefined1 auVar2 [16];
  
  if (DAT_05703ba6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_UQueryExtensions);
    DAT_05703ba6 = '\x01';
  }
  pUVar1 = (__this->fields)._visualElement;
  if (*(int *)(TypeInfo_UQueryExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar1 = UnityEngine_UIElements_UQueryExtensions__Q
                     (pUVar1,(System_String_o *)0x0,className,(MethodInfo *)0x0);
  auVar2 = il2cpp_runtime_glue(TypeInfo_CustomLogicVisualElementBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor(auVar2._0_8_,pUVar1,auVar2._8_8_);
  return auVar2._0_8_;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$RegisterMouseEnterEventCallback
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__RegisterMouseEnterEventCallback (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x3ef5280

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__RegisterMouseEnterEventCallback(void)

{
  UnityEngine_UIElements_VisualElement_o *__this;
  CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_TEventType__o *callback;
  CustomLogic_UserMethod_o *in_RSI;
  CustomLogic_CustomLogicVisualElementBuiltin_o *in_RDI;
  
  if (DAT_05703ba7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RegisterCallback_MouseEnterEvent);
    il2cpp_init_method_metadata(&TypeInfo_EventCallback_MouseEnterEvent);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterMouseEnterEventCallback_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass13_0);
    DAT_05703ba7 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0_o *)
              il2cpp_runtime_glue(TypeInfo_c__DisplayClass13_0);
  CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass13_0___ctor
            (__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass13_0_o *)0x0) {
    (__this_00->fields).method = in_RSI;
    il2cpp_runtime_glue(&__this_00->fields);
    __this = (in_RDI->fields)._visualElement;
    callback = (UnityEngine_UIElements_EventCallback_TEventType__o *)
               il2cpp_runtime_glue(TypeInfo_EventCallback_MouseEnterEvent);
    UnityEngine_UIElements_EventCallback<object>___ctor();
    if (__this != (UnityEngine_UIElements_VisualElement_o *)0x0) {
      UnityEngine_UIElements_CallbackEventHandler__RegisterCallback<object>
                ((UnityEngine_UIElements_CallbackEventHandler_o *)__this,callback,0,MethodInfo_Void_RegisterCallback_MouseEnterEvent);
      return in_RDI;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$RegisterMouseLeaveEventCallback
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__RegisterMouseLeaveEventCallback (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x3ef5360

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__RegisterMouseLeaveEventCallback(void)

{
  UnityEngine_UIElements_VisualElement_o *__this;
  CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_TEventType__o *callback;
  CustomLogic_UserMethod_o *in_RSI;
  CustomLogic_CustomLogicVisualElementBuiltin_o *in_RDI;
  
  if (DAT_05703ba8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RegisterCallback_MouseLeaveEvent);
    il2cpp_init_method_metadata(&TypeInfo_EventCallback_MouseLeaveEvent);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterMouseLeaveEventCallback_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass14_0);
    DAT_05703ba8 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0_o *)
              il2cpp_runtime_glue(TypeInfo_c__DisplayClass14_0);
  CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass14_0___ctor
            (__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass14_0_o *)0x0) {
    (__this_00->fields).method = in_RSI;
    il2cpp_runtime_glue(&__this_00->fields);
    __this = (in_RDI->fields)._visualElement;
    callback = (UnityEngine_UIElements_EventCallback_TEventType__o *)
               il2cpp_runtime_glue(TypeInfo_EventCallback_MouseLeaveEvent);
    UnityEngine_UIElements_EventCallback<object>___ctor();
    if (__this != (UnityEngine_UIElements_VisualElement_o *)0x0) {
      UnityEngine_UIElements_CallbackEventHandler__RegisterCallback<object>
                ((UnityEngine_UIElements_CallbackEventHandler_o *)__this,callback,0,MethodInfo_Void_RegisterCallback_MouseLeaveEvent);
      return in_RDI;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$RegisterClickEventCallback
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__RegisterClickEventCallback (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x3ef5440

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__RegisterClickEventCallback(void)

{
  UnityEngine_UIElements_VisualElement_o *__this;
  CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_TEventType__o *callback;
  CustomLogic_UserMethod_o *in_RSI;
  CustomLogic_CustomLogicVisualElementBuiltin_o *in_RDI;
  
  if (DAT_05703ba9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RegisterCallback_ClickEvent);
    il2cpp_init_method_metadata(&TypeInfo_EventCallback_ClickEvent);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterClickEventCallback_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass15_0);
    DAT_05703ba9 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0_o *)
              il2cpp_runtime_glue(TypeInfo_c__DisplayClass15_0);
  CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass15_0___ctor
            (__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass15_0_o *)0x0) {
    (__this_00->fields).method = in_RSI;
    il2cpp_runtime_glue(&__this_00->fields);
    __this = (in_RDI->fields)._visualElement;
    callback = (UnityEngine_UIElements_EventCallback_TEventType__o *)
               il2cpp_runtime_glue(TypeInfo_EventCallback_ClickEvent);
    UnityEngine_UIElements_EventCallback<object>___ctor();
    if (__this != (UnityEngine_UIElements_VisualElement_o *)0x0) {
      UnityEngine_UIElements_CallbackEventHandler__RegisterCallback<object>
                ((UnityEngine_UIElements_CallbackEventHandler_o *)__this,callback,0,MethodInfo_Void_RegisterCallback_ClickEvent);
      return in_RDI;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$RegisterFocusInEventCallback
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__RegisterFocusInEventCallback (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x3ef5520

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__RegisterFocusInEventCallback(void)

{
  UnityEngine_UIElements_VisualElement_o *__this;
  CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_TEventType__o *callback;
  CustomLogic_UserMethod_o *in_RSI;
  CustomLogic_CustomLogicVisualElementBuiltin_o *in_RDI;
  
  if (DAT_05703baa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RegisterCallback_FocusInEvent);
    il2cpp_init_method_metadata(&TypeInfo_EventCallback_FocusInEvent);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterFocusInEventCallback_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass16_0);
    DAT_05703baa = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0_o *)
              il2cpp_runtime_glue(TypeInfo_c__DisplayClass16_0);
  CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass16_0___ctor
            (__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass16_0_o *)0x0) {
    (__this_00->fields).method = in_RSI;
    il2cpp_runtime_glue(&__this_00->fields);
    __this = (in_RDI->fields)._visualElement;
    callback = (UnityEngine_UIElements_EventCallback_TEventType__o *)
               il2cpp_runtime_glue(TypeInfo_EventCallback_FocusInEvent);
    UnityEngine_UIElements_EventCallback<object>___ctor();
    if (__this != (UnityEngine_UIElements_VisualElement_o *)0x0) {
      UnityEngine_UIElements_CallbackEventHandler__RegisterCallback<object>
                ((UnityEngine_UIElements_CallbackEventHandler_o *)__this,callback,0,MethodInfo_Void_RegisterCallback_FocusInEvent);
      return in_RDI;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$RegisterFocusOutEventCallback
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__RegisterFocusOutEventCallback (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x3ef5600

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__RegisterFocusOutEventCallback(void)

{
  UnityEngine_UIElements_VisualElement_o *__this;
  CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_TEventType__o *callback;
  CustomLogic_UserMethod_o *in_RSI;
  CustomLogic_CustomLogicVisualElementBuiltin_o *in_RDI;
  
  if (DAT_05703bab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RegisterCallback_FocusOutEvent);
    il2cpp_init_method_metadata(&TypeInfo_EventCallback_FocusOutEvent);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterFocusOutEventCallback_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass17_0);
    DAT_05703bab = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0_o *)
              il2cpp_runtime_glue(TypeInfo_c__DisplayClass17_0);
  CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass17_0___ctor
            (__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass17_0_o *)0x0) {
    (__this_00->fields).method = in_RSI;
    il2cpp_runtime_glue(&__this_00->fields);
    __this = (in_RDI->fields)._visualElement;
    callback = (UnityEngine_UIElements_EventCallback_TEventType__o *)
               il2cpp_runtime_glue(TypeInfo_EventCallback_FocusOutEvent);
    UnityEngine_UIElements_EventCallback<object>___ctor();
    if (__this != (UnityEngine_UIElements_VisualElement_o *)0x0) {
      UnityEngine_UIElements_CallbackEventHandler__RegisterCallback<object>
                ((UnityEngine_UIElements_CallbackEventHandler_o *)__this,callback,0,MethodInfo_Void_RegisterCallback_FocusOutEvent);
      return in_RDI;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Opacity
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Opacity (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ef56e0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Opacity
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  UnityEngine_UIElements_StyleFloat_o UVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  if (DAT_05703bac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bac = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    fVar8 = value / 100.0;
    fVar9 = 1.0;
    if (fVar8 <= 1.0) {
      fVar9 = fVar8;
    }
    UVar5 = UnityEngine_UIElements_StyleFloat__op_Implicit
                      ((float)(-(uint)(0.0 <= fVar8) & (uint)fVar9),(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar7) == TypeInfo_IStyle) {
            pVVar6 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 0x28);
            goto LAB_03ef57b5;
          }
          lVar7 = lVar7 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar7);
      }
      pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x28);
LAB_03ef57b5:
      (*pVVar6->methodPtr)(pUVar4,UVar5.fields,pVVar6->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Active
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Active (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3ef57e0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Active
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,bool_conflict value,
          MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleEnum_T__o UVar7;
  
  if (DAT_05703bad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    il2cpp_init_method_metadata(&MethodInfo_StyleEnum_1_DisplayStyle__op_Implicit);
    DAT_05703bad = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar7 = UnityEngine_UIElements_StyleEnum<Int32Enum>__op_Implicit
                      ((uint)(byte)((byte)value ^ 1),MethodInfo_StyleEnum_1_DisplayStyle__op_Implicit);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x15);
            goto LAB_03ef58a5;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x15);
LAB_03ef58a5:
      (*pVVar5->methodPtr)(pUVar4,UVar7.fields.m_Value,pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Visible
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Visible (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3ef58d0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Visible
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,bool_conflict value,
          MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleEnum_T__o UVar7;
  
  if (DAT_05703bae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    il2cpp_init_method_metadata(&MethodInfo_StyleEnum_1_Visibility__op_Implicit);
    DAT_05703bae = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar7 = UnityEngine_UIElements_StyleEnum<Int32Enum>__op_Implicit
                      ((uint)(byte)((byte)value ^ 1),MethodInfo_StyleEnum_1_Visibility__op_Implicit);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x46);
            goto LAB_03ef5995;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x46);
LAB_03ef5995:
      (*pVVar5->methodPtr)(pUVar4,UVar7.fields.m_Value,pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TransitionDuration
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TransitionDuration (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ef59c0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TransitionDuration
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  uint uVar3;
  UnityEngine_UIElements_TimeValue_array *pUVar4;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  System_Collections_Generic_List_TimeValue__o *__this_01;
  UnityEngine_UIElements_IStyle_o *pUVar7;
  VirtualInvokeData *pVVar8;
  long lVar9;
  UnityEngine_UIElements_StyleList_T__o UVar10;
  UnityEngine_UIElements_TimeValue_Fields local_28;
  
  if (DAT_05703baf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_UIElements_TimeValue);
    il2cpp_init_method_metadata(&TypeInfo_List_TimeValue);
    il2cpp_init_method_metadata(&MethodInfo_StyleList_1_TimeValue__op_Implicit);
    DAT_05703baf = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_TimeValue__o *)il2cpp_runtime_glue(TypeInfo_List_TimeValue);
  System_Collections_Generic_List<TimeValue>___ctor(__this_01,MethodInfo_List_1_UnityEngine_UIElements_TimeValue);
  local_28.m_Value = 0.0;
  local_28.m_Unit = 0;
  UnityEngine_UIElements_TimeValue___ctor
            ((UnityEngine_UIElements_TimeValue_o)&local_28,value,1,(MethodInfo *)0x0);
  lVar9 = MethodInfo_Void_Add;
  if (__this_01 != (System_Collections_Generic_List_TimeValue__o *)0x0) {
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (__this_01->fields)._items;
    if (pUVar4 != (UnityEngine_UIElements_TimeValue_array *)0x0) {
      uVar3 = (__this_01->fields)._size;
      if (uVar3 < (uint)pUVar4->max_length) {
        (__this_01->fields)._size = uVar3 + 1;
        pUVar4->m_Items[(int)uVar3].fields = local_28;
      }
      else {
        System_Collections_Generic_List<TimeValue>__AddWithResize
                  (__this_01,(UnityEngine_UIElements_TimeValue_o)local_28,
                   *(MethodInfo_36002A0 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      UVar10 = UnityEngine_UIElements_StyleList<TimeValue>__op_Implicit
                         ((System_Collections_Generic_List_T__o *)__this_01,MethodInfo_StyleList_1_TimeValue__op_Implicit);
      __this_00 = (__this->fields)._visualElement;
      if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
        pUVar7 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_UIElements_IStyle_o *)0x0) {
          pUVar5 = pUVar7->klass;
          uVar2._0_1_ = (pUVar5->_2).rank;
          uVar2._1_1_ = (pUVar5->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar6 = (pUVar5->_1).interfaceOffsets;
            lVar9 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar9) == TypeInfo_IStyle) {
                pVVar8 = pUVar5->vtable + (*(int *)((long)&pIVar6->offset + lVar9) + 0x3b);
                goto LAB_03ef5b55;
              }
              lVar9 = lVar9 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar9);
          }
          pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar7,TypeInfo_IStyle,0x3b);
LAB_03ef5b55:
          (*pVVar8->methodPtr)
                    (pUVar7,(ulong)(uint)UVar10.fields.m_Keyword,UVar10.fields.m_Value,
                     pVVar8->method);
          return __this;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Absolute
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Absolute (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3ef5b80

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Absolute
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,bool_conflict value,
          MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleEnum_T__o UVar7;
  
  if (DAT_05703bb0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    il2cpp_init_method_metadata(&MethodInfo_StyleEnum_1_Position__op_Implicit);
    DAT_05703bb0 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar7 = UnityEngine_UIElements_StyleEnum<Int32Enum>__op_Implicit(value & 0xff,MethodInfo_StyleEnum_1_Position__op_Implicit);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x2f);
            goto LAB_03ef5c45;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x2f);
LAB_03ef5c45:
      (*pVVar5->methodPtr)(pUVar4,UVar7.fields.m_Value,pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Left
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Left (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef5c70

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Left
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bb1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bb1 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x1e);
            goto LAB_03ef5d55;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x1e);
LAB_03ef5d55:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Top
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Top (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef5da0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Top
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bb2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bb2 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x38);
            goto LAB_03ef5e85;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x38);
LAB_03ef5e85:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Right
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Right (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef5eb0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Right
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bb3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bb3 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x30);
            goto LAB_03ef5f95;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x30);
LAB_03ef5f95:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Bottom
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Bottom (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef5fc0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Bottom
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bb4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bb4 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x11);
            goto LAB_03ef60a5;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x11);
LAB_03ef60a5:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$FlexShrink
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__FlexShrink (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ef60d0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__FlexShrink
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  UnityEngine_UIElements_StyleFloat_o UVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  
  if (DAT_05703bb5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bb5 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar5 = UnityEngine_UIElements_StyleFloat__op_Implicit(value,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar7) == TypeInfo_IStyle) {
            pVVar6 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 0x19);
            goto LAB_03ef6185;
          }
          lVar7 = lVar7 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar7);
      }
      pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x19);
LAB_03ef6185:
      (*pVVar6->methodPtr)(pUVar4,UVar5.fields,pVVar6->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$FlexGrow
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__FlexGrow (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ef61b0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__FlexGrow
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  UnityEngine_UIElements_StyleFloat_o UVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  
  if (DAT_05703bb6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bb6 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar5 = UnityEngine_UIElements_StyleFloat__op_Implicit(value,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar7) == TypeInfo_IStyle) {
            pVVar6 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 0x18);
            goto LAB_03ef6265;
          }
          lVar7 = lVar7 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar7);
      }
      pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x18);
LAB_03ef6265:
      (*pVVar6->methodPtr)(pUVar4,UVar5.fields,pVVar6->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$FlexDirection
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__FlexDirection (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3ef6290

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__FlexDirection
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  System_Type_o *enumType;
  Il2CppObject *pIVar5;
  UnityEngine_UIElements_IStyle_o *pUVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  System_ArgumentException_o *__this_01;
  long lVar10;
  UnityEngine_UIElements_StyleEnum_T__o UVar11;
  int32_t local_30;
  int32_t local_2c;
  
  if (DAT_05703bb7 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_FlexDirection);
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    il2cpp_init_method_metadata(&MethodInfo_StyleEnum_1_FlexDirection__op_Implicit);
    DAT_05703bb7 = '\x01';
  }
  handle.fields.value = TypeRef_FlexDirection.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  local_2c = value;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar5,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    local_30 = value;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
    pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown flex direction value: {0}");
    pSVar8 = System_String__Format(pSVar8,pIVar5,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar9);
    System_ArgumentException___ctor(__this_01,pSVar8,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVisualElementBuiltin_FlexDirection);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_01,uVar9);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar6 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar11 = UnityEngine_UIElements_StyleEnum<Int32Enum>__op_Implicit(value,MethodInfo_StyleEnum_1_FlexDirection__op_Implicit);
    if (pUVar6 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar6->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_IStyle) {
            pVVar7 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar10) + 0x17);
            goto LAB_03ef63e5;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar10);
      }
      pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar6,TypeInfo_IStyle,0x17);
LAB_03ef63e5:
      (*pVVar7->methodPtr)(pUVar6,UVar11.fields.m_Value,pVVar7->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$FlexWrap
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__FlexWrap (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3ef6480

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__FlexWrap
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  System_Type_o *enumType;
  Il2CppObject *pIVar5;
  UnityEngine_UIElements_IStyle_o *pUVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  System_ArgumentException_o *__this_01;
  long lVar10;
  UnityEngine_UIElements_StyleEnum_T__o UVar11;
  int32_t local_30;
  int32_t local_2c;
  
  if (DAT_05703bb8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    il2cpp_init_method_metadata(&MethodInfo_StyleEnum_1_Wrap__op_Implicit);
    il2cpp_init_method_metadata(&TypeRef_Wrap);
    DAT_05703bb8 = '\x01';
  }
  handle.fields.value = TypeRef_Wrap.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  local_2c = value;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar5,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    local_30 = value;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
    pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown wrap value: {0}");
    pSVar8 = System_String__Format(pSVar8,pIVar5,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar9);
    System_ArgumentException___ctor(__this_01,pSVar8,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVisualElementBuiltin_FlexWrap);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_01,uVar9);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar6 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar11 = UnityEngine_UIElements_StyleEnum<Int32Enum>__op_Implicit(value,MethodInfo_StyleEnum_1_Wrap__op_Implicit);
    if (pUVar6 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar6->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_IStyle) {
            pVVar7 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar10) + 0x1a);
            goto LAB_03ef65d5;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar10);
      }
      pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar6,TypeInfo_IStyle,0x1a);
LAB_03ef65d5:
      (*pVVar7->methodPtr)(pUVar6,UVar11.fields.m_Value,pVVar7->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$AlignItems
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__AlignItems (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3ef6670

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__AlignItems
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  System_Type_o *enumType;
  Il2CppObject *pIVar5;
  UnityEngine_UIElements_IStyle_o *pUVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  System_ArgumentException_o *__this_01;
  long lVar10;
  UnityEngine_UIElements_StyleEnum_T__o UVar11;
  int32_t local_30;
  int32_t local_2c;
  
  if (DAT_05703bb9 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_Align);
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    il2cpp_init_method_metadata(&MethodInfo_StyleEnum_1_Align__op_Implicit);
    DAT_05703bb9 = '\x01';
  }
  handle.fields.value = TypeRef_Align.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  local_2c = value;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar5,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    local_30 = value;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
    pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown align value: {0}");
    pSVar8 = System_String__Format(pSVar8,pIVar5,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar9);
    System_ArgumentException___ctor(__this_01,pSVar8,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVisualElementBuiltin_AlignItems);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_01,uVar9);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar6 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar11 = UnityEngine_UIElements_StyleEnum<Int32Enum>__op_Implicit(value,MethodInfo_StyleEnum_1_Align__op_Implicit);
    if (pUVar6 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar6->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_IStyle) {
            pVVar7 = pUVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
            goto LAB_03ef67bd;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar10);
      }
      pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar6,TypeInfo_IStyle,0);
LAB_03ef67bd:
      (*pVVar7->methodPtr)(pUVar6,UVar11.fields.m_Value,pVVar7->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$JustifyContent
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__JustifyContent (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3ef6850

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__JustifyContent
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  System_Type_o *enumType;
  Il2CppObject *pIVar5;
  UnityEngine_UIElements_IStyle_o *pUVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  System_ArgumentException_o *__this_01;
  long lVar10;
  UnityEngine_UIElements_StyleEnum_T__o UVar11;
  int32_t local_30;
  int32_t local_2c;
  
  if (DAT_05703bba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    il2cpp_init_method_metadata(&TypeRef_Justify);
    il2cpp_init_method_metadata(&MethodInfo_StyleEnum_1_Justify__op_Implicit);
    DAT_05703bba = '\x01';
  }
  handle.fields.value = TypeRef_Justify.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  local_2c = value;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar5,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    local_30 = value;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
    pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown justify value: {0}");
    pSVar8 = System_String__Format(pSVar8,pIVar5,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar9);
    System_ArgumentException___ctor(__this_01,pSVar8,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVisualElementBuiltin_JustifyContent);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_01,uVar9);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar6 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar11 = UnityEngine_UIElements_StyleEnum<Int32Enum>__op_Implicit(value,MethodInfo_StyleEnum_1_Justify__op_Implicit);
    if (pUVar6 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar6->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_IStyle) {
            pVVar7 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar10) + 0x1d);
            goto LAB_03ef69a5;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar10);
      }
      pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar6,TypeInfo_IStyle,0x1d);
LAB_03ef69a5:
      (*pVVar7->methodPtr)(pUVar6,UVar11.fields.m_Value,pVVar7->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$AlignSelf
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__AlignSelf (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3ef6a40

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__AlignSelf
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  System_Type_o *enumType;
  Il2CppObject *pIVar5;
  UnityEngine_UIElements_IStyle_o *pUVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  System_ArgumentException_o *__this_01;
  long lVar10;
  UnityEngine_UIElements_StyleEnum_T__o UVar11;
  int32_t local_30;
  int32_t local_2c;
  
  if (DAT_05703bbb == '\0') {
    il2cpp_init_method_metadata(&TypeRef_Align);
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    il2cpp_init_method_metadata(&MethodInfo_StyleEnum_1_Align__op_Implicit);
    DAT_05703bbb = '\x01';
  }
  handle.fields.value = TypeRef_Align.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  local_2c = value;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar5,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    local_30 = value;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
    pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown align value: {0}");
    pSVar8 = System_String__Format(pSVar8,pIVar5,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar9);
    System_ArgumentException___ctor(__this_01,pSVar8,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVisualElementBuiltin_AlignSelf);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_01,uVar9);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar6 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar11 = UnityEngine_UIElements_StyleEnum<Int32Enum>__op_Implicit(value,MethodInfo_StyleEnum_1_Align__op_Implicit);
    if (pUVar6 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar6->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_IStyle) {
            pVVar7 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar10) + 1);
            goto LAB_03ef6b95;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar10);
      }
      pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar6,TypeInfo_IStyle,1);
LAB_03ef6b95:
      (*pVVar7->methodPtr)(pUVar6,UVar11.fields.m_Value,pVVar7->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Width
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Width (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef6c30

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Width
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bbc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bbc = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x49);
            goto LAB_03ef6d15;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x49);
LAB_03ef6d15:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Height
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Height (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef6d40

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Height
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bbd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bbd = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x1c);
            goto LAB_03ef6e25;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x1c);
LAB_03ef6e25:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$MinWidth
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__MinWidth (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef6e50

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__MinWidth
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bbe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bbe = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x27);
            goto LAB_03ef6f35;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x27);
LAB_03ef6f35:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$MinHeight
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__MinHeight (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef6f60

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__MinHeight
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bbf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bbf = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x26);
            goto LAB_03ef7045;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x26);
LAB_03ef7045:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$MaxWidth
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__MaxWidth (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef7070

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__MaxWidth
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bc0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bc0 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x25);
            goto LAB_03ef7155;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x25);
LAB_03ef7155:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$MaxHeight
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__MaxHeight (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef7180

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__MaxHeight
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bc1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bc1 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x24);
            goto LAB_03ef7265;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x24);
LAB_03ef7265:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$AspectRatio
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__AspectRatio (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, int32_t mode, const MethodInfo* method);
// 0x3ef7290

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__AspectRatio
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,int32_t mode,
          MethodInfo *method)

{
  float fVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  UnityEngine_UIElements_VisualElement_o *pUVar3;
  long lVar4;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar5;
  CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0_o *__this_00;
  System_Type_o *enumType;
  Il2CppObject *value_00;
  UnityEngine_UIElements_EventCallback_TEventType__o *callback;
  undefined8 uVar6;
  System_Exception_o *__this_01;
  System_String_o *message;
  int32_t local_3c;
  UnityEngine_UIElements_EventCallback_TEventType__o *local_38;
  
  if (DAT_05703bc2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RegisterCallback_GeometryChangedEvent);
    il2cpp_init_method_metadata(&MethodInfo_Void_UnregisterCallback_GeometryChangedEvent);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeRef_ElementAspectRatio);
    il2cpp_init_method_metadata(&TypeInfo_EventCallback_GeometryChangedEvent);
    il2cpp_init_method_metadata(&MethodInfo_Void__AspectRatio_b__40_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__AspectRatio_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__AspectRatio_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass40_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"AspectRatio");
    DAT_05703bc2 = '\x01';
  }
  local_38 = (UnityEngine_UIElements_EventCallback_TEventType__o *)0x0;
  __this_00 = (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0_o *)
              il2cpp_runtime_glue(TypeInfo_c__DisplayClass40_0);
  CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass40_0___ctor
            (__this_00,(MethodInfo *)0x0);
  if (__this_00 == (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass40_0_o *)0x0)
  goto LAB_03ef75cc;
  (__this_00->fields).__4__this = __this;
  il2cpp_runtime_glue(&__this_00->fields);
  (__this_00->fields).value = value;
  handle.fields.value = TypeRef_ElementAspectRatio.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  local_3c = mode;
  value_00 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_3c);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = System_Enum__IsDefined(enumType,value_00,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
    message = (System_String_o *)il2cpp_init_method_metadata(&"Unknown aspect ratio mode");
    System_Exception___ctor(__this_01,message,(MethodInfo *)0x0);
    uVar6 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVisualElementBuiltin_AspectRatio);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_01,uVar6);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._onResize;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03ef75cc;
  bVar5 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                    (pSVar2,"AspectRatio",(Il2CppObject **)&local_38,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar5 != '\0') {
    pUVar3 = (__this->fields)._visualElement;
    if (pUVar3 == (UnityEngine_UIElements_VisualElement_o *)0x0) goto LAB_03ef75cc;
    UnityEngine_UIElements_CallbackEventHandler__UnregisterCallback<object>
              ((UnityEngine_UIElements_CallbackEventHandler_o *)pUVar3,local_38,0,MethodInfo_Void_UnregisterCallback_GeometryChangedEvent);
  }
  fVar1 = (__this_00->fields).value;
  if ((fVar1 == 0.0) && (!NAN(fVar1))) {
    return __this;
  }
  if (mode == 0) {
    callback = (UnityEngine_UIElements_EventCallback_TEventType__o *)
               il2cpp_runtime_glue(TypeInfo_EventCallback_GeometryChangedEvent);
LAB_03ef74b2:
    UnityEngine_UIElements_EventCallback<object>___ctor();
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._onResize;
  }
  else {
    if (mode == 1) {
      callback = (UnityEngine_UIElements_EventCallback_TEventType__o *)
                 il2cpp_runtime_glue(TypeInfo_EventCallback_GeometryChangedEvent);
      goto LAB_03ef74b2;
    }
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      callback = *(UnityEngine_UIElements_EventCallback_TEventType__o **)
                  (*(long *)(TypeInfo_c + 0xb8) + 8);
      if (callback != (UnityEngine_UIElements_EventCallback_TEventType__o *)0x0) goto LAB_03ef74f3;
LAB_03ef7561:
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      callback = (UnityEngine_UIElements_EventCallback_TEventType__o *)
                 il2cpp_runtime_glue(TypeInfo_EventCallback_GeometryChangedEvent);
      UnityEngine_UIElements_EventCallback<object>___ctor();
      lVar4 = *(long *)(TypeInfo_c + 0xb8);
      *(UnityEngine_UIElements_EventCallback_TEventType__o **)(lVar4 + 8) = callback;
      il2cpp_runtime_glue(lVar4 + 8,callback);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._onResize
      ;
    }
    else {
      callback = *(UnityEngine_UIElements_EventCallback_TEventType__o **)
                  (*(long *)(TypeInfo_c + 0xb8) + 8);
      if (callback == (UnityEngine_UIElements_EventCallback_TEventType__o *)0x0) goto LAB_03ef7561;
LAB_03ef74f3:
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._onResize
      ;
    }
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar2,"AspectRatio",(Il2CppObject *)callback,MethodInfo_Void_set_Item);
    pUVar3 = (__this->fields)._visualElement;
    if (pUVar3 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
      UnityEngine_UIElements_CallbackEventHandler__RegisterCallback<object>
                ((UnityEngine_UIElements_CallbackEventHandler_o *)pUVar3,callback,0,MethodInfo_Void_RegisterCallback_GeometryChangedEvent);
      return __this;
    }
  }
LAB_03ef75cc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Margin
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Margin (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef7620

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Margin
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  uint percentage_00;
  
  pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__MarginLeft(__this,value,percentage,method);
  if (pCVar1 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
    percentage_00 = percentage & 0xff;
    pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__MarginTop
                       (pCVar1,value,percentage_00,method_00);
    if (pCVar1 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__MarginRight
                         (pCVar1,value,percentage_00,method_01);
      if (pCVar1 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__MarginBottom
                           (pCVar1,value,percentage_00,method_02);
        return pCVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$MarginLeft
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__MarginLeft (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef7680

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__MarginLeft
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bc3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bc3 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x21);
            goto LAB_03ef7765;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x21);
LAB_03ef7765:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$MarginTop
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__MarginTop (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef7790

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__MarginTop
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bc4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bc4 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x23);
            goto LAB_03ef7875;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x23);
LAB_03ef7875:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$MarginRight
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__MarginRight (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef78a0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__MarginRight
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bc5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bc5 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x22);
            goto LAB_03ef7985;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x22);
LAB_03ef7985:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$MarginBottom
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__MarginBottom (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef79b0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__MarginBottom
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bc6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bc6 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x20);
            goto LAB_03ef7a95;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x20);
LAB_03ef7a95:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Padding
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Padding (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef7ac0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Padding
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  uint percentage_00;
  
  pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__PaddingLeft(__this,value,percentage,method);
  if (pCVar1 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
    percentage_00 = percentage & 0xff;
    pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__PaddingTop
                       (pCVar1,value,percentage_00,method_00);
    if (pCVar1 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__PaddingRight
                         (pCVar1,value,percentage_00,method_01);
      if (pCVar1 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__PaddingBottom
                           (pCVar1,value,percentage_00,method_02);
        return pCVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$PaddingLeft
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__PaddingLeft (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef7b20

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__PaddingLeft
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bc7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bc7 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x2b);
            goto LAB_03ef7c05;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x2b);
LAB_03ef7c05:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$PaddingTop
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__PaddingTop (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef7c30

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__PaddingTop
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bc8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bc8 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x2e);
            goto LAB_03ef7d15;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x2e);
LAB_03ef7d15:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$PaddingRight
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__PaddingRight (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef7d40

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__PaddingRight
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bc9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bc9 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x2c);
            goto LAB_03ef7e25;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x2c);
LAB_03ef7e25:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$PaddingBottom
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__PaddingBottom (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, const MethodInfo* method);
// 0x3ef7e50

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__PaddingBottom
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  UnityEngine_UIElements_Length_Fields local_28;
  
  if (DAT_05703bca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bca = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_28.m_Value = 0.0;
    local_28.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_28,value,percentage & 0xff,(MethodInfo *)0x0)
    ;
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit
                      ((UnityEngine_UIElements_Length_o)local_28,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x2a);
            goto LAB_03ef7f35;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x2a);
LAB_03ef7f35:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$FontStyle
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__FontStyle (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3ef7f60

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__FontStyle
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  System_Type_o *enumType;
  Il2CppObject *pIVar5;
  UnityEngine_UIElements_IStyle_o *pUVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  System_ArgumentException_o *__this_01;
  long lVar10;
  UnityEngine_UIElements_StyleEnum_T__o UVar11;
  int32_t local_30;
  int32_t local_2c;
  
  if (DAT_05703bcb == '\0') {
    il2cpp_init_method_metadata(&TypeRef_FontStyle);
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    il2cpp_init_method_metadata(&MethodInfo_StyleEnum_1_UnityEngine_FontStyle__op_Implicit);
    DAT_05703bcb = '\x01';
  }
  handle.fields.value = TypeRef_FontStyle.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  local_2c = value;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar5,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    local_30 = value;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
    pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown font style value: {0}");
    pSVar8 = System_String__Format(pSVar8,pIVar5,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar9);
    System_ArgumentException___ctor(__this_01,pSVar8,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVisualElementBuiltin_FontStyle);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_01,uVar9);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar6 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar11 = UnityEngine_UIElements_StyleEnum<Int32Enum>__op_Implicit(value,MethodInfo_StyleEnum_1_UnityEngine_FontStyle__op_Implicit);
    if (pUVar6 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar6->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_IStyle) {
            pVVar7 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar10) + 0x41);
            goto LAB_03ef80b5;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar10);
      }
      pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar6,TypeInfo_IStyle,0x41);
LAB_03ef80b5:
      (*pVVar7->methodPtr)(pUVar6,UVar11.fields.m_Value,pVVar7->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$FontSize
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__FontSize (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, bool percentage, int32_t scaleMode, const MethodInfo* method);
// 0x3ef8150

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__FontSize
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,
          bool_conflict percentage,int32_t scaleMode,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  UnityEngine_UIElements_VisualElement_o *pUVar3;
  UnityEngine_UIElements_IStyle_c *pUVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar6;
  CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0_o *__this_00;
  System_Type_o *enumType;
  Il2CppObject *value_00;
  UnityEngine_UIElements_EventCallback_TEventType__o *callback;
  UnityEngine_UIElements_IStyle_o *pUVar7;
  VirtualInvokeData *pVVar8;
  undefined8 uVar9;
  System_Exception_o *__this_01;
  System_String_o *message;
  long lVar10;
  UnityEngine_UIElements_StyleLength_o UVar11;
  UnityEngine_UIElements_Length_Fields local_48;
  float local_3c;
  UnityEngine_UIElements_EventCallback_TEventType__o *local_38;
  
  local_3c = value;
  if (DAT_05703bcc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RegisterCallback_GeometryChangedEvent);
    il2cpp_init_method_metadata(&MethodInfo_Void_UnregisterCallback_GeometryChangedEvent);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_EventCallback_GeometryChangedEvent);
    il2cpp_init_method_metadata(&TypeRef_FontScaleMode);
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__FontSize_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass52_0);
    il2cpp_init_method_metadata(&"FontScaleMode");
    DAT_05703bcc = '\x01';
  }
  local_38 = (UnityEngine_UIElements_EventCallback_TEventType__o *)0x0;
  __this_00 = (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0_o *)
              il2cpp_runtime_glue(TypeInfo_c__DisplayClass52_0);
  CustomLogic_CustomLogicVisualElementBuiltin_<>c__DisplayClass52_0___ctor
            (__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicVisualElementBuiltin___c__DisplayClass52_0_o *)0x0) {
    (__this_00->fields).value = local_3c;
    (__this_00->fields).scaleMode = scaleMode;
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this);
    handle = TypeRef_FontScaleMode;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    local_48.m_Value = (float)(__this_00->fields).scaleMode;
    value_00 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_48);
    if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = System_Enum__IsDefined(enumType,value_00,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      uVar9 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar9);
      message = (System_String_o *)il2cpp_init_method_metadata(&"Unknown font scale mode");
      System_Exception___ctor(__this_01,message,(MethodInfo *)0x0);
      uVar9 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVisualElementBuiltin_FontSize);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_01,uVar9);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._onResize;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar6 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                        (pSVar2,"FontScaleMode",(Il2CppObject **)&local_38,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar6 != '\0') {
        pUVar3 = (__this->fields)._visualElement;
        if (pUVar3 == (UnityEngine_UIElements_VisualElement_o *)0x0) goto LAB_03ef8456;
        UnityEngine_UIElements_CallbackEventHandler__UnregisterCallback<object>
                  ((UnityEngine_UIElements_CallbackEventHandler_o *)pUVar3,local_38,0,MethodInfo_Void_UnregisterCallback_GeometryChangedEvent);
      }
      if ((char)percentage == '\0') {
        pUVar3 = (__this->fields)._visualElement;
        if (pUVar3 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
          pUVar7 = UnityEngine_UIElements_VisualElement__get_style(pUVar3,(MethodInfo *)0x0);
          local_48.m_Value = 0.0;
          local_48.m_Unit = 0;
          UnityEngine_UIElements_Length___ctor
                    ((UnityEngine_UIElements_Length_o)&local_48,(__this_00->fields).value,
                     (MethodInfo *)0x0);
          UVar11 = UnityEngine_UIElements_StyleLength__op_Implicit
                             ((UnityEngine_UIElements_Length_o)local_48,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_UIElements_IStyle_o *)0x0) {
            pUVar4 = pUVar7->klass;
            uVar1._0_1_ = (pUVar4->_2).rank;
            uVar1._1_1_ = (pUVar4->_2).minimumAlignment;
            if ((ulong)uVar1 != 0) {
              pIVar5 = (pUVar4->_1).interfaceOffsets;
              lVar10 = 0;
              do {
                if (*(long *)((long)&pIVar5->interfaceType + lVar10) == TypeInfo_IStyle) {
                  pVVar8 = pUVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar10) + 0x1b);
                  goto LAB_03ef8435;
                }
                lVar10 = lVar10 + 0x10;
              } while ((ulong)uVar1 << 4 != lVar10);
            }
            pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar7,TypeInfo_IStyle,0x1b);
LAB_03ef8435:
            (*pVVar8->methodPtr)
                      (pUVar7,UVar11.fields.m_Value.fields.fields,
                       (ulong)(uint)UVar11.fields.m_Keyword,pVVar8->method);
            return __this;
          }
        }
      }
      else {
        callback = (UnityEngine_UIElements_EventCallback_TEventType__o *)
                   il2cpp_runtime_glue(TypeInfo_EventCallback_GeometryChangedEvent);
        UnityEngine_UIElements_EventCallback<object>___ctor();
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._onResize;
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    (pSVar2,"FontScaleMode",(Il2CppObject *)callback,MethodInfo_Void_set_Item);
          pUVar3 = (__this->fields)._visualElement;
          if (pUVar3 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
            UnityEngine_UIElements_CallbackEventHandler__RegisterCallback<object>
                      ((UnityEngine_UIElements_CallbackEventHandler_o *)pUVar3,callback,0,
                       MethodInfo_Void_RegisterCallback_GeometryChangedEvent);
            return __this;
          }
        }
      }
    }
  }
LAB_03ef8456:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$Color
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__Color (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x3ef84b0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__Color
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *color,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Utility_Color255_o *__this_01;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_Color_o v;
  UnityEngine_UIElements_StyleColor_o local_58 [2];
  int32_t local_28;
  
  if (DAT_05703bcd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bcd = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (color->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      v = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      UnityEngine_UIElements_StyleColor__op_Implicit(local_58,v,(MethodInfo *)0x0);
      local_28 = local_58[0].fields.m_Keyword;
      if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
        pUVar2 = pUVar4->klass;
        uVar1._0_1_ = (pUVar2->_2).rank;
        uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar3 = (pUVar2->_1).interfaceOffsets;
          lVar6 = 0;
          do {
            if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
              pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x12);
              goto LAB_03ef85a5;
            }
            lVar6 = lVar6 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar6);
        }
        pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x12);
LAB_03ef85a5:
        (*pVVar5->methodPtr)(pUVar4,pVVar5->method);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextAlign
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextAlign (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3ef85e0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextAlign
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  System_Type_o *enumType;
  Il2CppObject *pIVar5;
  UnityEngine_UIElements_IStyle_o *pUVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  System_ArgumentException_o *__this_01;
  long lVar10;
  UnityEngine_UIElements_StyleEnum_T__o UVar11;
  int32_t local_30;
  int32_t local_2c;
  
  if (DAT_05703bce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    il2cpp_init_method_metadata(&MethodInfo_StyleEnum_1_UnityEngine_TextAnchor__op_Implicit);
    il2cpp_init_method_metadata(&TypeRef_TextAnchor);
    DAT_05703bce = '\x01';
  }
  handle.fields.value = TypeRef_TextAnchor.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  local_2c = value;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar5,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    local_30 = value;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
    pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown text align value: {0}");
    pSVar8 = System_String__Format(pSVar8,pIVar5,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar9);
    System_ArgumentException___ctor(__this_01,pSVar8,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVisualElementBuiltin_TextAlign);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_01,uVar9);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar6 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar11 = UnityEngine_UIElements_StyleEnum<Int32Enum>__op_Implicit(value,MethodInfo_StyleEnum_1_UnityEngine_TextAnchor__op_Implicit);
    if (pUVar6 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar6->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_IStyle) {
            pVVar7 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar10) + 0x43);
            goto LAB_03ef8735;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar10);
      }
      pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar6,TypeInfo_IStyle,0x43);
LAB_03ef8735:
      (*pVVar7->methodPtr)(pUVar6,UVar11.fields.m_Value,pVVar7->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextWrap
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextWrap (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3ef87d0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextWrap
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,bool_conflict value,
          MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleEnum_T__o UVar7;
  
  if (DAT_05703bcf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    il2cpp_init_method_metadata(&MethodInfo_StyleEnum_1_WhiteSpace__op_Implicit);
    DAT_05703bcf = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar7 = UnityEngine_UIElements_StyleEnum<Int32Enum>__op_Implicit
                      ((uint)(byte)((byte)value ^ 1),MethodInfo_StyleEnum_1_WhiteSpace__op_Implicit);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x47);
            goto LAB_03ef8895;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x47);
LAB_03ef8895:
      (*pVVar5->methodPtr)(pUVar4,UVar7.fields.m_Value,pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextOverflow
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextOverflow (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3ef88c0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextOverflow
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  System_Type_o *enumType;
  Il2CppObject *pIVar5;
  UnityEngine_UIElements_IStyle_o *pUVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  System_ArgumentException_o *__this_01;
  long lVar10;
  UnityEngine_UIElements_StyleEnum_T__o UVar11;
  int32_t local_30;
  int32_t local_2c;
  
  if (DAT_05703bd0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    il2cpp_init_method_metadata(&MethodInfo_StyleEnum_1_TextOverflow__op_Implicit);
    il2cpp_init_method_metadata(&TypeRef_TextOverflow);
    DAT_05703bd0 = '\x01';
  }
  handle.fields.value = TypeRef_TextOverflow.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  local_2c = value;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar5,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    local_30 = value;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
    pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown text overflow value: {0}");
    pSVar8 = System_String__Format(pSVar8,pIVar5,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar9);
    System_ArgumentException___ctor(__this_01,pSVar8,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVisualElementBuiltin_TextOverflow);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_01,uVar9);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar6 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar11 = UnityEngine_UIElements_StyleEnum<Int32Enum>__op_Implicit(value,MethodInfo_StyleEnum_1_TextOverflow__op_Implicit);
    if (pUVar6 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar6->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_IStyle) {
            pVVar7 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar10) + 0x35);
            goto LAB_03ef8a15;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar10);
      }
      pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar6,TypeInfo_IStyle,0x35);
LAB_03ef8a15:
      (*pVVar7->methodPtr)(pUVar6,UVar11.fields.m_Value,pVVar7->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextOutlineWidth
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextOutlineWidth (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ef8ab0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextOutlineWidth
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  UnityEngine_UIElements_StyleFloat_o UVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  
  if (DAT_05703bd1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bd1 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar5 = UnityEngine_UIElements_StyleFloat__op_Implicit(value,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar7) == TypeInfo_IStyle) {
            pVVar6 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 0x45);
            goto LAB_03ef8b65;
          }
          lVar7 = lVar7 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar7);
      }
      pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x45);
LAB_03ef8b65:
      (*pVVar6->methodPtr)(pUVar4,UVar5.fields,pVVar6->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextOutlineColor
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextOutlineColor (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x3ef8b90

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextOutlineColor
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Utility_Color255_o *__this_01;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_Color_o v;
  UnityEngine_UIElements_StyleColor_o local_58 [2];
  int32_t local_28;
  
  if (DAT_05703bd2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bd2 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (value->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      v = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      UnityEngine_UIElements_StyleColor__op_Implicit(local_58,v,(MethodInfo *)0x0);
      local_28 = local_58[0].fields.m_Keyword;
      if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
        pUVar2 = pUVar4->klass;
        uVar1._0_1_ = (pUVar2->_2).rank;
        uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar3 = (pUVar2->_1).interfaceOffsets;
          lVar6 = 0;
          do {
            if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
              pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x44);
              goto LAB_03ef8c85;
            }
            lVar6 = lVar6 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar6);
        }
        pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x44);
LAB_03ef8c85:
        (*pVVar5->methodPtr)(pUVar4,pVVar5->method);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextShadowColor
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextShadowColor (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x3ef8cc0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextShadowColor
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *value,MethodInfo *method)

{
  ushort uVar1;
  Utility_Color255_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *__this_01;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  UnityEngine_UIElements_TextShadow_o v;
  undefined8 uVar8;
  undefined4 uVar9;
  UnityEngine_UIElements_TextShadow_o *pUVar10;
  UnityEngine_UIElements_IStyle_o *pUVar11;
  Il2CppMethodPointer *ppIVar12;
  long lVar13;
  UnityEngine_Color_Fields UVar14;
  UnityEngine_UIElements_StyleTextShadow_o local_58 [2];
  
  if (DAT_05703bd3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bd3 = '\x01';
  }
  if ((value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (__this_00 = (value->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
    UVar14 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
    (__this->fields)._textShadow.fields.color.fields = UVar14;
    __this_01 = (__this->fields)._visualElement;
    if (__this_01 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
      pUVar11 = UnityEngine_UIElements_VisualElement__get_style(__this_01,(MethodInfo *)0x0);
      uVar4 = (__this->fields)._textShadow.fields.color.fields.r;
      uVar8 = (__this->fields)._textShadow.fields.offset;
      uVar9 = (__this->fields)._textShadow.fields.blurRadius;
      v.fields.blurRadius = (float)uVar9;
      v.fields.offset.fields = (UnityEngine_Vector2_Fields)uVar8;
      uVar5 = (__this->fields)._textShadow.fields.color.fields.g;
      pUVar10 = &(__this->fields)._textShadow;
      uVar6 = (pUVar10->fields).color.fields.b;
      uVar7 = (pUVar10->fields).color.fields.a;
      v.fields.color.fields.r = (float)uVar4;
      v.fields.color.fields.g = (float)uVar5;
      v.fields.color.fields.b = (float)uVar6;
      v.fields.color.fields.a = (float)uVar7;
      UnityEngine_UIElements_StyleTextShadow__op_Implicit(local_58,v,(MethodInfo *)0x0);
      if (pUVar11 != (UnityEngine_UIElements_IStyle_o *)0x0) {
        pUVar2 = pUVar11->klass;
        uVar1._0_1_ = (pUVar2->_2).rank;
        uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar3 = (pUVar2->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(long *)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_IStyle) {
              ppIVar12 = &pUVar2->vtable[*(int *)((long)&pIVar3->offset + lVar13) + 0x37].methodPtr;
              goto LAB_03ef8dd5;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar13);
        }
        ppIVar12 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pUVar11,TypeInfo_IStyle,0x37);
LAB_03ef8dd5:
        (**ppIVar12)(pUVar11,(MethodInfo *)ppIVar12[1]);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextShadowOffset
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextShadowOffset (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float horizontal, float vertical, const MethodInfo* method);
// 0x3ef8e10

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextShadowOffset
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float horizontal,float vertical,
          MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  UnityEngine_UIElements_TextShadow_o v;
  undefined8 uVar8;
  undefined4 uVar9;
  UnityEngine_UIElements_TextShadow_o *pUVar10;
  UnityEngine_UIElements_IStyle_o *pUVar11;
  Il2CppMethodPointer *ppIVar12;
  long lVar13;
  UnityEngine_UIElements_StyleTextShadow_o local_58;
  int32_t local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (DAT_05703bd4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bd4 = '\x01';
  }
  (__this->fields)._textShadow.fields.offset.fields.x = horizontal;
  (__this->fields)._textShadow.fields.offset.fields.y = vertical;
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar11 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    uVar4 = (__this->fields)._textShadow.fields.color.fields.r;
    uVar8 = (__this->fields)._textShadow.fields.offset;
    uVar9 = (__this->fields)._textShadow.fields.blurRadius;
    v.fields.blurRadius = (float)uVar9;
    v.fields.offset.fields = (UnityEngine_Vector2_Fields)uVar8;
    uVar5 = (__this->fields)._textShadow.fields.color.fields.g;
    pUVar10 = &(__this->fields)._textShadow;
    uVar6 = (pUVar10->fields).color.fields.b;
    uVar7 = (pUVar10->fields).color.fields.a;
    v.fields.color.fields.r = (float)uVar4;
    v.fields.color.fields.g = (float)uVar5;
    v.fields.color.fields.b = (float)uVar6;
    v.fields.color.fields.a = (float)uVar7;
    UnityEngine_UIElements_StyleTextShadow__op_Implicit(&local_58,v,(MethodInfo *)0x0);
    local_28 = local_58.fields.m_Value.fields.color.fields.r;
    fStack_24 = local_58.fields.m_Value.fields.color.fields.g;
    fStack_20 = local_58.fields.m_Value.fields.color.fields.b;
    fStack_1c = local_58.fields.m_Value.fields.color.fields.a;
    local_38 = local_58.fields.m_Keyword;
    fStack_34 = local_58.fields.m_Value.fields.offset.fields.x;
    fStack_30 = local_58.fields.m_Value.fields.offset.fields.y;
    fStack_2c = local_58.fields.m_Value.fields.blurRadius;
    if (pUVar11 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar11->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_IStyle) {
            ppIVar12 = &pUVar2->vtable[*(int *)((long)&pIVar3->offset + lVar13) + 0x37].methodPtr;
            goto LAB_03ef8f25;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar13);
      }
      ppIVar12 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pUVar11,TypeInfo_IStyle,0x37);
LAB_03ef8f25:
      (**ppIVar12)(pUVar11,(MethodInfo *)ppIVar12[1]);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextShadowHorizontalOffset
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextShadowHorizontalOffset (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ef8f60

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextShadowHorizontalOffset
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  UnityEngine_UIElements_TextShadow_o v;
  undefined8 uVar8;
  undefined4 uVar9;
  UnityEngine_UIElements_TextShadow_o *pUVar10;
  UnityEngine_UIElements_IStyle_o *pUVar11;
  Il2CppMethodPointer *ppIVar12;
  long lVar13;
  UnityEngine_UIElements_StyleTextShadow_o local_58;
  int32_t local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (DAT_05703bd5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bd5 = '\x01';
  }
  (__this->fields)._textShadow.fields.offset.fields.x = value;
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar11 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    uVar4 = (__this->fields)._textShadow.fields.color.fields.r;
    uVar8 = (__this->fields)._textShadow.fields.offset;
    uVar9 = (__this->fields)._textShadow.fields.blurRadius;
    v.fields.blurRadius = (float)uVar9;
    v.fields.offset.fields = (UnityEngine_Vector2_Fields)uVar8;
    uVar5 = (__this->fields)._textShadow.fields.color.fields.g;
    pUVar10 = &(__this->fields)._textShadow;
    uVar6 = (pUVar10->fields).color.fields.b;
    uVar7 = (pUVar10->fields).color.fields.a;
    v.fields.color.fields.r = (float)uVar4;
    v.fields.color.fields.g = (float)uVar5;
    v.fields.color.fields.b = (float)uVar6;
    v.fields.color.fields.a = (float)uVar7;
    UnityEngine_UIElements_StyleTextShadow__op_Implicit(&local_58,v,(MethodInfo *)0x0);
    local_38 = local_58.fields.m_Keyword;
    fStack_34 = local_58.fields.m_Value.fields.offset.fields.x;
    fStack_30 = local_58.fields.m_Value.fields.offset.fields.y;
    fStack_2c = local_58.fields.m_Value.fields.blurRadius;
    if (pUVar11 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar11->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_IStyle) {
            ppIVar12 = &pUVar2->vtable[*(int *)((long)&pIVar3->offset + lVar13) + 0x37].methodPtr;
            goto LAB_03ef9065;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar13);
      }
      ppIVar12 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pUVar11,TypeInfo_IStyle,0x37);
LAB_03ef9065:
      (**ppIVar12)(pUVar11,(MethodInfo *)ppIVar12[1]);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextShadowVerticalOffset
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextShadowVerticalOffset (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ef90a0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextShadowVerticalOffset
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  UnityEngine_UIElements_TextShadow_o v;
  undefined8 uVar8;
  undefined4 uVar9;
  UnityEngine_UIElements_TextShadow_o *pUVar10;
  UnityEngine_UIElements_IStyle_o *pUVar11;
  Il2CppMethodPointer *ppIVar12;
  long lVar13;
  UnityEngine_UIElements_StyleTextShadow_o local_58;
  int32_t local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (DAT_05703bd6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bd6 = '\x01';
  }
  (__this->fields)._textShadow.fields.offset.fields.y = value;
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar11 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    uVar4 = (__this->fields)._textShadow.fields.color.fields.r;
    uVar8 = (__this->fields)._textShadow.fields.offset;
    uVar9 = (__this->fields)._textShadow.fields.blurRadius;
    v.fields.blurRadius = (float)uVar9;
    v.fields.offset.fields = (UnityEngine_Vector2_Fields)uVar8;
    uVar5 = (__this->fields)._textShadow.fields.color.fields.g;
    pUVar10 = &(__this->fields)._textShadow;
    uVar6 = (pUVar10->fields).color.fields.b;
    uVar7 = (pUVar10->fields).color.fields.a;
    v.fields.color.fields.r = (float)uVar4;
    v.fields.color.fields.g = (float)uVar5;
    v.fields.color.fields.b = (float)uVar6;
    v.fields.color.fields.a = (float)uVar7;
    UnityEngine_UIElements_StyleTextShadow__op_Implicit(&local_58,v,(MethodInfo *)0x0);
    local_38 = local_58.fields.m_Keyword;
    fStack_34 = local_58.fields.m_Value.fields.offset.fields.x;
    fStack_30 = local_58.fields.m_Value.fields.offset.fields.y;
    fStack_2c = local_58.fields.m_Value.fields.blurRadius;
    if (pUVar11 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar11->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_IStyle) {
            ppIVar12 = &pUVar2->vtable[*(int *)((long)&pIVar3->offset + lVar13) + 0x37].methodPtr;
            goto LAB_03ef91a5;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar13);
      }
      ppIVar12 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pUVar11,TypeInfo_IStyle,0x37);
LAB_03ef91a5:
      (**ppIVar12)(pUVar11,(MethodInfo *)ppIVar12[1]);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextShadowBlurRadius
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextShadowBlurRadius (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ef91e0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextShadowBlurRadius
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  UnityEngine_UIElements_TextShadow_o v;
  undefined8 uVar8;
  undefined4 uVar9;
  UnityEngine_UIElements_TextShadow_o *pUVar10;
  UnityEngine_UIElements_IStyle_o *pUVar11;
  Il2CppMethodPointer *ppIVar12;
  long lVar13;
  UnityEngine_UIElements_StyleTextShadow_o local_58;
  int32_t local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (DAT_05703bd7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bd7 = '\x01';
  }
  (__this->fields)._textShadow.fields.blurRadius = value;
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar11 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    uVar4 = (__this->fields)._textShadow.fields.color.fields.r;
    uVar8 = (__this->fields)._textShadow.fields.offset;
    uVar9 = (__this->fields)._textShadow.fields.blurRadius;
    v.fields.blurRadius = (float)uVar9;
    v.fields.offset.fields = (UnityEngine_Vector2_Fields)uVar8;
    uVar5 = (__this->fields)._textShadow.fields.color.fields.g;
    pUVar10 = &(__this->fields)._textShadow;
    uVar6 = (pUVar10->fields).color.fields.b;
    uVar7 = (pUVar10->fields).color.fields.a;
    v.fields.color.fields.r = (float)uVar4;
    v.fields.color.fields.g = (float)uVar5;
    v.fields.color.fields.b = (float)uVar6;
    v.fields.color.fields.a = (float)uVar7;
    UnityEngine_UIElements_StyleTextShadow__op_Implicit(&local_58,v,(MethodInfo *)0x0);
    local_38 = local_58.fields.m_Keyword;
    fStack_34 = local_58.fields.m_Value.fields.offset.fields.x;
    fStack_30 = local_58.fields.m_Value.fields.offset.fields.y;
    fStack_2c = local_58.fields.m_Value.fields.blurRadius;
    if (pUVar11 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar11->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_IStyle) {
            ppIVar12 = &pUVar2->vtable[*(int *)((long)&pIVar3->offset + lVar13) + 0x37].methodPtr;
            goto LAB_03ef92e5;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar13);
      }
      ppIVar12 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pUVar11,TypeInfo_IStyle,0x37);
LAB_03ef92e5:
      (**ppIVar12)(pUVar11,(MethodInfo *)ppIVar12[1]);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextLetterSpacing
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextLetterSpacing (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ef9320

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextLetterSpacing
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  
  if (DAT_05703bd8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bd8 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit(value,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x1f);
            goto LAB_03ef93e5;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x1f);
LAB_03ef93e5:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextWordSpacing
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextWordSpacing (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ef9410

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextWordSpacing
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  
  if (DAT_05703bd9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bd9 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit(value,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x4a);
            goto LAB_03ef94d5;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x4a);
LAB_03ef94d5:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TextParagraphSpacing
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TextParagraphSpacing (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ef9500

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TextParagraphSpacing
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  
  if (DAT_05703bda == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bda = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit(value,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x42);
            goto LAB_03ef95c5;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x42);
LAB_03ef95c5:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BackgroundColor
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BackgroundColor (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x3ef95f0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BackgroundColor
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *color,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Utility_Color255_o *__this_01;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_Color_o v;
  UnityEngine_UIElements_StyleColor_o local_58 [2];
  int32_t local_28;
  
  if (DAT_05703bdb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bdb = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (color->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      v = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      UnityEngine_UIElements_StyleColor__op_Implicit(local_58,v,(MethodInfo *)0x0);
      local_28 = local_58[0].fields.m_Keyword;
      if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
        pUVar2 = pUVar4->klass;
        uVar1._0_1_ = (pUVar2->_2).rank;
        uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar3 = (pUVar2->_1).interfaceOffsets;
          lVar6 = 0;
          do {
            if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
              pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 2);
              goto LAB_03ef96e5;
            }
            lVar6 = lVar6 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar6);
        }
        pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,2);
LAB_03ef96e5:
        (*pVVar5->methodPtr)(pUVar4,pVVar5->method);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$SetBackgroundImage
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__SetBackgroundImage (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicImageBuiltin_o* image, const MethodInfo* method);
// 0x3ef9720

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__SetBackgroundImage
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,
          CustomLogic_CustomLogicImageBuiltin_o *image,MethodInfo *method)

{
  ushort uVar1;
  MethodInfo *method_00;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_StyleBackground_o __this_01;
  bool_conflict bVar4;
  UnityEngine_UIElements_IStyle_o *pUVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  undefined4 in_stack_ffffffffffffff58;
  undefined4 in_stack_ffffffffffffff5c;
  undefined4 in_stack_ffffffffffffff60;
  undefined4 in_stack_ffffffffffffff64;
  undefined4 in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff6c;
  undefined4 in_stack_ffffffffffffff70;
  undefined4 in_stack_ffffffffffffff74;
  undefined8 in_stack_ffffffffffffff78;
  UnityEngine_Texture2D_o local_78;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if (DAT_05703bdc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703bdc = '\x01';
  }
  if (image != (CustomLogic_CustomLogicImageBuiltin_o *)0x0) {
    method_00 = (MethodInfo *)(image->fields)._currentTexture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)method_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      __this_00 = (__this->fields)._visualElement;
      if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
        pUVar5 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
        local_78.fields.m_CachedPtr = 0;
        uStack_60 = 0;
        local_78.klass = (UnityEngine_Texture2D_c *)0x0;
        local_78.monitor = (void *)0x0;
        local_58 = 0;
        __this_01.fields.m_Value.fields.m_Texture._4_4_ = in_stack_ffffffffffffff5c;
        __this_01.fields.m_Value.fields.m_Texture._0_4_ = in_stack_ffffffffffffff58;
        __this_01.fields.m_Value.fields.m_Sprite._0_4_ = in_stack_ffffffffffffff60;
        __this_01.fields.m_Value.fields.m_Sprite._4_4_ = in_stack_ffffffffffffff64;
        __this_01.fields.m_Value.fields.m_RenderTexture._0_4_ = in_stack_ffffffffffffff68;
        __this_01.fields.m_Value.fields.m_RenderTexture._4_4_ = in_stack_ffffffffffffff6c;
        __this_01.fields.m_Value.fields.m_VectorImage._0_4_ = in_stack_ffffffffffffff70;
        __this_01.fields.m_Value.fields.m_VectorImage._4_4_ = in_stack_ffffffffffffff74;
        __this_01.fields._32_8_ = in_stack_ffffffffffffff78;
        UnityEngine_UIElements_StyleBackground___ctor(__this_01,&local_78,method_00);
        if (pUVar5 != (UnityEngine_UIElements_IStyle_o *)0x0) {
          local_28 = local_58;
          local_38 = (undefined4)local_78.fields.m_CachedPtr;
          uStack_34 = local_78.fields.m_CachedPtr._4_4_;
          uStack_30 = (undefined4)uStack_60;
          uStack_2c = uStack_60._4_4_;
          local_48 = local_78.klass._0_4_;
          uStack_44 = local_78.klass._4_4_;
          uStack_40 = local_78.monitor._0_4_;
          uStack_3c = local_78.monitor._4_4_;
          pUVar2 = pUVar5->klass;
          uVar1._0_1_ = (pUVar2->_2).rank;
          uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar3 = (pUVar2->_1).interfaceOffsets;
            lVar7 = 0;
            do {
              if (*(long *)((long)&pIVar3->interfaceType + lVar7) == TypeInfo_IStyle) {
                pVVar6 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 3);
                goto LAB_03ef9855;
              }
              lVar7 = lVar7 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar7);
          }
          pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar5,TypeInfo_IStyle,3);
LAB_03ef9855:
          (*pVVar6->methodPtr)(pUVar5,pVVar6->method);
          return __this;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return __this;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderColor
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderColor (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x3ef98a0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderColor
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *color,MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderColorLeft(__this,color,method);
  if (pCVar1 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderColorTop(pCVar1,color,method_00);
    if (pCVar1 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderColorRight(pCVar1,color,method_01)
      ;
      if (pCVar1 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderColorBottom
                           (pCVar1,color,method_02);
        return pCVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderColorLeft
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderColorLeft (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x3ef98e0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderColorLeft
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *color,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Utility_Color255_o *__this_01;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_Color_o v;
  UnityEngine_UIElements_StyleColor_o local_58 [2];
  int32_t local_28;
  
  if (DAT_05703bdd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bdd = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (color->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      v = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      UnityEngine_UIElements_StyleColor__op_Implicit(local_58,v,(MethodInfo *)0x0);
      local_28 = local_58[0].fields.m_Keyword;
      if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
        pUVar2 = pUVar4->klass;
        uVar1._0_1_ = (pUVar2->_2).rank;
        uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar3 = (pUVar2->_1).interfaceOffsets;
          lVar6 = 0;
          do {
            if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
              pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 9);
              goto LAB_03ef99d5;
            }
            lVar6 = lVar6 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar6);
        }
        pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,9);
LAB_03ef99d5:
        (*pVVar5->methodPtr)(pUVar4,pVVar5->method);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderColorTop
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderColorTop (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x3ef9a10

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderColorTop
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *color,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Utility_Color255_o *__this_01;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_Color_o v;
  UnityEngine_UIElements_StyleColor_o local_58 [2];
  int32_t local_28;
  
  if (DAT_05703bde == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bde = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (color->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      v = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      UnityEngine_UIElements_StyleColor__op_Implicit(local_58,v,(MethodInfo *)0x0);
      local_28 = local_58[0].fields.m_Keyword;
      if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
        pUVar2 = pUVar4->klass;
        uVar1._0_1_ = (pUVar2->_2).rank;
        uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar3 = (pUVar2->_1).interfaceOffsets;
          lVar6 = 0;
          do {
            if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
              pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0xd);
              goto LAB_03ef9b05;
            }
            lVar6 = lVar6 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar6);
        }
        pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0xd);
LAB_03ef9b05:
        (*pVVar5->methodPtr)(pUVar4,pVVar5->method);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderColorRight
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderColorRight (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x3ef9b40

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderColorRight
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *color,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Utility_Color255_o *__this_01;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_Color_o v;
  UnityEngine_UIElements_StyleColor_o local_58 [2];
  int32_t local_28;
  
  if (DAT_05703bdf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bdf = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (color->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      v = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      UnityEngine_UIElements_StyleColor__op_Implicit(local_58,v,(MethodInfo *)0x0);
      local_28 = local_58[0].fields.m_Keyword;
      if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
        pUVar2 = pUVar4->klass;
        uVar1._0_1_ = (pUVar2->_2).rank;
        uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar3 = (pUVar2->_1).interfaceOffsets;
          lVar6 = 0;
          do {
            if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
              pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0xb);
              goto LAB_03ef9c35;
            }
            lVar6 = lVar6 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar6);
        }
        pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0xb);
LAB_03ef9c35:
        (*pVVar5->methodPtr)(pUVar4,pVVar5->method);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderColorBottom
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderColorBottom (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x3ef9c70

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderColorBottom
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *color,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  Utility_Color255_o *__this_01;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_Color_o v;
  UnityEngine_UIElements_StyleColor_o local_58 [2];
  int32_t local_28;
  
  if (DAT_05703be0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703be0 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (color->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      v = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      UnityEngine_UIElements_StyleColor__op_Implicit(local_58,v,(MethodInfo *)0x0);
      local_28 = local_58[0].fields.m_Keyword;
      if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
        pUVar2 = pUVar4->klass;
        uVar1._0_1_ = (pUVar2->_2).rank;
        uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar3 = (pUVar2->_1).interfaceOffsets;
          lVar6 = 0;
          do {
            if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
              pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 5);
              goto LAB_03ef9d65;
            }
            lVar6 = lVar6 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar6);
        }
        pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,5);
LAB_03ef9d65:
        (*pVVar5->methodPtr)(pUVar4,pVVar5->method);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderWidth
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderWidth (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ef9da0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderWidth
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthLeft(__this,value,method);
  if (pCVar1 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthTop(pCVar1,value,method);
    if (pCVar1 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthRight(pCVar1,value,method);
      if (pCVar1 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthBottom(pCVar1,value,method)
        ;
        return pCVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderWidthLeft
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthLeft (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ef9df0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthLeft
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  UnityEngine_UIElements_StyleFloat_o UVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  
  if (DAT_05703be1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703be1 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar5 = UnityEngine_UIElements_StyleFloat__op_Implicit(value,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar7) == TypeInfo_IStyle) {
            pVVar6 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 10);
            goto LAB_03ef9ea5;
          }
          lVar7 = lVar7 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar7);
      }
      pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,10);
LAB_03ef9ea5:
      (*pVVar6->methodPtr)(pUVar4,UVar5.fields,pVVar6->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderWidthTop
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthTop (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ef9ed0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthTop
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  UnityEngine_UIElements_StyleFloat_o UVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  
  if (DAT_05703be2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703be2 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar5 = UnityEngine_UIElements_StyleFloat__op_Implicit(value,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar7) == TypeInfo_IStyle) {
            pVVar6 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 0x10);
            goto LAB_03ef9f85;
          }
          lVar7 = lVar7 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar7);
      }
      pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x10);
LAB_03ef9f85:
      (*pVVar6->methodPtr)(pUVar4,UVar5.fields,pVVar6->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderWidthRight
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthRight (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ef9fb0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthRight
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  UnityEngine_UIElements_StyleFloat_o UVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  
  if (DAT_05703be3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703be3 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar5 = UnityEngine_UIElements_StyleFloat__op_Implicit(value,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar7) == TypeInfo_IStyle) {
            pVVar6 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 0xc);
            goto LAB_03efa065;
          }
          lVar7 = lVar7 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar7);
      }
      pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0xc);
LAB_03efa065:
      (*pVVar6->methodPtr)(pUVar4,UVar5.fields,pVVar6->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderWidthBottom
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthBottom (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3efa090

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderWidthBottom
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  UnityEngine_UIElements_StyleFloat_o UVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  
  if (DAT_05703be4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703be4 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar5 = UnityEngine_UIElements_StyleFloat__op_Implicit(value,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar7) == TypeInfo_IStyle) {
            pVVar6 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 8);
            goto LAB_03efa145;
          }
          lVar7 = lVar7 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar7);
      }
      pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,8);
LAB_03efa145:
      (*pVVar6->methodPtr)(pUVar4,UVar5.fields,pVVar6->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderRadius
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderRadius (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3efa170

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderRadius
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopLeft(__this,value,method);
  if (pCVar1 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopRight(pCVar1,value,method);
    if (pCVar1 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomLeft
                         (pCVar1,value,method);
      if (pCVar1 != (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomRight
                           (pCVar1,value,method);
        return pCVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderRadiusTopLeft
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopLeft (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3efa1c0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopLeft
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  
  if (DAT_05703be5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703be5 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit(value,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0xe);
            goto LAB_03efa285;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0xe);
LAB_03efa285:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderRadiusTopRight
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopRight (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3efa2b0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusTopRight
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  
  if (DAT_05703be6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703be6 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit(value,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0xf);
            goto LAB_03efa375;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0xf);
LAB_03efa375:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderRadiusBottomLeft
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomLeft (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3efa3a0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomLeft
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  
  if (DAT_05703be7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703be7 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit(value,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 6);
            goto LAB_03efa465;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,6);
LAB_03efa465:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$BorderRadiusBottomRight
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomRight (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3efa490

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__BorderRadiusBottomRight
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  UnityEngine_UIElements_StyleLength_o UVar7;
  
  if (DAT_05703be8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703be8 = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar7 = UnityEngine_UIElements_StyleLength__op_Implicit(value,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 7);
            goto LAB_03efa555;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,7);
LAB_03efa555:
      (*pVVar5->methodPtr)
                (pUVar4,UVar7.fields.m_Value.fields.fields,(ulong)(uint)UVar7.fields.m_Keyword,
                 pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$OverflowX
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__OverflowX (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3efa580

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__OverflowX
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  System_Type_o *enumType;
  Il2CppObject *pIVar5;
  UnityEngine_UIElements_IStyle_o *pUVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  System_ArgumentException_o *__this_01;
  long lVar10;
  UnityEngine_UIElements_StyleEnum_T__o UVar11;
  int32_t local_30;
  int32_t local_2c;
  
  if (DAT_05703be9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    il2cpp_init_method_metadata(&TypeRef_Overflow);
    il2cpp_init_method_metadata(&MethodInfo_StyleEnum_1_Overflow__op_Implicit);
    DAT_05703be9 = '\x01';
  }
  handle.fields.value = TypeRef_Overflow.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  local_2c = value;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar5,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    local_30 = value;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
    pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown overflow value: {0}");
    pSVar8 = System_String__Format(pSVar8,pIVar5,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar9);
    System_ArgumentException___ctor(__this_01,pSVar8,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVisualElementBuiltin_OverflowX);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_01,uVar9);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar6 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar11 = UnityEngine_UIElements_StyleEnum<Int32Enum>__op_Implicit(value,MethodInfo_StyleEnum_1_Overflow__op_Implicit);
    if (pUVar6 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar6->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_IStyle) {
            pVVar7 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar10) + 0x29);
            goto LAB_03efa6d5;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar10);
      }
      pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar6,TypeInfo_IStyle,0x29);
LAB_03efa6d5:
      (*pVVar7->methodPtr)(pUVar6,UVar11.fields.m_Value,pVVar7->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$OverflowY
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__OverflowY (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3efa770

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__OverflowY
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  System_Type_o *enumType;
  Il2CppObject *pIVar5;
  UnityEngine_UIElements_IStyle_o *pUVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  System_ArgumentException_o *__this_01;
  long lVar10;
  UnityEngine_UIElements_StyleEnum_T__o UVar11;
  int32_t local_30;
  int32_t local_2c;
  
  if (DAT_05703bea == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    il2cpp_init_method_metadata(&TypeRef_Overflow);
    il2cpp_init_method_metadata(&MethodInfo_StyleEnum_1_Overflow__op_Implicit);
    DAT_05703bea = '\x01';
  }
  handle.fields.value = TypeRef_Overflow.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  local_2c = value;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar5,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    local_30 = value;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
    pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown overflow value: {0}");
    pSVar8 = System_String__Format(pSVar8,pIVar5,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar9);
    System_ArgumentException___ctor(__this_01,pSVar8,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVisualElementBuiltin_OverflowY);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_01,uVar9);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar6 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    UVar11 = UnityEngine_UIElements_StyleEnum<Int32Enum>__op_Implicit(value,MethodInfo_StyleEnum_1_Overflow__op_Implicit);
    if (pUVar6 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar6->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_IStyle) {
            pVVar7 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar10) + 0x29);
            goto LAB_03efa8c5;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar10);
      }
      pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar6,TypeInfo_IStyle,0x29);
LAB_03efa8c5:
      (*pVVar7->methodPtr)(pUVar6,UVar11.fields.m_Value,pVVar7->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$SetTransformOrigin
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__SetTransformOrigin (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float x, float y, bool percentage, const MethodInfo* method);
// 0x3efa960

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__SetTransformOrigin
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float x,float y,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_TransformOrigin_o __this_01;
  UnityEngine_UIElements_TransformOrigin_o v;
  UnityEngine_UIElements_Length_o y_00;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  undefined4 in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff6c;
  undefined4 in_stack_ffffffffffffff70;
  undefined4 in_stack_ffffffffffffff74;
  float in_stack_ffffffffffffff78;
  UnityEngine_UIElements_StyleTransformOrigin_o local_78;
  float local_60;
  float local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float local_38;
  int32_t iStack_34;
  float fStack_30;
  int32_t iStack_2c;
  float local_28;
  int32_t iStack_24;
  
  local_60 = x;
  local_5c = y;
  if (DAT_05703beb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703beb = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_78.fields.m_Value.fields.m_X.fields.m_Value = 0.0;
    local_78.fields.m_Value.fields.m_X.fields.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_78,local_60,percentage & 0xffU,
               (MethodInfo *)0x0);
    y_00.fields = local_78.fields.m_Value.fields.m_X.fields;
    local_78.fields.m_Value.fields.m_X.fields.m_Value = 0.0;
    local_78.fields.m_Value.fields.m_X.fields.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_78,local_5c,percentage & 0xffU,
               (MethodInfo *)0x0);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0.0;
    __this_01.fields.m_X.fields.m_Unit = in_stack_ffffffffffffff6c;
    __this_01.fields.m_X.fields.m_Value = (float)in_stack_ffffffffffffff68;
    __this_01.fields.m_Y.fields.m_Value = (float)in_stack_ffffffffffffff70;
    __this_01.fields.m_Y.fields.m_Unit = in_stack_ffffffffffffff74;
    __this_01.fields.m_Z = in_stack_ffffffffffffff78;
    UnityEngine_UIElements_TransformOrigin___ctor
              (__this_01,(UnityEngine_UIElements_Length_o)&local_58,y_00,0.0,
               (MethodInfo *)local_78.fields.m_Value.fields.m_X.fields);
    v.fields.m_Y.fields.m_Value = (float)(int)uStack_50;
    v.fields.m_X.fields.m_Value = (float)(undefined4)local_58;
    v.fields.m_X.fields.m_Unit = local_58._4_4_;
    v.fields.m_Y.fields.m_Unit = (int)((ulong)uStack_50 >> 0x20);
    v.fields.m_Z = local_48;
    UnityEngine_UIElements_StyleTransformOrigin__op_Implicit(&local_78,v,(MethodInfo *)0x0);
    local_28 = local_78.fields.m_Value.fields.m_Z;
    iStack_24 = local_78.fields.m_Keyword;
    local_38 = local_78.fields.m_Value.fields.m_X.fields.m_Value;
    iStack_34 = local_78.fields.m_Value.fields.m_X.fields.m_Unit;
    fStack_30 = local_78.fields.m_Value.fields.m_Y.fields.m_Value;
    iStack_2c = local_78.fields.m_Value.fields.m_Y.fields.m_Unit;
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x3a);
            goto LAB_03efaac5;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x3a);
LAB_03efaac5:
      (*pVVar5->methodPtr)(pUVar4,pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TransformTranslate
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TransformTranslate (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float x, float y, bool percentage, const MethodInfo* method);
// 0x3efab00

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TransformTranslate
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float x,float y,
          bool_conflict percentage,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_Translate_o __this_01;
  UnityEngine_UIElements_Translate_o v;
  UnityEngine_UIElements_Length_o y_00;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  undefined4 in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff4c;
  undefined4 in_stack_ffffffffffffff50;
  undefined4 in_stack_ffffffffffffff54;
  undefined4 in_stack_ffffffffffffff58;
  bool_conflict in_stack_ffffffffffffff5c;
  UnityEngine_UIElements_StyleTranslate_o local_88;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  float fStack_48;
  int32_t iStack_44;
  float fStack_40;
  int32_t local_3c;
  float fStack_38;
  bool_conflict bStack_34;
  int32_t iStack_30;
  
  if (DAT_05703bec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bec = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_88.fields.m_Value.fields.m_X.fields.m_Value = 0.0;
    local_88.fields.m_Value.fields.m_X.fields.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_88,x,percentage & 0xffU,(MethodInfo *)0x0);
    y_00.fields = local_88.fields.m_Value.fields.m_X.fields;
    local_88.fields.m_Value.fields.m_X.fields.m_Value = 0.0;
    local_88.fields.m_Value.fields.m_X.fields.m_Unit = 0;
    UnityEngine_UIElements_Length___ctor
              ((UnityEngine_UIElements_Length_o)&local_88,y,percentage & 0xffU,(MethodInfo *)0x0);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    __this_01.fields.m_X.fields.m_Unit = in_stack_ffffffffffffff4c;
    __this_01.fields.m_X.fields.m_Value = (float)in_stack_ffffffffffffff48;
    __this_01.fields.m_Y.fields.m_Value = (float)in_stack_ffffffffffffff50;
    __this_01.fields.m_Y.fields.m_Unit = in_stack_ffffffffffffff54;
    __this_01.fields.m_Z = (float)in_stack_ffffffffffffff58;
    __this_01.fields.m_isNone = in_stack_ffffffffffffff5c;
    UnityEngine_UIElements_Translate___ctor
              (__this_01,(UnityEngine_UIElements_Length_o)&local_68,y_00,0.0,
               (MethodInfo *)local_88.fields.m_Value.fields.m_X.fields);
    v.fields.m_Y.fields.m_Value = (float)(int)uStack_60;
    v.fields.m_X.fields.m_Value = (float)(undefined4)local_68;
    v.fields.m_X.fields.m_Unit = local_68._4_4_;
    v.fields.m_Y.fields.m_Unit = (int)((ulong)uStack_60 >> 0x20);
    v.fields.m_Z = (float)(int)local_58;
    v.fields.m_isNone = (bool_conflict)((ulong)local_58 >> 0x20);
    UnityEngine_UIElements_StyleTranslate__op_Implicit(&local_88,v,(MethodInfo *)0x0);
    fStack_38 = local_88.fields.m_Value.fields.m_Z;
    bStack_34 = local_88.fields.m_Value.fields.m_isNone;
    iStack_30 = local_88.fields.m_Keyword;
    fStack_48 = local_88.fields.m_Value.fields.m_X.fields.m_Value;
    iStack_44 = local_88.fields.m_Value.fields.m_X.fields.m_Unit;
    fStack_40 = local_88.fields.m_Value.fields.m_Y.fields.m_Value;
    local_3c = local_88.fields.m_Value.fields.m_Y.fields.m_Unit;
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x3d);
            goto LAB_03efac75;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x3d);
LAB_03efac75:
      (*pVVar5->methodPtr)(pUVar4,pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TransformScale
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TransformScale (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float x, float y, const MethodInfo* method);
// 0x3efacb0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TransformScale
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float x,float y,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_Vector2_o scale;
  UnityEngine_UIElements_Scale_o v;
  UnityEngine_UIElements_IStyle_o *pUVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  float in_XMM1_Db;
  UnityEngine_UIElements_Scale_o __this_01;
  UnityEngine_UIElements_StyleScale_o local_88;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  bool_conflict bStack_4c;
  int32_t local_48;
  undefined8 local_38;
  float local_28;
  
  local_38 = CONCAT44(in_XMM1_Db,y);
  local_28 = x;
  if (DAT_05703bed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bed = '\x01';
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar4 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_68 = 0;
    uStack_60 = 0;
    __this_01.fields.m_Scale.fields.y = (float)(undefined4)local_38;
    __this_01.fields.m_Scale.fields.x = local_28;
    __this_01.fields._8_8_ = &local_68;
    scale.fields.y = in_XMM1_Db;
    scale.fields.x = y;
    UnityEngine_UIElements_Scale___ctor(__this_01,scale,(MethodInfo *)0x0);
    v.fields.m_Scale.fields.z = (float)(undefined4)uStack_60;
    v.fields.m_IsNone = uStack_60._4_4_;
    v.fields.m_Scale.fields.x = (float)(undefined4)local_68;
    v.fields.m_Scale.fields.y = (float)local_68._4_4_;
    UnityEngine_UIElements_StyleScale__op_Implicit(&local_88,v,(MethodInfo *)0x0);
    local_48 = local_88.fields.m_Keyword;
    local_58 = local_88.fields.m_Value.fields.m_Scale.fields.x;
    fStack_54 = local_88.fields.m_Value.fields.m_Scale.fields.y;
    fStack_50 = local_88.fields.m_Value.fields.m_Scale.fields.z;
    bStack_4c = local_88.fields.m_Value.fields.m_IsNone;
    if (pUVar4 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar4->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IStyle) {
            pVVar5 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 0x34);
            goto LAB_03efadc5;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IStyle,0x34);
LAB_03efadc5:
      (*pVVar5->methodPtr)(pUVar4,pVVar5->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$TransformRotate
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicVisualElementBuiltin__TransformRotate (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, float angle, int32_t angleUnit, const MethodInfo* method);
// 0x3efae00

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicVisualElementBuiltin__TransformRotate
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,float angle,int32_t angleUnit,
          MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  UnityEngine_UIElements_IStyle_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UIElements_Rotate_o __this_01;
  UnityEngine_UIElements_Rotate_o v;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  System_Type_o *enumType;
  Il2CppObject *pIVar5;
  UnityEngine_UIElements_IStyle_o *pUVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  System_ArgumentException_o *__this_02;
  long lVar10;
  undefined4 in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff3c;
  undefined4 in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  undefined4 in_stack_ffffffffffffff48;
  bool_conflict in_stack_ffffffffffffff4c;
  UnityEngine_UIElements_StyleRotate_o local_98;
  MethodInfo *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_48;
  float fStack_38;
  bool_conflict bStack_34;
  int32_t iStack_30;
  
  if (DAT_05703bee == '\0') {
    il2cpp_init_method_metadata(&TypeRef_AngleUnit);
    il2cpp_init_method_metadata(&TypeInfo_IStyle);
    DAT_05703bee = '\x01';
  }
  handle.fields.value = TypeRef_AngleUnit.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  local_98.fields.m_Value.fields.m_Angle.fields.m_Value = (float)angleUnit;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_98);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar5,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    local_98.fields.m_Value.fields.m_Angle.fields.m_Value = (float)angleUnit;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_98);
    pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown angle unit: {0}");
    pSVar8 = System_String__Format(pSVar8,pIVar5,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_02 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar9);
    System_ArgumentException___ctor(__this_02,pSVar8,(MethodInfo *)0x0);
    uVar9 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVisualElementBuiltin_TransformRotate);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_02,uVar9);
  }
  __this_00 = (__this->fields)._visualElement;
  if (__this_00 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
    pUVar6 = UnityEngine_UIElements_VisualElement__get_style(__this_00,(MethodInfo *)0x0);
    local_70 = (MethodInfo *)0x0;
    UnityEngine_UIElements_Angle___ctor
              ((UnityEngine_UIElements_Angle_o)&local_70,angle,angleUnit,(MethodInfo *)0x0);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    __this_01.fields.m_Angle.fields.m_Unit = in_stack_ffffffffffffff3c;
    __this_01.fields.m_Angle.fields.m_Value = (float)in_stack_ffffffffffffff38;
    __this_01.fields.m_Axis.fields.x = (float)in_stack_ffffffffffffff40;
    __this_01.fields.m_Axis.fields.y = (float)in_stack_ffffffffffffff44;
    __this_01.fields.m_Axis.fields.z = (float)in_stack_ffffffffffffff48;
    __this_01.fields.m_IsNone = in_stack_ffffffffffffff4c;
    UnityEngine_UIElements_Rotate___ctor
              (__this_01,(UnityEngine_UIElements_Angle_o)&local_68,local_70);
    v.fields.m_Axis.fields.x = (float)(int)uStack_60;
    v.fields.m_Angle.fields.m_Value = (float)(undefined4)local_68;
    v.fields.m_Angle.fields.m_Unit = local_68._4_4_;
    v.fields.m_Axis.fields.y = (float)(int)((ulong)uStack_60 >> 0x20);
    v.fields.m_Axis.fields.z = (float)(int)local_58;
    v.fields.m_IsNone = (bool_conflict)((ulong)local_58 >> 0x20);
    UnityEngine_UIElements_StyleRotate__op_Implicit(&local_98,v,(MethodInfo *)0x0);
    uStack_48 = CONCAT44(local_98.fields.m_Value.fields.m_Angle.fields.m_Unit,
                         local_98.fields.m_Value.fields.m_Angle.fields.m_Value);
    fStack_38 = local_98.fields.m_Value.fields.m_Axis.fields.z;
    bStack_34 = local_98.fields.m_Value.fields.m_IsNone;
    iStack_30 = local_98.fields.m_Keyword;
    if (pUVar6 != (UnityEngine_UIElements_IStyle_o *)0x0) {
      pUVar2 = pUVar6->klass;
      uVar1._0_1_ = (pUVar2->_2).rank;
      uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pUVar2->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_IStyle) {
            pVVar7 = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar10) + 0x32);
            goto LAB_03efafd5;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar10);
      }
      pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar6,TypeInfo_IStyle,0x32);
LAB_03efafd5:
      (*pVVar7->methodPtr)(pUVar6,pVVar7->method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVisualElementBuiltin$$GetLength
// il2cpp: UnityEngine_UIElements_Length_o CustomLogic_CustomLogicVisualElementBuiltin__GetLength (float value, bool percentage, const MethodInfo* method);
// 0x3ef5d80

UnityEngine_UIElements_Length_o
CustomLogic_CustomLogicVisualElementBuiltin__GetLength
          (float value,bool_conflict percentage,MethodInfo *method)

{
  UnityEngine_UIElements_Length_Fields UStack_8;
  
  UStack_8.m_Value = 0.0;
  UStack_8.m_Unit = 0;
  UnityEngine_UIElements_Length___ctor
            ((UnityEngine_UIElements_Length_o)&UStack_8,value,percentage,(MethodInfo *)0x0);
  return (UnityEngine_UIElements_Length_o)UStack_8;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicVisualElementBuiltin__get_ClassName (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, const MethodInfo* method);
// 0x3efb080

System_String_o *
CustomLogic_CustomLogicVisualElementBuiltin__get_ClassName
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703bef == '\0') {
    il2cpp_init_method_metadata(&"VisualElement");
    DAT_05703bef = '\x01';
  }
  return "VisualElement";
}


// CustomLogic.CustomLogicVisualElementBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicVisualElementBuiltin__get_IsAbstract (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, const MethodInfo* method);
// 0x3efb0b0

bool_conflict
CustomLogic_CustomLogicVisualElementBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicVisualElementBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicVisualElementBuiltin__get_IsStatic (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, const MethodInfo* method);
// 0x3efb0c0

bool_conflict
CustomLogic_CustomLogicVisualElementBuiltin__get_IsStatic
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicVisualElementBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicVisualElementBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicVisualElementBuiltin_o* __this, const MethodInfo* method);
// 0x3efb0d0

bool_conflict
CustomLogic_CustomLogicVisualElementBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicVisualElementBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


