// Type: CustomLogic.CustomLogicLineRendererBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLineRendererBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicLineRendererBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicLineRendererBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLineRendererBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3de9840

CustomLogic_CustomLogicLineRendererBuiltin_o *
CustomLogic_CustomLogicLineRendererBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *obj;
  int iVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicLineRendererBuiltin_o *__this;
  System_String_o *pSVar3;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar4;
  System_ArgumentException_o *__this_00;
  float width;
  UnityEngine_Color_Fields color;
  int local_1c;
  
  if (DAT_05702a4a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLineRendererBuiltin);
    DAT_05702a4a = '\x01';
  }
  local_1c = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicLineRendererBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLineRendererBuiltin);
      width = 1.0;
      color = (UnityEngine_Color_Fields)(ZEXT816(0x3f80000000000000) << 0x40);
    }
    else {
      iVar1 = (int)args->max_length;
      if (iVar1 != 2) {
        local_1c = iVar1;
        pSVar3 = System_Int32__ToString((int32_t)&local_1c,(MethodInfo *)0x0);
        str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicLineRendererBuiltin constructor found that takes ");
        str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
        pSVar3 = System_String__Concat(str0,pSVar3,str2,(MethodInfo *)0x0);
        uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
        __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
        System_ArgumentException___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
        uVar4 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicLineRendererBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this_00,uVar4);
      }
      pIVar2 = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
      if ((int)args->max_length < 2) {
        width = 1.0;
      }
      else {
        obj = args->m_Items[1];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        width = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
      }
      __this = (CustomLogic_CustomLogicLineRendererBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLineRendererBuiltin);
      if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar2[3].klass == (Il2CppClass *)0x0))
      goto LAB_03de9988;
      method = (MethodInfo *)0x0;
      color = (UnityEngine_Color_Fields)
              Utility_Color255__ToColor((Utility_Color255_o *)pIVar2[3].klass,(MethodInfo *)0x0);
    }
    CustomLogic_CustomLogicLineRendererBuiltin___ctor
              (__this,(UnityEngine_Color_o)color,width,method);
    return __this;
  }
LAB_03de9988:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3dec810

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702a75 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702a75 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3dec880

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__Destroy>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__Destroy_b__20_0 (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dec890

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_<>c__<__CreateMethodBinding__Destroy>b__20_0
          (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineRendererBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_Object_o *obj;
  
  if (__c != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    if (DAT_05702a3a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05702a3a = '\x01';
    }
    __this_00 = (UnityEngine_Component_o *)(__c->fields).Value;
    __this = (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *)0x0;
    if (__this_00 != (UnityEngine_Component_o *)0x0) {
      obj = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__CreateLineRenderer>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__CreateLineRenderer_b__21_0 (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dec900

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_<>c__<__CreateMethodBinding__CreateLineRenderer>b__21_0
          (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineRendererBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  CustomLogic_CustomLogicLineRendererBuiltin_o *__this_00;
  
  if (DAT_05702a47 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLineRendererBuiltin);
    DAT_05702a47 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicLineRendererBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLineRendererBuiltin);
  CustomLogic_CustomLogicLineRendererBuiltin___ctor
            (__this_00,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,
             (MethodInfo *)__c);
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetPosition>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__GetPosition_b__22_0 (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dec950

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_<>c__<__CreateMethodBinding__GetPosition>b__22_0
          (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineRendererBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_LineRenderer_o *__this_00;
  int32_t index;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702a76 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a76 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
      if (DAT_05702a48 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
        DAT_05702a48 = '\x01';
      }
      __this_00 = (__c->fields).Value;
      if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
        value = UnityEngine_LineRenderer__GetPosition(__this_00,index,(MethodInfo *)0x0);
        __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,value,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_01;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPosition>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_____CreateMethodBinding__SetPosition_b__23_0 (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3deca50

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings_<>c__<__CreateMethodBinding__SetPosition>b__23_0
          (CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineRendererBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  int32_t index;
  Il2CppObject *pIVar1;
  
  if (DAT_05702a77 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a77 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03decb0f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    if (1 < (uint)__a->max_length) {
      pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (((__c != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
          (pIVar1 != (Il2CppObject *)0x0)) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_LineRenderer_o *)0x0)) {
        UnityEngine_LineRenderer__SetPosition
                  (__this_00,index,
                   (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
                   (MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03decb0f;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3de9a10

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_05702a4b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"LineColor");
    il2cpp_init_method_metadata(&"NumCornerVertices");
    il2cpp_init_method_metadata(&"StartWidth");
    il2cpp_init_method_metadata(&"WidthCurve");
    il2cpp_init_method_metadata(&"ReceiveShadows");
    il2cpp_init_method_metadata(&"ColorGradientMode");
    il2cpp_init_method_metadata(&"NumCapVertices");
    il2cpp_init_method_metadata(&"ColorGradient");
    il2cpp_init_method_metadata(&"Destroy");
    il2cpp_init_method_metadata(&"EndWidth");
    il2cpp_init_method_metadata(&"UseWorldSpace");
    il2cpp_init_method_metadata(&"WidthMultiplier");
    il2cpp_init_method_metadata(&"SetPosition");
    il2cpp_init_method_metadata(&"Enabled");
    il2cpp_init_method_metadata(&"GetPosition");
    il2cpp_init_method_metadata(&"Alignment");
    il2cpp_init_method_metadata(&"ShadowCastingMode");
    il2cpp_init_method_metadata(&"PositionCount");
    il2cpp_init_method_metadata(&"CreateLineRenderer");
    il2cpp_init_method_metadata(&"TextureMode");
    il2cpp_init_method_metadata(&"Loop");
    il2cpp_init_method_metadata(&"AlphaGradient");
    DAT_05702a4b = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x57f6a0ec) {
    if (uVar3 < 0x26701327) {
      if (uVar3 < 0xf5de283) {
        if (uVar3 == 0x492dcce) {
          bVar4 = System_String__op_Equality(name,"WidthCurve",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702a5b == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WidthCurve_g);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WidthCurve_g____s);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
              DAT_05702a5b = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0xf5de282) &&
                (bVar4 = System_String__op_Equality(name,"NumCapVertices",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702a53 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NumCapVertices);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__NumCapVertices_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
            DAT_05702a53 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x159c41c1) {
        bVar4 = System_String__op_Equality(name,"PositionCount",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702a4f == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PositionCount_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__PositionCount_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
            DAT_05702a4f = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x22c5d116) {
        bVar4 = System_String__op_Equality(name,"EndWidth",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702a4d == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EndWidth_g____g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__EndWidth_g____set);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
            DAT_05702a4d = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x26701326) &&
              (bVar4 = System_String__op_Equality(name,"UseWorldSpace",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a56 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__UseWorldSpace_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__UseWorldSpace_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
          DAT_05702a56 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0x47671a05) {
      if (uVar3 == 0x2cfc2a48) {
        bVar4 = System_String__op_Equality(name,"ColorGradient",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702a59 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColorGradient_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ColorGradient_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
            DAT_05702a59 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x3ab64785) {
        bVar4 = System_String__op_Equality(name,"ShadowCastingMode",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702a57 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShadowCastingMo);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ShadowCastingMode);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
            DAT_05702a57 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x47671a04) &&
              (bVar4 = System_String__op_Equality(name,"GetPosition",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a60 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLineRendererBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLineRendererBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object____o);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetPosition_b__22);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702a60 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object____o);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLineRendererBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicLineRendererBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x4d76a4e5) {
      bVar4 = System_String__op_Equality(name,"Destroy",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a5e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLineRendererBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLineRendererBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object____o);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Destroy_b__20_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702a5e = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object____o);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 8,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLineRendererBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicLineRendererBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x55b97e71) {
      bVar4 = System_String__op_Equality(name,"NumCornerVertices",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a52 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NumCornerVertic);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__NumCornerVertices);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
          DAT_05702a52 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x57f6a0eb) &&
            (bVar4 = System_String__op_Equality(name,"ReceiveShadows",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702a58 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ReceiveShadows);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ReceiveShadows_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
        DAT_05702a58 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0x8c6f2b01) {
    if (uVar3 < 0x745f1e37) {
      if (uVar3 == 0x6095fd8b) {
        bVar4 = System_String__op_Equality(name,"Loop",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702a51 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Loop_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Loop_g____setter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
            DAT_05702a51 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x745f1e36) &&
              (bVar4 = System_String__op_Equality(name,"LineColor",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a4e == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LineColor_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LineColor_g____se);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
          DAT_05702a4e = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x8adad750) {
      bVar4 = System_String__op_Equality(name,"SetPosition",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a61 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLineRendererBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLineRendererBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object____o);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPosition_b__23);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702a61 = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object____o);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLineRendererBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicLineRendererBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x8c6f2b00) {
      bVar4 = System_String__op_Equality(name,"CreateLineRenderer",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a5f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLineRendererBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLineRendererBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object____o);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__CreateLineRendere);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702a5f = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object____o);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLineRendererBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicLineRendererBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0x7d8f7dfb) &&
            (bVar4 = System_String__op_Equality(name,"ColorGradientMode",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702a5d == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColorGradientMo);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ColorGradientMode);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
        DAT_05702a5d = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xb495ddf8) {
    if (uVar3 == 0x9c86e43e) {
      bVar4 = System_String__op_Equality(name,"Enabled",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a50 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Enabled_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Enabled_g____sett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
          DAT_05702a50 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x9d8b8ba7) {
      bVar4 = System_String__op_Equality(name,"AlphaGradient",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a5a == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AlphaGradient_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AlphaGradient_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
          DAT_05702a5a = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xb495ddf7) &&
            (bVar4 = System_String__op_Equality(name,"TextureMode",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702a55 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TextureMode_g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TextureMode_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
        DAT_05702a55 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xd66abafe) {
    bVar4 = System_String__op_Equality(name,"Alignment",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702a54 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Alignment_g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Alignment_g____se);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
        DAT_05702a54 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xe1505484) {
    bVar4 = System_String__op_Equality(name,"WidthMultiplier",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702a5c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WidthMultiplier);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WidthMultiplier_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
        DAT_05702a5c = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if ((uVar3 == 0xde87c531) &&
          (bVar4 = System_String__op_Equality(name,"StartWidth",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702a4c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__StartWidth_g);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__StartWidth_g____s);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
      DAT_05702a4c = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    return (CustomLogic_ICLMemberBinding_o *)pCVar9;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicLineRendererBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__StartWidth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__StartWidth (const MethodInfo* method);
// 0x3dea270

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__StartWidth
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a4c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__StartWidth_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__StartWidth_g____s);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a4c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__EndWidth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__EndWidth (const MethodInfo* method);
// 0x3dea350

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__EndWidth
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a4d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EndWidth_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__EndWidth_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a4d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__LineColor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__LineColor (const MethodInfo* method);
// 0x3dea430

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__LineColor
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a4e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LineColor_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LineColor_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a4e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__PositionCount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__PositionCount (const MethodInfo* method);
// 0x3dea510

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__PositionCount
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a4f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PositionCount_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__PositionCount_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a4f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__Enabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Enabled (const MethodInfo* method);
// 0x3dea5f0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Enabled
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a50 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Enabled_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Enabled_g____sett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a50 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__Loop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Loop (const MethodInfo* method);
// 0x3dea6d0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Loop
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a51 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Loop_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Loop_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a51 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__NumCornerVertices
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__NumCornerVertices (const MethodInfo* method);
// 0x3dea7b0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__NumCornerVertices
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a52 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NumCornerVertic);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__NumCornerVertices);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a52 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__NumCapVertices
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__NumCapVertices (const MethodInfo* method);
// 0x3dea890

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__NumCapVertices
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a53 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NumCapVertices);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__NumCapVertices_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a53 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__Alignment
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Alignment (const MethodInfo* method);
// 0x3dea970

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__Alignment
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a54 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Alignment_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Alignment_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a54 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__TextureMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__TextureMode (const MethodInfo* method);
// 0x3deaa50

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__TextureMode
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a55 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TextureMode_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TextureMode_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a55 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__UseWorldSpace
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__UseWorldSpace (const MethodInfo* method);
// 0x3deab30

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__UseWorldSpace
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a56 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__UseWorldSpace_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__UseWorldSpace_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a56 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__ShadowCastingMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ShadowCastingMode (const MethodInfo* method);
// 0x3deac10

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ShadowCastingMode
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a57 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShadowCastingMo);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ShadowCastingMode);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a57 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__ReceiveShadows
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ReceiveShadows (const MethodInfo* method);
// 0x3deacf0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ReceiveShadows
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a58 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ReceiveShadows);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ReceiveShadows_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a58 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__ColorGradient
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ColorGradient (const MethodInfo* method);
// 0x3deadd0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ColorGradient
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a59 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColorGradient_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ColorGradient_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a59 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__AlphaGradient
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__AlphaGradient (const MethodInfo* method);
// 0x3deaeb0

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__AlphaGradient
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a5a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AlphaGradient_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AlphaGradient_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a5a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__WidthCurve
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__WidthCurve (const MethodInfo* method);
// 0x3deaf90

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__WidthCurve
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a5b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WidthCurve_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WidthCurve_g____s);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a5b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__WidthMultiplier
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__WidthMultiplier (const MethodInfo* method);
// 0x3deb070

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__WidthMultiplier
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a5c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WidthMultiplier);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WidthMultiplier_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a5c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__ColorGradientMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ColorGradientMode (const MethodInfo* method);
// 0x3deb150

CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreatePropertyBinding__ColorGradientMode
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a5d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColorGradientMo);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ColorGradientMode);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
    DAT_05702a5d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLineRendererBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLineRendererBuilt);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__Destroy
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__Destroy (const MethodInfo* method);
// 0x3deb230

CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__Destroy
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a5e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object____o);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Destroy_b__20_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702a5e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object____o);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLineRendererBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__CreateLineRenderer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__CreateLineRenderer (const MethodInfo* method);
// 0x3deb380

CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__CreateLineRenderer
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a5f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object____o);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__CreateLineRendere);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702a5f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object____o);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLineRendererBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__GetPosition
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__GetPosition (const MethodInfo* method);
// 0x3deb4d0

CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__GetPosition
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a60 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object____o);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetPosition_b__22);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702a60 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object____o);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLineRendererBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__SetPosition
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o* CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__SetPosition (const MethodInfo* method);
// 0x3deb620

CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings____CreateMethodBinding__SetPosition
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *__this;
  
  if (DAT_05702a61 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLineRendererBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineRendererBuiltin__object____o);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPosition_b__23);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702a61 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineRendererBuiltin__object____o);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLineRendererBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLineRendererBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLineRendererBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3deb770

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702a62 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"LineColor");
    il2cpp_init_method_metadata(&"NumCornerVertices");
    il2cpp_init_method_metadata(&"StartWidth");
    il2cpp_init_method_metadata(&"WidthCurve");
    il2cpp_init_method_metadata(&"ReceiveShadows");
    il2cpp_init_method_metadata(&"ColorGradientMode");
    il2cpp_init_method_metadata(&"NumCapVertices");
    il2cpp_init_method_metadata(&"ColorGradient");
    il2cpp_init_method_metadata(&"Destroy");
    il2cpp_init_method_metadata(&"EndWidth");
    il2cpp_init_method_metadata(&"UseWorldSpace");
    il2cpp_init_method_metadata(&"WidthMultiplier");
    il2cpp_init_method_metadata(&"SetPosition");
    il2cpp_init_method_metadata(&"Enabled");
    il2cpp_init_method_metadata(&"GetPosition");
    il2cpp_init_method_metadata(&"Alignment");
    il2cpp_init_method_metadata(&"ShadowCastingMode");
    il2cpp_init_method_metadata(&"PositionCount");
    il2cpp_init_method_metadata(&"CreateLineRenderer");
    il2cpp_init_method_metadata(&"TextureMode");
    il2cpp_init_method_metadata(&"Loop");
    il2cpp_init_method_metadata(&"AlphaGradient");
    DAT_05702a62 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"StartWidth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EndWidth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LineColor",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PositionCount",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Enabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Loop",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"NumCornerVertices",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"NumCapVertices",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Alignment",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextureMode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"UseWorldSpace",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShadowCastingMode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ReceiveShadows",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ColorGradient",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AlphaGradient",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"WidthCurve",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"WidthMultiplier",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ColorGradientMode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Destroy",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CreateLineRenderer",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetPosition",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetPosition",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__StartWidth>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__StartWidth_g____getter_2_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3debb00

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__StartWidth>g____getter_2_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__get_startWidth(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__StartWidth>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__StartWidth_g____setter_2_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3debb40

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__StartWidth>g____setter_2_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  float value;
  
  if (DAT_05702a63 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a63 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_startWidth(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__EndWidth>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__EndWidth_g____getter_3_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3debbc0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__EndWidth>g____getter_3_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__get_endWidth(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__EndWidth>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__EndWidth_g____setter_3_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3debc00

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__EndWidth>g____setter_3_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  float value;
  
  if (DAT_05702a64 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a64 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_endWidth(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__LineColor>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__LineColor_g____getter_4_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3debc80

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__LineColor>g____getter_4_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this;
  UnityEngine_Material_o *__this_00;
  Utility_Color255_o *__this_01;
  CustomLogic_CustomLogicColorBuiltin_o *__this_02;
  UnityEngine_Color_o color;
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702a3c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    DAT_05702a3c = '\x01';
  }
  __this = (UnityEngine_Renderer_o *)(__i->fields).Value;
  if (__this != (UnityEngine_Renderer_o *)0x0) {
    __this_00 = UnityEngine_Renderer__get_material(__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Material_o *)0x0) {
      color = UnityEngine_Material__get_color(__this_00,(MethodInfo *)0x0);
      __this_01 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
      Utility_Color255___ctor(__this_01,color,(MethodInfo *)0x0);
      __this_02 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor(__this_02,__this_01,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_02;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__LineColor>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__LineColor_g____setter_4_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3debca0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__LineColor>g____setter_4_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_Renderer_o *__this;
  UnityEngine_Material_o *__this_00;
  Il2CppObject *pIVar1;
  UnityEngine_Color_o value;
  
  if (DAT_05702a65 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a65 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
  if (__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    __this = (UnityEngine_Renderer_o *)(__i->fields).Value;
    if (__this != (UnityEngine_Renderer_o *)0x0) {
      __this_00 = UnityEngine_Renderer__get_material(__this,(MethodInfo *)0x0);
      if ((pIVar1 != (Il2CppObject *)0x0) && (pIVar1[3].klass != (Il2CppClass *)0x0)) {
        value = Utility_Color255__ToColor((Utility_Color255_o *)pIVar1[3].klass,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__set_color(__this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__PositionCount>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__PositionCount_g____getter_5_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3debd20

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__PositionCount>g____getter_5_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__get_positionCount(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__PositionCount>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__PositionCount_g____setter_5_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3debd60

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__PositionCount>g____setter_5_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  int32_t value;
  
  if (DAT_05702a66 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_positionCount(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____getter_6_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3debde0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__Enabled>g____getter_6_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (UnityEngine_Renderer_o *)(__i->fields).Value,
     __this != (UnityEngine_Renderer_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_Renderer__get_enabled(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____setter_6_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3debe20

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__Enabled>g____setter_6_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_Renderer_o *__this;
  uint uVar1;
  
  if (DAT_05702a67 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (UnityEngine_Renderer_o *)(__i->fields).Value,
     __this != (UnityEngine_Renderer_o *)0x0)) {
    UnityEngine_Renderer__set_enabled(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Loop>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Loop_g____getter_7_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3debea0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__Loop>g____getter_7_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_LineRenderer__get_loop(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Loop>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Loop_g____setter_7_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3debee0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__Loop>g____setter_7_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  uint uVar1;
  
  if (DAT_05702a68 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_loop(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__NumCornerVertices>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCornerVertices_g____getter_8_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3debf60

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__NumCornerVertices>g____getter_8_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__get_numCornerVertices(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__NumCornerVertices>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCornerVertices_g____setter_8_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3debfa0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__NumCornerVertices>g____setter_8_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  int32_t value;
  
  if (DAT_05702a69 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a69 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_numCornerVertices(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__NumCapVertices>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCapVertices_g____getter_9_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3dec020

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__NumCapVertices>g____getter_9_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__get_numCapVertices(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__NumCapVertices>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__NumCapVertices_g____setter_9_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dec060

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__NumCapVertices>g____setter_9_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  int32_t value;
  
  if (DAT_05702a6a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a6a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_numCapVertices(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Alignment>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Alignment_g____getter_10_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3dec0e0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__Alignment>g____getter_10_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__get_alignment(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Alignment>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__Alignment_g____setter_10_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dec120

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__Alignment>g____setter_10_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_00;
  int32_t iStack_30;
  int32_t aiStack_2c [3];
  
  if (DAT_05702a6b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a6b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    if (DAT_05702a3d == '\0') {
      il2cpp_init_method_metadata(&TypeRef_LineAlignment);
      DAT_05702a3d = '\x01';
    }
    handle.fields.value = TypeRef_LineAlignment.fields.value;
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
      __this = (__i->fields).Value;
      if (__this != (UnityEngine_LineRenderer_o *)0x0) {
        UnityEngine_LineRenderer__set_alignment(__this,value,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iStack_30 = value;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_30);
    pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown line alignment value: {0}");
    pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
    System_ArgumentException___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&MethodInfo_Void_set_Alignment);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__TextureMode>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__TextureMode_g____getter_11_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3dec1a0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__TextureMode>g____getter_11_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__get_textureMode(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__TextureMode>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__TextureMode_g____setter_11_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dec1e0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__TextureMode>g____setter_11_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_00;
  int32_t iStack_30;
  int32_t aiStack_2c [3];
  
  if (DAT_05702a6c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a6c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    if (DAT_05702a3e == '\0') {
      il2cpp_init_method_metadata(&TypeRef_LineTextureMode);
      DAT_05702a3e = '\x01';
    }
    handle.fields.value = TypeRef_LineTextureMode.fields.value;
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
      __this = (__i->fields).Value;
      if (__this != (UnityEngine_LineRenderer_o *)0x0) {
        UnityEngine_LineRenderer__set_textureMode(__this,value,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iStack_30 = value;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_30);
    pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown line texture mode value: {0}");
    pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
    System_ArgumentException___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&MethodInfo_Void_set_TextureMode);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__UseWorldSpace>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__UseWorldSpace_g____getter_12_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3dec260

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__UseWorldSpace>g____getter_12_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_LineRenderer__get_useWorldSpace(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__UseWorldSpace>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__UseWorldSpace_g____setter_12_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dec2a0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__UseWorldSpace>g____setter_12_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  uint uVar1;
  
  if (DAT_05702a6d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a6d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_useWorldSpace(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ShadowCastingMode>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ShadowCastingMode_g____getter_13_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3dec320

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__ShadowCastingMode>g____getter_13_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (UnityEngine_Renderer_o *)(__i->fields).Value,
     __this != (UnityEngine_Renderer_o *)0x0)) {
    UnityEngine_Renderer__get_shadowCastingMode(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ShadowCastingMode>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ShadowCastingMode_g____setter_13_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dec360

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__ShadowCastingMode>g____setter_13_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_Renderer_o *__this;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_00;
  int32_t iStack_30;
  int32_t aiStack_2c [3];
  
  if (DAT_05702a6e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a6e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    if (DAT_05702a3f == '\0') {
      il2cpp_init_method_metadata(&TypeRef_ShadowCastingMode);
      DAT_05702a3f = '\x01';
    }
    handle.fields.value = TypeRef_ShadowCastingMode.fields.value;
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
      __this = (UnityEngine_Renderer_o *)(__i->fields).Value;
      if (__this != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_shadowCastingMode(__this,value,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iStack_30 = value;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_30);
    pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown shadow casting mode value: {0}");
    pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
    System_ArgumentException___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&MethodInfo_Void_set_ShadowCastingMode);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ReceiveShadows>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ReceiveShadows_g____getter_14_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3dec3e0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__ReceiveShadows>g____getter_14_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (UnityEngine_Renderer_o *)(__i->fields).Value,
     __this != (UnityEngine_Renderer_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_Renderer__get_receiveShadows(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ReceiveShadows>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ReceiveShadows_g____setter_14_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dec420

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__ReceiveShadows>g____setter_14_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_Renderer_o *__this;
  uint uVar1;
  
  if (DAT_05702a6f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a6f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (UnityEngine_Renderer_o *)(__i->fields).Value,
     __this != (UnityEngine_Renderer_o *)0x0)) {
    UnityEngine_Renderer__set_receiveShadows(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ColorGradient>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradient_g____getter_15_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3dec4a0

/* WARNING: Type propagation algorithm not settling */

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__ColorGradient>g____getter_15_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  uint uVar5;
  UnityEngine_LineRenderer_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar6;
  long lVar7;
  int iVar8;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  UnityEngine_Gradient_o *__this_02;
  UnityEngine_GradientColorKey_array *pUVar9;
  Utility_Color255_o *__this_03;
  CustomLogic_CustomLogicColorBuiltin_o *__this_04;
  float *pfVar10;
  ulong uVar11;
  UnityEngine_Color_o color;
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702a40 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05702a40 = '\x01';
  }
  __this_01 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  __this = (__i->fields).Value;
  if (((__this != (UnityEngine_LineRenderer_o *)0x0) &&
      (__this_02 = UnityEngine_LineRenderer__get_colorGradient(__this,(MethodInfo *)0x0),
      __this_02 != (UnityEngine_Gradient_o *)0x0)) &&
     (pUVar9 = UnityEngine_Gradient__get_colorKeys(__this_02,(MethodInfo *)0x0),
     pUVar9 != (UnityEngine_GradientColorKey_array *)0x0)) {
    iVar8 = (int)pUVar9->max_length;
    if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (0 < iVar8) goto LAB_03de83f0;
    }
    else if (0 < iVar8) {
      pfVar10 = &pUVar9->m_Items[0].fields.color.fields.b;
      uVar11 = 0;
      if ((pUVar9->max_length & 0xffffffff) != 0) {
        do {
          uVar2 = ((UnityEngine_Color_Fields *)(pfVar10 + -2))->r;
          uVar4 = ((UnityEngine_Color_Fields *)(pfVar10 + -2))->g;
          color.fields.g = (float)uVar4;
          color.fields.r = (float)uVar2;
          uVar3 = *(undefined8 *)pfVar10;
          __this_00 = (__this_01->fields).List;
          __this_03 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
          color.fields._8_8_ = uVar3;
          Utility_Color255___ctor(__this_03,color,(MethodInfo *)0x0);
          __this_04 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
          CustomLogic_CustomLogicColorBuiltin___ctor(__this_04,__this_03,(MethodInfo *)0x0);
          lVar7 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03de83f0;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (__this_00->fields)._items;
          if (pSVar6 == (System_Object_array *)0x0) goto LAB_03de83f0;
          uVar5 = (__this_00->fields)._size;
          if (uVar5 < (uint)pSVar6->max_length) {
            (__this_00->fields)._size = uVar5 + 1;
            pSVar6->m_Items[(int)uVar5] = (Il2CppObject *)__this_04;
            il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar5);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,(Il2CppObject *)__this_04,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          uVar11 = uVar11 + 1;
          uVar5 = (uint)pUVar9->max_length;
          pfVar10 = pfVar10 + 5;
          if ((long)(int)uVar5 <= (long)uVar11) {
            return (Il2CppObject *)__this_01;
          }
        } while (uVar11 < uVar5);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    return (Il2CppObject *)__this_01;
  }
LAB_03de83f0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ColorGradient>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradient_g____setter_15_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dec4c0

/* WARNING: Type propagation algorithm not settling */

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__ColorGradient>g____setter_15_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_GradientColorKey_o *pUVar2;
  uint uVar3;
  UnityEngine_LineRenderer_o *__this;
  undefined4 uVar4;
  UnityEngine_GradientColorKey_o __this_00;
  UnityEngine_GradientColorKey_o item;
  UnityEngine_GradientColorKey_o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  long lVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_GradientColorKey__o *__this_06;
  UnityEngine_Gradient_o *__this_07;
  UnityEngine_GradientColorKey_array *pUVar7;
  Il2CppObject *pIVar8;
  UnityEngine_Color_o UVar9;
  System_Collections_Generic_List_Enumerator_T__c *in_stack_ffffffffffffff48;
  Il2CppType *pIVar10;
  Il2CppType *in_stack_ffffffffffffff50;
  float in_stack_ffffffffffffff58;
  undefined4 in_stack_ffffffffffffff5c;
  undefined1 auStack_98 [48];
  float fStack_68;
  _union_247328 _Stack_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  float fStack_48;
  undefined4 uStack_44;
  CustomLogic_CustomLogicLineRendererBuiltin_o *pCStack_38;
  
  if (DAT_05702a70 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a70 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702a41 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_GradientColorKey___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GradientColorKey);
    il2cpp_init_method_metadata(&TypeInfo_List_GradientColorKey);
    il2cpp_init_method_metadata(&"Invalid color type");
    DAT_05702a41 = '\x01';
  }
  auStack_98._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_98._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_98._16_8_ = (InvokerMethod)0x0;
  __this_06 = (System_Collections_Generic_List_GradientColorKey__o *)
              il2cpp_runtime_glue(TypeInfo_List_GradientColorKey);
  System_Collections_Generic_List<GradientColorKey>___ctor(__this_06,MethodInfo_List_1_UnityEngine_GradientColorKey);
  if ((pIVar8 != (Il2CppObject *)0x0) && (pIVar8[3].klass != (Il2CppClass *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_58,
               (System_Collections_Generic_List_object__o *)pIVar8[3].klass,MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    auStack_98._16_8_ = CONCAT44(uStack_44,fStack_48);
    auStack_98._0_8_ = CONCAT44(_Stack_58._4_4_,_Stack_58._0_4_);
    auStack_98._8_8_ = CONCAT44(_uStack_4c,uStack_50);
    pCStack_38 = __i;
    if (__this_06 == (System_Collections_Generic_List_GradientColorKey__o *)0x0) {
      __this_03.fields._8_8_ = in_stack_ffffffffffffff50;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
      __this_03.fields._current._0_4_ = in_stack_ffffffffffffff58;
      __this_03.fields._current._4_4_ = in_stack_ffffffffffffff5c;
      bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_03,(MethodInfo_3185E20 *)auStack_98);
      if ((char)bVar6 != '\0') {
        if ((InvokerMethod)auStack_98._16_8_ != (InvokerMethod)0x0) {
          if ((*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) <= *(byte *)(*(long *)auStack_98._16_8_ + 0x130)) &&
             (*(long *)(*(long *)(*(long *)auStack_98._16_8_ + 200) + -8 +
                       (ulong)*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) * 8) == TypeInfo_CustomLogicColorBuiltin)) {
            if (*(Utility_Color255_o **)(auStack_98._16_8_ + 0x30) != (Utility_Color255_o *)0x0) {
              UVar9 = Utility_Color255__ToColor
                                (*(Utility_Color255_o **)(auStack_98._16_8_ + 0x30),
                                 (MethodInfo *)0x0);
              auStack_98._32_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
              auStack_98._40_8_ = (Il2CppType *)0x0;
              fStack_68 = 0.0;
              __this_01.fields.color.fields._8_8_ = in_stack_ffffffffffffff50;
              __this_01.fields.color.fields._0_8_ = in_stack_ffffffffffffff48;
              __this_01.fields.time = in_stack_ffffffffffffff58;
              UnityEngine_GradientColorKey___ctor
                        (__this_01,UVar9,0.0,(MethodInfo *)(auStack_98 + 0x20));
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_03de8769:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
LAB_03de86ad:
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Debug__LogError("Invalid color type",(MethodInfo *)0x0);
        __this_04.fields._8_8_ = in_stack_ffffffffffffff50;
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
        __this_04.fields._current._0_4_ = in_stack_ffffffffffffff58;
        __this_04.fields._current._4_4_ = in_stack_ffffffffffffff5c;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_04,(MethodInfo_3185E10 *)auStack_98);
        return;
      }
    }
    else {
      while (__this_02.fields._8_8_ = in_stack_ffffffffffffff50,
            __this_02.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48,
            __this_02.fields._current._0_4_ = in_stack_ffffffffffffff58,
            __this_02.fields._current._4_4_ = in_stack_ffffffffffffff5c,
            bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_02,(MethodInfo_3185E20 *)auStack_98), (char)bVar6 != '\0') {
        if ((InvokerMethod)auStack_98._16_8_ == (InvokerMethod)0x0) goto LAB_03de86ad;
        if ((*(byte *)(*(long *)auStack_98._16_8_ + 0x130) < *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130)) ||
           (*(long *)(*(long *)(*(long *)auStack_98._16_8_ + 200) + -8 +
                     (ulong)*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) * 8) != TypeInfo_CustomLogicColorBuiltin))
        goto LAB_03de86ad;
        if (*(Utility_Color255_o **)(auStack_98._16_8_ + 0x30) == (Utility_Color255_o *)0x0)
        goto LAB_03de8769;
        UVar9 = Utility_Color255__ToColor
                          (*(Utility_Color255_o **)(auStack_98._16_8_ + 0x30),(MethodInfo *)0x0);
        auStack_98._32_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
        auStack_98._40_8_ = (Il2CppType *)0x0;
        fStack_68 = 0.0;
        __this_00.fields.color.fields._8_8_ = in_stack_ffffffffffffff50;
        __this_00.fields.color.fields._0_8_ = in_stack_ffffffffffffff48;
        __this_00.fields.time = in_stack_ffffffffffffff58;
        UnityEngine_GradientColorKey___ctor(__this_00,UVar9,0.0,(MethodInfo *)(auStack_98 + 0x20));
        pIVar10 = (Il2CppType *)auStack_98._40_8_;
        lVar5 = MethodInfo_Void_Add;
        fStack_48 = fStack_68;
        _Stack_58._0_4_ = auStack_98._32_4_;
        _Stack_58._4_4_ = auStack_98._36_4_;
        uStack_50 = auStack_98._40_4_;
        uVar4._0_2_ = auStack_98._44_2_;
        uVar4._2_2_ = auStack_98._46_2_;
        uStack_4c = auStack_98._44_2_;
        uStack_4a = auStack_98._46_2_;
        piVar1 = &(__this_06->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar7 = (__this_06->fields)._items;
        auStack_98._40_8_ = pIVar10;
        if (pUVar7 == (UnityEngine_GradientColorKey_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar3 = (__this_06->fields)._size;
        if (uVar3 < (uint)pUVar7->max_length) {
          (__this_06->fields)._size = uVar3 + 1;
          pUVar7->m_Items[(int)uVar3].fields.time = fStack_68;
          pUVar2 = pUVar7->m_Items + (int)uVar3;
          (pUVar2->fields).color.fields.r = (float)auStack_98._32_4_;
          (pUVar2->fields).color.fields.g = (float)auStack_98._36_4_;
          auStack_98._40_4_ = SUB84(pIVar10,0);
          auStack_98._44_4_ = SUB84(pIVar10,4);
          (pUVar2->fields).color.fields.b = (float)auStack_98._40_4_;
          (pUVar2->fields).color.fields.a = (float)auStack_98._44_4_;
          _uStack_4c = uVar4;
        }
        else {
          auStack_98._40_4_ = SUB84(pIVar10,0);
          auStack_98._44_4_ = SUB84(pIVar10,4);
          item.fields.color.fields.b = (float)auStack_98._40_4_;
          item.fields.color.fields.a = (float)auStack_98._44_4_;
          item.fields.color.fields.r = (float)auStack_98._32_4_;
          item.fields.color.fields.g = (float)auStack_98._36_4_;
          item.fields.time = fStack_68;
          in_stack_ffffffffffffff48 =
               (System_Collections_Generic_List_Enumerator_T__c *)auStack_98._32_8_;
          in_stack_ffffffffffffff58 = fStack_68;
          System_Collections_Generic_List<GradientColorKey>__AddWithResize
                    (__this_06,item,
                     *(MethodInfo_3572D10 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          in_stack_ffffffffffffff50 = pIVar10;
        }
      }
    }
    __this_05.fields._8_8_ = in_stack_ffffffffffffff50;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
    __this_05.fields._current._0_4_ = in_stack_ffffffffffffff58;
    __this_05.fields._current._4_4_ = in_stack_ffffffffffffff5c;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_05,(MethodInfo_3185E10 *)auStack_98);
    __this = (pCStack_38->fields).Value;
    if (((__this != (UnityEngine_LineRenderer_o *)0x0) &&
        (__this_07 = UnityEngine_LineRenderer__get_colorGradient(__this,(MethodInfo *)0x0),
        __this_06 != (System_Collections_Generic_List_GradientColorKey__o *)0x0)) &&
       (pUVar7 = System_Collections_Generic_List<GradientColorKey>__ToArray(__this_06,MethodInfo_GradientColorKey___ToArray),
       __this_07 != (UnityEngine_Gradient_o *)0x0)) {
      UnityEngine_Gradient__set_colorKeys(__this_07,pUVar7,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__AlphaGradient>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__AlphaGradient_g____getter_16_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3dec540

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__AlphaGradient>g____getter_16_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_LineRenderer_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  long lVar4;
  int iVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  UnityEngine_Gradient_o *__this_02;
  UnityEngine_GradientAlphaKey_array *pUVar6;
  Il2CppObject *item;
  undefined8 in_RAX;
  ulong uVar7;
  undefined8 uStack_38;
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uStack_38 = in_RAX;
  if (DAT_05702a42 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05702a42 = '\x01';
  }
  __this_01 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  __this = (__i->fields).Value;
  if (((__this != (UnityEngine_LineRenderer_o *)0x0) &&
      (__this_02 = UnityEngine_LineRenderer__get_colorGradient(__this,(MethodInfo *)0x0),
      __this_02 != (UnityEngine_Gradient_o *)0x0)) &&
     (pUVar6 = UnityEngine_Gradient__get_alphaKeys(__this_02,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_GradientAlphaKey_array *)0x0)) {
    iVar5 = (int)pUVar6->max_length;
    if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (0 < iVar5) goto LAB_03de89f8;
    }
    else if (0 < iVar5) {
      uVar7 = 0;
      if ((pUVar6->max_length & 0xffffffff) != 0) {
        do {
          __this_00 = (__this_01->fields).List;
          uStack_38 = CONCAT44(pUVar6->m_Items[uVar7].fields.alpha,(undefined4)uStack_38);
          item = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,(long)&uStack_38 + 4);
          lVar4 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03de89f8;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03de89f8;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = item;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          uVar7 = uVar7 + 1;
          uVar2 = (uint)pUVar6->max_length;
          if ((long)(int)uVar2 <= (long)uVar7) {
            return (Il2CppObject *)__this_01;
          }
        } while (uVar7 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    return (Il2CppObject *)__this_01;
  }
LAB_03de89f8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__AlphaGradient>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__AlphaGradient_g____setter_16_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dec560

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__AlphaGradient>g____setter_16_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_LineRenderer_o *__this;
  UnityEngine_GradientAlphaKey_o __this_00;
  UnityEngine_GradientAlphaKey_o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  long lVar2;
  bool_conflict bVar3;
  System_Collections_Generic_List_GradientAlphaKey__o *__this_06;
  uint *puVar4;
  float *pfVar5;
  UnityEngine_Gradient_o *__this_07;
  UnityEngine_GradientAlphaKey_array *pUVar6;
  Il2CppObject *pIVar7;
  float in_XMM2_Da;
  undefined1 in_stack_ffffffffffffff88 [12];
  uint uVar8;
  uint in_stack_ffffffffffffff94;
  UnityEngine_GradientAlphaKey_Fields UVar9;
  float fStack_50;
  float fStack_4c;
  Il2CppType *pIStack_40;
  CustomLogic_CustomLogicLineRendererBuiltin_o *pCStack_38;
  
  if (DAT_05702a71 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a71 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702a43 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_GradientAlphaKey___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GradientAlphaKey);
    il2cpp_init_method_metadata(&TypeInfo_List_GradientAlphaKey);
    il2cpp_init_method_metadata(&"Invalid alpha type");
    DAT_05702a43 = '\x01';
  }
  __this_06 = (System_Collections_Generic_List_GradientAlphaKey__o *)
              il2cpp_runtime_glue(TypeInfo_List_GradientAlphaKey);
  System_Collections_Generic_List<GradientAlphaKey>___ctor(__this_06,MethodInfo_List_1_UnityEngine_GradientAlphaKey);
  if ((pIVar7 != (Il2CppObject *)0x0) && (pIVar7[3].klass != (Il2CppClass *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb0,
               (System_Collections_Generic_List_object__o *)pIVar7[3].klass,MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    UVar9 = _fStack_50;
    pCStack_38 = __i;
    if (__this_06 == (System_Collections_Generic_List_GradientAlphaKey__o *)0x0) {
      __this_03.fields._version = in_stack_ffffffffffffff94;
      __this_03.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
      __this_03.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_03.fields._current = (Il2CppObject *)_fStack_50;
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar3 != '\0') {
        if ((pIStack_40 != (Il2CppType *)0x0) && (pIStack_40->data == DAT_05711098)) {
          fStack_50 = 0.0;
          fStack_4c = 0.0;
          if ((pIStack_40->data->_1).element_class == (DAT_05711098->_1).element_class) {
            puVar4 = (uint *)il2cpp_glue_022c7330(pIStack_40);
            if ((pIStack_40->data->_1).element_class == (DAT_05711098->_1).element_class) {
              uVar8 = *puVar4;
              pfVar5 = (float *)il2cpp_glue_022c7330(pIStack_40);
              __this_00.fields.time = 0.0;
              __this_00.fields.alpha = (float)uVar8;
              UnityEngine_GradientAlphaKey___ctor
                        (__this_00,*pfVar5,in_XMM2_Da,(MethodInfo *)&stack0xffffffffffffffb0);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_03de8d7a:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pIStack_40);
          }
LAB_03de8d72:
          _fStack_50 = (UnityEngine_GradientAlphaKey_Fields)0x0;
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIStack_40);
        }
LAB_03de8c69:
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Debug__LogError("Invalid alpha type",(MethodInfo *)0x0);
        __this_04.fields._version = in_stack_ffffffffffffff94;
        __this_04.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
        __this_04.fields._index = in_stack_ffffffffffffff88._8_4_;
        __this_04.fields._current = (Il2CppObject *)UVar9;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
        return;
      }
    }
    else {
      while (__this_02.fields._version = in_stack_ffffffffffffff94,
            __this_02.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_,
            __this_02.fields._index = in_stack_ffffffffffffff88._8_4_,
            __this_02.fields._current = (Il2CppObject *)UVar9,
            bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
            (char)bVar3 != '\0') {
        if ((pIStack_40 == (Il2CppType *)0x0) || (pIStack_40->data != DAT_05711098))
        goto LAB_03de8c69;
        fStack_50 = 0.0;
        fStack_4c = 0.0;
        if ((pIStack_40->data->_1).element_class != (DAT_05711098->_1).element_class)
        goto LAB_03de8d72;
        puVar4 = (uint *)il2cpp_glue_022c7330(pIStack_40);
        if ((pIStack_40->data->_1).element_class != (DAT_05711098->_1).element_class)
        goto LAB_03de8d7a;
        in_stack_ffffffffffffff94 = *puVar4;
        pfVar5 = (float *)il2cpp_glue_022c7330(pIStack_40);
        __this_01.fields.time = 0.0;
        __this_01.fields.alpha = (float)in_stack_ffffffffffffff94;
        UnityEngine_GradientAlphaKey___ctor
                  (__this_01,*pfVar5,in_XMM2_Da,(MethodInfo *)&stack0xffffffffffffffb0);
        lVar2 = MethodInfo_Void_Add;
        piVar1 = &(__this_06->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar6 = (__this_06->fields)._items;
        if (pUVar6 == (UnityEngine_GradientAlphaKey_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar8 = (__this_06->fields)._size;
        if (uVar8 < (uint)pUVar6->max_length) {
          (__this_06->fields)._size = uVar8 + 1;
          pUVar6->m_Items[(int)uVar8].fields = _fStack_50;
        }
        else {
          System_Collections_Generic_List<GradientAlphaKey>__AddWithResize
                    (__this_06,(UnityEngine_GradientAlphaKey_o)_fStack_50,
                     *(MethodInfo_356FC50 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_05.fields._version = in_stack_ffffffffffffff94;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_
    ;
    __this_05.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_05.fields._current = (Il2CppObject *)UVar9;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_05,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    __this = (pCStack_38->fields).Value;
    if (((__this != (UnityEngine_LineRenderer_o *)0x0) &&
        (__this_07 = UnityEngine_LineRenderer__get_colorGradient(__this,(MethodInfo *)0x0),
        __this_06 != (System_Collections_Generic_List_GradientAlphaKey__o *)0x0)) &&
       (pUVar6 = System_Collections_Generic_List<GradientAlphaKey>__ToArray(__this_06,MethodInfo_GradientAlphaKey___ToArray),
       __this_07 != (UnityEngine_Gradient_o *)0x0)) {
      UnityEngine_Gradient__set_alphaKeys(__this_07,pUVar6,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__WidthCurve>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthCurve_g____getter_17_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3dec5e0

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__WidthCurve>g____getter_17_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_LineRenderer_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  UnityEngine_Vector2_o value;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  UnityEngine_Keyframe_o __this_01;
  UnityEngine_Keyframe_o __this_02;
  long lVar7;
  int iVar8;
  CustomLogic_CustomLogicListBuiltin_o *__this_03;
  UnityEngine_AnimationCurve_o *__this_04;
  UnityEngine_Keyframe_array *pUVar9;
  CustomLogic_CustomLogicVector2Builtin_o *__this_05;
  UnityEngine_Keyframe_o *pUVar10;
  ulong uVar11;
  float fVar12;
  undefined8 in_stack_ffffffffffffff78;
  
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702a44 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05702a44 = '\x01';
  }
  __this_03 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_03,(MethodInfo *)0x0);
  __this = (__i->fields).Value;
  if (((__this != (UnityEngine_LineRenderer_o *)0x0) &&
      (__this_04 = UnityEngine_LineRenderer__get_widthCurve(__this,(MethodInfo *)0x0),
      __this_04 != (UnityEngine_AnimationCurve_o *)0x0)) &&
     (pUVar9 = UnityEngine_AnimationCurve__get_keys(__this_04,(MethodInfo *)0x0),
     pUVar9 != (UnityEngine_Keyframe_array *)0x0)) {
    iVar8 = (int)pUVar9->max_length;
    if (__this_03 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (0 < iVar8) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else if (0 < iVar8) {
      pUVar10 = pUVar9->m_Items;
      uVar11 = 0;
      if ((pUVar9->max_length & 0xffffffff) != 0) {
        do {
          uVar4 = (pUVar10->fields).m_Time;
          uVar5 = (pUVar10->fields).m_Value;
          fVar6 = (pUVar10->fields).m_InTangent;
          __this_00 = (__this_03->fields).List;
          __this_01.fields._8_8_ = __this_03;
          __this_01.fields.m_Time = (float)(int)in_stack_ffffffffffffff78;
          __this_01.fields.m_Value = (float)(int)((ulong)in_stack_ffffffffffffff78 >> 0x20);
          __this_01.fields.m_WeightedMode = uVar4;
          __this_01.fields.m_InWeight = (float)uVar5;
          __this_01.fields.m_OutWeight = fVar6;
          fVar12 = UnityEngine_Keyframe__get_time(__this_01,(MethodInfo *)&stack0xffffffffffffff88);
          __this_02.fields._8_8_ = __this_03;
          __this_02.fields.m_Time = (float)(int)in_stack_ffffffffffffff78;
          __this_02.fields.m_Value = (float)(int)((ulong)in_stack_ffffffffffffff78 >> 0x20);
          __this_02.fields.m_WeightedMode = uVar4;
          __this_02.fields.m_InWeight = (float)uVar5;
          __this_02.fields.m_OutWeight = fVar6;
          fVar6 = UnityEngine_Keyframe__get_value(__this_02,(MethodInfo *)&stack0xffffffffffffff88);
          __this_05 = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
          value.fields.y = fVar6;
          value.fields.x = fVar12;
          CustomLogic_CustomLogicVector2Builtin___ctor(__this_05,value,(MethodInfo *)0x0);
          lVar7 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03de9025;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03de9025;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_05;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,(Il2CppObject *)__this_05,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          uVar11 = uVar11 + 1;
          uVar2 = (uint)pUVar9->max_length;
          pUVar10 = pUVar10 + 1;
          if ((long)(int)uVar2 <= (long)uVar11) {
            return (Il2CppObject *)__this_03;
          }
        } while (uVar11 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    return (Il2CppObject *)__this_03;
  }
LAB_03de9025:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__WidthCurve>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthCurve_g____setter_17_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dec600

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__WidthCurve>g____setter_17_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  UnityEngine_LineRenderer_o *__this;
  undefined4 uVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  UnityEngine_Keyframe_o __this_04;
  UnityEngine_Keyframe_o item;
  UnityEngine_Keyframe_o __this_05;
  _union_247328 _Var5;
  UnityEngine_Keyframe_Fields *pUVar6;
  long lVar7;
  undefined8 __this_06;
  bool_conflict bVar8;
  System_Collections_Generic_List_Keyframe__o *__this_07;
  UnityEngine_AnimationCurve_o *__this_08;
  UnityEngine_Keyframe_array *pUVar9;
  Il2CppObject *pIVar10;
  float fVar11;
  float fVar12;
  _union_247328 in_stack_ffffffffffffff38;
  uint32_t in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  undefined4 in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff4c;
  float in_stack_ffffffffffffff50;
  undefined1 auStack_98 [36];
  undefined4 uStack_74;
  uint32_t uStack_70;
  uint16_t uStack_6c;
  uint16_t uStack_6a;
  uint16_t uStack_68;
  uint8_t uStack_66;
  uint8_t uStack_65;
  undefined4 uStack_64;
  float fStack_60;
  _union_247328 _Stack_58;
  uint32_t uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  CustomLogic_CustomLogicLineRendererBuiltin_o *pCStack_38;
  
  if (DAT_05702a72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a72 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
  if (__i == (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702a45 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_Keyframe___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Keyframe);
    il2cpp_init_method_metadata(&TypeInfo_List_Keyframe);
    il2cpp_init_method_metadata(&"Invalid point type");
    DAT_05702a45 = '\x01';
  }
  auStack_98._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_98._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_98._16_8_ = (CustomLogic_CustomLogicVector2Builtin_o *)0x0;
  __this_07 = (System_Collections_Generic_List_Keyframe__o *)il2cpp_runtime_glue(TypeInfo_List_Keyframe);
  System_Collections_Generic_List<Keyframe>___ctor(__this_07,MethodInfo_List_1_UnityEngine_Keyframe);
  if ((pIVar10 != (Il2CppObject *)0x0) && (pIVar10[3].klass != (Il2CppClass *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_98 + 0x20),
               (System_Collections_Generic_List_object__o *)pIVar10[3].klass,MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    auStack_98._16_8_ = CONCAT44(uStack_64,_uStack_68);
    auStack_98._0_8_ = CONCAT44(uStack_74,auStack_98._32_4_);
    auStack_98._8_8_ = CONCAT44(_uStack_6c,uStack_70);
    pCStack_38 = __i;
    if (__this_07 == (System_Collections_Generic_List_Keyframe__o *)0x0) {
      __this_01.fields._index = in_stack_ffffffffffffff40;
      __this_01.fields._list = in_stack_ffffffffffffff38.genericMethod;
      __this_01.fields._version._0_2_ = (uint16_t)in_stack_ffffffffffffff44;
      __this_01.fields._version._2_2_ = SUB42(in_stack_ffffffffffffff44,2);
      __this_01.fields._current._0_2_ = (uint16_t)in_stack_ffffffffffffff48;
      __this_01.fields._current._2_1_ = SUB41(in_stack_ffffffffffffff48,2);
      __this_01.fields._current._3_1_ = SUB41(in_stack_ffffffffffffff48,3);
      __this_01.fields._current._4_4_ = in_stack_ffffffffffffff4c;
      bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)auStack_98);
      if ((char)bVar8 != '\0') {
        if ((CustomLogic_CustomLogicVector2Builtin_o *)auStack_98._16_8_ !=
            (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
          bVar2 = (TypeInfo_CustomLogicVector2Builtin->_2).naturalAligment;
          if ((bVar2 <= ((*(CustomLogic_CustomLogicVector2Builtin_c **)auStack_98._16_8_)->_2).
                        naturalAligment) &&
             (((*(CustomLogic_CustomLogicVector2Builtin_c **)auStack_98._16_8_)->_2).typeHierarchy
              [(ulong)bVar2 - 1] == TypeInfo_CustomLogicVector2Builtin)) {
            fVar11 = CustomLogic_CustomLogicVector2Builtin__get_X
                               ((CustomLogic_CustomLogicVector2Builtin_o *)auStack_98._16_8_,
                                (MethodInfo *)0x0);
            fVar12 = CustomLogic_CustomLogicVector2Builtin__get_Y
                               ((CustomLogic_CustomLogicVector2Builtin_o *)auStack_98._16_8_,
                                (MethodInfo *)0x0);
            uStack_48._0_2_ = 0;
            uStack_48._2_1_ = '\0';
            uStack_48._3_1_ = '\0';
            uStack_44 = 0;
            _Stack_58.genericMethod = (void *)0x0;
            uStack_50 = 0;
            uStack_4c._0_2_ = 0;
            uStack_4c._2_2_ = 0;
            __this_05.fields.m_InTangent = (float)in_stack_ffffffffffffff40;
            __this_05.fields._0_8_ = in_stack_ffffffffffffff38.genericMethod;
            __this_05.fields.m_OutTangent = (float)in_stack_ffffffffffffff44;
            __this_05.fields.m_WeightedMode._0_2_ = (uint16_t)in_stack_ffffffffffffff48;
            __this_05.fields.m_WeightedMode._2_1_ = SUB41(in_stack_ffffffffffffff48,2);
            __this_05.fields.m_WeightedMode._3_1_ = SUB41(in_stack_ffffffffffffff48,3);
            __this_05.fields.m_InWeight = (float)in_stack_ffffffffffffff4c;
            __this_05.fields.m_OutWeight = in_stack_ffffffffffffff50;
            UnityEngine_Keyframe___ctor(__this_05,fVar11,fVar12,(MethodInfo *)&_Stack_58);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
LAB_03de9319:
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Debug__LogError("Invalid point type",(MethodInfo *)0x0);
        __this_02.fields._index = in_stack_ffffffffffffff40;
        __this_02.fields._list = in_stack_ffffffffffffff38.genericMethod;
        __this_02.fields._version._0_2_ = (uint16_t)in_stack_ffffffffffffff44;
        __this_02.fields._version._2_2_ = SUB42(in_stack_ffffffffffffff44,2);
        __this_02.fields._current._0_2_ = (uint16_t)in_stack_ffffffffffffff48;
        __this_02.fields._current._2_1_ = SUB41(in_stack_ffffffffffffff48,2);
        __this_02.fields._current._3_1_ = SUB41(in_stack_ffffffffffffff48,3);
        __this_02.fields._current._4_4_ = in_stack_ffffffffffffff4c;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)auStack_98);
        return;
      }
    }
    else {
      while (__this_00.fields._index = in_stack_ffffffffffffff40,
            __this_00.fields._list = in_stack_ffffffffffffff38.genericMethod,
            __this_00.fields._version._0_2_ = (uint16_t)in_stack_ffffffffffffff44,
            __this_00.fields._version._2_2_ = SUB42(in_stack_ffffffffffffff44,2),
            __this_00.fields._current._0_2_ = (uint16_t)in_stack_ffffffffffffff48,
            __this_00.fields._current._2_1_ = SUB41(in_stack_ffffffffffffff48,2),
            __this_00.fields._current._3_1_ = SUB41(in_stack_ffffffffffffff48,3),
            __this_00.fields._current._4_4_ = in_stack_ffffffffffffff4c,
            bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_00,(MethodInfo_3185E20 *)auStack_98),
            __this_06 = auStack_98._16_8_, (char)bVar8 != '\0') {
        if ((CustomLogic_CustomLogicVector2Builtin_o *)auStack_98._16_8_ ==
            (CustomLogic_CustomLogicVector2Builtin_o *)0x0) goto LAB_03de9319;
        bVar2 = (TypeInfo_CustomLogicVector2Builtin->_2).naturalAligment;
        if ((((*(CustomLogic_CustomLogicVector2Builtin_c **)auStack_98._16_8_)->_2).naturalAligment
             < bVar2) ||
           (((*(CustomLogic_CustomLogicVector2Builtin_c **)auStack_98._16_8_)->_2).typeHierarchy
            [(ulong)bVar2 - 1] != TypeInfo_CustomLogicVector2Builtin)) goto LAB_03de9319;
        fVar11 = CustomLogic_CustomLogicVector2Builtin__get_X
                           ((CustomLogic_CustomLogicVector2Builtin_o *)auStack_98._16_8_,
                            (MethodInfo *)0x0);
        fVar12 = CustomLogic_CustomLogicVector2Builtin__get_Y
                           ((CustomLogic_CustomLogicVector2Builtin_o *)__this_06,(MethodInfo *)0x0);
        uStack_48._0_2_ = 0;
        uStack_48._2_1_ = '\0';
        uStack_48._3_1_ = '\0';
        uStack_44 = 0;
        _Stack_58.genericMethod = (void *)0x0;
        uStack_50 = 0;
        uStack_4c._0_2_ = 0;
        uStack_4c._2_2_ = 0;
        __this_04.fields.m_InTangent = (float)in_stack_ffffffffffffff40;
        __this_04.fields._0_8_ = in_stack_ffffffffffffff38.genericMethod;
        __this_04.fields.m_OutTangent = (float)in_stack_ffffffffffffff44;
        __this_04.fields.m_WeightedMode._0_2_ = (uint16_t)in_stack_ffffffffffffff48;
        __this_04.fields.m_WeightedMode._2_1_ = SUB41(in_stack_ffffffffffffff48,2);
        __this_04.fields.m_WeightedMode._3_1_ = SUB41(in_stack_ffffffffffffff48,3);
        __this_04.fields.m_InWeight = (float)in_stack_ffffffffffffff4c;
        __this_04.fields.m_OutWeight = in_stack_ffffffffffffff50;
        UnityEngine_Keyframe___ctor(__this_04,fVar11,fVar12,(MethodInfo *)&_Stack_58);
        lVar7 = MethodInfo_Void_Add;
        uStack_68 = (uint16_t)uStack_48;
        uStack_66 = uStack_48._2_1_;
        uStack_65 = uStack_48._3_1_;
        uStack_64 = (undefined4)uStack_44;
        fStack_60 = (float)((ulong)uStack_44 >> 0x20);
        auStack_98._32_4_ = _Stack_58._0_4_;
        uStack_74 = _Stack_58._4_4_;
        uStack_70 = uStack_50;
        uVar4._0_2_ = (uint16_t)uStack_4c;
        uVar4._2_2_ = uStack_4c._2_2_;
        uStack_6c = (uint16_t)uStack_4c;
        uStack_6a = uStack_4c._2_2_;
        piVar1 = &(__this_07->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar9 = (__this_07->fields)._items;
        if (pUVar9 == (UnityEngine_Keyframe_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar3 = (__this_07->fields)._size;
        if (uVar3 < (uint)pUVar9->max_length) {
          (__this_07->fields)._size = uVar3 + 1;
          pUVar6 = &pUVar9->m_Items[(int)uVar3].fields;
          pUVar6->m_OutTangent = (float)uStack_4c;
          pUVar6->m_WeightedMode = uStack_48;
          pUVar6->m_InWeight = (float)(undefined4)uStack_44;
          pUVar6->m_OutWeight = (float)uStack_44._4_4_;
          _Var5._4_2_ = (uint16_t)uStack_4c;
          _Var5._6_2_ = uStack_4c._2_2_;
          _Var5._0_4_ = uStack_50;
          ((_union_247328 *)(pUVar9->m_Items + (int)uVar3))->genericMethod = (void *)_Stack_58;
          ((_union_247328 *)(pUVar9->m_Items + (int)uVar3))[1] = _Var5;
          _uStack_6c = uVar4;
        }
        else {
          item.fields.m_InTangent = (float)uStack_50;
          item.fields._0_8_ = _Stack_58.genericMethod;
          item.fields.m_OutTangent = (float)uStack_4c;
          item.fields.m_WeightedMode._0_2_ = (uint16_t)uStack_48;
          item.fields.m_WeightedMode._2_1_ = uStack_48._2_1_;
          item.fields.m_WeightedMode._3_1_ = uStack_48._3_1_;
          item.fields.m_InWeight = (float)uStack_64;
          item.fields.m_OutWeight = fStack_60;
          in_stack_ffffffffffffff38 = _Stack_58;
          in_stack_ffffffffffffff40 = uStack_50;
          in_stack_ffffffffffffff44 = uStack_4c;
          in_stack_ffffffffffffff48 = uStack_48;
          in_stack_ffffffffffffff4c = uStack_64;
          in_stack_ffffffffffffff50 = fStack_60;
          System_Collections_Generic_List<Keyframe>__AddWithResize
                    (__this_07,item,
                     *(MethodInfo_3588A30 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_03.fields._index = in_stack_ffffffffffffff40;
    __this_03.fields._list = in_stack_ffffffffffffff38.genericMethod;
    __this_03.fields._version._0_2_ = (uint16_t)in_stack_ffffffffffffff44;
    __this_03.fields._version._2_2_ = SUB42(in_stack_ffffffffffffff44,2);
    __this_03.fields._current._0_2_ = (uint16_t)in_stack_ffffffffffffff48;
    __this_03.fields._current._2_1_ = SUB41(in_stack_ffffffffffffff48,2);
    __this_03.fields._current._3_1_ = SUB41(in_stack_ffffffffffffff48,3);
    __this_03.fields._current._4_4_ = in_stack_ffffffffffffff4c;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)auStack_98);
    __this = (pCStack_38->fields).Value;
    if (((__this != (UnityEngine_LineRenderer_o *)0x0) &&
        (__this_08 = UnityEngine_LineRenderer__get_widthCurve(__this,(MethodInfo *)0x0),
        __this_07 != (System_Collections_Generic_List_Keyframe__o *)0x0)) &&
       (pUVar9 = System_Collections_Generic_List<Keyframe>__ToArray(__this_07,MethodInfo_Keyframe___ToArray),
       __this_08 != (UnityEngine_AnimationCurve_o *)0x0)) {
      UnityEngine_AnimationCurve__set_keys(__this_08,pUVar9,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__WidthMultiplier>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthMultiplier_g____getter_18_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3dec680

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__WidthMultiplier>g____getter_18_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__get_widthMultiplier(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__WidthMultiplier>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__WidthMultiplier_g____setter_18_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dec6c0

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__WidthMultiplier>g____setter_18_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  float value;
  
  if (DAT_05702a73 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a73 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_widthMultiplier(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ColorGradientMode>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradientMode_g____getter_19_0 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, const MethodInfo* method);
// 0x3dec740

Il2CppObject *
CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__ColorGradientMode>g____getter_19_0
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this;
  UnityEngine_Gradient_o *__this_00;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LineRenderer_o *)0x0)) {
    __this_00 = UnityEngine_LineRenderer__get_colorGradient(__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Gradient_o *)0x0) {
      UnityEngine_Gradient__get_mode(__this_00,(MethodInfo *)0x0);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ColorGradientMode>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin_Bindings_____CreatePropertyBinding__ColorGradientMode_g____setter_19_1 (CustomLogic_CustomLogicLineRendererBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dec790

void CustomLogic_CustomLogicLineRendererBuiltin_Bindings__<__CreatePropertyBinding__ColorGradientMode>g____setter_19_1
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  UnityEngine_Gradient_o *__this;
  System_String_o *pSVar4;
  undefined8 uVar5;
  System_ArgumentException_o *__this_00;
  int32_t iStack_30;
  int32_t aiStack_2c [3];
  
  if (DAT_05702a74 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a74 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    if (DAT_05702a46 == '\0') {
      il2cpp_init_method_metadata(&TypeRef_GradientMode);
      DAT_05702a46 = '\x01';
    }
    handle.fields.value = TypeRef_GradientMode.fields.value;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    aiStack_2c[0] = value;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,aiStack_2c);
    if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pUVar1 = (__i->fields).Value;
      if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
        __this = UnityEngine_LineRenderer__get_colorGradient(pUVar1,(MethodInfo *)0x0);
        if (__this != (UnityEngine_Gradient_o *)0x0) {
          UnityEngine_Gradient__set_mode(__this,value,(MethodInfo *)0x0);
          pUVar1 = (__i->fields).Value;
          if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
            UnityEngine_LineRenderer__set_colorGradient(pUVar1,__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iStack_30 = value;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_30);
    pSVar4 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown gradient mode value: {0}");
    pSVar4 = System_String__Format(pSVar4,pIVar3,(MethodInfo *)0x0);
    uVar5 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar5);
    System_ArgumentException___ctor(__this_00,pSVar4,(MethodInfo *)0x0);
    uVar5 = il2cpp_init_method_metadata(&MethodInfo_Void_set_ColorGradientMode);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin___ctor (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de76a0

void CustomLogic_CustomLogicLineRendererBuiltin___ctor
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicLineRendererBuiltin___ctor
            (__this,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,method);
  return;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin___ctor (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, float width, const MethodInfo* method);
// 0x3de78b0

void CustomLogic_CustomLogicLineRendererBuiltin___ctor
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
      CustomLogic_CustomLogicLineRendererBuiltin___ctor(__this,color_00,width,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin___ctor (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, UnityEngine_Color_o color, float width, const MethodInfo* method);
// 0x3de76c0

void CustomLogic_CustomLogicLineRendererBuiltin___ctor
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,UnityEngine_Color_o color,
               float width,MethodInfo *method)

{
  UnityEngine_LineRenderer_o **ppUVar1;
  UnityEngine_Renderer_o *__this_00;
  System_String_o *path;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_LineRenderer_o *pUVar2;
  UnityEngine_Material_o *pUVar3;
  
  if (DAT_05702a39 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&MethodInfo_LineRenderer_AddComponent_LineRenderer);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"Materials/TransparentMaterial");
    DAT_05702a39 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  __this_01 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = (UnityEngine_LineRenderer_o *)
             UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_LineRenderer_AddComponent_LineRenderer);
    ppUVar1 = &(__this->fields).Value;
    (__this->fields).Value = pUVar2;
    il2cpp_runtime_glue(ppUVar1,pUVar2);
    __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar3 = (UnityEngine_Material_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset<object>
                       (path,"Materials/TransparentMaterial",1,MethodInfo_Material_InstantiateAsset_Material);
    if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_material(__this_00,pUVar3,(MethodInfo *)0x0);
      if ((UnityEngine_Renderer_o *)*ppUVar1 != (UnityEngine_Renderer_o *)0x0) {
        pUVar3 = UnityEngine_Renderer__get_material
                           ((UnityEngine_Renderer_o *)*ppUVar1,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__set_color(pUVar3,color,(MethodInfo *)0x0);
          if (*ppUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
            UnityEngine_LineRenderer__set_startWidth(*ppUVar1,width,(MethodInfo *)0x0);
            if (*ppUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
              UnityEngine_LineRenderer__set_endWidth(*ppUVar1,width,(MethodInfo *)0x0);
              if (*ppUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
                UnityEngine_LineRenderer__set_positionCount(*ppUVar1,0,(MethodInfo *)0x0);
                if ((UnityEngine_Renderer_o *)*ppUVar1 != (UnityEngine_Renderer_o *)0x0) {
                  UnityEngine_Renderer__set_enabled
                            ((UnityEngine_Renderer_o *)*ppUVar1,0,(MethodInfo *)0x0);
                  return;
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


// CustomLogic.CustomLogicLineRendererBuiltin$$Destroy
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__Destroy (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de78f0

void CustomLogic_CustomLogicLineRendererBuiltin__Destroy
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_Object_o *obj;
  
  if (DAT_05702a3a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702a3a = '\x01';
  }
  __this_00 = (UnityEngine_Component_o *)(__this->fields).Value;
  if (__this_00 != (UnityEngine_Component_o *)0x0) {
    obj = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0)
    ;
    if (*(int *)(TypeInfo_Object + 0xe4) != 0) {
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      return;
    }
    il2cpp_init_class();
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$Finalize
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__Finalize (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de7960

void CustomLogic_CustomLogicLineRendererBuiltin__Finalize
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *pUVar3;
  
  if (DAT_05702a3b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702a3b = '\x01';
  }
  pUVar1 = (UnityEngine_Component_o *)(__this->fields).Value;
  if (pUVar1 != (UnityEngine_Component_o *)0x0) {
    pUVar3 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(pUVar1,(MethodInfo *)0x0)
    ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pUVar1 = (UnityEngine_Component_o *)(__this->fields).Value;
      if (pUVar1 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar3 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject(pUVar1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(pUVar3,(MethodInfo *)0x0);
    }
    System_Object__Finalize((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_StartWidth
// il2cpp: float CustomLogic_CustomLogicLineRendererBuiltin__get_StartWidth (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de7ab0

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_StartWidth
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_StartWidth (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3de7ad0

void CustomLogic_CustomLogicLineRendererBuiltin__set_StartWidth
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_startWidth(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_EndWidth
// il2cpp: float CustomLogic_CustomLogicLineRendererBuiltin__get_EndWidth (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de7af0

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_EndWidth
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_EndWidth (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3de7b10

void CustomLogic_CustomLogicLineRendererBuiltin__set_EndWidth
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_endWidth(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_LineColor
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin__get_LineColor (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de7b30

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicLineRendererBuiltin__get_LineColor
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Material_o *__this_01;
  Utility_Color255_o *__this_02;
  CustomLogic_CustomLogicColorBuiltin_o *__this_03;
  UnityEngine_Color_o color;
  
  if (DAT_05702a3c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    DAT_05702a3c = '\x01';
  }
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    __this_01 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Material_o *)0x0) {
      color = UnityEngine_Material__get_color(__this_01,(MethodInfo *)0x0);
      __this_02 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
      Utility_Color255___ctor(__this_02,color,(MethodInfo *)0x0);
      __this_03 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor(__this_03,__this_02,(MethodInfo *)0x0);
      return __this_03;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_LineColor
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_LineColor (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x3de7be0

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_PositionCount
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_PositionCount (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de7c30

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_PositionCount
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_PositionCount (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3de7c50

void CustomLogic_CustomLogicLineRendererBuiltin__set_PositionCount
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t value,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_positionCount(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_Enabled
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_Enabled (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de7c70

bool_conflict
CustomLogic_CustomLogicLineRendererBuiltin__get_Enabled
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    bVar1 = UnityEngine_Renderer__get_enabled(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_Enabled
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_Enabled (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3de7c90

void CustomLogic_CustomLogicLineRendererBuiltin__set_Enabled
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    UnityEngine_Renderer__set_enabled(__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_Loop
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_Loop (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de7cb0

bool_conflict
CustomLogic_CustomLogicLineRendererBuiltin__get_Loop
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    bVar1 = UnityEngine_LineRenderer__get_loop(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_Loop
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_Loop (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3de7cd0

void CustomLogic_CustomLogicLineRendererBuiltin__set_Loop
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_loop(__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_NumCornerVertices
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_NumCornerVertices (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de7cf0

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_NumCornerVertices
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_NumCornerVertices (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3de7d10

void CustomLogic_CustomLogicLineRendererBuiltin__set_NumCornerVertices
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t value,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_numCornerVertices(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_NumCapVertices
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_NumCapVertices (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de7d30

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_NumCapVertices
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_NumCapVertices (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3de7d50

void CustomLogic_CustomLogicLineRendererBuiltin__set_NumCapVertices
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t value,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_numCapVertices(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_Alignment
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_Alignment (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de7d70

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_Alignment
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_Alignment (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3de7d90

void CustomLogic_CustomLogicLineRendererBuiltin__set_Alignment
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t value,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_01;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (DAT_05702a3d == '\0') {
    il2cpp_init_method_metadata(&TypeRef_LineAlignment);
    DAT_05702a3d = '\x01';
  }
  handle.fields.value = TypeRef_LineAlignment.fields.value;
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
    __this_00 = (__this->fields).Value;
    if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__set_alignment(__this_00,value,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iStack_30 = value;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_30);
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown line alignment value: {0}");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
  System_ArgumentException___ctor(__this_01,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_Void_set_Alignment);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_01,uVar4);
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_TextureMode
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_TextureMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de7ed0

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_TextureMode
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_TextureMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3de7ef0

void CustomLogic_CustomLogicLineRendererBuiltin__set_TextureMode
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t value,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_01;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (DAT_05702a3e == '\0') {
    il2cpp_init_method_metadata(&TypeRef_LineTextureMode);
    DAT_05702a3e = '\x01';
  }
  handle.fields.value = TypeRef_LineTextureMode.fields.value;
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
    __this_00 = (__this->fields).Value;
    if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__set_textureMode(__this_00,value,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iStack_30 = value;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_30);
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown line texture mode value: {0}");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
  System_ArgumentException___ctor(__this_01,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_Void_set_TextureMode);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_01,uVar4);
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_UseWorldSpace
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_UseWorldSpace (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de8030

bool_conflict
CustomLogic_CustomLogicLineRendererBuiltin__get_UseWorldSpace
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    bVar1 = UnityEngine_LineRenderer__get_useWorldSpace(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_UseWorldSpace
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_UseWorldSpace (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3de8050

void CustomLogic_CustomLogicLineRendererBuiltin__set_UseWorldSpace
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_useWorldSpace(__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_ShadowCastingMode
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_ShadowCastingMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de8070

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_ShadowCastingMode
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_ShadowCastingMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3de8090

void CustomLogic_CustomLogicLineRendererBuiltin__set_ShadowCastingMode
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t value,
               MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_01;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (DAT_05702a3f == '\0') {
    il2cpp_init_method_metadata(&TypeRef_ShadowCastingMode);
    DAT_05702a3f = '\x01';
  }
  handle.fields.value = TypeRef_ShadowCastingMode.fields.value;
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
    __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
    if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_shadowCastingMode(__this_00,value,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iStack_30 = value;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_30);
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown shadow casting mode value: {0}");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
  System_ArgumentException___ctor(__this_01,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_Void_set_ShadowCastingMode);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_01,uVar4);
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_ReceiveShadows
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_ReceiveShadows (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de81d0

bool_conflict
CustomLogic_CustomLogicLineRendererBuiltin__get_ReceiveShadows
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    bVar1 = UnityEngine_Renderer__get_receiveShadows(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_ReceiveShadows
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_ReceiveShadows (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3de81f0

void CustomLogic_CustomLogicLineRendererBuiltin__set_ReceiveShadows
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).Value;
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    UnityEngine_Renderer__set_receiveShadows(__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_ColorGradient
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin__get_ColorGradient (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de8210

/* WARNING: Type propagation algorithm not settling */

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
  long lVar7;
  int iVar8;
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  UnityEngine_Gradient_o *__this_03;
  UnityEngine_GradientColorKey_array *pUVar9;
  Utility_Color255_o *__this_04;
  CustomLogic_CustomLogicColorBuiltin_o *__this_05;
  float *pfVar10;
  ulong uVar11;
  UnityEngine_Color_o color;
  
  if (DAT_05702a40 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05702a40 = '\x01';
  }
  __this_02 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_02,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Value;
  if (((__this_00 != (UnityEngine_LineRenderer_o *)0x0) &&
      (__this_03 = UnityEngine_LineRenderer__get_colorGradient(__this_00,(MethodInfo *)0x0),
      __this_03 != (UnityEngine_Gradient_o *)0x0)) &&
     (pUVar9 = UnityEngine_Gradient__get_colorKeys(__this_03,(MethodInfo *)0x0),
     pUVar9 != (UnityEngine_GradientColorKey_array *)0x0)) {
    iVar8 = (int)pUVar9->max_length;
    if (__this_02 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (0 < iVar8) goto LAB_03de83f0;
    }
    else if (0 < iVar8) {
      pfVar10 = &pUVar9->m_Items[0].fields.color.fields.b;
      uVar11 = 0;
      if ((pUVar9->max_length & 0xffffffff) != 0) {
        do {
          uVar2 = ((UnityEngine_Color_Fields *)(pfVar10 + -2))->r;
          uVar4 = ((UnityEngine_Color_Fields *)(pfVar10 + -2))->g;
          color.fields.g = (float)uVar4;
          color.fields.r = (float)uVar2;
          uVar3 = *(undefined8 *)pfVar10;
          __this_01 = (__this_02->fields).List;
          __this_04 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
          color.fields._8_8_ = uVar3;
          Utility_Color255___ctor(__this_04,color,(MethodInfo *)0x0);
          __this_05 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
          CustomLogic_CustomLogicColorBuiltin___ctor(__this_05,__this_04,(MethodInfo *)0x0);
          lVar7 = MethodInfo_Void_Add;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03de83f0;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (__this_01->fields)._items;
          if (pSVar6 == (System_Object_array *)0x0) goto LAB_03de83f0;
          uVar5 = (__this_01->fields)._size;
          if (uVar5 < (uint)pSVar6->max_length) {
            (__this_01->fields)._size = uVar5 + 1;
            pSVar6->m_Items[(int)uVar5] = (Il2CppObject *)__this_05;
            il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar5);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_01,(Il2CppObject *)__this_05,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          uVar11 = uVar11 + 1;
          uVar5 = (uint)pUVar9->max_length;
          pfVar10 = pfVar10 + 5;
          if ((long)(int)uVar5 <= (long)uVar11) {
            return __this_02;
          }
        } while (uVar11 < uVar5);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    return __this_02;
  }
LAB_03de83f0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_ColorGradient
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_ColorGradient (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, CustomLogic_CustomLogicListBuiltin_o* value, const MethodInfo* method);
// 0x3de8400

/* WARNING: Type propagation algorithm not settling */

void CustomLogic_CustomLogicLineRendererBuiltin__set_ColorGradient
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,
               CustomLogic_CustomLogicListBuiltin_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_GradientColorKey_o *pUVar2;
  uint uVar3;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_LineRenderer_o *__this_01;
  undefined4 uVar4;
  UnityEngine_GradientColorKey_o __this_02;
  UnityEngine_GradientColorKey_o item;
  UnityEngine_GradientColorKey_o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  long lVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_GradientColorKey__o *__this_08;
  UnityEngine_Gradient_o *__this_09;
  UnityEngine_GradientColorKey_array *pUVar7;
  UnityEngine_Color_o UVar8;
  System_Collections_Generic_List_Enumerator_T__c *in_stack_ffffffffffffff48;
  Il2CppType *in_stack_ffffffffffffff50;
  Il2CppType *pIVar9;
  float in_stack_ffffffffffffff58;
  undefined4 in_stack_ffffffffffffff5c;
  undefined1 auStack_98 [48];
  float fStack_68;
  _union_247328 _Stack_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  float fStack_48;
  undefined4 uStack_44;
  CustomLogic_CustomLogicLineRendererBuiltin_o *pCStack_38;
  
  if (DAT_05702a41 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_GradientColorKey___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GradientColorKey);
    il2cpp_init_method_metadata(&TypeInfo_List_GradientColorKey);
    il2cpp_init_method_metadata(&"Invalid color type");
    DAT_05702a41 = '\x01';
  }
  auStack_98._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_98._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_98._16_8_ = (InvokerMethod)0x0;
  __this_08 = (System_Collections_Generic_List_GradientColorKey__o *)
              il2cpp_runtime_glue(TypeInfo_List_GradientColorKey);
  System_Collections_Generic_List<GradientColorKey>___ctor(__this_08,MethodInfo_List_1_UnityEngine_GradientColorKey);
  if ((value != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this_00 = (value->fields).List,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_58,__this_00,MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato)
    ;
    auStack_98._16_8_ = CONCAT44(uStack_44,fStack_48);
    auStack_98._0_8_ = CONCAT44(_Stack_58._4_4_,_Stack_58._0_4_);
    auStack_98._8_8_ = CONCAT44(_uStack_4c,uStack_50);
    pCStack_38 = __this;
    if (__this_08 == (System_Collections_Generic_List_GradientColorKey__o *)0x0) {
      __this_05.fields._8_8_ = in_stack_ffffffffffffff50;
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
      __this_05.fields._current._0_4_ = in_stack_ffffffffffffff58;
      __this_05.fields._current._4_4_ = in_stack_ffffffffffffff5c;
      bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_05,(MethodInfo_3185E20 *)auStack_98);
      if ((char)bVar6 != '\0') {
        if ((InvokerMethod)auStack_98._16_8_ != (InvokerMethod)0x0) {
          if ((*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) <= *(byte *)(*(long *)auStack_98._16_8_ + 0x130)) &&
             (*(long *)(*(long *)(*(long *)auStack_98._16_8_ + 200) + -8 +
                       (ulong)*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) * 8) == TypeInfo_CustomLogicColorBuiltin)) {
            if (*(Utility_Color255_o **)(auStack_98._16_8_ + 0x30) != (Utility_Color255_o *)0x0) {
              UVar8 = Utility_Color255__ToColor
                                (*(Utility_Color255_o **)(auStack_98._16_8_ + 0x30),
                                 (MethodInfo *)0x0);
              auStack_98._32_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
              auStack_98._40_8_ = (Il2CppType *)0x0;
              fStack_68 = 0.0;
              __this_03.fields.color.fields._8_8_ = in_stack_ffffffffffffff50;
              __this_03.fields.color.fields._0_8_ = in_stack_ffffffffffffff48;
              __this_03.fields.time = in_stack_ffffffffffffff58;
              UnityEngine_GradientColorKey___ctor
                        (__this_03,UVar8,0.0,(MethodInfo *)(auStack_98 + 0x20));
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_03de8769:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
LAB_03de86ad:
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Debug__LogError("Invalid color type",(MethodInfo *)0x0);
        __this_06.fields._8_8_ = in_stack_ffffffffffffff50;
        __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
        __this_06.fields._current._0_4_ = in_stack_ffffffffffffff58;
        __this_06.fields._current._4_4_ = in_stack_ffffffffffffff5c;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_06,(MethodInfo_3185E10 *)auStack_98);
        return;
      }
    }
    else {
      while (__this_04.fields._8_8_ = in_stack_ffffffffffffff50,
            __this_04.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48,
            __this_04.fields._current._0_4_ = in_stack_ffffffffffffff58,
            __this_04.fields._current._4_4_ = in_stack_ffffffffffffff5c,
            bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_04,(MethodInfo_3185E20 *)auStack_98), (char)bVar6 != '\0') {
        if ((InvokerMethod)auStack_98._16_8_ == (InvokerMethod)0x0) goto LAB_03de86ad;
        if ((*(byte *)(*(long *)auStack_98._16_8_ + 0x130) < *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130)) ||
           (*(long *)(*(long *)(*(long *)auStack_98._16_8_ + 200) + -8 +
                     (ulong)*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) * 8) != TypeInfo_CustomLogicColorBuiltin))
        goto LAB_03de86ad;
        if (*(Utility_Color255_o **)(auStack_98._16_8_ + 0x30) == (Utility_Color255_o *)0x0)
        goto LAB_03de8769;
        UVar8 = Utility_Color255__ToColor
                          (*(Utility_Color255_o **)(auStack_98._16_8_ + 0x30),(MethodInfo *)0x0);
        auStack_98._32_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
        auStack_98._40_8_ = (Il2CppType *)0x0;
        fStack_68 = 0.0;
        __this_02.fields.color.fields._8_8_ = in_stack_ffffffffffffff50;
        __this_02.fields.color.fields._0_8_ = in_stack_ffffffffffffff48;
        __this_02.fields.time = in_stack_ffffffffffffff58;
        UnityEngine_GradientColorKey___ctor(__this_02,UVar8,0.0,(MethodInfo *)(auStack_98 + 0x20));
        pIVar9 = (Il2CppType *)auStack_98._40_8_;
        lVar5 = MethodInfo_Void_Add;
        fStack_48 = fStack_68;
        _Stack_58._0_4_ = auStack_98._32_4_;
        _Stack_58._4_4_ = auStack_98._36_4_;
        uStack_50 = auStack_98._40_4_;
        uVar4._0_2_ = auStack_98._44_2_;
        uVar4._2_2_ = auStack_98._46_2_;
        uStack_4c = auStack_98._44_2_;
        uStack_4a = auStack_98._46_2_;
        piVar1 = &(__this_08->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar7 = (__this_08->fields)._items;
        auStack_98._40_8_ = pIVar9;
        if (pUVar7 == (UnityEngine_GradientColorKey_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar3 = (__this_08->fields)._size;
        if (uVar3 < (uint)pUVar7->max_length) {
          (__this_08->fields)._size = uVar3 + 1;
          pUVar7->m_Items[(int)uVar3].fields.time = fStack_68;
          pUVar2 = pUVar7->m_Items + (int)uVar3;
          (pUVar2->fields).color.fields.r = (float)auStack_98._32_4_;
          (pUVar2->fields).color.fields.g = (float)auStack_98._36_4_;
          auStack_98._40_4_ = SUB84(pIVar9,0);
          auStack_98._44_4_ = SUB84(pIVar9,4);
          (pUVar2->fields).color.fields.b = (float)auStack_98._40_4_;
          (pUVar2->fields).color.fields.a = (float)auStack_98._44_4_;
          _uStack_4c = uVar4;
        }
        else {
          auStack_98._40_4_ = SUB84(pIVar9,0);
          auStack_98._44_4_ = SUB84(pIVar9,4);
          item.fields.color.fields.b = (float)auStack_98._40_4_;
          item.fields.color.fields.a = (float)auStack_98._44_4_;
          item.fields.color.fields.r = (float)auStack_98._32_4_;
          item.fields.color.fields.g = (float)auStack_98._36_4_;
          item.fields.time = fStack_68;
          in_stack_ffffffffffffff48 =
               (System_Collections_Generic_List_Enumerator_T__c *)auStack_98._32_8_;
          in_stack_ffffffffffffff58 = fStack_68;
          System_Collections_Generic_List<GradientColorKey>__AddWithResize
                    (__this_08,item,
                     *(MethodInfo_3572D10 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          in_stack_ffffffffffffff50 = pIVar9;
        }
      }
    }
    __this_07.fields._8_8_ = in_stack_ffffffffffffff50;
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
    __this_07.fields._current._0_4_ = in_stack_ffffffffffffff58;
    __this_07.fields._current._4_4_ = in_stack_ffffffffffffff5c;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_07,(MethodInfo_3185E10 *)auStack_98);
    __this_01 = (pCStack_38->fields).Value;
    if (((__this_01 != (UnityEngine_LineRenderer_o *)0x0) &&
        (__this_09 = UnityEngine_LineRenderer__get_colorGradient(__this_01,(MethodInfo *)0x0),
        __this_08 != (System_Collections_Generic_List_GradientColorKey__o *)0x0)) &&
       (pUVar7 = System_Collections_Generic_List<GradientColorKey>__ToArray(__this_08,MethodInfo_GradientColorKey___ToArray),
       __this_09 != (UnityEngine_Gradient_o *)0x0)) {
      UnityEngine_Gradient__set_colorKeys(__this_09,pUVar7,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_AlphaGradient
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin__get_AlphaGradient (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de8890

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicLineRendererBuiltin__get_AlphaGradient
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_LineRenderer_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar3;
  long lVar4;
  int iVar5;
  undefined8 in_RAX;
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  UnityEngine_Gradient_o *__this_03;
  UnityEngine_GradientAlphaKey_array *pUVar6;
  Il2CppObject *item;
  ulong uVar7;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (DAT_05702a42 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05702a42 = '\x01';
  }
  __this_02 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_02,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Value;
  if (((__this_00 != (UnityEngine_LineRenderer_o *)0x0) &&
      (__this_03 = UnityEngine_LineRenderer__get_colorGradient(__this_00,(MethodInfo *)0x0),
      __this_03 != (UnityEngine_Gradient_o *)0x0)) &&
     (pUVar6 = UnityEngine_Gradient__get_alphaKeys(__this_03,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_GradientAlphaKey_array *)0x0)) {
    iVar5 = (int)pUVar6->max_length;
    if (__this_02 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (0 < iVar5) goto LAB_03de89f8;
    }
    else if (0 < iVar5) {
      uVar7 = 0;
      if ((pUVar6->max_length & 0xffffffff) != 0) {
        do {
          __this_01 = (__this_02->fields).List;
          uStack_38 = CONCAT44(pUVar6->m_Items[uVar7].fields.alpha,(undefined4)uStack_38);
          item = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,(long)&uStack_38 + 4);
          lVar4 = MethodInfo_Void_Add;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03de89f8;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_01->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03de89f8;
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = item;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_01,item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          uVar7 = uVar7 + 1;
          uVar2 = (uint)pUVar6->max_length;
          if ((long)(int)uVar2 <= (long)uVar7) {
            return __this_02;
          }
        } while (uVar7 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    return __this_02;
  }
LAB_03de89f8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_AlphaGradient
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_AlphaGradient (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, CustomLogic_CustomLogicListBuiltin_o* value, const MethodInfo* method);
// 0x3de8a10

void CustomLogic_CustomLogicLineRendererBuiltin__set_AlphaGradient
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,
               CustomLogic_CustomLogicListBuiltin_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_LineRenderer_o *__this_01;
  UnityEngine_GradientAlphaKey_o __this_02;
  UnityEngine_GradientAlphaKey_o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  long lVar2;
  bool_conflict bVar3;
  System_Collections_Generic_List_GradientAlphaKey__o *__this_08;
  uint *puVar4;
  float *pfVar5;
  UnityEngine_Gradient_o *__this_09;
  UnityEngine_GradientAlphaKey_array *pUVar6;
  float in_XMM2_Da;
  undefined1 in_stack_ffffffffffffff88 [12];
  uint in_stack_ffffffffffffff94;
  uint uVar7;
  UnityEngine_GradientAlphaKey_Fields UVar8;
  float fStack_50;
  float fStack_4c;
  Il2CppType *pIStack_40;
  CustomLogic_CustomLogicLineRendererBuiltin_o *pCStack_38;
  
  if (DAT_05702a43 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_GradientAlphaKey___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GradientAlphaKey);
    il2cpp_init_method_metadata(&TypeInfo_List_GradientAlphaKey);
    il2cpp_init_method_metadata(&"Invalid alpha type");
    DAT_05702a43 = '\x01';
  }
  __this_08 = (System_Collections_Generic_List_GradientAlphaKey__o *)
              il2cpp_runtime_glue(TypeInfo_List_GradientAlphaKey);
  System_Collections_Generic_List<GradientAlphaKey>___ctor(__this_08,MethodInfo_List_1_UnityEngine_GradientAlphaKey);
  if ((value != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this_00 = (value->fields).List,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb0,__this_00
               ,MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    UVar8 = _fStack_50;
    pCStack_38 = __this;
    if (__this_08 == (System_Collections_Generic_List_GradientAlphaKey__o *)0x0) {
      __this_05.fields._version = in_stack_ffffffffffffff94;
      __this_05.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
      __this_05.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_05.fields._current = (Il2CppObject *)_fStack_50;
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_05,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar3 != '\0') {
        if ((pIStack_40 != (Il2CppType *)0x0) && (pIStack_40->data == DAT_05711098)) {
          fStack_50 = 0.0;
          fStack_4c = 0.0;
          if ((pIStack_40->data->_1).element_class == (DAT_05711098->_1).element_class) {
            puVar4 = (uint *)il2cpp_glue_022c7330(pIStack_40);
            if ((pIStack_40->data->_1).element_class == (DAT_05711098->_1).element_class) {
              uVar7 = *puVar4;
              pfVar5 = (float *)il2cpp_glue_022c7330(pIStack_40);
              __this_02.fields.time = 0.0;
              __this_02.fields.alpha = (float)uVar7;
              UnityEngine_GradientAlphaKey___ctor
                        (__this_02,*pfVar5,in_XMM2_Da,(MethodInfo *)&stack0xffffffffffffffb0);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_03de8d7a:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pIStack_40);
          }
LAB_03de8d72:
          _fStack_50 = (UnityEngine_GradientAlphaKey_Fields)0x0;
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIStack_40);
        }
LAB_03de8c69:
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Debug__LogError("Invalid alpha type",(MethodInfo *)0x0);
        __this_06.fields._version = in_stack_ffffffffffffff94;
        __this_06.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
        __this_06.fields._index = in_stack_ffffffffffffff88._8_4_;
        __this_06.fields._current = (Il2CppObject *)UVar8;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_06,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
        return;
      }
    }
    else {
      while (__this_04.fields._version = in_stack_ffffffffffffff94,
            __this_04.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_,
            __this_04.fields._index = in_stack_ffffffffffffff88._8_4_,
            __this_04.fields._current = (Il2CppObject *)UVar8,
            bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_04,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
            (char)bVar3 != '\0') {
        if ((pIStack_40 == (Il2CppType *)0x0) || (pIStack_40->data != DAT_05711098))
        goto LAB_03de8c69;
        fStack_50 = 0.0;
        fStack_4c = 0.0;
        if ((pIStack_40->data->_1).element_class != (DAT_05711098->_1).element_class)
        goto LAB_03de8d72;
        puVar4 = (uint *)il2cpp_glue_022c7330(pIStack_40);
        if ((pIStack_40->data->_1).element_class != (DAT_05711098->_1).element_class)
        goto LAB_03de8d7a;
        in_stack_ffffffffffffff94 = *puVar4;
        pfVar5 = (float *)il2cpp_glue_022c7330(pIStack_40);
        __this_03.fields.time = 0.0;
        __this_03.fields.alpha = (float)in_stack_ffffffffffffff94;
        UnityEngine_GradientAlphaKey___ctor
                  (__this_03,*pfVar5,in_XMM2_Da,(MethodInfo *)&stack0xffffffffffffffb0);
        lVar2 = MethodInfo_Void_Add;
        piVar1 = &(__this_08->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar6 = (__this_08->fields)._items;
        if (pUVar6 == (UnityEngine_GradientAlphaKey_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar7 = (__this_08->fields)._size;
        if (uVar7 < (uint)pUVar6->max_length) {
          (__this_08->fields)._size = uVar7 + 1;
          pUVar6->m_Items[(int)uVar7].fields = _fStack_50;
        }
        else {
          System_Collections_Generic_List<GradientAlphaKey>__AddWithResize
                    (__this_08,(UnityEngine_GradientAlphaKey_o)_fStack_50,
                     *(MethodInfo_356FC50 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_07.fields._version = in_stack_ffffffffffffff94;
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_
    ;
    __this_07.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_07.fields._current = (Il2CppObject *)UVar8;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_07,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    __this_01 = (pCStack_38->fields).Value;
    if (((__this_01 != (UnityEngine_LineRenderer_o *)0x0) &&
        (__this_09 = UnityEngine_LineRenderer__get_colorGradient(__this_01,(MethodInfo *)0x0),
        __this_08 != (System_Collections_Generic_List_GradientAlphaKey__o *)0x0)) &&
       (pUVar6 = System_Collections_Generic_List<GradientAlphaKey>__ToArray(__this_08,MethodInfo_GradientAlphaKey___ToArray),
       __this_09 != (UnityEngine_Gradient_o *)0x0)) {
      UnityEngine_Gradient__set_alphaKeys(__this_09,pUVar6,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_WidthCurve
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin__get_WidthCurve (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de8e40

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicLineRendererBuiltin__get_WidthCurve
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_LineRenderer_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar3;
  UnityEngine_Vector2_o value;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  UnityEngine_Keyframe_o __this_02;
  UnityEngine_Keyframe_o __this_03;
  long lVar7;
  int iVar8;
  CustomLogic_CustomLogicListBuiltin_o *__this_04;
  UnityEngine_AnimationCurve_o *__this_05;
  UnityEngine_Keyframe_array *pUVar9;
  CustomLogic_CustomLogicVector2Builtin_o *__this_06;
  UnityEngine_Keyframe_o *pUVar10;
  ulong uVar11;
  float fVar12;
  undefined8 in_stack_ffffffffffffff78;
  
  if (DAT_05702a44 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05702a44 = '\x01';
  }
  __this_04 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_04,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Value;
  if (((__this_00 != (UnityEngine_LineRenderer_o *)0x0) &&
      (__this_05 = UnityEngine_LineRenderer__get_widthCurve(__this_00,(MethodInfo *)0x0),
      __this_05 != (UnityEngine_AnimationCurve_o *)0x0)) &&
     (pUVar9 = UnityEngine_AnimationCurve__get_keys(__this_05,(MethodInfo *)0x0),
     pUVar9 != (UnityEngine_Keyframe_array *)0x0)) {
    iVar8 = (int)pUVar9->max_length;
    if (__this_04 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (0 < iVar8) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else if (0 < iVar8) {
      pUVar10 = pUVar9->m_Items;
      uVar11 = 0;
      if ((pUVar9->max_length & 0xffffffff) != 0) {
        do {
          uVar4 = (pUVar10->fields).m_Time;
          uVar5 = (pUVar10->fields).m_Value;
          fVar6 = (pUVar10->fields).m_InTangent;
          __this_01 = (__this_04->fields).List;
          __this_02.fields._8_8_ = __this_04;
          __this_02.fields.m_Time = (float)(int)in_stack_ffffffffffffff78;
          __this_02.fields.m_Value = (float)(int)((ulong)in_stack_ffffffffffffff78 >> 0x20);
          __this_02.fields.m_WeightedMode = uVar4;
          __this_02.fields.m_InWeight = (float)uVar5;
          __this_02.fields.m_OutWeight = fVar6;
          fVar12 = UnityEngine_Keyframe__get_time(__this_02,(MethodInfo *)&stack0xffffffffffffff88);
          __this_03.fields._8_8_ = __this_04;
          __this_03.fields.m_Time = (float)(int)in_stack_ffffffffffffff78;
          __this_03.fields.m_Value = (float)(int)((ulong)in_stack_ffffffffffffff78 >> 0x20);
          __this_03.fields.m_WeightedMode = uVar4;
          __this_03.fields.m_InWeight = (float)uVar5;
          __this_03.fields.m_OutWeight = fVar6;
          fVar6 = UnityEngine_Keyframe__get_value(__this_03,(MethodInfo *)&stack0xffffffffffffff88);
          __this_06 = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
          value.fields.y = fVar6;
          value.fields.x = fVar12;
          CustomLogic_CustomLogicVector2Builtin___ctor(__this_06,value,(MethodInfo *)0x0);
          lVar7 = MethodInfo_Void_Add;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03de9025;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_01->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03de9025;
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_06;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_01,(Il2CppObject *)__this_06,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          uVar11 = uVar11 + 1;
          uVar2 = (uint)pUVar9->max_length;
          pUVar10 = pUVar10 + 1;
          if ((long)(int)uVar2 <= (long)uVar11) {
            return __this_04;
          }
        } while (uVar11 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    return __this_04;
  }
LAB_03de9025:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_WidthCurve
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_WidthCurve (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, CustomLogic_CustomLogicListBuiltin_o* value, const MethodInfo* method);
// 0x3de9060

void CustomLogic_CustomLogicLineRendererBuiltin__set_WidthCurve
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,
               CustomLogic_CustomLogicListBuiltin_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_LineRenderer_o *__this_01;
  undefined4 uVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  UnityEngine_Keyframe_o __this_06;
  UnityEngine_Keyframe_o item;
  UnityEngine_Keyframe_o __this_07;
  _union_247328 _Var5;
  UnityEngine_Keyframe_Fields *pUVar6;
  long lVar7;
  undefined8 __this_08;
  bool_conflict bVar8;
  System_Collections_Generic_List_Keyframe__o *__this_09;
  UnityEngine_AnimationCurve_o *__this_10;
  UnityEngine_Keyframe_array *pUVar9;
  float fVar10;
  float fVar11;
  _union_247328 in_stack_ffffffffffffff38;
  uint32_t in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  undefined4 in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff4c;
  float in_stack_ffffffffffffff50;
  undefined1 auStack_98 [36];
  undefined4 uStack_74;
  uint32_t uStack_70;
  uint16_t uStack_6c;
  uint16_t uStack_6a;
  uint16_t uStack_68;
  uint8_t uStack_66;
  uint8_t uStack_65;
  undefined4 uStack_64;
  float fStack_60;
  _union_247328 _Stack_58;
  uint32_t uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  CustomLogic_CustomLogicLineRendererBuiltin_o *pCStack_38;
  
  if (DAT_05702a45 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_Keyframe___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Keyframe);
    il2cpp_init_method_metadata(&TypeInfo_List_Keyframe);
    il2cpp_init_method_metadata(&"Invalid point type");
    DAT_05702a45 = '\x01';
  }
  auStack_98._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_98._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_98._16_8_ = (CustomLogic_CustomLogicVector2Builtin_o *)0x0;
  __this_09 = (System_Collections_Generic_List_Keyframe__o *)il2cpp_runtime_glue(TypeInfo_List_Keyframe);
  System_Collections_Generic_List<Keyframe>___ctor(__this_09,MethodInfo_List_1_UnityEngine_Keyframe);
  if ((value != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this_00 = (value->fields).List,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_98 + 0x20),__this_00,
               MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    auStack_98._16_8_ = CONCAT44(uStack_64,_uStack_68);
    auStack_98._0_8_ = CONCAT44(uStack_74,auStack_98._32_4_);
    auStack_98._8_8_ = CONCAT44(_uStack_6c,uStack_70);
    pCStack_38 = __this;
    if (__this_09 == (System_Collections_Generic_List_Keyframe__o *)0x0) {
      __this_03.fields._index = in_stack_ffffffffffffff40;
      __this_03.fields._list = in_stack_ffffffffffffff38.genericMethod;
      __this_03.fields._version._0_2_ = (uint16_t)in_stack_ffffffffffffff44;
      __this_03.fields._version._2_2_ = SUB42(in_stack_ffffffffffffff44,2);
      __this_03.fields._current._0_2_ = (uint16_t)in_stack_ffffffffffffff48;
      __this_03.fields._current._2_1_ = SUB41(in_stack_ffffffffffffff48,2);
      __this_03.fields._current._3_1_ = SUB41(in_stack_ffffffffffffff48,3);
      __this_03.fields._current._4_4_ = in_stack_ffffffffffffff4c;
      bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_03,(MethodInfo_3185E20 *)auStack_98);
      if ((char)bVar8 != '\0') {
        if ((CustomLogic_CustomLogicVector2Builtin_o *)auStack_98._16_8_ !=
            (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
          bVar2 = (TypeInfo_CustomLogicVector2Builtin->_2).naturalAligment;
          if ((bVar2 <= ((*(CustomLogic_CustomLogicVector2Builtin_c **)auStack_98._16_8_)->_2).
                        naturalAligment) &&
             (((*(CustomLogic_CustomLogicVector2Builtin_c **)auStack_98._16_8_)->_2).typeHierarchy
              [(ulong)bVar2 - 1] == TypeInfo_CustomLogicVector2Builtin)) {
            fVar10 = CustomLogic_CustomLogicVector2Builtin__get_X
                               ((CustomLogic_CustomLogicVector2Builtin_o *)auStack_98._16_8_,
                                (MethodInfo *)0x0);
            fVar11 = CustomLogic_CustomLogicVector2Builtin__get_Y
                               ((CustomLogic_CustomLogicVector2Builtin_o *)auStack_98._16_8_,
                                (MethodInfo *)0x0);
            uStack_48._0_2_ = 0;
            uStack_48._2_1_ = '\0';
            uStack_48._3_1_ = '\0';
            uStack_44 = 0;
            _Stack_58.genericMethod = (void *)0x0;
            uStack_50 = 0;
            uStack_4c._0_2_ = 0;
            uStack_4c._2_2_ = 0;
            __this_07.fields.m_InTangent = (float)in_stack_ffffffffffffff40;
            __this_07.fields._0_8_ = in_stack_ffffffffffffff38.genericMethod;
            __this_07.fields.m_OutTangent = (float)in_stack_ffffffffffffff44;
            __this_07.fields.m_WeightedMode._0_2_ = (uint16_t)in_stack_ffffffffffffff48;
            __this_07.fields.m_WeightedMode._2_1_ = SUB41(in_stack_ffffffffffffff48,2);
            __this_07.fields.m_WeightedMode._3_1_ = SUB41(in_stack_ffffffffffffff48,3);
            __this_07.fields.m_InWeight = (float)in_stack_ffffffffffffff4c;
            __this_07.fields.m_OutWeight = in_stack_ffffffffffffff50;
            UnityEngine_Keyframe___ctor(__this_07,fVar10,fVar11,(MethodInfo *)&_Stack_58);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
LAB_03de9319:
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Debug__LogError("Invalid point type",(MethodInfo *)0x0);
        __this_04.fields._index = in_stack_ffffffffffffff40;
        __this_04.fields._list = in_stack_ffffffffffffff38.genericMethod;
        __this_04.fields._version._0_2_ = (uint16_t)in_stack_ffffffffffffff44;
        __this_04.fields._version._2_2_ = SUB42(in_stack_ffffffffffffff44,2);
        __this_04.fields._current._0_2_ = (uint16_t)in_stack_ffffffffffffff48;
        __this_04.fields._current._2_1_ = SUB41(in_stack_ffffffffffffff48,2);
        __this_04.fields._current._3_1_ = SUB41(in_stack_ffffffffffffff48,3);
        __this_04.fields._current._4_4_ = in_stack_ffffffffffffff4c;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_04,(MethodInfo_3185E10 *)auStack_98);
        return;
      }
    }
    else {
      while (__this_02.fields._index = in_stack_ffffffffffffff40,
            __this_02.fields._list = in_stack_ffffffffffffff38.genericMethod,
            __this_02.fields._version._0_2_ = (uint16_t)in_stack_ffffffffffffff44,
            __this_02.fields._version._2_2_ = SUB42(in_stack_ffffffffffffff44,2),
            __this_02.fields._current._0_2_ = (uint16_t)in_stack_ffffffffffffff48,
            __this_02.fields._current._2_1_ = SUB41(in_stack_ffffffffffffff48,2),
            __this_02.fields._current._3_1_ = SUB41(in_stack_ffffffffffffff48,3),
            __this_02.fields._current._4_4_ = in_stack_ffffffffffffff4c,
            bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_02,(MethodInfo_3185E20 *)auStack_98),
            __this_08 = auStack_98._16_8_, (char)bVar8 != '\0') {
        if ((CustomLogic_CustomLogicVector2Builtin_o *)auStack_98._16_8_ ==
            (CustomLogic_CustomLogicVector2Builtin_o *)0x0) goto LAB_03de9319;
        bVar2 = (TypeInfo_CustomLogicVector2Builtin->_2).naturalAligment;
        if ((((*(CustomLogic_CustomLogicVector2Builtin_c **)auStack_98._16_8_)->_2).naturalAligment
             < bVar2) ||
           (((*(CustomLogic_CustomLogicVector2Builtin_c **)auStack_98._16_8_)->_2).typeHierarchy
            [(ulong)bVar2 - 1] != TypeInfo_CustomLogicVector2Builtin)) goto LAB_03de9319;
        fVar10 = CustomLogic_CustomLogicVector2Builtin__get_X
                           ((CustomLogic_CustomLogicVector2Builtin_o *)auStack_98._16_8_,
                            (MethodInfo *)0x0);
        fVar11 = CustomLogic_CustomLogicVector2Builtin__get_Y
                           ((CustomLogic_CustomLogicVector2Builtin_o *)__this_08,(MethodInfo *)0x0);
        uStack_48._0_2_ = 0;
        uStack_48._2_1_ = '\0';
        uStack_48._3_1_ = '\0';
        uStack_44 = 0;
        _Stack_58.genericMethod = (void *)0x0;
        uStack_50 = 0;
        uStack_4c._0_2_ = 0;
        uStack_4c._2_2_ = 0;
        __this_06.fields.m_InTangent = (float)in_stack_ffffffffffffff40;
        __this_06.fields._0_8_ = in_stack_ffffffffffffff38.genericMethod;
        __this_06.fields.m_OutTangent = (float)in_stack_ffffffffffffff44;
        __this_06.fields.m_WeightedMode._0_2_ = (uint16_t)in_stack_ffffffffffffff48;
        __this_06.fields.m_WeightedMode._2_1_ = SUB41(in_stack_ffffffffffffff48,2);
        __this_06.fields.m_WeightedMode._3_1_ = SUB41(in_stack_ffffffffffffff48,3);
        __this_06.fields.m_InWeight = (float)in_stack_ffffffffffffff4c;
        __this_06.fields.m_OutWeight = in_stack_ffffffffffffff50;
        UnityEngine_Keyframe___ctor(__this_06,fVar10,fVar11,(MethodInfo *)&_Stack_58);
        lVar7 = MethodInfo_Void_Add;
        uStack_68 = (uint16_t)uStack_48;
        uStack_66 = uStack_48._2_1_;
        uStack_65 = uStack_48._3_1_;
        uStack_64 = (undefined4)uStack_44;
        fStack_60 = (float)((ulong)uStack_44 >> 0x20);
        auStack_98._32_4_ = _Stack_58._0_4_;
        uStack_74 = _Stack_58._4_4_;
        uStack_70 = uStack_50;
        uVar4._0_2_ = (uint16_t)uStack_4c;
        uVar4._2_2_ = uStack_4c._2_2_;
        uStack_6c = (uint16_t)uStack_4c;
        uStack_6a = uStack_4c._2_2_;
        piVar1 = &(__this_09->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar9 = (__this_09->fields)._items;
        if (pUVar9 == (UnityEngine_Keyframe_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar3 = (__this_09->fields)._size;
        if (uVar3 < (uint)pUVar9->max_length) {
          (__this_09->fields)._size = uVar3 + 1;
          pUVar6 = &pUVar9->m_Items[(int)uVar3].fields;
          pUVar6->m_OutTangent = (float)uStack_4c;
          pUVar6->m_WeightedMode = uStack_48;
          pUVar6->m_InWeight = (float)(undefined4)uStack_44;
          pUVar6->m_OutWeight = (float)uStack_44._4_4_;
          _Var5._4_2_ = (uint16_t)uStack_4c;
          _Var5._6_2_ = uStack_4c._2_2_;
          _Var5._0_4_ = uStack_50;
          ((_union_247328 *)(pUVar9->m_Items + (int)uVar3))->genericMethod = (void *)_Stack_58;
          ((_union_247328 *)(pUVar9->m_Items + (int)uVar3))[1] = _Var5;
          _uStack_6c = uVar4;
        }
        else {
          item.fields.m_InTangent = (float)uStack_50;
          item.fields._0_8_ = _Stack_58.genericMethod;
          item.fields.m_OutTangent = (float)uStack_4c;
          item.fields.m_WeightedMode._0_2_ = (uint16_t)uStack_48;
          item.fields.m_WeightedMode._2_1_ = uStack_48._2_1_;
          item.fields.m_WeightedMode._3_1_ = uStack_48._3_1_;
          item.fields.m_InWeight = (float)uStack_64;
          item.fields.m_OutWeight = fStack_60;
          in_stack_ffffffffffffff38 = _Stack_58;
          in_stack_ffffffffffffff40 = uStack_50;
          in_stack_ffffffffffffff44 = uStack_4c;
          in_stack_ffffffffffffff48 = uStack_48;
          in_stack_ffffffffffffff4c = uStack_64;
          in_stack_ffffffffffffff50 = fStack_60;
          System_Collections_Generic_List<Keyframe>__AddWithResize
                    (__this_09,item,
                     *(MethodInfo_3588A30 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_05.fields._index = in_stack_ffffffffffffff40;
    __this_05.fields._list = in_stack_ffffffffffffff38.genericMethod;
    __this_05.fields._version._0_2_ = (uint16_t)in_stack_ffffffffffffff44;
    __this_05.fields._version._2_2_ = SUB42(in_stack_ffffffffffffff44,2);
    __this_05.fields._current._0_2_ = (uint16_t)in_stack_ffffffffffffff48;
    __this_05.fields._current._2_1_ = SUB41(in_stack_ffffffffffffff48,2);
    __this_05.fields._current._3_1_ = SUB41(in_stack_ffffffffffffff48,3);
    __this_05.fields._current._4_4_ = in_stack_ffffffffffffff4c;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_05,(MethodInfo_3185E10 *)auStack_98);
    __this_01 = (pCStack_38->fields).Value;
    if (((__this_01 != (UnityEngine_LineRenderer_o *)0x0) &&
        (__this_10 = UnityEngine_LineRenderer__get_widthCurve(__this_01,(MethodInfo *)0x0),
        __this_09 != (System_Collections_Generic_List_Keyframe__o *)0x0)) &&
       (pUVar9 = System_Collections_Generic_List<Keyframe>__ToArray(__this_09,MethodInfo_Keyframe___ToArray),
       __this_10 != (UnityEngine_AnimationCurve_o *)0x0)) {
      UnityEngine_AnimationCurve__set_keys(__this_10,pUVar9,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_WidthMultiplier
// il2cpp: float CustomLogic_CustomLogicLineRendererBuiltin__get_WidthMultiplier (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de9510

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_WidthMultiplier
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_WidthMultiplier (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3de9530

void CustomLogic_CustomLogicLineRendererBuiltin__set_WidthMultiplier
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_widthMultiplier(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_ColorGradientMode
// il2cpp: int32_t CustomLogic_CustomLogicLineRendererBuiltin__get_ColorGradientMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de9550

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$set_ColorGradientMode
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__set_ColorGradientMode (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3de9580

void CustomLogic_CustomLogicLineRendererBuiltin__set_ColorGradientMode
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t value,
               MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  UnityEngine_Gradient_o *__this_00;
  System_String_o *pSVar4;
  undefined8 uVar5;
  System_ArgumentException_o *__this_01;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (DAT_05702a46 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_GradientMode);
    DAT_05702a46 = '\x01';
  }
  handle.fields.value = TypeRef_GradientMode.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_2c);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
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
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iStack_30 = value;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_30);
  pSVar4 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown gradient mode value: {0}");
  pSVar4 = System_String__Format(pSVar4,pIVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar5);
  System_ArgumentException___ctor(__this_01,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_init_method_metadata(&MethodInfo_Void_set_ColorGradientMode);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_01,uVar5);
}


// CustomLogic.CustomLogicLineRendererBuiltin$$CreateLineRenderer
// il2cpp: CustomLogic_CustomLogicLineRendererBuiltin_o* CustomLogic_CustomLogicLineRendererBuiltin__CreateLineRenderer (const MethodInfo* method);
// 0x3de96e0

CustomLogic_CustomLogicLineRendererBuiltin_o *
CustomLogic_CustomLogicLineRendererBuiltin__CreateLineRenderer(MethodInfo *method)

{
  CustomLogic_CustomLogicLineRendererBuiltin_o *__this;
  MethodInfo *in_RSI;
  
  if (DAT_05702a47 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLineRendererBuiltin);
    DAT_05702a47 = '\x01';
  }
  __this = (CustomLogic_CustomLogicLineRendererBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLineRendererBuiltin);
  CustomLogic_CustomLogicLineRendererBuiltin___ctor
            (__this,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,in_RSI);
  return __this;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$GetPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicLineRendererBuiltin__GetPosition (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x3de9730

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicLineRendererBuiltin__GetPosition
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702a48 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702a48 = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    value = UnityEngine_LineRenderer__GetPosition(__this_00,index,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$SetPosition
// il2cpp: void CustomLogic_CustomLogicLineRendererBuiltin__SetPosition (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, int32_t index, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x3de97b0

void CustomLogic_CustomLogicLineRendererBuiltin__SetPosition
               (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,int32_t index,
               CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__SetPosition
              (__this_00,index,(UnityEngine_Vector3_o)(position->fields).Value.fields,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLineRendererBuiltin__get_ClassName (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de97e0

System_String_o *
CustomLogic_CustomLogicLineRendererBuiltin__get_ClassName
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702a49 == '\0') {
    il2cpp_init_method_metadata(&"LineRenderer");
    DAT_05702a49 = '\x01';
  }
  return "LineRenderer";
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_IsAbstract (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de9810

bool_conflict
CustomLogic_CustomLogicLineRendererBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_IsStatic (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de9820

bool_conflict
CustomLogic_CustomLogicLineRendererBuiltin__get_IsStatic
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLineRendererBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLineRendererBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLineRendererBuiltin_o* __this, const MethodInfo* method);
// 0x3de9830

bool_conflict
CustomLogic_CustomLogicLineRendererBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicLineRendererBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


