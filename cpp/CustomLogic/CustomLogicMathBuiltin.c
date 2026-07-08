// Type: CustomLogic.CustomLogicMathBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMathBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicMathBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicMathBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicMathBuiltin_o* CustomLogic_CustomLogicMathBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3f3cb40

CustomLogic_CustomLogicMathBuiltin_o *
CustomLogic_CustomLogicMathBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05703d8b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMathBuiltin);
    DAT_05703d8b = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicMathBuiltin);
      if (DAT_05703d83 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703d83 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,method);
      return (CustomLogic_CustomLogicMathBuiltin_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicMathBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicMathBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicMathBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3f417b0

void CustomLogic_CustomLogicMathBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703db9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703db9 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicMathBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3f41820

void CustomLogic_CustomLogicMathBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clamp>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Clamp_b__8_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f41830

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Clamp>b__8_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  MethodInfo *in_R8;
  
  if (__a != (System_Object_array *)0x0) {
    uVar1 = (uint)__a->max_length;
    if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicMathBuiltin__Clamp
                         ((CustomLogic_CustomLogicMathBuiltin_o *)__this,__a->m_Items[0],
                          __a->m_Items[1],__a->m_Items[2],in_R8);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Max>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Max_b__9_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f41870

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Max>b__9_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicMathBuiltin__Max
                         ((CustomLogic_CustomLogicMathBuiltin_o *)__this,__a->m_Items[0],
                          __a->m_Items[1],method);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Min>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Min_b__10_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f418a0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Min>b__10_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicMathBuiltin__Min
                         ((CustomLogic_CustomLogicMathBuiltin_o *)__this,__a->m_Items[0],
                          __a->m_Items[1],method);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Pow>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Pow_b__11_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f418d0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Pow>b__11_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined8 in_RAX;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicMathBuiltin_o *__this_00;
  float fVar2;
  undefined8 local_28;
  
  local_28 = in_RAX;
  if (DAT_05703dba == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dba = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f4199e:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                      (pIVar1,(MethodInfo_24AB990 *)MethodInfo_Single_ConvertTo_Single);
    local_28 = CONCAT44(local_28._4_4_,fVar2);
    if (1 < (uint)__a->max_length) {
      __this_00 = (CustomLogic_CustomLogicMathBuiltin_o *)__a->m_Items[1];
      method_00 = MethodInfo_Single_ConvertTo_Single;
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                        ((Il2CppObject *)__this_00,(MethodInfo_24AB990 *)MethodInfo_Single_ConvertTo_Single);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        fVar2 = powf(__this_00,(float)local_28,fVar2,method_00);
        local_28 = CONCAT44(fVar2,(float)local_28);
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,(long)&local_28 + 4);
        return pIVar1;
      }
      goto LAB_03f4199e;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Abs>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Abs_b__12_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f419b0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Abs>b__12_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicMathBuiltin__Abs
                         ((CustomLogic_CustomLogicMathBuiltin_o *)__this,__a->m_Items[0],
                          (MethodInfo *)__a);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Sqrt>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Sqrt_b__13_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f419e0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Sqrt>b__13_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float __x;
  undefined1 auStack_14 [4];
  
  if (DAT_05703dbb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dbb = '\x01';
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
    __x = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      if (__x < 0.0) {
        sqrtf(__x);
      }
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Repeat>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Repeat_b__14_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f41a90

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Repeat>b__14_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  Il2CppObject *pIVar2;
  float fVar3;
  float fVar4;
  uint uStack_3c;
  float fStack_38;
  float fStack_28;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar2 = __a->m_Items[0];
      obj = __a->m_Items[1];
      if (DAT_05703d89 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
        DAT_05703d89 = '\x01';
      }
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fStack_38 = MiscExtensions__UnboxToFloat(pIVar2,(MethodInfo *)0x0);
      fStack_28 = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
      fVar3 = floorf(fStack_38 / fStack_28);
      fVar4 = fStack_38 - fVar3 * fStack_28;
      fVar3 = fStack_28;
      if (fVar4 <= fStack_28) {
        fVar3 = fVar4;
      }
      uStack_3c = -(uint)(0.0 <= fVar4) & (uint)fVar3;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&uStack_3c);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Mod>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Mod_b__15_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f41b80

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Mod>b__15_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_24 [4];
  
  if (DAT_05703dbc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dbc = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f41c37:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    if (1 < (uint)__a->max_length) {
      CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_24);
        return pIVar1;
      }
      goto LAB_03f41c37;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Sin>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Sin_b__16_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f41c40

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Sin>b__16_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  undefined1 auStack_14 [4];
  
  if (DAT_05703dbd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dbd = '\x01';
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
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      sinf(fVar2 * 0.017453292);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Cos>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Cos_b__17_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f41cf0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Cos>b__17_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  undefined1 auStack_14 [4];
  
  if (DAT_05703dbe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dbe = '\x01';
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
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      cosf(fVar2 * 0.017453292);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Tan>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Tan_b__18_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f41da0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Tan>b__18_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  undefined1 auStack_14 [4];
  
  if (DAT_05703dbf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dbf = '\x01';
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
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      tanf(fVar2 * 0.017453292);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Asin>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Asin_b__19_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f41e50

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Asin>b__19_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float __x;
  undefined1 auStack_14 [4];
  
  if (DAT_05703dc0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dc0 = '\x01';
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
    __x = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      asinf(__x);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Acos>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Acos_b__20_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f41f00

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Acos>b__20_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float __x;
  undefined1 auStack_14 [4];
  
  if (DAT_05703dc1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dc1 = '\x01';
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
    __x = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      acosf(__x);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Atan>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Atan_b__21_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f41fb0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Atan>b__21_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float __x;
  undefined1 auStack_14 [4];
  
  if (DAT_05703dc2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dc2 = '\x01';
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
    __x = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      atanf(__x);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Atan2>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Atan2_b__22_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f42060

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Atan2>b__22_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined8 in_RAX;
  Il2CppObject *pIVar1;
  float fVar2;
  undefined8 local_28;
  
  local_28 = in_RAX;
  if (DAT_05703dc3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dc3 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f42136:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    local_28 = CONCAT44(local_28._4_4_,fVar2);
    if (1 < (uint)__a->max_length) {
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        fVar2 = atan2f((float)local_28,fVar2);
        local_28 = CONCAT44(fVar2 * 57.29578,(float)local_28);
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,(long)&local_28 + 4);
        return pIVar1;
      }
      goto LAB_03f42136;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Ceil>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Ceil_b__23_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f42140

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Ceil>b__23_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  float fVar3;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_05703dc4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dc4 = '\x01';
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
    fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar2,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      if (DAT_056fdee8 == '\0') {
        uStack_18 = CONCAT44(uStack_18._4_4_,fVar3);
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdee8 = '\x01';
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
        fVar3 = (float)uStack_18;
      }
      else {
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar1 == 0) {
        uStack_18._4_4_ = (undefined4)((ulong)uStack_18 >> 0x20);
        uStack_18 = CONCAT44(uStack_18._4_4_,fVar3);
        il2cpp_init_class();
        fVar3 = (float)uStack_18;
      }
      fVar3 = ceilf(fVar3);
      uStack_18 = CONCAT44((int)fVar3,(float)uStack_18);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_18 + 4);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Floor>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Floor_b__24_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f42250

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Floor>b__24_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  float fVar3;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_05703dc5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dc5 = '\x01';
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
    fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar2,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      if (DAT_056fdee5 == '\0') {
        uStack_18 = CONCAT44(uStack_18._4_4_,fVar3);
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdee5 = '\x01';
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
        fVar3 = (float)uStack_18;
      }
      else {
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar1 == 0) {
        uStack_18._4_4_ = (undefined4)((ulong)uStack_18 >> 0x20);
        uStack_18 = CONCAT44(uStack_18._4_4_,fVar3);
        il2cpp_init_class();
        fVar3 = (float)uStack_18;
      }
      fVar3 = floorf(fVar3);
      uStack_18 = CONCAT44((int)fVar3,(float)uStack_18);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_18 + 4);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Round>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Round_b__25_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f42360

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Round>b__25_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar3;
  double dVar4;
  int iStack_24;
  double dStack_20;
  Il2CppMethodPointer pIStack_18;
  
  if (DAT_05703dc6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dc6 = '\x01';
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
    method_00 = MethodInfo_Single_ConvertTo_Single;
    fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                      (pIVar2,(MethodInfo_24AB990 *)MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      if (DAT_056ff244 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056ff244 = '\x01';
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      dStack_20 = (double)fVar3;
      method_01 = (MethodInfo *)&stack0xffffffffffffffe8;
      dVar4 = modf(dStack_20,(double *)method_01,method_00);
      if (0.0 <= fVar3) {
        if ((dVar4 != 0.5) || (NAN(dVar4))) {
          pIStack_18 = (Il2CppMethodPointer)floor(dStack_20 + 0.5,method_01);
        }
        else if (((long)(double)pIStack_18 & 1U) != 0) {
          pIStack_18 = (Il2CppMethodPointer)((double)pIStack_18 + 1.0);
        }
      }
      else if ((dVar4 != -0.5) || (NAN(dVar4))) {
        pIStack_18 = (Il2CppMethodPointer)ceil(dStack_20 + -0.5,method_01);
      }
      else if (((long)(double)pIStack_18 & 1U) != 0) {
        pIStack_18 = (Il2CppMethodPointer)((double)pIStack_18 + -1.0);
      }
      iStack_24 = (int)(double)pIStack_18;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_24);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Deg2Rad>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Deg2Rad_b__26_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f42510

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Deg2Rad>b__26_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_05703dc7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dc7 = '\x01';
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
    CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Rad2Deg>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Rad2Deg_b__27_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f425c0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Rad2Deg>b__27_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_05703dc8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dc8 = '\x01';
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
    CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__28_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f42670

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Lerp>b__28_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_24;
  
  if (DAT_05703dc9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dc9 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
      if (1 < (uint)__a->max_length) {
        fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
        if (2 < (uint)__a->max_length) {
          fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
            fVar5 = 1.0;
            if (fVar4 <= 1.0) {
              fVar5 = fVar4;
            }
            local_24 = (fVar3 - fVar2) * (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5) + fVar2;
            pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_24);
            return pIVar1;
          }
          goto LAB_03f42781;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03f42781:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__LerpUnclamped>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__29_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f42790

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__LerpUnclamped>b__29_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_24;
  
  if (DAT_05703dca == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dca = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
      if (1 < (uint)__a->max_length) {
        fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
        if (2 < (uint)__a->max_length) {
          fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
            local_24 = (fVar3 - fVar2) * fVar4 + fVar2;
            pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_24);
            return pIVar1;
          }
          goto LAB_03f42886;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03f42886:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Sign>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Sign_b__30_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f42890

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Sign>b__30_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_05703dcb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dcb = '\x01';
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
    CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__InverseLerp>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__InverseLerp_b__31_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f42950

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__InverseLerp>b__31_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_24;
  
  if (DAT_05703dcc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dcc = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f42a6a:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if ((1 < (uint)__a->max_length) &&
       (fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single),
       2 < (uint)__a->max_length)) {
      fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
          fVar2 = (fVar4 - fVar2) / (fVar3 - fVar2);
          local_24 = 0.0;
          if ((0.0 <= fVar2) && (local_24 = 1.0, fVar2 <= 1.0)) {
            local_24 = fVar2;
          }
        }
        else {
          local_24 = 0.0;
        }
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_24);
        return pIVar1;
      }
      goto LAB_03f42a6a;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__LerpAngle>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__LerpAngle_b__32_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f42a70

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__LerpAngle>b__32_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_4c;
  float local_48;
  float local_38;
  
  if (DAT_05703dcd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dcd = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
      if (1 < (uint)__a->max_length) {
        local_48 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
        if (2 < (uint)__a->max_length) {
          local_38 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                               (__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
            local_48 = local_48 - fVar2;
            fVar3 = floorf(local_48 / 360.0);
            fVar4 = local_48 - fVar3 * 360.0;
            fVar3 = 360.0;
            if (fVar4 <= 360.0) {
              fVar3 = fVar4;
            }
            fVar3 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar3);
            fVar4 = 1.0;
            if (local_38 <= 1.0) {
              fVar4 = local_38;
            }
            local_4c = (float)(-(uint)(0.0 <= local_38) & (uint)fVar4) *
                       (float)(~-(uint)(180.0 < fVar3) & (uint)fVar3 |
                              (uint)(fVar3 + -360.0) & -(uint)(180.0 < fVar3)) + fVar2;
            pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_4c);
            return pIVar1;
          }
          goto LAB_03f42be8;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03f42be8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Log>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Log_b__33_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f42bf0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Log>b__33_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicMathBuiltin_o *__this_00;
  float value;
  undefined1 auStack_14 [4];
  
  if (DAT_05703dce == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dce = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (CustomLogic_CustomLogicMathBuiltin_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = MethodInfo_Single_ConvertTo_Single;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                      ((Il2CppObject *)__this_00,(MethodInfo_24AB990 *)MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      logf(__this_00,value,method_00);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveTowards>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__MoveTowards_b__34_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f42ca0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__MoveTowards>b__34_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float local_3c;
  float local_38;
  
  if (DAT_05703dcf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dcf = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
      if (1 < (uint)__a->max_length) {
        local_38 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
        if (2 < (uint)__a->max_length) {
          fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
            local_3c = local_38;
            if (fVar3 < ABS(local_38 - fVar2)) {
              local_3c = fVar2 + fVar3 * *(float *)(&DAT_00cd0ef0 +
                                                   (ulong)(0.0 <= local_38 - fVar2) * 4);
            }
            pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_3c);
            return pIVar1;
          }
          goto LAB_03f42dc0;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03f42dc0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveTowardsAngle>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__MoveTowardsAngle_b__35_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f42dd0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__MoveTowardsAngle>b__35_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_54;
  float local_4c;
  undefined1 local_48 [16];
  float local_38;
  
  if (DAT_05703dd0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dd0 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
      if (1 < (uint)__a->max_length) {
        local_54 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
        if (2 < (uint)__a->max_length) {
          local_38 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                               (__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
            local_48 = ZEXT416((uint)(local_54 - fVar2));
            fVar3 = floorf((local_54 - fVar2) / 360.0);
            fVar4 = (float)local_48._0_4_ - fVar3 * 360.0;
            fVar3 = 360.0;
            if (fVar4 <= 360.0) {
              fVar3 = fVar4;
            }
            fVar3 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar3);
            fVar3 = (float)(~-(uint)(180.0 < fVar3) & (uint)fVar3 |
                           (uint)(fVar3 + -360.0) & -(uint)(180.0 < fVar3));
            if ((local_38 <= fVar3) || (fVar3 <= -local_38)) {
              local_54 = fVar2 + fVar3;
              if (local_38 < ABS(local_54 - fVar2)) {
                local_54 = fVar2 + local_38 *
                                   *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= local_54 - fVar2) * 4);
              }
            }
            local_4c = local_54;
            pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_4c);
            return pIVar1;
          }
          goto LAB_03f42f96;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03f42f96:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__PingPong>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__PingPong_b__36_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f42fa0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__PingPong>b__36_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_4c;
  float local_48;
  float local_38;
  
  if (DAT_05703dd1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dd1 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f430c2:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_48 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if (1 < (uint)__a->max_length) {
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        local_38 = fVar2 + fVar2;
        fVar3 = floorf(local_48 / local_38);
        fVar4 = local_48 - fVar3 * local_38;
        fVar3 = local_38;
        if (fVar4 <= local_38) {
          fVar3 = fVar4;
        }
        local_4c = fVar2 - ABS((float)(-(uint)(0.0 <= fVar4) & (uint)fVar3) - fVar2);
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_4c);
        return pIVar1;
      }
      goto LAB_03f430c2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Exp>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Exp_b__37_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f430d0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__Exp>b__37_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicMathBuiltin_o *__this_00;
  float value;
  undefined1 auStack_14 [4];
  
  if (DAT_05703dd2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dd2 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (CustomLogic_CustomLogicMathBuiltin_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = MethodInfo_Single_ConvertTo_Single;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                      ((Il2CppObject *)__this_00,(MethodInfo_24AB990 *)MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      expf(__this_00,value,method_00);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__SmoothStep>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__SmoothStep_b__38_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f43180

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__SmoothStep>b__38_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_24;
  
  if (DAT_05703dd3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dd3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
      if (1 < (uint)__a->max_length) {
        fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
        if (2 < (uint)__a->max_length) {
          fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
            fVar5 = 1.0;
            if (fVar4 <= 1.0) {
              fVar5 = fVar4;
            }
            fVar5 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
            fVar4 = fVar5 * 3.0 * fVar5 + fVar5 * -2.0 * fVar5 * fVar5;
            local_24 = fVar2 * (1.0 - fVar4) + fVar3 * fVar4;
            pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_24);
            return pIVar1;
          }
          goto LAB_03f432c8;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03f432c8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseAnd>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseAnd_b__39_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f432d0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__BitwiseAnd>b__39_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_24 [4];
  
  if (DAT_05703dd4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dd4 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f43382:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    if (1 < (uint)__a->max_length) {
      CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_24);
        return pIVar1;
      }
      goto LAB_03f43382;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseOr>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseOr_b__40_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f43390

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__BitwiseOr>b__40_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_24 [4];
  
  if (DAT_05703dd5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dd5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f43442:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    if (1 < (uint)__a->max_length) {
      CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_24);
        return pIVar1;
      }
      goto LAB_03f43442;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseXor>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseXor_b__41_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f43450

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__BitwiseXor>b__41_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_24 [4];
  
  if (DAT_05703dd6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dd6 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f43502:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    if (1 < (uint)__a->max_length) {
      CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_24);
        return pIVar1;
      }
      goto LAB_03f43502;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseNot>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseNot_b__42_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f43510

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__BitwiseNot>b__42_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_05703dd7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dd7 = '\x01';
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
    CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseLeftShift>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseLeftShift_b__43_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f435b0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__BitwiseLeftShift>b__43_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_24 [4];
  
  if (DAT_05703dd8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dd8 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f43664:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    if (1 < (uint)__a->max_length) {
      CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_24);
        return pIVar1;
      }
      goto LAB_03f43664;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseRightShift>b__44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseRightShift_b__44_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f43670

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_<>c__<__CreateMethodBinding__BitwiseRightShift>b__44_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMathBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_24 [4];
  
  if (DAT_05703dd9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dd9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f43724:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    if (1 < (uint)__a->max_length) {
      CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_24);
        return pIVar1;
      }
      goto LAB_03f43724;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicMathBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3f3cc60

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicMathBuiltin_Bindings__CreateMemberBinding
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
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  
  if (DAT_05703d8c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Clamp");
    il2cpp_init_method_metadata(&"Deg2RadConstant");
    il2cpp_init_method_metadata(&"Round");
    il2cpp_init_method_metadata(&"Atan2");
    il2cpp_init_method_metadata(&"InverseLerp");
    il2cpp_init_method_metadata(&"Exp");
    il2cpp_init_method_metadata(&"BitwiseOr");
    il2cpp_init_method_metadata(&"BitwiseNot");
    il2cpp_init_method_metadata(&"Sign");
    il2cpp_init_method_metadata(&"Sin");
    il2cpp_init_method_metadata(&"PI");
    il2cpp_init_method_metadata(&"Lerp");
    il2cpp_init_method_metadata(&"Asin");
    il2cpp_init_method_metadata(&"PingPong");
    il2cpp_init_method_metadata(&"Infinity");
    il2cpp_init_method_metadata(&"Max");
    il2cpp_init_method_metadata(&"BitwiseRightShift");
    il2cpp_init_method_metadata(&"Atan");
    il2cpp_init_method_metadata(&"LerpUnclamped");
    il2cpp_init_method_metadata(&"Rad2Deg");
    il2cpp_init_method_metadata(&"MoveTowards");
    il2cpp_init_method_metadata(&"Acos");
    il2cpp_init_method_metadata(&"Pow");
    il2cpp_init_method_metadata(&"Epsilon");
    il2cpp_init_method_metadata(&"MoveTowardsAngle");
    il2cpp_init_method_metadata(&"Rad2DegConstant");
    il2cpp_init_method_metadata(&"Floor");
    il2cpp_init_method_metadata(&"Sqrt");
    il2cpp_init_method_metadata(&"SmoothStep");
    il2cpp_init_method_metadata(&"BitwiseXor");
    il2cpp_init_method_metadata(&"Mod");
    il2cpp_init_method_metadata(&"Min");
    il2cpp_init_method_metadata(&"Deg2Rad");
    il2cpp_init_method_metadata(&"BitwiseLeftShift");
    il2cpp_init_method_metadata(&"LerpAngle");
    il2cpp_init_method_metadata(&"NegativeInfinity");
    il2cpp_init_method_metadata(&"Repeat");
    il2cpp_init_method_metadata(&"Ceil");
    il2cpp_init_method_metadata(&"Log");
    il2cpp_init_method_metadata(&"Abs");
    il2cpp_init_method_metadata(&"Cos");
    il2cpp_init_method_metadata(&"BitwiseAnd");
    il2cpp_init_method_metadata(&"Tan");
    DAT_05703d8c = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x8f325c2a) {
    if (uVar3 < 0x44a37324) {
      if (uVar3 < 0x2e9445f8) {
        if (uVar3 < 0x1762fe42) {
          if (uVar3 == 0x6626d4a) {
            bVar4 = System_String__op_Equality(name,"Repeat",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05703d99 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Repeat_b__14_0);
                il2cpp_init_method_metadata(&TypeInfo_c);
                DAT_05703d99 = '\x01';
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_init_class();
                pSVar9 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0x38);
              }
              else {
                pSVar9 = *(System_Func_T__object____object__o **)
                          (*(long *)(TypeInfo_c + 0xb8) + 0x38);
              }
              if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
                System_Func<object__object__object>___ctor();
                lVar2 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar9;
                il2cpp_runtime_glue(lVar2 + 0x38,pSVar9);
              }
              pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
              CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar10;
            }
          }
          else if ((uVar3 == 0x1762fe41) &&
                  (bVar4 = System_String__op_Equality(name,"BitwiseNot",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703db5 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BitwiseNot_b__42);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703db5 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x118);
            }
            else {
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x118);
            }
            if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x118) = pSVar9;
              il2cpp_runtime_glue(lVar2 + 0x118,pSVar9);
            }
            pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar10;
          }
        }
        else if (uVar3 == 0x27fffab2) {
          bVar4 = System_String__op_Equality(name,"PI",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703d8d == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PI_g____getter);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object);
              DAT_05703d8d = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object);
            System_Func<object__object>___ctor();
            pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if (uVar3 == 0x2da77deb) {
          bVar4 = System_String__op_Equality(name,"MoveTowardsAngle",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703dae == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveTowardsAngle);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703dae = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0xe0);
            }
            else {
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0xe0);
            }
            if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xe0) = pSVar9;
              il2cpp_runtime_glue(lVar2 + 0xe0,pSVar9);
            }
            pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar10;
          }
        }
        else if ((uVar3 == 0x2e9445f7) &&
                (bVar4 = System_String__op_Equality(name,"Min",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703d95 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Min_b__10_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703d95 = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x18,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 < 0x3da28cb3) {
        if (uVar3 == 0x3ca7e3b9) {
          bVar4 = System_String__op_Equality(name,"Max",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703d94 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Max_b__9_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703d94 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            else {
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
              il2cpp_runtime_glue(lVar2 + 0x10,pSVar9);
            }
            pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar10;
          }
        }
        else if ((uVar3 == 0x3da28cb2) &&
                (bVar4 = System_String__op_Equality(name,"Rad2DegConstant",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703d90 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rad2DegConstant);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object);
            DAT_05703d90 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x3f6740bd) {
        bVar4 = System_String__op_Equality(name,"SmoothStep",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703db1 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SmoothStep_b__38);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703db1 = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xf8) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0xf8,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x42bc54ed) {
        bVar4 = System_String__op_Equality(name,"Sin",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703d9b == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Sin_b__16_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703d9b = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x48,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x44a37323) &&
              (bVar4 = System_String__op_Equality(name,"Mod",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703d9a == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Mod_b__15_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703d9a = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x40,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 < 0x5ea410be) {
      if (uVar3 < 0x4e2d0c53) {
        if (uVar3 == 0x4dea6e5c) {
          bVar4 = System_String__op_Equality(name,"Clamp",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703d93 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Clamp_b__8_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703d93 = '\x01';
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
              pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
              il2cpp_runtime_glue(lVar2 + 8,pSVar9);
            }
            pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar10;
          }
        }
        else if ((uVar3 == 0x4e2d0c52) &&
                (bVar4 = System_String__op_Equality(name,"Rad2Deg",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703da6 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Rad2Deg_b__27_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703da6 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0xa0,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x513efccb) {
        bVar4 = System_String__op_Equality(name,"LerpAngle",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703dab == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LerpAngle_b__32_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703dab = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 200) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 200,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x5e187a3c) {
        bVar4 = System_String__op_Equality(name,"Cos",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703d9c == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Cos_b__17_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703d9c = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x50,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x5ea410bd) &&
              (bVar4 = System_String__op_Equality(name,"Floor",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703da3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Floor_b__24_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703da3 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x88) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x88,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 < 0x7edc5dc7) {
      if (uVar3 == 0x638c103a) {
        bVar4 = System_String__op_Equality(name,"Deg2Rad",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703da5 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Deg2Rad_b__26_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703da5 = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x98) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x98,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x7c627bca) {
        bVar4 = System_String__op_Equality(name,"BitwiseRightShift",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703db7 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BitwiseRightShift);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703db7 = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x128) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x128,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x7edc5dc6) &&
              (bVar4 = System_String__op_Equality(name,"Asin",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703d9e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Asin_b__19_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703d9e = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x60,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x86a516df) {
      bVar4 = System_String__op_Equality(name,"Atan",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703da0 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Atan_b__21_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703da0 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x70,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x8cd299db) {
      bVar4 = System_String__op_Equality(name,"Abs",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703d97 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Abs_b__12_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703d97 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x28,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x8f325c29) &&
            (bVar4 = System_String__op_Equality(name,"BitwiseAnd",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703db2 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BitwiseAnd_b__39);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703db2 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x100);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x100);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x100) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x100,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0xc9773aa4) {
    if (uVar3 < 0xabbd87c6) {
      if (uVar3 < 0x96061d5b) {
        if (uVar3 == 0x8f6340c4) {
          bVar4 = System_String__op_Equality(name,"Sign",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703da9 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Sign_b__30_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703da9 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0xb8);
            }
            else {
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0xb8);
            }
            if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xb8) = pSVar9;
              il2cpp_runtime_glue(lVar2 + 0xb8,pSVar9);
            }
            pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar10;
          }
        }
        else if ((uVar3 == 0x96061d5a) &&
                (bVar4 = System_String__op_Equality(name,"InverseLerp",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703daa == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__InverseLerp_b__31);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703daa = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xc0)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xc0)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xc0) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0xc0,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x9e956088) {
        bVar4 = System_String__op_Equality(name,"Lerp",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703da7 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Lerp_b__28_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703da7 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0xa8,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0xa1dd7bf1) {
        bVar4 = System_String__op_Equality(name,"Log",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703dac == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Log_b__33_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703dac = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xd0) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0xd0,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0xabbd87c5) &&
              (bVar4 = System_String__op_Equality(name,"BitwiseXor",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703db4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BitwiseXor_b__41);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703db4 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x110);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x110);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x110) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x110,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 < 0xb3919aab) {
      if (uVar3 == 0xacfe0068) {
        bVar4 = System_String__op_Equality(name,"MoveTowards",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703dad == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveTowards_b__34);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703dad = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xd8) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0xd8,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0xb184d7bd) {
        bVar4 = System_String__op_Equality(name,"Epsilon",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703d92 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Epsilon_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object);
            DAT_05703d92 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0xb3919aaa) &&
              (bVar4 = System_String__op_Equality(name,"Deg2RadConstant",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703d91 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Deg2RadConstant);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object);
          DAT_05703d91 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xbc2e2b3f) {
      bVar4 = System_String__op_Equality(name,"Acos",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703d9f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Acos_b__20_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703d9f = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x68,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0xbd386b75) {
      bVar4 = System_String__op_Equality(name,"Pow",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703d96 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Pow_b__11_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703d96 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0xc9773aa3) &&
            (bVar4 = System_String__op_Equality(name,"PingPong",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703daf == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PingPong_b__36_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703daf = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe8);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe8);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0xe8) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0xe8,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0xe3112e29) {
    if (uVar3 < 0xd7ab87c9) {
      if (uVar3 == 0xd6176f0d) {
        bVar4 = System_String__op_Equality(name,"BitwiseOr",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703db3 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BitwiseOr_b__40_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703db3 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x108);
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)
                      (*(long *)(TypeInfo_c + 0xb8) + 0x108);
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x108) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x108,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0xd7ab87c8) &&
              (bVar4 = System_String__op_Equality(name,"Exp",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703db0 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Exp_b__37_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703db0 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0xf0) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0xf0,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0xe0993ada) {
      bVar4 = System_String__op_Equality(name,"NegativeInfinity",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703d8f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NegativeInfinit);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object);
          DAT_05703d8f = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xe2e31717) {
      bVar4 = System_String__op_Equality(name,"Atan2",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703da1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Atan2_b__22_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703da1 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x78,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0xe3112e28) &&
            (bVar4 = System_String__op_Equality(name,"Ceil",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703da2 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Ceil_b__23_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703da2 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x80,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0xf4248f7c) {
    if (uVar3 == 0xe740d999) {
      bVar4 = System_String__op_Equality(name,"Infinity",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703d8e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Infinity_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object);
          DAT_05703d8e = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xf176e11b) {
      bVar4 = System_String__op_Equality(name,"BitwiseLeftShift",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703db6 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BitwiseLeftShift);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703db6 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x120) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x120,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0xf4248f7b) &&
            (bVar4 = System_String__op_Equality(name,"LerpUnclamped",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703da8 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LerpUnclamped_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703da8 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb0);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb0);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0xb0) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0xb0,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 == 0xf4c753db) {
    bVar4 = System_String__op_Equality(name,"Round",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703da4 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Round_b__25_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703da4 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x90) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x90,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 == 0xfe1a87ef) {
    bVar4 = System_String__op_Equality(name,"Sqrt",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703d98 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Sqrt_b__13_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703d98 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x30,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if ((uVar3 == 0xff835f38) &&
          (bVar4 = System_String__op_Equality(name,"Tan",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703d9d == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Tan_b__18_0);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703d9d = '\x01';
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
      pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar9;
      il2cpp_runtime_glue(lVar2 + 0x58,pSVar9);
    }
    pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar10;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicMathBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__PI
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__PI (const MethodInfo* method);
// 0x3f3dc30

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__PI(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d8d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PI_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object);
    DAT_05703d8d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__Infinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Infinity (const MethodInfo* method);
// 0x3f3dcd0

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Infinity(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d8e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Infinity_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object);
    DAT_05703d8e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__NegativeInfinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__NegativeInfinity (const MethodInfo* method);
// 0x3f3dd70

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__NegativeInfinity
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d8f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NegativeInfinit);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object);
    DAT_05703d8f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__Rad2DegConstant
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Rad2DegConstant (const MethodInfo* method);
// 0x3f3de10

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Rad2DegConstant
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d90 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rad2DegConstant);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object);
    DAT_05703d90 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__Deg2RadConstant
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Deg2RadConstant (const MethodInfo* method);
// 0x3f3deb0

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Deg2RadConstant
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d91 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Deg2RadConstant);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object);
    DAT_05703d91 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__Epsilon
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Epsilon (const MethodInfo* method);
// 0x3f3df50

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Epsilon(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d92 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Epsilon_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object);
    DAT_05703d92 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Clamp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Clamp (const MethodInfo* method);
// 0x3f3dff0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Clamp(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d93 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Clamp_b__8_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d93 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Max
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Max (const MethodInfo* method);
// 0x3f3e140

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Max(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d94 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Max_b__9_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d94 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Min
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Min (const MethodInfo* method);
// 0x3f3e290

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Min(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d95 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Min_b__10_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d95 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Pow
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Pow (const MethodInfo* method);
// 0x3f3e3e0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Pow(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d96 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Pow_b__11_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d96 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Abs
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Abs (const MethodInfo* method);
// 0x3f3e530

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Abs(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d97 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Abs_b__12_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d97 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Sqrt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sqrt (const MethodInfo* method);
// 0x3f3e680

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sqrt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d98 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Sqrt_b__13_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d98 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Repeat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Repeat (const MethodInfo* method);
// 0x3f3e7d0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Repeat(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Repeat_b__14_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d99 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Mod
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Mod (const MethodInfo* method);
// 0x3f3e920

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Mod(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d9a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Mod_b__15_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d9a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Sin
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sin (const MethodInfo* method);
// 0x3f3ea70

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sin(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d9b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Sin_b__16_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d9b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Cos
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Cos (const MethodInfo* method);
// 0x3f3ebc0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Cos(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d9c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Cos_b__17_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d9c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Tan
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Tan (const MethodInfo* method);
// 0x3f3ed10

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Tan(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d9d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Tan_b__18_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d9d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Asin
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Asin (const MethodInfo* method);
// 0x3f3ee60

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Asin(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d9e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Asin_b__19_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d9e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Acos
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Acos (const MethodInfo* method);
// 0x3f3efb0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Acos(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703d9f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Acos_b__20_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d9f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Atan
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Atan (const MethodInfo* method);
// 0x3f3f100

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Atan(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703da0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Atan_b__21_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703da0 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Atan2
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Atan2 (const MethodInfo* method);
// 0x3f3f250

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Atan2(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703da1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Atan2_b__22_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703da1 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_glue(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Ceil
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Ceil (const MethodInfo* method);
// 0x3f3f3a0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Ceil(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703da2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Ceil_b__23_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703da2 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_glue(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Floor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Floor (const MethodInfo* method);
// 0x3f3f4f0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Floor(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703da3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Floor_b__24_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703da3 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x88) = function;
    il2cpp_runtime_glue(lVar2 + 0x88,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Round
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Round (const MethodInfo* method);
// 0x3f3f640

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Round(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703da4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Round_b__25_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703da4 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x90) = function;
    il2cpp_runtime_glue(lVar2 + 0x90,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Deg2Rad
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Deg2Rad (const MethodInfo* method);
// 0x3f3f790

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Deg2Rad(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703da5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Deg2Rad_b__26_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703da5 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x98) = function;
    il2cpp_runtime_glue(lVar2 + 0x98,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Rad2Deg
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Rad2Deg (const MethodInfo* method);
// 0x3f3f8e0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Rad2Deg(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703da6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Rad2Deg_b__27_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703da6 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = function;
    il2cpp_runtime_glue(lVar2 + 0xa0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Lerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Lerp (const MethodInfo* method);
// 0x3f3fa30

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Lerp(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703da7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Lerp_b__28_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703da7 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = function;
    il2cpp_runtime_glue(lVar2 + 0xa8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__LerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__LerpUnclamped (const MethodInfo* method);
// 0x3f3fb80

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__LerpUnclamped
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703da8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LerpUnclamped_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703da8 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xb0) = function;
    il2cpp_runtime_glue(lVar2 + 0xb0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Sign
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sign (const MethodInfo* method);
// 0x3f3fcd0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sign(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703da9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Sign_b__30_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703da9 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xb8) = function;
    il2cpp_runtime_glue(lVar2 + 0xb8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__InverseLerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__InverseLerp (const MethodInfo* method);
// 0x3f3fe20

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__InverseLerp(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703daa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__InverseLerp_b__31);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703daa = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xc0) = function;
    il2cpp_runtime_glue(lVar2 + 0xc0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__LerpAngle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__LerpAngle (const MethodInfo* method);
// 0x3f3ff70

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__LerpAngle(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703dab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LerpAngle_b__32_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703dab = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 200) = function;
    il2cpp_runtime_glue(lVar2 + 200,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Log
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Log (const MethodInfo* method);
// 0x3f400c0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Log(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703dac == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Log_b__33_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703dac = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xd0) = function;
    il2cpp_runtime_glue(lVar2 + 0xd0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__MoveTowards
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__MoveTowards (const MethodInfo* method);
// 0x3f40210

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__MoveTowards(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703dad == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveTowards_b__34);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703dad = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xd8) = function;
    il2cpp_runtime_glue(lVar2 + 0xd8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__MoveTowardsAngle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__MoveTowardsAngle (const MethodInfo* method);
// 0x3f40360

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__MoveTowardsAngle
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703dae == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveTowardsAngle);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703dae = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xe0) = function;
    il2cpp_runtime_glue(lVar2 + 0xe0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__PingPong
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__PingPong (const MethodInfo* method);
// 0x3f404b0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__PingPong(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703daf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PingPong_b__36_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703daf = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xe8) = function;
    il2cpp_runtime_glue(lVar2 + 0xe8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Exp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Exp (const MethodInfo* method);
// 0x3f40600

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Exp(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703db0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Exp_b__37_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703db0 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xf0) = function;
    il2cpp_runtime_glue(lVar2 + 0xf0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__SmoothStep
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__SmoothStep (const MethodInfo* method);
// 0x3f40750

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__SmoothStep(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703db1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SmoothStep_b__38);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703db1 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xf8) = function;
    il2cpp_runtime_glue(lVar2 + 0xf8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseAnd
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseAnd (const MethodInfo* method);
// 0x3f408a0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseAnd(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703db2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BitwiseAnd_b__39);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703db2 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x100) = function;
    il2cpp_runtime_glue(lVar2 + 0x100,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseOr
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseOr (const MethodInfo* method);
// 0x3f409f0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseOr(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703db3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BitwiseOr_b__40_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703db3 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x108) = function;
    il2cpp_runtime_glue(lVar2 + 0x108,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseXor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseXor (const MethodInfo* method);
// 0x3f40b40

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseXor(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703db4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BitwiseXor_b__41);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703db4 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x110) = function;
    il2cpp_runtime_glue(lVar2 + 0x110,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseNot
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseNot (const MethodInfo* method);
// 0x3f40c90

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseNot(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703db5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BitwiseNot_b__42);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703db5 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x118) = function;
    il2cpp_runtime_glue(lVar2 + 0x118,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseLeftShift
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseLeftShift (const MethodInfo* method);
// 0x3f40de0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseLeftShift
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703db6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BitwiseLeftShift);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703db6 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x120) = function;
    il2cpp_runtime_glue(lVar2 + 0x120,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseRightShift
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseRightShift (const MethodInfo* method);
// 0x3f40f30

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseRightShift
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this;
  
  if (DAT_05703db7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BitwiseRightShift);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703db7 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMathBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x128) = function;
    il2cpp_runtime_glue(lVar2 + 0x128,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMathBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMathBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicMathBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3f41080

void CustomLogic_CustomLogicMathBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703db8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Clamp");
    il2cpp_init_method_metadata(&"Deg2RadConstant");
    il2cpp_init_method_metadata(&"Round");
    il2cpp_init_method_metadata(&"Atan2");
    il2cpp_init_method_metadata(&"InverseLerp");
    il2cpp_init_method_metadata(&"Exp");
    il2cpp_init_method_metadata(&"BitwiseOr");
    il2cpp_init_method_metadata(&"BitwiseNot");
    il2cpp_init_method_metadata(&"Sign");
    il2cpp_init_method_metadata(&"Sin");
    il2cpp_init_method_metadata(&"PI");
    il2cpp_init_method_metadata(&"Lerp");
    il2cpp_init_method_metadata(&"Asin");
    il2cpp_init_method_metadata(&"PingPong");
    il2cpp_init_method_metadata(&"Infinity");
    il2cpp_init_method_metadata(&"Max");
    il2cpp_init_method_metadata(&"BitwiseRightShift");
    il2cpp_init_method_metadata(&"Atan");
    il2cpp_init_method_metadata(&"LerpUnclamped");
    il2cpp_init_method_metadata(&"Rad2Deg");
    il2cpp_init_method_metadata(&"MoveTowards");
    il2cpp_init_method_metadata(&"Acos");
    il2cpp_init_method_metadata(&"Pow");
    il2cpp_init_method_metadata(&"Epsilon");
    il2cpp_init_method_metadata(&"MoveTowardsAngle");
    il2cpp_init_method_metadata(&"Rad2DegConstant");
    il2cpp_init_method_metadata(&"Floor");
    il2cpp_init_method_metadata(&"Sqrt");
    il2cpp_init_method_metadata(&"SmoothStep");
    il2cpp_init_method_metadata(&"BitwiseXor");
    il2cpp_init_method_metadata(&"Mod");
    il2cpp_init_method_metadata(&"Min");
    il2cpp_init_method_metadata(&"Deg2Rad");
    il2cpp_init_method_metadata(&"BitwiseLeftShift");
    il2cpp_init_method_metadata(&"LerpAngle");
    il2cpp_init_method_metadata(&"NegativeInfinity");
    il2cpp_init_method_metadata(&"Repeat");
    il2cpp_init_method_metadata(&"Ceil");
    il2cpp_init_method_metadata(&"Log");
    il2cpp_init_method_metadata(&"Abs");
    il2cpp_init_method_metadata(&"Cos");
    il2cpp_init_method_metadata(&"BitwiseAnd");
    il2cpp_init_method_metadata(&"Tan");
    DAT_05703db8 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"PI",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Infinity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"NegativeInfinity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Rad2DegConstant",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Deg2RadConstant",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Epsilon",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Clamp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Max",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Min",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Pow",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Abs",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Sqrt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Repeat",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Mod",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Sin",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Cos",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Tan",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Asin",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Acos",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Atan",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Atan2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Ceil",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Floor",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Round",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Deg2Rad",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Rad2Deg",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Lerp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LerpUnclamped",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Sign",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"InverseLerp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LerpAngle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Log",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MoveTowards",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MoveTowardsAngle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PingPong",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Exp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SmoothStep",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BitwiseAnd",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BitwiseOr",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BitwiseXor",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BitwiseNot",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BitwiseLeftShift",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BitwiseRightShift",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__PI>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__PI_g____getter_2_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x3f416c0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings__<__CreatePropertyBinding__PI>g____getter_2_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__Infinity>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Infinity_g____getter_3_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x3f416e0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings__<__CreatePropertyBinding__Infinity>g____getter_3_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__NegativeInfinity>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__NegativeInfinity_g____getter_4_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x3f41700

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings__<__CreatePropertyBinding__NegativeInfinity>g____getter_4_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__Rad2DegConstant>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Rad2DegConstant_g____getter_5_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x3f41720

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings__<__CreatePropertyBinding__Rad2DegConstant>g____getter_5_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__Deg2RadConstant>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Deg2RadConstant_g____getter_6_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x3f41740

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings__<__CreatePropertyBinding__Deg2RadConstant>g____getter_6_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__Epsilon>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Epsilon_g____getter_7_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x3f41760

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings__<__CreatePropertyBinding__Epsilon>g____getter_7_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (DAT_05703e92 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Mathf);
    DAT_05703e92 = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicMathBuiltin___ctor (CustomLogic_CustomLogicMathBuiltin_o* __this, const MethodInfo* method);
// 0x3f3be40

void CustomLogic_CustomLogicMathBuiltin___ctor
               (CustomLogic_CustomLogicMathBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703d83 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703d83 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method);
  return;
}


// CustomLogic.CustomLogicMathBuiltin$$get_PI
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_PI (const MethodInfo* method);
// 0x3f3bea0

float CustomLogic_CustomLogicMathBuiltin__get_PI(MethodInfo *method)

{
  return 3.1415927;
}


// CustomLogic.CustomLogicMathBuiltin$$get_Infinity
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_Infinity (const MethodInfo* method);
// 0x3f3beb0

float CustomLogic_CustomLogicMathBuiltin__get_Infinity(MethodInfo *method)

{
  return INFINITY;
}


// CustomLogic.CustomLogicMathBuiltin$$get_NegativeInfinity
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_NegativeInfinity (const MethodInfo* method);
// 0x3f3bec0

float CustomLogic_CustomLogicMathBuiltin__get_NegativeInfinity(MethodInfo *method)

{
  return -INFINITY;
}


// CustomLogic.CustomLogicMathBuiltin$$get_Rad2DegConstant
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_Rad2DegConstant (const MethodInfo* method);
// 0x3f3bed0

float CustomLogic_CustomLogicMathBuiltin__get_Rad2DegConstant(MethodInfo *method)

{
  return 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$get_Deg2RadConstant
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_Deg2RadConstant (const MethodInfo* method);
// 0x3f3bee0

float CustomLogic_CustomLogicMathBuiltin__get_Deg2RadConstant(MethodInfo *method)

{
  return 0.017453292;
}


// CustomLogic.CustomLogicMathBuiltin$$get_Epsilon
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_Epsilon (const MethodInfo* method);
// 0x3f3bef0

float CustomLogic_CustomLogicMathBuiltin__get_Epsilon(MethodInfo *method)

{
  if (DAT_05703d84 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Mathf);
    DAT_05703d84 = '\x01';
  }
  return **(float **)(TypeInfo_Mathf + 0xb8);
}


// CustomLogic.CustomLogicMathBuiltin$$Clamp
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin__Clamp (CustomLogic_CustomLogicMathBuiltin_o* __this, Il2CppObject* value, Il2CppObject* min, Il2CppObject* max, const MethodInfo* method);
// 0x3f3bf30

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin__Clamp
          (CustomLogic_CustomLogicMathBuiltin_o *__this,Il2CppObject *value,Il2CppObject *min,
          Il2CppObject *max,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Il2CppObject *pIVar3;
  uint *puVar4;
  undefined8 *puVar5;
  float fVar6;
  uint local_50;
  uint local_4c;
  float local_48;
  float local_38;
  
  if (DAT_05703d85 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d85 = '\x01';
  }
  if ((value != (Il2CppObject *)0x0) && (value->klass == DAT_05711068)) {
    puVar4 = (uint *)il2cpp_glue_022c7330(value);
    if ((min != (Il2CppObject *)0x0) && (min->klass == DAT_05711068)) {
      uVar1 = *puVar4;
      puVar4 = (uint *)il2cpp_glue_022c7330(min);
      if ((max != (Il2CppObject *)0x0) && (max->klass == DAT_05711068)) {
        uVar2 = *puVar4;
        puVar4 = (uint *)il2cpp_glue_022c7330(max);
        local_4c = *puVar4;
        if ((int)uVar1 <= (int)*puVar4) {
          local_4c = uVar1;
        }
        if ((int)uVar1 < (int)uVar2) {
          local_4c = uVar2;
        }
        puVar4 = &local_4c;
        puVar5 = &DAT_05711068;
        goto LAB_03f3c003;
      }
    }
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_38 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(value,MethodInfo_Single_ConvertTo_Single);
  local_48 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(min,MethodInfo_Single_ConvertTo_Single);
  fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(max,MethodInfo_Single_ConvertTo_Single);
  if (local_38 <= fVar6) {
    fVar6 = local_38;
  }
  local_50 = ~-(uint)(local_48 <= local_38) & (uint)local_48 |
             (uint)fVar6 & -(uint)(local_48 <= local_38);
  puVar4 = &local_50;
  puVar5 = &DAT_05711098;
LAB_03f3c003:
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(*puVar5,puVar4);
  return pIVar3;
}


// CustomLogic.CustomLogicMathBuiltin$$Max
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin__Max (CustomLogic_CustomLogicMathBuiltin_o* __this, Il2CppObject* a, Il2CppObject* b, const MethodInfo* method);
// 0x3f3c080

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin__Max
          (CustomLogic_CustomLogicMathBuiltin_o *__this,Il2CppObject *a,Il2CppObject *b,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float local_28;
  float local_24;
  
  if (DAT_05703d86 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d86 = '\x01';
  }
  if ((a != (Il2CppObject *)0x0) && (a->klass == DAT_05711068)) {
    pfVar2 = (float *)il2cpp_glue_022c7330(a);
    if ((b != (Il2CppObject *)0x0) && (b->klass == DAT_05711068)) {
      fVar4 = *pfVar2;
      pfVar2 = (float *)il2cpp_glue_022c7330(b);
      local_24 = *pfVar2;
      if ((int)*pfVar2 <= (int)fVar4) {
        local_24 = fVar4;
      }
      pfVar2 = &local_24;
      puVar3 = &DAT_05711068;
      goto LAB_03f3c128;
    }
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(a,MethodInfo_Single_ConvertTo_Single);
  fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(b,MethodInfo_Single_ConvertTo_Single);
  local_28 = fVar4;
  if (fVar4 <= fVar5) {
    local_28 = fVar5;
  }
  pfVar2 = &local_28;
  puVar3 = &DAT_05711098;
LAB_03f3c128:
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(*puVar3,pfVar2);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Min
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin__Min (CustomLogic_CustomLogicMathBuiltin_o* __this, Il2CppObject* a, Il2CppObject* b, const MethodInfo* method);
// 0x3f3c180

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin__Min
          (CustomLogic_CustomLogicMathBuiltin_o *__this,Il2CppObject *a,Il2CppObject *b,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float local_28;
  float local_24;
  
  if (DAT_05703d87 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d87 = '\x01';
  }
  if ((a != (Il2CppObject *)0x0) && (a->klass == DAT_05711068)) {
    pfVar2 = (float *)il2cpp_glue_022c7330(a);
    if ((b != (Il2CppObject *)0x0) && (b->klass == DAT_05711068)) {
      fVar4 = *pfVar2;
      pfVar2 = (float *)il2cpp_glue_022c7330(b);
      local_24 = *pfVar2;
      if ((int)fVar4 <= (int)*pfVar2) {
        local_24 = fVar4;
      }
      pfVar2 = &local_24;
      puVar3 = &DAT_05711068;
      goto LAB_03f3c228;
    }
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(a,MethodInfo_Single_ConvertTo_Single);
  fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(b,MethodInfo_Single_ConvertTo_Single);
  local_28 = fVar4;
  if (fVar5 <= fVar4) {
    local_28 = fVar5;
  }
  pfVar2 = &local_28;
  puVar3 = &DAT_05711098;
LAB_03f3c228:
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(*puVar3,pfVar2);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Pow
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Pow (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, const MethodInfo* method);
// 0x3f3c280

float CustomLogic_CustomLogicMathBuiltin__Pow
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = powf(__this,a,b,method);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Abs
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin__Abs (CustomLogic_CustomLogicMathBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x3f3c290

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin__Abs
          (CustomLogic_CustomLogicMathBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  Il2CppObject *pIVar4;
  undefined8 *puVar5;
  float local_20;
  float local_1c;
  
  if (DAT_05703d88 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d88 = '\x01';
  }
  if ((value == (Il2CppObject *)0x0) || (value->klass != DAT_05711068)) {
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_20 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(value,MethodInfo_Single_ConvertTo_Single);
    local_20 = ABS(local_20);
    pfVar3 = &local_20;
    puVar5 = &DAT_05711098;
  }
  else {
    pfVar3 = (float *)il2cpp_glue_022c7330(value);
    fVar1 = *pfVar3;
    if (DAT_05700143 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_05700143 = '\x01';
      iVar2 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_init_class();
    }
    local_1c = (float)-(int)fVar1;
    if (0 < (int)fVar1) {
      local_1c = fVar1;
    }
    pfVar3 = &local_1c;
    puVar5 = &DAT_05711068;
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(*puVar5,pfVar3);
  return pIVar4;
}


// CustomLogic.CustomLogicMathBuiltin$$Sqrt
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Sqrt (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3f3c3a0

float CustomLogic_CustomLogicMathBuiltin__Sqrt
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  if (0.0 <= value) {
    return SQRT(value);
  }
  fVar1 = sqrtf(value);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Repeat
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin__Repeat (CustomLogic_CustomLogicMathBuiltin_o* __this, Il2CppObject* value, Il2CppObject* max, const MethodInfo* method);
// 0x3f3c3c0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin__Repeat
          (CustomLogic_CustomLogicMathBuiltin_o *__this,Il2CppObject *value,Il2CppObject *max,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  uint uStack_3c;
  float fStack_38;
  float fStack_28;
  
  if (DAT_05703d89 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    DAT_05703d89 = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fStack_38 = MiscExtensions__UnboxToFloat(value,(MethodInfo *)0x0);
  fStack_28 = MiscExtensions__UnboxToFloat(max,(MethodInfo *)0x0);
  fVar2 = floorf(fStack_38 / fStack_28);
  fVar3 = fStack_38 - fVar2 * fStack_28;
  fVar2 = fStack_28;
  if (fVar3 <= fStack_28) {
    fVar2 = fVar3;
  }
  uStack_3c = -(uint)(0.0 <= fVar3) & (uint)fVar2;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&uStack_3c);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Mod
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__Mod (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t a, int32_t b, const MethodInfo* method);
// 0x3f3c480

int32_t CustomLogic_CustomLogicMathBuiltin__Mod
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t a,int32_t b,
                  MethodInfo *method)

{
  return a % b;
}


// CustomLogic.CustomLogicMathBuiltin$$Sin
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Sin (CustomLogic_CustomLogicMathBuiltin_o* __this, float angle, const MethodInfo* method);
// 0x3f3c490

float CustomLogic_CustomLogicMathBuiltin__Sin
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float angle,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = sinf(angle * 0.017453292);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Cos
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Cos (CustomLogic_CustomLogicMathBuiltin_o* __this, float angle, const MethodInfo* method);
// 0x3f3c4a0

float CustomLogic_CustomLogicMathBuiltin__Cos
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float angle,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = cosf(angle * 0.017453292);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Tan
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Tan (CustomLogic_CustomLogicMathBuiltin_o* __this, float angle, const MethodInfo* method);
// 0x3f3c4b0

float CustomLogic_CustomLogicMathBuiltin__Tan
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float angle,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = tanf(angle * 0.017453292);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Asin
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Asin (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3f3c4c0

float CustomLogic_CustomLogicMathBuiltin__Asin
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = asinf(value);
  return fVar1 * 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$Acos
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Acos (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3f3c4d0

float CustomLogic_CustomLogicMathBuiltin__Acos
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = acosf(value);
  return fVar1 * 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$Atan
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Atan (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3f3c4e0

float CustomLogic_CustomLogicMathBuiltin__Atan
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = atanf(value);
  return fVar1 * 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$Atan2
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Atan2 (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, const MethodInfo* method);
// 0x3f3c4f0

float CustomLogic_CustomLogicMathBuiltin__Atan2
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = atan2f(a,b);
  return fVar1 * 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$Ceil
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__Ceil (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3f3c500

int32_t CustomLogic_CustomLogicMathBuiltin__Ceil
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  
  if (DAT_056fdee8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fdee8 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 != 0) {
    fVar2 = ceilf(value);
    return (int)fVar2;
  }
  il2cpp_init_class();
  fVar2 = ceilf(value);
  return (int)fVar2;
}


// CustomLogic.CustomLogicMathBuiltin$$Floor
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__Floor (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3f3c580

int32_t CustomLogic_CustomLogicMathBuiltin__Floor
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  
  if (DAT_056fdee5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fdee5 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 != 0) {
    fVar2 = floorf(value);
    return (int)fVar2;
  }
  il2cpp_init_class();
  fVar2 = floorf(value);
  return (int)fVar2;
}


// CustomLogic.CustomLogicMathBuiltin$$Round
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__Round (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3f3c600

int32_t CustomLogic_CustomLogicMathBuiltin__Round
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  int iVar1;
  MethodInfo *method_00;
  double dVar2;
  double dVar3;
  Il2CppMethodPointer local_8;
  
  if (DAT_056ff244 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056ff244 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  dVar2 = (double)value;
  method_00 = (MethodInfo *)&stack0xfffffffffffffff8;
  dVar3 = modf(dVar2,(double *)method_00,method);
  if (0.0 <= value) {
    if ((dVar3 != 0.5) || (NAN(dVar3))) {
      dVar2 = floor(dVar2 + 0.5,method_00);
      return (int)dVar2;
    }
    if (((long)(double)local_8 & 1U) != 0) {
      local_8 = (Il2CppMethodPointer)((double)local_8 + 1.0);
    }
  }
  else {
    if ((dVar3 != -0.5) || (NAN(dVar3))) {
      dVar2 = ceil(dVar2 + -0.5,method_00);
      return (int)dVar2;
    }
    if (((long)(double)local_8 & 1U) != 0) {
      return (int)((double)local_8 + -1.0);
    }
  }
  return (int)(double)local_8;
}


// CustomLogic.CustomLogicMathBuiltin$$Deg2Rad
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Deg2Rad (CustomLogic_CustomLogicMathBuiltin_o* __this, float angle, const MethodInfo* method);
// 0x3f3c720

float CustomLogic_CustomLogicMathBuiltin__Deg2Rad
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float angle,MethodInfo *method)

{
  return angle * 0.017453292;
}


// CustomLogic.CustomLogicMathBuiltin$$Rad2Deg
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Rad2Deg (CustomLogic_CustomLogicMathBuiltin_o* __this, float angle, const MethodInfo* method);
// 0x3f3c730

float CustomLogic_CustomLogicMathBuiltin__Rad2Deg
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float angle,MethodInfo *method)

{
  return angle * 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$Lerp
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Lerp (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, float t, const MethodInfo* method);
// 0x3f3c740

float CustomLogic_CustomLogicMathBuiltin__Lerp
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,float t,
                MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (t <= 1.0) {
    fVar1 = t;
  }
  return a + (b - a) * (float)(-(uint)(0.0 <= t) & (uint)fVar1);
}


// CustomLogic.CustomLogicMathBuiltin$$LerpUnclamped
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__LerpUnclamped (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, float t, const MethodInfo* method);
// 0x3f3c770

float CustomLogic_CustomLogicMathBuiltin__LerpUnclamped
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,float t,
                MethodInfo *method)

{
  return a + (b - a) * t;
}


// CustomLogic.CustomLogicMathBuiltin$$Sign
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Sign (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3f3c780

float CustomLogic_CustomLogicMathBuiltin__Sign
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  return *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= value) * 4);
}


// CustomLogic.CustomLogicMathBuiltin$$InverseLerp
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__InverseLerp (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, float value, const MethodInfo* method);
// 0x3f3c7a0

float CustomLogic_CustomLogicMathBuiltin__InverseLerp
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,float value,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if ((a == b) && (!NAN(a) && !NAN(b))) {
    return 0.0;
  }
  fVar2 = (value - a) / (b - a);
  fVar1 = 0.0;
  if ((0.0 <= fVar2) && (fVar1 = 1.0, fVar2 <= 1.0)) {
    fVar1 = fVar2;
  }
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$LerpAngle
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__LerpAngle (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, float t, const MethodInfo* method);
// 0x3f3c7d0

float CustomLogic_CustomLogicMathBuiltin__LerpAngle
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,float t,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = floorf((b - a) / 360.0);
  fVar2 = (b - a) - fVar1 * 360.0;
  fVar1 = 360.0;
  if (fVar2 <= 360.0) {
    fVar1 = fVar2;
  }
  fVar1 = (float)(-(uint)(0.0 <= fVar2) & (uint)fVar1);
  fVar2 = 1.0;
  if (t <= 1.0) {
    fVar2 = t;
  }
  return a + (float)((uint)fVar2 & -(uint)(0.0 <= t)) *
             (float)(~-(uint)(180.0 < fVar1) & (uint)fVar1 |
                    (uint)(fVar1 + -360.0) & -(uint)(180.0 < fVar1));
}


// CustomLogic.CustomLogicMathBuiltin$$Log
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Log (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3f3c870

float CustomLogic_CustomLogicMathBuiltin__Log
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = logf(__this,value,method);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$MoveTowards
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__MoveTowards (CustomLogic_CustomLogicMathBuiltin_o* __this, float current, float target, float maxDelta, const MethodInfo* method);
// 0x3f3c880

float CustomLogic_CustomLogicMathBuiltin__MoveTowards
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float current,float target,
                float maxDelta,MethodInfo *method)

{
  if (maxDelta < ABS(target - current)) {
    target = maxDelta * *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= target - current) * 4) + current;
  }
  return target;
}


// CustomLogic.CustomLogicMathBuiltin$$MoveTowardsAngle
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__MoveTowardsAngle (CustomLogic_CustomLogicMathBuiltin_o* __this, float current, float target, float maxDelta, const MethodInfo* method);
// 0x3f3c8c0

float CustomLogic_CustomLogicMathBuiltin__MoveTowardsAngle
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float current,float target,
                float maxDelta,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = floorf((target - current) / 360.0);
  fVar2 = (target - current) - fVar1 * 360.0;
  fVar1 = 360.0;
  if (fVar2 <= 360.0) {
    fVar1 = fVar2;
  }
  fVar1 = (float)(-(uint)(0.0 <= fVar2) & (uint)fVar1);
  fVar1 = (float)(~-(uint)(180.0 < fVar1) & (uint)fVar1 |
                 (uint)(fVar1 + -360.0) & -(uint)(180.0 < fVar1));
  if ((maxDelta <= fVar1) || (fVar1 <= -maxDelta)) {
    target = fVar1 + current;
    if (maxDelta < ABS(target - current)) {
      target = maxDelta * *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= target - current) * 4) + current
      ;
    }
  }
  return target;
}


// CustomLogic.CustomLogicMathBuiltin$$PingPong
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__PingPong (CustomLogic_CustomLogicMathBuiltin_o* __this, float t, float length, const MethodInfo* method);
// 0x3f3c9b0

float CustomLogic_CustomLogicMathBuiltin__PingPong
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float t,float length,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = length + length;
  fVar1 = floorf(t / fVar2);
  fVar1 = t - fVar1 * fVar2;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  return length - ABS((float)(-(uint)(0.0 <= fVar1) & (uint)fVar2) - length);
}


// CustomLogic.CustomLogicMathBuiltin$$Exp
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Exp (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3f3ca10

float CustomLogic_CustomLogicMathBuiltin__Exp
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = expf(__this,value,method);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$SmoothStep
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__SmoothStep (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, float t, const MethodInfo* method);
// 0x3f3ca20

float CustomLogic_CustomLogicMathBuiltin__SmoothStep
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,float t,
                MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (t <= 1.0) {
    fVar1 = t;
  }
  fVar1 = (float)(-(uint)(0.0 <= t) & (uint)fVar1);
  fVar1 = fVar1 * -2.0 * fVar1 * fVar1 + fVar1 * 3.0 * fVar1;
  return (1.0 - fVar1) * a + b * fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseAnd
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseAnd (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t a, int32_t b, const MethodInfo* method);
// 0x3f3ca80

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseAnd
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t a,int32_t b,
                  MethodInfo *method)

{
  return a & b;
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseOr
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseOr (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t a, int32_t b, const MethodInfo* method);
// 0x3f3ca90

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseOr
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t a,int32_t b,
                  MethodInfo *method)

{
  return a | b;
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseXor
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseXor (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t a, int32_t b, const MethodInfo* method);
// 0x3f3caa0

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseXor
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t a,int32_t b,
                  MethodInfo *method)

{
  return a ^ b;
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseNot
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseNot (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3f3cab0

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseNot
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  return ~value;
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseLeftShift
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseLeftShift (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t value, int32_t shift, const MethodInfo* method);
// 0x3f3cac0

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseLeftShift
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t value,int32_t shift,
                  MethodInfo *method)

{
  return value << ((byte)shift & 0x1f);
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseRightShift
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseRightShift (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t value, int32_t shift, const MethodInfo* method);
// 0x3f3cad0

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseRightShift
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t value,int32_t shift,
                  MethodInfo *method)

{
  return value >> ((byte)shift & 0x1f);
}


// CustomLogic.CustomLogicMathBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicMathBuiltin__get_ClassName (CustomLogic_CustomLogicMathBuiltin_o* __this, const MethodInfo* method);
// 0x3f3cae0

System_String_o *
CustomLogic_CustomLogicMathBuiltin__get_ClassName
          (CustomLogic_CustomLogicMathBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703d8a == '\0') {
    il2cpp_init_method_metadata(&"Math");
    DAT_05703d8a = '\x01';
  }
  return "Math";
}


// CustomLogic.CustomLogicMathBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicMathBuiltin__get_IsAbstract (CustomLogic_CustomLogicMathBuiltin_o* __this, const MethodInfo* method);
// 0x3f3cb10

bool_conflict
CustomLogic_CustomLogicMathBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicMathBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicMathBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicMathBuiltin__get_IsStatic (CustomLogic_CustomLogicMathBuiltin_o* __this, const MethodInfo* method);
// 0x3f3cb20

bool_conflict
CustomLogic_CustomLogicMathBuiltin__get_IsStatic
          (CustomLogic_CustomLogicMathBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicMathBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicMathBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicMathBuiltin_o* __this, const MethodInfo* method);
// 0x3f3cb30

bool_conflict
CustomLogic_CustomLogicMathBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicMathBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


