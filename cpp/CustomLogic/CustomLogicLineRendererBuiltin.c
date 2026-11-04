// Type: CustomLogic.CustomLogicLineRendererBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLineRendererBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicLineRendererBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicLineRendererBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLineRendererBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f07b50

CustomLogic_CustomLogicLineRendererBuiltin_o *
CustomLogic_CustomLogicLineRendererBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Utility_Color255_o *__this;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar3;
  CustomLogic_CustomLogicLineRendererBuiltin_o *__this_00;
  UnityEngine_Color_o *pUVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  float width;
  int32_t local_res8 [2];
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843453b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin);
    Il2CppMethodInitialized_1843453b8 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin);
      width = 1.0;
      local_28[0].r = 0.0;
      local_28[0].g = 0.0;
      local_28[0].b = 0.0;
      local_28[0].a = 1.0;
    }
    else {
      if ((int)args->max_length != 2) {
        NullCheck(args);
        local_res8[0] = (int32_t)args->max_length;
        pSVar5 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
        str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
        str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLineRendererBuiltin constructor found that takes ");
        pSVar5 = System_String__Concat_1969b70(str0,pSVar5,str2,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
        __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
        System_ArgumentException___ctor_1a77cc0(__this_01,pSVar5,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Factory_CreateInstance);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
      }
      if ((int)args->max_length == 0) {
label_181f07d58:
        ThrowIndexOutOfRangeException();
      }
      pIVar2 = args->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar2,(MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin
                         );
      uVar1 = (uint)args->max_length;
      if ((int)uVar1 < 2) {
        width = 1.0;
      }
      else {
        if (uVar1 < 2) goto label_181f07d58;
        pIVar2 = args->m_Items[1];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        width = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (pIVar2,(MethodInfo_66ED40 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin);
      if ((pCVar3 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
         (__this = (pCVar3->fields).Value, __this == (Utility_Color255_o *)0x0)) goto label_181f07cc8;
      pUVar4 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_28,__this,(MethodInfo *)0x0);
      local_28[0].r = (pUVar4->fields).r;
      local_28[0].g = (pUVar4->fields).g;
      local_28[0].b = (pUVar4->fields).b;
      local_28[0].a = (pUVar4->fields).a;
    }
    CustomLogic_CustomLogicLineRendererBuiltin___ctor_1f04370
              (__this_00,(UnityEngine_Color_o *)local_28,width,(MethodInfo *)0x0);
    return __this_00;
  }
label_181f07cc8:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f0c7f0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843453e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843453e5 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__BindTo>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__BindTo_b__21_0 (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f08580

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__BindTo_b__21_0
          (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineRendererBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicComponentInstance_o *component;
  
  if (Il2CppMethodInitialized_1843453e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicComponentInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453e6 = '\x01';
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
                          (obj,(MethodInfo_66EB70 *)
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
// 0x181f08950

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__Destroy_b__22_0
          (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineRendererBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    CustomLogic_CustomLogicLineRendererBuiltin__Destroy(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__CreateLineRenderer>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__CreateLineRenderer_b__23_0 (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f03fa0

Il2CppObject*
CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__CreateLineRenderer_b__23_0(CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* __c, System_Object_array* __a, MethodInfo* method)

{
  CustomLogic_CustomLogicLineRendererBuiltin_o *__this;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_1843453b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin);
    Il2CppMethodInitialized_1843453b5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin);
  local_18.r = 0.0;
  local_18.g = 0.0;
  local_18.b = 0.0;
  local_18.a = 1.0;
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_1f04370
            (__this,(UnityEngine_Color_o *)&local_18,1.0,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetPosition>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__GetPosition_b__24_0 (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f098b0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__GetPosition_b__24_0
          (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineRendererBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Il2CppObject *obj;
  UnityEngine_LineRenderer_o *__this_00;
  int32_t index;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843453e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453e7 = '\x01';
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
                      (obj,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843453b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        Il2CppMethodInitialized_1843453b6 = '\x01';
      }
      __this_00 = (__c->fields).Value;
      if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
        pUVar3 = UnityEngine_LineRenderer__GetPosition
                           ((UnityEngine_Vector3_o *)local_28,__this_00,index,(MethodInfo *)0x0);
        uVar1._0_4_ = (pUVar3->fields).x;
        uVar1._4_4_ = (pUVar3->fields).y;
        fVar2 = (pUVar3->fields).z;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_28[0]._0_8_ = uVar1;
        local_28[0].z = fVar2;
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                  (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPosition>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__SetPosition_b__25_0 (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0b960

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__SetPosition_b__25_0
          (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineRendererBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_LineRenderer_o *__this_00;
  int32_t index;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_1843453e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453e8 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f0ba42:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (1 < (uint)__a->max_length) {
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (((__c != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
          (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_LineRenderer_o *)0x0)) {
        local_18.x = (pCVar1->fields).Value.fields.x;
        local_18.y = (pCVar1->fields).Value.fields.y;
        local_18.z = (pCVar1->fields).Value.fields.z;
        UnityEngine_LineRenderer__SetPosition
                  (__this_00,index,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_181f0ba42;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181eee9f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_1843453b9 == '\0') {
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
    Il2CppMethodInitialized_1843453b9 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x6095fd8c) {
    if (uVar3 < 0x2cfc2a49) {
      if (uVar3 < 0x159c41c2) {
        if (uVar3 == 0x492dcce) {
          bVar2 = System_String__op_Equality(name,"WidthCurve",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ef019e;
          if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843453ca == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
            Il2CppMethodInitialized_1843453ca = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthCurve_g____get
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthCurve_g____set
          ;
        }
        else if (uVar3 == 0xf5de282) {
          bVar2 = System_String__op_Equality(name,"NumCapVertices",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ef019e;
          if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843453c2 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCapVertices_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCapVertices_g_40bcf78
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
            Il2CppMethodInitialized_1843453c2 = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCapVertices_g
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCapVertices_g_40bcf78
          ;
        }
        else {
          if (uVar3 != 0x159c41c1) goto label_181ef019e;
          bVar2 = System_String__op_Equality(name,"PositionCount",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ef019e;
          if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843453be == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__PositionCount_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__PositionCount_g_40bd2f8
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
            Il2CppMethodInitialized_1843453be = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__PositionCount_g
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__PositionCount_g_40bd2f8
          ;
        }
      }
      else if (uVar3 == 0x22c5d116) {
        bVar2 = System_String__op_Equality(name,"EndWidth",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ef019e;
        if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843453bc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
          Il2CppMethodInitialized_1843453bc = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__EndWidth_g____gette
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__EndWidth_g____sette
        ;
      }
      else if (uVar3 == 0x26701326) {
        bVar2 = System_String__op_Equality(name,"UseWorldSpace",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ef019e;
        if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843453c5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__UseWorldSpace_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__UseWorldSpace_g_40bdbb8
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
          Il2CppMethodInitialized_1843453c5 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__UseWorldSpace_g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__UseWorldSpace_g_40bdbb8
        ;
      }
      else {
        if (uVar3 != 0x2cfc2a48) goto label_181ef019e;
        bVar2 = System_String__op_Equality(name,"ColorGradient",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ef019e;
        if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843453c8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradient_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradient_g_40bc418
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
          Il2CppMethodInitialized_1843453c8 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradient_g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradient_g_40bc418
        ;
      }
    }
    else if (uVar3 < 0x4d76a4e6) {
      if (uVar3 != 0x3ab64785) {
        if (uVar3 == 0x47671a04) {
          bVar2 = System_String__op_Equality(name,"GetPosition",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843453d0 == '\0') {
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
              Il2CppMethodInitialized_1843453d0 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__24_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__GetPosition_b__24_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__24_0 =
                   (System_Func_CustomLogicLineRendererBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->
                          __9__24_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0x4d76a4e5) {
          bVar2 = System_String__op_Equality(name,"Destroy",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843453ce == '\0') {
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
              Il2CppMethodInitialized_1843453ce = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__22_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__Destroy_b__22_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__22_0 =
                   (System_Func_CustomLogicLineRendererBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->
                          __9__22_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
label_181ef019e:
        pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLineRendererBuiltin not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_02,pSVar6,(MethodInfo *)0x0);
        pMVar7 = il2cpp_codegen_get_runtime_metadata
                           (&
                            MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_CreateMemberBinding
                           );
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar7);
      }
      bVar2 = System_String__op_Equality(name,"ShadowCastingMode",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ef019e;
      if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843453c6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ShadowCastingMode_g
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ShadowCastingMode_g_40bd678
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
        Il2CppMethodInitialized_1843453c6 = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ShadowCastingMode_g
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ShadowCastingMode_g_40bd678
      ;
    }
    else if (uVar3 == 0x55b97e71) {
      bVar2 = System_String__op_Equality(name,"NumCornerVertices",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ef019e;
      if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843453c1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCornerVertices_g
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCornerVertices_g_40bd138
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
        Il2CppMethodInitialized_1843453c1 = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCornerVertices_g
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCornerVertices_g_40bd138
      ;
    }
    else if (uVar3 == 0x57f6a0eb) {
      bVar2 = System_String__op_Equality(name,"ReceiveShadows",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ef019e;
      if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843453c7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ReceiveShadows_g
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ReceiveShadows_g_40bd4b8
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
        Il2CppMethodInitialized_1843453c7 = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ReceiveShadows_g
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ReceiveShadows_g_40bd4b8
      ;
    }
    else {
      if (uVar3 != 0x6095fd8b) goto label_181ef019e;
      bVar2 = System_String__op_Equality(name,"Loop",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ef019e;
      if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843453c0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
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
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
        Il2CppMethodInitialized_1843453c0 = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Loop_g____getter_8
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Loop_g____setter_8
      ;
    }
  }
  else if (uVar3 < 0x9d8b8ba8) {
    if (uVar3 < 0x8adad751) {
      if (uVar3 == 0x745f1e36) {
        bVar2 = System_String__op_Equality(name,"LineColor",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ef019e;
        if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843453bd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
          Il2CppMethodInitialized_1843453bd = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__LineColor_g____gett
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__LineColor_g____sett
        ;
      }
      else {
        if (uVar3 != 0x7d8f7dfb) {
          if (uVar3 == 0x8adad750) {
            bVar2 = System_String__op_Equality(name,"SetPosition",(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_1843453d1 == '\0') {
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
                Il2CppMethodInitialized_1843453d1 = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
              }
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->
                       __9__25_0;
              if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
                if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
                }
                pIVar1 = (Il2CppObject *)
                         TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9;
                pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)
                                    TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object);
                System_Func_object__object__object____ctor
                          (pEVar4,pIVar1,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__SetPosition_b__25_0
                           ,(MethodInfo *)0x0);
                TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__25_0 =
                     (System_Func_CustomLogicLineRendererBuiltin__object____object__o *)pEVar4;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->
                            __9__25_0,pEVar4);
              }
              pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
              CustomLogic_CLMethodBinding_object____ctor
                        (pSVar5,(System_String_o *)pEVar4,
                         MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor);
              return (CustomLogic_ICLMemberBinding_o *)pSVar5;
            }
          }
          goto label_181ef019e;
        }
        bVar2 = System_String__op_Equality(name,"ColorGradientMode",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ef019e;
        if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843453cc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradientMode_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradientMode_g_40bc5d8
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
          Il2CppMethodInitialized_1843453cc = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradientMode_g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradientMode_g_40bc5d8
        ;
      }
    }
    else {
      if (uVar3 == 0x8c6f2b00) {
        bVar2 = System_String__op_Equality(name,"CreateLineRenderer",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843453cf == '\0') {
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
            Il2CppMethodInitialized_1843453cf = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__23_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__CreateLineRenderer
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__23_0 =
                 (System_Func_CustomLogicLineRendererBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->
                        __9__23_0,pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
        goto label_181ef019e;
      }
      if (uVar3 == 0x9c86e43e) {
        bVar2 = System_String__op_Equality(name,"Enabled",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ef019e;
        if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843453bf == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
          Il2CppMethodInitialized_1843453bf = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Enabled_g____getter
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Enabled_g____setter
        ;
      }
      else {
        if (uVar3 != 0x9d8b8ba7) goto label_181ef019e;
        bVar2 = System_String__op_Equality(name,"AlphaGradient",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ef019e;
        if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843453c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__AlphaGradient_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__AlphaGradient_g_40bc258
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
          Il2CppMethodInitialized_1843453c9 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__AlphaGradient_g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__AlphaGradient_g_40bc258
        ;
      }
    }
  }
  else if (uVar3 < 0xc9bf8382) {
    if (uVar3 != 0xb495ddf7) {
      if (uVar3 == 0xc3a1ba13) {
        bVar2 = System_String__op_Equality(name,"BindTo",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843453cd == '\0') {
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
            Il2CppMethodInitialized_1843453cd = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__21_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__BindTo_b__21_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__21_0 =
                 (System_Func_CustomLogicLineRendererBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->
                        __9__21_0,pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
        goto label_181ef019e;
      }
      if (uVar3 != 0xc9bf8381) goto label_181ef019e;
      bVar2 = System_String__op_Equality(name,"IsValid",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ef019e;
      if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843453ba == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__IsValid_g____getter
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
        Il2CppMethodInitialized_1843453ba = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__IsValid_g____getter
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
      goto label_181ef0179;
    }
    bVar2 = System_String__op_Equality(name,"TextureMode",(MethodInfo *)0x0);
    if (!bVar2) goto label_181ef019e;
    if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843453c4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
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
      Il2CppMethodInitialized_1843453c4 = '\x01';
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__TextureMode_g____ge
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__TextureMode_g____se
    ;
  }
  else if (uVar3 == 0xd66abafe) {
    bVar2 = System_String__op_Equality(name,"Alignment",(MethodInfo *)0x0);
    if (!bVar2) goto label_181ef019e;
    if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843453c3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
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
      Il2CppMethodInitialized_1843453c3 = '\x01';
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Alignment_g____gett
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Alignment_g____sett
    ;
  }
  else if (uVar3 == 0xde87c531) {
    bVar2 = System_String__op_Equality(name,"StartWidth",(MethodInfo *)0x0);
    if (!bVar2) goto label_181ef019e;
    if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843453bb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
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
      Il2CppMethodInitialized_1843453bb = '\x01';
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__StartWidth_g____get
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__StartWidth_g____set
    ;
  }
  else {
    if (uVar3 != 0xe1505484) goto label_181ef019e;
    bVar2 = System_String__op_Equality(name,"WidthMultiplier",(MethodInfo *)0x0);
    if (!bVar2) goto label_181ef019e;
    if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843453cb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthMultiplier_g
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthMultiplier_g_40bdf38
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
      Il2CppMethodInitialized_1843453cb = '\x01';
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthMultiplier_g
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthMultiplier_g_40bdf38
    ;
  }
  System_Action_object__object____ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
label_181ef0179:
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__IsValid
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__IsValid (const MethodInfo* method);
// 0x181efc650

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__IsValid(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843453ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__IsValid_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_1843453ba = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__IsValid_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__StartWidth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__StartWidth (const MethodInfo* method);
// 0x181efe270

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__StartWidth(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453bb == '\0') {
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
    Il2CppMethodInitialized_1843453bb = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__StartWidth_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__StartWidth_g____set
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__EndWidth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__EndWidth (const MethodInfo* method);
// 0x181efbca0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__EndWidth(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453bc == '\0') {
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
    Il2CppMethodInitialized_1843453bc = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__EndWidth_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__EndWidth_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__LineColor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__LineColor (const MethodInfo* method);
// 0x181efc970

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__LineColor(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453bd == '\0') {
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
    Il2CppMethodInitialized_1843453bd = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__LineColor_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__LineColor_g____sett
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__PositionCount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__PositionCount (const MethodInfo* method);
// 0x181efd140

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__PositionCount
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__PositionCount_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__PositionCount_g_40bd2f8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_1843453be = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__PositionCount_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__PositionCount_g_40bd2f8
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__Enabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Enabled (const MethodInfo* method);
// 0x181efbac0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Enabled(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453bf == '\0') {
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
    Il2CppMethodInitialized_1843453bf = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Enabled_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Enabled_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__Loop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Loop (const MethodInfo* method);
// 0x181efca60

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Loop(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453c0 == '\0') {
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
    Il2CppMethodInitialized_1843453c0 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Loop_g____getter_8
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Loop_g____setter_8
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__NumCornerVertices
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__NumCornerVertices (const MethodInfo* method);
// 0x181efcec0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__NumCornerVertices
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCornerVertices_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCornerVertices_g_40bd138
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_1843453c1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCornerVertices_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCornerVertices_g_40bd138
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__NumCapVertices
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__NumCapVertices (const MethodInfo* method);
// 0x181efcdd0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__NumCapVertices
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCapVertices_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCapVertices_g_40bcf78
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_1843453c2 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCapVertices_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCapVertices_g_40bcf78
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__Alignment
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Alignment (const MethodInfo* method);
// 0x181efa5d0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Alignment(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453c3 == '\0') {
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
    Il2CppMethodInitialized_1843453c3 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Alignment_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Alignment_g____sett
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__TextureMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__TextureMode (const MethodInfo* method);
// 0x181efe540

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__TextureMode(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453c4 == '\0') {
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
    Il2CppMethodInitialized_1843453c4 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__TextureMode_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__TextureMode_g____se
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__UseWorldSpace
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__UseWorldSpace (const MethodInfo* method);
// 0x181efe950

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__UseWorldSpace
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__UseWorldSpace_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__UseWorldSpace_g_40bdbb8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_1843453c5 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__UseWorldSpace_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__UseWorldSpace_g_40bdbb8
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__ShadowCastingMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ShadowCastingMode (const MethodInfo* method);
// 0x181efd960

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ShadowCastingMode
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ShadowCastingMode_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ShadowCastingMode_g_40bd678
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_1843453c6 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ShadowCastingMode_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ShadowCastingMode_g_40bd678
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__ReceiveShadows
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ReceiveShadows (const MethodInfo* method);
// 0x181efd640

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ReceiveShadows
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ReceiveShadows_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ReceiveShadows_g_40bd4b8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_1843453c7 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ReceiveShadows_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ReceiveShadows_g_40bd4b8
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__ColorGradient
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ColorGradient (const MethodInfo* method);
// 0x181efb1b0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ColorGradient
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradient_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradient_g_40bc418
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_1843453c8 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradient_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradient_g_40bc418
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__AlphaGradient
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__AlphaGradient (const MethodInfo* method);
// 0x181efa6c0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__AlphaGradient
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__AlphaGradient_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__AlphaGradient_g_40bc258
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_1843453c9 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__AlphaGradient_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__AlphaGradient_g_40bc258
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__WidthCurve
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__WidthCurve (const MethodInfo* method);
// 0x181efec20

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__WidthCurve(MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453ca == '\0') {
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
    Il2CppMethodInitialized_1843453ca = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthCurve_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthCurve_g____set
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__WidthMultiplier
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__WidthMultiplier (const MethodInfo* method);
// 0x181efed10

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__WidthMultiplier
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthMultiplier_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthMultiplier_g_40bdf38
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_1843453cb = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthMultiplier_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthMultiplier_g_40bdf38
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__ColorGradientMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ColorGradientMode (const MethodInfo* method);
// 0x181efb0c0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ColorGradientMode
          (MethodInfo *method)

{
  System_Func_CustomLogicLineRendererBuiltin__object__o *__this;
  System_Action_CustomLogicLineRendererBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradientMode_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradientMode_g_40bc5d8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
    Il2CppMethodInitialized_1843453cc = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradientMode_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLineRendererBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradientMode_g_40bc5d8
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__BindTo
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__BindTo (const MethodInfo* method);
// 0x181ef45e0

CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__BindTo(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843453cd == '\0') {
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
    Il2CppMethodInitialized_1843453cd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__21_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object
                       );
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__BindTo_b__21_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__21_0 =
         (System_Func_CustomLogicLineRendererBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__21_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__Destroy
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__Destroy (const MethodInfo* method);
// 0x181ef4ca0

CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__Destroy(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843453ce == '\0') {
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
    Il2CppMethodInitialized_1843453ce = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__22_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object
                       );
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__Destroy_b__22_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__22_0 =
         (System_Func_CustomLogicLineRendererBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__22_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__CreateLineRenderer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__CreateLineRenderer (const MethodInfo* method);
// 0x181ef4a60

CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__CreateLineRenderer
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843453cf == '\0') {
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
    Il2CppMethodInitialized_1843453cf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__23_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object
                       );
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__CreateLineRenderer
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__23_0 =
         (System_Func_CustomLogicLineRendererBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__23_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__GetPosition
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__GetPosition (const MethodInfo* method);
// 0x181ef5ff0

CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__GetPosition(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843453d0 == '\0') {
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
    Il2CppMethodInitialized_1843453d0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__24_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object
                       );
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__GetPosition_b__24_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__24_0 =
         (System_Func_CustomLogicLineRendererBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__24_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__SetPosition
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__SetPosition (const MethodInfo* method);
// 0x181ef8a00

CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__SetPosition(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843453d1 == '\0') {
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
    Il2CppMethodInitialized_1843453d1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__25_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineRendererBuiltin_object_array_object
                       );
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__SetPosition_b__25_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__25_0 =
         (System_Func_CustomLogicLineRendererBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c->static_fields->__9__25_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181f009e0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843453d2 == '\0') {
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
    Il2CppMethodInitialized_1843453d2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsValid",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StartWidth",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EndWidth",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LineColor",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PositionCount",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Enabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Loop",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NumCornerVertices",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NumCapVertices",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Alignment",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextureMode",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UseWorldSpace",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShadowCastingMode",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReceiveShadows",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColorGradient",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AlphaGradient",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WidthCurve",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WidthMultiplier",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColorGradientMode",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BindTo",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Destroy",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CreateLineRenderer",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetPosition",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPosition",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings->static_fields->MemberNames,
               __this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__IsValid>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__IsValid_g____getter_2_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2170

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__IsValid_g____getter_2_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843453a6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843453a6 = '\x01';
    }
    x = (UnityEngine_Object_o *)(__i->fields).Value;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    local_res8[0] = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__StartWidth>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__StartWidth_g____getter_3_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef3460

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__StartWidth_g____getter_3_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    local_res8[0] = UnityEngine_LineRenderer__get_startWidth(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__StartWidth>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__StartWidth_g____setter_3_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef34a0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__StartWidth_g____setter_3_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_1843453d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453d3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_startWidth(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__EndWidth>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__EndWidth_g____getter_4_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef1a40

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__EndWidth_g____getter_4_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    local_res8[0] = UnityEngine_LineRenderer__get_endWidth(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__EndWidth>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__EndWidth_g____setter_4_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef1a80

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__EndWidth_g____setter_4_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_1843453d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453d4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_endWidth(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__LineColor>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__LineColor_g____getter_5_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2290

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__LineColor_g____getter_5_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this;
  undefined8 uVar1;
  undefined8 uVar2;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Color_o *pUVar3;
  Utility_Color255_o *__this_01;
  CustomLogic_CustomLogicColorBuiltin_o *__this_02;
  UnityEngine_Color_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843453aa == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      Il2CppMethodInitialized_1843453aa = '\x01';
    }
    __this = (UnityEngine_Renderer_o *)(__i->fields).Value;
    if (__this != (UnityEngine_Renderer_o *)0x0) {
      __this_00 = UnityEngine_Renderer__get_material(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        pUVar3 = UnityEngine_Material__get_color((UnityEngine_Color_o *)local_28,__this_00,(MethodInfo *)0x0);
        uVar1._0_4_ = (pUVar3->fields).r;
        uVar1._4_4_ = (pUVar3->fields).g;
        uVar2._0_4_ = (pUVar3->fields).b;
        uVar2._4_4_ = (pUVar3->fields).a;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
        local_28[0]._0_8_ = uVar1;
        local_28[0]._8_8_ = uVar2;
        Utility_Color255___ctor_23327a0(__this_01,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this_02,__this_01,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_02;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__LineColor>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__LineColor_g____setter_5_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef2360

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__LineColor_g____setter_5_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this;
  Utility_Color255_o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar1;
  UnityEngine_Material_o *__this_01;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_1843453d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453d5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (UnityEngine_Renderer_o *)(__i->fields).Value, __this != (UnityEngine_Renderer_o *)0x0)) {
    __this_01 = UnityEngine_Renderer__get_material(__this,(MethodInfo *)0x0);
    if ((pCVar1 != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_00 = (pCVar1->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
      pUVar2 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_18,__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Material_o *)0x0) {
        local_18.r = (pUVar2->fields).r;
        local_18.g = (pUVar2->fields).g;
        local_18.b = (pUVar2->fields).b;
        local_18.a = (pUVar2->fields).a;
        UnityEngine_Material__set_color(__this_01,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__PositionCount>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__PositionCount_g____getter_6_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2820

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__PositionCount_g____getter_6_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    local_res8[0] = UnityEngine_LineRenderer__get_positionCount(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__PositionCount>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__PositionCount_g____setter_6_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef2860

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__PositionCount_g____setter_6_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  int32_t value;
  
  if (Il2CppMethodInitialized_1843453d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453d6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_positionCount(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____getter_7_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef1860

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____getter_7_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (UnityEngine_Renderer_o *)(__i->fields).Value, __this != (UnityEngine_Renderer_o *)0x0)) {
    local_res8[0] = UnityEngine_Renderer__get_enabled(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____setter_7_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef19b0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____setter_7_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_1843453d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453d7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (UnityEngine_Renderer_o *)(__i->fields).Value, __this != (UnityEngine_Renderer_o *)0x0)) {
    UnityEngine_Renderer__set_enabled(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Loop>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Loop_g____getter_8_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2420

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Loop_g____getter_8_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    local_res8[0] = UnityEngine_LineRenderer__get_loop(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Loop>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Loop_g____setter_8_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef2460

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Loop_g____setter_8_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_1843453d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453d8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_loop(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__NumCornerVertices>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCornerVertices_g____getter_9_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2670

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCornerVertices_g____getter_9_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    local_res8[0] = UnityEngine_LineRenderer__get_numCornerVertices(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__NumCornerVertices>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCornerVertices_g____setter_9_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef26b0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCornerVertices_g____setter_9_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  int32_t value;
  
  if (Il2CppMethodInitialized_1843453d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453d9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_numCornerVertices(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__NumCapVertices>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCapVertices_g____getter_10_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef25a0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCapVertices_g____getter_10_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    local_res8[0] = UnityEngine_LineRenderer__get_numCapVertices(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__NumCapVertices>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCapVertices_g____setter_10_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef25e0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCapVertices_g____setter_10_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  int32_t value;
  
  if (Il2CppMethodInitialized_1843453da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453da = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_numCapVertices(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Alignment>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Alignment_g____getter_11_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef0210

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Alignment_g____getter_11_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    local_res8[0] = UnityEngine_LineRenderer__get_alignment(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Alignment>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Alignment_g____setter_11_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef0250

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Alignment_g____setter_11_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppType *handle;
  bool bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843453db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453db = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843453ab == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_LineAlignment);
      Il2CppMethodInitialized_1843453ab = '\x01';
    }
    handle = TypeRef_UnityEngine_LineAlignment;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    local_res8[0] = value;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e58);
    }
    bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      local_res8[0] = value;
      pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
      pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown line alignment value: {0}");
      pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_1a77cc0(__this_00,pSVar3,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_set_Alignment);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__set_alignment(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__TextureMode>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__TextureMode_g____getter_12_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef36c0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__TextureMode_g____getter_12_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    local_res8[0] = UnityEngine_LineRenderer__get_textureMode(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__TextureMode>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__TextureMode_g____setter_12_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef3700

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__TextureMode_g____setter_12_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppType *handle;
  bool bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843453dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453dc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843453ac == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_LineTextureMode);
      Il2CppMethodInitialized_1843453ac = '\x01';
    }
    handle = TypeRef_UnityEngine_LineTextureMode;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    local_res8[0] = value;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e58);
    }
    bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      local_res8[0] = value;
      pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
      pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown line texture mode value: {0}");
      pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_1a77cc0(__this_00,pSVar3,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_set_TextureMode);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__set_textureMode(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__UseWorldSpace>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__UseWorldSpace_g____getter_13_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef3ae0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__UseWorldSpace_g____getter_13_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    local_res8[0] = UnityEngine_LineRenderer__get_useWorldSpace(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__UseWorldSpace>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__UseWorldSpace_g____setter_13_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef3b20

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__UseWorldSpace_g____setter_13_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_1843453dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453dd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_useWorldSpace(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ShadowCastingMode>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ShadowCastingMode_g____getter_14_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2e90

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ShadowCastingMode_g____getter_14_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (UnityEngine_Renderer_o *)(__i->fields).Value, __this != (UnityEngine_Renderer_o *)0x0)) {
    local_res8[0] = UnityEngine_Renderer__get_shadowCastingMode(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ShadowCastingMode>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ShadowCastingMode_g____setter_14_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef2ed0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ShadowCastingMode_g____setter_14_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this;
  Il2CppType *handle;
  bool bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843453de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453de = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843453ad == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Rendering_ShadowCastingMode);
      Il2CppMethodInitialized_1843453ad = '\x01';
    }
    handle = TypeRef_UnityEngine_Rendering_ShadowCastingMode;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    local_res8[0] = value;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e58);
    }
    bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      local_res8[0] = value;
      pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
      pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown shadow casting mode value: {0}");
      pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_1a77cc0(__this_00,pSVar3,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_set_ShadowCastingMode);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    __this = (UnityEngine_Renderer_o *)(__i->fields).Value;
    if (__this != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_shadowCastingMode(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ReceiveShadows>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ReceiveShadows_g____getter_15_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2c20

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ReceiveShadows_g____getter_15_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (UnityEngine_Renderer_o *)(__i->fields).Value, __this != (UnityEngine_Renderer_o *)0x0)) {
    local_res8[0] = UnityEngine_Renderer__get_receiveShadows(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ReceiveShadows>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ReceiveShadows_g____setter_15_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef2c60

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ReceiveShadows_g____setter_15_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_1843453df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453df = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (UnityEngine_Renderer_o *)(__i->fields).Value, __this != (UnityEngine_Renderer_o *)0x0)) {
    UnityEngine_Renderer__set_receiveShadows(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ColorGradient>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradient_g____getter_16_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef1040

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradient_g____getter_16_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicLineRendererBuiltin__get_ColorGradient(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ColorGradient>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradient_g____setter_16_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef1060

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradient_g____setter_16_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *value;
  
  if (Il2CppMethodInitialized_1843453e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453e0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
  if (__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    CustomLogic_CustomLogicLineRendererBuiltin__set_ColorGradient(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__AlphaGradient>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__AlphaGradient_g____getter_17_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef03f0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__AlphaGradient_g____getter_17_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_LineRenderer_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  UnityEngine_Gradient_o *__this_02;
  UnityEngine_GradientAlphaKey_array *pUVar5;
  Il2CppObject *item;
  uint uVar6;
  float local_res8 [2];
  
  if (__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843453b0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
      Il2CppMethodInitialized_1843453b0 = '\x01';
    }
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_LineRenderer_o *)0x0) {
      __this_02 = UnityEngine_LineRenderer__GetColorGradientCopy(__this,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_Gradient_o *)0x0) {
        pUVar5 = UnityEngine_Gradient__get_alphaKeys(__this_02,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_GradientAlphaKey_array *)0x0) {
          uVar6 = 0;
          do {
            if ((int)pUVar5->max_length <= (int)uVar6) {
              return (Il2CppObject *)__this_01;
            }
            if ((uint)pUVar5->max_length <= uVar6) {
label_181ef0567:
              ThrowIndexOutOfRangeException();
            }
            if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
label_181ef0561:
              ThrowNullReferenceException();
            }
            __this_00 = (__this_01->fields).List;
            local_res8[0] = pUVar5->m_Items[(int)uVar6].fields.alpha;
            item = il2cpp_value_box(g_data_184354e38,local_res8);
            pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_181ef0561;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this_00->fields)._items;
            if (pSVar3 == (System_Object_array *)0x0) goto label_181ef0561;
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              if ((uint)pSVar3->max_length <= uVar2) goto label_181ef0567;
              pSVar3->m_Items[(int)uVar2] = item;
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,item);
              uVar6 = uVar6 + 1;
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_00,item,(MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
              uVar6 = uVar6 + 1;
            }
          } while( true );
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__AlphaGradient>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__AlphaGradient_g____setter_17_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef0570

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__AlphaGradient_g____setter_17_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *value;
  
  if (Il2CppMethodInitialized_1843453e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453e1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
  if (__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    CustomLogic_CustomLogicLineRendererBuiltin__set_AlphaGradient(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__WidthCurve>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthCurve_g____getter_18_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef3ec0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthCurve_g____getter_18_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicLineRendererBuiltin__get_WidthCurve(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__WidthCurve>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthCurve_g____setter_18_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef3ee0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthCurve_g____setter_18_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *value;
  
  if (Il2CppMethodInitialized_1843453e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453e2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
  if (__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    CustomLogic_CustomLogicLineRendererBuiltin__set_WidthCurve(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__WidthMultiplier>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthMultiplier_g____getter_19_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef3f60

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthMultiplier_g____getter_19_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    local_res8[0] = UnityEngine_LineRenderer__get_widthMultiplier(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__WidthMultiplier>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthMultiplier_g____setter_19_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef3fa0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthMultiplier_g____setter_19_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_1843453e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453e3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_widthMultiplier(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ColorGradientMode>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradientMode_g____getter_20_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x181ef0e30

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradientMode_g____getter_20_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  UnityEngine_Gradient_o *__this_00;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    __this_00 = UnityEngine_LineRenderer__GetColorGradientCopy(__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Gradient_o *)0x0) {
      local_res8[0] = UnityEngine_Gradient__get_mode(__this_00,(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ColorGradientMode>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradientMode_g____setter_20_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef0e80

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradientMode_g____setter_20_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  Il2CppType *handle;
  bool bVar2;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  UnityEngine_Gradient_o *__this;
  System_String_o *pSVar4;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843453e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453e4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843453b4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_GradientMode);
      Il2CppMethodInitialized_1843453b4 = '\x01';
    }
    handle = TypeRef_UnityEngine_GradientMode;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    local_res8[0] = value;
    pIVar3 = il2cpp_value_box(g_data_184354e08,local_res8);
    if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e58);
    }
    bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
    if (!bVar2) {
      local_res8[0] = value;
      pIVar3 = il2cpp_value_box(g_data_184354e08,local_res8);
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Unknown gradient mode value: {0}");
      pSVar4 = System_String__Format(pSVar4,pIVar3,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_1a77cc0(__this_00,pSVar4,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_set_ColorGradientMode);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    pUVar1 = (__i->fields).Value;
    if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
      __this = UnityEngine_LineRenderer__GetColorGradientCopy(pUVar1,(MethodInfo *)0x0);
      if (__this != (UnityEngine_Gradient_o *)0x0) {
        UnityEngine_Gradient__set_mode(__this,value,(MethodInfo *)0x0);
        pUVar1 = (__i->fields).Value;
        if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
          UnityEngine_LineRenderer__SetColorGradient(pUVar1,__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin___ctor (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04340

void CustomLogic_CustomLogicLineRendererBuiltin___ctor
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Color_Fields local_18;
  
  local_18.r = 0.0;
  local_18.g = 0.0;
  local_18.b = 0.0;
  local_18.a = 1.0;
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_1f04370
            (__this,(UnityEngine_Color_o *)&local_18,1.0,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin___ctor (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, float width, const MethodInfo* method);
// 0x181f045c0

void CustomLogic_CustomLogicLineRendererBuiltin___ctor_1f045c0
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,
               CustomLogic_CustomLogicColorBuiltin_o *color,float width,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_Fields local_28 [2];
  
  if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (__this_00 = (color->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
    pUVar1 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_28,__this_00,(MethodInfo *)0x0);
    local_28[0].r = (pUVar1->fields).r;
    local_28[0].g = (pUVar1->fields).g;
    local_28[0].b = (pUVar1->fields).b;
    local_28[0].a = (pUVar1->fields).a;
    CustomLogic_CustomLogicLineRendererBuiltin___ctor_1f04370
              (__this,(UnityEngine_Color_o *)local_28,width,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin___ctor (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, UnityEngine_Color_o color, float width, const MethodInfo* method);
// 0x181f04370

void CustomLogic_CustomLogicLineRendererBuiltin___ctor_1f04370
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,UnityEngine_Color_o *color,float width,
               MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_Renderer_o *pUVar1;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_LineRenderer_o *pUVar3;
  UnityEngine_Material_o *pUVar4;
  CustomLogic_CustomLogicLineRendererLifetime_o *pCVar5;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843453a5 == '\0') {
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
    Il2CppMethodInitialized_1843453a5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1ad20(pUVar2,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__AddComponent_object_
                       (pUVar2,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    (__this->fields).Value = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Value,pUVar3);
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar4 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (path,"Materials/TransparentMaterial",true,
                        (MethodInfo_795F00 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    (__this->fields)._material = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._material,pUVar4);
    pUVar1 = (UnityEngine_Renderer_o *)(__this->fields).Value;
    if (pUVar1 != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_sharedMaterial(pUVar1,(__this->fields)._material,(MethodInfo *)0x0);
      pUVar1 = (UnityEngine_Renderer_o *)(__this->fields).Value;
      if (pUVar1 != (UnityEngine_Renderer_o *)0x0) {
        pUVar4 = UnityEngine_Renderer__get_material(pUVar1,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Material_o *)0x0) {
          local_28[0].r = (color->fields).r;
          local_28[0].g = (color->fields).g;
          local_28[0].b = (color->fields).b;
          local_28[0].a = (color->fields).a;
          UnityEngine_Material__set_color(pUVar4,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).Value;
          if (pUVar3 != (UnityEngine_LineRenderer_o *)0x0) {
            UnityEngine_LineRenderer__set_startWidth(pUVar3,width,(MethodInfo *)0x0);
            pUVar3 = (__this->fields).Value;
            if (pUVar3 != (UnityEngine_LineRenderer_o *)0x0) {
              UnityEngine_LineRenderer__set_endWidth(pUVar3,width,(MethodInfo *)0x0);
              pUVar3 = (__this->fields).Value;
              if (pUVar3 != (UnityEngine_LineRenderer_o *)0x0) {
                UnityEngine_LineRenderer__set_positionCount(pUVar3,0,(MethodInfo *)0x0);
                pUVar1 = (UnityEngine_Renderer_o *)(__this->fields).Value;
                if (pUVar1 != (UnityEngine_Renderer_o *)0x0) {
                  UnityEngine_Renderer__set_enabled(pUVar1,false,(MethodInfo *)0x0);
                  __this_00 = (UnityEngine_Component_o *)(__this->fields).Value;
                  if (__this_00 != (UnityEngine_Component_o *)0x0) {
                    pUVar2 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
                    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                      pCVar5 = UnityEngine_GameObject__AddComponent_object_
                                         (pUVar2,(MethodInfo_6F4D60 *)
                                                 MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicLineRendererLifetime
                                         );
                      if (pCVar5 != (CustomLogic_CustomLogicLineRendererLifetime_o *)0x0) {
                        (pCVar5->fields).LineRenderer = __this;
                        Il2CppCodeGenWriteBarrier(&(pCVar5->fields).LineRenderer,__this);
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
// 0x181f04a20

bool CustomLogic_CustomLogicLineRendererBuiltin__get_IsValid
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843453a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843453a6 = '\x01';
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
// 0x181f03d70

void CustomLogic_CustomLogicLineRendererBuiltin__BindTo
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,
               CustomLogic_CustomLogicComponentInstance_o *component,MethodInfo *method)

{
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar1;
  Map_MapObject_o *pMVar2;
  CustomLogic_CustomLogicComponentInstance_o *pCVar3;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  bool bVar4;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *parent;
  System_ArgumentException_o *__this_03;
  System_String_o *message;
  Il2CppClass *pIVar5;
  System_InvalidOperationException_o *__this_04;
  System_String_o *pSVar6;
  MethodInfo *pMVar7;
  UnityEngine_Object_o *pUVar8;
  
  if (Il2CppMethodInitialized_1843453a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843453a7 = '\x01';
  }
  if (component != (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
    pCVar1 = (component->fields).MapObject;
    if (pCVar1 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      pMVar2 = (pCVar1->fields).Value;
      if (pMVar2 == (Map_MapObject_o *)0x0) {
        pUVar8 = (UnityEngine_Object_o *)0x0;
      }
      else {
        pUVar8 = (UnityEngine_Object_o *)(pMVar2->fields).GameObject;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) goto label_181f03eec;
      pUVar8 = (UnityEngine_Object_o *)(__this->fields).Value;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pIVar5 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
        __this_04 = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(pIVar5);
        pSVar6 = il2cpp_codegen_get_runtime_metadata(&"Cannot bind a destroyed LineRenderer.");
        System_InvalidOperationException___ctor_1b2aec0(__this_04,pSVar6,(MethodInfo *)0x0);
        pMVar7 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_BindTo);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar7);
      }
      pCVar3 = (__this->fields)._owner;
      if (pCVar3 != (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
        CustomLogic_CustomLogicComponentInstance__UnregisterLineRenderer(pCVar3,__this,(MethodInfo *)0x0);
      }
      (__this->fields)._owner = component;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._owner,component);
      pCVar3 = (__this->fields)._owner;
      if (pCVar3 != (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
        CustomLogic_CustomLogicComponentInstance__RegisterLineRenderer(pCVar3,__this,(MethodInfo *)0x0);
        __this_00 = (UnityEngine_Component_o *)(__this->fields).Value;
        if (__this_00 != (UnityEngine_Component_o *)0x0) {
          __this_02 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
          pCVar1 = (component->fields).MapObject;
          if (((pCVar1 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
              (pMVar2 = (pCVar1->fields).Value, pMVar2 != (Map_MapObject_o *)0x0)) &&
             (__this_01 = (pMVar2->fields).GameObject, __this_01 != (UnityEngine_GameObject_o *)0x0)) {
            parent = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_2f5a7e0(__this_02,parent,true,(MethodInfo *)0x0);
              bVar4 = (*(component->klass->vtable)._4_get_Enabled.methodPtr)
                                (component,(component->klass->vtable)._4_get_Enabled.method);
              if (!bVar4) {
                CustomLogic_CustomLogicLineRendererBuiltin__Destroy(__this,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
label_181f03eec:
  pIVar5 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_03 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar5);
  pSVar6 = il2cpp_codegen_get_runtime_metadata(&"component");
  message = il2cpp_codegen_get_runtime_metadata(&"LineRenderer owner must be a valid map component.");
  System_ArgumentException___ctor_1a77d80(__this_03,message,pSVar6,(MethodInfo *)0x0);
  pMVar7 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_BindTo);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,pMVar7);
}


// CustomLogic.CustomLogicLineRendererBuiltin$$Destroy
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__Destroy (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04000

void CustomLogic_CustomLogicLineRendererBuiltin__Destroy
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar2;
  
  if (Il2CppMethodInitialized_1843453a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_GC);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843453a8 = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields).Value;
  (__this->fields).Value = (UnityEngine_LineRenderer_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,(void *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
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
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
    }
  }
  CustomLogic_CustomLogicLineRendererBuiltin__ReleaseResources(__this,(MethodInfo *)0x0);
  if ((TypeInfo_System_GC->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_GC);
  }
  System_GC__SuppressFinalize((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$ReleaseResources
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__ReleaseResources (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04230

void CustomLogic_CustomLogicLineRendererBuiltin__ReleaseResources
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicComponentInstance_o *__this_00;
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843453a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843453a9 = '\x01';
  }
  (__this->fields).Value = (UnityEngine_LineRenderer_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,(void *)0x0);
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
    CustomLogic_CustomLogicComponentInstance__UnregisterLineRenderer(__this_00,__this,(MethodInfo *)0x0);
  }
  (__this->fields)._owner = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner,(void *)0x0);
  pUVar1 = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._material;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
    (__this->fields)._material = (UnityEngine_Material_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._material,(void *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$Finalize
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__Finalize (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04120
// eh: try 0x181f0414e..0x181f0415b -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f04162: xor edx, edx
// asm:   0x181f04164: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181f04169: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f0416e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f04173: test rcx, rcx
// asm:   0x181f04176: jne 0x181f0417d
// asm:   0x181f0417d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void CustomLogic_CustomLogicLineRendererBuiltin__Finalize
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  (__this->fields).Value = (UnityEngine_LineRenderer_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,(void *)0x0);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_StartWidth
// il2cpp: float CustomLogic_CustomLogicLineRendererBuiltin__get_StartWidth (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04bf0

float CustomLogic_CustomLogicLineRendererBuiltin__get_StartWidth
                (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    fVar1 = UnityEngine_LineRenderer__get_startWidth(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_StartWidth
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_StartWidth (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f05980

void CustomLogic_CustomLogicLineRendererBuiltin__set_StartWidth
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_startWidth(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_EndWidth
// il2cpp: float CustomLogic_CustomLogicLineRendererBuiltin__get_EndWidth (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04a00

float CustomLogic_CustomLogicLineRendererBuiltin__get_EndWidth
                (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    fVar1 = UnityEngine_LineRenderer__get_endWidth(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_EndWidth
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_EndWidth (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f05720

void CustomLogic_CustomLogicLineRendererBuiltin__set_EndWidth
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_endWidth(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_LineColor
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin__get_LineColor (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04a70

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicLineRendererBuiltin__get_LineColor
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  UnityEngine_Material_o *__this_01;
  UnityEngine_Color_o *pUVar3;
  Utility_Color255_o *__this_02;
  CustomLogic_CustomLogicColorBuiltin_o *__this_03;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843453aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_1843453aa = '\x01';
  }
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    __this_01 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Material_o *)0x0) {
      pUVar3 = UnityEngine_Material__get_color((UnityEngine_Color_o *)local_28,__this_01,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar3->fields).r;
      uVar1._4_4_ = (pUVar3->fields).g;
      uVar2._0_4_ = (pUVar3->fields).b;
      uVar2._4_4_ = (pUVar3->fields).a;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      local_28[0]._0_8_ = uVar1;
      local_28[0]._8_8_ = uVar2;
      Utility_Color255___ctor_23327a0(__this_02,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this_03,__this_02,(MethodInfo *)0x0);
      return __this_03;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_LineColor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_LineColor (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x181f05740

void CustomLogic_CustomLogicLineRendererBuiltin__set_LineColor
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,
               CustomLogic_CustomLogicColorBuiltin_o *value,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  Utility_Color255_o *__this_01;
  UnityEngine_Material_o *__this_02;
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_Fields local_18;
  
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    __this_02 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (value->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      pUVar1 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_18,__this_01,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_Material_o *)0x0) {
        local_18.r = (pUVar1->fields).r;
        local_18.g = (pUVar1->fields).g;
        local_18.b = (pUVar1->fields).b;
        local_18.a = (pUVar1->fields).a;
        UnityEngine_Material__set_color(__this_02,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_PositionCount
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_PositionCount (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04b90

int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_PositionCount
                  (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    iVar1 = UnityEngine_LineRenderer__get_positionCount(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_PositionCount
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_PositionCount (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f05810

void CustomLogic_CustomLogicLineRendererBuiltin__set_PositionCount
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_positionCount(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_Enabled
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_Enabled (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f049e0

bool CustomLogic_CustomLogicLineRendererBuiltin__get_Enabled
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  bool bVar1;
  
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    bVar1 = UnityEngine_Renderer__get_enabled(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_Enabled
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_Enabled (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f05700

void CustomLogic_CustomLogicLineRendererBuiltin__set_Enabled
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    UnityEngine_Renderer__set_enabled(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_Loop
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_Loop (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04b30

bool CustomLogic_CustomLogicLineRendererBuiltin__get_Loop
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    bVar1 = UnityEngine_LineRenderer__get_loop(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_Loop
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_Loop (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f057b0

void CustomLogic_CustomLogicLineRendererBuiltin__set_Loop
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_loop(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_NumCornerVertices
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_NumCornerVertices (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04b70

int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_NumCornerVertices
                  (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    iVar1 = UnityEngine_LineRenderer__get_numCornerVertices(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_NumCornerVertices
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_NumCornerVertices (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f057f0

void CustomLogic_CustomLogicLineRendererBuiltin__set_NumCornerVertices
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_numCornerVertices(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_NumCapVertices
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_NumCapVertices (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04b50

int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_NumCapVertices
                  (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    iVar1 = UnityEngine_LineRenderer__get_numCapVertices(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_NumCapVertices
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_NumCapVertices (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f057d0

void CustomLogic_CustomLogicLineRendererBuiltin__set_NumCapVertices
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_numCapVertices(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_Alignment
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_Alignment (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04620

int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_Alignment
                  (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    iVar1 = UnityEngine_LineRenderer__get_alignment(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_Alignment
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_Alignment (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f04e60

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
  int32_t local_res10 [6];
  
  if (Il2CppMethodInitialized_1843453ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_LineAlignment);
    Il2CppMethodInitialized_1843453ab = '\x01';
  }
  handle = TypeRef_UnityEngine_LineAlignment;
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
    __this_00 = (__this->fields).Value;
    if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__set_alignment(__this_00,value,(MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  local_res10[0] = value;
  pIVar2 = il2cpp_value_box(g_data_184354e08,local_res10);
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown line alignment value: {0}");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this_01,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_set_Alignment);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_TextureMode
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_TextureMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04c10

int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_TextureMode
                  (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    iVar1 = UnityEngine_LineRenderer__get_textureMode(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_TextureMode
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_TextureMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f059a0

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
  int32_t local_res10 [6];
  
  if (Il2CppMethodInitialized_1843453ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_LineTextureMode);
    Il2CppMethodInitialized_1843453ac = '\x01';
  }
  handle = TypeRef_UnityEngine_LineTextureMode;
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
    __this_00 = (__this->fields).Value;
    if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__set_textureMode(__this_00,value,(MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  local_res10[0] = value;
  pIVar2 = il2cpp_value_box(g_data_184354e08,local_res10);
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown line texture mode value: {0}");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this_01,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_set_TextureMode);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_UseWorldSpace
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_UseWorldSpace (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04c30

bool CustomLogic_CustomLogicLineRendererBuiltin__get_UseWorldSpace
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    bVar1 = UnityEngine_LineRenderer__get_useWorldSpace(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_UseWorldSpace
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_UseWorldSpace (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f05ad0

void CustomLogic_CustomLogicLineRendererBuiltin__set_UseWorldSpace
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_useWorldSpace(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_ShadowCastingMode
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_ShadowCastingMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04bd0

int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_ShadowCastingMode
                  (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    iVar1 = UnityEngine_Renderer__get_shadowCastingMode(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_ShadowCastingMode
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_ShadowCastingMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f05850

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
  int32_t local_res10 [6];
  
  if (Il2CppMethodInitialized_1843453ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Rendering_ShadowCastingMode);
    Il2CppMethodInitialized_1843453ad = '\x01';
  }
  handle = TypeRef_UnityEngine_Rendering_ShadowCastingMode;
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
    __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
    if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_shadowCastingMode(__this_00,value,(MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  local_res10[0] = value;
  pIVar2 = il2cpp_value_box(g_data_184354e08,local_res10);
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown shadow casting mode value: {0}");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this_01,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_set_ShadowCastingMode);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_ReceiveShadows
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_ReceiveShadows (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04bb0

bool CustomLogic_CustomLogicLineRendererBuiltin__get_ReceiveShadows
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  bool bVar1;
  
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    bVar1 = UnityEngine_Renderer__get_receiveShadows(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_ReceiveShadows
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_ReceiveShadows (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f05830

void CustomLogic_CustomLogicLineRendererBuiltin__set_ReceiveShadows
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    UnityEngine_Renderer__set_receiveShadows(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_ColorGradient
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin__get_ColorGradient (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04810

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicLineRendererBuiltin__get_ColorGradient
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_GradientColorKey_o *pUVar2;
  uint uVar3;
  UnityEngine_LineRenderer_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  MethodInfo *pMVar7;
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  UnityEngine_Gradient_o *__this_03;
  UnityEngine_GradientColorKey_array *pUVar8;
  Utility_Color255_o *__this_04;
  CustomLogic_CustomLogicColorBuiltin_o *__this_05;
  uint uVar9;
  UnityEngine_Color_Fields local_48;
  float local_38;
  
  if (Il2CppMethodInitialized_1843453ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    Il2CppMethodInitialized_1843453ae = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_02,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    __this_03 = UnityEngine_LineRenderer__GetColorGradientCopy(__this_00,(MethodInfo *)0x0);
    if (__this_03 != (UnityEngine_Gradient_o *)0x0) {
      pUVar8 = UnityEngine_Gradient__get_colorKeys(__this_03,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_GradientColorKey_array *)0x0) {
        uVar9 = 0;
        do {
          if ((int)pUVar8->max_length <= (int)uVar9) {
            return __this_02;
          }
          if ((uint)pUVar8->max_length <= uVar9) {
label_181f049da:
            ThrowIndexOutOfRangeException();
          }
          if (__this_02 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) break;
          __this_01 = (__this_02->fields).List;
          pUVar2 = pUVar8->m_Items + (int)uVar9;
          uVar5._0_4_ = (pUVar2->fields).color.fields.r;
          uVar5._4_4_ = (pUVar2->fields).color.fields.g;
          uVar6._0_4_ = (pUVar2->fields).color.fields.b;
          uVar6._4_4_ = (pUVar2->fields).color.fields.a;
          local_38 = pUVar8->m_Items[(int)uVar9].fields.time;
          __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
          local_48._0_8_ = uVar5;
          local_48._8_8_ = uVar6;
          Utility_Color255___ctor_23327a0(__this_04,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
          __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
          CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this_05,__this_04,(MethodInfo *)0x0);
          pMVar7 = MethodInfo_System_Collections_Generic_List_object_Add;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_01->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) break;
          uVar3 = (__this_01->fields)._size;
          if (uVar3 < (uint)pSVar4->max_length) {
            (__this_01->fields)._size = uVar3 + 1;
            if ((uint)pSVar4->max_length <= uVar3) goto label_181f049da;
            pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)__this_05;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar3,__this_05);
            uVar9 = uVar9 + 1;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_01,(Il2CppObject *)__this_05,
                       (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
            uVar9 = uVar9 + 1;
          }
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_ColorGradient
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_ColorGradient (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, CustomLogic_CustomLogicListBuiltin_o* value, const MethodInfo* method);
// 0x181f053d0
// eh: try 0x181f05510..0x181f056f0 -> pad 0x183318130 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f0565c: mov rdx, qword ptr [rip + 0x2189825]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x181f05663: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f05668: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f0566d: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181f05672: test rcx, rcx
// asm:   0x181f05675: jne 0x181f056f0
// asm:   0x181f05677: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x181f0567f: mov rdi, qword ptr [rsp + 0xc8]
// asm:   0x181f056f0: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318130: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318135: push rbp
// asm:   0x183318136: sub rsp, 0x20
// asm:   0x18331813a: mov rbp, rdx
// asm:   0x18331813d: mov rax, qword ptr [rbp + 0x80]
// asm:   0x183318144: mov rcx, qword ptr [rax]
// asm:   0x183318147: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18331814b: movabs rax, 0
// asm:   0x183318155: add rsp, 0x20
// asm:   0x183318159: pop rbp
// asm:   0x18331815a: ret 

void CustomLogic_CustomLogicLineRendererBuiltin__set_ColorGradient
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,
               CustomLogic_CustomLogicListBuiltin_o *value,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppClass *pIVar2;
  UnityEngine_LineRenderer_o *__this_01;
  bool bVar3;
  System_Collections_Generic_List_GradientColorKey__o *__this_02;
  UnityEngine_Color_o *pUVar4;
  UnityEngine_Gradient_o *__this_03;
  UnityEngine_GradientColorKey_array *value_00;
  undefined8 uVar5;
  System_Collections_Generic_List_Enumerator_object__o *pSVar6;
  System_Collections_Generic_List_Enumerator_object__o local_88;
  UnityEngine_GradientColorKey_o local_70;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  float local_48;
  undefined4 uStack_44;
  UnityEngine_Color_Fields local_28;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_1843453af == '\0') {
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
    Il2CppMethodInitialized_1843453af = '\x01';
  }
  local_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._current = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GradientColorKey);
  System_Collections_Generic_List_GradientColorKey____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GradientColorKey_ctor);
  if ((value != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this_00 = (value->fields).List, __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    local_88.fields._list = (System_Collections_Generic_List_T__o *)CONCAT44(local_58._4_4_,local_58._0_4_);
    local_88.fields._version = (int32_t)fStack_4c;
    local_88.fields._index = (int32_t)fStack_50;
    local_88.fields._current = (Il2CppObject *)CONCAT44(uStack_44,local_48);
    uVar5 = 0;
    pSVar6 = &local_88;
    while (bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&local_88,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext), bVar3) {
      if (local_88.fields._current == (Il2CppObject *)0x0) {
label_181f05616:
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)"Invalid color type",(MethodInfo *)0x0);
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_88,
                   MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
        return;
      }
      pIVar2 = (local_88.fields._current)->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
      if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) goto label_181f05616;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
      if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
        il2cpp_codegen_raise_invalid_cast_exception
                  (local_88.fields._current,TypeInfo_CustomLogic_CustomLogicColorBuiltin,
                   local_88.fields._current,pIVar2,uVar5,pSVar6);
      }
      if (local_88.fields._current[3].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar4 = Utility_Color255__ToColor
                         (&local_18,(Utility_Color255_o *)local_88.fields._current[3].klass,(MethodInfo *)0x0)
      ;
      local_28.r = (pUVar4->fields).r;
      local_28.g = (pUVar4->fields).g;
      local_28.b = (pUVar4->fields).b;
      local_28.a = (pUVar4->fields).a;
      local_70.fields.color.fields.r = 0.0;
      local_70.fields.color.fields.g = 0.0;
      local_70.fields.color.fields.b = 0.0;
      local_70.fields.color.fields.a = 0.0;
      local_70.fields.time = 0.0;
      UnityEngine_GradientColorKey___ctor(&local_70,(UnityEngine_Color_o *)&local_28,0.0,(MethodInfo *)0x0);
      if (__this_02 == (System_Collections_Generic_List_GradientColorKey__o *)0x0) {
        ThrowNullReferenceException();
      }
      local_58._0_4_ = local_70.fields.color.fields.r;
      local_58._4_4_ = local_70.fields.color.fields.g;
      fStack_50 = local_70.fields.color.fields.b;
      fStack_4c = local_70.fields.color.fields.a;
      local_48 = local_70.fields.time;
      il2cpp_runtime_helper_1800393c0(__this_02,local_58);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_88,
               MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    __this_01 = (__this->fields).Value;
    if (((__this_01 != (UnityEngine_LineRenderer_o *)0x0) &&
        (__this_03 = UnityEngine_LineRenderer__GetColorGradientCopy(__this_01,(MethodInfo *)0x0),
        __this_02 != (System_Collections_Generic_List_GradientColorKey__o *)0x0)) &&
       (value_00 = (UnityEngine_GradientColorKey_array *)
                   System_Collections_Generic_List_GradientColorKey___ToArray
                             ((System_Collections_Generic_List_T__o *)__this_02,
                              (MethodInfo_929FE0 *)
                              MethodInfo_System_Collections_Generic_List_GradientColorKey_ToArray),
       __this_03 != (UnityEngine_Gradient_o *)0x0)) {
      UnityEngine_Gradient__set_colorKeys(__this_03,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_AlphaGradient
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin__get_AlphaGradient (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04640
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f046cf: nop 

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
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  UnityEngine_Gradient_o *__this_03;
  UnityEngine_GradientAlphaKey_array *pUVar5;
  Il2CppObject *item;
  uint uVar6;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_1843453b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    Il2CppMethodInitialized_1843453b0 = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_02,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    __this_03 = UnityEngine_LineRenderer__GetColorGradientCopy(__this_00,(MethodInfo *)0x0);
    if (__this_03 != (UnityEngine_Gradient_o *)0x0) {
      pUVar5 = UnityEngine_Gradient__get_alphaKeys(__this_03,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_GradientAlphaKey_array *)0x0) {
        uVar6 = 0;
        do {
          if ((int)pUVar5->max_length <= (int)uVar6) {
            return __this_02;
          }
          if ((uint)pUVar5->max_length <= uVar6) {
label_181f047a7:
            ThrowIndexOutOfRangeException();
          }
          if (__this_02 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
label_181f047a1:
            ThrowNullReferenceException();
          }
          __this_01 = (__this_02->fields).List;
          local_res8[0] = pUVar5->m_Items[(int)uVar6].fields.alpha;
          item = il2cpp_value_box(g_data_184354e38,local_res8);
          pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_181f047a1;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_01->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto label_181f047a1;
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            if ((uint)pSVar3->max_length <= uVar2) goto label_181f047a7;
            pSVar3->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,item);
            uVar6 = uVar6 + 1;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_01,item,(MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
            uVar6 = uVar6 + 1;
          }
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_AlphaGradient
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_AlphaGradient (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, CustomLogic_CustomLogicListBuiltin_o* value, const MethodInfo* method);
// 0x181f04f90
// eh: try 0x181f050c0..0x181f05261 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f051c9: mov rdx, qword ptr [rip + 0x2189cb8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x181f051d0: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f051d5: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f051da: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f051df: test rcx, rcx
// asm:   0x181f051e2: jne 0x181f05261
// asm:   0x181f051e4: mov r14, qword ptr [rsp + 0x90]
// asm:   0x181f051ec: mov rsi, qword ptr [rsp + 0xa8]
// asm:   0x181f05261: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void CustomLogic_CustomLogicLineRendererBuiltin__set_AlphaGradient
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,
               CustomLogic_CustomLogicListBuiltin_o *value,MethodInfo *method)

{
  float b;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_LineRenderer_o *__this_01;
  Il2CppObject *obj;
  bool bVar1;
  System_Collections_Generic_List_GradientAlphaKey__o *__this_02;
  Il2CppObject *pIVar2;
  float *pfVar3;
  UnityEngine_Gradient_o *__this_03;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value_00;
  _union_125884 local_res10;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_1843453b1 == '\0') {
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
    Il2CppMethodInitialized_1843453b1 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GradientAlphaKey);
  System_Collections_Generic_List_GradientAlphaKey____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GradientAlphaKey_ctor);
  if ((value != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this_00 = (value->fields).List, __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while (bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext),
          obj = local_38, bVar1) {
      if (local_38 == (Il2CppObject *)0x0) {
label_181f05183:
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)"Invalid alpha type",(MethodInfo *)0x0);
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                   MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
        return;
      }
      pIVar2 = (Il2CppObject *)0x0;
      if (local_38->klass == g_data_184354e38) {
        pIVar2 = local_38;
      }
      if (pIVar2 == (Il2CppObject *)0x0) goto label_181f05183;
      local_res10 = (_union_125884)0x0;
      if ((local_38->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pfVar3 = il2cpp_object_unbox(local_38);
      if ((obj->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e38);
      }
      b = *pfVar3;
      pfVar3 = il2cpp_object_unbox(obj);
      Unity_Burst_Intrinsics_v64___ctor_1028c00
                ((Unity_Burst_Intrinsics_v64_o *)&local_res10._at_Byte0,*pfVar3,b,(MethodInfo *)0x0);
      if (__this_02 == (System_Collections_Generic_List_GradientAlphaKey__o *)0x0) {
        ThrowNullReferenceException();
      }
      il2cpp_runtime_helper_1800392a0(__this_02,local_res10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    __this_01 = (__this->fields).Value;
    if (((__this_01 != (UnityEngine_LineRenderer_o *)0x0) &&
        (__this_03 = UnityEngine_LineRenderer__GetColorGradientCopy(__this_01,(MethodInfo *)0x0),
        __this_02 != (System_Collections_Generic_List_GradientAlphaKey__o *)0x0)) &&
       (value_00 = System_Collections_Generic_List_GradientAlphaKey___ToArray
                             ((System_Collections_Generic_List_T__o *)__this_02,
                              (MethodInfo_929FE0 *)
                              MethodInfo_System_Collections_Generic_List_GradientAlphaKey_ToArray),
       __this_03 != (UnityEngine_Gradient_o *)0x0)) {
      UnityEngine_Gradient__set_alphaKeys
                (__this_03,(UnityEngine_GradientAlphaKey_array *)value_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_WidthCurve
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin__get_WidthCurve (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04c50

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicLineRendererBuiltin__get_WidthCurve
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Keyframe_o *pUVar2;
  uint uVar3;
  UnityEngine_LineRenderer_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar4;
  UnityEngine_Vector2_o value;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  UnityEngine_Keyframe_Fields *pUVar8;
  MethodInfo *pMVar9;
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  UnityEngine_AnimationCurve_o *__this_03;
  UnityEngine_Keyframe_array *pUVar10;
  CustomLogic_CustomLogicVector2Builtin_o *__this_04;
  uint uVar11;
  float fVar12;
  float fVar13;
  UnityEngine_AI_NavMeshBuildSettings_Fields local_48;
  
  if (Il2CppMethodInitialized_1843453b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    Il2CppMethodInitialized_1843453b2 = '\x01';
  }
  local_48.m_AgentTypeID = 0;
  local_48.m_AgentRadius = 0.0;
  local_48.m_AgentHeight = 0.0;
  local_48.m_AgentSlope = 0.0;
  local_48.m_AgentClimb = 0.0;
  local_48.m_LedgeDropHeight = 0.0;
  local_48.m_MaxJumpAcrossDistance = 0.0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_02,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    __this_03 = UnityEngine_LineRenderer__GetWidthCurveCopy(__this_00,(MethodInfo *)0x0);
    if (__this_03 != (UnityEngine_AnimationCurve_o *)0x0) {
      pUVar10 = UnityEngine_AnimationCurve__get_keys(__this_03,(MethodInfo *)0x0);
      if (pUVar10 != (UnityEngine_Keyframe_array *)0x0) {
        uVar11 = 0;
        do {
          if ((int)pUVar10->max_length <= (int)uVar11) {
            return __this_02;
          }
          if ((uint)pUVar10->max_length <= uVar11) {
label_181f04e33:
            ThrowIndexOutOfRangeException();
          }
          pUVar2 = pUVar10->m_Items + (int)uVar11;
          local_48.m_AgentTypeID = (int32_t)(pUVar2->fields).m_Time;
          local_48.m_AgentRadius = (pUVar2->fields).m_Value;
          uVar5 = (pUVar2->fields).m_InTangent;
          pUVar8 = &pUVar10->m_Items[(int)uVar11].fields;
          uVar6 = pUVar8->m_OutTangent;
          uVar7 = pUVar8->m_WeightedMode;
          local_48.m_LedgeDropHeight = pUVar8->m_InWeight;
          local_48.m_MaxJumpAcrossDistance = pUVar8->m_OutWeight;
          local_48.m_AgentHeight = (float)uVar5;
          local_48.m_AgentSlope = (float)uVar6;
          local_48.m_AgentClimb = (float)uVar7;
          if (__this_02 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) break;
          __this_01 = (__this_02->fields).List;
          fVar12 = UnityEngine_TextCore_LowLevel_MarkPositionAdjustment__get_xPositionAdjustment
                             ((UnityEngine_TextCore_LowLevel_MarkPositionAdjustment_o *)&local_48,
                              (MethodInfo *)0x0);
          fVar13 = UnityEngine_AI_NavMeshBuildSettings__get_agentRadius
                             ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_48,(MethodInfo *)0x0);
          __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)
          ;
          value.fields.y = fVar13;
          value.fields.x = fVar12;
          CustomLogic_CustomLogicVector2Builtin___ctor_1ed51c0(__this_04,value,(MethodInfo *)0x0);
          pMVar9 = MethodInfo_System_Collections_Generic_List_object_Add;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_01->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) break;
          uVar3 = (__this_01->fields)._size;
          if (uVar3 < (uint)pSVar4->max_length) {
            (__this_01->fields)._size = uVar3 + 1;
            if ((uint)pSVar4->max_length <= uVar3) goto label_181f04e33;
            pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)__this_04;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar3,__this_04);
            uVar11 = uVar11 + 1;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_01,(Il2CppObject *)__this_04,
                       (MethodInfo_93DD50 *)pMVar9->klass->rgctx_data[0xe].method);
            uVar11 = uVar11 + 1;
          }
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_WidthCurve
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_WidthCurve (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, CustomLogic_CustomLogicListBuiltin_o* value, const MethodInfo* method);
// 0x181f05af0
// eh: try 0x181f05c30..0x181f05e0b -> pad 0x183331d60 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f05d72: mov rdx, qword ptr [rip + 0x218910f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x181f05d79: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f05d7e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f05d83: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181f05d88: test rcx, rcx
// asm:   0x181f05d8b: jne 0x181f05e0b
// asm:   0x181f05d8d: mov r14, qword ptr [rsp + 0xd0]
// asm:   0x181f05d95: mov rsi, qword ptr [rsp + 0xd8]
// asm:   0x181f05e0b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183331d60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331d65: push rbp
// asm:   0x183331d66: sub rsp, 0x20
// asm:   0x183331d6a: mov rbp, rdx
// asm:   0x183331d6d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x183331d71: mov rcx, qword ptr [rax]
// asm:   0x183331d74: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183331d78: movabs rax, 0
// asm:   0x183331d82: add rsp, 0x20
// asm:   0x183331d86: pop rbp
// asm:   0x183331d87: ret 

void CustomLogic_CustomLogicLineRendererBuiltin__set_WidthCurve
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,
               CustomLogic_CustomLogicListBuiltin_o *value,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_UI_LayoutElement_c *pUVar2;
  UnityEngine_LineRenderer_o *__this_01;
  UnityEngine_UI_LayoutElement_o *__this_02;
  bool bVar3;
  System_Collections_Generic_List_Keyframe__o *__this_03;
  UnityEngine_AnimationCurve_o *__this_04;
  UnityEngine_Keyframe_array *value_00;
  float time;
  float value_01;
  undefined1 local_a8 [16];
  UnityEngine_UI_LayoutElement_o *local_98;
  undefined1 local_90 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_88;
  UnityEngine_UI_LayoutElement_o *local_80;
  UnityEngine_Keyframe_Fields local_78;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int32_t iStack_38;
  float fStack_34;
  float fStack_30;
  
  if (Il2CppMethodInitialized_1843453b3 == '\0') {
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
    Il2CppMethodInitialized_1843453b3 = '\x01';
  }
  local_90 = (undefined1  [8])0x0;
  pUStack_88 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_80 = (UnityEngine_UI_LayoutElement_o *)0x0;
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Keyframe);
  System_Collections_Generic_List_Keyframe____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_03,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Keyframe_ctor);
  if ((value != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this_00 = (value->fields).List, __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    local_90 = (undefined1  [8])local_a8._0_8_;
    pUStack_88 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8._8_8_;
    local_80 = local_98;
    local_a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_a8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_90;
    while (bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_90,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext),
          __this_02 = local_80, bVar3) {
      if (local_80 == (UnityEngine_UI_LayoutElement_o *)0x0) {
label_181f05d2c:
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)"Invalid point type",(MethodInfo *)0x0);
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_90,
                   MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
        return;
      }
      pUVar2 = local_80->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
      if (((pUVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) goto label_181f05d2c;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
      if (((pUVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
        il2cpp_codegen_raise_invalid_cast_exception(local_80,TypeInfo_CustomLogic_CustomLogicVector2Builtin);
      }
      time = EZhex1991_EZSoftBone_EZSoftBoneForceField__get_time
                       ((EZhex1991_EZSoftBone_EZSoftBoneForceField_o *)local_80,(MethodInfo *)0x0);
      value_01 = UnityEngine_UI_LayoutElement__get_flexibleWidth(__this_02,(MethodInfo *)0x0);
      local_78.m_Time = 0.0;
      local_78.m_Value = 0.0;
      local_78.m_InTangent = 0.0;
      local_78.m_OutTangent = 0.0;
      local_78.m_WeightedMode = 0;
      local_78.m_InWeight = 0.0;
      local_78.m_OutWeight = 0.0;
      UnityEngine_Keyframe___ctor((UnityEngine_Keyframe_o *)&local_78,time,value_01,(MethodInfo *)0x0);
      if (__this_03 == (System_Collections_Generic_List_Keyframe__o *)0x0) {
        ThrowNullReferenceException();
      }
      local_48 = local_78.m_Time;
      fStack_44 = local_78.m_Value;
      fStack_40 = local_78.m_InTangent;
      fStack_3c = local_78.m_OutTangent;
      iStack_38 = local_78.m_WeightedMode;
      fStack_34 = local_78.m_InWeight;
      fStack_30 = local_78.m_OutWeight;
      il2cpp_runtime_helper_180039f30(__this_03,&local_48);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_90,
               MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    __this_01 = (__this->fields).Value;
    if (((__this_01 != (UnityEngine_LineRenderer_o *)0x0) &&
        (__this_04 = UnityEngine_LineRenderer__GetWidthCurveCopy(__this_01,(MethodInfo *)0x0),
        __this_03 != (System_Collections_Generic_List_Keyframe__o *)0x0)) &&
       (value_00 = (UnityEngine_Keyframe_array *)
                   System_Collections_Generic_List_Keyframe___ToArray
                             ((System_Collections_Generic_List_T__o *)__this_03,
                              (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_Keyframe_ToArray
                             ), __this_04 != (UnityEngine_AnimationCurve_o *)0x0)) {
      UnityEngine_AnimationCurve__set_keys(__this_04,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_WidthMultiplier
// il2cpp: float CustomLogic_CustomLogicLineRendererBuiltin__get_WidthMultiplier (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f04e40

float CustomLogic_CustomLogicLineRendererBuiltin__get_WidthMultiplier
                (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    fVar1 = UnityEngine_LineRenderer__get_widthMultiplier(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_WidthMultiplier
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_WidthMultiplier (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f05e20

void CustomLogic_CustomLogicLineRendererBuiltin__set_WidthMultiplier
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_widthMultiplier(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_ColorGradientMode
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_ColorGradientMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f047e0

int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_ColorGradientMode
                  (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  int32_t iVar1;
  UnityEngine_Gradient_o *__this_01;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    __this_01 = UnityEngine_LineRenderer__GetColorGradientCopy(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Gradient_o *)0x0) {
      iVar1 = UnityEngine_Gradient__get_mode(__this_01,(MethodInfo *)0x0);
      return iVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_ColorGradientMode
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_ColorGradientMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f05270

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
  int32_t local_res10 [6];
  
  if (Il2CppMethodInitialized_1843453b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_GradientMode);
    Il2CppMethodInitialized_1843453b4 = '\x01';
  }
  handle = TypeRef_UnityEngine_GradientMode;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  local_res10[0] = value;
  pIVar3 = il2cpp_value_box(g_data_184354e08,local_res10);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).Value;
    if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
      __this_00 = UnityEngine_LineRenderer__GetColorGradientCopy(pUVar1,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Gradient_o *)0x0) {
        UnityEngine_Gradient__set_mode(__this_00,value,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).Value;
        if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
          UnityEngine_LineRenderer__SetColorGradient(pUVar1,__this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
  local_res10[0] = value;
  pIVar3 = il2cpp_value_box(g_data_184354e08,local_res10);
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Unknown gradient mode value: {0}");
  pSVar4 = System_String__Format(pSVar4,pIVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this_01,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_set_ColorGradientMode);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicLineRendererBuiltin$$CreateLineRenderer
// il2cpp: CustomLogic_CustomLogicLineRendererBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin__CreateLineRenderer (const MethodInfo* method);
// 0x181f03fa0

CustomLogic_CustomLogicLineRendererBuiltin_o *
CustomLogic_CustomLogicLineRendererBuiltin__CreateLineRenderer(MethodInfo *method)

{
  CustomLogic_CustomLogicLineRendererBuiltin_o *__this;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_1843453b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin);
    Il2CppMethodInitialized_1843453b5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineRendererBuiltin);
  local_18.r = 0.0;
  local_18.g = 0.0;
  local_18.b = 0.0;
  local_18.a = 1.0;
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_1f04370
            (__this,(UnityEngine_Color_o *)&local_18,1.0,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$GetPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicLineRendererBuiltin__GetPosition (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x181f04190

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicLineRendererBuiltin__GetPosition
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_LineRenderer_o *__this_00;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843453b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843453b6 = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    pUVar3 = UnityEngine_LineRenderer__GetPosition
                       ((UnityEngine_Vector3_o *)local_28,__this_00,index,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar3->fields).x;
    uVar1._4_4_ = (pUVar3->fields).y;
    fVar2 = (pUVar3->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$SetPosition
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__SetPosition (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t index, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x181f04300

void CustomLogic_CustomLogicLineRendererBuiltin__SetPosition
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t index,
               CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_LineRenderer_o *)0x0)) {
    local_18[0].x = (position->fields).Value.fields.x;
    local_18[0].y = (position->fields).Value.fields.y;
    local_18[0].z = (position->fields).Value.fields.z;
    UnityEngine_LineRenderer__SetPosition(__this_00,index,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0)
    ;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLineRendererBuiltin__get_ClassName (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x181f047b0

System_String_o *
CustomLogic_CustomLogicLineRendererBuiltin__get_ClassName
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843453b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LineRenderer");
    Il2CppMethodInitialized_1843453b7 = '\x01';
  }
  return "LineRenderer";
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_IsAbstract (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicLineRendererBuiltin__get_IsAbstract(CustomLogic_CustomLogicLineRendererBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_IsStatic (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLineRendererBuiltin__get_IsStatic(CustomLogic_CustomLogicLineRendererBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLineRendererBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicLineRendererBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


