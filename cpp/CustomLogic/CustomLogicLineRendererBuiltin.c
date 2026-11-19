// Type: CustomLogic.CustomLogicLineRendererBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLineRendererBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicLineRendererBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicLineRendererBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLineRendererBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59fb9f0

CustomLogic_CustomLogicLineRendererBuiltin_o *
CustomLogic_CustomLogicLineRendererBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  CustomLogic_CustomLogicLineRendererBuiltin_o *__this;
  System_String_o *pSVar2;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  float width;
  int32_t local_1c;
  
  if (Il2CppMethodInitialized_07545e2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin);
    Il2CppMethodInitialized_07545e2f = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length == 0) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin);
    CustomLogic_CustomLogicLineRendererBuiltin___ctor(__this,(MethodInfo *)0x0);
  }
  else {
    if ((int)args->max_length != 2) {
      NullCheck(args);
      local_1c = (int32_t)args->max_length;
      pSVar2 = System_Int32__ToString(&local_1c,(MethodInfo *)0x0);
      str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLineRendererBuiltin constructor found that takes ");
      str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
      pSVar2 = System_String__Concat_5301f10(str0,pSVar2,str2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_54186d0(__this_00,pSVar2,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Factory_CreateInstance);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    pIVar1 = args->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    color = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar1,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if ((int)args->max_length < 2) {
      width = 1.0;
    }
    else {
      pIVar1 = args->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      width = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (pIVar1,(MethodInfo_34BDFE0 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin);
    CustomLogic_CustomLogicLineRendererBuiltin___ctor_58f9630(__this,color,width,(MethodInfo *)0x0);
  }
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x59feb70

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545e5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545e5c = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x59febe0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__BindTo>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__BindTo_b__21_0 (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59febf0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__BindTo_b__21_0
          (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineRendererBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicComponentInstance_o *component;
  
  if (Il2CppMethodInitialized_07545e5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicComponentInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e5d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    component = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicComponentInstance
                          );
    if (__c != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
      CustomLogic_CustomLogicLineRendererBuiltin__BindTo(__c,component,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__Destroy>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__Destroy_b__22_0 (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59fec90

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__Destroy_b__22_0
          (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineRendererBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__Destroy(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__CreateLineRenderer>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__CreateLineRenderer_b__23_0 (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59fecb0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__CreateLineRenderer_b__23_0
          (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineRendererBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicLineRendererBuiltin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicLineRendererBuiltin__CreateLineRenderer((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetPosition>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__GetPosition_b__24_0 (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59fecc0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__GetPosition_b__24_0
          (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineRendererBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t index;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07545e5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e5e = '\x01';
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
    if (__c != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicLineRendererBuiltin__GetPosition(__c,index,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPosition>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__SetPosition_b__25_0 (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59fed50

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__SetPosition_b__25_0
          (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineRendererBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t index;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  
  if (Il2CppMethodInitialized_07545e5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e5f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059fee00:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((__a->max_length & 0xfffffffe) != 0) {
      position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (__c != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
        CustomLogic_CustomLogicLineRendererBuiltin__SetPosition(__c,index,position,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_059fee00;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59fbbb0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545e30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"LineColor");
    il2cpp_codegen_initialize_runtime_metadata(&"IsValid");
    il2cpp_codegen_initialize_runtime_metadata(&"NumCornerVertices");
    il2cpp_codegen_initialize_runtime_metadata(&"StartWidth");
    il2cpp_codegen_initialize_runtime_metadata(&"WidthCurve");
    il2cpp_codegen_initialize_runtime_metadata(&"ReceiveShadows");
    il2cpp_codegen_initialize_runtime_metadata(&"ColorGradientMode");
    il2cpp_codegen_initialize_runtime_metadata(&"NumCapVertices");
    il2cpp_codegen_initialize_runtime_metadata(&"BindTo");
    il2cpp_codegen_initialize_runtime_metadata(&"ColorGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"Destroy");
    il2cpp_codegen_initialize_runtime_metadata(&"EndWidth");
    il2cpp_codegen_initialize_runtime_metadata(&"UseWorldSpace");
    il2cpp_codegen_initialize_runtime_metadata(&"WidthMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"Enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"Alignment");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowCastingMode");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionCount");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateLineRenderer");
    il2cpp_codegen_initialize_runtime_metadata(&"TextureMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Loop");
    il2cpp_codegen_initialize_runtime_metadata(&"AlphaGradient");
    Il2CppMethodInitialized_07545e30 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x6095fd8c) {
    if (uVar2 < 0x2cfc2a49) {
      if (uVar2 < 0x159c41c2) {
        if (uVar2 == 0x492dcce) {
          bVar1 = System_String__op_Equality(name,"WidthCurve",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__WidthCurve
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0xf5de282) {
          bVar1 = System_String__op_Equality(name,"NumCapVertices",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__NumCapVertices
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x159c41c1) {
          bVar1 = System_String__op_Equality(name,"PositionCount",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__PositionCount
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x22c5d116) {
        bVar1 = System_String__op_Equality(name,"EndWidth",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__EndWidth
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x26701326) {
        bVar1 = System_String__op_Equality(name,"UseWorldSpace",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__UseWorldSpace
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x2cfc2a48) {
        bVar1 = System_String__op_Equality(name,"ColorGradient",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ColorGradient
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x4d76a4e6) {
      if (uVar2 == 0x3ab64785) {
        bVar1 = System_String__op_Equality(name,"ShadowCastingMode",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ShadowCastingMode
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x47671a04) {
        bVar1 = System_String__op_Equality(name,"GetPosition",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__GetPosition
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x4d76a4e5) {
        bVar1 = System_String__op_Equality(name,"Destroy",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__Destroy
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0x55b97e71) {
      bVar1 = System_String__op_Equality(name,"NumCornerVertices",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__NumCornerVertices
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x57f6a0eb) {
      bVar1 = System_String__op_Equality(name,"ReceiveShadows",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ReceiveShadows
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x6095fd8b) {
      bVar1 = System_String__op_Equality(name,"Loop",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Loop
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x9d8b8ba8) {
    if (uVar2 < 0x8adad751) {
      if (uVar2 == 0x8adad750) {
        bVar1 = System_String__op_Equality(name,"SetPosition",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__SetPosition
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x745f1e36) {
        bVar1 = System_String__op_Equality(name,"LineColor",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__LineColor
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x7d8f7dfb) {
        bVar1 = System_String__op_Equality(name,"ColorGradientMode",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ColorGradientMode
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x8c6f2b00) {
      bVar1 = System_String__op_Equality(name,"CreateLineRenderer",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__CreateLineRenderer
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x9c86e43e) {
      bVar1 = System_String__op_Equality(name,"Enabled",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Enabled
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x9d8b8ba7) {
      bVar1 = System_String__op_Equality(name,"AlphaGradient",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__AlphaGradient
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xc9bf8382) {
    if (uVar2 == 0xb495ddf7) {
      bVar1 = System_String__op_Equality(name,"TextureMode",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__TextureMode
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xc3a1ba13) {
      bVar1 = System_String__op_Equality(name,"BindTo",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__BindTo
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xc9bf8381) {
      bVar1 = System_String__op_Equality(name,"IsValid",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__IsValid
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xd66abafe) {
    bVar1 = System_String__op_Equality(name,"Alignment",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Alignment
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xde87c531) {
    bVar1 = System_String__op_Equality(name,"StartWidth",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__StartWidth
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xe1505484) {
    bVar1 = System_String__op_Equality(name,"WidthMultiplier",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__WidthMultiplier
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLineRendererBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__IsValid
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__IsValid (const MethodInfo* method);
// 0x59fc4b0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__IsValid(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545e31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__IsValid_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e31 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__IsValid_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__StartWidth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__StartWidth (const MethodInfo* method);
// 0x59fc550

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__StartWidth(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__StartWidth_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__StartWidth_g____set
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e32 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__StartWidth_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__StartWidth_g____set
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__EndWidth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__EndWidth (const MethodInfo* method);
// 0x59fc630

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__EndWidth(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__EndWidth_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__EndWidth_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e33 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__EndWidth_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__EndWidth_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__LineColor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__LineColor (const MethodInfo* method);
// 0x59fc710

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__LineColor(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__LineColor_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__LineColor_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e34 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__LineColor_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__LineColor_g____sett
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__PositionCount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__PositionCount (const MethodInfo* method);
// 0x59fc7f0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__PositionCount
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__PositionCount_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__PositionCount_g_71c0610
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e35 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__PositionCount_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__PositionCount_g_71c0610
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__Enabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Enabled (const MethodInfo* method);
// 0x59fc8d0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Enabled(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Enabled_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Enabled_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e36 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Enabled_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Enabled_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__Loop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Loop (const MethodInfo* method);
// 0x59fc9b0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Loop(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Loop_g____getter_8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Loop_g____setter_8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e37 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Loop_g____getter_8
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Loop_g____setter_8
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__NumCornerVertices
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__NumCornerVertices (const MethodInfo* method);
// 0x59fca90

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__NumCornerVertices
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCornerVertices_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCornerVertices_g_71c0600
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e38 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCornerVertices_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCornerVertices_g_71c0600
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__NumCapVertices
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__NumCapVertices (const MethodInfo* method);
// 0x59fcb70

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__NumCapVertices
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCapVertices_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCapVertices_g_71c05f0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e39 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCapVertices_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCapVertices_g_71c05f0
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__Alignment
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Alignment (const MethodInfo* method);
// 0x59fcc50

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Alignment(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Alignment_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Alignment_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e3a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Alignment_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Alignment_g____sett
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__TextureMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__TextureMode (const MethodInfo* method);
// 0x59fcd30

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__TextureMode(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__TextureMode_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__TextureMode_g____se
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e3b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__TextureMode_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__TextureMode_g____se
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__UseWorldSpace
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__UseWorldSpace (const MethodInfo* method);
// 0x59fce10

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__UseWorldSpace
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__UseWorldSpace_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__UseWorldSpace_g_71c0660
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e3c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__UseWorldSpace_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__UseWorldSpace_g_71c0660
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__ShadowCastingMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ShadowCastingMode (const MethodInfo* method);
// 0x59fcef0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ShadowCastingMode
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ShadowCastingMode_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ShadowCastingMode_g_71c0630
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e3d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ShadowCastingMode_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ShadowCastingMode_g_71c0630
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__ReceiveShadows
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ReceiveShadows (const MethodInfo* method);
// 0x59fcfd0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ReceiveShadows
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ReceiveShadows_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ReceiveShadows_g_71c0620
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e3e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ReceiveShadows_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ReceiveShadows_g_71c0620
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__ColorGradient
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ColorGradient (const MethodInfo* method);
// 0x59fd0b0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ColorGradient
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradient_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradient_g_71c0588
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e3f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradient_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradient_g_71c0588
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__AlphaGradient
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__AlphaGradient (const MethodInfo* method);
// 0x59fd190

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__AlphaGradient
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__AlphaGradient_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__AlphaGradient_g_71c0578
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e40 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__AlphaGradient_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__AlphaGradient_g_71c0578
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__WidthCurve
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__WidthCurve (const MethodInfo* method);
// 0x59fd270

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__WidthCurve(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthCurve_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthCurve_g____set
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e41 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthCurve_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthCurve_g____set
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__WidthMultiplier
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__WidthMultiplier (const MethodInfo* method);
// 0x59fd350

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__WidthMultiplier
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthMultiplier_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthMultiplier_g_71c0680
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e42 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthMultiplier_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthMultiplier_g_71c0680
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__ColorGradientMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ColorGradientMode (const MethodInfo* method);
// 0x59fd430

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ColorGradientMode
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradientMode_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradientMode_g_71c0598
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_07545e43 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradientMode_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradientMode_g_71c0598
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__BindTo
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__BindTo (const MethodInfo* method);
// 0x59fd510
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59fd545: jmp 0x59fd5b5

CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__BindTo(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicLineRendererBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545e44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__BindTo_b__21_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545e44 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__21_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__21_0;
  }
  if (__this == (System_Func_CustomLogicLineRendererBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object
                       );
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__BindTo_b__21_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields;
    pCVar2->__9__21_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__21_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__Destroy
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__Destroy (const MethodInfo* method);
// 0x59fd650
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59fd685: jmp 0x59fd6f5

CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__Destroy(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicLineRendererBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545e45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__Destroy_b__22_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545e45 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__22_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__22_0;
  }
  if (__this == (System_Func_CustomLogicLineRendererBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object
                       );
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__Destroy_b__22_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields;
    pCVar2->__9__22_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__22_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__CreateLineRenderer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__CreateLineRenderer (const MethodInfo* method);
// 0x59fd790
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59fd7c5: jmp 0x59fd835

CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__CreateLineRenderer
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicLineRendererBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545e46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__CreateLineRenderer
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545e46 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__23_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__23_0;
  }
  if (__this == (System_Func_CustomLogicLineRendererBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object
                       );
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__CreateLineRenderer
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields;
    pCVar2->__9__23_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__23_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__GetPosition
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__GetPosition (const MethodInfo* method);
// 0x59fd8d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59fd905: jmp 0x59fd975

CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__GetPosition(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicLineRendererBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545e47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__GetPosition_b__24_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545e47 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__24_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__24_0;
  }
  if (__this == (System_Func_CustomLogicLineRendererBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object
                       );
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__GetPosition_b__24_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields;
    pCVar2->__9__24_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__24_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__SetPosition
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__SetPosition (const MethodInfo* method);
// 0x59fda10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59fda45: jmp 0x59fdab5

CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__SetPosition(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicLineRendererBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545e48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__SetPosition_b__25_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545e48 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__25_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__25_0;
  }
  if (__this == (System_Func_CustomLogicLineRendererBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object
                       );
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__SetPosition_b__25_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields;
    pCVar2->__9__25_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__25_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x59fdb50

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545e49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"LineColor");
    il2cpp_codegen_initialize_runtime_metadata(&"IsValid");
    il2cpp_codegen_initialize_runtime_metadata(&"NumCornerVertices");
    il2cpp_codegen_initialize_runtime_metadata(&"StartWidth");
    il2cpp_codegen_initialize_runtime_metadata(&"WidthCurve");
    il2cpp_codegen_initialize_runtime_metadata(&"ReceiveShadows");
    il2cpp_codegen_initialize_runtime_metadata(&"ColorGradientMode");
    il2cpp_codegen_initialize_runtime_metadata(&"NumCapVertices");
    il2cpp_codegen_initialize_runtime_metadata(&"BindTo");
    il2cpp_codegen_initialize_runtime_metadata(&"ColorGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"Destroy");
    il2cpp_codegen_initialize_runtime_metadata(&"EndWidth");
    il2cpp_codegen_initialize_runtime_metadata(&"UseWorldSpace");
    il2cpp_codegen_initialize_runtime_metadata(&"WidthMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"Enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"Alignment");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowCastingMode");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionCount");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateLineRenderer");
    il2cpp_codegen_initialize_runtime_metadata(&"TextureMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Loop");
    il2cpp_codegen_initialize_runtime_metadata(&"AlphaGradient");
    Il2CppMethodInitialized_07545e49 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsValid",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StartWidth",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EndWidth",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LineColor",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PositionCount",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Enabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Loop",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NumCornerVertices",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NumCapVertices",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Alignment",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextureMode",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UseWorldSpace",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShadowCastingMode",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReceiveShadows",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColorGradient",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AlphaGradient",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WidthCurve",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WidthMultiplier",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColorGradientMode",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BindTo",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Destroy",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CreateLineRenderer",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetPosition",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPosition",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__IsValid>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__IsValid_g____getter_2_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fdf20

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__IsValid_g____getter_2_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicLineRendererBuiltin__get_IsValid(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__StartWidth>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__StartWidth_g____getter_3_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fdf50

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__StartWidth_g____getter_3_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__get_StartWidth(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__StartWidth>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__StartWidth_g____setter_3_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59fdf80

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__StartWidth_g____setter_3_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_07545e4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e4a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_StartWidth(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__EndWidth>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__EndWidth_g____getter_4_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fe000

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__EndWidth_g____getter_4_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__get_EndWidth(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__EndWidth>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__EndWidth_g____setter_4_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59fe030

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__EndWidth_g____setter_4_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_07545e4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e4b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_EndWidth(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__LineColor>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__LineColor_g____getter_5_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fe0b0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__LineColor_g____getter_5_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicColorBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicLineRendererBuiltin__get_LineColor(__i,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__LineColor>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__LineColor_g____setter_5_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59fe0d0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__LineColor_g____setter_5_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicColorBuiltin_o *value;
  
  if (Il2CppMethodInitialized_07545e4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e4c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_LineColor(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__PositionCount>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__PositionCount_g____getter_6_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fe150

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__PositionCount_g____getter_6_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__get_PositionCount(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__PositionCount>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__PositionCount_g____setter_6_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59fe180

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__PositionCount_g____setter_6_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_07545e4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e4d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_PositionCount(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____getter_7_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fe200

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____getter_7_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicLineRendererBuiltin__get_Enabled(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____setter_7_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59fe230

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____setter_7_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_07545e4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e4e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_Enabled(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Loop>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Loop_g____getter_8_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fe2b0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Loop_g____getter_8_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicLineRendererBuiltin__get_Loop(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Loop>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Loop_g____setter_8_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59fe2e0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Loop_g____setter_8_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_07545e4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e4f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_Loop(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__NumCornerVertices>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCornerVertices_g____getter_9_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fe360

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCornerVertices_g____getter_9_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__get_NumCornerVertices(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__NumCornerVertices>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCornerVertices_g____setter_9_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59fe390

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCornerVertices_g____setter_9_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_07545e50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e50 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_NumCornerVertices(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__NumCapVertices>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCapVertices_g____getter_10_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fe410

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCapVertices_g____getter_10_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__get_NumCapVertices(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__NumCapVertices>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCapVertices_g____setter_10_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59fe440

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCapVertices_g____setter_10_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_07545e51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e51 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_NumCapVertices(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Alignment>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Alignment_g____getter_11_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fe4c0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Alignment_g____getter_11_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__get_Alignment(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Alignment>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Alignment_g____setter_11_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59fe4f0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Alignment_g____setter_11_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_07545e52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e52 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_Alignment(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__TextureMode>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__TextureMode_g____getter_12_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fe570

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__TextureMode_g____getter_12_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__get_TextureMode(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__TextureMode>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__TextureMode_g____setter_12_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59fe5a0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__TextureMode_g____setter_12_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_07545e53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e53 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_TextureMode(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__UseWorldSpace>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__UseWorldSpace_g____getter_13_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fe620

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__UseWorldSpace_g____getter_13_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicLineRendererBuiltin__get_UseWorldSpace(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__UseWorldSpace>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__UseWorldSpace_g____setter_13_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59fe650

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__UseWorldSpace_g____setter_13_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_07545e54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e54 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_UseWorldSpace(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ShadowCastingMode>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ShadowCastingMode_g____getter_14_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fe6d0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ShadowCastingMode_g____getter_14_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__get_ShadowCastingMode(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ShadowCastingMode>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ShadowCastingMode_g____setter_14_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59fe700

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ShadowCastingMode_g____setter_14_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_07545e55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e55 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_ShadowCastingMode(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ReceiveShadows>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ReceiveShadows_g____getter_15_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fe780

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ReceiveShadows_g____getter_15_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicLineRendererBuiltin__get_ReceiveShadows(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ReceiveShadows>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ReceiveShadows_g____setter_15_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59fe7b0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ReceiveShadows_g____setter_15_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_07545e56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e56 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_ReceiveShadows(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ColorGradient>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradient_g____getter_16_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fe830

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradient_g____getter_16_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicLineRendererBuiltin__get_ColorGradient(__i,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ColorGradient>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradient_g____setter_16_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59fe850

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradient_g____setter_16_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *value;
  
  if (Il2CppMethodInitialized_07545e57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e57 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_ColorGradient(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__AlphaGradient>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__AlphaGradient_g____getter_17_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fe8d0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__AlphaGradient_g____getter_17_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicLineRendererBuiltin__get_AlphaGradient(__i,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__AlphaGradient>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__AlphaGradient_g____setter_17_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59fe8f0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__AlphaGradient_g____setter_17_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *value;
  
  if (Il2CppMethodInitialized_07545e58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e58 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_AlphaGradient(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__WidthCurve>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthCurve_g____getter_18_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fe970

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthCurve_g____getter_18_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicLineRendererBuiltin__get_WidthCurve(__i,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__WidthCurve>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthCurve_g____setter_18_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59fe990

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthCurve_g____setter_18_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *value;
  
  if (Il2CppMethodInitialized_07545e59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e59 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_WidthCurve(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__WidthMultiplier>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthMultiplier_g____getter_19_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59fea10

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthMultiplier_g____getter_19_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__get_WidthMultiplier(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__WidthMultiplier>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthMultiplier_g____setter_19_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59fea40

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthMultiplier_g____setter_19_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_07545e5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e5a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_WidthMultiplier(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ColorGradientMode>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradientMode_g____getter_20_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x59feac0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradientMode_g____getter_20_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__get_ColorGradientMode(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ColorGradientMode>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradientMode_g____setter_20_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59feaf0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradientMode_g____setter_20_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_07545e5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e5b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLineRendererBuiltin__set_ColorGradientMode(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin___ctor (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59f93c0

void CustomLogic_CustomLogicLineRendererBuiltin___ctor
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_58f93e0
            (__this,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,method);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin___ctor (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, float width, const MethodInfo* method);
// 0x59f9630

void CustomLogic_CustomLogicLineRendererBuiltin___ctor_58f9630
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,
               CustomLogic_CustomLogicColorBuiltin_o *color,float width,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  MethodInfo *method_00;
  UnityEngine_Color_o color_00;
  
  if (color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    __this_00 = (color->fields).Value;
    if (__this_00 != (Utility_Color255_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      color_00 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
      CustomLogic_CustomLogicLineRendererBuiltin___ctor_58f93e0(__this,color_00,width,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin___ctor (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, UnityEngine_Color_o color, float width, const MethodInfo* method);
// 0x59f93e0

void CustomLogic_CustomLogicLineRendererBuiltin___ctor_58f93e0
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,UnityEngine_Color_o color,float width,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o **targetAddress;
  UnityEngine_Material_o **targetAddress_00;
  System_String_o *path;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_LineRenderer_o *pUVar2;
  UnityEngine_Material_o *pUVar3;
  CustomLogic_CustomLogicLineRendererLifetime_o *pCVar4;
  
  if (Il2CppMethodInitialized_07545e14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicLineRendererLifetime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Materials/TransparentMaterial");
    Il2CppMethodInitialized_07545e14 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa10(pUVar1,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (pUVar1,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    targetAddress = &(__this->fields).Value;
    (__this->fields).Value = pUVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar3 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (path,"Materials/TransparentMaterial",true,false,
                        (MethodInfo_3665790 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    targetAddress_00 = &(__this->fields)._material;
    (__this->fields)._material = pUVar3;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
    if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_material(__this_00,*targetAddress_00,(MethodInfo *)0x0);
      if ((UnityEngine_Renderer_o *)*targetAddress != (UnityEngine_Renderer_o *)0x0) {
        pUVar3 = UnityEngine_Renderer__get_material
                           ((UnityEngine_Renderer_o *)*targetAddress,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__set_color(pUVar3,color,(MethodInfo *)0x0);
          if (*targetAddress != (UnityEngine_LineRenderer_o *)0x0) {
            UnityEngine_LineRenderer__set_startWidth(*targetAddress,width,(MethodInfo *)0x0);
            if (*targetAddress != (UnityEngine_LineRenderer_o *)0x0) {
              UnityEngine_LineRenderer__set_endWidth(*targetAddress,width,(MethodInfo *)0x0);
              if (*targetAddress != (UnityEngine_LineRenderer_o *)0x0) {
                UnityEngine_LineRenderer__set_positionCount(*targetAddress,0,(MethodInfo *)0x0);
                if ((UnityEngine_Renderer_o *)*targetAddress != (UnityEngine_Renderer_o *)0x0) {
                  UnityEngine_Renderer__set_enabled
                            ((UnityEngine_Renderer_o *)*targetAddress,false,(MethodInfo *)0x0);
                  if ((UnityEngine_Component_o *)*targetAddress != (UnityEngine_Component_o *)0x0) {
                    pUVar1 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
                    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                      pCVar4 = UnityEngine_GameObject__AddComponent_object_
                                         (pUVar1,(MethodInfo_353B6A0 *)
                                                 MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicLineRendererLifetime
                                         );
                      if (pCVar4 != (CustomLogic_CustomLogicLineRendererLifetime_o *)0x0) {
                        (pCVar4->fields).LineRenderer = __this;
                        Il2CppCodeGenWriteBarrier(&(pCVar4->fields).LineRenderer);
                        return;
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
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_IsValid
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_IsValid (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59f9670

bool CustomLogic_CustomLogicLineRendererBuiltin__get_IsValid
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545e15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545e15 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).Value;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$BindTo
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__BindTo (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, CustomLogic_CustomLogicComponentInstance_o* component, const MethodInfo* method);
// 0x59f96c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f9847: jmp 0x59f9725

void CustomLogic_CustomLogicLineRendererBuiltin__BindTo
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,
               CustomLogic_CustomLogicComponentInstance_o *component,MethodInfo *method)

{
  CustomLogic_CustomLogicComponentInstance_o **targetAddress;
  uint32_t uVar1;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  Map_MapObject_o *pMVar3;
  CustomLogic_CustomLogicComponentInstance_o *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  bool bVar4;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_Transform_o *parent;
  System_String_o *paramName;
  Il2CppClass *pIVar5;
  System_ArgumentException_o *__this_04;
  System_String_o *pSVar6;
  MethodInfo *pMVar7;
  UnityEngine_Object_o *pUVar8;
  
  if (Il2CppMethodInitialized_07545e16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545e16 = '\x01';
  }
  if (component != (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
    pCVar2 = (component->fields).MapObject;
    if (pCVar2 == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
label_059f984c:
      ThrowNullReferenceException();
    }
    pMVar3 = (pCVar2->fields).Value;
    if (pMVar3 == (Map_MapObject_o *)0x0) {
      pUVar8 = (UnityEngine_Object_o *)0x0;
      uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    }
    else {
      pUVar8 = (UnityEngine_Object_o *)(pMVar3->fields).GameObject;
      uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      pUVar8 = (UnityEngine_Object_o *)(__this->fields).Value;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        targetAddress = &(__this->fields)._owner;
        __this_00 = (__this->fields)._owner;
        if (__this_00 != (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
          CustomLogic_CustomLogicComponentInstance__UnregisterLineRenderer(__this_00,__this,(MethodInfo *)0x0)
          ;
        }
        *targetAddress = component;
        Il2CppCodeGenWriteBarrier(targetAddress);
        if (*targetAddress != (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
          CustomLogic_CustomLogicComponentInstance__RegisterLineRenderer
                    (*targetAddress,__this,(MethodInfo *)0x0);
          __this_01 = (UnityEngine_Component_o *)(__this->fields).Value;
          if (__this_01 != (UnityEngine_Component_o *)0x0) {
            __this_03 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
            pCVar2 = (component->fields).MapObject;
            if ((((pCVar2 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
                 (pMVar3 = (pCVar2->fields).Value, pMVar3 != (Map_MapObject_o *)0x0)) &&
                (__this_02 = (pMVar3->fields).GameObject, __this_02 != (UnityEngine_GameObject_o *)0x0)) &&
               (parent = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0),
               __this_03 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent_692d510(__this_03,parent,true,(MethodInfo *)0x0);
              pMVar7 = (component->klass->vtable)._4_get_Enabled.method;
              bVar4 = (*(component->klass->vtable)._4_get_Enabled.methodPtr)(component,pMVar7);
              if (bVar4) {
                return;
              }
              CustomLogic_CustomLogicLineRendererBuiltin__Destroy(__this,pMVar7);
              return;
            }
          }
        }
        goto label_059f984c;
      }
      pIVar5 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
      __this_04 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar5);
      pSVar6 = il2cpp_codegen_get_runtime_metadata(&"Cannot bind a destroyed LineRenderer.");
      System_InvalidOperationException___ctor_54b9a80
                ((System_InvalidOperationException_o *)__this_04,pSVar6,(MethodInfo *)0x0);
      goto label_059f98c5;
    }
  }
  pIVar5 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_04 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar5);
  pSVar6 = il2cpp_codegen_get_runtime_metadata(&"LineRenderer owner must be a valid map component.");
  paramName = il2cpp_codegen_get_runtime_metadata(&"component");
  System_ArgumentException___ctor_5410fb0(__this_04,pSVar6,paramName,(MethodInfo *)0x0);
label_059f98c5:
  pMVar7 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_BindTo);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar7);
}


// CustomLogic.CustomLogicLineRendererBuiltin$$Destroy
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__Destroy (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59f98e0

void CustomLogic_CustomLogicLineRendererBuiltin__Destroy
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545e17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_GC);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545e17 = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields).Value;
  (__this->fields).Value = (UnityEngine_LineRenderer_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (pUVar2 == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      method_00 = (MethodInfo *)0x0;
      UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
    }
  }
  CustomLogic_CustomLogicLineRendererBuiltin__ReleaseResources(__this,method_00);
  if ((TypeInfo_System_GC->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_GC);
  }
  System_GC__SuppressFinalize((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$ReleaseResources
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__ReleaseResources (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59f99f0

void CustomLogic_CustomLogicLineRendererBuiltin__ReleaseResources
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicComponentInstance_o *__this_00;
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  UnityEngine_Material_o **targetAddress;
  
  if (Il2CppMethodInitialized_07545e18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545e18 = '\x01';
  }
  (__this->fields).Value = (UnityEngine_LineRenderer_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value);
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
    CustomLogic_CustomLogicComponentInstance__UnregisterLineRenderer(__this_00,__this,(MethodInfo *)0x0);
  }
  (__this->fields)._owner = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner);
  pUVar1 = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    targetAddress = &(__this->fields)._material;
    pUVar1 = *targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
    *targetAddress = (UnityEngine_Material_o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
    return;
  }
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$Finalize
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__Finalize (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59f9ac0
// eh: try 0x59f9ae9..0x59f9af0 -> pad 0x59f9b02 catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59f9b1a..0x59f9b1f -> pad 0x59f9b38 cleanup
// eh: try 0x59f9b3b..0x59f9b45 -> pad 0x59f9b4d catch (...) [compiler noexcept guard]
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f9b02: mov rbx, rax
// asm:   0x59f9b05: cmp edx, 1
// asm:   0x59f9b08: jne 0x59f9b3b
// asm:   0x59f9b0a: mov rdi, rbx
// asm:   0x59f9b0d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59f9b12: mov rbx, qword ptr [rax]
// asm:   0x59f9b15: mov qword ptr [rsp + 0x10], rbx
// asm:   0x59f9b1a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59f9b1f: mov rdi, qword ptr [rsp + 8]
// asm:   0x59f9b24: xor esi, esi
// asm:   0x59f9b26: call 0x5615740  ; System_Object__Finalize()
// asm:   0x59f9b2b: test rbx, rbx
// asm:   0x59f9b2e: je 0x59f9afc
// asm:   0x59f9b30: mov rdi, rbx
// asm:   0x59f9b33: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59f9b38: mov rbx, rax
// asm:   0x59f9b3b: lea rdi, [rsp + 0x10]
// asm:   0x59f9b40: call 0x2fd5ac0  ; il2cpp_runtime_helper_02fd5ac0()
// asm:   0x59f9b45: mov rdi, rbx
// asm:   0x59f9b48: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59f9b4d: mov rdi, rax
// asm:   0x59f9b50: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicLineRendererBuiltin__Finalize
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicLineRendererBuiltin_o *local_20;
  undefined8 local_18;
  CustomLogic_CustomLogicLineRendererBuiltin_o **local_10;
  
  local_18 = 0;
  local_10 = &local_20;
  (__this->fields).Value = (UnityEngine_LineRenderer_o *)0x0;
  local_20 = __this;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value);
  System_Object__Finalize((Il2CppObject *)local_20,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_StartWidth
// il2cpp: float CustomLogic_CustomLogicLineRendererBuiltin__get_StartWidth (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59f9b60

float CustomLogic_CustomLogicLineRendererBuiltin__get_StartWidth
                (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_LineRenderer__get_startWidth(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_StartWidth
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_StartWidth (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59f9b80

void CustomLogic_CustomLogicLineRendererBuiltin__set_StartWidth
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_LineRenderer__set_startWidth(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_EndWidth
// il2cpp: float CustomLogic_CustomLogicLineRendererBuiltin__get_EndWidth (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59f9ba0

float CustomLogic_CustomLogicLineRendererBuiltin__get_EndWidth
                (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_LineRenderer__get_endWidth(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_EndWidth
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_EndWidth (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59f9bc0

void CustomLogic_CustomLogicLineRendererBuiltin__set_EndWidth
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_LineRenderer__set_endWidth(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_LineColor
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin__get_LineColor (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59f9be0

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicLineRendererBuiltin__get_LineColor
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Material_o *__this_01;
  Utility_Color255_o *__this_02;
  CustomLogic_CustomLogicColorBuiltin_o *__this_03;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_07545e19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_07545e19 = '\x01';
  }
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    __this_01 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Material_o *)0x0) {
      color = UnityEngine_Material__get_color(__this_01,(MethodInfo *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      Utility_Color255___ctor_5ce7790(__this_02,color,(MethodInfo *)0x0);
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_58aa2e0(__this_03,__this_02,(MethodInfo *)0x0);
      return __this_03;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_LineColor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_LineColor (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x59f9c90

void CustomLogic_CustomLogicLineRendererBuiltin__set_LineColor
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,
               CustomLogic_CustomLogicColorBuiltin_o *value,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  Utility_Color255_o *__this_01;
  UnityEngine_Material_o *__this_02;
  UnityEngine_Color_o value_00;
  
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    __this_02 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (value->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      value_00 = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_color(__this_02,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_PositionCount
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_PositionCount (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59f9ce0

int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_PositionCount
                  (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_LineRenderer__get_positionCount(__this_00,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_PositionCount
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_PositionCount (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x59f9d00

void CustomLogic_CustomLogicLineRendererBuiltin__set_PositionCount
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_LineRenderer__set_positionCount(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_Enabled
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_Enabled (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59f9d20

bool CustomLogic_CustomLogicLineRendererBuiltin__get_Enabled
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  bool bVar1;
  
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 == (UnityEngine_Renderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Renderer__get_enabled(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_Enabled
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_Enabled (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x59f9d40

void CustomLogic_CustomLogicLineRendererBuiltin__set_Enabled
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 == (UnityEngine_Renderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Renderer__set_enabled(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_Loop
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_Loop (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59f9d60

bool CustomLogic_CustomLogicLineRendererBuiltin__get_Loop
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_LineRenderer__get_loop(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_Loop
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_Loop (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x59f9d80

void CustomLogic_CustomLogicLineRendererBuiltin__set_Loop
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_LineRenderer__set_loop(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_NumCornerVertices
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_NumCornerVertices (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59f9da0

int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_NumCornerVertices
                  (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_LineRenderer__get_numCornerVertices(__this_00,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_NumCornerVertices
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_NumCornerVertices (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x59f9dc0

void CustomLogic_CustomLogicLineRendererBuiltin__set_NumCornerVertices
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_LineRenderer__set_numCornerVertices(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_NumCapVertices
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_NumCapVertices (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59f9de0

int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_NumCapVertices
                  (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_LineRenderer__get_numCapVertices(__this_00,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_NumCapVertices
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_NumCapVertices (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x59f9e00

void CustomLogic_CustomLogicLineRendererBuiltin__set_NumCapVertices
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_LineRenderer__set_numCapVertices(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_Alignment
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_Alignment (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59f9e20

int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_Alignment
                  (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_LineRenderer__get_alignment(__this_00,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_Alignment
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_Alignment (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x59f9e40

void CustomLogic_CustomLogicLineRendererBuiltin__set_Alignment
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
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
  
  if (Il2CppMethodInitialized_07545e1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_LineAlignment);
    Il2CppMethodInitialized_07545e1a = '\x01';
  }
  handle = TypeRef_UnityEngine_LineAlignment;
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
    __this_00 = (__this->fields).Value;
    if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_LineRenderer__set_alignment(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  iStack_30 = value;
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown line alignment value: {0}");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this_01,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_set_Alignment);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_TextureMode
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_TextureMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59f9f80

int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_TextureMode
                  (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_LineRenderer__get_textureMode(__this_00,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_TextureMode
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_TextureMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x59f9fa0

void CustomLogic_CustomLogicLineRendererBuiltin__set_TextureMode
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
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
  
  if (Il2CppMethodInitialized_07545e1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_LineTextureMode);
    Il2CppMethodInitialized_07545e1b = '\x01';
  }
  handle = TypeRef_UnityEngine_LineTextureMode;
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
    __this_00 = (__this->fields).Value;
    if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_LineRenderer__set_textureMode(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  iStack_30 = value;
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown line texture mode value: {0}");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this_01,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_set_TextureMode);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_UseWorldSpace
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_UseWorldSpace (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59fa0e0

bool CustomLogic_CustomLogicLineRendererBuiltin__get_UseWorldSpace
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_LineRenderer__get_useWorldSpace(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_UseWorldSpace
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_UseWorldSpace (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x59fa100

void CustomLogic_CustomLogicLineRendererBuiltin__set_UseWorldSpace
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_LineRenderer__set_useWorldSpace(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_ShadowCastingMode
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_ShadowCastingMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59fa120

int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_ShadowCastingMode
                  (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 == (UnityEngine_Renderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_Renderer__get_shadowCastingMode(__this_00,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_ShadowCastingMode
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_ShadowCastingMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x59fa140

void CustomLogic_CustomLogicLineRendererBuiltin__set_ShadowCastingMode
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
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
  
  if (Il2CppMethodInitialized_07545e1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Rendering_ShadowCastingMode);
    Il2CppMethodInitialized_07545e1c = '\x01';
  }
  handle = TypeRef_UnityEngine_Rendering_ShadowCastingMode;
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
    __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
    if (__this_00 == (UnityEngine_Renderer_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Renderer__set_shadowCastingMode(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  iStack_30 = value;
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown shadow casting mode value: {0}");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this_01,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_set_ShadowCastingMode);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_ReceiveShadows
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_ReceiveShadows (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59fa280

bool CustomLogic_CustomLogicLineRendererBuiltin__get_ReceiveShadows
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  bool bVar1;
  
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 == (UnityEngine_Renderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Renderer__get_receiveShadows(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_ReceiveShadows
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_ReceiveShadows (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x59fa2a0

void CustomLogic_CustomLogicLineRendererBuiltin__set_ReceiveShadows
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 == (UnityEngine_Renderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Renderer__set_receiveShadows(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_ColorGradient
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin__get_ColorGradient (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59fa2c0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicLineRendererBuiltin__get_ColorGradient
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  uint uVar5;
  UnityEngine_LineRenderer_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar6;
  MethodInfo *pMVar7;
  int iVar8;
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  UnityEngine_Gradient_o *__this_03;
  UnityEngine_GradientColorKey_array *pUVar9;
  ulong uVar10;
  Utility_Color255_o *__this_04;
  CustomLogic_CustomLogicColorBuiltin_o *__this_05;
  float *pfVar11;
  ulong uVar12;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_07545e1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    Il2CppMethodInitialized_07545e1d = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_02,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    __this_03 = UnityEngine_LineRenderer__get_colorGradient(__this_00,(MethodInfo *)0x0);
    if (__this_03 != (UnityEngine_Gradient_o *)0x0) {
      pUVar9 = UnityEngine_Gradient__get_colorKeys(__this_03,(MethodInfo *)0x0);
      if (pUVar9 != (UnityEngine_GradientColorKey_array *)0x0) {
        iVar8 = (int)pUVar9->max_length;
        if (__this_02 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          if (0 < iVar8) goto label_059fa48e;
        }
        else if (0 < iVar8) {
          uVar10 = pUVar9->max_length & 0xffffffff;
          pfVar11 = &pUVar9->m_Items[0].fields.color.fields.b;
          uVar12 = 0;
          do {
            if (uVar10 <= uVar12) {
              ThrowIndexOutOfRangeException();
            }
            uVar2 = ((UnityEngine_Color_Fields *)(pfVar11 + -2))->r;
            uVar4 = ((UnityEngine_Color_Fields *)(pfVar11 + -2))->g;
            color.fields.g = (float)uVar4;
            color.fields.r = (float)uVar2;
            uVar3 = *(undefined8 *)pfVar11;
            __this_01 = (__this_02->fields).List;
            __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
            color.fields._8_8_ = uVar3;
            Utility_Color255___ctor_5ce7790(__this_04,color,(MethodInfo *)0x0);
            __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)
            ;
            CustomLogic_CustomLogicColorBuiltin___ctor_58aa2e0(__this_05,__this_04,(MethodInfo *)0x0);
            pMVar7 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_059fa48e;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (__this_01->fields)._items;
            if (pSVar6 == (System_Object_array *)0x0) goto label_059fa48e;
            uVar5 = (__this_01->fields)._size;
            if (uVar5 < (uint)pSVar6->max_length) {
              (__this_01->fields)._size = uVar5 + 1;
              pSVar6->m_Items[(int)uVar5] = (Il2CppObject *)__this_05;
              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar5);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)__this_05,
                         (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
            }
            uVar12 = uVar12 + 1;
            uVar5 = (uint)pUVar9->max_length;
            uVar10 = (ulong)uVar5;
            pfVar11 = pfVar11 + 5;
          } while ((long)uVar12 < (long)(int)uVar5);
        }
        return __this_02;
      }
    }
  }
label_059fa48e:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_ColorGradient
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_ColorGradient (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, CustomLogic_CustomLogicListBuiltin_o* value, const MethodInfo* method);
// 0x59fa4a0
// eh: try 0x59fa630..0x59fa82b -> pad 0x59fa839 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59fa853..0x59fa858 -> pad 0x59fa87d cleanup
// eh: try 0x59fa880..0x59fa88a -> pad 0x59fa892 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59fa82b: jmp 0x59fa83b
// asm:   0x59fa82d: jmp 0x59fa83b
// asm:   0x59fa82f: jmp 0x59fa83b
// asm:   0x59fa831: jmp 0x59fa83b
// asm:   0x59fa833: jmp 0x59fa83b
// asm:   0x59fa835: jmp 0x59fa83b
// asm:   0x59fa837: jmp 0x59fa83b
// asm:   0x59fa839: jmp 0x59fa83b
// asm:   0x59fa83b: mov r15, rax
// asm:   0x59fa83e: cmp edx, 1
// asm:   0x59fa841: jne 0x59fa880
// asm:   0x59fa843: mov rdi, r15
// asm:   0x59fa846: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59fa84b: mov r15, qword ptr [rax]
// asm:   0x59fa84e: mov qword ptr [rsp + 0x68], r15
// asm:   0x59fa853: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59fa858: lea rax, [rip + 0x1893db9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x59fa85f: mov rsi, qword ptr [rax]
// asm:   0x59fa862: lea rdi, [rsp + 0x40]
// asm:   0x59fa867: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59fa86c: test r15, r15
// asm:   0x59fa86f: je 0x59fa79d
// asm:   0x59fa875: mov rdi, r15
// asm:   0x59fa878: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59fa87d: mov r15, rax
// asm:   0x59fa880: lea rdi, [rsp + 0x68]
// asm:   0x59fa885: call 0x2fd5af0  ; il2cpp_runtime_helper_02fd5af0()
// asm:   0x59fa88a: mov rdi, r15
// asm:   0x59fa88d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59fa892: mov rdi, rax
// asm:   0x59fa895: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicLineRendererBuiltin__set_ColorGradient
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,
               CustomLogic_CustomLogicListBuiltin_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_GradientColorKey_o *pUVar2;
  byte bVar3;
  uint uVar4;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_LineRenderer_o *__this_01;
  UnityEngine_GradientColorKey_o item;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Collections_Generic_List_GradientColorKey__o *__this_02;
  UnityEngine_Gradient_o *__this_03;
  UnityEngine_GradientColorKey_array *pUVar7;
  UnityEngine_Color_o UVar8;
  undefined1 auStack_88 [16];
  float fStack_78;
  undefined4 uStack_74;
  System_Collections_Generic_List_Enumerator_object__o SStack_68;
  CustomLogic_CustomLogicLineRendererBuiltin_o *pCStack_48;
  undefined8 uStack_40;
  System_Collections_Generic_List_Enumerator_object__o *pSStack_38;
  
  if (Il2CppMethodInitialized_07545e1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GradientColorKey_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GradientColorKey_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GradientColorKey_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GradientColorKey);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid color type");
    Il2CppMethodInitialized_07545e1e = '\x01';
  }
  SStack_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_68.fields._index = 0;
  SStack_68.fields._version = 0;
  SStack_68.fields._current = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GradientColorKey);
  System_Collections_Generic_List_GradientColorKey____ctor
            (__this_02,(MethodInfo_390FA20 *)MethodInfo_System_Collections_Generic_List_GradientColorKey_ctor)
  ;
  if ((value != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this_00 = (value->fields).List, __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_88,__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    SStack_68.fields._current = (Il2CppObject *)CONCAT44(uStack_74,fStack_78);
    SStack_68.fields._list = (System_Collections_Generic_List_T__o *)auStack_88._0_8_;
    SStack_68.fields._index = auStack_88._8_4_;
    SStack_68.fields._version = auStack_88._12_4_;
    uStack_40 = 0;
    pSStack_38 = &SStack_68;
    pCStack_48 = __this;
    if (__this_02 == (System_Collections_Generic_List_GradientColorKey__o *)0x0) {
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&SStack_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
      if (bVar6) {
        if (SStack_68.fields._current != (Il2CppObject *)0x0) {
          bVar3 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
          if ((bVar3 <= ((SStack_68.fields._current)->klass->_2).typeHierarchyDepth) &&
             (((SStack_68.fields._current)->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
            if (SStack_68.fields._current[3].klass != (Il2CppClass *)0x0) {
              UVar8 = Utility_Color255__ToColor
                                ((Utility_Color255_o *)SStack_68.fields._current[3].klass,(MethodInfo *)0x0);
              auStack_88._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
              auStack_88._8_4_ = 0;
              auStack_88._12_4_ = 0;
              fStack_78 = 0.0;
              UnityEngine_GradientColorKey___ctor
                        ((UnityEngine_GradientColorKey_o *)auStack_88,UVar8,0.0,(MethodInfo *)0x0);
label_059fa826:
              ThrowNullReferenceException();
            }
label_059fa7fb:
            ThrowNullReferenceException();
          }
        }
label_059fa74a:
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)"Invalid color type",(MethodInfo *)0x0);
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (&SStack_68,
                   (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose)
        ;
        return;
      }
    }
    else {
      while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&SStack_68,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext), bVar6)
      {
        if (SStack_68.fields._current == (Il2CppObject *)0x0) goto label_059fa74a;
        bVar3 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
        if ((((SStack_68.fields._current)->klass->_2).typeHierarchyDepth < bVar3) ||
           (((SStack_68.fields._current)->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) goto label_059fa74a;
        if (SStack_68.fields._current[3].klass == (Il2CppClass *)0x0) goto label_059fa7fb;
        UVar8 = Utility_Color255__ToColor
                          ((Utility_Color255_o *)SStack_68.fields._current[3].klass,(MethodInfo *)0x0);
        auStack_88._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        auStack_88._8_4_ = 0;
        auStack_88._12_4_ = 0;
        fStack_78 = 0.0;
        UnityEngine_GradientColorKey___ctor
                  ((UnityEngine_GradientColorKey_o *)auStack_88,UVar8,0.0,(MethodInfo *)0x0);
        pMVar5 = MethodInfo_System_Collections_Generic_List_GradientColorKey_Add;
        piVar1 = &(__this_02->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar7 = (__this_02->fields)._items;
        if (pUVar7 == (UnityEngine_GradientColorKey_array *)0x0) goto label_059fa826;
        uVar4 = (__this_02->fields)._size;
        if (uVar4 < (uint)pUVar7->max_length) {
          (__this_02->fields)._size = uVar4 + 1;
          pUVar7->m_Items[(int)uVar4].fields.time = fStack_78;
          pUVar2 = pUVar7->m_Items + (int)uVar4;
          (pUVar2->fields).color.fields.r = (float)auStack_88._0_4_;
          (pUVar2->fields).color.fields.g = (float)auStack_88._4_4_;
          (pUVar2->fields).color.fields.b = (float)auStack_88._8_4_;
          (pUVar2->fields).color.fields.a = (float)auStack_88._12_4_;
        }
        else {
          item.fields.color.fields.b = (float)auStack_88._8_4_;
          item.fields.color.fields.a = (float)auStack_88._12_4_;
          item.fields.color.fields.r = (float)auStack_88._0_4_;
          item.fields.color.fields.g = (float)auStack_88._4_4_;
          item.fields.time = fStack_78;
          System_Collections_Generic_List_GradientColorKey___AddWithResize
                    (__this_02,item,(MethodInfo_3910390 *)pMVar5->klass->rgctx_data[0xe].method);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&SStack_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    __this_01 = (pCStack_48->fields).Value;
    if (((__this_01 != (UnityEngine_LineRenderer_o *)0x0) &&
        (__this_03 = UnityEngine_LineRenderer__get_colorGradient(__this_01,(MethodInfo *)0x0),
        __this_02 != (System_Collections_Generic_List_GradientColorKey__o *)0x0)) &&
       (pUVar7 = System_Collections_Generic_List_GradientColorKey___ToArray
                           (__this_02,
                            (MethodInfo_3912A50 *)
                            MethodInfo_System_Collections_Generic_List_GradientColorKey_ToArray),
       __this_03 != (UnityEngine_Gradient_o *)0x0)) {
      UnityEngine_Gradient__set_colorKeys(__this_03,pUVar7,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_AlphaGradient
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin__get_AlphaGradient (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59fa8a0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicLineRendererBuiltin__get_AlphaGradient
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_LineRenderer_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  int iVar5;
  undefined8 in_RAX;
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  UnityEngine_Gradient_o *__this_03;
  UnityEngine_GradientAlphaKey_array *pUVar6;
  ulong uVar7;
  Il2CppObject *item;
  ulong uVar8;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_07545e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    Il2CppMethodInitialized_07545e1f = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_02,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    __this_03 = UnityEngine_LineRenderer__get_colorGradient(__this_00,(MethodInfo *)0x0);
    if (__this_03 != (UnityEngine_Gradient_o *)0x0) {
      pUVar6 = UnityEngine_Gradient__get_alphaKeys(__this_03,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_GradientAlphaKey_array *)0x0) {
        iVar5 = (int)pUVar6->max_length;
        if (__this_02 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          if (0 < iVar5) goto label_059fa9f6;
        }
        else if (0 < iVar5) {
          uVar7 = pUVar6->max_length & 0xffffffff;
          uVar8 = 0;
          do {
            if (uVar7 <= uVar8) {
              ThrowIndexOutOfRangeException();
            }
            __this_01 = (__this_02->fields).List;
            uStack_38 = CONCAT44(pUVar6->m_Items[uVar8].fields.alpha,(undefined4)uStack_38);
            item = il2cpp_vm_Object_Box(g_data_07556740,(void *)((long)&uStack_38 + 4));
            pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_059fa9f6;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this_01->fields)._items;
            if (pSVar3 == (System_Object_array *)0x0) goto label_059fa9f6;
            uVar2 = (__this_01->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this_01->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = item;
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,item,(MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
            }
            uVar8 = uVar8 + 1;
            uVar2 = (uint)pUVar6->max_length;
            uVar7 = (ulong)uVar2;
          } while ((long)uVar8 < (long)(int)uVar2);
        }
        return __this_02;
      }
    }
  }
label_059fa9f6:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_AlphaGradient
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_AlphaGradient (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, CustomLogic_CustomLogicListBuiltin_o* value, const MethodInfo* method);
// 0x59faa00
// eh: try 0x59fab60..0x59fad74 -> pad 0x59fad7a (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59fad96..0x59fad9b -> pad 0x59fadc0 cleanup
// eh: try 0x59fadc3..0x59fadcd -> pad 0x59fadd5 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59fad74: jmp 0x59fad7e
// asm:   0x59fad76: jmp 0x59fad7e
// asm:   0x59fad78: jmp 0x59fad7e
// asm:   0x59fad7a: jmp 0x59fad7e
// asm:   0x59fad7c: jmp 0x59fad7e
// asm:   0x59fad7e: mov rbx, rax
// asm:   0x59fad81: cmp edx, 1
// asm:   0x59fad84: jne 0x59fadc3
// asm:   0x59fad86: mov rdi, rbx
// asm:   0x59fad89: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59fad8e: mov rbx, qword ptr [rax]
// asm:   0x59fad91: mov qword ptr [rsp + 0x28], rbx
// asm:   0x59fad96: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59fad9b: lea rax, [rip + 0x1893876]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x59fada2: mov rsi, qword ptr [rax]
// asm:   0x59fada5: lea rdi, [rsp + 0x10]
// asm:   0x59fadaa: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59fadaf: test rbx, rbx
// asm:   0x59fadb2: je 0x59facbb
// asm:   0x59fadb8: mov rdi, rbx
// asm:   0x59fadbb: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59fadc0: mov rbx, rax
// asm:   0x59fadc3: lea rdi, [rsp + 0x28]
// asm:   0x59fadc8: call 0x2fd5b20  ; il2cpp_runtime_helper_02fd5b20()
// asm:   0x59fadcd: mov rdi, rbx
// asm:   0x59fadd0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59fadd5: mov rdi, rax
// asm:   0x59fadd8: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicLineRendererBuiltin__set_AlphaGradient
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,
               CustomLogic_CustomLogicListBuiltin_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  uint uVar3;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_LineRenderer_o *__this_01;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_GradientAlphaKey__o *__this_02;
  float *pfVar6;
  UnityEngine_Gradient_o *__this_03;
  UnityEngine_GradientAlphaKey_array *pUVar7;
  Il2CppObject *obj;
  UnityEngine_GradientAlphaKey_Fields UStack_70;
  undefined1 auStack_68 [8];
  undefined1 *puStack_60;
  Il2CppObject *pIStack_58;
  undefined1 auStack_50 [16];
  Il2CppObject *pIStack_40;
  CustomLogic_CustomLogicLineRendererBuiltin_o *pCStack_38;
  
  if (Il2CppMethodInitialized_07545e20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GradientAlphaKey_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GradientAlphaKey_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GradientAlphaKey_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GradientAlphaKey);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid alpha type");
    Il2CppMethodInitialized_07545e20 = '\x01';
  }
  auStack_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  pIStack_58 = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GradientAlphaKey);
  System_Collections_Generic_List_GradientAlphaKey____ctor
            (__this_02,(MethodInfo_390C860 *)MethodInfo_System_Collections_Generic_List_GradientAlphaKey_ctor)
  ;
  if ((value != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this_00 = (value->fields).List, __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_50,__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    pIStack_58 = pIStack_40;
    auStack_68 = (undefined1  [8])auStack_50._0_8_;
    puStack_60 = (undefined1 *)auStack_50._8_8_;
    auStack_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    auStack_50._8_8_ = auStack_68;
    pCStack_38 = __this;
    if (__this_02 == (System_Collections_Generic_List_GradientAlphaKey__o *)0x0) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
      obj = pIStack_58;
      if (bVar5) {
        if ((pIStack_58 != (Il2CppObject *)0x0) && (pIStack_58->klass == g_data_07556740)) {
          UStack_70.alpha = 0.0;
          UStack_70.time = 0.0;
          if (((pIStack_58->klass->_1).element_class == (g_data_07556740->_1).element_class) &&
             (pfVar6 = il2cpp_vm_Object_Unbox(pIStack_58),
             (obj->klass->_1).element_class == (g_data_07556740->_1).element_class)) {
            fVar2 = *pfVar6;
            pfVar6 = il2cpp_vm_Object_Unbox(obj);
            UnityEngine_GradientAlphaKey___ctor
                      ((UnityEngine_GradientAlphaKey_o *)&UStack_70,fVar2,*pfVar6,(MethodInfo *)0x0);
label_059fad67:
            ThrowNullReferenceException();
          }
label_059fad6c:
          il2cpp_codegen_raise_invalid_cast_exception(obj);
        }
label_059fac68:
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)"Invalid alpha type",(MethodInfo *)0x0);
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
                   (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose)
        ;
        return;
      }
    }
    else {
      while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext),
            obj = pIStack_58, bVar5) {
        if ((pIStack_58 == (Il2CppObject *)0x0) || (pIStack_58->klass != g_data_07556740)) goto label_059fac68;
        UStack_70.alpha = 0.0;
        UStack_70.time = 0.0;
        if (((pIStack_58->klass->_1).element_class != (g_data_07556740->_1).element_class) ||
           (pfVar6 = il2cpp_vm_Object_Unbox(pIStack_58),
           (obj->klass->_1).element_class != (g_data_07556740->_1).element_class)) goto label_059fad6c;
        fVar2 = *pfVar6;
        pfVar6 = il2cpp_vm_Object_Unbox(obj);
        UnityEngine_GradientAlphaKey___ctor
                  ((UnityEngine_GradientAlphaKey_o *)&UStack_70,fVar2,*pfVar6,(MethodInfo *)0x0);
        pMVar4 = MethodInfo_System_Collections_Generic_List_GradientAlphaKey_Add;
        piVar1 = &(__this_02->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar7 = (__this_02->fields)._items;
        if (pUVar7 == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_059fad67;
        uVar3 = (__this_02->fields)._size;
        if (uVar3 < (uint)pUVar7->max_length) {
          (__this_02->fields)._size = uVar3 + 1;
          pUVar7->m_Items[(int)uVar3].fields = UStack_70;
        }
        else {
          System_Collections_Generic_List_GradientAlphaKey___AddWithResize
                    (__this_02,(UnityEngine_GradientAlphaKey_o)UStack_70,
                     (MethodInfo_390D180 *)pMVar4->klass->rgctx_data[0xe].method);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    __this_01 = (pCStack_38->fields).Value;
    if (((__this_01 != (UnityEngine_LineRenderer_o *)0x0) &&
        (__this_03 = UnityEngine_LineRenderer__get_colorGradient(__this_01,(MethodInfo *)0x0),
        __this_02 != (System_Collections_Generic_List_GradientAlphaKey__o *)0x0)) &&
       (pUVar7 = System_Collections_Generic_List_GradientAlphaKey___ToArray
                           (__this_02,
                            (MethodInfo_390F490 *)
                            MethodInfo_System_Collections_Generic_List_GradientAlphaKey_ToArray),
       __this_03 != (UnityEngine_Gradient_o *)0x0)) {
      UnityEngine_Gradient__set_alphaKeys(__this_03,pUVar7,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_WidthCurve
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin__get_WidthCurve (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59fade0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicLineRendererBuiltin__get_WidthCurve
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  undefined4 uVar3;
  UnityEngine_LineRenderer_o *__this_00;
  undefined4 uVar5;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  UnityEngine_Vector2_Fields UVar8;
  MethodInfo *pMVar9;
  float fVar10;
  int iVar11;
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  UnityEngine_AnimationCurve_o *__this_03;
  UnityEngine_Keyframe_array *pUVar12;
  ulong uVar13;
  CustomLogic_CustomLogicVector2Builtin_o *__this_04;
  UnityEngine_Keyframe_o *pUVar14;
  ulong uVar15;
  float fVar16;
  UnityEngine_Keyframe_Fields UStack_68;
  float fStack_48;
  
  if (Il2CppMethodInitialized_07545e21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    Il2CppMethodInitialized_07545e21 = '\x01';
  }
  UStack_68.m_WeightedMode = 0;
  UStack_68.m_InWeight = 0.0;
  UStack_68.m_OutWeight = 0.0;
  UStack_68.m_Time = 0.0;
  UStack_68.m_Value = 0.0;
  UStack_68.m_InTangent = 0.0;
  UStack_68.m_OutTangent = 0.0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_02,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    __this_03 = UnityEngine_LineRenderer__get_widthCurve(__this_00,(MethodInfo *)0x0);
    if (__this_03 != (UnityEngine_AnimationCurve_o *)0x0) {
      pUVar12 = UnityEngine_AnimationCurve__get_keys(__this_03,(MethodInfo *)0x0);
      if (pUVar12 != (UnityEngine_Keyframe_array *)0x0) {
        iVar11 = (int)pUVar12->max_length;
        if (__this_02 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          if (0 < iVar11) goto label_059faff7;
        }
        else if (0 < iVar11) {
          uVar13 = pUVar12->max_length & 0xffffffff;
          pUVar14 = pUVar12->m_Items;
          uVar15 = 0;
          do {
            if (uVar13 <= uVar15) {
              ThrowIndexOutOfRangeException();
            }
            UStack_68.m_Time = (pUVar14->fields).m_Time;
            UStack_68.m_Value = (pUVar14->fields).m_Value;
            uVar6 = (pUVar14->fields).m_InTangent;
            uVar7 = (pUVar14->fields).m_OutTangent;
            uVar3 = (pUVar14->fields).m_WeightedMode;
            uVar5 = (pUVar14->fields).m_InWeight;
            UStack_68.m_OutWeight = (pUVar14->fields).m_OutWeight;
            __this_01 = (__this_02->fields).List;
            UStack_68.m_InTangent = (float)uVar6;
            UStack_68.m_OutTangent = (float)uVar7;
            UStack_68.m_WeightedMode = uVar3;
            UStack_68.m_InWeight = (float)uVar5;
            fVar16 = UnityEngine_Keyframe__get_time((UnityEngine_Keyframe_o *)&UStack_68,(MethodInfo *)0x0);
            fStack_48 = UnityEngine_Keyframe__get_value
                                  ((UnityEngine_Keyframe_o *)&UStack_68,(MethodInfo *)0x0);
            __this_04 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
            if (Il2CppMethodInitialized_07545caf == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
              Il2CppMethodInitialized_07545caf = '\x01';
            }
            if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
            }
            fVar10 = fStack_48;
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)__this_04,(MethodInfo *)0x0);
            UVar8.y = fVar10;
            UVar8.x = fVar16;
            (__this_04->fields)._value.fields = UVar8;
            pMVar9 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_059faff7;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this_01->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto label_059faff7;
            uVar2 = (__this_01->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this_01->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)__this_04,
                         (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
            }
            uVar15 = uVar15 + 1;
            uVar2 = (uint)pUVar12->max_length;
            uVar13 = (ulong)uVar2;
            pUVar14 = pUVar14 + 1;
          } while ((long)uVar15 < (long)(int)uVar2);
        }
        return __this_02;
      }
    }
  }
label_059faff7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_WidthCurve
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_WidthCurve (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, CustomLogic_CustomLogicListBuiltin_o* value, const MethodInfo* method);
// 0x59fb010
// eh: try 0x59fb1a9..0x59fb39f -> pad 0x59fb3a7 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59fb3c4..0x59fb3c9 -> pad 0x59fb3ee cleanup
// eh: try 0x59fb3f1..0x59fb3fe -> pad 0x59fb406 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59fb39f: jmp 0x59fb3a9
// asm:   0x59fb3a1: jmp 0x59fb3a9
// asm:   0x59fb3a3: jmp 0x59fb3a9
// asm:   0x59fb3a5: jmp 0x59fb3a9
// asm:   0x59fb3a7: jmp 0x59fb3a9
// asm:   0x59fb3a9: mov r15, rax
// asm:   0x59fb3ac: cmp edx, 1
// asm:   0x59fb3af: jne 0x59fb3f1
// asm:   0x59fb3b1: mov rdi, r15
// asm:   0x59fb3b4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59fb3b9: mov r15, qword ptr [rax]
// asm:   0x59fb3bc: mov qword ptr [rsp + 0x88], r15
// asm:   0x59fb3c4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59fb3c9: lea rax, [rip + 0x1893248]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x59fb3d0: mov rsi, qword ptr [rax]
// asm:   0x59fb3d3: lea rdi, [rsp + 0x20]
// asm:   0x59fb3d8: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59fb3dd: test r15, r15
// asm:   0x59fb3e0: je 0x59fb31c
// asm:   0x59fb3e6: mov rdi, r15
// asm:   0x59fb3e9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59fb3ee: mov r15, rax
// asm:   0x59fb3f1: lea rdi, [rsp + 0x88]
// asm:   0x59fb3f9: call 0x2fd5b50  ; il2cpp_runtime_helper_02fd5b50()
// asm:   0x59fb3fe: mov rdi, r15
// asm:   0x59fb401: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59fb406: mov rdi, rax
// asm:   0x59fb409: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicLineRendererBuiltin__set_WidthCurve
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,
               CustomLogic_CustomLogicListBuiltin_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Keyframe_o *pUVar2;
  byte bVar3;
  uint uVar4;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_LineRenderer_o *__this_01;
  UnityEngine_Keyframe_o item;
  UnityEngine_Keyframe_Fields *pUVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  System_Collections_Generic_List_Keyframe__o *__this_02;
  UnityEngine_AnimationCurve_o *__this_03;
  UnityEngine_Keyframe_array *pUVar8;
  System_Collections_Generic_List_Enumerator_object__o SStack_a8;
  System_Collections_Generic_List_T__o *pSStack_88;
  float fStack_80;
  float fStack_7c;
  int32_t iStack_78;
  undefined8 uStack_74;
  undefined1 auStack_68 [24];
  float fStack_50;
  CustomLogic_CustomLogicLineRendererBuiltin_o *pCStack_48;
  undefined8 uStack_40;
  System_Collections_Generic_List_Enumerator_object__o *pSStack_38;
  
  if (Il2CppMethodInitialized_07545e22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Keyframe_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Keyframe_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Keyframe_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Keyframe);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid point type");
    Il2CppMethodInitialized_07545e22 = '\x01';
  }
  SStack_a8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_a8.fields._index = 0;
  SStack_a8.fields._version = 0;
  SStack_a8.fields._current = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Keyframe);
  System_Collections_Generic_List_Keyframe____ctor
            (__this_02,(MethodInfo_3929140 *)MethodInfo_System_Collections_Generic_List_Keyframe_ctor);
  if ((value != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this_00 = (value->fields).List, __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_68,__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    SStack_a8.fields._current = (Il2CppObject *)CONCAT44(auStack_68._20_4_,auStack_68._16_4_);
    SStack_a8.fields._version = auStack_68._12_4_;
    SStack_a8.fields._index = auStack_68._8_4_;
    SStack_a8.fields._list = (System_Collections_Generic_List_T__o *)auStack_68._0_8_;
    uStack_40 = 0;
    pSStack_38 = &SStack_a8;
    pCStack_48 = __this;
    if (__this_02 == (System_Collections_Generic_List_Keyframe__o *)0x0) {
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&SStack_a8,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
      if (bVar7) {
        if (SStack_a8.fields._current != (Il2CppObject *)0x0) {
          bVar3 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
          if ((bVar3 <= ((SStack_a8.fields._current)->klass->_2).typeHierarchyDepth) &&
             (((SStack_a8.fields._current)->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
            iStack_78 = 0;
            uStack_74._0_4_ = 0.0;
            uStack_74._4_4_ = 0.0;
            pSStack_88 = (System_Collections_Generic_List_T__o *)0x0;
            fStack_80 = 0.0;
            fStack_7c = 0.0;
            UnityEngine_Keyframe___ctor
                      ((UnityEngine_Keyframe_o *)&pSStack_88,*(float *)&SStack_a8.fields._current[3].klass,
                       *(float *)((long)&SStack_a8.fields._current[3].klass + 4),(MethodInfo *)0x0);
label_059fb39a:
            ThrowNullReferenceException();
          }
        }
label_059fb2c9:
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)"Invalid point type",(MethodInfo *)0x0);
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (&SStack_a8,
                   (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose)
        ;
        return;
      }
    }
    else {
      while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&SStack_a8,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext), bVar7)
      {
        if (SStack_a8.fields._current == (Il2CppObject *)0x0) goto label_059fb2c9;
        bVar3 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
        if ((((SStack_a8.fields._current)->klass->_2).typeHierarchyDepth < bVar3) ||
           (((SStack_a8.fields._current)->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) goto label_059fb2c9;
        iStack_78 = 0;
        uStack_74._0_4_ = 0.0;
        uStack_74._4_4_ = 0.0;
        pSStack_88 = (System_Collections_Generic_List_T__o *)0x0;
        fStack_80 = 0.0;
        fStack_7c = 0.0;
        UnityEngine_Keyframe___ctor
                  ((UnityEngine_Keyframe_o *)&pSStack_88,*(float *)&SStack_a8.fields._current[3].klass,
                   *(float *)((long)&SStack_a8.fields._current[3].klass + 4),(MethodInfo *)0x0);
        pMVar6 = MethodInfo_System_Collections_Generic_List_Keyframe_Add;
        auStack_68._16_4_ = iStack_78;
        auStack_68._20_4_ = SUB84(uStack_74,0);
        fStack_50 = SUB84(uStack_74,4);
        auStack_68._0_8_ = pSStack_88;
        auStack_68._8_4_ = fStack_80;
        auStack_68._12_4_ = fStack_7c;
        piVar1 = &(__this_02->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar8 = (__this_02->fields)._items;
        if (pUVar8 == (UnityEngine_Keyframe_array *)0x0) goto label_059fb39a;
        uVar4 = (__this_02->fields)._size;
        if (uVar4 < (uint)pUVar8->max_length) {
          (__this_02->fields)._size = uVar4 + 1;
          pUVar5 = &pUVar8->m_Items[(int)uVar4].fields;
          pUVar5->m_OutTangent = fStack_7c;
          pUVar5->m_WeightedMode = iStack_78;
          pUVar5->m_InWeight = (float)uStack_74;
          pUVar5->m_OutWeight = uStack_74._4_4_;
          pUVar2 = pUVar8->m_Items + (int)uVar4;
          *(System_Collections_Generic_List_T__o **)&pUVar2->fields = pSStack_88;
          (pUVar2->fields).m_InTangent = fStack_80;
          (pUVar2->fields).m_OutTangent = fStack_7c;
        }
        else {
          item.fields.m_InTangent = fStack_80;
          item.fields._0_8_ = pSStack_88;
          item.fields.m_OutTangent = fStack_7c;
          item.fields.m_WeightedMode = iStack_78;
          item.fields.m_InWeight = (float)uStack_74;
          item.fields.m_OutWeight = uStack_74._4_4_;
          System_Collections_Generic_List_Keyframe___AddWithResize
                    (__this_02,item,(MethodInfo_3929AF0 *)pMVar6->klass->rgctx_data[0xe].method);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&SStack_a8,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    __this_01 = (pCStack_48->fields).Value;
    if (((__this_01 != (UnityEngine_LineRenderer_o *)0x0) &&
        (__this_03 = UnityEngine_LineRenderer__get_widthCurve(__this_01,(MethodInfo *)0x0),
        __this_02 != (System_Collections_Generic_List_Keyframe__o *)0x0)) &&
       (pUVar8 = System_Collections_Generic_List_Keyframe___ToArray
                           (__this_02,
                            (MethodInfo_392C2D0 *)MethodInfo_System_Collections_Generic_List_Keyframe_ToArray)
       , __this_03 != (UnityEngine_AnimationCurve_o *)0x0)) {
      UnityEngine_AnimationCurve__set_keys(__this_03,pUVar8,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_WidthMultiplier
// il2cpp: float CustomLogic_CustomLogicLineRendererBuiltin__get_WidthMultiplier (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59fb410

float CustomLogic_CustomLogicLineRendererBuiltin__get_WidthMultiplier
                (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_LineRenderer__get_widthMultiplier(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_WidthMultiplier
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_WidthMultiplier (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59fb430

void CustomLogic_CustomLogicLineRendererBuiltin__set_WidthMultiplier
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_LineRenderer__set_widthMultiplier(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_ColorGradientMode
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_ColorGradientMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59fb450

int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_ColorGradientMode
                  (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  int32_t iVar1;
  UnityEngine_Gradient_o *__this_01;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    __this_01 = UnityEngine_LineRenderer__get_colorGradient(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Gradient_o *)0x0) {
      iVar1 = UnityEngine_Gradient__get_mode(__this_01,(MethodInfo *)0x0);
      return iVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_ColorGradientMode
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_ColorGradientMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x59fb480

void CustomLogic_CustomLogicLineRendererBuiltin__set_ColorGradientMode
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  UnityEngine_Gradient_o *__this_00;
  System_String_o *pSVar4;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_07545e23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_GradientMode);
    Il2CppMethodInitialized_07545e23 = '\x01';
  }
  handle = TypeRef_UnityEngine_GradientMode;
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
  if (bVar2) {
    pUVar1 = (__this->fields).Value;
    if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
      __this_00 = UnityEngine_LineRenderer__get_colorGradient(pUVar1,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Gradient_o *)0x0) {
        UnityEngine_Gradient__set_mode(__this_00,value,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).Value;
        if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
          UnityEngine_LineRenderer__set_colorGradient(pUVar1,__this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
  iStack_30 = value;
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Unknown gradient mode value: {0}");
  pSVar4 = System_String__Format(pSVar4,pIVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this_01,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_set_ColorGradientMode);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicLineRendererBuiltin$$CreateLineRenderer
// il2cpp: CustomLogic_CustomLogicLineRendererBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin__CreateLineRenderer (const MethodInfo* method);
// 0x59fb5e0

CustomLogic_CustomLogicLineRendererBuiltin_o *
CustomLogic_CustomLogicLineRendererBuiltin__CreateLineRenderer(MethodInfo *method)

{
  CustomLogic_CustomLogicLineRendererBuiltin_o *__this;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_07545e24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin);
    Il2CppMethodInitialized_07545e24 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin);
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_58f93e0
            (__this,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,in_RSI);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$GetPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicLineRendererBuiltin__GetPosition (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x59fb630

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicLineRendererBuiltin__GetPosition
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o UVar1;
  
  if (Il2CppMethodInitialized_07545e25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545e25 = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = UnityEngine_LineRenderer__GetPosition(__this_00,index,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).Value.fields.x = UVar1.fields.x;
  (__this_01->fields).Value.fields.y = UVar1.fields.y;
  (__this_01->fields).Value.fields.z = UVar1.fields.z;
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$SetPosition
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__SetPosition (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t index, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x59fb6f0

void CustomLogic_CustomLogicLineRendererBuiltin__SetPosition
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t index,
               CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  if ((position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_LineRenderer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_LineRenderer__SetPosition
            (__this_00,index,(UnityEngine_Vector3_o)(position->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLineRendererBuiltin__get_ClassName (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59fb720

System_String_o *
CustomLogic_CustomLogicLineRendererBuiltin__get_ClassName
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545e26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LineRenderer");
    Il2CppMethodInitialized_07545e26 = '\x01';
  }
  return "LineRenderer";
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_IsAbstract (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59fb750

bool CustomLogic_CustomLogicLineRendererBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_IsStatic (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59fb760

bool CustomLogic_CustomLogicLineRendererBuiltin__get_IsStatic
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x59fb770

bool CustomLogic_CustomLogicLineRendererBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


