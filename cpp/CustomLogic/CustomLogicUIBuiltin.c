// Type: CustomLogic.CustomLogicUIBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicUIBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicUIBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicUIBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicUIBuiltin_o* CustomLogic_CustomLogicUIBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3eee1d0

CustomLogic_CustomLogicUIBuiltin_o *
CustomLogic_CustomLogicUIBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicUIBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05703b50 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b50 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicUIBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicUIBuiltin);
      if (DAT_05703b22 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703b22 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicUIBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicUIBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicUIBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3ef2b40

void CustomLogic_CustomLogicUIBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703b7d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b7d = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicUIBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3ef2bb0

void CustomLogic_CustomLogicUIBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabel>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabel_b__4_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef2bc0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__SetLabel>b__4_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  System_String_o *label;
  System_String_o *message;
  
  if (DAT_05703b7e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b7e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    label = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String)
    ;
    if (1 < (uint)__a->max_length) {
      message = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
      if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703b28 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_InGameManager);
        DAT_05703b28 = '\x01';
        iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      GameManagers_InGameManager__SetLabel(label,message,0.0,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelForTime>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelForTime_b__5_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef2cf0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__SetLabelForTime>b__5_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  System_String_o *label;
  System_String_o *message;
  float time;
  
  if (DAT_05703b7f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b7f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    label = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String)
    ;
    if ((1 < (uint)__a->max_length) &&
       (message = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String),
       2 < (uint)__a->max_length)) {
      time = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
      if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703b29 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_InGameManager);
        DAT_05703b29 = '\x01';
        iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      GameManagers_InGameManager__SetLabel(label,message,time,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelAll>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelAll_b__6_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef2e50

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__SetLabelAll>b__6_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *label;
  System_String_o *message;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05703b80 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b80 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    label = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String)
    ;
    if (1 < (uint)__a->max_length) {
      message = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicUIBuiltin__SetLabelAll(label,message,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelForTimeAll>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelForTimeAll_b__7_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef2f20

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__SetLabelForTimeAll>b__7_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *label;
  System_String_o *message;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float time;
  
  if (DAT_05703b81 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b81 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      label = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        message = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          time = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          method_00 = extraout_RDX;
          if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
            il2cpp_init_class();
            method_00 = extraout_RDX_00;
          }
          CustomLogic_CustomLogicUIBuiltin__SetLabelForTimeAll(label,message,time,method_00);
          return (Il2CppObject *)0x0;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__CreatePopup>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__CreatePopup_b__8_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef3030

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__CreatePopup>b__8_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t width;
  int32_t height;
  System_String_o *pSVar1;
  System_String_o *title;
  MethodInfo *in_R8;
  
  if (DAT_05703b82 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b82 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        title = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          width = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[2],MethodInfo_Int32_ConvertTo_Int32);
          if (3 < (uint)__a->max_length) {
            height = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[3],MethodInfo_Int32_ConvertTo_Int32);
            if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar1 = CustomLogic_CustomLogicUIBuiltin__CreatePopup(pSVar1,title,width,height,in_R8);
            return (Il2CppObject *)pSVar1;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowPopup>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ShowPopup_b__9_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef3140

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__ShowPopup>b__9_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *popupName;
  MethodInfo *method_00;
  
  if (DAT_05703b83 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b83 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      popupName = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                            (obj,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
      if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_CustomLogicUIBuiltin__ShowPopup(popupName,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__HidePopup>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__HidePopup_b__10_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef31f0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__HidePopup>b__10_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *popupName;
  MethodInfo *method_00;
  
  if (DAT_05703b84 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b84 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      popupName = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                            (obj,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
      if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_CustomLogicUIBuiltin__HidePopup(popupName,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearPopup>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ClearPopup_b__11_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef32a0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__ClearPopup>b__11_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *popupName;
  MethodInfo *method_00;
  
  if (DAT_05703b85 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b85 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      popupName = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                            (obj,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
      if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_CustomLogicUIBuiltin__ClearPopup(popupName,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddPopupLabel>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupLabel_b__12_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef3350

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__AddPopupLabel>b__12_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *popupName;
  System_String_o *label;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05703b86 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b86 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    popupName = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      label = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicUIBuiltin__AddPopupLabel(popupName,label,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddPopupButton>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupButton_b__13_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef3420

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__AddPopupButton>b__13_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *popupName;
  System_String_o *label;
  System_String_o *callback;
  
  if (DAT_05703b87 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b87 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      popupName = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        label = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          callback = (System_String_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                               (__a->m_Items[2],MethodInfo_String_ConvertTo_String);
          if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
            il2cpp_init_class();
          }
          CustomLogic_CustomLogicUIBuiltin__AddPopupButton(popupName,label,callback,method);
          return (Il2CppObject *)0x0;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddPopupBottomButton>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupBottomButton_b__14_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef3510

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__AddPopupBottomButton>b__14_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *popupName;
  System_String_o *label;
  System_String_o *callback;
  
  if (DAT_05703b88 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b88 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      popupName = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        label = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          callback = (System_String_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                               (__a->m_Items[2],MethodInfo_String_ConvertTo_String);
          if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
            il2cpp_init_class();
          }
          CustomLogic_CustomLogicUIBuiltin__AddPopupBottomButton(popupName,label,callback,method);
          return (Il2CppObject *)0x0;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddPopupButtons>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__AddPopupButtons_b__15_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef3600

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__AddPopupButtons>b__15_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *popupName;
  CustomLogic_CustomLogicListBuiltin_o *labels;
  CustomLogic_CustomLogicListBuiltin_o *callbacks;
  
  if (DAT_05703b89 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b89 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      popupName = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        labels = (CustomLogic_CustomLogicListBuiltin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
        if (2 < (uint)__a->max_length) {
          callbacks = (CustomLogic_CustomLogicListBuiltin_o *)
                      CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                (__a->m_Items[2],MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
          if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
            il2cpp_init_class();
          }
          CustomLogic_CustomLogicUIBuiltin__AddPopupButtons(popupName,labels,callbacks,method);
          return (Il2CppObject *)0x0;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__WrapStyleTag>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__WrapStyleTag_b__16_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef3700

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__WrapStyleTag>b__16_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_String_o *style;
  System_String_o *arg;
  
  if (DAT_05703b8a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b8a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      style = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
      if ((int)__a->max_length < 3) {
        arg = (System_String_o *)0x0;
        iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
      }
      else {
        pIVar2 = __a->m_Items[2];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        arg = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
        iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      pSVar3 = CustomLogic_CustomLogicUIBuiltin__WrapStyleTag(pSVar3,style,arg,method);
      return (Il2CppObject *)pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowChangeCharacterMenu>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ShowChangeCharacterMenu_b__17_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef3820

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__ShowChangeCharacterMenu>b__17_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  MethodInfo *method_00;
  
  if (DAT_05703b8b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b8b = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicUIBuiltin[2].parameters + 4);
    method_00 = TypeInfo_CustomLogicUIBuiltin;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicUIBuiltin[2].parameters + 4);
    method_00 = TypeInfo_CustomLogicUIBuiltin;
  }
  TypeInfo_CustomLogicUIBuiltin = method_00;
  if (iVar1 != 0) {
    CustomLogic_CustomLogicUIBuiltin__ShowChangeCharacterMenu(method_00);
    return (Il2CppObject *)0x0;
  }
  il2cpp_init_class();
  CustomLogic_CustomLogicUIBuiltin__ShowChangeCharacterMenu(method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScoreboardHeader>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetScoreboardHeader_b__18_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef3880

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__SetScoreboardHeader>b__18_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_05703b8c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b8c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto LAB_03ef39a4;
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar3 = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar3,MethodInfo_String_ConvertTo_String);
  if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05703b36 != '\0') goto LAB_03ef391b;
LAB_03ef3966:
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703b36 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    if (DAT_05703b36 == '\0') goto LAB_03ef3966;
LAB_03ef391b:
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    *(Il2CppObject **)(lVar2 + 0x70) = pIVar3;
    il2cpp_runtime_glue(lVar2 + 0x70,pIVar3);
    return (Il2CppObject *)0x0;
  }
LAB_03ef39a4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScoreboardProperty>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetScoreboardProperty_b__19_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef39b0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__SetScoreboardProperty>b__19_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *property;
  MethodInfo *method_00;
  
  if (DAT_05703b8d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b8d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      property = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                           (obj,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
      if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_CustomLogicUIBuiltin__SetScoreboardProperty(property,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetThemeColor>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__GetThemeColor_b__20_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef3a60

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__GetThemeColor>b__20_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *panel;
  System_String_o *category;
  System_String_o *item;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar1;
  
  if (DAT_05703b8e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b8e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      panel = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        category = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String)
        ;
        if (2 < (uint)__a->max_length) {
          item = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[2],MethodInfo_String_ConvertTo_String);
          if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pCVar1 = CustomLogic_CustomLogicUIBuiltin__GetThemeColor(panel,category,item,method);
          return (Il2CppObject *)pCVar1;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPopupActive>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__IsPopupActive_b__21_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef3b50

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__IsPopupActive>b__21_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *popupName;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  undefined1 local_9;
  
  if (DAT_05703b8f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b8f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      popupName = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                            (pIVar2,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
      if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = CustomLogic_CustomLogicUIBuiltin__IsPopupActive(popupName,method_00);
      local_9 = (undefined1)bVar1;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
      return pIVar2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelActive>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetLabelActive_b__22_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef3c20

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__SetLabelActive>b__22_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  System_String_o *label;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05703b90 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b90 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    label = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String)
    ;
    if (1 < (uint)__a->max_length) {
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__a->m_Items[1],MethodInfo_Boolean_ConvertTo_Boolean);
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicUIBuiltin__SetLabelActive(label,uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetKDRPanelActive>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetKDRPanelActive_b__23_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef3d00

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__SetKDRPanelActive>b__23_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  MethodInfo *method_00;
  
  if (DAT_05703b91 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b91 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_Boolean_ConvertTo_Boolean;
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>
                        (obj,(MethodInfo_24AB1E0 *)MethodInfo_Boolean_ConvertTo_Boolean);
      if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_CustomLogicUIBuiltin__SetKDRPanelActive(uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetMinimapActive>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetMinimapActive_b__24_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef3db0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__SetMinimapActive>b__24_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  MethodInfo *method_00;
  
  if (DAT_05703b92 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b92 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_Boolean_ConvertTo_Boolean;
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>
                        (obj,(MethodInfo_24AB1E0 *)MethodInfo_Boolean_ConvertTo_Boolean);
      if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_CustomLogicUIBuiltin__SetMinimapActive(uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetChatPanelActive>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetChatPanelActive_b__25_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef3e60

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__SetChatPanelActive>b__25_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  MethodInfo *method_00;
  
  if (DAT_05703b93 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b93 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_Boolean_ConvertTo_Boolean;
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>
                        (obj,(MethodInfo_24AB1E0 *)MethodInfo_Boolean_ConvertTo_Boolean);
      if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_CustomLogicUIBuiltin__SetChatPanelActive(uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetFeedPanelActive>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetFeedPanelActive_b__26_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef3f10

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__SetFeedPanelActive>b__26_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  MethodInfo *method_00;
  
  if (DAT_05703b94 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b94 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_Boolean_ConvertTo_Boolean;
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>
                        (obj,(MethodInfo_24AB1E0 *)MethodInfo_Boolean_ConvertTo_Boolean);
      if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_CustomLogicUIBuiltin__SetFeedPanelActive(uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetBottomHUDActive>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SetBottomHUDActive_b__27_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef3fc0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__SetBottomHUDActive>b__27_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  MethodInfo *method_00;
  
  if (DAT_05703b95 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b95 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_Boolean_ConvertTo_Boolean;
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>
                        (obj,(MethodInfo_24AB1E0 *)MethodInfo_Boolean_ConvertTo_Boolean);
      if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_CustomLogicUIBuiltin__SetBottomHUDActive(uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetRootVisualElement>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__GetRootVisualElement_b__28_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef4070

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__GetRootVisualElement>b__28_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_o *pCVar2;
  MethodInfo *method_00;
  
  if (DAT_05703b96 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b96 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicUIBuiltin[2].parameters + 4);
    method_00 = TypeInfo_CustomLogicUIBuiltin;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicUIBuiltin[2].parameters + 4);
    method_00 = TypeInfo_CustomLogicUIBuiltin;
  }
  TypeInfo_CustomLogicUIBuiltin = method_00;
  if (iVar1 != 0) {
    pCVar2 = CustomLogic_CustomLogicUIBuiltin__GetRootVisualElement(method_00);
    return (Il2CppObject *)pCVar2;
  }
  il2cpp_init_class();
  pCVar2 = CustomLogic_CustomLogicUIBuiltin__GetRootVisualElement(method_00);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__VisualElement>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__VisualElement_b__29_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef40d0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__VisualElement>b__29_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UIElements_VisualElement_o *__this_00;
  undefined1 auVar2 [16];
  
  if (DAT_05703b97 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b97 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b42 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_VisualElement);
    DAT_05703b42 = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_VisualElement_o *)il2cpp_runtime_glue(TypeInfo_VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(__this_00,(MethodInfo *)0x0);
  auVar2 = il2cpp_runtime_glue(TypeInfo_CustomLogicVisualElementBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor(auVar2._0_8_,__this_00,auVar2._8_8_);
  return (Il2CppObject *)auVar2._0_8_;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Button>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Button_b__30_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef41b0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__Button>b__30_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  System_String_o *text;
  CustomLogic_UserMethod_o *clickEvent;
  CustomLogic_CustomLogicButtonBuiltin_o *pCVar3;
  System_Object_array *extraout_RDX;
  System_Object_array *extraout_RDX_00;
  System_Object_array *extraout_RDX_01;
  System_Object_array *extraout_RDX_02;
  System_Object_array *method_00;
  
  method_00 = __a;
  if (DAT_05703b98 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&"");
    DAT_05703b98 = '\x01';
    method_00 = extraout_RDX;
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  text = "";
  if (__a->max_length != 0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    text = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    method_00 = extraout_RDX_00;
    if (1 < (int)__a->max_length) {
      pIVar2 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      clickEvent = (CustomLogic_UserMethod_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_UserMethod_ConvertTo_UserMethod);
      iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
      method_00 = extraout_RDX_01;
      goto joined_r0x03ef42b1;
    }
  }
  clickEvent = (CustomLogic_UserMethod_o *)0x0;
  iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
joined_r0x03ef42b1:
  if (iVar1 == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_02;
  }
  pCVar3 = CustomLogic_CustomLogicUIBuiltin__Button(text,clickEvent,(MethodInfo *)method_00);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Label>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Label_b__31_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef42e0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__Label>b__31_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  System_String_o *text;
  CustomLogic_CustomLogicLabelBuiltin_o *pCVar2;
  
  if (DAT_05703b99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&"");
    DAT_05703b99 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (__a->max_length == 0) {
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
    text = "";
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
    __c = (CustomLogic_CustomLogicUIBuiltin_o *)MethodInfo_String_ConvertTo_String;
    text = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                     (obj,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar1 != 0) {
    pCVar2 = CustomLogic_CustomLogicUIBuiltin__Label(text,(MethodInfo *)__c);
    return (Il2CppObject *)pCVar2;
  }
  il2cpp_init_class();
  pCVar2 = CustomLogic_CustomLogicUIBuiltin__Label(text,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextField>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__TextField_b__32_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef43c0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__TextField>b__32_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  System_String_o *label;
  CustomLogic_CustomLogicTextFieldBuiltin_o *pCVar2;
  
  if (DAT_05703b9a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&"");
    DAT_05703b9a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (__a->max_length == 0) {
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
    label = "";
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
    __c = (CustomLogic_CustomLogicUIBuiltin_o *)MethodInfo_String_ConvertTo_String;
    label = (System_String_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                      (obj,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar1 != 0) {
    pCVar2 = CustomLogic_CustomLogicUIBuiltin__TextField(label,(MethodInfo *)__c);
    return (Il2CppObject *)pCVar2;
  }
  il2cpp_init_class();
  pCVar2 = CustomLogic_CustomLogicUIBuiltin__TextField(label,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Toggle>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Toggle_b__33_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef44a0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__Toggle>b__33_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  System_String_o *label;
  CustomLogic_UserMethod_o *valueChangedEvent;
  CustomLogic_CustomLogicToggleBuiltin_o *pCVar3;
  System_Object_array *extraout_RDX;
  System_Object_array *extraout_RDX_00;
  System_Object_array *extraout_RDX_01;
  System_Object_array *extraout_RDX_02;
  System_Object_array *method_00;
  
  method_00 = __a;
  if (DAT_05703b9b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&"");
    DAT_05703b9b = '\x01';
    method_00 = extraout_RDX;
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  label = "";
  if (__a->max_length != 0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    label = (System_String_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    method_00 = extraout_RDX_00;
    if (1 < (int)__a->max_length) {
      pIVar2 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      valueChangedEvent =
           (CustomLogic_UserMethod_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_UserMethod_ConvertTo_UserMethod);
      iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
      method_00 = extraout_RDX_01;
      goto joined_r0x03ef45a1;
    }
  }
  valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
  iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
joined_r0x03ef45a1:
  if (iVar1 == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_02;
  }
  pCVar3 = CustomLogic_CustomLogicUIBuiltin__Toggle(label,valueChangedEvent,(MethodInfo *)method_00)
  ;
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Slider>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Slider_b__34_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef45d0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__Slider>b__34_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar3;
  System_String_o *label;
  CustomLogic_UserMethod_o *valueChangedEvent;
  System_Object_array *extraout_RDX;
  System_Object_array *extraout_RDX_00;
  System_Object_array *extraout_RDX_01;
  System_Object_array *extraout_RDX_02;
  System_Object_array *extraout_RDX_03;
  System_Object_array *extraout_RDX_04;
  System_Object_array *extraout_RDX_05;
  System_Object_array *method_00;
  float lowValue;
  float highValue;
  float tickInterval;
  
  method_00 = __a;
  if (DAT_05703b9c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&"");
    DAT_05703b9c = '\x01';
    method_00 = extraout_RDX;
  }
  label = "";
  if (__a != (System_Object_array *)0x0) {
    tickInterval = 0.0;
    highValue = 100.0;
    if (__a->max_length == 0) {
      valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
      lowValue = 0.0;
      iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
    }
    else {
      if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar2 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lowValue = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar2,MethodInfo_Single_ConvertTo_Single);
      if ((int)__a->max_length < 2) {
        valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
        tickInterval = 0.0;
        highValue = 100.0;
        iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
        method_00 = extraout_RDX_00;
      }
      else {
        pIVar2 = __a->m_Items[1];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        highValue = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar2,MethodInfo_Single_ConvertTo_Single);
        if ((int)__a->max_length < 3) {
          valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
          tickInterval = 0.0;
          method_00 = extraout_RDX_02;
        }
        else {
          pIVar2 = __a->m_Items[2];
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_init_class();
          }
          tickInterval = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar2,MethodInfo_Single_ConvertTo_Single);
          if ((int)__a->max_length < 4) {
            valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
            method_00 = extraout_RDX_03;
          }
          else {
            pIVar2 = __a->m_Items[3];
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_init_class();
            }
            label = (System_String_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
            if ((int)__a->max_length < 5) {
              valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
              method_00 = extraout_RDX_04;
            }
            else {
              pIVar2 = __a->m_Items[4];
              if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
                il2cpp_init_class();
              }
              valueChangedEvent =
                   (CustomLogic_UserMethod_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_UserMethod_ConvertTo_UserMethod);
              method_00 = extraout_RDX_05;
            }
          }
        }
        iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
      }
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      method_00 = extraout_RDX_01;
    }
    pCVar3 = CustomLogic_CustomLogicUIBuiltin__Slider
                       (lowValue,highValue,tickInterval,label,valueChangedEvent,
                        (MethodInfo *)method_00);
    return (Il2CppObject *)pCVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SliderInt>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__SliderInt_b__35_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef4830

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__SliderInt>b__35_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  int32_t lowValue;
  int32_t highValue;
  int32_t tickInterval;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar3;
  System_String_o *label;
  CustomLogic_UserMethod_o *valueChangedEvent;
  MethodInfo *in_R9;
  
  if (DAT_05703b9d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&"");
    DAT_05703b9d = '\x01';
  }
  label = "";
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  tickInterval = 1;
  highValue = 100;
  if (__a->max_length == 0) {
    lowValue = 0;
LAB_03ef49a8:
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lowValue = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar2,MethodInfo_Int32_ConvertTo_Int32);
    if (1 < (int)__a->max_length) {
      pIVar2 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      highValue = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar2,MethodInfo_Int32_ConvertTo_Int32);
      if (2 < (int)__a->max_length) {
        pIVar2 = __a->m_Items[2];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        tickInterval = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar2,MethodInfo_Int32_ConvertTo_Int32);
        if (3 < (int)__a->max_length) {
          pIVar2 = __a->m_Items[3];
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_init_class();
          }
          label = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
          if (4 < (int)__a->max_length) {
            pIVar2 = __a->m_Items[4];
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_init_class();
            }
            valueChangedEvent =
                 (CustomLogic_UserMethod_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_UserMethod_ConvertTo_UserMethod);
            iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
            goto joined_r0x03ef4a38;
          }
          goto LAB_03ef49a8;
        }
      }
    }
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
joined_r0x03ef4a38:
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pCVar3 = CustomLogic_CustomLogicUIBuiltin__SliderInt
                     (lowValue,highValue,tickInterval,label,valueChangedEvent,in_R9);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Dropdown>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Dropdown_b__36_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef4a50

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__Dropdown>b__36_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  int32_t defaultIndex;
  CustomLogic_CustomLogicListBuiltin_o *choices;
  System_String_o *label;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCVar3;
  CustomLogic_UserMethod_o *valueChangedEvent;
  MethodInfo *in_R8;
  
  if (DAT_05703b9e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&"");
    DAT_05703b9e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar2 = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  choices = (CustomLogic_CustomLogicListBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
  label = "";
  if ((int)__a->max_length < 2) {
    defaultIndex = 0;
  }
  else {
    pIVar2 = __a->m_Items[1];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    defaultIndex = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar2,MethodInfo_Int32_ConvertTo_Int32);
    if (2 < (int)__a->max_length) {
      pIVar2 = __a->m_Items[2];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      label = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
      if (3 < (int)__a->max_length) {
        pIVar2 = __a->m_Items[3];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        valueChangedEvent =
             (CustomLogic_UserMethod_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_UserMethod_ConvertTo_UserMethod);
        iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
        goto joined_r0x03ef4bf7;
      }
    }
  }
  valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
  iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
joined_r0x03ef4bf7:
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pCVar3 = CustomLogic_CustomLogicUIBuiltin__Dropdown
                     (choices,defaultIndex,label,valueChangedEvent,in_R8);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ProgressBar>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ProgressBar_b__37_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef4c10

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__ProgressBar>b__37_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicProgressBarBuiltin_o *pCVar3;
  System_String_o *title;
  CustomLogic_UserMethod_o *valueChangedEvent;
  System_Object_array *extraout_RDX;
  System_Object_array *extraout_RDX_00;
  System_Object_array *extraout_RDX_01;
  System_Object_array *extraout_RDX_02;
  System_Object_array *extraout_RDX_03;
  System_Object_array *extraout_RDX_04;
  System_Object_array *method_00;
  float lowValue;
  float highValue;
  
  method_00 = __a;
  if (DAT_05703b9f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&"");
    DAT_05703b9f = '\x01';
    method_00 = extraout_RDX;
  }
  title = "";
  if (__a != (System_Object_array *)0x0) {
    highValue = 100.0;
    if (__a->max_length == 0) {
      lowValue = 0.0;
      valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
      iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
    }
    else {
      if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar2 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lowValue = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar2,MethodInfo_Single_ConvertTo_Single);
      if ((int)__a->max_length < 2) {
        valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
        highValue = 100.0;
        iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
        method_00 = extraout_RDX_00;
      }
      else {
        pIVar2 = __a->m_Items[1];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        highValue = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar2,MethodInfo_Single_ConvertTo_Single);
        if ((int)__a->max_length < 3) {
          valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
          method_00 = extraout_RDX_02;
        }
        else {
          pIVar2 = __a->m_Items[2];
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_init_class();
          }
          title = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
          if ((int)__a->max_length < 4) {
            valueChangedEvent = (CustomLogic_UserMethod_o *)0x0;
            method_00 = extraout_RDX_03;
          }
          else {
            pIVar2 = __a->m_Items[3];
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_init_class();
            }
            valueChangedEvent =
                 (CustomLogic_UserMethod_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_UserMethod_ConvertTo_UserMethod);
            method_00 = extraout_RDX_04;
          }
        }
        iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
      }
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      method_00 = extraout_RDX_01;
    }
    pCVar3 = CustomLogic_CustomLogicUIBuiltin__ProgressBar
                       (lowValue,highValue,title,valueChangedEvent,(MethodInfo *)method_00);
    return (Il2CppObject *)pCVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ScrollView>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__ScrollView_b__38_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef4e20

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__ScrollView>b__38_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicScrollViewBuiltin_o *pCVar2;
  MethodInfo *method_00;
  
  if (DAT_05703ba0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703ba0 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicUIBuiltin[2].parameters + 4);
    method_00 = TypeInfo_CustomLogicUIBuiltin;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicUIBuiltin[2].parameters + 4);
    method_00 = TypeInfo_CustomLogicUIBuiltin;
  }
  TypeInfo_CustomLogicUIBuiltin = method_00;
  if (iVar1 != 0) {
    pCVar2 = CustomLogic_CustomLogicUIBuiltin__ScrollView(method_00);
    return (Il2CppObject *)pCVar2;
  }
  il2cpp_init_class();
  pCVar2 = CustomLogic_CustomLogicUIBuiltin__ScrollView(method_00);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Icon>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Icon_b__39_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef4e80

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__Icon>b__39_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  System_String_o *iconPath;
  CustomLogic_CustomLogicIconBuiltin_o *pCVar2;
  
  if (DAT_05703ba1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&"");
    DAT_05703ba1 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (__a->max_length == 0) {
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
    iconPath = "";
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
    __c = (CustomLogic_CustomLogicUIBuiltin_o *)MethodInfo_String_ConvertTo_String;
    iconPath = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                         (obj,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar1 != 0) {
    pCVar2 = CustomLogic_CustomLogicUIBuiltin__Icon(iconPath,(MethodInfo *)__c);
    return (Il2CppObject *)pCVar2;
  }
  il2cpp_init_class();
  pCVar2 = CustomLogic_CustomLogicUIBuiltin__Icon(iconPath,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Image>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings___c_____CreateMethodBinding__Image_b__40_0 (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicUIBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ef4f60

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings_<>c__<__CreateMethodBinding__Image>b__40_0
          (CustomLogic_CustomLogicUIBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicUIBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  System_String_o *iconPath;
  CustomLogic_CustomLogicImageBuiltin_o *pCVar2;
  
  if (DAT_05703ba2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&"");
    DAT_05703ba2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (__a->max_length == 0) {
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
    iconPath = "";
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
    __c = (CustomLogic_CustomLogicUIBuiltin_o *)MethodInfo_String_ConvertTo_String;
    iconPath = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                         (obj,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar1 != 0) {
    pCVar2 = CustomLogic_CustomLogicUIBuiltin__Image(iconPath,(MethodInfo *)__c);
    return (Il2CppObject *)pCVar2;
  }
  il2cpp_init_class();
  pCVar2 = CustomLogic_CustomLogicUIBuiltin__Image(iconPath,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicUIBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3eee2f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicUIBuiltin_Bindings__CreateMemberBinding
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
  System_Func_T__object__o *pSVar7;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  
  if (DAT_05703b51 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"SetLabelActive");
    il2cpp_init_method_metadata(&"SetScoreboardHeader");
    il2cpp_init_method_metadata(&"ClearPopup");
    il2cpp_init_method_metadata(&"ProgressBar");
    il2cpp_init_method_metadata(&"ForceHideNames");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"GetRootVisualElement");
    il2cpp_init_method_metadata(&"ShowChangeCharacterMenu");
    il2cpp_init_method_metadata(&"SetLabelForTime");
    il2cpp_init_method_metadata(&"CreatePopup");
    il2cpp_init_method_metadata(&"SetScoreboardProperty");
    il2cpp_init_method_metadata(&"AddPopupButton");
    il2cpp_init_method_metadata(&"WrapStyleTag");
    il2cpp_init_method_metadata(&"Button");
    il2cpp_init_method_metadata(&"AddPopupBottomButton");
    il2cpp_init_method_metadata(&"SetMinimapActive");
    il2cpp_init_method_metadata(&"GetThemeColor");
    il2cpp_init_method_metadata(&"GetPopups");
    il2cpp_init_method_metadata(&"Slider");
    il2cpp_init_method_metadata(&"SetChatPanelActive");
    il2cpp_init_method_metadata(&"Icon");
    il2cpp_init_method_metadata(&"HidePopup");
    il2cpp_init_method_metadata(&"SliderInt");
    il2cpp_init_method_metadata(&"SetLabelAll");
    il2cpp_init_method_metadata(&"SetLabel");
    il2cpp_init_method_metadata(&"SetBottomHUDActive");
    il2cpp_init_method_metadata(&"ShowPopup");
    il2cpp_init_method_metadata(&"SetKDRPanelActive");
    il2cpp_init_method_metadata(&"AddPopupLabel");
    il2cpp_init_method_metadata(&"Dropdown");
    il2cpp_init_method_metadata(&"ScrollView");
    il2cpp_init_method_metadata(&"IsPopupActive");
    il2cpp_init_method_metadata(&"TextField");
    il2cpp_init_method_metadata(&"Image");
    il2cpp_init_method_metadata(&"SetLabelForTimeAll");
    il2cpp_init_method_metadata(&"Toggle");
    il2cpp_init_method_metadata(&"SetFeedPanelActive");
    il2cpp_init_method_metadata(&"AddPopupButtons");
    il2cpp_init_method_metadata(&"VisualElement");
    DAT_05703b51 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x70e4ec15) {
    if (uVar3 < 0x4f65f049) {
      if (uVar3 < 0x2f84160a) {
        if (uVar3 < 0x23322008) {
          if (uVar3 == 0x23021f22) {
            bVar4 = System_String__op_Equality(name,"SetLabelForTimeAll",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05703b57 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetLabelForTimeAl);
                il2cpp_init_method_metadata(&TypeInfo_c);
                DAT_05703b57 = '\x01';
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_init_class();
                pSVar9 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0x20);
              }
              else {
                pSVar9 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0x20);
              }
              if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
                System_Func<object__object__object>___ctor();
                lVar2 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
                il2cpp_runtime_glue(lVar2 + 0x20,pSVar9);
              }
              pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
              CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar10;
            }
          }
          else if ((uVar3 == 0x23322007) &&
                  (bVar4 = System_String__op_Equality(name,"IsPopupActive",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703b65 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsPopupActive_b);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703b65 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x90);
            }
            else {
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x90);
            }
            if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x90) = pSVar9;
              il2cpp_runtime_glue(lVar2 + 0x90,pSVar9);
            }
            pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar10;
          }
        }
        else if (uVar3 == 0x2ccf9d27) {
          bVar4 = System_String__op_Equality(name,"SetChatPanelActive",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703b69 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetChatPanelActiv);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703b69 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0xb0);
            }
            else {
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0xb0);
            }
            if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xb0) = pSVar9;
              il2cpp_runtime_glue(lVar2 + 0xb0,pSVar9);
            }
            pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar10;
          }
        }
        else if ((uVar3 == 0x2f841609) &&
                (bVar4 = System_String__op_Equality(name,"SetFeedPanelActive",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703b6a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetFeedPanelActiv);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703b6a = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb8)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb8)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xb8) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0xb8,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 < 0x33881a92) {
        if (uVar3 == 0x324642be) {
          bVar4 = System_String__op_Equality(name,"AddPopupButton",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703b5d == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddPopupButton_b);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703b5d = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x50);
            }
            else {
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x50);
            }
            if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar9;
              il2cpp_runtime_glue(lVar2 + 0x50,pSVar9);
            }
            pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar10;
          }
        }
        else if ((uVar3 == 0x33881a91) &&
                (bVar4 = System_String__op_Equality(name,"Button",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703b6e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Button_b__30_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703b6e = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd8)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd8)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xd8) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0xd8,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x3868216a) {
        bVar4 = System_String__op_Equality(name,"TextField",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703b70 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextField_b__32_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703b70 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe8)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe8)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xe8) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0xe8,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x4326a2ee) {
        bVar4 = System_String__op_Equality(name,"SetLabelAll",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703b56 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetLabelAll_b__6);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703b56 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x18,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x4f65f048) &&
              (bVar4 = System_String__op_Equality(name,"SetScoreboardHeader",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703b62 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetScoreboardHead);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703b62 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x78,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 < 0x60c9e8c5) {
      if (uVar3 < 0x53573f20) {
        if (uVar3 == 0x4f9b1f05) {
          bVar4 = System_String__op_Equality(name,"SliderInt",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703b73 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SliderInt_b__35_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703b73 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x100);
            }
            else {
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x100);
            }
            if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x100) = pSVar9;
              il2cpp_runtime_glue(lVar2 + 0x100,pSVar9);
            }
            pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar10;
          }
        }
        else if ((uVar3 == 0x53573f1f) &&
                (bVar4 = System_String__op_Equality(name,"ProgressBar",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703b75 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ProgressBar_b__37);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703b75 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x110);
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x110);
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x110) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x110,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x590ca79a) {
        bVar4 = System_String__op_Equality(name,"Image",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703b78 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Image_b__40_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703b78 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x128);
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x128);
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x128) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x128,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x5de6f45b) {
        bVar4 = System_String__op_Equality(name,"VisualElement",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703b6d == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__VisualElement_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703b6d = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd0)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd0)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xd0) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0xd0,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x60c9e8c4) &&
              (bVar4 = System_String__op_Equality(name,"ForceHideNames",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703b52 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicUIBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ForceHideNames);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ForceHideNames_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object);
          DAT_05703b52 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object);
        System_Func<object__object>___ctor();
        setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicUIBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUIBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar7,setter,MethodInfo_CLPropertyBinding_1_CustomLogicUIBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0x612ae108) {
      if (uVar3 == 0x610a18c5) {
        bVar4 = System_String__op_Equality(name,"SetLabelActive",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703b66 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetLabelActive_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703b66 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x98) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x98,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x612ae107) &&
              (bVar4 = System_String__op_Equality(name,"SetBottomHUDActive",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703b6b == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetBottomHUDActiv);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703b6b = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xc0);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xc0);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0xc0) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0xc0,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x68e6cb10) {
      bVar4 = System_String__op_Equality(name,"Icon",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703b77 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Icon_b__39_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703b77 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x120);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x120);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x120) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x120,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x6cf1ba25) {
      bVar4 = System_String__op_Equality(name,"Toggle",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703b71 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Toggle_b__33_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703b71 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf0);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf0);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0xf0) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0xf0,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x70e4ec14) &&
            (bVar4 = System_String__op_Equality(name,"ClearPopup",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703b5b == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClearPopup_b__11);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703b5b = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x40,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0xbbd01376) {
    if (uVar3 < 0x9eccf29e) {
      if (uVar3 < 0x8e6a8408) {
        if (uVar3 == 0x8105de5a) {
          bVar4 = System_String__op_Equality(name,"SetKDRPanelActive",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703b67 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetKDRPanelActive);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703b67 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0xa0);
            }
            else {
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0xa0);
            }
            if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = pSVar9;
              il2cpp_runtime_glue(lVar2 + 0xa0,pSVar9);
            }
            pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar10;
          }
        }
        else if ((uVar3 == 0x8e6a8407) &&
                (bVar4 = System_String__op_Equality(name,"SetLabelForTime",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703b55 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetLabelForTime_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703b55 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x10,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x9a3972f4) {
        bVar4 = System_String__op_Equality(name,"AddPopupLabel",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703b5c == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddPopupLabel_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703b5c = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x48,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x9b74c01c) {
        bVar4 = System_String__op_Equality(name,"Slider",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703b72 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Slider_b__34_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703b72 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf8)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf8)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xf8) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0xf8,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x9eccf29d) &&
              (bVar4 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703b6f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Label_b__31_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703b6f = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe0);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe0);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0xe0) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0xe0,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 < 0xab9e5c86) {
      if (uVar3 == 0xa76f5664) {
        bVar4 = System_String__op_Equality(name,"ShowChangeCharacterMenu",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703b61 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ShowChangeCharact);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703b61 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x70,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0xab9e5c85) &&
              (bVar4 = System_String__op_Equality(name,"HidePopup",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703b5a == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__HidePopup_b__10_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703b5a = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x38,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0xb3a837ef) {
      bVar4 = System_String__op_Equality(name,"GetThemeColor",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703b64 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetThemeColor_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703b64 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x88) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x88,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0xb6dc3cfc) {
      bVar4 = System_String__op_Equality(name,"GetPopups",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703b53 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GetPopups_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object);
          DAT_05703b53 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUIBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUIBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xbbd01375) &&
            (bVar4 = System_String__op_Equality(name,"ScrollView",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703b76 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ScrollView_b__38);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703b76 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x118);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x118);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x118) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x118,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0xdbe78667) {
    if (uVar3 < 0xc3967d6c) {
      if (uVar3 == 0xbfe92359) {
        bVar4 = System_String__op_Equality(name,"GetRootVisualElement",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703b6c == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetRootVisualElem);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703b6c = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 200);
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 200);
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 200) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 200,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0xc3967d6b) &&
              (bVar4 = System_String__op_Equality(name,"SetLabel",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703b54 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetLabel_b__4_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703b54 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 8,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0xccadec40) {
      bVar4 = System_String__op_Equality(name,"SetScoreboardProperty",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703b63 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetScoreboardProp);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703b63 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x80,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0xd4660d26) {
      bVar4 = System_String__op_Equality(name,"ShowPopup",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703b59 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ShowPopup_b__9_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703b59 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x30,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0xdbe78666) &&
            (bVar4 = System_String__op_Equality(name,"WrapStyleTag",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703b60 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__WrapStyleTag_b__1);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703b60 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x68,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0xf19b28b8) {
    if (uVar3 == 0xe4462ef8) {
      bVar4 = System_String__op_Equality(name,"Dropdown",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703b74 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Dropdown_b__36_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703b74 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x108);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x108);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x108) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x108,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0xf19b28b7) &&
            (bVar4 = System_String__op_Equality(name,"AddPopupButtons",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703b5f == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddPopupButtons_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703b5f = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x60,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 == 0xf654e26c) {
    bVar4 = System_String__op_Equality(name,"SetMinimapActive",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703b68 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetMinimapActive);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703b68 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0xa8,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 == 0xfc401d15) {
    bVar4 = System_String__op_Equality(name,"CreatePopup",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703b58 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__CreatePopup_b__8);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703b58 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x28,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if ((uVar3 == 0xfeca8df1) &&
          (bVar4 = System_String__op_Equality(name,"AddPopupBottomButton",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703b5e == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddPopupBottomBut);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703b5e = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
    }
    else {
      pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
    }
    if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar9;
      il2cpp_runtime_glue(lVar2 + 0x58,pSVar9);
    }
    pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar10;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicUIBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreatePropertyBinding__ForceHideNames
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__ForceHideNames (const MethodInfo* method);
// 0x3eef170

CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__ForceHideNames
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b52 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicUIBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ForceHideNames);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ForceHideNames_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object);
    DAT_05703b52 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicUIBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUIBuiltin)
  ;
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreatePropertyBinding__GetPopups
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__GetPopups (const MethodInfo* method);
// 0x3eef250

CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreatePropertyBinding__GetPopups(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b53 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GetPopups_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object);
    DAT_05703b53 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUIBuiltin)
  ;
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabel
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabel (const MethodInfo* method);
// 0x3eef2f0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabel(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b54 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetLabel_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b54 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelForTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelForTime (const MethodInfo* method);
// 0x3eef440

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelForTime
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b55 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetLabelForTime_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b55 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelAll (const MethodInfo* method);
// 0x3eef590

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelAll(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b56 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetLabelAll_b__6);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b56 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelForTimeAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelForTimeAll (const MethodInfo* method);
// 0x3eef6e0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelForTimeAll
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b57 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetLabelForTimeAl);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b57 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__CreatePopup
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__CreatePopup (const MethodInfo* method);
// 0x3eef830

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__CreatePopup(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b58 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__CreatePopup_b__8);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b58 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ShowPopup
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ShowPopup (const MethodInfo* method);
// 0x3eef980

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ShowPopup(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b59 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ShowPopup_b__9_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b59 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__HidePopup
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__HidePopup (const MethodInfo* method);
// 0x3eefad0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__HidePopup(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b5a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__HidePopup_b__10_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b5a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ClearPopup
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ClearPopup (const MethodInfo* method);
// 0x3eefc20

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ClearPopup(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b5b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClearPopup_b__11);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b5b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__AddPopupLabel
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupLabel (const MethodInfo* method);
// 0x3eefd70

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupLabel(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b5c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddPopupLabel_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b5c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__AddPopupButton
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupButton (const MethodInfo* method);
// 0x3eefec0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupButton(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b5d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddPopupButton_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b5d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__AddPopupBottomButton
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupBottomButton (const MethodInfo* method);
// 0x3ef0010

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupBottomButton
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b5e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddPopupBottomBut);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b5e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__AddPopupButtons
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupButtons (const MethodInfo* method);
// 0x3ef0160

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__AddPopupButtons
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b5f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddPopupButtons_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b5f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__WrapStyleTag
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__WrapStyleTag (const MethodInfo* method);
// 0x3ef02b0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__WrapStyleTag(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b60 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__WrapStyleTag_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b60 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ShowChangeCharacterMenu
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ShowChangeCharacterMenu (const MethodInfo* method);
// 0x3ef0400

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ShowChangeCharacterMenu
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b61 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ShowChangeCharact);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b61 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetScoreboardHeader
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetScoreboardHeader (const MethodInfo* method);
// 0x3ef0550

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetScoreboardHeader
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b62 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetScoreboardHead);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b62 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_glue(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetScoreboardProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetScoreboardProperty (const MethodInfo* method);
// 0x3ef06a0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetScoreboardProperty
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b63 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetScoreboardProp);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b63 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_glue(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__GetThemeColor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__GetThemeColor (const MethodInfo* method);
// 0x3ef07f0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__GetThemeColor(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b64 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetThemeColor_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b64 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x88) = function;
    il2cpp_runtime_glue(lVar2 + 0x88,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__IsPopupActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__IsPopupActive (const MethodInfo* method);
// 0x3ef0940

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__IsPopupActive(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b65 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsPopupActive_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b65 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x90) = function;
    il2cpp_runtime_glue(lVar2 + 0x90,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelActive (const MethodInfo* method);
// 0x3ef0a90

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetLabelActive(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b66 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetLabelActive_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b66 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x98) = function;
    il2cpp_runtime_glue(lVar2 + 0x98,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetKDRPanelActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetKDRPanelActive (const MethodInfo* method);
// 0x3ef0be0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetKDRPanelActive
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b67 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetKDRPanelActive);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b67 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = function;
    il2cpp_runtime_glue(lVar2 + 0xa0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetMinimapActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetMinimapActive (const MethodInfo* method);
// 0x3ef0d30

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetMinimapActive
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b68 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetMinimapActive);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b68 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = function;
    il2cpp_runtime_glue(lVar2 + 0xa8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetChatPanelActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetChatPanelActive (const MethodInfo* method);
// 0x3ef0e80

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetChatPanelActive
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b69 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetChatPanelActiv);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b69 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xb0) = function;
    il2cpp_runtime_glue(lVar2 + 0xb0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetFeedPanelActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetFeedPanelActive (const MethodInfo* method);
// 0x3ef0fd0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetFeedPanelActive
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b6a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetFeedPanelActiv);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b6a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xb8) = function;
    il2cpp_runtime_glue(lVar2 + 0xb8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetBottomHUDActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetBottomHUDActive (const MethodInfo* method);
// 0x3ef1120

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SetBottomHUDActive
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b6b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetBottomHUDActiv);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b6b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xc0) = function;
    il2cpp_runtime_glue(lVar2 + 0xc0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__GetRootVisualElement
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__GetRootVisualElement (const MethodInfo* method);
// 0x3ef1270

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__GetRootVisualElement
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b6c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetRootVisualElem);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b6c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 200) = function;
    il2cpp_runtime_glue(lVar2 + 200,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__VisualElement
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__VisualElement (const MethodInfo* method);
// 0x3ef13c0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__VisualElement(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b6d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__VisualElement_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b6d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xd0) = function;
    il2cpp_runtime_glue(lVar2 + 0xd0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Button
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Button (const MethodInfo* method);
// 0x3ef1510

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Button(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b6e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Button_b__30_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b6e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xd8) = function;
    il2cpp_runtime_glue(lVar2 + 0xd8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Label
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Label (const MethodInfo* method);
// 0x3ef1660

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Label(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b6f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Label_b__31_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b6f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xe0) = function;
    il2cpp_runtime_glue(lVar2 + 0xe0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__TextField
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__TextField (const MethodInfo* method);
// 0x3ef17b0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__TextField(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b70 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TextField_b__32_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b70 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xe8) = function;
    il2cpp_runtime_glue(lVar2 + 0xe8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Toggle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Toggle (const MethodInfo* method);
// 0x3ef1900

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Toggle(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b71 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Toggle_b__33_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b71 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xf0) = function;
    il2cpp_runtime_glue(lVar2 + 0xf0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Slider
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Slider (const MethodInfo* method);
// 0x3ef1a50

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Slider(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Slider_b__34_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b72 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xf8) = function;
    il2cpp_runtime_glue(lVar2 + 0xf8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SliderInt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SliderInt (const MethodInfo* method);
// 0x3ef1ba0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__SliderInt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b73 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SliderInt_b__35_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b73 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x100) = function;
    il2cpp_runtime_glue(lVar2 + 0x100,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Dropdown
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Dropdown (const MethodInfo* method);
// 0x3ef1cf0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Dropdown(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b74 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Dropdown_b__36_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b74 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x108) = function;
    il2cpp_runtime_glue(lVar2 + 0x108,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ProgressBar
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ProgressBar (const MethodInfo* method);
// 0x3ef1e40

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ProgressBar(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b75 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ProgressBar_b__37);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b75 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x110) = function;
    il2cpp_runtime_glue(lVar2 + 0x110,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ScrollView
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ScrollView (const MethodInfo* method);
// 0x3ef1f90

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__ScrollView(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b76 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ScrollView_b__38);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b76 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x118) = function;
    il2cpp_runtime_glue(lVar2 + 0x118,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Icon
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Icon (const MethodInfo* method);
// 0x3ef20e0

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Icon(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b77 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Icon_b__39_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b77 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x120) = function;
    il2cpp_runtime_glue(lVar2 + 0x120,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Image
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o* CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Image (const MethodInfo* method);
// 0x3ef2230

CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *
CustomLogic_CustomLogicUIBuiltin_Bindings____CreateMethodBinding__Image(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *__this;
  
  if (DAT_05703b78 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Image_b__40_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b78 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUIBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x128) = function;
    il2cpp_runtime_glue(lVar2 + 0x128,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicUIBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicUIBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicUIBuiltin);
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicUIBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3ef2380

void CustomLogic_CustomLogicUIBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703b79 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"SetLabelActive");
    il2cpp_init_method_metadata(&"SetScoreboardHeader");
    il2cpp_init_method_metadata(&"ClearPopup");
    il2cpp_init_method_metadata(&"ProgressBar");
    il2cpp_init_method_metadata(&"ForceHideNames");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"GetRootVisualElement");
    il2cpp_init_method_metadata(&"ShowChangeCharacterMenu");
    il2cpp_init_method_metadata(&"SetLabelForTime");
    il2cpp_init_method_metadata(&"CreatePopup");
    il2cpp_init_method_metadata(&"SetScoreboardProperty");
    il2cpp_init_method_metadata(&"AddPopupButton");
    il2cpp_init_method_metadata(&"WrapStyleTag");
    il2cpp_init_method_metadata(&"Button");
    il2cpp_init_method_metadata(&"AddPopupBottomButton");
    il2cpp_init_method_metadata(&"SetMinimapActive");
    il2cpp_init_method_metadata(&"GetThemeColor");
    il2cpp_init_method_metadata(&"GetPopups");
    il2cpp_init_method_metadata(&"Slider");
    il2cpp_init_method_metadata(&"SetChatPanelActive");
    il2cpp_init_method_metadata(&"Icon");
    il2cpp_init_method_metadata(&"HidePopup");
    il2cpp_init_method_metadata(&"SliderInt");
    il2cpp_init_method_metadata(&"SetLabelAll");
    il2cpp_init_method_metadata(&"SetLabel");
    il2cpp_init_method_metadata(&"SetBottomHUDActive");
    il2cpp_init_method_metadata(&"ShowPopup");
    il2cpp_init_method_metadata(&"SetKDRPanelActive");
    il2cpp_init_method_metadata(&"AddPopupLabel");
    il2cpp_init_method_metadata(&"Dropdown");
    il2cpp_init_method_metadata(&"ScrollView");
    il2cpp_init_method_metadata(&"IsPopupActive");
    il2cpp_init_method_metadata(&"TextField");
    il2cpp_init_method_metadata(&"Image");
    il2cpp_init_method_metadata(&"SetLabelForTimeAll");
    il2cpp_init_method_metadata(&"Toggle");
    il2cpp_init_method_metadata(&"SetFeedPanelActive");
    il2cpp_init_method_metadata(&"AddPopupButtons");
    il2cpp_init_method_metadata(&"VisualElement");
    DAT_05703b79 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"ForceHideNames",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetPopups",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetLabel",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetLabelForTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetLabelAll",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetLabelForTimeAll",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CreatePopup",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShowPopup",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HidePopup",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ClearPopup",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AddPopupLabel",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AddPopupButton",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AddPopupBottomButton",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AddPopupButtons",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"WrapStyleTag",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShowChangeCharacterMenu",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetScoreboardHeader",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetScoreboardProperty",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetThemeColor",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsPopupActive",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetLabelActive",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetKDRPanelActive",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetMinimapActive",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetChatPanelActive",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetFeedPanelActive",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetBottomHUDActive",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetRootVisualElement",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"VisualElement",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Button",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Label",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextField",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Toggle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Slider",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SliderInt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Dropdown",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ProgressBar",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ScrollView",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Icon",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Image",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__ForceHideNames>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__ForceHideNames_g____getter_2_0 (CustomLogic_CustomLogicUIBuiltin_o* __i, const MethodInfo* method);
// 0x3ef2940

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings__<__CreatePropertyBinding__ForceHideNames>g____getter_2_0
          (CustomLogic_CustomLogicUIBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  undefined1 local_9;
  
  if (DAT_05703b7a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b7a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703c47 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703c47 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  local_9 = *(undefined1 *)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 0x10);
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
  return pIVar2;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__ForceHideNames>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__ForceHideNames_g____setter_2_1 (CustomLogic_CustomLogicUIBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ef2a00

void CustomLogic_CustomLogicUIBuiltin_Bindings__<__CreatePropertyBinding__ForceHideNames>g____setter_2_1
               (CustomLogic_CustomLogicUIBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  
  if (DAT_05703b7b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b7b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703c48 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703c48 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  *(char *)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 0x10) = (char)bVar2;
  return;
}


// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__GetPopups>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUIBuiltin_Bindings_____CreatePropertyBinding__GetPopups_g____getter_3_0 (CustomLogic_CustomLogicUIBuiltin_o* __i, const MethodInfo* method);
// 0x3ef2ae0

Il2CppObject *
CustomLogic_CustomLogicUIBuiltin_Bindings__<__CreatePropertyBinding__GetPopups>g____getter_3_0
          (CustomLogic_CustomLogicUIBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicListBuiltin_o *pCVar2;
  MethodInfo *method_00;
  
  if (DAT_05703b7c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b7c = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicUIBuiltin[2].parameters + 4);
    method_00 = TypeInfo_CustomLogicUIBuiltin;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicUIBuiltin[2].parameters + 4);
    method_00 = TypeInfo_CustomLogicUIBuiltin;
  }
  TypeInfo_CustomLogicUIBuiltin = method_00;
  if (iVar1 != 0) {
    pCVar2 = CustomLogic_CustomLogicUIBuiltin__get_GetPopups(method_00);
    return (Il2CppObject *)pCVar2;
  }
  il2cpp_init_class();
  pCVar2 = CustomLogic_CustomLogicUIBuiltin__get_GetPopups(method_00);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicUIBuiltin$$get_Menu
// il2cpp: UI_InGameMenu_o* CustomLogic_CustomLogicUIBuiltin__get_Menu (const MethodInfo* method);
// 0x3eea950

UI_InGameMenu_o * CustomLogic_CustomLogicUIBuiltin__get_Menu(MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *pUVar3;
  
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    pUVar3 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    pUVar3 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (pUVar3 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((pUVar3->klass->_2).naturalAligment < bVar1) ||
       ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar3);
    }
  }
  return pUVar3;
}


// CustomLogic.CustomLogicUIBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicUIBuiltin___ctor (CustomLogic_CustomLogicUIBuiltin_o* __this, const MethodInfo* method);
// 0x3eeaa00

void CustomLogic_CustomLogicUIBuiltin___ctor
               (CustomLogic_CustomLogicUIBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703b22 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703b22 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$OnPlayerJoin
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__OnPlayerJoin (CustomLogic_CustomLogicUIBuiltin_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x3eeaa70

void CustomLogic_CustomLogicUIBuiltin__OnPlayerJoin
               (CustomLogic_CustomLogicUIBuiltin_o *__this,Photon_Realtime_Player_o *player,
               MethodInfo *method)

{
  long *plVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  char cVar2;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_03;
  long lVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 uVar7;
  Il2CppMethodPointer pIVar8;
  Il2CppType *pIVar9;
  Il2CppObject *key;
  Il2CppObject *pIVar10;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_05703b23 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"SetLabelRPC");
    DAT_05703b23 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((System_Collections_Generic_Dictionary_object__object__o *)
         **(undefined8 **)(TypeInfo_CustomLogicUIBuiltin + 0xb8) ==
         (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (__this_03 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                              ((System_Collections_Generic_Dictionary_object__object__o *)
                               **(undefined8 **)(TypeInfo_CustomLogicUIBuiltin + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
       __this_03 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               local_48,__this_03,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    pIVar8 = (Il2CppMethodPointer)CONCAT44(local_48._4_4_,local_48._0_4_);
    pIVar9 = (Il2CppType *)local_48._8_8_;
    key = local_38;
    while (__this_01.fields._8_8_ = pIVar9,
          __this_01.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar8,
          __this_01.fields._currentKey = key,
          bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                            (__this_01,(MethodInfo_31D0850 *)&stack0xffffffffffffff98),
          (char)bVar3 != '\0') {
      pIVar10 = key;
      if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      plVar1 = *(long **)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 8);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((key != (Il2CppObject *)0x0) &&
         (lVar4 = il2cpp_runtime_glue(key,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0)) {
        uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar7,0);
      }
      if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      plVar1[4] = (long)key;
      il2cpp_runtime_glue(plVar1 + 4,key);
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  **(undefined8 **)(TypeInfo_CustomLogicUIBuiltin + 0xb8);
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      plVar1 = (long *)(*(undefined8 **)(TypeInfo_CustomLogicUIBuiltin + 0xb8))[1];
      pIVar5 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (__this_00,key,MethodInfo_String_get_Item);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      key = pIVar10;
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (lVar4 = il2cpp_runtime_glue(pIVar5,*(undefined8 *)(*plVar1 + 0x40)), key = pIVar10,
         lVar4 == 0)) {
        uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar7,0);
      }
      if (*(uint *)(plVar1 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      plVar1[5] = (long)pIVar5;
      il2cpp_runtime_glue(plVar1 + 5,pIVar5);
      plVar1 = *(long **)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 8);
      local_48._0_4_ = 0;
      lVar4 = il2cpp_runtime_glue(DAT_05711098,local_48);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((lVar4 != 0) &&
         (lVar6 = il2cpp_runtime_glue(lVar4,*(undefined8 *)(*plVar1 + 0x40)), lVar6 == 0)) {
        uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar7,0);
      }
      if (*(uint *)(plVar1 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      plVar1[6] = lVar4;
      il2cpp_runtime_glue(plVar1 + 6,lVar4);
      if ((Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8) ==
          (Photon_Pun_PhotonView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      Photon_Pun_PhotonView__RPC
                ((Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8),"SetLabelRPC",
                 player,*(System_Object_array **)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 8),
                 (MethodInfo *)0x0);
    }
    __this_02.fields._8_8_ = pIVar9;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar8;
    __this_02.fields._currentKey = key;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
              (__this_02,(MethodInfo_31D0840 *)&stack0xffffffffffffff98);
  }
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$ClearLabels
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__ClearLabels (const MethodInfo* method);
// 0x3eeaf00

void CustomLogic_CustomLogicUIBuiltin__ClearLabels(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (DAT_05703b24 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05703b24 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_CustomLogicUIBuiltin + 0xb8);
  }
  else {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_CustomLogicUIBuiltin + 0xb8);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(__this,MethodInfo_Void_Clear);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$get_ForceHideNames
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__get_ForceHideNames (const MethodInfo* method);
// 0x3eeaf90

bool_conflict CustomLogic_CustomLogicUIBuiltin__get_ForceHideNames(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703b25 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b25 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 0x10));
  }
  il2cpp_init_class();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 0x10));
}


// CustomLogic.CustomLogicUIBuiltin$$set_ForceHideNames
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__set_ForceHideNames (bool value, const MethodInfo* method);
// 0x3eeb000

void CustomLogic_CustomLogicUIBuiltin__set_ForceHideNames(bool_conflict value,MethodInfo *method)

{
  if (DAT_05703b26 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b26 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(char *)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 0x10) = (char)value;
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$GetForceHideNames
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__GetForceHideNames (const MethodInfo* method);
// 0x3eeb050

bool_conflict CustomLogic_CustomLogicUIBuiltin__GetForceHideNames(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703b27 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b27 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 0x10));
  }
  il2cpp_init_class();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 0x10));
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabel
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabel (System_String_o* label, System_String_o* message, const MethodInfo* method);
// 0x3eeb0c0

void CustomLogic_CustomLogicUIBuiltin__SetLabel
               (System_String_o *label,System_String_o *message,MethodInfo *method)

{
  if (DAT_05703b28 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_05703b28 = '\x01';
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_InGameManager__SetLabel(label,message,0.0,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabelForTime
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabelForTime (System_String_o* label, System_String_o* message, float time, const MethodInfo* method);
// 0x3eeb120

void CustomLogic_CustomLogicUIBuiltin__SetLabelForTime
               (System_String_o *label,System_String_o *message,float time,MethodInfo *method)

{
  if (DAT_05703b29 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_05703b29 = '\x01';
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_InGameManager__SetLabel(label,message,time,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabelAll
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabelAll (System_String_o* label, System_String_o* message, const MethodInfo* method);
// 0x3eeb190

void CustomLogic_CustomLogicUIBuiltin__SetLabelAll
               (System_String_o *label,System_String_o *message,MethodInfo *method)

{
  long *plVar1;
  char cVar2;
  bool_conflict bVar3;
  System_String_o *b;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_2c;
  
  if (DAT_05703b2a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"SetLabelRPC");
    DAT_05703b2a = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_03eeb489;
LAB_03eeb1c7:
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_03eeb1c7;
LAB_03eeb489:
    il2cpp_init_class();
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)
      **(undefined8 **)(TypeInfo_CustomLogicUIBuiltin + 0xb8) ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eeb4ab;
  bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_CustomLogicUIBuiltin + 0xb8),(Il2CppObject *)label,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar3 == '\0') {
LAB_03eeb26c:
    if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
      il2cpp_init_class();
    }
    plVar1 = *(long **)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 8);
    if (plVar1 == (long *)0x0) goto LAB_03eeb4ab;
    if ((label != (System_String_o *)0x0) &&
       (lVar4 = il2cpp_runtime_glue(label,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0)) {
LAB_03eeb4b5:
      uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar6,0);
    }
    if ((int)plVar1[3] == 0) {
LAB_03eeb4b0:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar1[4] = (long)label;
    il2cpp_runtime_glue(plVar1 + 4,label);
    plVar1 = *(long **)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 8);
    if (plVar1 == (long *)0x0) goto LAB_03eeb4ab;
    if ((message != (System_String_o *)0x0) &&
       (lVar4 = il2cpp_runtime_glue(message,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
    goto LAB_03eeb4b5;
    if (*(uint *)(plVar1 + 3) < 2) goto LAB_03eeb4b0;
    plVar1[5] = (long)message;
    il2cpp_runtime_glue(plVar1 + 5,message);
    plVar1 = *(long **)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 8);
    local_2c = 0;
    lVar4 = il2cpp_runtime_glue(DAT_05711098,&local_2c);
    if (plVar1 == (long *)0x0) goto LAB_03eeb4ab;
    if ((lVar4 != 0) &&
       (lVar5 = il2cpp_runtime_glue(lVar4,*(undefined8 *)(*plVar1 + 0x40)), lVar5 == 0))
    goto LAB_03eeb4b5;
    if (*(uint *)(plVar1 + 3) < 3) goto LAB_03eeb4b0;
    plVar1[6] = lVar4;
    il2cpp_runtime_glue(plVar1 + 6,lVar4);
    if ((Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8) ==
        (Photon_Pun_PhotonView_o *)0x0) goto LAB_03eeb4ab;
    Photon_Pun_PhotonView__RPC
              ((Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8),"SetLabelRPC",0,
               *(System_Object_array **)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 8),(MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)
        **(undefined8 **)(TypeInfo_CustomLogicUIBuiltin + 0xb8) ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03eeb4ab;
    b = (System_String_o *)
        System_Collections_Generic_Dictionary<object__object>__get_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)
                   **(undefined8 **)(TypeInfo_CustomLogicUIBuiltin + 0xb8),(Il2CppObject *)label,MethodInfo_String_get_Item);
    bVar3 = System_String__op_Inequality(message,b,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') goto LAB_03eeb26c;
  }
  if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)
      **(undefined8 **)(TypeInfo_CustomLogicUIBuiltin + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              ((System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_CustomLogicUIBuiltin + 0xb8),(Il2CppObject *)label,(Il2CppObject *)message,
               MethodInfo_Void_set_Item);
    return;
  }
LAB_03eeb4ab:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabelForTimeAll
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabelForTimeAll (System_String_o* label, System_String_o* message, float time, const MethodInfo* method);
// 0x3eeb4d0

void CustomLogic_CustomLogicUIBuiltin__SetLabelForTimeAll
               (System_String_o *label,System_String_o *message,float time,MethodInfo *method)

{
  long *plVar1;
  char cVar2;
  bool_conflict bVar3;
  undefined8 in_RAX;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_28;
  
  local_28 = CONCAT44((int)((ulong)in_RAX >> 0x20),time);
  if (DAT_05703b2b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"SetLabelRPC");
    DAT_05703b2b = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_03eeb6d8;
LAB_03eeb507:
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_03eeb507;
LAB_03eeb6d8:
    il2cpp_init_class();
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 8);
  if (plVar1 != (long *)0x0) {
    if ((label != (System_String_o *)0x0) &&
       (lVar4 = il2cpp_runtime_glue(label,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0)) {
LAB_03eeb702:
      uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar6,0);
    }
    if ((int)plVar1[3] == 0) {
LAB_03eeb6fd:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar1[4] = (long)label;
    il2cpp_runtime_glue(plVar1 + 4,label);
    plVar1 = *(long **)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 8);
    if (plVar1 != (long *)0x0) {
      if ((message != (System_String_o *)0x0) &&
         (lVar4 = il2cpp_runtime_glue(message,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
      goto LAB_03eeb702;
      if (*(uint *)(plVar1 + 3) < 2) goto LAB_03eeb6fd;
      plVar1[5] = (long)message;
      il2cpp_runtime_glue(plVar1 + 5,message);
      plVar1 = *(long **)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 8);
      local_28 = CONCAT44((undefined4)local_28,(undefined4)local_28);
      lVar4 = il2cpp_runtime_glue(DAT_05711098,(long)&local_28 + 4);
      if (plVar1 != (long *)0x0) {
        if ((lVar4 != 0) &&
           (lVar5 = il2cpp_runtime_glue(lVar4,*(undefined8 *)(*plVar1 + 0x40)), lVar5 == 0))
        goto LAB_03eeb702;
        if (*(uint *)(plVar1 + 3) < 3) goto LAB_03eeb6fd;
        plVar1[6] = lVar4;
        il2cpp_runtime_glue(plVar1 + 6,lVar4);
        if ((Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8) !=
            (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC
                    ((Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8),"SetLabelRPC",
                     0,*(System_Object_array **)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 8),
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$CreatePopup
// il2cpp: System_String_o* CustomLogic_CustomLogicUIBuiltin__CreatePopup (System_String_o* popupName, System_String_o* title, int32_t width, int32_t height, const MethodInfo* method);
// 0x3eeb720

System_String_o *
CustomLogic_CustomLogicUIBuiltin__CreatePopup
          (System_String_o *popupName,System_String_o *title,int32_t width,int32_t height,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this;
  
  if (DAT_05703b2c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b2c = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this == (UI_InGameMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
  if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
    UI_InGameMenu__CreateCustomPopup
              (__this,popupName,title,(float)width,(float)height,(MethodInfo *)0x0);
    return popupName;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume();
}


// CustomLogic.CustomLogicUIBuiltin$$ShowPopup
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__ShowPopup (System_String_o* popupName, const MethodInfo* method);
// 0x3eeb880

/* WARNING: Type propagation algorithm not settling */

void CustomLogic_CustomLogicUIBuiltin__ShowPopup(System_String_o *popupName,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this;
  Il2CppMethodPointer vtable_dispatch;
  UI_CustomPopup_o *pUVar3;
  
  if (DAT_05703b2d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b2d = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((__this->klass->_2).naturalAligment < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    pUVar3 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (pUVar3 != (UI_CustomPopup_o *)0x0) {
      vtable_dispatch = (pUVar3->klass->vtable)._21_Show.methodPtr;
      (*vtable_dispatch)(pUVar3,(pUVar3->klass->vtable)._21_Show.method,vtable_dispatch)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$HidePopup
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__HidePopup (System_String_o* popupName, const MethodInfo* method);
// 0x3eeb9c0

/* WARNING: Type propagation algorithm not settling */

void CustomLogic_CustomLogicUIBuiltin__HidePopup(System_String_o *popupName,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this;
  Il2CppMethodPointer vtable_dispatch;
  UI_CustomPopup_o *pUVar3;
  
  if (DAT_05703b2e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b2e = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((__this->klass->_2).naturalAligment < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    pUVar3 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (pUVar3 != (UI_CustomPopup_o *)0x0) {
      vtable_dispatch = (pUVar3->klass->vtable)._22_Hide.methodPtr;
      (*vtable_dispatch)(pUVar3,(pUVar3->klass->vtable)._22_Hide.method,vtable_dispatch)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$ClearPopup
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__ClearPopup (System_String_o* popupName, const MethodInfo* method);
// 0x3eebb00

/* WARNING: Type propagation algorithm not settling */

void CustomLogic_CustomLogicUIBuiltin__ClearPopup(System_String_o *popupName,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *__this_00;
  
  if (DAT_05703b2f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b2f = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((__this->klass->_2).naturalAligment < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    __this_00 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (__this_00 != (UI_CustomPopup_o *)0x0) {
      UI_CustomPopup__Clear(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$AddPopupLabel
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__AddPopupLabel (System_String_o* popupName, System_String_o* label, const MethodInfo* method);
// 0x3eebc30

/* WARNING: Type propagation algorithm not settling */

void CustomLogic_CustomLogicUIBuiltin__AddPopupLabel
               (System_String_o *popupName,System_String_o *label,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *__this_00;
  
  if (DAT_05703b30 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b30 = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((__this->klass->_2).naturalAligment < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    __this_00 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (__this_00 != (UI_CustomPopup_o *)0x0) {
      UI_CustomPopup__AddLabel(__this_00,label,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$AddPopupButton
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__AddPopupButton (System_String_o* popupName, System_String_o* label, System_String_o* callback, const MethodInfo* method);
// 0x3eebd60

/* WARNING: Type propagation algorithm not settling */

void CustomLogic_CustomLogicUIBuiltin__AddPopupButton
               (System_String_o *popupName,System_String_o *label,System_String_o *callback,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *__this_00;
  
  if (DAT_05703b31 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b31 = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((__this->klass->_2).naturalAligment < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    __this_00 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (__this_00 != (UI_CustomPopup_o *)0x0) {
      UI_CustomPopup__AddButton(__this_00,label,callback,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$AddPopupBottomButton
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__AddPopupBottomButton (System_String_o* popupName, System_String_o* label, System_String_o* callback, const MethodInfo* method);
// 0x3eebea0

/* WARNING: Type propagation algorithm not settling */

void CustomLogic_CustomLogicUIBuiltin__AddPopupBottomButton
               (System_String_o *popupName,System_String_o *label,System_String_o *callback,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *__this_00;
  
  if (DAT_05703b32 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b32 = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((__this->klass->_2).naturalAligment < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    __this_00 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (__this_00 != (UI_CustomPopup_o *)0x0) {
      UI_CustomPopup__AddBottomButton(__this_00,label,callback,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$AddPopupButtons
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__AddPopupButtons (System_String_o* popupName, CustomLogic_CustomLogicListBuiltin_o* labels, CustomLogic_CustomLogicListBuiltin_o* callbacks, const MethodInfo* method);
// 0x3eebfe0

/* WARNING: Type propagation algorithm not settling */

void CustomLogic_CustomLogicUIBuiltin__AddPopupButtons
               (System_String_o *popupName,CustomLogic_CustomLogicListBuiltin_o *labels,
               CustomLogic_CustomLogicListBuiltin_o *callbacks,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *__this_00;
  
  if (DAT_05703b33 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b33 = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((__this->klass->_2).naturalAligment < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    __this_00 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (((labels != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
        (callbacks != (CustomLogic_CustomLogicListBuiltin_o *)0x0)) &&
       (__this_00 != (UI_CustomPopup_o *)0x0)) {
      UI_CustomPopup__AddButtons
                (__this_00,(labels->fields).List,(callbacks->fields).List,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$WrapStyleTag
// il2cpp: System_String_o* CustomLogic_CustomLogicUIBuiltin__WrapStyleTag (System_String_o* text, System_String_o* style, System_String_o* arg, const MethodInfo* method);
// 0x3eec130

System_String_o *
CustomLogic_CustomLogicUIBuiltin__WrapStyleTag
          (System_String_o *text,System_String_o *style,System_String_o *arg,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if (DAT_05703b34 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"=");
    il2cpp_init_method_metadata(&"<");
    il2cpp_init_method_metadata(&"</");
    il2cpp_init_method_metadata(&">");
    DAT_05703b34 = '\x01';
  }
  if (arg == (System_String_o *)0x0) {
    values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,7);
    if (values == (System_String_array *)0x0) goto LAB_03eec3b1;
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "<";
      il2cpp_runtime_glue(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = style;
        il2cpp_runtime_glue(values->m_Items + 1,style);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ">";
          il2cpp_runtime_glue(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = text;
            il2cpp_runtime_glue(values->m_Items + 3,text);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = "</";
              il2cpp_runtime_glue(values->m_Items + 4);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = style;
                il2cpp_runtime_glue(values->m_Items + 5,style);
                if (6 < (uint)values->max_length) {
                  ppSVar2 = values->m_Items + 6;
                  values->m_Items[6] = ">";
LAB_03eec392:
                  il2cpp_runtime_glue(ppSVar2);
                  pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                  return pSVar1;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,9);
    if (values == (System_String_array *)0x0) {
LAB_03eec3b1:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "<";
      il2cpp_runtime_glue(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = style;
        il2cpp_runtime_glue(values->m_Items + 1,style);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = "=";
          il2cpp_runtime_glue(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = arg;
            il2cpp_runtime_glue(values->m_Items + 3,arg);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = ">";
              il2cpp_runtime_glue(values->m_Items + 4);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = text;
                il2cpp_runtime_glue(values->m_Items + 5,text);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = "</";
                  il2cpp_runtime_glue(values->m_Items + 6);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = style;
                    il2cpp_runtime_glue(values->m_Items + 7,style);
                    if (8 < (uint)values->max_length) {
                      ppSVar2 = values->m_Items + 8;
                      values->m_Items[8] = ">";
                      goto LAB_03eec392;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$ShowChangeCharacterMenu
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__ShowChangeCharacterMenu (const MethodInfo* method);
// 0x3eec3c0

void CustomLogic_CustomLogicUIBuiltin__ShowChangeCharacterMenu(MethodInfo *method)

{
  byte bVar1;
  UI_ImportPopup_o *pUVar2;
  UI_ImportPopup_c *pUVar3;
  bool_conflict bVar4;
  UI_InGameMenu_o *__this;
  
  if (DAT_05703b35 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05703b35 = '\x01';
  }
  __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this == (UI_InGameMenu_o *)0x0) goto LAB_03eec5aa;
  bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
  if (((__this->klass->_2).naturalAligment < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager)) goto LAB_03eec5b2;
  pUVar2 = (__this->fields).ImportPopup;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar4 == '\0') ||
     (pUVar2 = (__this->fields).ImportPopup, pUVar2 == (UI_ImportPopup_o *)0x0)) {
    return;
  }
  pUVar3 = pUVar2->klass;
  bVar1 = (TypeInfo_Human->_2).naturalAligment;
  if ((pUVar3->_2).naturalAligment < bVar1) {
    return;
  }
  if ((pUVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05703b21 != '\0') goto LAB_03eec4e3;
LAB_03eec558:
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto LAB_03eec4fa;
LAB_03eec58e:
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    if (DAT_05703b21 == '\0') goto LAB_03eec558;
LAB_03eec4e3:
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto LAB_03eec58e;
LAB_03eec4fa:
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__ShowCharacterChangeMenu(__this,(MethodInfo *)0x0);
      return;
    }
LAB_03eec5b2:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(__this);
  }
LAB_03eec5aa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$SetScoreboardHeader
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetScoreboardHeader (System_String_o* header, const MethodInfo* method);
// 0x3eec5c0

void CustomLogic_CustomLogicUIBuiltin__SetScoreboardHeader
               (System_String_o *header,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05703b36 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703b36 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    *(System_String_o **)(lVar2 + 0x70) = header;
    il2cpp_runtime_glue(lVar2 + 0x70,header);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$SetScoreboardProperty
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetScoreboardProperty (System_String_o* property, const MethodInfo* method);
// 0x3eec650

void CustomLogic_CustomLogicUIBuiltin__SetScoreboardProperty
               (System_String_o *property,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  
  if (DAT_05703b37 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&"CL:");
    DAT_05703b37 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar2 = System_String__Concat("CL:",property,(MethodInfo *)0x0);
  if (lVar1 != 0) {
    *(System_String_o **)(lVar1 + 0x78) = pSVar2;
    il2cpp_runtime_glue(lVar1 + 0x78,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$GetThemeColor
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicUIBuiltin__GetThemeColor (System_String_o* panel, System_String_o* category, System_String_o* item, const MethodInfo* method);
// 0x3eec6e0

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__GetThemeColor
          (System_String_o *panel,System_String_o *category,System_String_o *item,MethodInfo *method
          )

{
  Utility_Color255_o *__this;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  UnityEngine_Color_o color;
  
  if (DAT_05703b38 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    DAT_05703b38 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  color = UI_UIManager__GetThemeColor(panel,category,item,"DefaultPanel",(MethodInfo *)0x0);
  __this = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(__this,color,(MethodInfo *)0x0);
  __this_00 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
  CustomLogic_CustomLogicColorBuiltin___ctor(__this_00,__this,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin$$IsPopupActive
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__IsPopupActive (System_String_o* popupName, const MethodInfo* method);
// 0x3eec7c0

/* WARNING: Type propagation algorithm not settling */

bool_conflict
CustomLogic_CustomLogicUIBuiltin__IsPopupActive(System_String_o *popupName,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this;
  UI_CustomPopup_o *pUVar3;
  
  if (DAT_05703b39 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b39 = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((__this->klass->_2).naturalAligment < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    pUVar3 = UI_InGameMenu__GetCustomPopup(__this,popupName,(MethodInfo *)0x0);
    if (pUVar3 != (UI_CustomPopup_o *)0x0) {
      return (bool_conflict)CONCAT71((int7)((ulong)pUVar3 >> 8),(char)(pUVar3->fields).IsActive);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$get_GetPopups
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicUIBuiltin__get_GetPopups (const MethodInfo* method);
// 0x3eec8f0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__get_GetPopups(MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  UI_InGameMenu_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  long lVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicListBuiltin_o *__this_04;
  System_Collections_Generic_List_string__o *__this_05;
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  Il2CppObject *item;
  
  if (DAT_05703b3a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    DAT_05703b3a = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  item = (Il2CppObject *)0x0;
  __this_04 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_04,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar3 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar3 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((__this->klass->_2).naturalAligment < bVar2) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    __this_05 = UI_InGameMenu__GetAllCustomPopups(__this,(MethodInfo *)0x0);
    if (__this_05 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
      if (__this_04 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        __this_02.fields._8_8_ = pIVar9;
        __this_02.fields._list = pSVar8;
        __this_02.fields._current = item;
        bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
        if ((char)bVar7 != '\0') {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        while (__this_01.fields._8_8_ = pIVar9, __this_01.fields._list = pSVar8,
              __this_01.fields._current = item,
              bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8),
              lVar6 = MethodInfo_Void_Add, (char)bVar7 != '\0') {
          __this_00 = (__this_04->fields).List;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_00->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar4 = (__this_00->fields)._size;
          if (uVar4 < (uint)pSVar5->max_length) {
            (__this_00->fields)._size = uVar4 + 1;
            pSVar5->m_Items[(int)uVar4] = item;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar4);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_03.fields._8_8_ = pIVar9;
      __this_03.fields._list = pSVar8;
      __this_03.fields._current = item;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
      return __this_04;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$SetLabelActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetLabelActive (System_String_o* label, bool active, const MethodInfo* method);
// 0x3eecbf0

void CustomLogic_CustomLogicUIBuiltin__SetLabelActive
               (System_String_o *label,bool_conflict active,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this;
  
  if (DAT_05703b3b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b3b = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this == (UI_InGameMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
  if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
    UI_InGameMenu__SetLabelActive(__this,label,active & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume();
}


// CustomLogic.CustomLogicUIBuiltin$$SetKDRPanelActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetKDRPanelActive (bool active, const MethodInfo* method);
// 0x3eecd40

void CustomLogic_CustomLogicUIBuiltin__SetKDRPanelActive(bool_conflict active,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this;
  
  if (DAT_05703b3c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b3c = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this == (UI_InGameMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
  if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
    UI_InGameMenu__SetKDRPanelActive(__this,active & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume();
}


// CustomLogic.CustomLogicUIBuiltin$$SetMinimapActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetMinimapActive (bool active, const MethodInfo* method);
// 0x3eece80

void CustomLogic_CustomLogicUIBuiltin__SetMinimapActive(bool_conflict active,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this;
  
  if (DAT_05703b3d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b3d = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this == (UI_InGameMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
  if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
    UI_InGameMenu__SetMinimapActive(__this,active & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume();
}


// CustomLogic.CustomLogicUIBuiltin$$SetChatPanelActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetChatPanelActive (bool active, const MethodInfo* method);
// 0x3eecfc0

void CustomLogic_CustomLogicUIBuiltin__SetChatPanelActive(bool_conflict active,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this;
  
  if (DAT_05703b3e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b3e = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this == (UI_InGameMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
  if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
    UI_InGameMenu__SetChatPanelActive(__this,active & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume();
}


// CustomLogic.CustomLogicUIBuiltin$$SetFeedPanelActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetFeedPanelActive (bool active, const MethodInfo* method);
// 0x3eed100

void CustomLogic_CustomLogicUIBuiltin__SetFeedPanelActive(bool_conflict active,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this;
  
  if (DAT_05703b3f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b3f = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this == (UI_InGameMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
  if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
    UI_InGameMenu__SetFeedPanelActive(__this,active & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume();
}


// CustomLogic.CustomLogicUIBuiltin$$SetBottomHUDActive
// il2cpp: void CustomLogic_CustomLogicUIBuiltin__SetBottomHUDActive (bool active, const MethodInfo* method);
// 0x3eed240

void CustomLogic_CustomLogicUIBuiltin__SetBottomHUDActive(bool_conflict active,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this;
  
  if (DAT_05703b40 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    DAT_05703b40 = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this == (UI_InGameMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
  if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
    UI_InGameMenu__SetBottomHUDActive(__this,active & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume();
}


// CustomLogic.CustomLogicUIBuiltin$$GetRootVisualElement
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicUIBuiltin__GetRootVisualElement (const MethodInfo* method);
// 0x3eed380

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__GetRootVisualElement(MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  undefined1 auVar3 [16];
  
  if (DAT_05703b41 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVisualElementBuiltin);
    DAT_05703b41 = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703b21 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this == (UI_InGameMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
  if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
    visualElement = UI_InGameMenu__get_RootVisualElement(__this,(MethodInfo *)0x0);
    auVar3 = il2cpp_runtime_glue(TypeInfo_CustomLogicVisualElementBuiltin);
    CustomLogic_CustomLogicVisualElementBuiltin___ctor(auVar3._0_8_,visualElement,auVar3._8_8_);
    return auVar3._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume();
}


// CustomLogic.CustomLogicUIBuiltin$$VisualElement
// il2cpp: CustomLogic_CustomLogicVisualElementBuiltin_o* CustomLogic_CustomLogicUIBuiltin__VisualElement (const MethodInfo* method);
// 0x3eed4f0

CustomLogic_CustomLogicVisualElementBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__VisualElement(MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o *__this;
  undefined1 auVar1 [16];
  
  if (DAT_05703b42 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVisualElementBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_VisualElement);
    DAT_05703b42 = '\x01';
  }
  __this = (UnityEngine_UIElements_VisualElement_o *)il2cpp_runtime_glue(TypeInfo_VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(__this,(MethodInfo *)0x0);
  auVar1 = il2cpp_runtime_glue(TypeInfo_CustomLogicVisualElementBuiltin);
  CustomLogic_CustomLogicVisualElementBuiltin___ctor(auVar1._0_8_,__this,auVar1._8_8_);
  return auVar1._0_8_;
}


// CustomLogic.CustomLogicUIBuiltin$$Button
// il2cpp: CustomLogic_CustomLogicButtonBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Button (System_String_o* text, CustomLogic_UserMethod_o* clickEvent, const MethodInfo* method);
// 0x3eed560

CustomLogic_CustomLogicButtonBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Button
          (System_String_o *text,CustomLogic_UserMethod_o *clickEvent,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *__this;
  CustomLogic_CustomLogicButtonBuiltin_o *__this_00;
  undefined1 auVar1 [16];
  
  if (DAT_05703b43 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Button);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicButtonBuiltin);
    DAT_05703b43 = '\x01';
  }
  __this = (UnityEngine_UIElements_Button_o *)il2cpp_runtime_glue(TypeInfo_Button);
  UnityEngine_UIElements_Button___ctor(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_UIElements_Button_o *)0x0) {
    (*(__this->klass->vtable)._167_set_text.methodPtr)
              (__this,text,(__this->klass->vtable)._167_set_text.method);
    auVar1 = il2cpp_runtime_glue(TypeInfo_CustomLogicButtonBuiltin);
    __this_00 = auVar1._0_8_;
    CustomLogic_CustomLogicButtonBuiltin___ctor(__this_00,__this,auVar1._8_8_);
    if (__this_00 != (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) {
      (__this_00->fields)._clickEvent = clickEvent;
      il2cpp_runtime_glue(&(__this_00->fields)._clickEvent,clickEvent);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$Label
// il2cpp: CustomLogic_CustomLogicLabelBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Label (System_String_o* text, const MethodInfo* method);
// 0x3eed620

CustomLogic_CustomLogicLabelBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Label(System_String_o *text,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *__this;
  CustomLogic_CustomLogicLabelBuiltin_o *__this_00;
  undefined1 auVar1 [16];
  
  if (DAT_05703b44 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLabelBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Label);
    DAT_05703b44 = '\x01';
  }
  __this = (UnityEngine_UIElements_Label_o *)il2cpp_runtime_glue(TypeInfo_Label);
  UnityEngine_UIElements_Label___ctor(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_UIElements_Label_o *)0x0) {
    (*(__this->klass->vtable)._167_set_text.methodPtr)
              (__this,text,(__this->klass->vtable)._167_set_text.method);
    auVar1 = il2cpp_runtime_glue(TypeInfo_CustomLogicLabelBuiltin);
    __this_00 = auVar1._0_8_;
    CustomLogic_CustomLogicVisualElementBuiltin___ctor
              ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
               (UnityEngine_UIElements_VisualElement_o *)__this,auVar1._8_8_);
    (__this_00->fields)._label = __this;
    il2cpp_runtime_glue(&(__this_00->fields)._label,__this);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$TextField
// il2cpp: CustomLogic_CustomLogicTextFieldBuiltin_o* CustomLogic_CustomLogicUIBuiltin__TextField (System_String_o* label, const MethodInfo* method);
// 0x3eed6d0

CustomLogic_CustomLogicTextFieldBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__TextField(System_String_o *label,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this;
  CustomLogic_CustomLogicTextFieldBuiltin_o *__this_00;
  undefined1 auVar1 [16];
  
  if (DAT_05703b45 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTextFieldBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_TextField);
    DAT_05703b45 = '\x01';
  }
  __this = (UnityEngine_UIElements_TextField_o *)il2cpp_runtime_glue(TypeInfo_TextField);
  UnityEngine_UIElements_TextField___ctor(__this,label,(MethodInfo *)0x0);
  auVar1 = il2cpp_runtime_glue(TypeInfo_CustomLogicTextFieldBuiltin);
  __this_00 = auVar1._0_8_;
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
             (UnityEngine_UIElements_VisualElement_o *)__this,auVar1._8_8_);
  (__this_00->fields)._textField = __this;
  il2cpp_runtime_glue(&(__this_00->fields)._textField,__this);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin$$Toggle
// il2cpp: CustomLogic_CustomLogicToggleBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Toggle (System_String_o* label, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x3eed760

CustomLogic_CustomLogicToggleBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Toggle
          (System_String_o *label,CustomLogic_UserMethod_o *valueChangedEvent,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this;
  CustomLogic_CustomLogicToggleBuiltin_o *__this_00;
  undefined1 auVar1 [16];
  
  if (DAT_05703b46 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicToggleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Toggle);
    DAT_05703b46 = '\x01';
  }
  __this = (UnityEngine_UIElements_Toggle_o *)il2cpp_runtime_glue(TypeInfo_Toggle);
  UnityEngine_UIElements_Toggle___ctor(__this,label,(MethodInfo *)0x0);
  auVar1 = il2cpp_runtime_glue(TypeInfo_CustomLogicToggleBuiltin);
  __this_00 = auVar1._0_8_;
  CustomLogic_CustomLogicToggleBuiltin___ctor(__this_00,__this,auVar1._8_8_);
  if (__this_00 != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) {
    (__this_00->fields)._valueChangedEvent = valueChangedEvent;
    il2cpp_runtime_glue(&(__this_00->fields)._valueChangedEvent,valueChangedEvent);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$Slider
// il2cpp: CustomLogic_CustomLogicSliderBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Slider (float lowValue, float highValue, float tickInterval, System_String_o* label, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x3eed800

CustomLogic_CustomLogicSliderBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Slider
          (float lowValue,float highValue,float tickInterval,System_String_o *label,
          CustomLogic_UserMethod_o *valueChangedEvent,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *__this;
  CustomLogic_CustomLogicSliderBuiltin_o *__this_00;
  undefined1 auVar1 [16];
  
  if (DAT_05703b47 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Slider);
    DAT_05703b47 = '\x01';
  }
  __this = (UnityEngine_UIElements_Slider_o *)il2cpp_runtime_glue(TypeInfo_Slider);
  UnityEngine_UIElements_Slider___ctor(__this,label,lowValue,highValue,0,0.0,(MethodInfo *)0x0);
  if (0.0 < tickInterval) {
    if (__this == (UnityEngine_UIElements_Slider_o *)0x0) goto LAB_03eed8e7;
    (*(__this->klass->vtable)._121_set_pageSize.methodPtr)
              (__this,(__this->klass->vtable)._121_set_pageSize.method);
  }
  auVar1 = il2cpp_runtime_glue(TypeInfo_CustomLogicSliderBuiltin);
  __this_00 = auVar1._0_8_;
  CustomLogic_CustomLogicSliderBuiltin___ctor(__this_00,__this,auVar1._8_8_);
  if (__this_00 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    (__this_00->fields)._valueChangedEvent = valueChangedEvent;
    il2cpp_runtime_glue(&(__this_00->fields)._valueChangedEvent,valueChangedEvent);
    return __this_00;
  }
LAB_03eed8e7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$SliderInt
// il2cpp: CustomLogic_CustomLogicSliderBuiltin_o* CustomLogic_CustomLogicUIBuiltin__SliderInt (int32_t lowValue, int32_t highValue, int32_t tickInterval, System_String_o* label, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x3eed8f0

CustomLogic_CustomLogicSliderBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__SliderInt
          (int32_t lowValue,int32_t highValue,int32_t tickInterval,System_String_o *label,
          CustomLogic_UserMethod_o *valueChangedEvent,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *__this;
  CustomLogic_CustomLogicSliderBuiltin_o *__this_00;
  undefined1 auVar1 [16];
  
  if (DAT_05703b48 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_SliderInt);
    DAT_05703b48 = '\x01';
  }
  __this = (UnityEngine_UIElements_SliderInt_o *)il2cpp_runtime_glue(TypeInfo_SliderInt);
  UnityEngine_UIElements_SliderInt___ctor(__this,label,lowValue,highValue,0,0.0,(MethodInfo *)0x0);
  if (1 < tickInterval) {
    if (__this == (UnityEngine_UIElements_SliderInt_o *)0x0) goto LAB_03eed9c8;
    (*(__this->klass->vtable)._121_set_pageSize.methodPtr)
              ((float)tickInterval,__this,(__this->klass->vtable)._121_set_pageSize.method);
  }
  auVar1 = il2cpp_runtime_glue(TypeInfo_CustomLogicSliderBuiltin);
  __this_00 = auVar1._0_8_;
  CustomLogic_CustomLogicSliderBuiltin___ctor(__this_00,__this,auVar1._8_8_);
  if (__this_00 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    (__this_00->fields)._valueChangedEvent = valueChangedEvent;
    il2cpp_runtime_glue(&(__this_00->fields)._valueChangedEvent,valueChangedEvent);
    return __this_00;
  }
LAB_03eed9c8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$Dropdown
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Dropdown (CustomLogic_CustomLogicListBuiltin_o* choices, int32_t defaultIndex, System_String_o* label, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x3eed9d0

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Dropdown
          (CustomLogic_CustomLogicListBuiltin_o *choices,int32_t defaultIndex,System_String_o *label
          ,CustomLogic_UserMethod_o *valueChangedEvent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this;
  System_String_array *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_string__o *choices_00;
  System_String_o *pSVar6;
  UnityEngine_UIElements_DropdownField_o *__this_03;
  CustomLogic_CustomLogicDropdownBuiltin_o *__this_04;
  undefined1 auVar7 [16];
  undefined8 in_stack_ffffffffffffff88;
  undefined8 in_stack_ffffffffffffff90;
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_05703b49 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_DropdownField);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"No options");
    DAT_05703b49 = '\x01';
  }
  choices_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)choices_00,MethodInfo_List_1_System_String);
  if ((choices != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this = (choices->fields).List, __this != (System_Collections_Generic_List_object__o *)0x0))
  {
    System_Collections_Generic_List<object>__GetEnumerator(&local_48,__this,MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
    if (choices_00 == (System_Collections_Generic_List_string__o *)0x0) {
      while( true ) {
        __this_01.fields._index = (int)in_stack_ffffffffffffff90;
        __this_01.fields._version = (int)((ulong)in_stack_ffffffffffffff90 >> 0x20);
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
        __this_01.fields._current = (Il2CppObject *)pSVar8;
        bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        if ((char)bVar5 == '\0') break;
        if (local_48.fields._current != (Il2CppObject *)0x0) {
          (*(local_48.fields._current)->klass->vtable[3].methodPtr)
                    (local_48.fields._current,(local_48.fields._current)->klass->vtable[3].method);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
    else {
      while( true ) {
        __this_00.fields._index = (int)in_stack_ffffffffffffff90;
        __this_00.fields._version = (int)((ulong)in_stack_ffffffffffffff90 >> 0x20);
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
        __this_00.fields._current = (Il2CppObject *)pSVar8;
        bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        if ((char)bVar5 == '\0') break;
        if (local_48.fields._current != (Il2CppObject *)0x0) {
          pSVar6 = (System_String_o *)
                   (*(local_48.fields._current)->klass->vtable[3].methodPtr)
                             (local_48.fields._current,
                              (local_48.fields._current)->klass->vtable[3].method);
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(choices_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (choices_00->fields)._items;
          if (pSVar3 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (choices_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (choices_00->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pSVar6;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)choices_00,
                       (Il2CppObject *)pSVar6,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    __this_02.fields._index = (int)in_stack_ffffffffffffff90;
    __this_02.fields._version = (int)((ulong)in_stack_ffffffffffffff90 >> 0x20);
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_02.fields._current = (Il2CppObject *)pSVar8;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    pSVar6 = "No options";
    lVar4 = MethodInfo_Void_Add;
    if (choices_00 != (System_Collections_Generic_List_string__o *)0x0) {
      if ((choices_00->fields)._size == 0) {
        piVar1 = &(choices_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (choices_00->fields)._items;
        if (pSVar3 == (System_String_array *)0x0) goto LAB_03eedcd8;
        if ((int)pSVar3->max_length == 0) {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)choices_00,(Il2CppObject *)pSVar6,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        else {
          (choices_00->fields)._size = 1;
          pSVar3->m_Items[0] = pSVar6;
          il2cpp_runtime_glue(pSVar3->m_Items);
        }
      }
      __this_03 = (UnityEngine_UIElements_DropdownField_o *)il2cpp_runtime_glue(TypeInfo_DropdownField);
      UnityEngine_UIElements_DropdownField___ctor
                (__this_03,label,choices_00,defaultIndex,(System_Func_string__string__o *)0x0,
                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      auVar7 = il2cpp_runtime_glue(TypeInfo_CustomLogicDropdownBuiltin);
      __this_04 = auVar7._0_8_;
      CustomLogic_CustomLogicDropdownBuiltin___ctor(__this_04,__this_03,auVar7._8_8_);
      if (__this_04 != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
        (__this_04->fields)._valueChangedEvent = valueChangedEvent;
        il2cpp_runtime_glue(&(__this_04->fields)._valueChangedEvent);
        return __this_04;
      }
    }
  }
LAB_03eedcd8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$ProgressBar
// il2cpp: CustomLogic_CustomLogicProgressBarBuiltin_o* CustomLogic_CustomLogicUIBuiltin__ProgressBar (float lowValue, float highValue, System_String_o* title, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x3eedd80

CustomLogic_CustomLogicProgressBarBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__ProgressBar
          (float lowValue,float highValue,System_String_o *title,
          CustomLogic_UserMethod_o *valueChangedEvent,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  CustomLogic_CustomLogicProgressBarBuiltin_o *__this_00;
  undefined1 auVar1 [16];
  
  if (DAT_05703b4a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicProgressBarBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_ProgressBar);
    DAT_05703b4a = '\x01';
  }
  __this = (UnityEngine_UIElements_AbstractProgressBar_o *)il2cpp_runtime_glue(TypeInfo_ProgressBar);
  UnityEngine_UIElements_ProgressBar___ctor
            ((UnityEngine_UIElements_ProgressBar_o *)__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue(__this,lowValue,(MethodInfo *)0x0);
    UnityEngine_UIElements_AbstractProgressBar__set_highValue(__this,highValue,(MethodInfo *)0x0);
    UnityEngine_UIElements_AbstractProgressBar__set_title(__this,title,(MethodInfo *)0x0);
    auVar1 = il2cpp_runtime_glue(TypeInfo_CustomLogicProgressBarBuiltin);
    __this_00 = auVar1._0_8_;
    CustomLogic_CustomLogicProgressBarBuiltin___ctor
              (__this_00,(UnityEngine_UIElements_ProgressBar_o *)__this,auVar1._8_8_);
    if (__this_00 != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) {
      (__this_00->fields)._valueChangedEvent = valueChangedEvent;
      il2cpp_runtime_glue(&(__this_00->fields)._valueChangedEvent,valueChangedEvent);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUIBuiltin$$ScrollView
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicUIBuiltin__ScrollView (const MethodInfo* method);
// 0x3eede60

CustomLogic_CustomLogicScrollViewBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__ScrollView(MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  CustomLogic_CustomLogicScrollViewBuiltin_o *__this_00;
  undefined1 auVar1 [16];
  
  if (DAT_05703b4b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_ScrollView);
    DAT_05703b4b = '\x01';
  }
  __this = (UnityEngine_UIElements_ScrollView_o *)il2cpp_runtime_glue(TypeInfo_ScrollView);
  UnityEngine_UIElements_ScrollView___ctor(__this,(MethodInfo *)0x0);
  auVar1 = il2cpp_runtime_glue(TypeInfo_CustomLogicScrollViewBuiltin);
  __this_00 = auVar1._0_8_;
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
             (UnityEngine_UIElements_VisualElement_o *)__this,auVar1._8_8_);
  (__this_00->fields)._scrollView = __this;
  il2cpp_runtime_glue(&(__this_00->fields)._scrollView,__this);
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin$$Icon
// il2cpp: CustomLogic_CustomLogicIconBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Icon (System_String_o* iconPath, const MethodInfo* method);
// 0x3eedee0

CustomLogic_CustomLogicIconBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Icon(System_String_o *iconPath,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_UIElements_Image_o *__this;
  CustomLogic_CustomLogicIconBuiltin_o *__this_00;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  
  if (DAT_05703b4c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicIconBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Image);
    DAT_05703b4c = '\x01';
  }
  __this = (UnityEngine_UIElements_Image_o *)il2cpp_runtime_glue(TypeInfo_Image);
  UnityEngine_UIElements_Image___ctor(__this,(MethodInfo *)0x0);
  auVar2 = il2cpp_runtime_glue(TypeInfo_CustomLogicIconBuiltin);
  __this_00 = auVar2._0_8_;
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,
             (UnityEngine_UIElements_VisualElement_o *)__this,auVar2._8_8_);
  (__this_00->fields)._image = __this;
  il2cpp_runtime_glue(&(__this_00->fields)._image,__this);
  (__this_00->fields)._currentIconPath = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this_00->fields)._currentIconPath);
  bVar1 = System_String__IsNullOrEmpty(iconPath,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (__this_00 == (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    CustomLogic_CustomLogicIconBuiltin__SetIcon(__this_00,iconPath,method_00);
  }
  return __this_00;
}


// CustomLogic.CustomLogicUIBuiltin$$Image
// il2cpp: CustomLogic_CustomLogicImageBuiltin_o* CustomLogic_CustomLogicUIBuiltin__Image (System_String_o* iconPath, const MethodInfo* method);
// 0x3eedfb0

CustomLogic_CustomLogicImageBuiltin_o *
CustomLogic_CustomLogicUIBuiltin__Image(System_String_o *iconPath,MethodInfo *method)

{
  bool_conflict bVar1;
  CustomLogic_CustomLogicImageBuiltin_o *__this;
  MethodInfo *method_00;
  
  if (DAT_05703b4d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicImageBuiltin);
    DAT_05703b4d = '\x01';
  }
  __this = (CustomLogic_CustomLogicImageBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicImageBuiltin);
  if (DAT_05703a8c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703a8c = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._currentImagePath = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields)._currentImagePath);
  (__this->fields)._currentTexture = (UnityEngine_Texture2D_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._currentTexture);
  bVar1 = System_String__IsNullOrEmpty(iconPath,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    CustomLogic_CustomLogicImageBuiltin__SetImage(__this,iconPath,method_00);
  }
  return __this;
}


// CustomLogic.CustomLogicUIBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicUIBuiltin__get_ClassName (CustomLogic_CustomLogicUIBuiltin_o* __this, const MethodInfo* method);
// 0x3eee090

System_String_o *
CustomLogic_CustomLogicUIBuiltin__get_ClassName
          (CustomLogic_CustomLogicUIBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703b4e == '\0') {
    il2cpp_init_method_metadata(&"UI");
    DAT_05703b4e = '\x01';
  }
  return "UI";
}


// CustomLogic.CustomLogicUIBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__get_IsAbstract (CustomLogic_CustomLogicUIBuiltin_o* __this, const MethodInfo* method);
// 0x3eee0c0

bool_conflict
CustomLogic_CustomLogicUIBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicUIBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicUIBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__get_IsStatic (CustomLogic_CustomLogicUIBuiltin_o* __this, const MethodInfo* method);
// 0x3eee0d0

bool_conflict
CustomLogic_CustomLogicUIBuiltin__get_IsStatic
          (CustomLogic_CustomLogicUIBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicUIBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicUIBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicUIBuiltin_o* __this, const MethodInfo* method);
// 0x3eee0e0

bool_conflict
CustomLogic_CustomLogicUIBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicUIBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicUIBuiltin$$.cctor
// il2cpp: void CustomLogic_CustomLogicUIBuiltin___cctor (const MethodInfo* method);
// 0x3eee0f0

void CustomLogic_CustomLogicUIBuiltin___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  undefined8 uVar2;
  
  if (DAT_05703b4f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703b4f = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_String_System_String);
  **(undefined8 **)(TypeInfo_CustomLogicUIBuiltin + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicUIBuiltin + 0xb8),__this);
  uVar2 = il2cpp_glue_02274930(TypeInfo_object,3);
  lVar1 = *(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8);
  *(undefined8 *)(lVar1 + 8) = uVar2;
  il2cpp_runtime_glue(lVar1 + 8,uVar2);
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 0x10) = 0;
  return;
}


