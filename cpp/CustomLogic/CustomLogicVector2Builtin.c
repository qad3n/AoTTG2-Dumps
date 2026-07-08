// Type: CustomLogic.CustomLogicVector2Builtin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicVector2Builtin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicVector2Builtin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3dc8b80

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int iVar2;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  System_String_o *pSVar3;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar4;
  System_ArgumentException_o *__this_00;
  float fVar5;
  int local_20;
  float local_1c;
  
  if (DAT_057028d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d7 = '\x01';
  }
  local_20 = 0;
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (args->max_length == 0) {
    __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
    if (DAT_057028cb == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_057028cb = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  }
  else {
    iVar2 = (int)args->max_length;
    if (iVar2 == 2) {
      pIVar1 = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
      if ((uint)args->max_length < 2) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      local_1c = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(args->m_Items[1],MethodInfo_Single_ConvertTo_Single);
      __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
      if (DAT_057028cd == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057028cd = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._value.fields.x = fVar5;
    }
    else {
      if (iVar2 != 1) {
        local_20 = iVar2;
        pSVar3 = System_Int32__ToString((int32_t)&local_20,(MethodInfo *)0x0);
        str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicVector2Builtin constructor found that takes ");
        str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
        pSVar3 = System_String__Concat(str0,pSVar3,str2,(MethodInfo *)0x0);
        uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
        __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
        System_ArgumentException___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
        uVar4 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector2Builtin_CreateInstance);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this_00,uVar4);
      }
      pIVar1 = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
      __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
      if (DAT_057028cc == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057028cc = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._value.fields.x = fVar5;
      local_1c = fVar5;
    }
    (__this->fields)._value.fields.y = local_1c;
  }
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin_Bindings___c___cctor (const MethodInfo* method);
// 0x3dcc720

void CustomLogic_CustomLogicVector2Builtin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057028fe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028fe = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin_Bindings___c___ctor (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3dcc790

void CustomLogic_CustomLogicVector2Builtin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Angle>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Angle_b__15_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcc7a0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding__Angle>b__15_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *from;
  CustomLogic_CustomLogicVector2Builtin_o *to;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  float local_1c;
  
  if (DAT_057028ff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057028ff = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    from = (CustomLogic_CustomLogicVector2Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      to = (CustomLogic_CustomLogicVector2Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
      local_1c = CustomLogic_CustomLogicVector2Builtin__Angle(from,to,method_00);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_1c);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__ClampMagnitude>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__ClampMagnitude_b__16_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcc860

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding__ClampMagnitude>b__16_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  MethodInfo *method_00;
  float maxLength;
  
  if (DAT_05702900 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702900 = '\x01';
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
    pCVar1 = (CustomLogic_CustomLogicVector2Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      method_00 = MethodInfo_Single_ConvertTo_Single;
      maxLength = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                            (__a->m_Items[1],(MethodInfo_24AB990 *)MethodInfo_Single_ConvertTo_Single);
      pCVar1 = CustomLogic_CustomLogicVector2Builtin__ClampMagnitude(pCVar1,maxLength,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Distance>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Distance_b__17_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcc910

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding__Distance>b__17_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (DAT_05702901 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702901 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dcca6e:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar3,MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
      if ((pIVar3 != (Il2CppObject *)0x0) && (pIVar4 != (Il2CppObject *)0x0)) {
        pIVar1 = pIVar3[3].klass;
        pIVar2 = pIVar4[3].klass;
        fVar5 = SUB84(pIVar1,0);
        fVar7 = (float)((ulong)pIVar1 >> 0x20);
        uVar8 = 0;
        uVar9 = 0;
        fVar11 = SUB84(pIVar2,0);
        fVar12 = (float)((ulong)pIVar2 >> 0x20);
        if (DAT_056fde22 == '\0') {
          uStack_20 = 0;
          uStack_30 = 0;
          local_38 = pIVar2;
          local_28 = pIVar1;
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde22 = '\x01';
          fVar5 = (float)local_28;
          fVar7 = local_28._4_4_;
          uVar8 = (undefined4)uStack_20;
          uVar9 = uStack_20._4_4_;
          fVar11 = (float)local_38;
          fVar12 = local_38._4_4_;
        }
        fVar6 = fVar7 - fVar12;
        fVar10 = fVar5 - fVar11;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          local_28 = (Il2CppClass *)CONCAT44(fVar7,fVar7 - fVar12);
          uStack_20 = CONCAT44(uVar9,uVar8);
          local_38 = (Il2CppClass *)CONCAT44(fVar7,fVar5 - fVar11);
          uStack_30 = CONCAT44(uVar9,uVar8);
          il2cpp_init_class();
          fVar6 = (float)local_28;
          fVar10 = (float)local_38;
        }
        local_3c = fVar6 * fVar6 + fVar10 * fVar10;
        if (local_3c < 0.0) {
          local_3c = sqrtf(local_3c);
        }
        else {
          local_3c = SQRT(local_3c);
        }
        pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_3c);
        return pIVar3;
      }
      goto LAB_03dcca6e;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Dot>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Dot_b__18_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcca80

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding__Dot>b__18_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  float local_1c;
  
  if (DAT_05702902 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702902 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dccb5b:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
      if ((pIVar1 != (Il2CppObject *)0x0) && (pIVar2 != (Il2CppObject *)0x0)) {
        local_1c = (float)((ulong)pIVar2[3].klass >> 0x20) * (float)((ulong)pIVar1[3].klass >> 0x20)
                   + SUB84(pIVar1[3].klass,0) * SUB84(pIVar2[3].klass,0);
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_1c);
        return pIVar1;
      }
      goto LAB_03dccb5b;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Lerp_b__19_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dccb70

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding__Lerp>b__19_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_38;
  
  if (DAT_05702903 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702903 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar3 != (Il2CppObject *)0x0)) {
            fVar6 = SUB84(pIVar2[3].klass,0);
            fVar7 = (float)((ulong)pIVar2[3].klass >> 0x20);
            pIVar1 = pIVar3[3].klass;
            fVar5 = 1.0;
            if (fVar4 <= 1.0) {
              fVar5 = fVar4;
            }
            fVar5 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
            if (DAT_057028d5 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
              DAT_057028d5 = '\x01';
            }
            __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
            if (DAT_057028ce == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
              DAT_057028ce = '\x01';
            }
            local_38 = (CustomLogic_BuiltinClassInstance_c *)
                       CONCAT44(fVar7 + fVar5 * ((float)((ulong)pIVar1 >> 0x20) - fVar7),
                                fVar6 + fVar5 * (SUB84(pIVar1,0) - fVar6));
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              il2cpp_init_class();
            }
            CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
            __this_00[1].klass = local_38;
            return (Il2CppObject *)__this_00;
          }
          goto LAB_03dccd19;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03dccd19:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__LerpUnclamped>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__20_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dccd20

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding__LerpUnclamped>b__20_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_38;
  
  if (DAT_05702904 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702904 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar3 != (Il2CppObject *)0x0)) {
            fVar5 = SUB84(pIVar2[3].klass,0);
            fVar6 = (float)((ulong)pIVar2[3].klass >> 0x20);
            pIVar1 = pIVar3[3].klass;
            if (DAT_057028d5 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
              DAT_057028d5 = '\x01';
            }
            __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
            if (DAT_057028ce == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
              DAT_057028ce = '\x01';
            }
            local_38 = (CustomLogic_BuiltinClassInstance_c *)
                       CONCAT44(fVar6 + fVar4 * ((float)((ulong)pIVar1 >> 0x20) - fVar6),
                                fVar5 + fVar4 * (SUB84(pIVar1,0) - fVar5));
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              il2cpp_init_class();
            }
            CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
            __this_00[1].klass = local_38;
            return (Il2CppObject *)__this_00;
          }
          goto LAB_03dcceb2;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03dcceb2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Max>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Max_b__21_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dccec0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding__Max>b__21_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  undefined1 auVar4 [16];
  undefined1 local_38 [16];
  
  if (DAT_05702905 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702905 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dcd002:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
      if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar3 != (Il2CppObject *)0x0)) {
        local_38._8_8_ = 0;
        local_38._0_8_ = pIVar2[3].klass;
        pIVar1 = pIVar3[3].klass;
        if (DAT_057028d5 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
          DAT_057028d5 = '\x01';
        }
        __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
        if (DAT_057028ce == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
          DAT_057028ce = '\x01';
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = pIVar1;
        auVar4 = maxps(local_38,auVar4);
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_init_class();
        }
        CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
        local_38._0_8_ = auVar4._0_8_;
        __this_00[1].klass = (CustomLogic_BuiltinClassInstance_c *)local_38._0_8_;
        return (Il2CppObject *)__this_00;
      }
      goto LAB_03dcd002;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Min>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Min_b__22_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcd010

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding__Min>b__22_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  undefined1 auVar4 [16];
  undefined1 local_38 [16];
  
  if (DAT_05702906 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702906 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dcd152:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
      if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar3 != (Il2CppObject *)0x0)) {
        local_38._8_8_ = 0;
        local_38._0_8_ = pIVar2[3].klass;
        pIVar1 = pIVar3[3].klass;
        if (DAT_057028d5 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
          DAT_057028d5 = '\x01';
        }
        __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
        if (DAT_057028ce == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
          DAT_057028ce = '\x01';
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = pIVar1;
        auVar4 = minps(local_38,auVar4);
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_init_class();
        }
        CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
        local_38._0_8_ = auVar4._0_8_;
        __this_00[1].klass = (CustomLogic_BuiltinClassInstance_c *)local_38._0_8_;
        return (Il2CppObject *)__this_00;
      }
      goto LAB_03dcd152;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__MoveTowards>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__MoveTowards_b__23_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcd160

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding__MoveTowards>b__23_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector2Builtin_o *target;
  MethodInfo *method_00;
  float maxDistanceDelta;
  
  if (DAT_05702907 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702907 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar1 = (CustomLogic_CustomLogicVector2Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        target = (CustomLogic_CustomLogicVector2Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          maxDistanceDelta =
               CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          pCVar1 = CustomLogic_CustomLogicVector2Builtin__MoveTowards
                             (pCVar1,target,maxDistanceDelta,method_00);
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


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Reflect>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Reflect_b__24_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcd220

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding__Reflect>b__24_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_38;
  
  if (DAT_05702908 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702908 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dcd39f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
      if ((pIVar1 != (Il2CppObject *)0x0) && (pIVar2 != (Il2CppObject *)0x0)) {
        fVar3 = SUB84(pIVar1[3].klass,0);
        fVar4 = (float)((ulong)pIVar1[3].klass >> 0x20);
        fVar5 = SUB84(pIVar2[3].klass,0);
        fVar6 = (float)((ulong)pIVar2[3].klass >> 0x20);
        fVar7 = (fVar6 * fVar4 + fVar3 * fVar5) * -2.0;
        if (DAT_057028d5 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
          DAT_057028d5 = '\x01';
        }
        __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
        if (DAT_057028ce == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
          DAT_057028ce = '\x01';
        }
        local_38 = (CustomLogic_BuiltinClassInstance_c *)
                   CONCAT44(fVar4 + fVar6 * fVar7,fVar3 + fVar5 * fVar7);
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_init_class();
        }
        CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
        __this_00[1].klass = local_38;
        return (Il2CppObject *)__this_00;
      }
      goto LAB_03dcd39f;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__SignedAngle>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__SignedAngle_b__25_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcd3b0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding__SignedAngle>b__25_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *from;
  CustomLogic_CustomLogicVector2Builtin_o *to;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  float local_1c;
  
  if (DAT_05702909 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702909 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    from = (CustomLogic_CustomLogicVector2Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      to = (CustomLogic_CustomLogicVector2Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
      local_1c = CustomLogic_CustomLogicVector2Builtin__SignedAngle(from,to,method_00);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_1c);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__SmoothDamp>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__SmoothDamp_b__26_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcd470

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding__SmoothDamp>b__26_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector2Builtin_o *target;
  CustomLogic_CustomLogicVector2Builtin_o *currentVelocity;
  float smoothTime;
  float maxSpeed;
  
  if (DAT_0570290a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570290a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar1 = (CustomLogic_CustomLogicVector2Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        target = (CustomLogic_CustomLogicVector2Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          currentVelocity =
               (CustomLogic_CustomLogicVector2Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[2],MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicV);
          if (3 < (uint)__a->max_length) {
            smoothTime = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                                   (__a->m_Items[3],MethodInfo_Single_ConvertTo_Single);
            if (4 < (uint)__a->max_length) {
              maxSpeed = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                                   (__a->m_Items[4],MethodInfo_Single_ConvertTo_Single);
              pCVar1 = CustomLogic_CustomLogicVector2Builtin__SmoothDamp
                                 (pCVar1,target,currentVelocity,smoothTime,maxSpeed,method);
              return (Il2CppObject *)pCVar1;
            }
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


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Set>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Set_b__27_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcd590

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding__Set>b__27_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  float fVar1;
  float fVar2;
  
  if (DAT_0570290b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570290b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dcd643:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (1 < (uint)__a->max_length) {
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
      if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
        (__c->fields)._value.fields.x = fVar1;
        (__c->fields)._value.fields.y = fVar2;
        return (Il2CppObject *)0x0;
      }
      goto LAB_03dcd643;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Normalize>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Normalize_b__28_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcd650

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding__Normalize>b__28_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  float fVar2;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (__c == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_056fdea4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fdea4 = '\x01';
  }
  UVar1 = (__c->fields)._value.fields;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar2 = UVar1.x;
  fVar5 = UVar1.y;
  uVar6 = 0;
  uVar7 = 0;
  fVar2 = fVar5 * fVar5 + fVar2 * fVar2;
  if (fVar2 < 0.0) {
    fVar2 = sqrtf(fVar2);
    uVar6 = extraout_XMM0_Dc;
    uVar7 = extraout_XMM0_Dd;
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  if (fVar2 <= 1e-05) {
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    (__c->fields)._value.fields = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
    return (Il2CppObject *)0x0;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (__c->fields)._value.fields;
  auVar4._4_4_ = fVar2;
  auVar4._0_4_ = fVar2;
  auVar4._8_4_ = uVar6;
  auVar4._12_4_ = uVar7;
  auVar4 = divps(auVar3,auVar4);
  (__c->fields)._value.fields = auVar4._0_8_;
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Copy___b__29_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcd730

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding____Copy__>b__29_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar1;
  
  if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    vtable_dispatch = (__c->klass->vtable)._17___Copy__.methodPtr;
    pIVar1 = (Il2CppObject *)
             (*vtable_dispatch)
                       (__c,(__c->klass->vtable)._17___Copy__.method,__a,vtable_dispatch);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Add__>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Add___b__30_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcd760

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding____Add__>b__30_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppClass *pIVar2;
  byte bVar3;
  int iVar4;
  Il2CppObject *lhs;
  Il2CppObject *rhs;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar5;
  undefined8 uVar6;
  undefined8 uStack_38;
  float fStack_28;
  float fStack_24;
  
  if (__a != (System_Object_array *)0x0) {
    iVar4 = (int)__a->max_length;
    if ((iVar4 == 0) || (iVar4 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
      lhs = __a->m_Items[0];
      rhs = __a->m_Items[1];
      if (DAT_057028d0 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
        DAT_057028d0 = '\x01';
      }
      if (lhs != (Il2CppObject *)0x0) {
        bVar3 = (TypeInfo_CustomLogicVector2Builtin->_2).naturalAligment;
        if ((((bVar3 <= (lhs->klass->_2).naturalAligment) && (rhs != (Il2CppObject *)0x0)) &&
            ((lhs->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicVector2Builtin)) &&
           ((bVar3 <= (rhs->klass->_2).naturalAligment &&
            ((rhs->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicVector2Builtin)))) {
          pIVar1 = lhs[3].klass;
          pIVar2 = rhs[3].klass;
          __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue();
          if (DAT_057028ce == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
            DAT_057028ce = '\x01';
          }
          uStack_38._0_4_ = SUB84(pIVar1,0);
          uStack_38._4_4_ = (float)((ulong)pIVar1 >> 0x20);
          fStack_28 = SUB84(pIVar2,0);
          fStack_24 = (float)((ulong)pIVar2 >> 0x20);
          uStack_38 = (CustomLogic_BuiltinClassInstance_c *)
                      CONCAT44(uStack_38._4_4_ + fStack_24,(float)uStack_38 + fStack_28);
          if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
            il2cpp_init_class();
          }
          CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
          __this_00[1].klass = uStack_38;
          return (Il2CppObject *)__this_00;
        }
      }
      operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Add__");
      pSVar5 = CustomLogic_CustomLogicUtils__OperatorException
                         (operatorName,lhs,rhs,(MethodInfo *)0x0);
      uVar6 = il2cpp_init_method_metadata(&MethodInfo_Object___Add);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(pSVar5,uVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Sub__>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Sub___b__31_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcd790

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding____Sub__>b__31_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppClass *pIVar2;
  byte bVar3;
  int iVar4;
  Il2CppObject *lhs;
  Il2CppObject *rhs;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar5;
  undefined8 uVar6;
  undefined8 uStack_38;
  float fStack_28;
  float fStack_24;
  
  if (__a != (System_Object_array *)0x0) {
    iVar4 = (int)__a->max_length;
    if ((iVar4 == 0) || (iVar4 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
      lhs = __a->m_Items[0];
      rhs = __a->m_Items[1];
      if (DAT_057028d1 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
        DAT_057028d1 = '\x01';
      }
      if (lhs != (Il2CppObject *)0x0) {
        bVar3 = (TypeInfo_CustomLogicVector2Builtin->_2).naturalAligment;
        if ((((bVar3 <= (lhs->klass->_2).naturalAligment) && (rhs != (Il2CppObject *)0x0)) &&
            ((lhs->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicVector2Builtin)) &&
           ((bVar3 <= (rhs->klass->_2).naturalAligment &&
            ((rhs->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicVector2Builtin)))) {
          pIVar1 = lhs[3].klass;
          pIVar2 = rhs[3].klass;
          __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue();
          if (DAT_057028ce == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
            DAT_057028ce = '\x01';
          }
          uStack_38._0_4_ = SUB84(pIVar1,0);
          uStack_38._4_4_ = (float)((ulong)pIVar1 >> 0x20);
          fStack_28 = SUB84(pIVar2,0);
          fStack_24 = (float)((ulong)pIVar2 >> 0x20);
          uStack_38 = (CustomLogic_BuiltinClassInstance_c *)
                      CONCAT44(uStack_38._4_4_ - fStack_24,(float)uStack_38 - fStack_28);
          if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
            il2cpp_init_class();
          }
          CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
          __this_00[1].klass = uStack_38;
          return (Il2CppObject *)__this_00;
        }
      }
      operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Sub__");
      pSVar5 = CustomLogic_CustomLogicUtils__OperatorException
                         (operatorName,lhs,rhs,(MethodInfo *)0x0);
      uVar6 = il2cpp_init_method_metadata(&MethodInfo_Object___Sub);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(pSVar5,uVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Mul___b__32_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcd7c0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding____Mul__>b__32_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  byte bVar2;
  int iVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *lhs;
  Il2CppObject *rhs;
  undefined4 *puVar5;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar6;
  undefined8 uVar7;
  undefined8 uStack_38;
  float fStack_28;
  float fStack_24;
  
  if (__a != (System_Object_array *)0x0) {
    iVar3 = (int)__a->max_length;
    if ((iVar3 == 0) || (iVar3 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
      lhs = __a->m_Items[0];
      rhs = __a->m_Items[1];
      if (DAT_057028d2 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
        DAT_057028d2 = '\x01';
      }
      if (lhs != (Il2CppObject *)0x0) {
        pIVar4 = lhs->klass;
        bVar2 = (TypeInfo_CustomLogicVector2Builtin->_2).naturalAligment;
        if (((pIVar4->_2).naturalAligment < bVar2) ||
           ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicVector2Builtin)) {
          if ((pIVar4 == DAT_05711098) &&
             (puVar5 = (undefined4 *)il2cpp_glue_022c7330(lhs), rhs != (Il2CppObject *)0x0)) {
            bVar2 = (TypeInfo_CustomLogicVector2Builtin->_2).naturalAligment;
            if ((bVar2 <= (rhs->klass->_2).naturalAligment) &&
               ((rhs->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicVector2Builtin)) {
              pIVar1 = rhs[3].klass;
              pIVar4 = (Il2CppClass *)CONCAT44(*puVar5,*puVar5);
              __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue();
              goto joined_r0x03dc8715;
            }
          }
        }
        else if (rhs != (Il2CppObject *)0x0) {
          pIVar4 = rhs->klass;
          if (((pIVar4->_2).naturalAligment < bVar2) ||
             ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicVector2Builtin)) {
            if (pIVar4 != DAT_05711098) goto LAB_03dc8806;
            puVar5 = (undefined4 *)il2cpp_glue_022c7330(rhs);
            pIVar1 = lhs[3].klass;
            pIVar4 = (Il2CppClass *)CONCAT44(*puVar5,*puVar5);
            __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
          }
          else {
            pIVar4 = lhs[3].klass;
            pIVar1 = rhs[3].klass;
            __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue();
          }
joined_r0x03dc8715:
          if (DAT_057028ce == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
            DAT_057028ce = '\x01';
          }
          uStack_38._0_4_ = SUB84(pIVar4,0);
          uStack_38._4_4_ = (float)((ulong)pIVar4 >> 0x20);
          fStack_28 = SUB84(pIVar1,0);
          fStack_24 = (float)((ulong)pIVar1 >> 0x20);
          uStack_38 = (CustomLogic_BuiltinClassInstance_c *)
                      CONCAT44(uStack_38._4_4_ * fStack_24,(float)uStack_38 * fStack_28);
          if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
            il2cpp_init_class();
          }
          CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
          __this_00[1].klass = uStack_38;
          return (Il2CppObject *)__this_00;
        }
      }
LAB_03dc8806:
      operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Mul__");
      pSVar6 = CustomLogic_CustomLogicUtils__OperatorException
                         (operatorName,lhs,rhs,(MethodInfo *)0x0);
      uVar7 = il2cpp_init_method_metadata(&MethodInfo_Object___Mul);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(pSVar6,uVar7);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Div__>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Div___b__33_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcd7f0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding____Div__>b__33_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *lhs;
  Il2CppObject *rhs;
  undefined1 auVar4 [16];
  undefined4 *puVar5;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar6;
  undefined8 uVar7;
  Il2CppClass *pIVar8;
  undefined1 auVar9 [16];
  CustomLogic_BuiltinClassInstance_c *pCStack_38;
  
  if (__a != (System_Object_array *)0x0) {
    iVar2 = (int)__a->max_length;
    if ((iVar2 == 0) || (iVar2 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
      lhs = __a->m_Items[0];
      rhs = __a->m_Items[1];
      if (DAT_057028d3 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
        DAT_057028d3 = '\x01';
      }
      if (lhs != (Il2CppObject *)0x0) {
        bVar1 = (TypeInfo_CustomLogicVector2Builtin->_2).naturalAligment;
        if (((bVar1 <= (lhs->klass->_2).naturalAligment) && (rhs != (Il2CppObject *)0x0)) &&
           ((lhs->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicVector2Builtin)) {
          pIVar3 = rhs->klass;
          if (((pIVar3->_2).naturalAligment < bVar1) ||
             ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector2Builtin)) {
            if (pIVar3 != DAT_05711098) goto LAB_03dc898e;
            puVar5 = (undefined4 *)il2cpp_glue_022c7330(rhs);
            pIVar3 = lhs[3].klass;
            pIVar8 = (Il2CppClass *)CONCAT44(*puVar5,*puVar5);
            __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
          }
          else {
            pIVar3 = lhs[3].klass;
            pIVar8 = rhs[3].klass;
            __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue();
          }
          auVar9._8_8_ = 0;
          auVar9._0_8_ = pIVar3;
          if (DAT_057028ce == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
            DAT_057028ce = '\x01';
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = pIVar8;
          auVar9 = divps(auVar9,auVar4);
          if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
            il2cpp_init_class();
          }
          CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
          pCStack_38 = auVar9._0_8_;
          __this_00[1].klass = pCStack_38;
          return (Il2CppObject *)__this_00;
        }
      }
LAB_03dc898e:
      operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Div__");
      pSVar6 = CustomLogic_CustomLogicUtils__OperatorException
                         (operatorName,lhs,rhs,(MethodInfo *)0x0);
      uVar7 = il2cpp_init_method_metadata(&MethodInfo_Object___Div);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(pSVar6,uVar7);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Eq___b__34_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcd820

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding____Eq__>b__34_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  undefined8 in_RAX;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_18;
  
  if (__a == (System_Object_array *)0x0) {
LAB_03dcd91b:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar2 = (int)__a->max_length;
  if ((iVar2 == 0) || (iVar2 == 1)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (__c == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) goto LAB_03dcd91b;
  pIVar4 = __a->m_Items[0];
  pIVar3 = __a->m_Items[1];
  uStack_18 = in_RAX;
  if (DAT_057028d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d4 = '\x01';
  }
  if (pIVar4 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicVector2Builtin->_2).naturalAligment;
    if (bVar1 <= (pIVar4->klass->_2).naturalAligment) {
      pIVar5 = (Il2CppObject *)0x0;
      if ((pIVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector2Builtin) {
        pIVar4 = pIVar5;
      }
      if ((pIVar3 == (Il2CppObject *)0x0) || (pIVar4 == (Il2CppObject *)0x0)) goto LAB_03dcd891;
      if ((bVar1 <= (pIVar3->klass->_2).naturalAligment) &&
         ((pIVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicVector2Builtin)) {
        fVar6 = SUB84(pIVar4[3].klass,0) - SUB84(pIVar3[3].klass,0);
        fVar7 = (float)((ulong)pIVar4[3].klass >> 0x20) - (float)((ulong)pIVar3[3].klass >> 0x20);
        pIVar5 = (Il2CppObject *)(ulong)(fVar7 * fVar7 + fVar6 * fVar6 < 9.9999994e-11);
        goto LAB_03dcd891;
      }
    }
  }
  pIVar5 = (Il2CppObject *)0x0;
LAB_03dcd891:
  uStack_18 = CONCAT17((char)pIVar5,(undefined7)uStack_18);
  pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
  return pIVar4;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Hash___b__35_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dcd920

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_<>c__<__CreateMethodBinding____Hash__>b__35_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float in_XMM0_Da;
  float __this_00;
  undefined1 auStack_14 [4];
  
  if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    System_Single__GetHashCode(in_XMM0_Da,(MethodInfo *)&(__c->fields)._value);
    System_Single__GetHashCode(__this_00,(MethodInfo *)&(__c->fields)._value.fields.y);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_14);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicVector2Builtin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3dc8e30

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicVector2Builtin_Bindings__CreateMemberBinding
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
  System_Action_T__object__o *pSVar7;
  System_Func_T__object__o *pSVar8;
  CustomLogic_CLPropertyBinding_T__o *pCVar9;
  System_Func_T__object____object__o *pSVar10;
  CustomLogic_CLMethodBinding_T__o *pCVar11;
  
  if (DAT_057028d8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"__Sub__");
    il2cpp_init_method_metadata(&"__Copy__");
    il2cpp_init_method_metadata(&"Right");
    il2cpp_init_method_metadata(&"Normalize");
    il2cpp_init_method_metadata(&"Down");
    il2cpp_init_method_metadata(&"SignedAngle");
    il2cpp_init_method_metadata(&"__Eq__");
    il2cpp_init_method_metadata(&"__Hash__");
    il2cpp_init_method_metadata(&"Lerp");
    il2cpp_init_method_metadata(&"Reflect");
    il2cpp_init_method_metadata(&"Max");
    il2cpp_init_method_metadata(&"SmoothDamp");
    il2cpp_init_method_metadata(&"LerpUnclamped");
    il2cpp_init_method_metadata(&"MoveTowards");
    il2cpp_init_method_metadata(&"Set");
    il2cpp_init_method_metadata(&"Dot");
    il2cpp_init_method_metadata(&"Distance");
    il2cpp_init_method_metadata(&"__Div__");
    il2cpp_init_method_metadata(&"One");
    il2cpp_init_method_metadata(&"SqrMagnitude");
    il2cpp_init_method_metadata(&"ClampMagnitude");
    il2cpp_init_method_metadata(&"Up");
    il2cpp_init_method_metadata(&"PositiveInfinity");
    il2cpp_init_method_metadata(&"Left");
    il2cpp_init_method_metadata(&"Min");
    il2cpp_init_method_metadata(&"Magnitude");
    il2cpp_init_method_metadata(&"Y");
    il2cpp_init_method_metadata(&"__Mul__");
    il2cpp_init_method_metadata(&"NegativeInfinity");
    il2cpp_init_method_metadata(&"X");
    il2cpp_init_method_metadata(&"__Add__");
    il2cpp_init_method_metadata(&"Zero");
    il2cpp_init_method_metadata(&"Normalized");
    il2cpp_init_method_metadata(&"Angle");
    DAT_057028d8 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x792a6492) {
    if (uVar3 < 0x2e9445f8) {
      if (uVar3 < 0x1cb1b190) {
        if (uVar3 < 0xdc1f3cd) {
          if (uVar3 == 0xb9c3383) {
            bVar4 = System_String__op_Equality(name,"Zero",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057028de == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Zero_g____gette);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
                DAT_057028de = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
              System_Func<object__object>___ctor();
              pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar9;
            }
          }
          else if ((uVar3 == 0xdc1f3cc) &&
                  (bVar4 = System_String__op_Equality(name,"__Add__",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057028f5 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Add___b__30_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057028f5 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x80);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x80);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x80,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 == 0x18c37b41) {
          bVar4 = System_String__op_Equality(name,"__Mul__",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057028f7 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Mul___b__32_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057028f7 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x90);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x90);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x90) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x90,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x1cb1b18f) &&
                (bVar4 = System_String__op_Equality(name,"One",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057028df == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__One_g____getter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
            DAT_057028df = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 < 0x21ed379b) {
        if (uVar3 == 0x1e9e9f85) {
          bVar4 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057028e3 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Right_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
              DAT_057028e3 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
            System_Func<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x21ed379a) &&
                (bVar4 = System_String__op_Equality(name,"ClampMagnitude",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057028e7 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClampMagnitude_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057028e7 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x28b19ea3) {
        bVar4 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057028f2 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Set_b__27_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057028f2 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x68);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x68);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x68,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x2e9445f7) &&
              (bVar4 = System_String__op_Equality(name,"Min",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057028ed == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Min_b__22_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057028ed = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x40,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x42f35941) {
      if (uVar3 < 0x39c493b9) {
        if (uVar3 == 0x386d9fc0) {
          bVar4 = System_String__op_Equality(name,"Dot",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057028e9 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Dot_b__18_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057028e9 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x20);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x20);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x39c493b8) &&
                (bVar4 = System_String__op_Equality(name,"Angle",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057028e6 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Angle_b__15_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057028e6 = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 8,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x3ca7e3b9) {
        bVar4 = System_String__op_Equality(name,"Max",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057028ec == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Max_b__21_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057028ec = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x38);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x38);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x38,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x42f35940) &&
              (bVar4 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057028e0 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Up_g____getter);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
          DAT_057028e0 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0x4adde30d) {
      if (uVar3 == 0x434cfcb8) {
        bVar4 = System_String__op_Equality(name,"Normalized",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057028db == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Normalized_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
            DAT_057028db = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x4adde30c) &&
              (bVar4 = System_String__op_Equality(name,"Normalize",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057028f3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Normalize_b__28_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057028f3 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x70,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x549f4d10) {
      bVar4 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057028f4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Copy___b__29_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057028f4 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x78,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x74ee9015) {
      bVar4 = System_String__op_Equality(name,"SmoothDamp",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057028f1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SmoothDamp_b__26);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057028f1 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x60,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0x792a6491) &&
            (bVar4 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057028fa == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Hash___b__35_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057028fa = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0xa8,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xc370544b) {
    if (uVar3 < 0x9e956089) {
      if (uVar3 < 0x91efe6d8) {
        if (uVar3 == 0x91efe6d7) {
          bVar4 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057028f9 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Eq___b__34_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057028f9 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xa0);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xa0);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0xa0,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x7bdb45c1) &&
                (bVar4 = System_String__op_Equality(name,"SqrMagnitude",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057028dd == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SqrMagnitude_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
            DAT_057028dd = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x92773890) {
        bVar4 = System_String__op_Equality(name,"Left",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057028e2 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Left_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
            DAT_057028e2 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x9e956088) &&
              (bVar4 = System_String__op_Equality(name,"Lerp",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057028ea == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Lerp_b__19_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057028ea = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0xacfe0069) {
      if (uVar3 == 0xa4995035) {
        bVar4 = System_String__op_Equality(name,"Down",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057028e1 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Down_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
            DAT_057028e1 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0xacfe0068) &&
              (bVar4 = System_String__op_Equality(name,"MoveTowards",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057028ee == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveTowards_b__23);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057028ee = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x48,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xb127a615) {
      bVar4 = System_String__op_Equality(name,"Magnitude",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057028dc == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Magnitude_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
          DAT_057028dc = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xc370544a) &&
            (bVar4 = System_String__op_Equality(name,"Reflect",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057028ef == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Reflect_b__24_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057028ef = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x50,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xdc0c1c95) {
    if (uVar3 < 0xd6c0fe1b) {
      if (uVar3 == 0xd3d96082) {
        bVar4 = System_String__op_Equality(name,"Distance",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057028e8 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Distance_b__17_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057028e8 = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0xd6c0fe1a) &&
              (bVar4 = System_String__op_Equality(name,"PositiveInfinity",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057028e5 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PositiveInfinit);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
          DAT_057028e5 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xd7cecb55) {
      bVar4 = System_String__op_Equality(name,"__Sub__",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057028f6 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Sub___b__31_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057028f6 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x88) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x88,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0xdc0c1c94) &&
            (bVar4 = System_String__op_Equality(name,"Y",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057028da == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVector2Builtin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Y_g____getter_3);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Y_g____setter_3_1);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
        DAT_057028da = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
      System_Func<object__object>___ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVector2Builtin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar8,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xdfeb0949) {
    if (uVar3 == 0xdd0c1e27) {
      bVar4 = System_String__op_Equality(name,"X",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057028d9 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVector2Builtin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__X_g____getter_2);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__X_g____setter_2_1);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
          DAT_057028d9 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
        System_Func<object__object>___ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVector2Builtin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar8,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xdfeb0948) &&
            (bVar4 = System_String__op_Equality(name,"SignedAngle",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057028f0 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SignedAngle_b__25);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057028f0 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x58,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 == 0xe0993ada) {
    bVar4 = System_String__op_Equality(name,"NegativeInfinity",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057028e4 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NegativeInfinit);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
        DAT_057028e4 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
      System_Func<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xf4248f7b) {
    bVar4 = System_String__op_Equality(name,"LerpUnclamped",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057028eb == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LerpUnclamped_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057028eb = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x30,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if ((uVar3 == 0xff76b6dc) &&
          (bVar4 = System_String__op_Equality(name,"__Div__",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057028f8 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Div___b__33_0);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_057028f8 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
    }
    else {
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
    }
    if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x98) = pSVar10;
      il2cpp_runtime_glue(lVar2 + 0x98,pSVar10);
    }
    pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicVector2Builtin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__X
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__X (const MethodInfo* method);
// 0x3dc9af0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__X(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028d9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVector2Builtin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__X_g____getter_2);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__X_g____setter_2_1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
    DAT_057028d9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVector2Builtin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Y
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Y (const MethodInfo* method);
// 0x3dc9bd0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Y(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVector2Builtin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Y_g____getter_3);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Y_g____setter_3_1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
    DAT_057028da = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVector2Builtin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Normalized
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Normalized (const MethodInfo* method);
// 0x3dc9cb0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Normalized
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028db == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Normalized_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
    DAT_057028db = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Magnitude
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Magnitude (const MethodInfo* method);
// 0x3dc9d50

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Magnitude
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028dc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Magnitude_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
    DAT_057028dc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__SqrMagnitude
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__SqrMagnitude (const MethodInfo* method);
// 0x3dc9df0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__SqrMagnitude
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028dd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SqrMagnitude_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
    DAT_057028dd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Zero
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Zero (const MethodInfo* method);
// 0x3dc9e90

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Zero(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028de == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Zero_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
    DAT_057028de = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__One
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__One (const MethodInfo* method);
// 0x3dc9f30

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__One(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028df == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__One_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
    DAT_057028df = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x3dc9fd0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028e0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Up_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
    DAT_057028e0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Down
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Down (const MethodInfo* method);
// 0x3dca070

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Down(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028e1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Down_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
    DAT_057028e1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Left
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Left (const MethodInfo* method);
// 0x3dca110

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Left(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028e2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Left_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
    DAT_057028e2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x3dca1b0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028e3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Right_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
    DAT_057028e3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__NegativeInfinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__NegativeInfinity (const MethodInfo* method);
// 0x3dca250

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__NegativeInfinity
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028e4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NegativeInfinit);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
    DAT_057028e4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__PositiveInfinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__PositiveInfinity (const MethodInfo* method);
// 0x3dca2f0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__PositiveInfinity
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028e5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PositiveInfinit);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object);
    DAT_057028e5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Angle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Angle (const MethodInfo* method);
// 0x3dca390

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Angle(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Angle_b__15_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028e6 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__ClampMagnitude
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__ClampMagnitude (const MethodInfo* method);
// 0x3dca4e0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__ClampMagnitude
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028e7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClampMagnitude_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028e7 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Distance
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Distance (const MethodInfo* method);
// 0x3dca630

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Distance(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Distance_b__17_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028e8 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Dot
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Dot (const MethodInfo* method);
// 0x3dca780

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Dot(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028e9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Dot_b__18_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028e9 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Lerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Lerp (const MethodInfo* method);
// 0x3dca8d0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Lerp(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Lerp_b__19_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028ea = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__LerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__LerpUnclamped (const MethodInfo* method);
// 0x3dcaa20

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__LerpUnclamped
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028eb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LerpUnclamped_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028eb = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Max
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Max (const MethodInfo* method);
// 0x3dcab70

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Max(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028ec == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Max_b__21_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028ec = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Min
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Min (const MethodInfo* method);
// 0x3dcacc0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Min(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028ed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Min_b__22_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028ed = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__MoveTowards
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__MoveTowards (const MethodInfo* method);
// 0x3dcae10

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__MoveTowards
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveTowards_b__23);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028ee = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Reflect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Reflect (const MethodInfo* method);
// 0x3dcaf60

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Reflect(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028ef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Reflect_b__24_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028ef = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__SignedAngle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__SignedAngle (const MethodInfo* method);
// 0x3dcb0b0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__SignedAngle
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028f0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SignedAngle_b__25);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028f0 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__SmoothDamp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__SmoothDamp (const MethodInfo* method);
// 0x3dcb200

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__SmoothDamp
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028f1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SmoothDamp_b__26);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028f1 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x3dcb350

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028f2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Set_b__27_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028f2 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Normalize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Normalize (const MethodInfo* method);
// 0x3dcb4a0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Normalize(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028f3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Normalize_b__28_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028f3 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x3dcb5f0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028f4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Copy___b__29_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028f4 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_glue(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Add__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Add__ (const MethodInfo* method);
// 0x3dcb740

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Add__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028f5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Add___b__30_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028f5 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_glue(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Sub__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Sub__ (const MethodInfo* method);
// 0x3dcb890

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Sub__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Sub___b__31_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028f6 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x88) = function;
    il2cpp_runtime_glue(lVar2 + 0x88,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Mul__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Mul__ (const MethodInfo* method);
// 0x3dcb9e0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Mul__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028f7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Mul___b__32_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028f7 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x90) = function;
    il2cpp_runtime_glue(lVar2 + 0x90,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Div__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Div__ (const MethodInfo* method);
// 0x3dcbb30

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Div__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Div___b__33_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028f8 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x98) = function;
    il2cpp_runtime_glue(lVar2 + 0x98,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x3dcbc80

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028f9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Eq___b__34_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028f9 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = function;
    il2cpp_runtime_glue(lVar2 + 0xa0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x3dcbdd0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this;
  
  if (DAT_057028fa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Hash___b__35_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028fa = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector2Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = function;
    il2cpp_runtime_glue(lVar2 + 0xa8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector2Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin_Bindings___cctor (const MethodInfo* method);
// 0x3dcbf20

void CustomLogic_CustomLogicVector2Builtin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057028fb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"__Sub__");
    il2cpp_init_method_metadata(&"__Copy__");
    il2cpp_init_method_metadata(&"Right");
    il2cpp_init_method_metadata(&"Normalize");
    il2cpp_init_method_metadata(&"Down");
    il2cpp_init_method_metadata(&"SignedAngle");
    il2cpp_init_method_metadata(&"__Eq__");
    il2cpp_init_method_metadata(&"__Hash__");
    il2cpp_init_method_metadata(&"Lerp");
    il2cpp_init_method_metadata(&"Reflect");
    il2cpp_init_method_metadata(&"Max");
    il2cpp_init_method_metadata(&"SmoothDamp");
    il2cpp_init_method_metadata(&"LerpUnclamped");
    il2cpp_init_method_metadata(&"MoveTowards");
    il2cpp_init_method_metadata(&"Set");
    il2cpp_init_method_metadata(&"Dot");
    il2cpp_init_method_metadata(&"Distance");
    il2cpp_init_method_metadata(&"__Div__");
    il2cpp_init_method_metadata(&"One");
    il2cpp_init_method_metadata(&"SqrMagnitude");
    il2cpp_init_method_metadata(&"ClampMagnitude");
    il2cpp_init_method_metadata(&"Up");
    il2cpp_init_method_metadata(&"PositiveInfinity");
    il2cpp_init_method_metadata(&"Left");
    il2cpp_init_method_metadata(&"Min");
    il2cpp_init_method_metadata(&"Magnitude");
    il2cpp_init_method_metadata(&"Y");
    il2cpp_init_method_metadata(&"__Mul__");
    il2cpp_init_method_metadata(&"NegativeInfinity");
    il2cpp_init_method_metadata(&"X");
    il2cpp_init_method_metadata(&"__Add__");
    il2cpp_init_method_metadata(&"Zero");
    il2cpp_init_method_metadata(&"Normalized");
    il2cpp_init_method_metadata(&"Angle");
    DAT_057028fb = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"X",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Y",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Normalized",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Magnitude",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SqrMagnitude",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Zero",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"One",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Up",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Down",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Left",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Right",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"NegativeInfinity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PositiveInfinity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Angle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ClampMagnitude",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Distance",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Dot",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Lerp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LerpUnclamped",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Max",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Min",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MoveTowards",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Reflect",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SignedAngle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SmoothDamp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Set",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Normalize",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Copy__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Add__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Sub__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Mul__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Div__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Eq__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Hash__",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__X>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__X_g____getter_2_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x3dcc430

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings__<__CreatePropertyBinding__X>g____getter_2_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__X>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__X_g____setter_2_1 (CustomLogic_CustomLogicVector2Builtin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dcc460

void CustomLogic_CustomLogicVector2Builtin_Bindings__<__CreatePropertyBinding__X>g____setter_2_1
               (CustomLogic_CustomLogicVector2Builtin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (DAT_057028fc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057028fc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    (__i->fields)._value.fields.x = fVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Y>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Y_g____getter_3_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x3dcc4e0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings__<__CreatePropertyBinding__Y>g____getter_3_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Y>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Y_g____setter_3_1 (CustomLogic_CustomLogicVector2Builtin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dcc510

void CustomLogic_CustomLogicVector2Builtin_Bindings__<__CreatePropertyBinding__Y>g____setter_3_1
               (CustomLogic_CustomLogicVector2Builtin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (DAT_057028fd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057028fd = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    (__i->fields)._value.fields.y = fVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Normalized>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Normalized_g____getter_4_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x3dcc590

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings__<__CreatePropertyBinding__Normalized>g____getter_4_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicVector2Builtin__get_Normalized(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Magnitude>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Magnitude_g____getter_5_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x3dcc5b0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings__<__CreatePropertyBinding__Magnitude>g____getter_5_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Il2CppObject *pIVar3;
  float local_c;
  
  if (__i != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    if (DAT_056fdea4 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fdea4 = '\x01';
    }
    fVar1 = (__i->fields)._value.fields.x;
    fVar2 = (__i->fields)._value.fields.y;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_c = fVar2 * fVar2 + fVar1 * fVar1;
    if (local_c < 0.0) {
      local_c = sqrtf(local_c);
    }
    else {
      local_c = SQRT(local_c);
    }
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
    return pIVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__SqrMagnitude>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__SqrMagnitude_g____getter_6_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x3dcc660

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings__<__CreatePropertyBinding__SqrMagnitude>g____getter_6_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Zero>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Zero_g____getter_7_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x3dcc6a0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin_Bindings__<__CreatePropertyBinding__Zero>g____getter_7_0
          (MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  UVar1 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__One>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__One_g____getter_8_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x3dcc6b0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin_Bindings__<__CreatePropertyBinding__One>g____getter_8_0
          (MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (DAT_0570136e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570136e = '\x01';
  }
  UVar1 = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Up>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Up_g____getter_9_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x3dcc6c0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin_Bindings__<__CreatePropertyBinding__Up>g____getter_9_0
          (MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (DAT_0570048d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570048d = '\x01';
  }
  UVar1 = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Down>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Down_g____getter_10_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x3dcc6d0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin_Bindings__<__CreatePropertyBinding__Down>g____getter_10_0
          (MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (DAT_05701370 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_05701370 = '\x01';
  }
  UVar1 = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x18);
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Left>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Left_g____getter_11_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x3dcc6e0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin_Bindings__<__CreatePropertyBinding__Left>g____getter_11_0
          (MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (DAT_05701371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_05701371 = '\x01';
  }
  UVar1 = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Right>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Right_g____getter_12_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x3dcc6f0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin_Bindings__<__CreatePropertyBinding__Right>g____getter_12_0
          (MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (DAT_056fdee6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fdee6 = '\x01';
  }
  UVar1 = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x28);
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__NegativeInfinity>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__NegativeInfinity_g____getter_13_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x3dcc700

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin_Bindings__<__CreatePropertyBinding__NegativeInfinity>g____getter_13_0
          (MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (DAT_05700142 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_05700142 = '\x01';
  }
  UVar1 = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x38);
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__PositiveInfinity>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__PositiveInfinity_g____getter_14_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x3dcc710

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin_Bindings__<__CreatePropertyBinding__PositiveInfinity>g____getter_14_0
          (MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (DAT_0570298d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570298d = '\x01';
  }
  UVar1 = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x30);
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin___ctor (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x3dc6bc0

void CustomLogic_CustomLogicVector2Builtin___ctor
               (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057028cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028cb = '\x01';
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


// CustomLogic.CustomLogicVector2Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin___ctor (CustomLogic_CustomLogicVector2Builtin_o* __this, float xy, const MethodInfo* method);
// 0x3dc6c30

void CustomLogic_CustomLogicVector2Builtin___ctor
               (CustomLogic_CustomLogicVector2Builtin_o *__this,float xy,MethodInfo *method)

{
  if (DAT_057028cc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028cc = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields.x = xy;
  (__this->fields)._value.fields.y = xy;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin___ctor (CustomLogic_CustomLogicVector2Builtin_o* __this, float x, float y, const MethodInfo* method);
// 0x3dc6ca0

void CustomLogic_CustomLogicVector2Builtin___ctor
               (CustomLogic_CustomLogicVector2Builtin_o *__this,float x,float y,MethodInfo *method)

{
  if (DAT_057028cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028cd = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields.x = x;
  (__this->fields)._value.fields.y = y;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin___ctor (CustomLogic_CustomLogicVector2Builtin_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x3dc6d10

void CustomLogic_CustomLogicVector2Builtin___ctor
               (CustomLogic_CustomLogicVector2Builtin_o *__this,UnityEngine_Vector2_o value,
               MethodInfo *method)

{
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = value.fields;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$get_X
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__get_X (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x3dc6d70

float CustomLogic_CustomLogicVector2Builtin__get_X
                (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  return (__this->fields)._value.fields.x;
}


// CustomLogic.CustomLogicVector2Builtin$$set_X
// il2cpp: void CustomLogic_CustomLogicVector2Builtin__set_X (CustomLogic_CustomLogicVector2Builtin_o* __this, float value, const MethodInfo* method);
// 0x3dc6d80

void CustomLogic_CustomLogicVector2Builtin__set_X
               (CustomLogic_CustomLogicVector2Builtin_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._value.fields.x = value;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Y
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__get_Y (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x3dc6d90

float CustomLogic_CustomLogicVector2Builtin__get_Y
                (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  return (__this->fields)._value.fields.y;
}


// CustomLogic.CustomLogicVector2Builtin$$set_Y
// il2cpp: void CustomLogic_CustomLogicVector2Builtin__set_Y (CustomLogic_CustomLogicVector2Builtin_o* __this, float value, const MethodInfo* method);
// 0x3dc6da0

void CustomLogic_CustomLogicVector2Builtin__set_Y
               (CustomLogic_CustomLogicVector2Builtin_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._value.fields.y = value;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Normalized
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Normalized (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x3dc6db0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__get_Normalized
          (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined1 auVar2 [16];
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  float fVar3;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector2_Fields UVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_18 [16];
  undefined1 auVar5 [16];
  
  UVar4 = (__this->fields)._value.fields;
  local_18._8_8_ = 0;
  local_18._0_4_ = UVar4.x;
  local_18._4_4_ = UVar4.y;
  auVar5 = local_18;
  if (DAT_056fdea4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fdea4 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  local_18._0_4_ = UVar4.x;
  local_18._4_4_ = UVar4.y;
  uVar6 = 0;
  uVar7 = 0;
  fVar3 = (float)local_18._4_4_ * (float)local_18._4_4_ +
          (float)local_18._0_4_ * (float)local_18._0_4_;
  if (fVar3 < 0.0) {
    fVar3 = sqrtf(fVar3);
    uVar6 = extraout_XMM0_Dc;
    uVar7 = extraout_XMM0_Dd;
  }
  else {
    fVar3 = SQRT(fVar3);
  }
  if (fVar3 <= 1e-05) {
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    UVar4 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
  }
  else {
    auVar2._4_4_ = fVar3;
    auVar2._0_4_ = fVar3;
    auVar2._8_4_ = uVar6;
    auVar2._12_4_ = uVar7;
    auVar5 = divps(auVar5,auVar2);
    UVar4 = auVar5._0_8_;
  }
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._value.fields = UVar4;
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Magnitude
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__get_Magnitude (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x3dc6fb0

float CustomLogic_CustomLogicVector2Builtin__get_Magnitude
                (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  float fVar2;
  float fVar3;
  
  if (DAT_056fdea4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fdea4 = '\x01';
  }
  UVar1 = (__this->fields)._value.fields;
  fVar2 = UVar1.x;
  fVar3 = UVar1.y;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
  if (0.0 <= fVar2) {
    return SQRT(fVar2);
  }
  fVar2 = sqrtf(fVar2);
  return fVar2;
}


// CustomLogic.CustomLogicVector2Builtin$$get_SqrMagnitude
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__get_SqrMagnitude (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x3dc7030

float CustomLogic_CustomLogicVector2Builtin__get_SqrMagnitude
                (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  float fVar2;
  float fVar3;
  
  UVar1 = (__this->fields)._value.fields;
  fVar2 = UVar1.x;
  fVar3 = UVar1.y;
  return fVar3 * fVar3 + fVar2 * fVar2;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Zero
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Zero (const MethodInfo* method);
// 0x3dc7050

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__get_Zero(MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  UVar1 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$get_One
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_One (const MethodInfo* method);
// 0x3dc7100

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__get_One(MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (DAT_0570136e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570136e = '\x01';
  }
  UVar1 = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Up (const MethodInfo* method);
// 0x3dc71b0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__get_Up(MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (DAT_0570048d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570048d = '\x01';
  }
  UVar1 = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Down
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Down (const MethodInfo* method);
// 0x3dc7260

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__get_Down(MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (DAT_05701370 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_05701370 = '\x01';
  }
  UVar1 = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x18);
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Left
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Left (const MethodInfo* method);
// 0x3dc7310

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__get_Left(MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (DAT_05701371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_05701371 = '\x01';
  }
  UVar1 = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Right (const MethodInfo* method);
// 0x3dc73c0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__get_Right(MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (DAT_056fdee6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fdee6 = '\x01';
  }
  UVar1 = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x28);
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$get_NegativeInfinity
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_NegativeInfinity (const MethodInfo* method);
// 0x3dc7470

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__get_NegativeInfinity(MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (DAT_05700142 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_05700142 = '\x01';
  }
  UVar1 = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x38);
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$get_PositiveInfinity
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_PositiveInfinity (const MethodInfo* method);
// 0x3dc7520

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__get_PositiveInfinity(MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (DAT_0570298d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570298d = '\x01';
  }
  UVar1 = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x30);
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$Angle
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__Angle (CustomLogic_CustomLogicVector2Builtin_o* from, CustomLogic_CustomLogicVector2Builtin_o* to, const MethodInfo* method);
// 0x3dc75d0

float CustomLogic_CustomLogicVector2Builtin__Angle
                (CustomLogic_CustomLogicVector2Builtin_o *from,
                CustomLogic_CustomLogicVector2Builtin_o *to,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  double dVar2;
  MethodInfo *method_00;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((from == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) ||
     (to == (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UVar1 = (from->fields)._value.fields;
  fVar3 = UVar1.x;
  fVar4 = UVar1.y;
  UVar1 = (to->fields)._value.fields;
  fVar6 = UVar1.x;
  fVar7 = UVar1.y;
  if (DAT_056fdee7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fdee7 = '\x01';
  }
  fVar5 = fVar4 * fVar4 + fVar3 * fVar3;
  fVar8 = fVar7 * fVar7 + fVar6 * fVar6;
  if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  if (fVar5 * fVar8 < 0.0) {
    fVar5 = sqrtf(fVar5 * fVar8);
    method_00 = TypeInfo_Math;
  }
  else {
    fVar5 = SQRT(fVar5 * fVar8);
    method_00 = TypeInfo_Math;
  }
  if (1e-15 <= fVar5) {
    fVar5 = (fVar7 * fVar4 + fVar6 * fVar3) / fVar5;
    fVar3 = 1.0;
    if (fVar5 <= 1.0) {
      fVar3 = fVar5;
    }
    TypeInfo_Math = method_00;
    if (*(int *)((long)&method_00[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    dVar2 = acos((double)(float)(~-(uint)(-1.0 <= fVar5) & 0xbf800000 |
                                (uint)fVar3 & -(uint)(-1.0 <= fVar5)),method_00);
    return (float)dVar2 * 57.29578;
  }
  TypeInfo_Math = method_00;
  return 0.0;
}


// CustomLogic.CustomLogicVector2Builtin$$ClampMagnitude
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__ClampMagnitude (CustomLogic_CustomLogicVector2Builtin_o* vector, float maxLength, const MethodInfo* method);
// 0x3dc7760

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__ClampMagnitude
          (CustomLogic_CustomLogicVector2Builtin_o *vector,float maxLength,MethodInfo *method)

{
  undefined1 auVar1 [16];
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  float fVar2;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  UnityEngine_Vector2_Fields local_28;
  
  if (vector == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  local_28 = (vector->fields)._value.fields;
  auVar3._8_8_ = 0;
  auVar3._0_4_ = local_28.x;
  auVar3._4_4_ = local_28.y;
  if (DAT_0570298e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_0570298e = '\x01';
  }
  uVar4 = 0;
  uVar5 = 0;
  fVar2 = local_28.y * local_28.y + local_28.x * local_28.x;
  if (fVar2 <= maxLength * maxLength) goto LAB_03dc782b;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    if (fVar2 < 0.0) goto LAB_03dc7806;
LAB_03dc77dc:
    fVar2 = SQRT(fVar2);
  }
  else {
    if (0.0 <= fVar2) goto LAB_03dc77dc;
LAB_03dc7806:
    fVar2 = sqrtf(fVar2);
    uVar4 = extraout_XMM0_Dc;
    uVar5 = extraout_XMM0_Dd;
  }
  auVar1._4_4_ = fVar2;
  auVar1._0_4_ = fVar2;
  auVar1._8_4_ = uVar4;
  auVar1._12_4_ = uVar5;
  auVar3 = divps(auVar3,auVar1);
  local_28.y = auVar3._4_4_ * maxLength;
  local_28.x = auVar3._0_4_ * maxLength;
LAB_03dc782b:
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = local_28;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$Distance
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__Distance (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, const MethodInfo* method);
// 0x3dc78b0

float CustomLogic_CustomLogicVector2Builtin__Distance
                (CustomLogic_CustomLogicVector2Builtin_o *a,
                CustomLogic_CustomLogicVector2Builtin_o *b,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  float fVar3;
  float fVar4;
  
  if ((a == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UVar1 = (a->fields)._value.fields;
  UVar2 = (b->fields)._value.fields;
  if (DAT_056fde22 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde22 = '\x01';
  }
  fVar3 = UVar1.x - UVar2.x;
  fVar4 = UVar1.y - UVar2.y;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = fVar4 * fVar4 + fVar3 * fVar3;
  if (0.0 <= fVar3) {
    return SQRT(fVar3);
  }
  fVar3 = sqrtf(fVar3);
  return fVar3;
}


// CustomLogic.CustomLogicVector2Builtin$$Dot
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__Dot (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, const MethodInfo* method);
// 0x3dc7950

float CustomLogic_CustomLogicVector2Builtin__Dot
                (CustomLogic_CustomLogicVector2Builtin_o *a,
                CustomLogic_CustomLogicVector2Builtin_o *b,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  
  if ((a != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    UVar1 = (a->fields)._value.fields;
    UVar2 = (b->fields)._value.fields;
    return UVar2.y * UVar1.y + UVar2.x * UVar1.x;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin$$Lerp
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__Lerp (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, float t, const MethodInfo* method);
// 0x3dc7980

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__Lerp
          (CustomLogic_CustomLogicVector2Builtin_o *a,CustomLogic_CustomLogicVector2Builtin_o *b,
          float t,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector2_Fields local_28;
  
  if ((a != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    UVar1 = (a->fields)._value.fields;
    fVar3 = UVar1.x;
    fVar4 = UVar1.y;
    UVar1 = (b->fields)._value.fields;
    fVar2 = 1.0;
    if (t <= 1.0) {
      fVar2 = t;
    }
    fVar2 = (float)(-(uint)(0.0 <= t) & (uint)fVar2);
    if (DAT_057028d5 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
      DAT_057028d5 = '\x01';
    }
    __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
    if (DAT_057028ce == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_057028ce = '\x01';
    }
    local_28.y = fVar4 + fVar2 * (UVar1.y - fVar4);
    local_28.x = fVar3 + fVar2 * (UVar1.x - fVar3);
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields)._value.fields = local_28;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin$$LerpUnclamped
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__LerpUnclamped (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, float t, const MethodInfo* method);
// 0x3dc7a70

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__LerpUnclamped
          (CustomLogic_CustomLogicVector2Builtin_o *a,CustomLogic_CustomLogicVector2Builtin_o *b,
          float t,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  float fVar2;
  float fVar3;
  UnityEngine_Vector2_Fields local_28;
  
  if ((a != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    UVar1 = (a->fields)._value.fields;
    fVar2 = UVar1.x;
    fVar3 = UVar1.y;
    UVar1 = (b->fields)._value.fields;
    if (DAT_057028d5 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
      DAT_057028d5 = '\x01';
    }
    __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
    if (DAT_057028ce == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_057028ce = '\x01';
    }
    local_28.y = fVar3 + (UVar1.y - fVar3) * t;
    local_28.x = fVar2 + (UVar1.x - fVar2) * t;
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields)._value.fields = local_28;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin$$Max
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__Max (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, const MethodInfo* method);
// 0x3dc7b50

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__Max
          (CustomLogic_CustomLogicVector2Builtin_o *a,CustomLogic_CustomLogicVector2Builtin_o *b,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  undefined1 auVar2 [16];
  undefined1 local_28 [16];
  
  if ((a != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    local_28._8_8_ = 0;
    local_28._0_8_ = (a->fields)._value.fields;
    UVar1 = (b->fields)._value.fields;
    if (DAT_057028d5 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
      DAT_057028d5 = '\x01';
    }
    __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
    if (DAT_057028ce == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_057028ce = '\x01';
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = UVar1;
    auVar2 = maxps(local_28,auVar2);
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    local_28._0_8_ = auVar2._0_8_;
    (__this->fields)._value.fields = (UnityEngine_Vector2_Fields)local_28._0_8_;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin$$Min
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__Min (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, const MethodInfo* method);
// 0x3dc7c10

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__Min
          (CustomLogic_CustomLogicVector2Builtin_o *a,CustomLogic_CustomLogicVector2Builtin_o *b,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  undefined1 auVar2 [16];
  undefined1 local_28 [16];
  
  if ((a != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    local_28._8_8_ = 0;
    local_28._0_8_ = (a->fields)._value.fields;
    UVar1 = (b->fields)._value.fields;
    if (DAT_057028d5 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
      DAT_057028d5 = '\x01';
    }
    __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
    if (DAT_057028ce == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_057028ce = '\x01';
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = UVar1;
    auVar2 = minps(local_28,auVar2);
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    local_28._0_8_ = auVar2._0_8_;
    (__this->fields)._value.fields = (UnityEngine_Vector2_Fields)local_28._0_8_;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin$$MoveTowards
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__MoveTowards (CustomLogic_CustomLogicVector2Builtin_o* current, CustomLogic_CustomLogicVector2Builtin_o* target, float maxDistanceDelta, const MethodInfo* method);
// 0x3dc7cd0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__MoveTowards
          (CustomLogic_CustomLogicVector2Builtin_o *current,
          CustomLogic_CustomLogicVector2Builtin_o *target,float maxDistanceDelta,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined1 auVar2 [16];
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  float fVar3;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  UnityEngine_Vector2_Fields local_48;
  
  if ((current == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) ||
     (target == (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UVar1 = (current->fields)._value.fields;
  fVar4 = UVar1.x;
  fVar5 = UVar1.y;
  UVar1 = (target->fields)._value.fields;
  local_48.x = UVar1.x;
  local_48.y = UVar1.y;
  if (DAT_05702372 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_05702372 = '\x01';
  }
  auVar6._0_4_ = local_48.x - fVar4;
  auVar6._4_4_ = local_48.y - fVar5;
  auVar6._8_8_ = 0;
  uVar7 = 0;
  uVar8 = 0;
  fVar3 = auVar6._4_4_ * auVar6._4_4_ + auVar6._0_4_ * auVar6._0_4_;
  if (((fVar3 == 0.0) && (!NAN(fVar3))) ||
     ((0.0 <= maxDistanceDelta && (fVar3 <= maxDistanceDelta * maxDistanceDelta))))
  goto LAB_03dc7def;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    if (fVar3 < 0.0) goto LAB_03dc7dba;
LAB_03dc7d81:
    fVar3 = SQRT(fVar3);
  }
  else {
    if (0.0 <= fVar3) goto LAB_03dc7d81;
LAB_03dc7dba:
    fVar3 = sqrtf(fVar3);
    uVar7 = extraout_XMM0_Dc;
    uVar8 = extraout_XMM0_Dd;
  }
  auVar2._4_4_ = fVar3;
  auVar2._0_4_ = fVar3;
  auVar2._8_4_ = uVar7;
  auVar2._12_4_ = uVar8;
  auVar6 = divps(auVar6,auVar2);
  local_48.x = fVar4 + maxDistanceDelta * auVar6._0_4_;
  local_48.y = fVar5 + maxDistanceDelta * auVar6._4_4_;
LAB_03dc7def:
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = local_48;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$Reflect
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__Reflect (CustomLogic_CustomLogicVector2Builtin_o* inDirection, CustomLogic_CustomLogicVector2Builtin_o* inNormal, const MethodInfo* method);
// 0x3dc7e80

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__Reflect
          (CustomLogic_CustomLogicVector2Builtin_o *inDirection,
          CustomLogic_CustomLogicVector2Builtin_o *inNormal,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector2_Fields local_28;
  
  if ((inDirection != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (inNormal != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    UVar1 = (inDirection->fields)._value.fields;
    fVar2 = UVar1.x;
    fVar3 = UVar1.y;
    UVar1 = (inNormal->fields)._value.fields;
    fVar4 = UVar1.x;
    fVar5 = UVar1.y;
    fVar6 = (fVar5 * fVar3 + fVar2 * fVar4) * -2.0;
    if (DAT_057028d5 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
      DAT_057028d5 = '\x01';
    }
    __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
    if (DAT_057028ce == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_057028ce = '\x01';
    }
    local_28.y = fVar3 + fVar5 * fVar6;
    local_28.x = fVar2 + fVar4 * fVar6;
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields)._value.fields = local_28;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin$$SignedAngle
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__SignedAngle (CustomLogic_CustomLogicVector2Builtin_o* from, CustomLogic_CustomLogicVector2Builtin_o* to, const MethodInfo* method);
// 0x3dc7f80

float CustomLogic_CustomLogicVector2Builtin__SignedAngle
                (CustomLogic_CustomLogicVector2Builtin_o *from,
                CustomLogic_CustomLogicVector2Builtin_o *to,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  double dVar3;
  MethodInfo *method_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((from != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (to != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    UVar1 = (from->fields)._value.fields;
    UVar2 = (to->fields)._value.fields;
    fVar8 = UVar2.x;
    fVar9 = UVar2.y;
    if (DAT_056fdee7 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fdee7 = '\x01';
    }
    fVar6 = UVar1.x;
    fVar7 = UVar1.y;
    fVar4 = fVar7 * fVar7 + fVar6 * fVar6;
    fVar5 = fVar9 * fVar9 + fVar8 * fVar8;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    if (fVar4 * fVar5 < 0.0) {
      fVar4 = sqrtf(fVar4 * fVar5);
      method_00 = TypeInfo_Math;
    }
    else {
      fVar4 = SQRT(fVar4 * fVar5);
      method_00 = TypeInfo_Math;
    }
    fVar5 = 0.0;
    TypeInfo_Math = method_00;
    if (1e-15 <= fVar4) {
      fVar4 = (fVar7 * fVar9 + fVar6 * fVar8) / fVar4;
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
      if (*(int *)((long)&method_00[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      dVar3 = acos((double)(float)(~-(uint)(-1.0 <= fVar4) & 0xbf800000 |
                                  (uint)fVar5 & -(uint)(-1.0 <= fVar4)),method_00);
      fVar5 = (float)dVar3 * 57.29578;
    }
    return fVar5 * *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= fVar6 * fVar9 - fVar7 * fVar8) * 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin$$SmoothDamp
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__SmoothDamp (CustomLogic_CustomLogicVector2Builtin_o* current, CustomLogic_CustomLogicVector2Builtin_o* target, CustomLogic_CustomLogicVector2Builtin_o* currentVelocity, float smoothTime, float maxSpeed, const MethodInfo* method);
// 0x3dc8140

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__SmoothDamp
          (CustomLogic_CustomLogicVector2Builtin_o *current,
          CustomLogic_CustomLogicVector2Builtin_o *target,
          CustomLogic_CustomLogicVector2Builtin_o *currentVelocity,float smoothTime,float maxSpeed,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields target_00;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  float deltaTime;
  
  if ((current != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (target != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    if (currentVelocity != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
      UVar1 = (current->fields)._value.fields;
      target_00 = (target->fields)._value.fields;
      deltaTime = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      UVar1 = (UnityEngine_Vector2_Fields)
              UnityEngine_Vector2__SmoothDamp
                        ((UnityEngine_Vector2_o)UVar1,(UnityEngine_Vector2_o)target_00,
                         &(currentVelocity->fields)._value,smoothTime,maxSpeed,deltaTime,
                         (MethodInfo *)0x0);
      if (DAT_057028d5 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
        DAT_057028d5 = '\x01';
      }
      __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
      if (DAT_057028ce == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057028ce = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._value.fields = UVar1;
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin$$Set
// il2cpp: void CustomLogic_CustomLogicVector2Builtin__Set (CustomLogic_CustomLogicVector2Builtin_o* __this, float x, float y, const MethodInfo* method);
// 0x3dc8240

void CustomLogic_CustomLogicVector2Builtin__Set
               (CustomLogic_CustomLogicVector2Builtin_o *__this,float x,float y,MethodInfo *method)

{
  (__this->fields)._value.fields.x = x;
  (__this->fields)._value.fields.y = y;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$Normalize
// il2cpp: void CustomLogic_CustomLogicVector2Builtin__Normalize (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x3dc8250

void CustomLogic_CustomLogicVector2Builtin__Normalize
               (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  float fVar2;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (DAT_056fdea4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fdea4 = '\x01';
  }
  UVar1 = (__this->fields)._value.fields;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar2 = UVar1.x;
  fVar5 = UVar1.y;
  uVar6 = 0;
  uVar7 = 0;
  fVar2 = fVar5 * fVar5 + fVar2 * fVar2;
  if (fVar2 < 0.0) {
    fVar2 = sqrtf(fVar2);
    uVar6 = extraout_XMM0_Dc;
    uVar7 = extraout_XMM0_Dd;
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  if (fVar2 <= 1e-05) {
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    (__this->fields)._value.fields = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
    return;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (__this->fields)._value.fields;
  auVar4._4_4_ = fVar2;
  auVar4._0_4_ = fVar2;
  auVar4._8_4_ = uVar6;
  auVar4._12_4_ = uVar7;
  auVar4 = divps(auVar3,auVar4);
  (__this->fields)._value.fields = auVar4._0_8_;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicVector2Builtin__ToString (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x3dc8320

System_String_o *
CustomLogic_CustomLogicVector2Builtin__ToString
          (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = (System_String_o *)il2cpp_glue_02b0dca0(&(__this->fields)._value,0,0,0);
  return pSVar1;
}


// CustomLogic.CustomLogicVector2Builtin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin____Copy__ (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x3dc8330

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin____Copy__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  
  if (DAT_057028cf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028cf = '\x01';
  }
  UVar1 = (__this->fields)._value.fields;
  __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (CustomLogic_BuiltinClassInstance_c *)UVar1;
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin$$__Add__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin____Add__ (CustomLogic_CustomLogicVector2Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dc83c0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin____Add__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppClass *pIVar2;
  byte bVar3;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  float fStack_28;
  float fStack_24;
  
  if (DAT_057028d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d0 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar3 = (TypeInfo_CustomLogicVector2Builtin->_2).naturalAligment;
    if ((((bVar3 <= (self->klass->_2).naturalAligment) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicVector2Builtin)) &&
       ((bVar3 <= (other->klass->_2).naturalAligment &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicVector2Builtin)))) {
      pIVar1 = self[3].klass;
      pIVar2 = other[3].klass;
      __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue();
      if (DAT_057028ce == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057028ce = '\x01';
      }
      uStack_38._0_4_ = SUB84(pIVar1,0);
      uStack_38._4_4_ = (float)((ulong)pIVar1 >> 0x20);
      fStack_28 = SUB84(pIVar2,0);
      fStack_24 = (float)((ulong)pIVar2 >> 0x20);
      uStack_38 = (CustomLogic_BuiltinClassInstance_c *)
                  CONCAT44(uStack_38._4_4_ + fStack_24,(float)uStack_38 + fStack_28);
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
      __this_00[1].klass = uStack_38;
      return (Il2CppObject *)__this_00;
    }
  }
  operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Add__");
  pSVar4 = CustomLogic_CustomLogicUtils__OperatorException
                     (operatorName,self,other,(MethodInfo *)0x0);
  uVar5 = il2cpp_init_method_metadata(&MethodInfo_Object___Add);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(pSVar4,uVar5);
}


// CustomLogic.CustomLogicVector2Builtin$$__Sub__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin____Sub__ (CustomLogic_CustomLogicVector2Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dc8500

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin____Sub__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppClass *pIVar2;
  byte bVar3;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  float fStack_28;
  float fStack_24;
  
  if (DAT_057028d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d1 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar3 = (TypeInfo_CustomLogicVector2Builtin->_2).naturalAligment;
    if ((((bVar3 <= (self->klass->_2).naturalAligment) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicVector2Builtin)) &&
       ((bVar3 <= (other->klass->_2).naturalAligment &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicVector2Builtin)))) {
      pIVar1 = self[3].klass;
      pIVar2 = other[3].klass;
      __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue();
      if (DAT_057028ce == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057028ce = '\x01';
      }
      uStack_38._0_4_ = SUB84(pIVar1,0);
      uStack_38._4_4_ = (float)((ulong)pIVar1 >> 0x20);
      fStack_28 = SUB84(pIVar2,0);
      fStack_24 = (float)((ulong)pIVar2 >> 0x20);
      uStack_38 = (CustomLogic_BuiltinClassInstance_c *)
                  CONCAT44(uStack_38._4_4_ - fStack_24,(float)uStack_38 - fStack_28);
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
      __this_00[1].klass = uStack_38;
      return (Il2CppObject *)__this_00;
    }
  }
  operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Sub__");
  pSVar4 = CustomLogic_CustomLogicUtils__OperatorException
                     (operatorName,self,other,(MethodInfo *)0x0);
  uVar5 = il2cpp_init_method_metadata(&MethodInfo_Object___Sub);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(pSVar4,uVar5);
}


// CustomLogic.CustomLogicVector2Builtin$$__Mul__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin____Mul__ (CustomLogic_CustomLogicVector2Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dc8640

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin____Mul__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  Il2CppClass *pIVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  undefined4 *puVar4;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar5;
  undefined8 uVar6;
  undefined8 uStack_38;
  float fStack_28;
  float fStack_24;
  
  if (DAT_057028d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d2 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    pIVar3 = self->klass;
    bVar2 = (TypeInfo_CustomLogicVector2Builtin->_2).naturalAligment;
    if (((pIVar3->_2).naturalAligment < bVar2) ||
       ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicVector2Builtin)) {
      if ((pIVar3 == DAT_05711098) &&
         (puVar4 = (undefined4 *)il2cpp_glue_022c7330(self), other != (Il2CppObject *)0x0)) {
        bVar2 = (TypeInfo_CustomLogicVector2Builtin->_2).naturalAligment;
        if ((bVar2 <= (other->klass->_2).naturalAligment) &&
           ((other->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicVector2Builtin)) {
          pIVar1 = other[3].klass;
          pIVar3 = (Il2CppClass *)CONCAT44(*puVar4,*puVar4);
          __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue();
          goto joined_r0x03dc8715;
        }
      }
    }
    else if (other != (Il2CppObject *)0x0) {
      pIVar3 = other->klass;
      if (((pIVar3->_2).naturalAligment < bVar2) ||
         ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicVector2Builtin)) {
        if (pIVar3 != DAT_05711098) goto LAB_03dc8806;
        puVar4 = (undefined4 *)il2cpp_glue_022c7330(other);
        pIVar1 = self[3].klass;
        pIVar3 = (Il2CppClass *)CONCAT44(*puVar4,*puVar4);
        __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
      }
      else {
        pIVar3 = self[3].klass;
        pIVar1 = other[3].klass;
        __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue();
      }
joined_r0x03dc8715:
      if (DAT_057028ce == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057028ce = '\x01';
      }
      uStack_38._0_4_ = SUB84(pIVar3,0);
      uStack_38._4_4_ = (float)((ulong)pIVar3 >> 0x20);
      fStack_28 = SUB84(pIVar1,0);
      fStack_24 = (float)((ulong)pIVar1 >> 0x20);
      uStack_38 = (CustomLogic_BuiltinClassInstance_c *)
                  CONCAT44(uStack_38._4_4_ * fStack_24,(float)uStack_38 * fStack_28);
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
      __this_00[1].klass = uStack_38;
      return (Il2CppObject *)__this_00;
    }
  }
LAB_03dc8806:
  operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Mul__");
  pSVar5 = CustomLogic_CustomLogicUtils__OperatorException
                     (operatorName,self,other,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_Object___Mul);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(pSVar5,uVar6);
}


// CustomLogic.CustomLogicVector2Builtin$$__Div__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin____Div__ (CustomLogic_CustomLogicVector2Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dc8840

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin____Div__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  undefined1 auVar3 [16];
  undefined4 *puVar4;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar5;
  undefined8 uVar6;
  Il2CppClass *pIVar7;
  undefined1 auVar8 [16];
  CustomLogic_BuiltinClassInstance_c *pCStack_38;
  
  if (DAT_057028d3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d3 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicVector2Builtin->_2).naturalAligment;
    if (((bVar1 <= (self->klass->_2).naturalAligment) && (other != (Il2CppObject *)0x0)) &&
       ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicVector2Builtin)) {
      pIVar2 = other->klass;
      if (((pIVar2->_2).naturalAligment < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector2Builtin)) {
        if (pIVar2 != DAT_05711098) goto LAB_03dc898e;
        puVar4 = (undefined4 *)il2cpp_glue_022c7330(other);
        pIVar2 = self[3].klass;
        pIVar7 = (Il2CppClass *)CONCAT44(*puVar4,*puVar4);
        __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
      }
      else {
        pIVar2 = self[3].klass;
        pIVar7 = other[3].klass;
        __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue();
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = pIVar2;
      if (DAT_057028ce == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057028ce = '\x01';
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = pIVar7;
      auVar8 = divps(auVar8,auVar3);
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
      pCStack_38 = auVar8._0_8_;
      __this_00[1].klass = pCStack_38;
      return (Il2CppObject *)__this_00;
    }
  }
LAB_03dc898e:
  operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Div__");
  pSVar5 = CustomLogic_CustomLogicUtils__OperatorException
                     (operatorName,self,other,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_Object___Div);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(pSVar5,uVar6);
}


// CustomLogic.CustomLogicVector2Builtin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicVector2Builtin____Eq__ (CustomLogic_CustomLogicVector2Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dc89d0

bool_conflict
CustomLogic_CustomLogicVector2Builtin____Eq__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass **ppIVar2;
  float fVar3;
  float fVar4;
  
  if (DAT_057028d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d4 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicVector2Builtin->_2).naturalAligment;
    if (bVar1 <= (self->klass->_2).naturalAligment) {
      if ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector2Builtin) {
        self = (Il2CppObject *)0x0;
      }
      if ((((other != (Il2CppObject *)0x0) && (self != (Il2CppObject *)0x0)) &&
          (bVar1 <= (other->klass->_2).naturalAligment)) &&
         (ppIVar2 = (other->klass->_2).typeHierarchy, ppIVar2[(ulong)bVar1 - 1] == TypeInfo_CustomLogicVector2Builtin)) {
        fVar3 = SUB84(self[3].klass,0) - SUB84(other[3].klass,0);
        fVar4 = (float)((ulong)self[3].klass >> 0x20) - (float)((ulong)other[3].klass >> 0x20);
        return (bool_conflict)
               CONCAT71((int7)((ulong)ppIVar2 >> 8),fVar4 * fVar4 + fVar3 * fVar3 < 9.9999994e-11);
      }
    }
  }
  return 0;
}


// CustomLogic.CustomLogicVector2Builtin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicVector2Builtin____Hash__ (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x3dc8a90

int32_t CustomLogic_CustomLogicVector2Builtin____Hash__
                  (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  float in_XMM0_Da;
  float __this_00;
  
  uVar1 = System_Single__GetHashCode(in_XMM0_Da,(MethodInfo *)&(__this->fields)._value);
  iVar2 = System_Single__GetHashCode(__this_00,(MethodInfo *)&(__this->fields)._value.fields.y);
  return iVar2 << 2 ^ uVar1;
}


// CustomLogic.CustomLogicVector2Builtin$$__Mod__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin____Mod__ (CustomLogic_CustomLogicVector2Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dc8ac0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin____Mod__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  undefined8 uVar1;
  System_NotImplementedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Object___Mod);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// CustomLogic.CustomLogicVector2Builtin$$op_Implicit
// il2cpp: UnityEngine_Vector2_o CustomLogic_CustomLogicVector2Builtin__op_Implicit (CustomLogic_CustomLogicVector2Builtin_o* value, const MethodInfo* method);
// 0x3dc8b00

UnityEngine_Vector2_o
CustomLogic_CustomLogicVector2Builtin__op_Implicit
          (CustomLogic_CustomLogicVector2Builtin_o *value,MethodInfo *method)

{
  if (value != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    return (UnityEngine_Vector2_o)(value->fields)._value.fields;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector2Builtin$$op_Implicit
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__op_Implicit (UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x3dc6f20

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__op_Implicit(UnityEngine_Vector2_o value,MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (DAT_057028d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector2Builtin);
    DAT_057028d5 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector2Builtin);
  if (DAT_057028ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057028ce = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = value.fields;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicVector2Builtin__get_ClassName (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x3dc8b20

System_String_o *
CustomLogic_CustomLogicVector2Builtin__get_ClassName
          (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  if (DAT_057028d6 == '\0') {
    il2cpp_init_method_metadata(&"Vector2");
    DAT_057028d6 = '\x01';
  }
  return "Vector2";
}


// CustomLogic.CustomLogicVector2Builtin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicVector2Builtin__get_IsAbstract (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x3dc8b50

bool_conflict
CustomLogic_CustomLogicVector2Builtin__get_IsAbstract
          (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicVector2Builtin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicVector2Builtin__get_IsStatic (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x3dc8b60

bool_conflict
CustomLogic_CustomLogicVector2Builtin__get_IsStatic
          (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicVector2Builtin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicVector2Builtin__get_InheritBaseMembers (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x3dc8b70

bool_conflict
CustomLogic_CustomLogicVector2Builtin__get_InheritBaseMembers
          (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


