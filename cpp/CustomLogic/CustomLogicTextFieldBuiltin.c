// Type: CustomLogic.CustomLogicTextFieldBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTextFieldBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicTextFieldBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTextFieldBuiltin_o* CustomLogic_CustomLogicTextFieldBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ee80f0

CustomLogic_CustomLogicTextFieldBuiltin_o *
CustomLogic_CustomLogicTextFieldBuiltin_Factory__CreateInstance
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
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicTextFieldBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicTextFieldBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3ee94d0

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703b0a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b0a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3ee9540

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterValueChangedEventCallback>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_____CreateMethodBinding__RegisterValueChangedEventCallback_b__8_0 (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTextFieldBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ee9550

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_<>c__<__CreateMethodBinding__RegisterValueChangedEventCallback>b__8_0
          (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTextFieldBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *changeEvent;
  CustomLogic_CustomLogicTextFieldBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (DAT_05703b0b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703b0b = '\x01';
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
    changeEvent = (CustomLogic_UserMethod_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicTextFieldBuiltin__RegisterValueChangedEventCallback
                         (__c,changeEvent,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__9_0 (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTextFieldBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ee95e0

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_<>c__<__CreateMethodBinding__SetValueWithoutNotify>b__9_0
          (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTextFieldBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_UIElements_TextField_o *pUVar1;
  Il2CppObject *pIVar2;
  
  if (DAT_05703b0c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703b0c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) &&
       (pUVar1 = (__c->fields)._textField, pUVar1 != (UnityEngine_UIElements_TextField_o *)0x0)) {
      (*(pUVar1->klass->vtable)._114_SetValueWithoutNotify.methodPtr)
                (pUVar1,pIVar2,(pUVar1->klass->vtable)._114_SetValueWithoutNotify.method);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ee8180

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings__CreateMemberBinding
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
  System_Action_T__object__o *pSVar8;
  CustomLogic_CLPropertyBinding_T__o *pCVar9;
  System_Func_T__object____object__o *pSVar10;
  CustomLogic_CLMethodBinding_T__o *pCVar11;
  
  if (DAT_05703afa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"SetValueWithoutNotify");
    il2cpp_init_method_metadata(&"Value");
    il2cpp_init_method_metadata(&"RegisterValueChangedEventCallback");
    il2cpp_init_method_metadata(&"SelectionColor");
    il2cpp_init_method_metadata(&"Multiline");
    il2cpp_init_method_metadata(&"CursorColor");
    il2cpp_init_method_metadata(&"IsDelayed");
    DAT_05703afa = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0xd147f96b) {
    if (uVar3 < 0x6d3fc92a) {
      if (uVar3 == 0x14e6c5e8) {
        bVar4 = System_String__op_Equality(name,"SelectionColor",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703aff == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SelectionColor);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__SelectionColor_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
            DAT_05703aff = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x6d3fc929) &&
              (bVar4 = System_String__op_Equality(name,"IsDelayed",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703afb == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsDelayed_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__IsDelayed_g____se);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
          DAT_05703afb = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x9eccf29d) {
      bVar4 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703afd == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Label_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Label_g____setter);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
          DAT_05703afd = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xd147f96a) &&
            (bVar4 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703afe == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Value_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Value_g____setter);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
        DAT_05703afe = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xd989409f) {
    if (uVar3 == 0xd1dd43b5) {
      bVar4 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703b02 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextFieldBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetValueWithoutNo);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703b02 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextFieldBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0xd989409e) &&
            (bVar4 = System_String__op_Equality(name,"CursorColor",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703b00 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CursorColor_g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CursorColor_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
        DAT_05703b00 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xe890d540) {
    bVar4 = System_String__op_Equality(name,"Multiline",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703afc == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Multiline_g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Multiline_g____se);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
        DAT_05703afc = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if ((uVar3 == 0xf35844be) &&
          (bVar4 = System_String__op_Equality(name,"RegisterValueChangedEventCallback",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703b01 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextFieldBuiltin__object____obje);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterValueChan);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703b01 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextFieldBuiltin__object____obje);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
      il2cpp_runtime_glue(lVar2 + 8,pSVar10);
    }
    pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicTextFieldBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__IsDelayed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__IsDelayed (const MethodInfo* method);
// 0x3ee8570

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__IsDelayed
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this;
  
  if (DAT_05703afb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsDelayed_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__IsDelayed_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
    DAT_05703afb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__Multiline
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Multiline (const MethodInfo* method);
// 0x3ee8650

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Multiline
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this;
  
  if (DAT_05703afc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Multiline_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Multiline_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
    DAT_05703afc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__Label
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Label (const MethodInfo* method);
// 0x3ee8730

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Label(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this;
  
  if (DAT_05703afd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Label_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Label_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
    DAT_05703afd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x3ee8810

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this;
  
  if (DAT_05703afe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Value_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Value_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
    DAT_05703afe = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__SelectionColor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__SelectionColor (const MethodInfo* method);
// 0x3ee88f0

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__SelectionColor
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this;
  
  if (DAT_05703aff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SelectionColor);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__SelectionColor_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
    DAT_05703aff = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__CursorColor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__CursorColor (const MethodInfo* method);
// 0x3ee89d0

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__CursorColor
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this;
  
  if (DAT_05703b00 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CursorColor_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CursorColor_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
    DAT_05703b00 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextFieldBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTextFieldBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreateMethodBinding__RegisterValueChangedEventCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__RegisterValueChangedEventCallback (const MethodInfo* method);
// 0x3ee8ab0

CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__RegisterValueChangedEventCallback
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *__this;
  
  if (DAT_05703b01 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextFieldBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterValueChan);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b01 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextFieldBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x3ee8c00

CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *__this;
  
  if (DAT_05703b02 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextFieldBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetValueWithoutNo);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b02 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextFieldBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3ee8d50

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703b03 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"SetValueWithoutNotify");
    il2cpp_init_method_metadata(&"Value");
    il2cpp_init_method_metadata(&"RegisterValueChangedEventCallback");
    il2cpp_init_method_metadata(&"SelectionColor");
    il2cpp_init_method_metadata(&"Multiline");
    il2cpp_init_method_metadata(&"CursorColor");
    il2cpp_init_method_metadata(&"IsDelayed");
    DAT_05703b03 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"IsDelayed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Multiline",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Label",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Value",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SelectionColor",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CursorColor",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RegisterValueChangedEventCallback",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetValueWithoutNotify",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__IsDelayed>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__IsDelayed_g____getter_2_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x3ee8f10

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings__<__CreatePropertyBinding__IsDelayed>g____getter_2_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  undefined1 local_9;
  
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (DAT_05703af0 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Boolean_get_isDelayed);
      DAT_05703af0 = '\x01';
    }
    __this = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      bVar1 = UnityEngine_UIElements_TextInputBaseField<object>__get_isDelayed(__this,MethodInfo_Boolean_get_isDelayed);
      local_9 = (undefined1)bVar1;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__IsDelayed>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__IsDelayed_g____setter_2_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee8f80

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings__<__CreatePropertyBinding__IsDelayed>g____setter_2_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this;
  uint uVar1;
  
  if (DAT_05703b04 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703b04 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (DAT_05703af1 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_set_isDelayed);
      DAT_05703af1 = '\x01';
    }
    __this = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_TextInputBaseField<object>__set_isDelayed
                (__this,uVar1 & 0xff,MethodInfo_Void_set_isDelayed);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Multiline>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Multiline_g____getter_3_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x3ee9030

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings__<__CreatePropertyBinding__Multiline>g____getter_3_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) &&
     (__this = (__i->fields)._textField, __this != (UnityEngine_UIElements_TextField_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_UIElements_TextField__get_multiline(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Multiline>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Multiline_g____setter_3_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee9070

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings__<__CreatePropertyBinding__Multiline>g____setter_3_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this;
  uint uVar1;
  
  if (DAT_05703b05 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703b05 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) &&
     (__this = (__i->fields)._textField, __this != (UnityEngine_UIElements_TextField_o *)0x0)) {
    UnityEngine_UIElements_TextField__set_multiline(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_4_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x3ee90f0

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings__<__CreatePropertyBinding__Label>g____getter_4_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (DAT_05703af2 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_String_get_label);
      DAT_05703af2 = '\x01';
    }
    __this = (__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextField_o *)0x0) {
      pSVar1 = UnityEngine_UIElements_BaseField<object>__get_label
                         ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,MethodInfo_String_get_label);
      return (Il2CppObject *)pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_4_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee9140

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings__<__CreatePropertyBinding__Label>g____setter_4_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this;
  System_String_o *value;
  
  if (DAT_05703b06 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703b06 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (DAT_05703af3 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_set_label);
      DAT_05703af3 = '\x01';
    }
    __this = (__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextField_o *)0x0) {
      UnityEngine_UIElements_BaseField<object>__set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,value,MethodInfo_Void_set_label);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_5_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x3ee91f0

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings__<__CreatePropertyBinding__Value>g____getter_5_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar2;
  undefined8 in_RDX;
  
  if ((__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._textField, pUVar1 != (UnityEngine_UIElements_TextField_o *)0x0)) {
    vtable_dispatch = (pUVar1->klass->vtable)._105_get_value.methodPtr;
    pIVar2 = (Il2CppObject *)
             (*vtable_dispatch)
                       (pUVar1,(pUVar1->klass->vtable)._105_get_value.method,in_RDX,
                        vtable_dispatch);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_5_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee9220

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings__<__CreatePropertyBinding__Value>g____setter_5_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *pUVar1;
  UnityEngine_UIElements_TextField_c *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar3;
  
  if (DAT_05703b07 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703b07 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._textField, pUVar1 != (UnityEngine_UIElements_TextField_o *)0x0)) {
    pUVar2 = pUVar1->klass;
    vtable_dispatch = (pUVar2->vtable)._106_set_value.methodPtr;
    (*vtable_dispatch)
              (pUVar1,pIVar3,(pUVar2->vtable)._106_set_value.method,pUVar2,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__SelectionColor>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__SelectionColor_g____getter_6_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x3ee92b0

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings__<__CreatePropertyBinding__SelectionColor>g____getter_6_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  UnityEngine_Color_o color;
  
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (DAT_05703af4 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
      il2cpp_init_method_metadata(&MethodInfo_Color_get_selectionColor);
      DAT_05703af4 = '\x01';
    }
    __this = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      color = UnityEngine_UIElements_TextInputBaseField<object>__get_selectionColor
                        (__this,MethodInfo_Color_get_selectionColor);
      __this_00 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor(__this_00,color,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__SelectionColor>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__SelectionColor_g____setter_6_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee9340

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings__<__CreatePropertyBinding__SelectionColor>g____setter_6_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this;
  UnityEngine_UIElements_ITextSelection_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  code *vtable_dispatch;
  UnityEngine_UIElements_ITextSelection_o *pUVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  UnityEngine_Color_o UVar7;
  undefined1 auVar8 [16];
  
  if (DAT_05703b08 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703b08 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
  if (__i == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05703af5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ITextSelection);
    il2cpp_init_method_metadata(&MethodInfo_ITextSelection_get_textSelection);
    DAT_05703af5 = '\x01';
  }
  __this = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
  if (__this != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pUVar4 = UnityEngine_UIElements_TextInputBaseField<object>__get_textSelection
                       (__this,MethodInfo_ITextSelection_get_textSelection);
    if ((pIVar5 != (Il2CppObject *)0x0) && (pIVar5[3].klass != (Il2CppClass *)0x0)) {
      UVar7 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar5[3].klass,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar2 = pUVar4->klass;
        uVar1._0_1_ = (pUVar2->_2).rank;
        uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar3 = (pUVar2->_1).interfaceOffsets;
          lVar6 = 0;
          do {
            if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_ITextSelection) {
              auVar8._8_8_ = pIVar3;
              auVar8._0_8_ = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 5);
              goto LAB_03ee7dc7;
            }
            lVar6 = lVar6 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar6);
        }
        auVar8 = il2cpp_runtime_glue(pUVar4,TypeInfo_ITextSelection,5);
LAB_03ee7dc7:
        vtable_dispatch = (code *)*auVar8._0_8_;
        (*vtable_dispatch)
                  (UVar7.fields.r,UVar7.fields.b,pUVar4,auVar8._0_8_[1],auVar8._8_8_,
                   vtable_dispatch);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__CursorColor>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__CursorColor_g____getter_7_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x3ee93c0

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings__<__CreatePropertyBinding__CursorColor>g____getter_7_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  UnityEngine_Color_o color;
  
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (DAT_05703af6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
      il2cpp_init_method_metadata(&MethodInfo_Color_get_cursorColor);
      DAT_05703af6 = '\x01';
    }
    __this = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      color = UnityEngine_UIElements_TextInputBaseField<object>__get_cursorColor
                        (__this,MethodInfo_Color_get_cursorColor);
      __this_00 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor(__this_00,color,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__CursorColor>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__CursorColor_g____setter_7_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee9450

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings__<__CreatePropertyBinding__CursorColor>g____setter_7_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicColorBuiltin_o *value;
  MethodInfo *method_00;
  
  if (DAT_05703b09 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703b09 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (CustomLogic_CustomLogicColorBuiltin_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin.<>c__DisplayClass20_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x3ee8050

void CustomLogic_CustomLogicTextFieldBuiltin_<>c__DisplayClass20_0___ctor
               (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.<>c__DisplayClass20_0$$<RegisterValueChangedEventCallback>b__0
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___RegisterValueChangedEventCallback_b__0 (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o* __this, UnityEngine_UIElements_ChangeEvent_string__o* evt, const MethodInfo* method);
// 0x3ee9680

void CustomLogic_CustomLogicTextFieldBuiltin_<>c__DisplayClass20_0__<RegisterValueChangedEventCallback>b__0
               (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this,
               UnityEngine_UIElements_ChangeEvent_string__o *evt,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_String_o *pSVar1;
  System_Object_array *parameterValues;
  long lVar2;
  undefined8 uVar3;
  
  if (DAT_05703b0d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_newValue);
    il2cpp_init_method_metadata(&MethodInfo_String_get_previousValue);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703b0d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = (__this->fields).changeEvent;
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
  if ((evt == (UnityEngine_UIElements_ChangeEvent_string__o *)0x0) ||
     (parameterValues == (System_Object_array *)0x0)) {
LAB_03ee97ab:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar1 = (evt->fields)._newValue_k__BackingField;
  if (pSVar1 != (System_String_o *)0x0) {
    lVar2 = il2cpp_runtime_glue(pSVar1,(((parameterValues->obj).klass)->_1).element_class);
    if (lVar2 == 0) goto LAB_03ee97b5;
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = (Il2CppObject *)pSVar1;
    il2cpp_runtime_glue(parameterValues->m_Items,pSVar1);
    pSVar1 = (evt->fields)._previousValue_k__BackingField;
    if (pSVar1 != (System_String_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((parameterValues->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
LAB_03ee97b5:
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
    }
    if (1 < (uint)parameterValues->max_length) {
      parameterValues->m_Items[1] = (Il2CppObject *)pSVar1;
      il2cpp_runtime_glue(parameterValues->m_Items + 1,pSVar1);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__EvaluateMethod
                  (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03ee97ab;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin___ctor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, UnityEngine_UIElements_TextField_o* textField, const MethodInfo* method);
// 0x3ee7a60

void CustomLogic_CustomLogicTextFieldBuiltin___ctor
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,
               UnityEngine_UIElements_TextField_o *textField,MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)textField,method);
  (__this->fields)._textField = textField;
  il2cpp_runtime_glue(&(__this->fields)._textField,textField);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_IsDelayed
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_IsDelayed (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x3ee7a90

bool_conflict
CustomLogic_CustomLogicTextFieldBuiltin__get_IsDelayed
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_05703af0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_isDelayed);
    DAT_05703af0 = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField
  ;
  if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    bVar1 = UnityEngine_UIElements_TextInputBaseField<object>__get_isDelayed(__this_00,MethodInfo_Boolean_get_isDelayed)
    ;
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_IsDelayed
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_IsDelayed (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3ee7ad0

void CustomLogic_CustomLogicTextFieldBuiltin__set_IsDelayed
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  
  if (DAT_05703af1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_isDelayed);
    DAT_05703af1 = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField
  ;
  if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UnityEngine_UIElements_TextInputBaseField<object>__set_isDelayed
              (__this_00,value & 0xff,MethodInfo_Void_set_isDelayed);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_Multiline
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_Multiline (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x3ee7b20

bool_conflict
CustomLogic_CustomLogicTextFieldBuiltin__get_Multiline
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields)._textField;
  if (__this_00 != (UnityEngine_UIElements_TextField_o *)0x0) {
    bVar1 = UnityEngine_UIElements_TextField__get_multiline(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_Multiline
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_Multiline (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3ee7b40

void CustomLogic_CustomLogicTextFieldBuiltin__set_Multiline
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this_00;
  
  __this_00 = (__this->fields)._textField;
  if (__this_00 != (UnityEngine_UIElements_TextField_o *)0x0) {
    UnityEngine_UIElements_TextField__set_multiline(__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_Label
// il2cpp: System_String_o* CustomLogic_CustomLogicTextFieldBuiltin__get_Label (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x3ee7b60

System_String_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_Label
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this_00;
  System_String_o *pSVar1;
  
  if (DAT_05703af2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_label);
    DAT_05703af2 = '\x01';
  }
  __this_00 = (__this->fields)._textField;
  if (__this_00 != (UnityEngine_UIElements_TextField_o *)0x0) {
    pSVar1 = UnityEngine_UIElements_BaseField<object>__get_label
                       ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,MethodInfo_String_get_label);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_Label
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_Label (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3ee7ba0

void CustomLogic_CustomLogicTextFieldBuiltin__set_Label
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this_00;
  
  if (DAT_05703af3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_label);
    DAT_05703af3 = '\x01';
  }
  __this_00 = (__this->fields)._textField;
  if (__this_00 != (UnityEngine_UIElements_TextField_o *)0x0) {
    UnityEngine_UIElements_BaseField<object>__set_label
              ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,value,MethodInfo_Void_set_label);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_Value
// il2cpp: System_String_o* CustomLogic_CustomLogicTextFieldBuiltin__get_Value (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x3ee7bf0

System_String_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_Value
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar2;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields)._textField;
  if (pUVar1 != (UnityEngine_UIElements_TextField_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._105_get_value.methodPtr;
    pSVar2 = (System_String_o *)
             (*vtable_dispatch)
                       (pUVar1,(pUVar1->klass->vtable)._105_get_value.method,in_RDX,
                        vtable_dispatch);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_Value (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3ee7c20

void CustomLogic_CustomLogicTextFieldBuiltin__set_Value
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields)._textField;
  if (pUVar1 != (UnityEngine_UIElements_TextField_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._106_set_value.methodPtr;
    (*vtable_dispatch)
              (pUVar1,value,(pUVar1->klass->vtable)._106_set_value.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_SelectionColor
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x3ee7c50

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *__this_01;
  UnityEngine_Color_o color;
  
  if (DAT_05703af4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Color_get_selectionColor);
    DAT_05703af4 = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField
  ;
  if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    color = UnityEngine_UIElements_TextInputBaseField<object>__get_selectionColor
                      (__this_00,MethodInfo_Color_get_selectionColor);
    __this_01 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor(__this_01,color,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_SelectionColor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x3ee7ce0

void CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,
               CustomLogic_CustomLogicColorBuiltin_o *value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  Utility_Color255_o *__this_01;
  UnityEngine_UIElements_ITextSelection_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  code *vtable_dispatch;
  UnityEngine_UIElements_ITextSelection_o *pUVar4;
  long lVar5;
  UnityEngine_Color_o UVar6;
  undefined1 auVar7 [16];
  
  if (DAT_05703af5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ITextSelection);
    il2cpp_init_method_metadata(&MethodInfo_ITextSelection_get_textSelection);
    DAT_05703af5 = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField
  ;
  if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pUVar4 = UnityEngine_UIElements_TextInputBaseField<object>__get_textSelection
                       (__this_00,MethodInfo_ITextSelection_get_textSelection);
    if ((value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (value->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      UVar6 = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar2 = pUVar4->klass;
        uVar1._0_1_ = (pUVar2->_2).rank;
        uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar3 = (pUVar2->_1).interfaceOffsets;
          lVar5 = 0;
          do {
            if (*(long *)((long)&pIVar3->interfaceType + lVar5) == TypeInfo_ITextSelection) {
              auVar7._8_8_ = pIVar3;
              auVar7._0_8_ = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar5) + 5);
              goto LAB_03ee7dc7;
            }
            lVar5 = lVar5 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar5);
        }
        auVar7 = il2cpp_runtime_glue(pUVar4,TypeInfo_ITextSelection,5);
LAB_03ee7dc7:
        vtable_dispatch = (code *)*auVar7._0_8_;
        (*vtable_dispatch)
                  (UVar6.fields.r,UVar6.fields.b,pUVar4,auVar7._0_8_[1],auVar7._8_8_,
                   vtable_dispatch);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_CursorColor
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicTextFieldBuiltin__get_CursorColor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x3ee7de0

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_CursorColor
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *__this_01;
  UnityEngine_Color_o color;
  
  if (DAT_05703af6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Color_get_cursorColor);
    DAT_05703af6 = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField
  ;
  if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    color = UnityEngine_UIElements_TextInputBaseField<object>__get_cursorColor
                      (__this_00,MethodInfo_Color_get_cursorColor);
    __this_01 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor(__this_01,color,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_CursorColor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x3ee7e70

void CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,
               CustomLogic_CustomLogicColorBuiltin_o *value,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  Utility_Color255_o *__this_01;
  UnityEngine_UIElements_ITextSelection_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  code *vtable_dispatch;
  UnityEngine_UIElements_ITextSelection_o *pUVar4;
  long lVar5;
  UnityEngine_Color_o UVar6;
  undefined1 auVar7 [16];
  
  if (DAT_05703af7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ITextSelection);
    il2cpp_init_method_metadata(&MethodInfo_ITextSelection_get_textSelection);
    DAT_05703af7 = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField
  ;
  if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pUVar4 = UnityEngine_UIElements_TextInputBaseField<object>__get_textSelection
                       (__this_00,MethodInfo_ITextSelection_get_textSelection);
    if ((value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (value->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      UVar6 = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar2 = pUVar4->klass;
        uVar1._0_1_ = (pUVar2->_2).rank;
        uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar3 = (pUVar2->_1).interfaceOffsets;
          lVar5 = 0;
          do {
            if (*(long *)((long)&pIVar3->interfaceType + lVar5) == TypeInfo_ITextSelection) {
              auVar7._8_8_ = pIVar3;
              auVar7._0_8_ = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar5) + 3);
              goto LAB_03ee7f57;
            }
            lVar5 = lVar5 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar5);
        }
        auVar7 = il2cpp_runtime_glue(pUVar4,TypeInfo_ITextSelection,3);
LAB_03ee7f57:
        vtable_dispatch = (code *)*auVar7._0_8_;
        (*vtable_dispatch)
                  (UVar6.fields.r,UVar6.fields.b,pUVar4,auVar7._0_8_[1],auVar7._8_8_,
                   vtable_dispatch);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$RegisterValueChangedEventCallback
// il2cpp: CustomLogic_CustomLogicTextFieldBuiltin_o* CustomLogic_CustomLogicTextFieldBuiltin__RegisterValueChangedEventCallback (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, CustomLogic_UserMethod_o* changeEvent, const MethodInfo* method);
// 0x3ee7f70

CustomLogic_CustomLogicTextFieldBuiltin_o *
CustomLogic_CustomLogicTextFieldBuiltin__RegisterValueChangedEventCallback
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,CustomLogic_UserMethod_o *changeEvent,
          MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *control;
  Il2CppObject *__this_00;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  
  if (DAT_05703af8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterValueChangedEventCallback_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass20_0);
    DAT_05703af8 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass20_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)changeEvent;
    il2cpp_runtime_glue(__this_00 + 1,changeEvent);
    control = (__this->fields)._textField;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)
               il2cpp_runtime_glue(TypeInfo_EventCallback_ChangeEvent_string);
    UnityEngine_UIElements_EventCallback<object>___ctor();
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback<object>
              ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3ee8060

void CustomLogic_CustomLogicTextFieldBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields)._textField;
  if (pUVar1 != (UnityEngine_UIElements_TextField_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._114_SetValueWithoutNotify.methodPtr;
    (*vtable_dispatch)
              (pUVar1,value,(pUVar1->klass->vtable)._114_SetValueWithoutNotify.method,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTextFieldBuiltin__get_ClassName (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x3ee8090

System_String_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_ClassName
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703af9 == '\0') {
    il2cpp_init_method_metadata(&"TextField");
    DAT_05703af9 = '\x01';
  }
  return "TextField";
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_IsAbstract (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x3ee80c0

bool_conflict
CustomLogic_CustomLogicTextFieldBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_IsStatic (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x3ee80d0

bool_conflict
CustomLogic_CustomLogicTextFieldBuiltin__get_IsStatic
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x3ee80e0

bool_conflict
CustomLogic_CustomLogicTextFieldBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


