// Type: CustomLogic.CustomLogicScrollViewBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicScrollViewBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicScrollViewBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicScrollViewBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ee3a20

CustomLogic_CustomLogicScrollViewBuiltin_o *
CustomLogic_CustomLogicScrollViewBuiltin_Factory__CreateInstance
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
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicScrollViewBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicScrollViewBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3ee5060

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703ac8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703ac8 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3ee50d0

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__Elasticity>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__Elasticity_b__7_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ee50e0

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_<>c__<__CreateMethodBinding__Elasticity>b__7_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_01;
  int32_t iStack_30;
  int32_t aiStack_2c [3];
  
  if (DAT_05703ac9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703ac9 = '\x01';
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
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar2,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
      if (DAT_05703ab5 == '\0') {
        il2cpp_init_method_metadata(&TypeRef_TouchScrollBehavior);
        DAT_05703ab5 = '\x01';
      }
      handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
      if (*(int *)(DAT_05711100 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      aiStack_2c[0] = value;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,aiStack_2c);
      if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        __this_00 = (__c->fields)._scrollView;
        if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
          UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                    (__this_00,value,(MethodInfo *)0x0);
          return (Il2CppObject *)__c;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iStack_30 = value;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_30);
      pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown elasticity value: {0}");
      pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
      uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
      __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
      System_ArgumentException___ctor(__this_01,pSVar3,(MethodInfo *)0x0);
      uVar4 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_01,uVar4);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScrollDecelerationRate>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__SetScrollDecelerationRate_b__8_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ee5170

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_<>c__<__CreateMethodBinding__SetScrollDecelerationRate>b__8_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_ScrollView_o *__this_00;
  float fVar1;
  float fVar2;
  
  if (DAT_05703aca == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703aca = '\x01';
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
    fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if ((__c != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields)._scrollView,
       __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      fVar2 = 1.0;
      if (fVar1 <= 1.0) {
        fVar2 = fVar1;
      }
      UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
                (__this_00,(float)(-(uint)(0.0 <= fVar1) & (uint)fVar2),(MethodInfo *)0x0);
      return (Il2CppObject *)__c;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScrollOffset>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__SetScrollOffset_b__9_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ee5220

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_<>c__<__CreateMethodBinding__SetScrollOffset>b__9_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  Il2CppObject *pIVar1;
  
  if (DAT_05703acb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703acb = '\x01';
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
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    if (((__c != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
        (pIVar1 != (Il2CppObject *)0x0)) &&
       (__this_00 = (__c->fields)._scrollView,
       __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      UnityEngine_UIElements_ScrollView__set_scrollOffset
                (__this_00,(UnityEngine_Vector2_o)pIVar1[3].klass,(MethodInfo *)0x0);
      return (Il2CppObject *)__c;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__ScrollToTop>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__ScrollToTop_b__10_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ee52c0

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_<>c__<__CreateMethodBinding__ScrollToTop>b__10_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  
  if ((__c != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields)._scrollView, __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0
     )) {
    UVar1 = UnityEngine_UIElements_ScrollView__get_scrollOffset(__this_00,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this_00,(UnityEngine_Vector2_o)(UVar1.fields & 0xffffffff),(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__ScrollToBottom>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__ScrollToBottom_b__11_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ee5300

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_<>c__<__CreateMethodBinding__ScrollToBottom>b__11_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *child;
  
  if ((__c != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields)._scrollView, __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0
     )) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(__this_00->klass->vtable)._97_get_contentContainer.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(__this_00,child,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ee3ab0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_05703ab7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"ScrollOffset");
    il2cpp_init_method_metadata(&"ScrollDecelerationRate");
    il2cpp_init_method_metadata(&"VerticalScrollEnabled");
    il2cpp_init_method_metadata(&"ScrollToTop");
    il2cpp_init_method_metadata(&"ScrollToBottom");
    il2cpp_init_method_metadata(&"Elasticity");
    il2cpp_init_method_metadata(&"HorizontalScrollEnabled");
    il2cpp_init_method_metadata(&"SetScrollDecelerationRate");
    il2cpp_init_method_metadata(&"SetScrollOffset");
    il2cpp_init_method_metadata(&"MouseWheelScrollSize");
    DAT_05703ab7 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x7558c33d) {
    if (uVar3 < 0x3d05784e) {
      if (uVar3 == 0x28129cd) {
        bVar4 = System_String__op_Equality(name,"SetScrollOffset",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703abf == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetScrollOffset_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703abf = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x18);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x18);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x3d05784d) &&
              (bVar4 = System_String__op_Equality(name,"ScrollDecelerationRate",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703ab9 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ScrollDecelerat);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ScrollDeceleratio);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
          DAT_05703ab9 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x53995e54) {
      bVar4 = System_String__op_Equality(name,"Elasticity",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703abd == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Elasticity_b__7_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703abd = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 8,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x6af069af) {
      bVar4 = System_String__op_Equality(name,"SetScrollDecelerationRate",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703abe == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetScrollDecelera);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703abe = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0x7558c33c) &&
            (bVar4 = System_String__op_Equality(name,"ScrollToTop",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703ac0 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ScrollToTop_b__10);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703ac0 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xf0c8d07a) {
    if (uVar3 == 0x8e3d182a) {
      bVar4 = System_String__op_Equality(name,"ScrollToBottom",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703ac1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ScrollToBottom_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703ac1 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0xf0c8d079) &&
            (bVar4 = System_String__op_Equality(name,"HorizontalScrollEnabled",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703abb == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorizontalScrol);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__HorizontalScrollE);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
        DAT_05703abb = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xf2482abb) {
    bVar4 = System_String__op_Equality(name,"MouseWheelScrollSize",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703aba == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MouseWheelScrol);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MouseWheelScrollS);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
        DAT_05703aba = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xfaaf0aaf) {
    bVar4 = System_String__op_Equality(name,"VerticalScrollEnabled",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703abc == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__VerticalScrollE);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__VerticalScrollEna);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
        DAT_05703abc = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if ((uVar3 == 0xfe24aa77) &&
          (bVar4 = System_String__op_Equality(name,"ScrollOffset",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703ab8 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ScrollOffset_g);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ScrollOffset_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
      DAT_05703ab8 = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar9;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicScrollViewBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__ScrollOffset
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollOffset (const MethodInfo* method);
// 0x3ee3f70

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollOffset
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (DAT_05703ab8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ScrollOffset_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ScrollOffset_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
    DAT_05703ab8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__ScrollDecelerationRate
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollDecelerationRate (const MethodInfo* method);
// 0x3ee4050

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollDecelerationRate
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (DAT_05703ab9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ScrollDecelerat);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ScrollDeceleratio);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
    DAT_05703ab9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__MouseWheelScrollSize
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__MouseWheelScrollSize (const MethodInfo* method);
// 0x3ee4130

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__MouseWheelScrollSize
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (DAT_05703aba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MouseWheelScrol);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MouseWheelScrollS);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
    DAT_05703aba = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__HorizontalScrollEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__HorizontalScrollEnabled (const MethodInfo* method);
// 0x3ee4210

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__HorizontalScrollEnabled
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (DAT_05703abb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorizontalScrol);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__HorizontalScrollE);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
    DAT_05703abb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__VerticalScrollEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__VerticalScrollEnabled (const MethodInfo* method);
// 0x3ee42f0

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__VerticalScrollEnabled
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (DAT_05703abc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__VerticalScrollE);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__VerticalScrollEna);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
    DAT_05703abc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicScrollViewBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__Elasticity
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__Elasticity (const MethodInfo* method);
// 0x3ee43d0

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__Elasticity
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (DAT_05703abd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Elasticity_b__7_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703abd = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__SetScrollDecelerationRate
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollDecelerationRate (const MethodInfo* method);
// 0x3ee4520

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollDecelerationRate
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (DAT_05703abe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetScrollDecelera);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703abe = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__SetScrollOffset
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollOffset (const MethodInfo* method);
// 0x3ee4670

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollOffset
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (DAT_05703abf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetScrollOffset_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703abf = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__ScrollToTop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToTop (const MethodInfo* method);
// 0x3ee47c0

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToTop
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (DAT_05703ac0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ScrollToTop_b__10);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703ac0 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__ScrollToBottom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToBottom (const MethodInfo* method);
// 0x3ee4910

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToBottom
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (DAT_05703ac1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ScrollToBottom_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703ac1 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollViewBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3ee4a60

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703ac2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"ScrollOffset");
    il2cpp_init_method_metadata(&"ScrollDecelerationRate");
    il2cpp_init_method_metadata(&"VerticalScrollEnabled");
    il2cpp_init_method_metadata(&"ScrollToTop");
    il2cpp_init_method_metadata(&"ScrollToBottom");
    il2cpp_init_method_metadata(&"Elasticity");
    il2cpp_init_method_metadata(&"HorizontalScrollEnabled");
    il2cpp_init_method_metadata(&"SetScrollDecelerationRate");
    il2cpp_init_method_metadata(&"SetScrollOffset");
    il2cpp_init_method_metadata(&"MouseWheelScrollSize");
    DAT_05703ac2 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"ScrollOffset",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ScrollDecelerationRate",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MouseWheelScrollSize",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HorizontalScrollEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"VerticalScrollEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Elasticity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetScrollDecelerationRate",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetScrollOffset",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ScrollToTop",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ScrollToBottom",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollOffset>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollOffset_g____getter_2_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x3ee4c60

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings__<__CreatePropertyBinding__ScrollOffset>g____getter_2_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  
  if (__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
    if (DAT_05703ab4 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
      DAT_05703ab4 = '\x01';
    }
    __this = (__i->fields)._scrollView;
    if (__this != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      value = UnityEngine_UIElements_ScrollView__get_scrollOffset(__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
      CustomLogic_CustomLogicVector2Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollOffset>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollOffset_g____setter_2_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee4cd0

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings__<__CreatePropertyBinding__ScrollOffset>g____setter_2_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method
               )

{
  UnityEngine_UIElements_ScrollView_o *__this;
  Il2CppObject *pIVar1;
  
  if (DAT_05703ac3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703ac3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
  if (((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0)
      ) && (__this = (__i->fields)._scrollView, __this != (UnityEngine_UIElements_ScrollView_o *)0x0
           )) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this,(UnityEngine_Vector2_o)pIVar1[3].klass,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollDecelerationRate>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollDecelerationRate_g____getter_3_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x3ee4d60

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings__<__CreatePropertyBinding__ScrollDecelerationRate>g____getter_3_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (__this = (__i->fields)._scrollView, __this != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__get_scrollDecelerationRate(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollDecelerationRate>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollDecelerationRate_g____setter_3_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee4da0

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings__<__CreatePropertyBinding__ScrollDecelerationRate>g____setter_3_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method
               )

{
  UnityEngine_UIElements_ScrollView_o *__this;
  float value;
  
  if (DAT_05703ac4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703ac4 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (__this = (__i->fields)._scrollView, __this != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__MouseWheelScrollSize>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__MouseWheelScrollSize_g____getter_4_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x3ee4e20

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings__<__CreatePropertyBinding__MouseWheelScrollSize>g____getter_4_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (__this = (__i->fields)._scrollView, __this != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__get_mouseWheelScrollSize(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__MouseWheelScrollSize>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__MouseWheelScrollSize_g____setter_4_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee4e60

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings__<__CreatePropertyBinding__MouseWheelScrollSize>g____setter_4_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method
               )

{
  UnityEngine_UIElements_ScrollView_o *__this;
  float value;
  
  if (DAT_05703ac5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703ac5 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (__this = (__i->fields)._scrollView, __this != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__HorizontalScrollEnabled>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__HorizontalScrollEnabled_g____getter_5_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x3ee4ee0

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings__<__CreatePropertyBinding__HorizontalScrollEnabled>g____getter_5_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     ((__i->fields)._scrollView != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__HorizontalScrollEnabled>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__HorizontalScrollEnabled_g____setter_5_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee4f20

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings__<__CreatePropertyBinding__HorizontalScrollEnabled>g____setter_5_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method
               )

{
  int iVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  UnityEngine_UIElements_ScrollView_o *pUVar4;
  
  if (DAT_05703ac6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703ac6 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar4 = (__i->fields)._scrollView;
  if (pUVar4 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto LAB_03ee36f6;
  if ((char)bVar3 == '\0') {
    UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar4,2,(MethodInfo *)0x0);
    pUVar4 = (__i->fields)._scrollView;
    if (pUVar4 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar4->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar4,0,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    goto LAB_03ee36f6;
  }
  iVar1 = *(int *)&(pUVar4->fields).m_ContentContainer;
  if (iVar1 == 1) {
LAB_03ee36d7:
    iVar2 = 1;
LAB_03ee36dc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar4,iVar2,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 0) {
      iVar2 = 2;
      goto LAB_03ee36dc;
    }
    iVar2 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility
                      (pUVar4,(MethodInfo *)0x0);
    if (iVar2 == 2) {
      pUVar4 = (__i->fields)._scrollView;
      if (pUVar4 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto LAB_03ee36f6;
      goto LAB_03ee36d7;
    }
  }
  pUVar4 = (__i->fields)._scrollView;
  if (pUVar4 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar4,0,(MethodInfo *)0x0);
    return;
  }
LAB_03ee36f6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__VerticalScrollEnabled>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__VerticalScrollEnabled_g____getter_6_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x3ee4fa0

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings__<__CreatePropertyBinding__VerticalScrollEnabled>g____getter_6_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     ((__i->fields)._scrollView != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__VerticalScrollEnabled>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__VerticalScrollEnabled_g____setter_6_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee4fe0

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings__<__CreatePropertyBinding__VerticalScrollEnabled>g____setter_6_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method
               )

{
  uint uVar1;
  MethodInfo *method_00;
  
  if (DAT_05703ac7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703ac7 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
    CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled(__i,uVar1 & 0xff,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin___ctor (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, UnityEngine_UIElements_ScrollView_o* scrollView, const MethodInfo* method);
// 0x3ee3500

void CustomLogic_CustomLogicScrollViewBuiltin___ctor
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,
               UnityEngine_UIElements_ScrollView_o *scrollView,MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)scrollView,method);
  (__this->fields)._scrollView = scrollView;
  il2cpp_runtime_glue(&(__this->fields)._scrollView,scrollView);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_ScrollOffset
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicScrollViewBuiltin__get_ScrollOffset (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x3ee3530

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicScrollViewBuiltin__get_ScrollOffset
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *__this_01;
  
  if (DAT_05703ab4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_05703ab4 = '\x01';
  }
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    value = UnityEngine_UIElements_ScrollView__get_scrollOffset(__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
    CustomLogic_CustomLogicVector2Builtin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_ScrollOffset
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_ScrollOffset (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, CustomLogic_CustomLogicVector2Builtin_o* value, const MethodInfo* method);
// 0x3ee35a0

void CustomLogic_CustomLogicScrollViewBuiltin__set_ScrollOffset
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,
               CustomLogic_CustomLogicVector2Builtin_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  
  if ((value != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (__this_00 = (__this->fields)._scrollView,
     __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this_00,(UnityEngine_Vector2_o)(value->fields)._value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_ScrollDecelerationRate
// il2cpp: float CustomLogic_CustomLogicScrollViewBuiltin__get_ScrollDecelerationRate (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x3ee35d0

float CustomLogic_CustomLogicScrollViewBuiltin__get_ScrollDecelerationRate
                (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar1 = UnityEngine_UIElements_ScrollView__get_scrollDecelerationRate
                      (__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_ScrollDecelerationRate
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_ScrollDecelerationRate (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ee35f0

void CustomLogic_CustomLogicScrollViewBuiltin__set_ScrollDecelerationRate
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate(__this_00,value,(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_MouseWheelScrollSize
// il2cpp: float CustomLogic_CustomLogicScrollViewBuiltin__get_MouseWheelScrollSize (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x3ee3610

float CustomLogic_CustomLogicScrollViewBuiltin__get_MouseWheelScrollSize
                (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar1 = UnityEngine_UIElements_ScrollView__get_mouseWheelScrollSize(__this_00,(MethodInfo *)0x0)
    ;
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_MouseWheelScrollSize
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_MouseWheelScrollSize (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ee3630

void CustomLogic_CustomLogicScrollViewBuiltin__set_MouseWheelScrollSize
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_HorizontalScrollEnabled
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_HorizontalScrollEnabled (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x3ee3650

bool_conflict
CustomLogic_CustomLogicScrollViewBuiltin__get_HorizontalScrollEnabled
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *pUVar1;
  uint uVar2;
  
  pUVar1 = (__this->fields)._scrollView;
  if (pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    uVar2 = *(int *)&(pUVar1->fields).m_ContentContainer - 1;
    return CONCAT31((int3)(uVar2 >> 8),uVar2 < 2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_HorizontalScrollEnabled
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_HorizontalScrollEnabled (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3ee3670

void CustomLogic_CustomLogicScrollViewBuiltin__set_HorizontalScrollEnabled
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  UnityEngine_UIElements_ScrollView_o *pUVar3;
  
  pUVar3 = (__this->fields)._scrollView;
  if (pUVar3 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto LAB_03ee36f6;
  if ((char)value == '\0') {
    UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar3,2,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._scrollView;
    if (pUVar3 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar3->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar3,0,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    goto LAB_03ee36f6;
  }
  iVar1 = *(int *)&(pUVar3->fields).m_ContentContainer;
  if (iVar1 == 1) {
LAB_03ee36d7:
    iVar2 = 1;
LAB_03ee36dc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar3,iVar2,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 0) {
      iVar2 = 2;
      goto LAB_03ee36dc;
    }
    iVar2 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility
                      (pUVar3,(MethodInfo *)0x0);
    if (iVar2 == 2) {
      pUVar3 = (__this->fields)._scrollView;
      if (pUVar3 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto LAB_03ee36f6;
      goto LAB_03ee36d7;
    }
  }
  pUVar3 = (__this->fields)._scrollView;
  if (pUVar3 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar3,0,(MethodInfo *)0x0);
    return;
  }
LAB_03ee36f6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_VerticalScrollEnabled
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_VerticalScrollEnabled (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x3ee3700

bool_conflict
CustomLogic_CustomLogicScrollViewBuiltin__get_VerticalScrollEnabled
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *pUVar1;
  
  pUVar1 = (__this->fields)._scrollView;
  if (pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pUVar1 >> 8),
                    ((ulong)(pUVar1->fields).m_ContentContainer & 0xfffffffd) == 0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_VerticalScrollEnabled
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3ee3720

void CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  UnityEngine_UIElements_ScrollView_o *pUVar3;
  
  pUVar3 = (__this->fields)._scrollView;
  if (pUVar3 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto LAB_03ee37a6;
  if ((char)value == '\0') {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar3,2,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._scrollView;
    if (pUVar3 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar3->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar3,1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    goto LAB_03ee37a6;
  }
  iVar1 = *(int *)&(pUVar3->fields).m_ContentContainer;
  if (iVar1 == 0) {
LAB_03ee378a:
    iVar2 = 0;
LAB_03ee378c:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar3,iVar2,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      iVar2 = 2;
      goto LAB_03ee378c;
    }
    iVar2 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility
                      (pUVar3,(MethodInfo *)0x0);
    if (iVar2 == 2) {
      pUVar3 = (__this->fields)._scrollView;
      if (pUVar3 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto LAB_03ee37a6;
      goto LAB_03ee378a;
    }
  }
  pUVar3 = (__this->fields)._scrollView;
  if (pUVar3 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar3,0,(MethodInfo *)0x0);
    return;
  }
LAB_03ee37a6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$Elasticity
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicScrollViewBuiltin__Elasticity (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3ee37b0

CustomLogic_CustomLogicScrollViewBuiltin_o *
CustomLogic_CustomLogicScrollViewBuiltin__Elasticity
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_01;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (DAT_05703ab5 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_TouchScrollBehavior);
    DAT_05703ab5 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_2c);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = (__this->fields)._scrollView;
    if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior(__this_00,value,(MethodInfo *)0x0);
      return __this;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iStack_30 = value;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_30);
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown elasticity value: {0}");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
  System_ArgumentException___ctor(__this_01,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_01,uVar4);
}


// CustomLogic.CustomLogicScrollViewBuiltin$$SetScrollDecelerationRate
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicScrollViewBuiltin__SetScrollDecelerationRate (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, float rate, const MethodInfo* method);
// 0x3ee38f0

CustomLogic_CustomLogicScrollViewBuiltin_o *
CustomLogic_CustomLogicScrollViewBuiltin__SetScrollDecelerationRate
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,float rate,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar1 = 1.0;
    if (rate <= 1.0) {
      fVar1 = rate;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (__this_00,(float)(-(uint)(0.0 <= rate) & (uint)fVar1),(MethodInfo *)0x0);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$SetScrollOffset
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicScrollViewBuiltin__SetScrollOffset (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, CustomLogic_CustomLogicVector2Builtin_o* offset, const MethodInfo* method);
// 0x3ee3930

CustomLogic_CustomLogicScrollViewBuiltin_o *
CustomLogic_CustomLogicScrollViewBuiltin__SetScrollOffset
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *offset,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  
  if ((offset != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (__this_00 = (__this->fields)._scrollView,
     __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this_00,(UnityEngine_Vector2_o)(offset->fields)._value.fields,(MethodInfo *)0x0);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$ScrollToTop
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__ScrollToTop (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x3ee3960

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$ScrollToBottom
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__ScrollToBottom (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x3ee3990

void CustomLogic_CustomLogicScrollViewBuiltin__ScrollToBottom
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *child;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(__this_00->klass->vtable)._97_get_contentContainer.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(__this_00,child,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicScrollViewBuiltin__get_ClassName (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x3ee39c0

System_String_o *
CustomLogic_CustomLogicScrollViewBuiltin__get_ClassName
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703ab6 == '\0') {
    il2cpp_init_method_metadata(&"ScrollView");
    DAT_05703ab6 = '\x01';
  }
  return "ScrollView";
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_IsAbstract (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x3ee39f0

bool_conflict
CustomLogic_CustomLogicScrollViewBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_IsStatic (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x3ee3a00

bool_conflict
CustomLogic_CustomLogicScrollViewBuiltin__get_IsStatic
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x3ee3a10

bool_conflict
CustomLogic_CustomLogicScrollViewBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


