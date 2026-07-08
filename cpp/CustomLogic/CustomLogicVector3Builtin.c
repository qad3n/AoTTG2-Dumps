// Type: CustomLogic.CustomLogicVector3Builtin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicVector3Builtin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicVector3Builtin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicVector3Builtin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3dd0bb0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int iVar2;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar5;
  System_ArgumentException_o *__this;
  float fVar6;
  float fVar7;
  int local_20;
  float local_1c;
  
  if (DAT_0570291d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291d = '\x01';
  }
  local_20 = 0;
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (args->max_length == 0) {
    pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_0570290c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_0570290c = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    (pCVar3->fields).Value.fields.z = 0.0;
    (pCVar3->fields).Value.fields.x = 0.0;
    (pCVar3->fields).Value.fields.y = 0.0;
  }
  else {
    iVar2 = (int)args->max_length;
    if (iVar2 == 3) {
      pIVar1 = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
      if (((uint)args->max_length < 2) ||
         (fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(args->m_Items[1],MethodInfo_Single_ConvertTo_Single),
         (uint)args->max_length < 3)) goto LAB_03dd0f4d;
      local_1c = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(args->m_Items[2],MethodInfo_Single_ConvertTo_Single);
      pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      if (DAT_0570290f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_0570290f = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
      (pCVar3->fields).Value.fields.x = fVar6;
      (pCVar3->fields).Value.fields.y = fVar7;
    }
    else {
      if (iVar2 == 2) {
        pIVar1 = args->m_Items[0];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
        if (1 < (uint)args->max_length) {
          fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(args->m_Items[1],MethodInfo_Single_ConvertTo_Single);
          pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
          if (DAT_0570290e == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
            DAT_0570290e = '\x01';
          }
          if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
            il2cpp_init_class();
          }
          CustomLogic_BuiltinClassInstance___ctor
                    ((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
          (pCVar3->fields).Value.fields.x = fVar6;
          (pCVar3->fields).Value.fields.y = fVar7;
          (pCVar3->fields).Value.fields.z = 0.0;
          return pCVar3;
        }
LAB_03dd0f4d:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (iVar2 != 1) {
        local_20 = iVar2;
        pSVar4 = System_Int32__ToString((int32_t)&local_20,(MethodInfo *)0x0);
        str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicVector3Builtin constructor found that takes ");
        str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
        pSVar4 = System_String__Concat(str0,pSVar4,str2,(MethodInfo *)0x0);
        uVar5 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
        __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar5);
        System_ArgumentException___ctor(__this,pSVar4,(MethodInfo *)0x0);
        uVar5 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_CreateInstance);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this,uVar5);
      }
      pIVar1 = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
      pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      if (DAT_0570290d == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_0570290d = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
      (pCVar3->fields).Value.fields.x = fVar6;
      (pCVar3->fields).Value.fields.y = fVar6;
      local_1c = fVar6;
    }
    (pCVar3->fields).Value.fields.z = local_1c;
  }
  return pCVar3;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings___c___cctor (const MethodInfo* method);
// 0x3dd6080

void CustomLogic_CustomLogicVector3Builtin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702953 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702953 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings___c___ctor (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3dd60f0

void CustomLogic_CustomLogicVector3Builtin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Angle>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Angle_b__18_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd6100

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__Angle>b__18_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *from;
  CustomLogic_CustomLogicVector3Builtin_o *to;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  float local_1c;
  
  if (DAT_05702954 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702954 = '\x01';
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
    from = (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      to = (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      local_1c = CustomLogic_CustomLogicVector3Builtin__Angle(from,to,method_00);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_1c);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__ClampMagnitude>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__ClampMagnitude_b__19_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd61c0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__ClampMagnitude>b__19_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  MethodInfo *method_00;
  float maxLength;
  
  if (DAT_05702955 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702955 = '\x01';
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
    pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      method_00 = MethodInfo_Single_ConvertTo_Single;
      maxLength = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                            (__a->m_Items[1],(MethodInfo_24AB990 *)MethodInfo_Single_ConvertTo_Single);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__ClampMagnitude(pCVar1,maxLength,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Cross>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Cross_b__20_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd6270

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__Cross>b__20_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_78;
  
  if (DAT_05702956 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702956 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dd646d:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar3,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if ((pIVar3 != (Il2CppObject *)0x0) && (pIVar4 != (Il2CppObject *)0x0)) {
        fVar5 = SUB84(pIVar3[3].klass,0);
        fVar6 = (float)((ulong)pIVar3[3].klass >> 0x20);
        fVar1 = *(float *)&pIVar3[3].monitor;
        fVar7 = SUB84(pIVar4[3].klass,0);
        fVar8 = (float)((ulong)pIVar4[3].klass >> 0x20);
        fVar2 = *(float *)&pIVar4[3].monitor;
        if (DAT_0570291b == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
          DAT_0570291b = '\x01';
        }
        __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
        if (DAT_05702910 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
          DAT_05702910 = '\x01';
        }
        local_78 = (CustomLogic_BuiltinClassInstance_c *)
                   CONCAT44(fVar1 * fVar7 - fVar2 * fVar5,fVar6 * fVar2 - fVar1 * fVar8);
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_init_class();
        }
        CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
        __this_00[1].klass = local_78;
        *(float *)&__this_00[1].monitor = fVar5 * fVar8 - fVar6 * fVar7;
        return (Il2CppObject *)__this_00;
      }
      goto LAB_03dd646d;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Distance>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Distance_b__21_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd6480

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__Distance>b__21_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_4c;
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (DAT_05702957 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702957 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dd6619:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar3,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if ((pIVar3 != (Il2CppObject *)0x0) && (pIVar4 != (Il2CppObject *)0x0)) {
        pIVar1 = pIVar3[3].klass;
        fVar5 = *(float *)&pIVar3[3].monitor;
        pIVar2 = pIVar4[3].klass;
        fVar6 = SUB84(pIVar1,0);
        fVar8 = (float)((ulong)pIVar1 >> 0x20);
        uVar9 = 0;
        uVar10 = 0;
        fVar7 = *(float *)&pIVar4[3].monitor;
        fVar12 = SUB84(pIVar2,0);
        fVar13 = (float)((ulong)pIVar2 >> 0x20);
        if (DAT_056fdea6 == '\0') {
          uStack_30 = 0;
          uStack_20 = 0;
          local_48 = *(float *)&pIVar4[3].monitor;
          local_38 = pIVar1;
          local_28 = pIVar2;
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fdea6 = '\x01';
          fVar6 = (float)local_38;
          fVar8 = local_38._4_4_;
          uVar9 = (undefined4)uStack_30;
          uVar10 = uStack_30._4_4_;
          fVar7 = local_48;
          fVar12 = (float)local_28;
          fVar13 = local_28._4_4_;
        }
        fVar5 = fVar5 - fVar7;
        fVar7 = fVar8 - fVar13;
        fVar11 = fVar6 - fVar12;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          local_38 = (Il2CppClass *)CONCAT44(fVar8,fVar8 - fVar13);
          uStack_30 = CONCAT44(uVar10,uVar9);
          local_48 = fVar6 - fVar12;
          fStack_44 = fVar8;
          uStack_40 = uVar9;
          uStack_3c = uVar10;
          il2cpp_init_class();
          fVar7 = (float)local_38;
          fVar11 = local_48;
        }
        local_4c = fVar5 * fVar5 + fVar7 * fVar7 + fVar11 * fVar11;
        if (local_4c < 0.0) {
          local_4c = sqrtf(local_4c);
        }
        else {
          local_4c = SQRT(local_4c);
        }
        pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_4c);
        return pIVar3;
      }
      goto LAB_03dd6619;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Dot>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Dot_b__22_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd6630

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__Dot>b__22_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  float local_1c;
  
  if (DAT_05702958 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702958 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dd671a:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if ((pIVar1 != (Il2CppObject *)0x0) && (pIVar2 != (Il2CppObject *)0x0)) {
        local_1c = *(float *)&pIVar1[3].monitor * *(float *)&pIVar2[3].monitor +
                   (float)((ulong)pIVar2[3].klass >> 0x20) * (float)((ulong)pIVar1[3].klass >> 0x20)
                   + SUB84(pIVar1[3].klass,0) * SUB84(pIVar2[3].klass,0);
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_1c);
        return pIVar1;
      }
      goto LAB_03dd671a;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Lerp_b__23_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd6730

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__Lerp>b__23_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_38;
  
  if (DAT_05702959 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702959 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar4 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar4,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if ((pIVar4 != (Il2CppObject *)0x0) && (pIVar5 != (Il2CppObject *)0x0)) {
            fVar8 = SUB84(pIVar4[3].klass,0);
            fVar9 = (float)((ulong)pIVar4[3].klass >> 0x20);
            fVar1 = *(float *)&pIVar4[3].monitor;
            pIVar3 = pIVar5[3].klass;
            fVar2 = *(float *)&pIVar5[3].monitor;
            fVar7 = 1.0;
            if (fVar6 <= 1.0) {
              fVar7 = fVar6;
            }
            fVar7 = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar7);
            if (DAT_0570291b == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
              DAT_0570291b = '\x01';
            }
            __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
            if (DAT_05702910 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
              DAT_05702910 = '\x01';
            }
            local_38 = (CustomLogic_BuiltinClassInstance_c *)
                       CONCAT44(fVar9 + fVar7 * ((float)((ulong)pIVar3 >> 0x20) - fVar9),
                                fVar8 + fVar7 * (SUB84(pIVar3,0) - fVar8));
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              il2cpp_init_class();
            }
            CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
            __this_00[1].klass = local_38;
            *(float *)&__this_00[1].monitor = fVar1 + fVar7 * (fVar2 - fVar1);
            return (Il2CppObject *)__this_00;
          }
          goto LAB_03dd6932;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03dd6932:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__LerpUnclamped>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__24_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd6940

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__LerpUnclamped>b__24_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_38;
  
  if (DAT_0570295a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570295a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar4 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar4,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if ((pIVar4 != (Il2CppObject *)0x0) && (pIVar5 != (Il2CppObject *)0x0)) {
            fVar7 = SUB84(pIVar4[3].klass,0);
            fVar8 = (float)((ulong)pIVar4[3].klass >> 0x20);
            fVar1 = *(float *)&pIVar4[3].monitor;
            pIVar3 = pIVar5[3].klass;
            fVar2 = *(float *)&pIVar5[3].monitor;
            if (DAT_0570291b == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
              DAT_0570291b = '\x01';
            }
            __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
            if (DAT_05702910 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
              DAT_05702910 = '\x01';
            }
            local_38 = (CustomLogic_BuiltinClassInstance_c *)
                       CONCAT44(fVar8 + fVar6 * ((float)((ulong)pIVar3 >> 0x20) - fVar8),
                                fVar7 + fVar6 * (SUB84(pIVar3,0) - fVar7));
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              il2cpp_init_class();
            }
            CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
            __this_00[1].klass = local_38;
            *(float *)&__this_00[1].monitor = fVar1 + fVar6 * (fVar2 - fVar1);
            return (Il2CppObject *)__this_00;
          }
          goto LAB_03dd6b2b;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03dd6b2b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Max>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Max_b__25_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd6b30

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__Max>b__25_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 local_38 [16];
  
  if (DAT_0570295b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570295b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dd6c92:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar3 != (Il2CppObject *)0x0)) {
        local_38._8_8_ = 0;
        local_38._0_8_ = pIVar2[3].klass;
        pIVar1 = pIVar3[3].klass;
        fVar4 = *(float *)&pIVar2[3].monitor;
        if (*(float *)&pIVar2[3].monitor <= *(float *)&pIVar3[3].monitor) {
          fVar4 = *(float *)&pIVar3[3].monitor;
        }
        if (DAT_0570291b == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
          DAT_0570291b = '\x01';
        }
        __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
        if (DAT_05702910 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
          DAT_05702910 = '\x01';
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = pIVar1;
        auVar5 = maxps(local_38,auVar5);
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_init_class();
        }
        CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
        local_38._0_8_ = auVar5._0_8_;
        __this_00[1].klass = (CustomLogic_BuiltinClassInstance_c *)local_38._0_8_;
        *(float *)&__this_00[1].monitor = fVar4;
        return (Il2CppObject *)__this_00;
      }
      goto LAB_03dd6c92;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Min>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Min_b__26_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd6ca0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__Min>b__26_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 local_38 [16];
  
  if (DAT_0570295c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570295c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dd6e02:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar3 != (Il2CppObject *)0x0)) {
        local_38._8_8_ = 0;
        local_38._0_8_ = pIVar2[3].klass;
        pIVar1 = pIVar3[3].klass;
        fVar4 = *(float *)&pIVar2[3].monitor;
        if (*(float *)&pIVar3[3].monitor <= *(float *)&pIVar2[3].monitor) {
          fVar4 = *(float *)&pIVar3[3].monitor;
        }
        if (DAT_0570291b == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
          DAT_0570291b = '\x01';
        }
        __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
        if (DAT_05702910 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
          DAT_05702910 = '\x01';
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = pIVar1;
        auVar5 = minps(local_38,auVar5);
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_init_class();
        }
        CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
        local_38._0_8_ = auVar5._0_8_;
        __this_00[1].klass = (CustomLogic_BuiltinClassInstance_c *)local_38._0_8_;
        *(float *)&__this_00[1].monitor = fVar4;
        return (Il2CppObject *)__this_00;
      }
      goto LAB_03dd6e02;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__MoveTowards>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__MoveTowards_b__27_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd6e10

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__MoveTowards>b__27_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *target;
  MethodInfo *method_00;
  float maxDistanceDelta;
  
  if (DAT_0570295d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570295d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        target = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          maxDistanceDelta =
               CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          pCVar1 = CustomLogic_CustomLogicVector3Builtin__MoveTowards
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


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Normalize>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Normalize_b__28_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd6ed0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__Normalize>b__28_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  MethodInfo *method_00;
  
  if (DAT_0570295e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570295e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV;
      pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                         (obj,(MethodInfo_24AB7B0 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Normalize(pCVar1,method_00);
      return (Il2CppObject *)pCVar1;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__OrthoNormalize>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__OrthoNormalize_b__29_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd6f50

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__OrthoNormalize>b__29_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  
  if (DAT_0570295f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570295f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dd6ff7:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if ((pIVar1 != (Il2CppObject *)0x0) && (pIVar2 != (Il2CppObject *)0x0)) {
        UnityEngine_Vector3__OrthoNormalize
                  ((UnityEngine_Vector3_o *)(pIVar1 + 3),(UnityEngine_Vector3_o *)(pIVar2 + 3),
                   (MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03dd6ff7;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Project>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Project_b__30_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd7010

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__Project>b__30_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  MethodInfo *method_00;
  
  if (DAT_05702960 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702960 = '\x01';
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
    pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      b = (CustomLogic_CustomLogicVector3Builtin_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Project(pCVar1,b,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__ProjectOnPlane>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__ProjectOnPlane_b__31_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd70b0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__ProjectOnPlane>b__31_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *plane;
  MethodInfo *method_00;
  
  if (DAT_05702961 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702961 = '\x01';
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
    pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      plane = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__ProjectOnPlane(pCVar1,plane,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Reflect>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Reflect_b__32_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd7150

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__Reflect>b__32_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_48;
  
  if (DAT_05702962 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702962 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dd732c:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar3,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if ((pIVar3 != (Il2CppObject *)0x0) && (pIVar4 != (Il2CppObject *)0x0)) {
        fVar5 = SUB84(pIVar3[3].klass,0);
        fVar6 = (float)((ulong)pIVar3[3].klass >> 0x20);
        fVar1 = *(float *)&pIVar3[3].monitor;
        fVar8 = SUB84(pIVar4[3].klass,0);
        fVar9 = (float)((ulong)pIVar4[3].klass >> 0x20);
        fVar2 = *(float *)&pIVar4[3].monitor;
        fVar7 = (fVar1 * fVar2 + fVar9 * fVar6 + fVar5 * fVar8) * -2.0;
        if (DAT_0570291b == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
          DAT_0570291b = '\x01';
        }
        __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
        if (DAT_05702910 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
          DAT_05702910 = '\x01';
        }
        local_48 = (CustomLogic_BuiltinClassInstance_c *)
                   CONCAT44(fVar6 + fVar9 * fVar7,fVar5 + fVar8 * fVar7);
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_init_class();
        }
        CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
        __this_00[1].klass = local_48;
        *(float *)&__this_00[1].monitor = fVar1 + fVar2 * fVar7;
        return (Il2CppObject *)__this_00;
      }
      goto LAB_03dd732c;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__RotateTowards>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__RotateTowards_b__33_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd7340

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__RotateTowards>b__33_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *target;
  MethodInfo *method_00;
  float maxRadiansDelta;
  float maxMagnitudeDelta;
  
  if (DAT_05702963 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702963 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        target = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          maxRadiansDelta =
               CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if (3 < (uint)__a->max_length) {
            maxMagnitudeDelta =
                 CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[3],MethodInfo_Single_ConvertTo_Single);
            pCVar1 = CustomLogic_CustomLogicVector3Builtin__RotateTowards
                               (pCVar1,target,maxRadiansDelta,maxMagnitudeDelta,method_00);
            return (Il2CppObject *)pCVar1;
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


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__SignedAngle>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__SignedAngle_b__34_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd7440

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__SignedAngle>b__34_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_24 [4];
  
  if (DAT_05702964 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702964 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[2],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV)
          ;
          if (((pIVar1 != (Il2CppObject *)0x0) && (pIVar2 != (Il2CppObject *)0x0)) &&
             (pIVar3 != (Il2CppObject *)0x0)) {
            il2cpp_glue_03ddae10(pIVar1[3].klass,*(undefined4 *)&pIVar1[3].monitor,pIVar2[3].klass,
                         *(undefined4 *)&pIVar2[3].monitor,pIVar3[3].klass,
                         *(undefined4 *)&pIVar3[3].monitor,0);
            pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,local_24);
            return pIVar1;
          }
          goto LAB_03dd7544;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03dd7544:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Slerp>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Slerp_b__35_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd7550

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__Slerp>b__35_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  MethodInfo *method_00;
  float t;
  
  if (DAT_05702965 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702965 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        b = (CustomLogic_CustomLogicVector3Builtin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          pCVar1 = CustomLogic_CustomLogicVector3Builtin__Slerp(pCVar1,b,t,method_00);
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


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__SlerpUnclamped>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__SlerpUnclamped_b__36_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd7610

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__SlerpUnclamped>b__36_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  MethodInfo *method_00;
  float t;
  
  if (DAT_05702966 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702966 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        b = (CustomLogic_CustomLogicVector3Builtin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          pCVar1 = CustomLogic_CustomLogicVector3Builtin__SlerpUnclamped(pCVar1,b,t,method_00);
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


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__SmoothDamp>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__SmoothDamp_b__37_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd76d0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__SmoothDamp>b__37_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *target;
  CustomLogic_CustomLogicVector3Builtin_o *currentVelocity;
  float smoothTime;
  float maxSpeed;
  
  if (DAT_05702967 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702967 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        target = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          currentVelocity =
               (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[2],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
          if (3 < (uint)__a->max_length) {
            smoothTime = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                                   (__a->m_Items[3],MethodInfo_Single_ConvertTo_Single);
            if (4 < (uint)__a->max_length) {
              maxSpeed = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                                   (__a->m_Items[4],MethodInfo_Single_ConvertTo_Single);
              pCVar1 = CustomLogic_CustomLogicVector3Builtin__SmoothDamp
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


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Set>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Set_b__38_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd77f0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__Set>b__38_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (DAT_05702968 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702968 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
      if (1 < (uint)__a->max_length) {
        fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
        if (2 < (uint)__a->max_length) {
          fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
            (__c->fields).Value.fields.x = fVar1;
            (__c->fields).Value.fields.y = fVar2;
            (__c->fields).Value.fields.z = fVar3;
            return (Il2CppObject *)0x0;
          }
          goto LAB_03dd78ce;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03dd78ce:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Scale>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Scale_b__39_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd78e0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__Scale>b__39_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this = (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *)0x0;
    if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Scale(__c,__a->m_Items[0],(MethodInfo *)__a);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Multiply>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Multiply_b__40_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd7910

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__Multiply>b__40_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  MethodInfo *method_00;
  
  if (DAT_05702969 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702969 = '\x01';
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
    pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      b = (CustomLogic_CustomLogicVector3Builtin_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Multiply(pCVar1,b,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Divide>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Divide_b__41_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd79b0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__Divide>b__41_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  MethodInfo *method_00;
  
  if (DAT_0570296a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570296a = '\x01';
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
    pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      b = (CustomLogic_CustomLogicVector3Builtin_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Divide(pCVar1,b,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__GetRotationDirection>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__GetRotationDirection_b__42_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd7a50

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding__GetRotationDirection>b__42_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  MethodInfo *method_00;
  
  if (DAT_0570296b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570296b = '\x01';
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
    pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      b = (CustomLogic_CustomLogicVector3Builtin_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__GetRotationDirection(pCVar1,b,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Copy___b__43_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd7af0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding____Copy__>b__43_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  CustomLogic_BuiltinClassInstance_c *pCVar2;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  
  if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    if (DAT_05702915 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_05702915 = '\x01';
    }
    pCVar2 = *(CustomLogic_BuiltinClassInstance_c **)&(__c->fields).Value.fields;
    fVar1 = (__c->fields).Value.fields.z;
    __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
    __this_00[1].klass = pCVar2;
    *(float *)&__this_00[1].monitor = fVar1;
    return (Il2CppObject *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Add__>b__44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Add___b__44_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd7b90

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding____Add__>b__44_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicVector3Builtin____Add__
                         ((CustomLogic_CustomLogicVector3Builtin_o *)__this,__a->m_Items[0],
                          __a->m_Items[1],method);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Sub__>b__45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Sub___b__45_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd7bc0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding____Sub__>b__45_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicVector3Builtin____Sub__
                         ((CustomLogic_CustomLogicVector3Builtin_o *)__this,__a->m_Items[0],
                          __a->m_Items[1],method);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Mul___b__46_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd7bf0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding____Mul__>b__46_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicVector3Builtin____Mul__
                         ((CustomLogic_CustomLogicVector3Builtin_o *)__this,__a->m_Items[0],
                          __a->m_Items[1],method);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Div__>b__47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Div___b__47_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd7c20

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding____Div__>b__47_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicVector3Builtin____Div__
                         ((CustomLogic_CustomLogicVector3Builtin_o *)__this,__a->m_Items[0],
                          __a->m_Items[1],method);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Eq___b__48_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd7c50

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding____Eq__>b__48_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  undefined8 in_RAX;
  Il2CppObject *pIVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_18;
  
  if (__a == (System_Object_array *)0x0) {
LAB_03dd7d50:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar4 = (int)__a->max_length;
  if ((iVar4 == 1) || (iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (__c == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) goto LAB_03dd7d50;
  pIVar6 = __a->m_Items[1];
  uStack_18 = in_RAX;
  if (DAT_0570291a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291a = '\x01';
  }
  if (pIVar6 != (Il2CppObject *)0x0) {
    bVar3 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
    if (bVar3 <= (pIVar6->klass->_2).naturalAligment) {
      bVar5 = false;
      if ((pIVar6->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicVector3Builtin) {
        if (pIVar6 == (Il2CppObject *)0x0) goto LAB_03dd7d50;
        uVar1 = (__c->fields).Value.fields.x;
        uVar2 = (__c->fields).Value.fields.y;
        fVar7 = (float)uVar2 - (float)((ulong)pIVar6[3].klass >> 0x20);
        fVar8 = (__c->fields).Value.fields.z - *(float *)&pIVar6[3].monitor;
        fVar9 = (float)uVar1 - SUB84(pIVar6[3].klass,0);
        bVar5 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8 < 9.9999994e-11;
      }
      goto LAB_03dd7d2a;
    }
  }
  bVar5 = false;
LAB_03dd7d2a:
  uStack_18 = CONCAT17(bVar5,(undefined7)uStack_18);
  pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
  return pIVar6;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Hash___b__49_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd7d60

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_<>c__<__CreateMethodBinding____Hash__>b__49_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  int32_t iVar3;
  Il2CppObject *pIVar4;
  float in_XMM0_Da;
  float __this_00;
  float __this_01;
  uint uStack_1c;
  
  if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    uVar1 = System_Single__GetHashCode(in_XMM0_Da,(MethodInfo *)&(__c->fields).Value);
    iVar2 = System_Single__GetHashCode(__this_00,(MethodInfo *)&(__c->fields).Value.fields.y);
    iVar3 = System_Single__GetHashCode(__this_01,(MethodInfo *)&(__c->fields).Value.fields.z);
    uStack_1c = iVar3 >> 2 ^ iVar2 << 2 ^ uVar1;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_1c);
    return pIVar4;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicVector3Builtin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3dd0f60

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicVector3Builtin_Bindings__CreateMemberBinding
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
  
  if (DAT_0570291e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"__Sub__");
    il2cpp_init_method_metadata(&"Scale");
    il2cpp_init_method_metadata(&"__Copy__");
    il2cpp_init_method_metadata(&"Right");
    il2cpp_init_method_metadata(&"Z");
    il2cpp_init_method_metadata(&"Slerp");
    il2cpp_init_method_metadata(&"Normalize");
    il2cpp_init_method_metadata(&"Down");
    il2cpp_init_method_metadata(&"SignedAngle");
    il2cpp_init_method_metadata(&"GetRotationDirection");
    il2cpp_init_method_metadata(&"__Eq__");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"__Hash__");
    il2cpp_init_method_metadata(&"Lerp");
    il2cpp_init_method_metadata(&"Reflect");
    il2cpp_init_method_metadata(&"OrthoNormalize");
    il2cpp_init_method_metadata(&"Max");
    il2cpp_init_method_metadata(&"SmoothDamp");
    il2cpp_init_method_metadata(&"Multiply");
    il2cpp_init_method_metadata(&"Divide");
    il2cpp_init_method_metadata(&"LerpUnclamped");
    il2cpp_init_method_metadata(&"Project");
    il2cpp_init_method_metadata(&"Forward");
    il2cpp_init_method_metadata(&"MoveTowards");
    il2cpp_init_method_metadata(&"Set");
    il2cpp_init_method_metadata(&"Dot");
    il2cpp_init_method_metadata(&"Distance");
    il2cpp_init_method_metadata(&"__Div__");
    il2cpp_init_method_metadata(&"One");
    il2cpp_init_method_metadata(&"SqrMagnitude");
    il2cpp_init_method_metadata(&"ClampMagnitude");
    il2cpp_init_method_metadata(&"Up");
    il2cpp_init_method_metadata(&"Cross");
    il2cpp_init_method_metadata(&"PositiveInfinity");
    il2cpp_init_method_metadata(&"Left");
    il2cpp_init_method_metadata(&"Min");
    il2cpp_init_method_metadata(&"Magnitude");
    il2cpp_init_method_metadata(&"Y");
    il2cpp_init_method_metadata(&"__Mul__");
    il2cpp_init_method_metadata(&"NegativeInfinity");
    il2cpp_init_method_metadata(&"SlerpUnclamped");
    il2cpp_init_method_metadata(&"X");
    il2cpp_init_method_metadata(&"__Add__");
    il2cpp_init_method_metadata(&"RotateTowards");
    il2cpp_init_method_metadata(&"Zero");
    il2cpp_init_method_metadata(&"ProjectOnPlane");
    il2cpp_init_method_metadata(&"Normalized");
    il2cpp_init_method_metadata(&"Angle");
    DAT_0570291e = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x7b5fea5f) {
    if (uVar3 < 0x39907618) {
      if (uVar3 < 0x1e9e9f86) {
        if (uVar3 < 0x18c37b42) {
          if (uVar3 == 0xb9c3383) {
            bVar4 = System_String__op_Equality(name,"Zero",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702925 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Zero_g____gette);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
                DAT_05702925 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
              System_Func<object__object>___ctor();
              pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar9;
            }
          }
          else if (uVar3 == 0xdc1f3cc) {
            bVar4 = System_String__op_Equality(name,"__Add__",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702949 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
                il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Add___b__44_0);
                il2cpp_init_method_metadata(&TypeInfo_c);
                DAT_05702949 = '\x01';
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_init_class();
                pSVar10 = *(System_Func_T__object____object__o **)
                           (*(long *)(TypeInfo_c + 0xb8) + 0xd8);
              }
              else {
                pSVar10 = *(System_Func_T__object____object__o **)
                           (*(long *)(TypeInfo_c + 0xb8) + 0xd8);
              }
              if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
                System_Func<object__object__object>___ctor();
                lVar2 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_T__object____object__o **)(lVar2 + 0xd8) = pSVar10;
                il2cpp_runtime_glue(lVar2 + 0xd8,pSVar10);
              }
              pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
              CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar11;
            }
          }
          else if ((uVar3 == 0x18c37b41) &&
                  (bVar4 = System_String__op_Equality(name,"__Mul__",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570294b == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Mul___b__46_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_0570294b = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xe8);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xe8);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xe8) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0xe8,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 == 0x1cb1b18f) {
          bVar4 = System_String__op_Equality(name,"One",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702926 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__One_g____getter);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
              DAT_05702926 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
            System_Func<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x1e7a6f6f) {
          bVar4 = System_String__op_Equality(name,"ProjectOnPlane",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570293c == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ProjectOnPlane_b);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_0570293c = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x70);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x70);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x70,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x1e9e9f85) &&
                (bVar4 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570292a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Right_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
            DAT_0570292a = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 < 0x28b19ea4) {
        if (uVar3 == 0x21ed379a) {
          bVar4 = System_String__op_Equality(name,"ClampMagnitude",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702930 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClampMagnitude_b);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702930 = '\x01';
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
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 == 0x28528e11) {
          bVar4 = System_String__op_Equality(name,"Scale",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702944 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Scale_b__39_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702944 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xb0);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xb0);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xb0) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0xb0,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x28b19ea3) &&
                (bVar4 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702943 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Set_b__38_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702943 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xa8);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xa8);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xa8,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x2e9445f7) {
        bVar4 = System_String__op_Equality(name,"Min",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702937 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Min_b__26_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702937 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x48);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x48);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x48,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x386d9fc0) {
        bVar4 = System_String__op_Equality(name,"Dot",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702933 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Dot_b__22_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702933 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x28);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x28);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x39907617) &&
              (bVar4 = System_String__op_Equality(name,"Slerp",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702940 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Slerp_b__35_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702940 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x90) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x90,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x441a7ddf) {
      if (uVar3 < 0x3ca7e3ba) {
        if (uVar3 == 0x39c493b8) {
          bVar4 = System_String__op_Equality(name,"Angle",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570292f == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Angle_b__18_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_0570292f = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8)
              ;
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8)
              ;
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 8,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 == 0x3c0ea91a) {
          bVar4 = System_String__op_Equality(name,"RotateTowards",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570293e == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RotateTowards_b);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_0570293e = '\x01';
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
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x80,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x3ca7e3b9) &&
                (bVar4 = System_String__op_Equality(name,"Max",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702936 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Max_b__25_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702936 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x40);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x40);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x40,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x42f35940) {
        bVar4 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702927 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Up_g____getter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
            DAT_05702927 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x434cfcb8) {
        bVar4 = System_String__op_Equality(name,"Normalized",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702922 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Normalized_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
            DAT_05702922 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x441a7dde) &&
              (bVar4 = System_String__op_Equality(name,"GetRotationDirection",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702947 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetRotationDirect);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702947 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 200);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 200);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 200) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 200,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x6a4c91d7) {
      if (uVar3 == 0x4adde30c) {
        bVar4 = System_String__op_Equality(name,"Normalize",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702939 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Normalize_b__28_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702939 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x58);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x58);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x58,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x549f4d10) {
        bVar4 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702948 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Copy___b__43_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702948 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xd0);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xd0);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xd0) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xd0,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x6a4c91d6) &&
              (bVar4 = System_String__op_Equality(name,"SlerpUnclamped",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702941 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SlerpUnclamped_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702941 = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x98) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x98,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x74ee9015) {
      bVar4 = System_String__op_Equality(name,"SmoothDamp",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702942 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SmoothDamp_b__37);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702942 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0xa0,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x792a6491) {
      bVar4 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570294e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Hash___b__49_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570294e = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x100)
          ;
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x100)
          ;
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x100) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x100,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0x7b5fea5e) &&
            (bVar4 = System_String__op_Equality(name,"Project",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570293b == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Project_b__30_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_0570293b = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x68,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xc370544b) {
    if (uVar3 < 0xa4995036) {
      if (uVar3 < 0x91efe6d8) {
        if (uVar3 == 0x91efe6d7) {
          bVar4 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570294d == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Eq___b__48_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_0570294d = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xf8);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xf8);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xf8) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0xf8,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 == 0x7bdb45c1) {
          bVar4 = System_String__op_Equality(name,"SqrMagnitude",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702924 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SqrMagnitude_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
              DAT_05702924 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
            System_Func<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x7d671990) &&
                (bVar4 = System_String__op_Equality(name,"Divide",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702946 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Divide_b__41_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702946 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xc0);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xc0);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xc0) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xc0,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x92773890) {
        bVar4 = System_String__op_Equality(name,"Left",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702929 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Left_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
            DAT_05702929 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x9e956088) {
        bVar4 = System_String__op_Equality(name,"Lerp",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702934 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Lerp_b__23_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702934 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x30);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x30);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x30,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0xa4995035) &&
              (bVar4 = System_String__op_Equality(name,"Down",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702928 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Down_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
          DAT_05702928 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0xb127a616) {
      if (uVar3 == 0xa734d965) {
        bVar4 = System_String__op_Equality(name,"Multiply",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702945 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Multiply_b__40_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702945 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xb8);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xb8);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xb8) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xb8,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0xacfe0068) {
        bVar4 = System_String__op_Equality(name,"MoveTowards",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702938 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveTowards_b__27);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702938 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x50);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x50);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x50,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0xb127a615) &&
              (bVar4 = System_String__op_Equality(name,"Magnitude",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702923 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Magnitude_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
          DAT_05702923 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xb663d53b) {
      bVar4 = System_String__op_Equality(name,"Cross",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702931 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Cross_b__20_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702931 = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xc2954bc2) {
      bVar4 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570292c == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Back_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
          DAT_0570292c = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xc370544a) &&
            (bVar4 = System_String__op_Equality(name,"Reflect",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570293d == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Reflect_b__32_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_0570293d = '\x01';
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x78,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xdd0c1e28) {
    if (uVar3 < 0xd7cecb56) {
      if (uVar3 == 0xd3d96082) {
        bVar4 = System_String__op_Equality(name,"Distance",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702932 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Distance_b__21_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702932 = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0xd6c0fe1a) {
        bVar4 = System_String__op_Equality(name,"PositiveInfinity",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570292e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PositiveInfinit);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
            DAT_0570292e = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0xd7cecb55) &&
              (bVar4 = System_String__op_Equality(name,"__Sub__",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570294a == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Sub___b__45_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570294a = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe0);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe0);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0xe0) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0xe0,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xd80ed56c) {
      bVar4 = System_String__op_Equality(name,"OrthoNormalize",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570293a == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__OrthoNormalize_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570293a = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x60,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xdc0c1c94) {
      bVar4 = System_String__op_Equality(name,"Y",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702920 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVector3Builtin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Y_g____getter_3);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Y_g____setter_3_1);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
          DAT_05702920 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
        System_Func<object__object>___ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVector3Builtin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar8,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xdd0c1e27) &&
            (bVar4 = System_String__op_Equality(name,"X",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570291f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVector3Builtin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__X_g____getter_2);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__X_g____setter_2_1);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
        DAT_0570291f = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
      System_Func<object__object>___ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVector3Builtin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar8,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xe0993adb) {
    if (uVar3 == 0xdf0c214d) {
      bVar4 = System_String__op_Equality(name,"Z",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702921 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVector3Builtin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Z_g____getter_4);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Z_g____setter_4_1);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
          DAT_05702921 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
        System_Func<object__object>___ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVector3Builtin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar8,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xdfeb0948) {
      bVar4 = System_String__op_Equality(name,"SignedAngle",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570293f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SignedAngle_b__34);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570293f = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x88) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x88,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0xe0993ada) &&
            (bVar4 = System_String__op_Equality(name,"NegativeInfinity",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570292d == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NegativeInfinit);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
        DAT_0570292d = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
      System_Func<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xe50883ba) {
    bVar4 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570292b == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Forward_g____ge);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
        DAT_0570292b = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
      System_Func<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xf4248f7b) {
    bVar4 = System_String__op_Equality(name,"LerpUnclamped",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702935 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LerpUnclamped_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702935 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x38,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if ((uVar3 == 0xff76b6dc) &&
          (bVar4 = System_String__op_Equality(name,"__Div__",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570294c == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Div___b__47_0);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_0570294c = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf0);
    }
    else {
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf0);
    }
    if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0xf0) = pSVar10;
      il2cpp_runtime_glue(lVar2 + 0xf0,pSVar10);
    }
    pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicVector3Builtin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__X
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__X (const MethodInfo* method);
// 0x3dd20f0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__X(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570291f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVector3Builtin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__X_g____getter_2);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__X_g____setter_2_1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
    DAT_0570291f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVector3Builtin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Y
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Y (const MethodInfo* method);
// 0x3dd21d0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Y(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702920 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVector3Builtin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Y_g____getter_3);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Y_g____setter_3_1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
    DAT_05702920 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVector3Builtin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Z
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Z (const MethodInfo* method);
// 0x3dd22b0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Z(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702921 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVector3Builtin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Z_g____getter_4);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Z_g____setter_4_1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
    DAT_05702921 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVector3Builtin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Normalized
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Normalized (const MethodInfo* method);
// 0x3dd2390

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Normalized
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702922 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Normalized_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
    DAT_05702922 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Magnitude
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Magnitude (const MethodInfo* method);
// 0x3dd2430

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Magnitude
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702923 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Magnitude_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
    DAT_05702923 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__SqrMagnitude
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__SqrMagnitude (const MethodInfo* method);
// 0x3dd24d0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__SqrMagnitude
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702924 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SqrMagnitude_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
    DAT_05702924 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Zero
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Zero (const MethodInfo* method);
// 0x3dd2570

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Zero(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702925 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Zero_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
    DAT_05702925 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__One
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__One (const MethodInfo* method);
// 0x3dd2610

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__One(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702926 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__One_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
    DAT_05702926 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x3dd26b0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702927 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Up_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
    DAT_05702927 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Down
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Down (const MethodInfo* method);
// 0x3dd2750

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Down(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702928 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Down_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
    DAT_05702928 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Left
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Left (const MethodInfo* method);
// 0x3dd27f0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Left(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702929 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Left_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
    DAT_05702929 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x3dd2890

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570292a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Right_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
    DAT_0570292a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x3dd2930

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Forward(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570292b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Forward_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
    DAT_0570292b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Back
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Back (const MethodInfo* method);
// 0x3dd29d0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Back(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570292c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Back_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
    DAT_0570292c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__NegativeInfinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__NegativeInfinity (const MethodInfo* method);
// 0x3dd2a70

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__NegativeInfinity
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570292d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NegativeInfinit);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
    DAT_0570292d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__PositiveInfinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__PositiveInfinity (const MethodInfo* method);
// 0x3dd2b10

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__PositiveInfinity
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570292e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PositiveInfinit);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object);
    DAT_0570292e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Angle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Angle (const MethodInfo* method);
// 0x3dd2bb0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Angle(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570292f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Angle_b__18_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570292f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__ClampMagnitude
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__ClampMagnitude (const MethodInfo* method);
// 0x3dd2d00

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__ClampMagnitude
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702930 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClampMagnitude_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702930 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Cross
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Cross (const MethodInfo* method);
// 0x3dd2e50

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Cross(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702931 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Cross_b__20_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702931 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Distance
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Distance (const MethodInfo* method);
// 0x3dd2fa0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Distance(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702932 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Distance_b__21_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702932 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Dot
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Dot (const MethodInfo* method);
// 0x3dd30f0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Dot(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702933 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Dot_b__22_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702933 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Lerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Lerp (const MethodInfo* method);
// 0x3dd3240

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Lerp(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702934 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Lerp_b__23_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702934 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__LerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__LerpUnclamped (const MethodInfo* method);
// 0x3dd3390

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__LerpUnclamped
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702935 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LerpUnclamped_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702935 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Max
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Max (const MethodInfo* method);
// 0x3dd34e0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Max(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702936 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Max_b__25_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702936 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Min
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Min (const MethodInfo* method);
// 0x3dd3630

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Min(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702937 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Min_b__26_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702937 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__MoveTowards
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__MoveTowards (const MethodInfo* method);
// 0x3dd3780

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__MoveTowards
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702938 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveTowards_b__27);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702938 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Normalize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Normalize (const MethodInfo* method);
// 0x3dd38d0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Normalize(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702939 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Normalize_b__28_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702939 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__OrthoNormalize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__OrthoNormalize (const MethodInfo* method);
// 0x3dd3a20

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__OrthoNormalize
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570293a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__OrthoNormalize_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570293a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Project
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Project (const MethodInfo* method);
// 0x3dd3b70

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Project(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570293b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Project_b__30_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570293b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__ProjectOnPlane
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__ProjectOnPlane (const MethodInfo* method);
// 0x3dd3cc0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__ProjectOnPlane
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570293c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ProjectOnPlane_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570293c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Reflect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Reflect (const MethodInfo* method);
// 0x3dd3e10

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Reflect(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570293d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Reflect_b__32_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570293d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_glue(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__RotateTowards
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__RotateTowards (const MethodInfo* method);
// 0x3dd3f60

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__RotateTowards
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570293e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RotateTowards_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570293e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_glue(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__SignedAngle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SignedAngle (const MethodInfo* method);
// 0x3dd40b0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SignedAngle
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570293f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SignedAngle_b__34);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570293f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x88) = function;
    il2cpp_runtime_glue(lVar2 + 0x88,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Slerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Slerp (const MethodInfo* method);
// 0x3dd4200

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Slerp(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702940 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Slerp_b__35_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702940 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x90) = function;
    il2cpp_runtime_glue(lVar2 + 0x90,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__SlerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SlerpUnclamped (const MethodInfo* method);
// 0x3dd4350

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SlerpUnclamped
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702941 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SlerpUnclamped_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702941 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x98) = function;
    il2cpp_runtime_glue(lVar2 + 0x98,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__SmoothDamp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SmoothDamp (const MethodInfo* method);
// 0x3dd44a0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SmoothDamp
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702942 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SmoothDamp_b__37);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702942 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = function;
    il2cpp_runtime_glue(lVar2 + 0xa0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x3dd45f0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702943 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Set_b__38_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702943 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = function;
    il2cpp_runtime_glue(lVar2 + 0xa8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Scale
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Scale (const MethodInfo* method);
// 0x3dd4740

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Scale(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702944 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Scale_b__39_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702944 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xb0) = function;
    il2cpp_runtime_glue(lVar2 + 0xb0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Multiply
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Multiply (const MethodInfo* method);
// 0x3dd4890

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Multiply(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702945 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Multiply_b__40_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702945 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xb8) = function;
    il2cpp_runtime_glue(lVar2 + 0xb8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Divide
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Divide (const MethodInfo* method);
// 0x3dd49e0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Divide(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702946 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Divide_b__41_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702946 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xc0) = function;
    il2cpp_runtime_glue(lVar2 + 0xc0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__GetRotationDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__GetRotationDirection (const MethodInfo* method);
// 0x3dd4b30

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__GetRotationDirection
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702947 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetRotationDirect);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702947 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 200) = function;
    il2cpp_runtime_glue(lVar2 + 200,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x3dd4c80

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702948 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Copy___b__43_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702948 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xd0) = function;
    il2cpp_runtime_glue(lVar2 + 0xd0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Add__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Add__ (const MethodInfo* method);
// 0x3dd4dd0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Add__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_05702949 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Add___b__44_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702949 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xd8) = function;
    il2cpp_runtime_glue(lVar2 + 0xd8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Sub__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Sub__ (const MethodInfo* method);
// 0x3dd4f20

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Sub__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570294a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Sub___b__45_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570294a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xe0) = function;
    il2cpp_runtime_glue(lVar2 + 0xe0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Mul__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Mul__ (const MethodInfo* method);
// 0x3dd5070

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Mul__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570294b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Mul___b__46_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570294b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xe8) = function;
    il2cpp_runtime_glue(lVar2 + 0xe8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Div__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Div__ (const MethodInfo* method);
// 0x3dd51c0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Div__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570294c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Div___b__47_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570294c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xf0) = function;
    il2cpp_runtime_glue(lVar2 + 0xf0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x3dd5310

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570294d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Eq___b__48_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570294d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xf8) = function;
    il2cpp_runtime_glue(lVar2 + 0xf8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x3dd5460

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this;
  
  if (DAT_0570294e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Hash___b__49_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570294e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVector3Builtin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x100) = function;
    il2cpp_runtime_glue(lVar2 + 0x100,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVector3Builtin);
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings___cctor (const MethodInfo* method);
// 0x3dd55b0

void CustomLogic_CustomLogicVector3Builtin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_0570294f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"__Sub__");
    il2cpp_init_method_metadata(&"Scale");
    il2cpp_init_method_metadata(&"__Copy__");
    il2cpp_init_method_metadata(&"Right");
    il2cpp_init_method_metadata(&"Z");
    il2cpp_init_method_metadata(&"Slerp");
    il2cpp_init_method_metadata(&"Normalize");
    il2cpp_init_method_metadata(&"Down");
    il2cpp_init_method_metadata(&"SignedAngle");
    il2cpp_init_method_metadata(&"GetRotationDirection");
    il2cpp_init_method_metadata(&"__Eq__");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"__Hash__");
    il2cpp_init_method_metadata(&"Lerp");
    il2cpp_init_method_metadata(&"Reflect");
    il2cpp_init_method_metadata(&"OrthoNormalize");
    il2cpp_init_method_metadata(&"Max");
    il2cpp_init_method_metadata(&"SmoothDamp");
    il2cpp_init_method_metadata(&"Multiply");
    il2cpp_init_method_metadata(&"Divide");
    il2cpp_init_method_metadata(&"LerpUnclamped");
    il2cpp_init_method_metadata(&"Project");
    il2cpp_init_method_metadata(&"Forward");
    il2cpp_init_method_metadata(&"MoveTowards");
    il2cpp_init_method_metadata(&"Set");
    il2cpp_init_method_metadata(&"Dot");
    il2cpp_init_method_metadata(&"Distance");
    il2cpp_init_method_metadata(&"__Div__");
    il2cpp_init_method_metadata(&"One");
    il2cpp_init_method_metadata(&"SqrMagnitude");
    il2cpp_init_method_metadata(&"ClampMagnitude");
    il2cpp_init_method_metadata(&"Up");
    il2cpp_init_method_metadata(&"Cross");
    il2cpp_init_method_metadata(&"PositiveInfinity");
    il2cpp_init_method_metadata(&"Left");
    il2cpp_init_method_metadata(&"Min");
    il2cpp_init_method_metadata(&"Magnitude");
    il2cpp_init_method_metadata(&"Y");
    il2cpp_init_method_metadata(&"__Mul__");
    il2cpp_init_method_metadata(&"NegativeInfinity");
    il2cpp_init_method_metadata(&"SlerpUnclamped");
    il2cpp_init_method_metadata(&"X");
    il2cpp_init_method_metadata(&"__Add__");
    il2cpp_init_method_metadata(&"RotateTowards");
    il2cpp_init_method_metadata(&"Zero");
    il2cpp_init_method_metadata(&"ProjectOnPlane");
    il2cpp_init_method_metadata(&"Normalized");
    il2cpp_init_method_metadata(&"Angle");
    DAT_0570294f = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"X",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Y",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Z",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Normalized",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Magnitude",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SqrMagnitude",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Zero",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"One",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Up",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Down",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Left",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Right",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Forward",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Back",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"NegativeInfinity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PositiveInfinity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Angle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ClampMagnitude",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Cross",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Distance",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Dot",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Lerp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LerpUnclamped",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Max",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Min",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MoveTowards",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Normalize",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"OrthoNormalize",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Project",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ProjectOnPlane",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Reflect",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RotateTowards",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SignedAngle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Slerp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SlerpUnclamped",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SmoothDamp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Set",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Scale",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Multiply",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Divide",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetRotationDirection",MethodInfo_Boolean_Add);
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


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__X>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__X_g____getter_2_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x3dd5c90

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__X>g____getter_2_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__X>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__X_g____setter_2_1 (CustomLogic_CustomLogicVector3Builtin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dd5cc0

void CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__X>g____setter_2_1
               (CustomLogic_CustomLogicVector3Builtin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (DAT_05702950 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702950 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    (__i->fields).Value.fields.x = fVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Y>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Y_g____getter_3_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x3dd5d40

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__Y>g____getter_3_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Y>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Y_g____setter_3_1 (CustomLogic_CustomLogicVector3Builtin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dd5d70

void CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__Y>g____setter_3_1
               (CustomLogic_CustomLogicVector3Builtin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (DAT_05702951 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702951 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    (__i->fields).Value.fields.y = fVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Z>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Z_g____getter_4_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x3dd5df0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__Z>g____getter_4_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Z>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Z_g____setter_4_1 (CustomLogic_CustomLogicVector3Builtin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dd5e20

void CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__Z>g____setter_4_1
               (CustomLogic_CustomLogicVector3Builtin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (DAT_05702952 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702952 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    (__i->fields).Value.fields.z = fVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Normalized>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Normalized_g____getter_5_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x3dd5ea0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__Normalized>g____getter_5_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Normalized(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Magnitude>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Magnitude_g____getter_6_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x3dd5ec0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__Magnitude>g____getter_6_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
    }
    fVar1 = (__i->fields).Value.fields.x;
    fVar2 = (__i->fields).Value.fields.y;
    fVar3 = (__i->fields).Value.fields.z;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_c = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
    if (local_c < 0.0) {
      local_c = sqrtf(local_c);
    }
    else {
      local_c = SQRT(local_c);
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
    return pIVar4;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__SqrMagnitude>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__SqrMagnitude_g____getter_7_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x3dd5f90

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__SqrMagnitude>g____getter_7_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Zero>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Zero_g____getter_8_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x3dd5fe0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__Zero>g____getter_8_0
          (MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Zero(method);
  return pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__One>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__One_g____getter_9_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x3dd5ff0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__One>g____getter_9_0
          (MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_056fe077 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fe077 = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Up>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x3dd6000

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__Up>g____getter_10_0
          (MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Down>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Down_g____getter_11_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x3dd6010

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__Down>g____getter_11_0
          (MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_0570266b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_0570266b = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Left>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Left_g____getter_12_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x3dd6020

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__Left>g____getter_12_0
          (MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_0570298f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_0570298f = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x30);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x38);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Right>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Right_g____getter_13_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x3dd6030

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__Right>g____getter_13_0
          (MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_0570222a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_0570222a = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Forward_g____getter_14_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x3dd6040

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__Forward>g____getter_14_0
          (MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_056fde21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde21 = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Back>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Back_g____getter_15_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x3dd6050

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__Back>g____getter_15_0
          (MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_057027fd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_057027fd = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x54);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x5c);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__NegativeInfinity>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__NegativeInfinity_g____getter_16_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x3dd6060

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__NegativeInfinity>g____getter_16_0
          (MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_05702990 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_05702990 = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x6c);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x74);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__PositiveInfinity>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__PositiveInfinity_g____getter_17_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x3dd6070

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin_Bindings__<__CreatePropertyBinding__PositiveInfinity>g____getter_17_0
          (MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_05702991 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_05702991 = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x60);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x68);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin___ctor (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x3dcd970

void CustomLogic_CustomLogicVector3Builtin___ctor
               (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  if (DAT_0570290c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_0570290c = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.z = 0.0;
  (__this->fields).Value.fields.x = 0.0;
  (__this->fields).Value.fields.y = 0.0;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin___ctor (CustomLogic_CustomLogicVector3Builtin_o* __this, float xyz, const MethodInfo* method);
// 0x3dcd9d0

void CustomLogic_CustomLogicVector3Builtin___ctor
               (CustomLogic_CustomLogicVector3Builtin_o *__this,float xyz,MethodInfo *method)

{
  if (DAT_0570290d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_0570290d = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = xyz;
  (__this->fields).Value.fields.y = xyz;
  (__this->fields).Value.fields.z = xyz;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin___ctor (CustomLogic_CustomLogicVector3Builtin_o* __this, float x, float y, const MethodInfo* method);
// 0x3dcda40

void CustomLogic_CustomLogicVector3Builtin___ctor
               (CustomLogic_CustomLogicVector3Builtin_o *__this,float x,float y,MethodInfo *method)

{
  if (DAT_0570290e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_0570290e = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = x;
  (__this->fields).Value.fields.y = y;
  (__this->fields).Value.fields.z = 0.0;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin___ctor (CustomLogic_CustomLogicVector3Builtin_o* __this, float x, float y, float z, const MethodInfo* method);
// 0x3dcdac0

void CustomLogic_CustomLogicVector3Builtin___ctor
               (CustomLogic_CustomLogicVector3Builtin_o *__this,float x,float y,float z,
               MethodInfo *method)

{
  if (DAT_0570290f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_0570290f = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = x;
  (__this->fields).Value.fields.y = y;
  (__this->fields).Value.fields.z = z;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin___ctor (CustomLogic_CustomLogicVector3Builtin_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x3dbfcc0

void CustomLogic_CustomLogicVector3Builtin___ctor
               (CustomLogic_CustomLogicVector3Builtin_o *__this,UnityEngine_Vector3_o value,
               MethodInfo *method)

{
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)value.fields._0_8_;
  (__this->fields).Value.fields.y = (float)(int)((ulong)value.fields._0_8_ >> 0x20);
  (__this->fields).Value.fields.z = value.fields.z;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$get_X
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__get_X (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x3dcdb40

float CustomLogic_CustomLogicVector3Builtin__get_X
                (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.x;
}


// CustomLogic.CustomLogicVector3Builtin$$set_X
// il2cpp: void CustomLogic_CustomLogicVector3Builtin__set_X (CustomLogic_CustomLogicVector3Builtin_o* __this, float value, const MethodInfo* method);
// 0x3dcdb50

void CustomLogic_CustomLogicVector3Builtin__set_X
               (CustomLogic_CustomLogicVector3Builtin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.x = value;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Y
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__get_Y (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x3dcdb60

float CustomLogic_CustomLogicVector3Builtin__get_Y
                (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.y;
}


// CustomLogic.CustomLogicVector3Builtin$$set_Y
// il2cpp: void CustomLogic_CustomLogicVector3Builtin__set_Y (CustomLogic_CustomLogicVector3Builtin_o* __this, float value, const MethodInfo* method);
// 0x3dcdb70

void CustomLogic_CustomLogicVector3Builtin__set_Y
               (CustomLogic_CustomLogicVector3Builtin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.y = value;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Z
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__get_Z (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x3dcdb80

float CustomLogic_CustomLogicVector3Builtin__get_Z
                (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.z;
}


// CustomLogic.CustomLogicVector3Builtin$$set_Z
// il2cpp: void CustomLogic_CustomLogicVector3Builtin__set_Z (CustomLogic_CustomLogicVector3Builtin_o* __this, float value, const MethodInfo* method);
// 0x3dcdb90

void CustomLogic_CustomLogicVector3Builtin__set_Z
               (CustomLogic_CustomLogicVector3Builtin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.z = value;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Normalized
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Normalized (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x3dcdba0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_Normalized
          (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  float fVar2;
  undefined4 uVar3;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Dd;
  float fVar5;
  undefined1 auVar7 [16];
  undefined1 local_18 [16];
  undefined8 uVar6;
  
  local_18._0_4_ = (__this->fields).Value.fields.x;
  local_18._4_4_ = (__this->fields).Value.fields.y;
  local_18._8_8_ = 0;
  fVar5 = (__this->fields).Value.fields.z;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  uVar3 = 0;
  uVar4 = 0;
  fVar2 = fVar5 * fVar5 +
          (float)local_18._4_4_ * (float)local_18._4_4_ +
          (float)local_18._0_4_ * (float)local_18._0_4_;
  if (fVar2 < 0.0) {
    fVar2 = sqrtf(fVar2);
    uVar3 = extraout_XMM0_Dc;
    uVar4 = extraout_XMM0_Dd;
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  if (fVar2 <= 1e-05) {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar6 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar5 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar5 = fVar5 / fVar2;
    auVar7._4_4_ = fVar2;
    auVar7._0_4_ = fVar2;
    auVar7._8_4_ = uVar3;
    auVar7._12_4_ = uVar4;
    auVar7 = divps(local_18,auVar7);
    uVar6 = auVar7._0_8_;
  }
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).Value.fields.x = (float)(int)uVar6;
  (__this_00->fields).Value.fields.y = (float)(int)((ulong)uVar6 >> 0x20);
  (__this_00->fields).Value.fields.z = fVar5;
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Magnitude
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__get_Magnitude (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x3dcdd50

float CustomLogic_CustomLogicVector3Builtin__get_Magnitude
                (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  fVar3 = (__this->fields).Value.fields.x;
  uVar1 = (__this->fields).Value.fields.y;
  uVar2 = (__this->fields).Value.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = (float)uVar2 * (float)uVar2 + fVar3 * fVar3 + (float)uVar1 * (float)uVar1;
  if (0.0 <= fVar3) {
    return SQRT(fVar3);
  }
  fVar3 = sqrtf(fVar3);
  return fVar3;
}


// CustomLogic.CustomLogicVector3Builtin$$get_SqrMagnitude
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__get_SqrMagnitude (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x3dcdde0

float CustomLogic_CustomLogicVector3Builtin__get_SqrMagnitude
                (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fVar1 = (__this->fields).Value.fields.x;
  uVar2 = (__this->fields).Value.fields.y;
  uVar3 = (__this->fields).Value.fields.z;
  return (float)uVar3 * (float)uVar3 + fVar1 * fVar1 + (float)uVar2 * (float)uVar2;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Zero
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Zero (const MethodInfo* method);
// 0x3dcde00

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_Zero(MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_One
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_One (const MethodInfo* method);
// 0x3dcdec0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_One(MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_056fe077 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fe077 = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Up (const MethodInfo* method);
// 0x3dcdf80

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_Up(MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Down
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Down (const MethodInfo* method);
// 0x3dce040

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_Down(MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_0570266b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_0570266b = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Left
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Left (const MethodInfo* method);
// 0x3dce100

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_Left(MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_0570298f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_0570298f = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x30);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x38);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Right (const MethodInfo* method);
// 0x3dce1c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_Right(MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_0570222a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_0570222a = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Forward
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Forward (const MethodInfo* method);
// 0x3dce280

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_Forward(MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_056fde21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde21 = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Back
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Back (const MethodInfo* method);
// 0x3dce340

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_Back(MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_057027fd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_057027fd = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x54);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x5c);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_NegativeInfinity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_NegativeInfinity (const MethodInfo* method);
// 0x3dce400

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_NegativeInfinity(MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_05702990 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_05702990 = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x6c);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x74);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_PositiveInfinity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_PositiveInfinity (const MethodInfo* method);
// 0x3dce4c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_PositiveInfinity(MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_05702991 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_05702991 = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x60);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x68);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uVar2;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$Angle
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__Angle (CustomLogic_CustomLogicVector3Builtin_o* from, CustomLogic_CustomLogicVector3Builtin_o* to, const MethodInfo* method);
// 0x3dce580

float CustomLogic_CustomLogicVector3Builtin__Angle
                (CustomLogic_CustomLogicVector3Builtin_o *from,
                CustomLogic_CustomLogicVector3Builtin_o *to,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  MethodInfo *method_00;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((from == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (to == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar2 = (from->fields).Value.fields.x;
  uVar4 = (from->fields).Value.fields.y;
  fVar8 = (from->fields).Value.fields.z;
  uVar3 = (to->fields).Value.fields.x;
  uVar5 = (to->fields).Value.fields.y;
  fVar1 = (to->fields).Value.fields.z;
  if (DAT_0570266a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_0570266a = '\x01';
  }
  fVar7 = fVar8 * fVar8 + (float)uVar4 * (float)uVar4 + (float)uVar2 * (float)uVar2;
  fVar9 = fVar1 * fVar1 + (float)uVar5 * (float)uVar5 + (float)uVar3 * (float)uVar3;
  if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  if (fVar7 * fVar9 < 0.0) {
    fVar7 = sqrtf(fVar7 * fVar9);
    method_00 = TypeInfo_Math;
  }
  else {
    fVar7 = SQRT(fVar7 * fVar9);
    method_00 = TypeInfo_Math;
  }
  if (1e-15 <= fVar7) {
    fVar7 = (fVar8 * fVar1 + (float)uVar5 * (float)uVar4 + (float)uVar3 * (float)uVar2) / fVar7;
    fVar8 = 1.0;
    if (fVar7 <= 1.0) {
      fVar8 = fVar7;
    }
    TypeInfo_Math = method_00;
    if (*(int *)((long)&method_00[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    dVar6 = acos((double)(float)(~-(uint)(-1.0 <= fVar7) & 0xbf800000 |
                                (uint)fVar8 & -(uint)(-1.0 <= fVar7)),method_00);
    return (float)dVar6 * 57.29578;
  }
  TypeInfo_Math = method_00;
  return 0.0;
}


// CustomLogic.CustomLogicVector3Builtin$$ClampMagnitude
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__ClampMagnitude (CustomLogic_CustomLogicVector3Builtin_o* vector, float maxLength, const MethodInfo* method);
// 0x3dce760

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__ClampMagnitude
          (CustomLogic_CustomLogicVector3Builtin_o *vector,float maxLength,MethodInfo *method)

{
  undefined1 auVar1 [16];
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar2;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar3;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  float local_30;
  undefined8 local_18;
  
  if (vector == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  local_18._0_4_ = (vector->fields).Value.fields.x;
  local_18._4_4_ = (vector->fields).Value.fields.y;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_18;
  local_30 = (vector->fields).Value.fields.z;
  if (DAT_056fde1d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1d = '\x01';
  }
  fVar2 = local_30 * local_30 +
          (float)local_18._4_4_ * (float)local_18._4_4_ +
          (float)(undefined4)local_18 * (float)(undefined4)local_18;
  if (fVar2 <= maxLength * maxLength) goto LAB_03dce86d;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    if (fVar2 < 0.0) goto LAB_03dce832;
LAB_03dce7fe:
    uVar4 = 0;
    uVar3 = 0;
    fVar2 = SQRT(fVar2);
  }
  else {
    if (0.0 <= fVar2) goto LAB_03dce7fe;
LAB_03dce832:
    fVar2 = sqrtf(fVar2);
    uVar3 = extraout_XMM0_Dc;
    uVar4 = extraout_XMM0_Dd;
  }
  auVar1._4_4_ = fVar2;
  auVar1._0_4_ = fVar2;
  auVar1._8_4_ = uVar3;
  auVar1._12_4_ = uVar4;
  auVar5 = divps(auVar5,auVar1);
  local_30 = (local_30 / fVar2) * maxLength;
  local_18 = CONCAT44(auVar5._4_4_ * maxLength,auVar5._0_4_ * maxLength);
LAB_03dce86d:
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(undefined4)local_18;
  (__this->fields).Value.fields.y = (float)local_18._4_4_;
  (__this->fields).Value.fields.z = local_30;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$Cross
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Cross (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x3dce900

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Cross
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  undefined8 local_68;
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar3 = (a->fields).Value.fields.x;
    uVar5 = (a->fields).Value.fields.y;
    fVar1 = (a->fields).Value.fields.z;
    uVar4 = (b->fields).Value.fields.x;
    uVar6 = (b->fields).Value.fields.y;
    fVar2 = (b->fields).Value.fields.z;
    if (DAT_0570291b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_0570291b = '\x01';
    }
    __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = (float)uVar5 * fVar2 - fVar1 * (float)uVar6;
    (__this->fields).Value.fields.y = fVar1 * (float)uVar4 - fVar2 * (float)uVar3;
    (__this->fields).Value.fields.z = (float)uVar3 * (float)uVar6 - (float)uVar5 * (float)uVar4;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$Distance
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__Distance (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x3dcea80

float CustomLogic_CustomLogicVector3Builtin__Distance
                (CustomLogic_CustomLogicVector3Builtin_o *a,
                CustomLogic_CustomLogicVector3Builtin_o *b,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar2 = (a->fields).Value.fields.x;
  uVar4 = (a->fields).Value.fields.y;
  fVar6 = (a->fields).Value.fields.z;
  uVar3 = (b->fields).Value.fields.x;
  uVar5 = (b->fields).Value.fields.y;
  fVar1 = (b->fields).Value.fields.z;
  if (DAT_056fdea6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fdea6 = '\x01';
  }
  fVar6 = fVar6 - fVar1;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar6 = ((float)uVar2 - (float)uVar3) * ((float)uVar2 - (float)uVar3) +
          ((float)uVar4 - (float)uVar5) * ((float)uVar4 - (float)uVar5) + fVar6 * fVar6;
  if (0.0 <= fVar6) {
    return SQRT(fVar6);
  }
  fVar6 = sqrtf(fVar6);
  return fVar6;
}


// CustomLogic.CustomLogicVector3Builtin$$Dot
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__Dot (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x3dceb60

float CustomLogic_CustomLogicVector3Builtin__Dot
                (CustomLogic_CustomLogicVector3Builtin_o *a,
                CustomLogic_CustomLogicVector3Builtin_o *b,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1 = (a->fields).Value.fields.x;
    uVar3 = (a->fields).Value.fields.y;
    uVar2 = (b->fields).Value.fields.x;
    uVar4 = (b->fields).Value.fields.y;
    return (a->fields).Value.fields.z * (b->fields).Value.fields.z +
           (float)uVar4 * (float)uVar3 + (float)uVar2 * (float)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$Lerp
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Lerp (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, float t, const MethodInfo* method);
// 0x3dceba0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Lerp
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          float t,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar7;
  undefined8 local_28;
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar3 = (a->fields).Value.fields.x;
    uVar5 = (a->fields).Value.fields.y;
    fVar1 = (a->fields).Value.fields.z;
    uVar4 = (b->fields).Value.fields.x;
    uVar6 = (b->fields).Value.fields.y;
    fVar2 = (b->fields).Value.fields.z;
    fVar7 = 1.0;
    if (t <= 1.0) {
      fVar7 = t;
    }
    fVar7 = (float)(-(uint)(0.0 <= t) & (uint)fVar7);
    if (DAT_0570291b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_0570291b = '\x01';
    }
    __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = (float)uVar3 + fVar7 * ((float)uVar4 - (float)uVar3);
    (__this->fields).Value.fields.y = (float)uVar5 + fVar7 * ((float)uVar6 - (float)uVar5);
    (__this->fields).Value.fields.z = fVar1 + fVar7 * (fVar2 - fVar1);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$LerpUnclamped
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__LerpUnclamped (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, float t, const MethodInfo* method);
// 0x3dcecf0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__LerpUnclamped
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          float t,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  undefined8 local_38;
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar3 = (a->fields).Value.fields.x;
    uVar5 = (a->fields).Value.fields.y;
    fVar1 = (a->fields).Value.fields.z;
    uVar4 = (b->fields).Value.fields.x;
    uVar6 = (b->fields).Value.fields.y;
    fVar2 = (b->fields).Value.fields.z;
    if (DAT_0570291b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_0570291b = '\x01';
    }
    __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = (float)uVar3 + ((float)uVar4 - (float)uVar3) * t;
    (__this->fields).Value.fields.y = (float)uVar5 + ((float)uVar6 - (float)uVar5) * t;
    (__this->fields).Value.fields.z = fVar1 + (fVar2 - fVar1) * t;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$Max
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Max (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x3dcee20

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Max
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 local_28 [16];
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar2 = (a->fields).Value.fields.x;
    uVar4 = (a->fields).Value.fields.y;
    local_28._4_4_ = uVar4;
    local_28._0_4_ = uVar2;
    local_28._8_8_ = 0;
    fVar6 = (a->fields).Value.fields.z;
    uVar3 = (b->fields).Value.fields.x;
    uVar5 = (b->fields).Value.fields.y;
    auVar7._4_4_ = uVar5;
    auVar7._0_4_ = uVar3;
    fVar1 = (b->fields).Value.fields.z;
    if (fVar6 <= fVar1) {
      fVar6 = fVar1;
    }
    if (DAT_0570291b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_0570291b = '\x01';
    }
    __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    auVar7._8_8_ = 0;
    auVar7 = maxps(local_28,auVar7);
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    local_28._0_8_ = auVar7._0_8_;
    (__this->fields).Value.fields.x = (float)local_28._0_4_;
    (__this->fields).Value.fields.y = (float)local_28._4_4_;
    (__this->fields).Value.fields.z = fVar6;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$Min
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Min (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x3dcef00

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Min
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 local_28 [16];
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar2 = (a->fields).Value.fields.x;
    uVar4 = (a->fields).Value.fields.y;
    local_28._4_4_ = uVar4;
    local_28._0_4_ = uVar2;
    local_28._8_8_ = 0;
    fVar6 = (a->fields).Value.fields.z;
    uVar3 = (b->fields).Value.fields.x;
    uVar5 = (b->fields).Value.fields.y;
    auVar7._4_4_ = uVar5;
    auVar7._0_4_ = uVar3;
    fVar1 = (b->fields).Value.fields.z;
    if (fVar1 <= fVar6) {
      fVar6 = fVar1;
    }
    if (DAT_0570291b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_0570291b = '\x01';
    }
    __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    auVar7._8_8_ = 0;
    auVar7 = minps(local_28,auVar7);
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    local_28._0_8_ = auVar7._0_8_;
    (__this->fields).Value.fields.x = (float)local_28._0_4_;
    (__this->fields).Value.fields.y = (float)local_28._4_4_;
    (__this->fields).Value.fields.z = fVar6;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$MoveTowards
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__MoveTowards (CustomLogic_CustomLogicVector3Builtin_o* current, CustomLogic_CustomLogicVector3Builtin_o* target, float maxDistanceDelta, const MethodInfo* method);
// 0x3dcefe0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__MoveTowards
          (CustomLogic_CustomLogicVector3Builtin_o *current,
          CustomLogic_CustomLogicVector3Builtin_o *target,float maxDistanceDelta,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined8 local_48;
  
  if ((current == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (target == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar2 = (current->fields).Value.fields.x;
  uVar4 = (current->fields).Value.fields.y;
  fVar1 = (current->fields).Value.fields.z;
  fVar3 = (target->fields).Value.fields.x;
  fVar5 = (target->fields).Value.fields.y;
  fVar11 = (target->fields).Value.fields.z;
  if (DAT_05702373 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_05702373 = '\x01';
  }
  auVar10._0_4_ = fVar3 - (float)uVar2;
  auVar10._4_4_ = fVar5 - (float)uVar4;
  auVar10._8_8_ = 0;
  fVar12 = fVar11 - fVar1;
  fVar7 = fVar12 * fVar12 + auVar10._4_4_ * auVar10._4_4_ + auVar10._0_4_ * auVar10._0_4_;
  if (((fVar7 == 0.0) && (!NAN(fVar7))) ||
     ((0.0 <= maxDistanceDelta && (fVar7 <= maxDistanceDelta * maxDistanceDelta))))
  goto LAB_03dcf187;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    if (fVar7 < 0.0) goto LAB_03dcf125;
LAB_03dcf0cb:
    uVar9 = 0;
    uVar8 = 0;
    fVar7 = SQRT(fVar7);
  }
  else {
    if (0.0 <= fVar7) goto LAB_03dcf0cb;
LAB_03dcf125:
    fVar7 = sqrtf(fVar7);
    uVar8 = extraout_XMM0_Dc;
    uVar9 = extraout_XMM0_Dd;
  }
  auVar6._4_4_ = fVar7;
  auVar6._0_4_ = fVar7;
  auVar6._8_4_ = uVar8;
  auVar6._12_4_ = uVar9;
  auVar10 = divps(auVar10,auVar6);
  fVar3 = (float)uVar2 + maxDistanceDelta * auVar10._0_4_;
  fVar5 = (float)uVar4 + maxDistanceDelta * auVar10._4_4_;
  fVar11 = fVar1 + (fVar12 / fVar7) * maxDistanceDelta;
LAB_03dcf187:
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = fVar3;
  (__this->fields).Value.fields.y = fVar5;
  (__this->fields).Value.fields.z = fVar11;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$Normalize
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Normalize (CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3dcf220

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Normalize
          (CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  ulong uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar8 [16];
  float fVar9;
  undefined8 uVar7;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    uVar1._0_4_ = (value->fields).Value.fields.x;
    uVar1._4_4_ = (value->fields).Value.fields.y;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar1;
    fVar9 = (value->fields).Value.fields.z;
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
      iVar2 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_init_class();
    }
    uVar5 = 0;
    uVar6 = 0;
    fVar4 = fVar9 * fVar9 +
            (float)uVar1._4_4_ * (float)uVar1._4_4_ +
            (float)(undefined4)uVar1 * (float)(undefined4)uVar1;
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
      uVar5 = extraout_XMM0_Dc;
      uVar6 = extraout_XMM0_Dd;
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    if (fVar4 <= 1e-05) {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar7 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar9 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar9 = fVar9 / fVar4;
      auVar3._4_4_ = fVar4;
      auVar3._0_4_ = fVar4;
      auVar3._8_4_ = uVar5;
      auVar3._12_4_ = uVar6;
      auVar8 = divps(auVar8,auVar3);
      uVar7 = auVar8._0_8_;
    }
    if (DAT_0570291b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_0570291b = '\x01';
    }
    __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = (float)(int)uVar7;
    (__this->fields).Value.fields.y = (float)(int)((ulong)uVar7 >> 0x20);
    (__this->fields).Value.fields.z = fVar9;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$OrthoNormalize
// il2cpp: void CustomLogic_CustomLogicVector3Builtin__OrthoNormalize (CustomLogic_CustomLogicVector3Builtin_o* normal, CustomLogic_CustomLogicVector3Builtin_o* tangent, const MethodInfo* method);
// 0x3dcf3f0

void CustomLogic_CustomLogicVector3Builtin__OrthoNormalize
               (CustomLogic_CustomLogicVector3Builtin_o *normal,
               CustomLogic_CustomLogicVector3Builtin_o *tangent,MethodInfo *method)

{
  if ((normal != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (tangent != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    UnityEngine_Vector3__OrthoNormalize
              (&(normal->fields).Value,&(tangent->fields).Value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$Project
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Project (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x3dcf410

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Project
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar6;
  float fVar7;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar8;
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar2 = (a->fields).Value.fields.x;
    uVar4 = (a->fields).Value.fields.y;
    fVar7 = (a->fields).Value.fields.z;
    uVar3 = (b->fields).Value.fields.x;
    uVar5 = (b->fields).Value.fields.y;
    fVar1 = (b->fields).Value.fields.z;
    if (DAT_056fe076 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Mathf);
      DAT_056fe076 = '\x01';
    }
    fVar6 = fVar1 * fVar1 + (float)uVar5 * (float)uVar5 + (float)uVar3 * (float)uVar3;
    if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar6) {
      fVar7 = fVar7 * fVar1 + (float)uVar5 * (float)uVar4 + (float)uVar2 * (float)uVar3;
      auVar9._0_4_ = fVar7 * (float)uVar3;
      auVar9._4_4_ = fVar7 * (float)uVar5;
      auVar9._8_8_ = 0;
      fVar7 = (fVar1 * fVar7) / fVar6;
      auVar10._4_4_ = fVar6;
      auVar10._0_4_ = fVar6;
      auVar10._8_8_ = 0;
      auVar10 = divps(auVar9,auVar10);
      uVar8 = auVar10._0_8_;
    }
    else {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar8 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar7 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    if (DAT_0570291b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_0570291b = '\x01';
    }
    __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = (float)(int)uVar8;
    (__this->fields).Value.fields.y = (float)(int)((ulong)uVar8 >> 0x20);
    (__this->fields).Value.fields.z = fVar7;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$ProjectOnPlane
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__ProjectOnPlane (CustomLogic_CustomLogicVector3Builtin_o* vector, CustomLogic_CustomLogicVector3Builtin_o* plane, const MethodInfo* method);
// 0x3dcf5e0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__ProjectOnPlane
          (CustomLogic_CustomLogicVector3Builtin_o *vector,
          CustomLogic_CustomLogicVector3Builtin_o *plane,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined8 local_28;
  
  if ((vector != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (plane != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    local_28._0_4_ = (vector->fields).Value.fields.x;
    local_28._4_4_ = (vector->fields).Value.fields.y;
    fVar8 = (vector->fields).Value.fields.z;
    uVar2 = (plane->fields).Value.fields.x;
    uVar3 = (plane->fields).Value.fields.y;
    fVar1 = (plane->fields).Value.fields.z;
    if (DAT_05702992 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Mathf);
      DAT_05702992 = '\x01';
    }
    fVar4 = fVar1 * fVar1 + (float)uVar3 * (float)uVar3 + (float)uVar2 * (float)uVar2;
    if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar4) {
      fVar5 = fVar8 * fVar1 +
              (float)uVar3 * (float)local_28._4_4_ + (float)(undefined4)local_28 * (float)uVar2;
      auVar6._0_4_ = fVar5 * (float)uVar2;
      auVar6._4_4_ = fVar5 * (float)uVar3;
      auVar6._8_8_ = 0;
      auVar7._4_4_ = fVar4;
      auVar7._0_4_ = fVar4;
      auVar7._8_8_ = 0;
      auVar7 = divps(auVar6,auVar7);
      local_28 = CONCAT44((float)local_28._4_4_ - auVar7._4_4_,
                          (float)(undefined4)local_28 - auVar7._0_4_);
      fVar8 = fVar8 - (fVar1 * fVar5) / fVar4;
    }
    if (DAT_0570291b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_0570291b = '\x01';
    }
    __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = (float)(int)local_28;
    (__this->fields).Value.fields.y = (float)(int)((ulong)local_28 >> 0x20);
    (__this->fields).Value.fields.z = fVar8;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$Reflect
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Reflect (CustomLogic_CustomLogicVector3Builtin_o* inDirection, CustomLogic_CustomLogicVector3Builtin_o* inNormal, const MethodInfo* method);
// 0x3dcf780

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Reflect
          (CustomLogic_CustomLogicVector3Builtin_o *inDirection,
          CustomLogic_CustomLogicVector3Builtin_o *inNormal,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar7;
  undefined8 local_38;
  
  if ((inDirection != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (inNormal != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar3 = (inDirection->fields).Value.fields.x;
    uVar5 = (inDirection->fields).Value.fields.y;
    fVar1 = (inDirection->fields).Value.fields.z;
    uVar4 = (inNormal->fields).Value.fields.x;
    uVar6 = (inNormal->fields).Value.fields.y;
    fVar2 = (inNormal->fields).Value.fields.z;
    fVar7 = (fVar1 * fVar2 + (float)uVar6 * (float)uVar5 + (float)uVar3 * (float)uVar4) * -2.0;
    if (DAT_0570291b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_0570291b = '\x01';
    }
    __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = (float)uVar3 + (float)uVar4 * fVar7;
    (__this->fields).Value.fields.y = (float)uVar5 + (float)uVar6 * fVar7;
    (__this->fields).Value.fields.z = fVar1 + fVar2 * fVar7;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$RotateTowards
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__RotateTowards (CustomLogic_CustomLogicVector3Builtin_o* current, CustomLogic_CustomLogicVector3Builtin_o* target, float maxRadiansDelta, float maxMagnitudeDelta, const MethodInfo* method);
// 0x3dcf8e0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__RotateTowards
          (CustomLogic_CustomLogicVector3Builtin_o *current,
          CustomLogic_CustomLogicVector3Builtin_o *target,float maxRadiansDelta,
          float maxMagnitudeDelta,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o UVar1;
  
  if ((current != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (target != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    UVar1 = UnityEngine_Vector3__RotateTowards
                      ((current->fields).Value.fields,(target->fields).Value.fields,maxRadiansDelta,
                       maxMagnitudeDelta,(MethodInfo *)0x0);
    if (DAT_0570291b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_0570291b = '\x01';
    }
    __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = (float)(int)UVar1.fields._0_8_;
    (__this->fields).Value.fields.y = (float)(int)((ulong)UVar1.fields._0_8_ >> 0x20);
    (__this->fields).Value.fields.z = UVar1.fields.z;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$SignedAngle
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__SignedAngle (CustomLogic_CustomLogicVector3Builtin_o* from, CustomLogic_CustomLogicVector3Builtin_o* to, CustomLogic_CustomLogicVector3Builtin_o* axis, const MethodInfo* method);
// 0x3dcf9c0

float CustomLogic_CustomLogicVector3Builtin__SignedAngle
                (CustomLogic_CustomLogicVector3Builtin_o *from,
                CustomLogic_CustomLogicVector3Builtin_o *to,
                CustomLogic_CustomLogicVector3Builtin_o *axis,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  
  if (((from != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
      (to != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (axis != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1._0_4_ = (from->fields).Value.fields.x;
    uVar1._4_4_ = (from->fields).Value.fields.y;
    uVar2._0_4_ = (to->fields).Value.fields.x;
    uVar2._4_4_ = (to->fields).Value.fields.y;
    uVar3._0_4_ = (axis->fields).Value.fields.x;
    uVar3._4_4_ = (axis->fields).Value.fields.y;
    fVar4 = (float)il2cpp_glue_03ddae10(uVar1,(from->fields).Value.fields.z,uVar2,
                                (to->fields).Value.fields.z,uVar3,(axis->fields).Value.fields.z,0);
    return fVar4;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$Slerp
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Slerp (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, float t, const MethodInfo* method);
// 0x3dcfa00

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Slerp
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          float t,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o UVar1;
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    UVar1 = UnityEngine_Vector3__Slerp
                      ((a->fields).Value.fields,(b->fields).Value.fields,t,(MethodInfo *)0x0);
    if (DAT_0570291b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_0570291b = '\x01';
    }
    __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = (float)(int)UVar1.fields._0_8_;
    (__this->fields).Value.fields.y = (float)(int)((ulong)UVar1.fields._0_8_ >> 0x20);
    (__this->fields).Value.fields.z = UVar1.fields.z;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$SlerpUnclamped
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__SlerpUnclamped (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, float t, const MethodInfo* method);
// 0x3dcfad0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__SlerpUnclamped
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          float t,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o UVar1;
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    UVar1 = UnityEngine_Vector3__SlerpUnclamped
                      ((a->fields).Value.fields,(b->fields).Value.fields,t,(MethodInfo *)0x0);
    if (DAT_0570291b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_0570291b = '\x01';
    }
    __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = (float)(int)UVar1.fields._0_8_;
    (__this->fields).Value.fields.y = (float)(int)((ulong)UVar1.fields._0_8_ >> 0x20);
    (__this->fields).Value.fields.z = UVar1.fields.z;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$SmoothDamp
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__SmoothDamp (CustomLogic_CustomLogicVector3Builtin_o* current, CustomLogic_CustomLogicVector3Builtin_o* target, CustomLogic_CustomLogicVector3Builtin_o* currentVelocity, float smoothTime, float maxSpeed, const MethodInfo* method);
// 0x3dcfba0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__SmoothDamp
          (CustomLogic_CustomLogicVector3Builtin_o *current,
          CustomLogic_CustomLogicVector3Builtin_o *target,
          CustomLogic_CustomLogicVector3Builtin_o *currentVelocity,float smoothTime,float maxSpeed,
          MethodInfo *method)

{
  UnityEngine_Vector3_Fields current_00;
  UnityEngine_Vector3_Fields target_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float deltaTime;
  UnityEngine_Vector3_o UVar1;
  
  if ((current != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (target != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    if (currentVelocity != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      current_00 = (current->fields).Value.fields;
      target_00 = (target->fields).Value.fields;
      deltaTime = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      UVar1 = UnityEngine_Vector3__SmoothDamp
                        (current_00,target_00,&(currentVelocity->fields).Value,smoothTime,maxSpeed,
                         deltaTime,(MethodInfo *)0x0);
      if (DAT_0570291b == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
        DAT_0570291b = '\x01';
      }
      __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      if (DAT_05702910 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702910 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      (__this->fields).Value.fields.x = (float)(int)UVar1.fields._0_8_;
      (__this->fields).Value.fields.y = (float)(int)((ulong)UVar1.fields._0_8_ >> 0x20);
      (__this->fields).Value.fields.z = UVar1.fields.z;
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$Set
// il2cpp: void CustomLogic_CustomLogicVector3Builtin__Set (CustomLogic_CustomLogicVector3Builtin_o* __this, float x, float y, float z, const MethodInfo* method);
// 0x3dcfcd0

void CustomLogic_CustomLogicVector3Builtin__Set
               (CustomLogic_CustomLogicVector3Builtin_o *__this,float x,float y,float z,
               MethodInfo *method)

{
  (__this->fields).Value.fields.x = x;
  (__this->fields).Value.fields.y = y;
  (__this->fields).Value.fields.z = z;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$Scale
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Scale (CustomLogic_CustomLogicVector3Builtin_o* __this, Il2CppObject* scale, const MethodInfo* method);
// 0x3dcfce0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Scale
          (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *scale,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  int *piVar5;
  float *pfVar6;
  undefined8 uVar7;
  System_Exception_o *__this_01;
  System_String_o *message;
  undefined8 local_48;
  undefined8 local_38;
  float local_28;
  
  if (DAT_05702911 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702911 = '\x01';
  }
  if (scale == (Il2CppObject *)0x0) {
LAB_03dcfebb:
    uVar7 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar7);
    message = (System_String_o *)il2cpp_init_method_metadata(&"Parameter must be a float or a Vector3.");
    System_Exception___ctor(__this_01,message,(MethodInfo *)0x0);
    uVar7 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_Scale);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_01,uVar7);
  }
  pIVar2 = scale->klass;
  if (pIVar2 == DAT_05711068) {
    piVar5 = (int *)il2cpp_glue_022c7330(scale);
    local_48._0_4_ = (__this->fields).Value.fields.x;
    local_48._4_4_ = (__this->fields).Value.fields.y;
    local_28 = (float)*piVar5;
    local_38 = CONCAT44(local_28,local_28);
  }
  else {
    if (pIVar2 != DAT_05711098) {
      bVar1 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
      if (((pIVar2->_2).naturalAligment < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector3Builtin)) goto LAB_03dcfebb;
      pIVar2 = scale[3].klass;
      local_28 = *(float *)&scale[3].monitor;
      (__this->fields).Value.fields.x = (__this->fields).Value.fields.x * SUB84(pIVar2,0);
      (__this->fields).Value.fields.y =
           (float)((ulong)pIVar2 >> 0x20) * (__this->fields).Value.fields.y;
      local_28 = local_28 * (__this->fields).Value.fields.z;
      (__this->fields).Value.fields.z = local_28;
      fVar3 = (__this->fields).Value.fields.x;
      fVar4 = (__this->fields).Value.fields.y;
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue();
      if (DAT_05702910 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702910 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).Value.fields.x = fVar3;
      (__this_00->fields).Value.fields.y = fVar4;
      goto LAB_03dcfea6;
    }
    pfVar6 = (float *)il2cpp_glue_022c7330(scale);
    local_28 = *pfVar6;
    local_38._0_4_ = (__this->fields).Value.fields.x;
    local_38._4_4_ = (__this->fields).Value.fields.y;
    local_48 = CONCAT44(local_28,local_28);
  }
  local_28 = local_28 * (__this->fields).Value.fields.z;
  __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).Value.fields.x = (float)local_48 * (float)local_38;
  (__this_00->fields).Value.fields.y = local_48._4_4_ * local_38._4_4_;
LAB_03dcfea6:
  (__this_00->fields).Value.fields.z = local_28;
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin$$Multiply
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Multiply (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x3dcff10

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Multiply
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  UnityEngine_Vector3_Fields a_00;
  UnityEngine_Vector3_Fields b_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o UVar1;
  
  if (DAT_05702912 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05702912 = '\x01';
  }
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    a_00 = (a->fields).Value.fields;
    b_00 = (b->fields).Value.fields;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar1 = Utility_Util__MultiplyVectors(a_00,b_00,(MethodInfo *)0x0);
    __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = (float)(int)UVar1.fields._0_8_;
    (__this->fields).Value.fields.y = (float)(int)((ulong)UVar1.fields._0_8_ >> 0x20);
    (__this->fields).Value.fields.z = UVar1.fields.z;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$Divide
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Divide (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x3dd0040

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Divide
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  UnityEngine_Vector3_Fields a_00;
  UnityEngine_Vector3_Fields b_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o UVar1;
  
  if (DAT_05702913 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05702913 = '\x01';
  }
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    a_00 = (a->fields).Value.fields;
    b_00 = (b->fields).Value.fields;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar1 = Utility_Util__DivideVectors(a_00,b_00,(MethodInfo *)0x0);
    __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = (float)(int)UVar1.fields._0_8_;
    (__this->fields).Value.fields.y = (float)(int)((ulong)UVar1.fields._0_8_ >> 0x20);
    (__this->fields).Value.fields.z = UVar1.fields.z;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$GetRotationDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__GetRotationDirection (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x3dd0170

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__GetRotationDirection
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_05702914 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05702914 = '\x01';
  }
  if (a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    uVar1 = (a->fields).Value.fields.x;
    uVar2 = (a->fields).Value.fields.y;
    UVar3.fields.x = (float)uVar1 * 0.017453292;
    UVar3.fields.y = (float)uVar2 * 0.017453292;
    UVar3.fields.z = (a->fields).Value.fields.z * 0.017453292;
    rotation = UnityEngine_Quaternion__Internal_FromEulerRad(UVar3,(MethodInfo *)0x0);
    if (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      UVar3 = UnityEngine_Quaternion__op_Multiply
                        (rotation,(b->fields).Value.fields,(MethodInfo *)0x0);
      __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      if (DAT_05702910 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702910 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      (__this->fields).Value.fields.x = (float)(int)UVar3.fields._0_8_;
      (__this->fields).Value.fields.y = (float)(int)((ulong)UVar3.fields._0_8_ >> 0x20);
      (__this->fields).Value.fields.z = UVar3.fields.z;
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicVector3Builtin__ToString (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x3dd0260

System_String_o *
CustomLogic_CustomLogicVector3Builtin__ToString
          (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = (System_String_o *)il2cpp_glue_0241fd00(&(__this->fields).Value,0,0,0);
  return pSVar1;
}


// CustomLogic.CustomLogicVector3Builtin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin____Copy__ (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x3db9750

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin____Copy__
          (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  float fVar1;
  CustomLogic_BuiltinClassInstance_c *pCVar2;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  
  if (DAT_05702915 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702915 = '\x01';
  }
  pCVar2 = *(CustomLogic_BuiltinClassInstance_c **)&(__this->fields).Value.fields;
  fVar1 = (__this->fields).Value.fields.z;
  __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = pCVar2;
  *(float *)&__this_00[1].monitor = fVar1;
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin$$__Add__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin____Add__ (CustomLogic_CustomLogicVector3Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dd0270

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin____Add__
          (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *pIVar4;
  byte bVar5;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar6;
  undefined8 uVar7;
  undefined8 local_38;
  float local_28;
  float fStack_24;
  
  if (DAT_05702916 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702916 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar5 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
    if ((((bVar5 <= (self->klass->_2).naturalAligment) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_CustomLogicVector3Builtin)) &&
       ((bVar5 <= (other->klass->_2).naturalAligment &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_CustomLogicVector3Builtin)))) {
      pIVar3 = self[3].klass;
      fVar1 = *(float *)&self[3].monitor;
      pIVar4 = other[3].klass;
      fVar2 = *(float *)&other[3].monitor;
      __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue();
      if (DAT_05702910 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702910 = '\x01';
      }
      local_38._0_4_ = SUB84(pIVar3,0);
      local_38._4_4_ = (float)((ulong)pIVar3 >> 0x20);
      local_28 = SUB84(pIVar4,0);
      fStack_24 = (float)((ulong)pIVar4 >> 0x20);
      local_38 = (CustomLogic_BuiltinClassInstance_c *)
                 CONCAT44(local_38._4_4_ + fStack_24,(float)local_38 + local_28);
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
      __this_00[1].klass = local_38;
      *(float *)&__this_00[1].monitor = fVar1 + fVar2;
      return (Il2CppObject *)__this_00;
    }
  }
  operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Add__");
  pSVar6 = CustomLogic_CustomLogicUtils__OperatorException
                     (operatorName,self,other,(MethodInfo *)0x0);
  uVar7 = il2cpp_init_method_metadata(&MethodInfo_Object___Add);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(pSVar6,uVar7);
}


// CustomLogic.CustomLogicVector3Builtin$$__Sub__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin____Sub__ (CustomLogic_CustomLogicVector3Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dd03d0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin____Sub__
          (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *pIVar4;
  byte bVar5;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar6;
  undefined8 uVar7;
  undefined8 local_38;
  float local_28;
  float fStack_24;
  
  if (DAT_05702917 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702917 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar5 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
    if ((((bVar5 <= (self->klass->_2).naturalAligment) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_CustomLogicVector3Builtin)) &&
       ((bVar5 <= (other->klass->_2).naturalAligment &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_CustomLogicVector3Builtin)))) {
      pIVar3 = self[3].klass;
      fVar1 = *(float *)&self[3].monitor;
      pIVar4 = other[3].klass;
      fVar2 = *(float *)&other[3].monitor;
      __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue();
      if (DAT_05702910 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702910 = '\x01';
      }
      local_38._0_4_ = SUB84(pIVar3,0);
      local_38._4_4_ = (float)((ulong)pIVar3 >> 0x20);
      local_28 = SUB84(pIVar4,0);
      fStack_24 = (float)((ulong)pIVar4 >> 0x20);
      local_38 = (CustomLogic_BuiltinClassInstance_c *)
                 CONCAT44(local_38._4_4_ - fStack_24,(float)local_38 - local_28);
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
      __this_00[1].klass = local_38;
      *(float *)&__this_00[1].monitor = fVar1 - fVar2;
      return (Il2CppObject *)__this_00;
    }
  }
  operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Sub__");
  pSVar6 = CustomLogic_CustomLogicUtils__OperatorException
                     (operatorName,self,other,(MethodInfo *)0x0);
  uVar7 = il2cpp_init_method_metadata(&MethodInfo_Object___Sub);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(pSVar6,uVar7);
}


// CustomLogic.CustomLogicVector3Builtin$$__Mul__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin____Mul__ (CustomLogic_CustomLogicVector3Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dd0530

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin____Mul__
          (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  UnityEngine_Vector3_Fields a;
  UnityEngine_Vector3_Fields b;
  int *piVar4;
  float *pfVar5;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar6;
  undefined8 uVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  undefined8 local_58;
  undefined8 local_48;
  
  if (DAT_05702918 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05702918 = '\x01';
  }
  if (self == (Il2CppObject *)0x0) goto LAB_03dd0842;
  pIVar3 = self->klass;
  bVar1 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
  if (((pIVar3->_2).naturalAligment < bVar1) ||
     ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector3Builtin)) {
    if (pIVar3 == DAT_05711098) {
      pfVar5 = (float *)il2cpp_glue_022c7330(self);
      if (other == (Il2CppObject *)0x0) goto LAB_03dd0842;
      bVar1 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
      if (((other->klass->_2).naturalAligment < bVar1) ||
         ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector3Builtin)) goto LAB_03dd0842;
      fVar8 = *pfVar5;
      local_48 = other[3].klass;
      pIVar3 = (Il2CppClass *)CONCAT44(fVar8,fVar8);
    }
    else {
      if ((pIVar3 != DAT_05711068) ||
         (piVar4 = (int *)il2cpp_glue_022c7330(self), other == (Il2CppObject *)0x0)) {
LAB_03dd0842:
        operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Mul__");
        pSVar6 = CustomLogic_CustomLogicUtils__OperatorException
                           (operatorName,self,other,(MethodInfo *)0x0);
        uVar7 = il2cpp_init_method_metadata(&MethodInfo_Object___Mul);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(pSVar6,uVar7);
      }
      bVar1 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
      if (((other->klass->_2).naturalAligment < bVar1) ||
         ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector3Builtin)) goto LAB_03dd0842;
      fVar8 = (float)*piVar4;
      pIVar3 = other[3].klass;
      local_48 = (Il2CppClass *)CONCAT44(fVar8,fVar8);
    }
    fVar8 = fVar8 * *(float *)&other[3].monitor;
    __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue();
joined_r0x03dd067a:
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    local_58._0_4_ = SUB84(pIVar3,0);
    local_58._4_4_ = (float)((ulong)pIVar3 >> 0x20);
    local_48._4_4_ = (float)((ulong)local_48 >> 0x20);
    local_58 = (CustomLogic_BuiltinClassInstance_c *)
               CONCAT44(local_58._4_4_ * local_48._4_4_,(float)local_58 * (float)local_48);
  }
  else {
    if (other == (Il2CppObject *)0x0) goto LAB_03dd0842;
    pIVar3 = other->klass;
    if (pIVar3 == DAT_05711098) {
      pfVar5 = (float *)il2cpp_glue_022c7330(other);
      fVar8 = *pfVar5;
      local_48 = self[3].klass;
      pIVar3 = (Il2CppClass *)CONCAT44(fVar8,fVar8);
LAB_03dd081a:
      fVar8 = fVar8 * *(float *)&self[3].monitor;
      __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      goto joined_r0x03dd067a;
    }
    if (pIVar3 == DAT_05711068) {
      piVar4 = (int *)il2cpp_glue_022c7330(other);
      pIVar3 = self[3].klass;
      fVar8 = (float)*piVar4;
      local_48 = (Il2CppClass *)CONCAT44(fVar8,fVar8);
      goto LAB_03dd081a;
    }
    if (((pIVar3->_2).naturalAligment < bVar1) ||
       ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector3Builtin)) goto LAB_03dd0842;
    a = *(UnityEngine_Vector3_Fields *)(self + 3);
    b = *(UnityEngine_Vector3_Fields *)(other + 3);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar9 = Utility_Util__MultiplyVectors(a,b,(MethodInfo *)0x0);
    fVar8 = UVar9.fields.z;
    local_58 = UVar9.fields._0_8_;
    __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
      iVar2 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
      goto joined_r0x03dd06ad;
    }
  }
  iVar2 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
joined_r0x03dd06ad:
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = local_58;
  *(float *)&__this_00[1].monitor = fVar8;
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin$$__Div__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin____Div__ (CustomLogic_CustomLogicVector3Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dd0880

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin____Div__
          (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  Il2CppClass *pIVar4;
  UnityEngine_Vector3_Fields b;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  float *pfVar5;
  int *piVar6;
  System_String_o *operatorName;
  System_Exception_o *pSVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_Fields UVar11;
  undefined1 local_48 [16];
  
  if (DAT_05702919 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05702919 = '\x01';
  }
  if (self == (Il2CppObject *)0x0) {
LAB_03dd0ab2:
    operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Div__");
    pSVar7 = CustomLogic_CustomLogicUtils__OperatorException
                       (operatorName,self,other,(MethodInfo *)0x0);
    uVar8 = il2cpp_init_method_metadata(&MethodInfo_Object___Div);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(pSVar7,uVar8);
  }
  bVar2 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
  if ((((self->klass->_2).naturalAligment < bVar2) ||
      ((self->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicVector3Builtin)) ||
     (other == (Il2CppObject *)0x0)) goto LAB_03dd0ab2;
  pIVar4 = other->klass;
  if (pIVar4 == DAT_05711098) {
    pfVar5 = (float *)il2cpp_glue_022c7330(other);
    fVar10 = *pfVar5;
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
  }
  else {
    if (pIVar4 != DAT_05711068) {
      if (((pIVar4->_2).naturalAligment < bVar2) ||
         ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicVector3Builtin)) goto LAB_03dd0ab2;
      UVar11 = *(UnityEngine_Vector3_Fields *)(self + 3);
      b = *(UnityEngine_Vector3_Fields *)(other + 3);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UVar11 = (UnityEngine_Vector3_Fields)
               Utility_Util__DivideVectors
                         ((UnityEngine_Vector3_o)UVar11,(UnityEngine_Vector3_o)b,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      if (DAT_05702910 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702910 = '\x01';
      }
      iVar3 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
      goto joined_r0x03dd0aa2;
    }
    piVar6 = (int *)il2cpp_glue_022c7330(other);
    fVar10 = (float)*piVar6;
  }
  local_48._8_8_ = 0;
  local_48._0_8_ = self[3].klass;
  fVar1 = *(float *)&self[3].monitor;
  __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  auVar9._4_4_ = fVar10;
  auVar9._0_4_ = fVar10;
  auVar9._8_4_ = in_XMM1_Dc;
  auVar9._12_4_ = in_XMM1_Dd;
  auVar9 = divps(local_48,auVar9);
  UVar11.z = fVar1 / fVar10;
  UVar11.x = (float)(int)auVar9._0_8_;
  UVar11.y = (float)(int)((ulong)auVar9._0_8_ >> 0x20);
  iVar3 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
joined_r0x03dd0aa2:
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
  *(UnityEngine_Vector3_Fields *)(__this_00 + 1) = UVar11;
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicVector3Builtin____Eq__ (CustomLogic_CustomLogicVector3Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3db99e0

bool_conflict
CustomLogic_CustomLogicVector3Builtin____Eq__
          (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (DAT_0570291a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291a = '\x01';
  }
  if (other != (Il2CppObject *)0x0) {
    bVar3 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
    if (bVar3 <= (other->klass->_2).naturalAligment) {
      if ((other->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicVector3Builtin) {
        return 0;
      }
      if (other == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar1 = (__this->fields).Value.fields.x;
      uVar2 = (__this->fields).Value.fields.y;
      fVar4 = (float)uVar2 - (float)((ulong)other[3].klass >> 0x20);
      fVar5 = (__this->fields).Value.fields.z - *(float *)&other[3].monitor;
      fVar6 = (float)uVar1 - SUB84(other[3].klass,0);
      return (bool_conflict)(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5 < 9.9999994e-11);
    }
  }
  return 0;
}


// CustomLogic.CustomLogicVector3Builtin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicVector3Builtin____Hash__ (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x3db9b60

int32_t CustomLogic_CustomLogicVector3Builtin____Hash__
                  (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  int32_t iVar3;
  float in_XMM0_Da;
  float __this_00;
  float __this_01;
  
  uVar1 = System_Single__GetHashCode(in_XMM0_Da,(MethodInfo *)&(__this->fields).Value);
  iVar2 = System_Single__GetHashCode(__this_00,(MethodInfo *)&(__this->fields).Value.fields.y);
  iVar3 = System_Single__GetHashCode(__this_01,(MethodInfo *)&(__this->fields).Value.fields.z);
  return iVar3 >> 2 ^ iVar2 << 2 ^ uVar1;
}


// CustomLogic.CustomLogicVector3Builtin$$__Mod__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin____Mod__ (CustomLogic_CustomLogicVector3Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dd0af0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin____Mod__
          (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
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


// CustomLogic.CustomLogicVector3Builtin$$op_Implicit
// il2cpp: UnityEngine_Vector3_o CustomLogic_CustomLogicVector3Builtin__op_Implicit (CustomLogic_CustomLogicVector3Builtin_o* v, const MethodInfo* method);
// 0x3dd0b30

UnityEngine_Vector3_o
CustomLogic_CustomLogicVector3Builtin__op_Implicit
          (CustomLogic_CustomLogicVector3Builtin_o *v,MethodInfo *method)

{
  if (v != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    return (UnityEngine_Vector3_o)(v->fields).Value.fields;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVector3Builtin$$op_Implicit
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__op_Implicit (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x3dbf1b0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__op_Implicit(UnityEngine_Vector3_o v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)v.fields._0_8_;
  (__this->fields).Value.fields.y = (float)(int)((ulong)v.fields._0_8_ >> 0x20);
  (__this->fields).Value.fields.z = v.fields.z;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicVector3Builtin__get_ClassName (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x3dd0b50

System_String_o *
CustomLogic_CustomLogicVector3Builtin__get_ClassName
          (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  if (DAT_0570291c == '\0') {
    il2cpp_init_method_metadata(&"Vector3");
    DAT_0570291c = '\x01';
  }
  return "Vector3";
}


// CustomLogic.CustomLogicVector3Builtin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicVector3Builtin__get_IsAbstract (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x3dd0b80

bool_conflict
CustomLogic_CustomLogicVector3Builtin__get_IsAbstract
          (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicVector3Builtin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicVector3Builtin__get_IsStatic (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x3dd0b90

bool_conflict
CustomLogic_CustomLogicVector3Builtin__get_IsStatic
          (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicVector3Builtin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicVector3Builtin__get_InheritBaseMembers (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x3dd0ba0

bool_conflict
CustomLogic_CustomLogicVector3Builtin__get_InheritBaseMembers
          (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


