// Type: CustomLogic.CustomLogicColorBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicColorBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicColorBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicColorBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicColorBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3db4b60

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicColorBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  uint in_EAX;
  int iVar3;
  int32_t iVar4;
  int32_t iVar5;
  int32_t iVar6;
  int32_t a;
  System_String_o *pSVar7;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar8;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar9;
  System_ArgumentException_o *__this;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  undefined1 auVar10 [16];
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (DAT_057027e7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057027e7 = '\x01';
  }
  uVar2 = (uint)uStack_38;
  uStack_38 = (ulong)(uint)uStack_38;
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (args->max_length == 0) {
    pCVar8 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor(pCVar8,method);
    return pCVar8;
  }
  iVar3 = (int)args->max_length;
  if (iVar3 == 4) {
    pIVar1 = args->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    if (((1 < (uint)args->max_length) &&
        (iVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(args->m_Items[1],MethodInfo_Int32_ConvertTo_Int32),
        2 < (uint)args->max_length)) &&
       (iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(args->m_Items[2],MethodInfo_Int32_ConvertTo_Int32),
       3 < (uint)args->max_length)) {
      a = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(args->m_Items[3],MethodInfo_Int32_ConvertTo_Int32);
      pCVar8 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor(pCVar8,iVar4,iVar5,iVar6,a,in_R9);
      return pCVar8;
    }
  }
  else {
    if (iVar3 != 3) {
      if (iVar3 == 1) {
        pIVar1 = args->m_Items[0];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
        auVar10 = il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor(auVar10._0_8_,pSVar7,auVar10._8_8_);
        return auVar10._0_8_;
      }
      uStack_38 = CONCAT44(iVar3,uVar2);
      pSVar7 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
      str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicColorBuiltin constructor found that takes ");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
      pSVar7 = System_String__Concat(str0,pSVar7,str2,(MethodInfo *)0x0);
      uVar9 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
      __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar9);
      System_ArgumentException___ctor(__this,pSVar7,(MethodInfo *)0x0);
      uVar9 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this,uVar9);
    }
    pIVar1 = args->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    if ((1 < (uint)args->max_length) &&
       (iVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(args->m_Items[1],MethodInfo_Int32_ConvertTo_Int32),
       2 < (uint)args->max_length)) {
      iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(args->m_Items[2],MethodInfo_Int32_ConvertTo_Int32);
      pCVar8 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor(pCVar8,iVar4,iVar5,iVar6,in_R8);
      return pCVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3db70b0

void CustomLogic_CustomLogicColorBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702802 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702802 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3db7120

void CustomLogic_CustomLogicColorBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToHexString>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__ToHexString_b__6_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3db7130

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_<>c__<__CreateMethodBinding__ToHexString>b__6_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    pSVar1 = CustomLogic_CustomLogicColorBuiltin__ToHexString(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__7_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3db7150

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_<>c__<__CreateMethodBinding__Lerp>b__7_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar1;
  CustomLogic_CustomLogicColorBuiltin_o *b;
  float t;
  
  if (DAT_05702803 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702803 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar1 = (CustomLogic_CustomLogicColorBuiltin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
      if (1 < (uint)__a->max_length) {
        b = (CustomLogic_CustomLogicColorBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          pCVar1 = CustomLogic_CustomLogicColorBuiltin__Lerp(pCVar1,b,t,(MethodInfo *)0x0);
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


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding__Gradient>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__Gradient_b__8_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3db7220

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_<>c__<__CreateMethodBinding__Gradient>b__8_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar1;
  CustomLogic_CustomLogicColorBuiltin_o *b;
  float t;
  
  if (DAT_05702804 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702804 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar1 = (CustomLogic_CustomLogicColorBuiltin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
      if (1 < (uint)__a->max_length) {
        b = (CustomLogic_CustomLogicColorBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          pCVar1 = CustomLogic_CustomLogicColorBuiltin__Gradient(pCVar1,b,t,(MethodInfo *)0x0);
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


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__9_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3db72f0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_<>c__<__CreateMethodBinding____Eq__>b__9_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)0x0;
    if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      uStack_8 = in_RAX;
      bVar2 = CustomLogic_CustomLogicColorBuiltin____Eq__
                        (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      uStack_8 = CONCAT17((char)bVar2,(undefined7)uStack_8);
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
      return pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__10_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3db7340

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_<>c__<__CreateMethodBinding____Hash__>b__10_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    CustomLogic_CustomLogicColorBuiltin____Hash__(__c,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__11_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3db7370

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_<>c__<__CreateMethodBinding____Copy__>b__11_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicColorBuiltin____Copy__(__c,(MethodInfo *)0x0);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Str__>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Str___b__12_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3db7390

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_<>c__<__CreateMethodBinding____Str__>b__12_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    pSVar1 = CustomLogic_CustomLogicColorBuiltin____Str__(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Add__>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Add___b__13_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3db73b0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_<>c__<__CreateMethodBinding____Add__>b__13_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)0x0;
    if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicColorBuiltin____Add__
                         (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Sub__>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Sub___b__14_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3db73f0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_<>c__<__CreateMethodBinding____Sub__>b__14_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)0x0;
    if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicColorBuiltin____Sub__
                         (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Mul___b__15_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3db7430

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_<>c__<__CreateMethodBinding____Mul__>b__15_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)0x0;
    if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicColorBuiltin____Mul__
                         (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Div__>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Div___b__16_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3db7470

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_<>c__<__CreateMethodBinding____Div__>b__16_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)0x0;
    if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicColorBuiltin____Div__
                         (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicColorBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3db4e10

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicColorBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_057027e8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"__Sub__");
    il2cpp_init_method_metadata(&"__Copy__");
    il2cpp_init_method_metadata(&"__Str__");
    il2cpp_init_method_metadata(&"R");
    il2cpp_init_method_metadata(&"G");
    il2cpp_init_method_metadata(&"__Eq__");
    il2cpp_init_method_metadata(&"__Hash__");
    il2cpp_init_method_metadata(&"Gradient");
    il2cpp_init_method_metadata(&"Lerp");
    il2cpp_init_method_metadata(&"ToHexString");
    il2cpp_init_method_metadata(&"__Div__");
    il2cpp_init_method_metadata(&"B");
    il2cpp_init_method_metadata(&"__Mul__");
    il2cpp_init_method_metadata(&"__Add__");
    il2cpp_init_method_metadata(&"A");
    DAT_057027e8 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x993c73c6) {
    if (uVar3 < 0x2115286d) {
      if (uVar3 == 0xdc1f3cc) {
        bVar4 = System_String__op_Equality(name,"__Add__",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057027f4 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Add___b__13_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057027f4 = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x40,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x18c37b41) {
        bVar4 = System_String__op_Equality(name,"__Mul__",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057027f6 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Mul___b__15_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057027f6 = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x50,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x2115286c) &&
              (bVar4 = System_String__op_Equality(name,"ToHexString",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057027ed == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToHexString_b__6);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057027ed = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 8,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x792a6492) {
      if (uVar3 == 0x549f4d10) {
        bVar4 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057027f2 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Copy___b__11_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057027f2 = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x30,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x792a6491) &&
              (bVar4 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057027f1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Hash___b__10_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057027f1 = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x91efe6d7) {
      bVar4 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057027f0 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Eq___b__9_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057027f0 = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0x993c73c5) &&
            (bVar4 = System_String__op_Equality(name,"Gradient",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057027ef == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Gradient_b__8_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057027ef = '\x01';
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xc40bf6cd) {
    if (uVar3 < 0x9f4a1a21) {
      if (uVar3 == 0x9e956088) {
        bVar4 = System_String__op_Equality(name,"Lerp",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057027ee == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Lerp_b__7_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057027ee = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x9f4a1a20) &&
              (bVar4 = System_String__op_Equality(name,"__Str__",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057027f3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Str___b__12_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057027f3 = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x38,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xc20bf3a6) {
      bVar4 = System_String__op_Equality(name,"G",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057027ea == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColorBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__G_g____getter_3);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__G_g____setter_3_1);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object);
          DAT_057027ea = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColorBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xc40bf6cc) &&
            (bVar4 = System_String__op_Equality(name,"A",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057027ec == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColorBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__A_g____getter_5);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__A_g____setter_5_1);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object);
        DAT_057027ec = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColorBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xd70c14b6) {
    if (uVar3 == 0xc70bfb85) {
      bVar4 = System_String__op_Equality(name,"B",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057027eb == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColorBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__B_g____getter_4);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__B_g____setter_4_1);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object);
          DAT_057027eb = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColorBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xd70c14b5) &&
            (bVar4 = System_String__op_Equality(name,"R",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057027e9 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColorBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__R_g____getter_2);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__R_g____setter_2_1);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object);
        DAT_057027e9 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColorBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xd7cecb55) {
    bVar4 = System_String__op_Equality(name,"__Sub__",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057027f5 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Sub___b__14_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057027f5 = '\x01';
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x48,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if ((uVar3 == 0xff76b6dc) &&
          (bVar4 = System_String__op_Equality(name,"__Div__",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057027f7 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Div___b__16_0);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_057027f7 = '\x01';
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
      pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar10;
      il2cpp_runtime_glue(lVar2 + 0x58,pSVar10);
    }
    pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicColorBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__R
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__R (const MethodInfo* method);
// 0x3db5430

CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__R(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *__this;
  
  if (DAT_057027e9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColorBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__R_g____getter_2);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__R_g____setter_2_1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object);
    DAT_057027e9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColorBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__G
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__G (const MethodInfo* method);
// 0x3db5510

CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__G(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *__this;
  
  if (DAT_057027ea == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColorBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__G_g____getter_3);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__G_g____setter_3_1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object);
    DAT_057027ea = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColorBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__B
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__B (const MethodInfo* method);
// 0x3db55f0

CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__B(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *__this;
  
  if (DAT_057027eb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColorBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__B_g____getter_4);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__B_g____setter_4_1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object);
    DAT_057027eb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColorBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__A
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__A (const MethodInfo* method);
// 0x3db56d0

CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__A(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *__this;
  
  if (DAT_057027ec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColorBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__A_g____getter_5);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__A_g____setter_5_1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object);
    DAT_057027ec = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColorBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding__ToHexString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__ToHexString (const MethodInfo* method);
// 0x3db57b0

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__ToHexString(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (DAT_057027ed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToHexString_b__6);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057027ed = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding__Lerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Lerp (const MethodInfo* method);
// 0x3db5900

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Lerp(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (DAT_057027ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Lerp_b__7_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057027ee = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding__Gradient
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Gradient (const MethodInfo* method);
// 0x3db5a50

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Gradient(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (DAT_057027ef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Gradient_b__8_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057027ef = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x3db5ba0

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (DAT_057027f0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Eq___b__9_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057027f0 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x3db5cf0

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (DAT_057027f1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Hash___b__10_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057027f1 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x3db5e40

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (DAT_057027f2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Copy___b__11_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057027f2 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Str__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Str__ (const MethodInfo* method);
// 0x3db5f90

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Str__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (DAT_057027f3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Str___b__12_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057027f3 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Add__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Add__ (const MethodInfo* method);
// 0x3db60e0

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Add__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (DAT_057027f4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Add___b__13_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057027f4 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Sub__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Sub__ (const MethodInfo* method);
// 0x3db6230

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Sub__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (DAT_057027f5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Sub___b__14_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057027f5 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Mul__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Mul__ (const MethodInfo* method);
// 0x3db6380

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Mul__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (DAT_057027f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Mul___b__15_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057027f6 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Div__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Div__ (const MethodInfo* method);
// 0x3db64d0

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Div__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (DAT_057027f7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Div___b__16_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057027f7 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColorBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3db6620

void CustomLogic_CustomLogicColorBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057027f8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"__Sub__");
    il2cpp_init_method_metadata(&"__Copy__");
    il2cpp_init_method_metadata(&"__Str__");
    il2cpp_init_method_metadata(&"R");
    il2cpp_init_method_metadata(&"G");
    il2cpp_init_method_metadata(&"__Eq__");
    il2cpp_init_method_metadata(&"__Hash__");
    il2cpp_init_method_metadata(&"Gradient");
    il2cpp_init_method_metadata(&"Lerp");
    il2cpp_init_method_metadata(&"ToHexString");
    il2cpp_init_method_metadata(&"__Div__");
    il2cpp_init_method_metadata(&"B");
    il2cpp_init_method_metadata(&"__Mul__");
    il2cpp_init_method_metadata(&"__Add__");
    il2cpp_init_method_metadata(&"A");
    DAT_057027f8 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"R",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"G",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"B",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"A",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ToHexString",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Lerp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Gradient",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Eq__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Hash__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Copy__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Str__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Add__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Sub__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Mul__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Div__",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__R>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__R_g____getter_2_0 (CustomLogic_CustomLogicColorBuiltin_o* __i, const MethodInfo* method);
// 0x3db68c0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings__<__CreatePropertyBinding__R>g____getter_2_0
          (CustomLogic_CustomLogicColorBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     ((__i->fields).Value != (Utility_Color255_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__R>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__R_g____setter_2_1 (CustomLogic_CustomLogicColorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3db6900

void CustomLogic_CustomLogicColorBuiltin_Bindings__<__CreatePropertyBinding__R>g____setter_2_1
               (CustomLogic_CustomLogicColorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  
  if (DAT_057027f9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057027f9 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    (pUVar1->fields).R = iVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__G>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__G_g____getter_3_0 (CustomLogic_CustomLogicColorBuiltin_o* __i, const MethodInfo* method);
// 0x3db6980

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings__<__CreatePropertyBinding__G>g____getter_3_0
          (CustomLogic_CustomLogicColorBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     ((__i->fields).Value != (Utility_Color255_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__G>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__G_g____setter_3_1 (CustomLogic_CustomLogicColorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3db69c0

void CustomLogic_CustomLogicColorBuiltin_Bindings__<__CreatePropertyBinding__G>g____setter_3_1
               (CustomLogic_CustomLogicColorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  
  if (DAT_057027fa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057027fa = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    (pUVar1->fields).G = iVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__B>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__B_g____getter_4_0 (CustomLogic_CustomLogicColorBuiltin_o* __i, const MethodInfo* method);
// 0x3db6a40

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings__<__CreatePropertyBinding__B>g____getter_4_0
          (CustomLogic_CustomLogicColorBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     ((__i->fields).Value != (Utility_Color255_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__B>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__B_g____setter_4_1 (CustomLogic_CustomLogicColorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3db6a80

void CustomLogic_CustomLogicColorBuiltin_Bindings__<__CreatePropertyBinding__B>g____setter_4_1
               (CustomLogic_CustomLogicColorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  
  if (DAT_057027fb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057027fb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    (pUVar1->fields).B = iVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__A>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__A_g____getter_5_0 (CustomLogic_CustomLogicColorBuiltin_o* __i, const MethodInfo* method);
// 0x3db6b00

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings__<__CreatePropertyBinding__A>g____getter_5_0
          (CustomLogic_CustomLogicColorBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     ((__i->fields).Value != (Utility_Color255_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__A>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__A_g____setter_5_1 (CustomLogic_CustomLogicColorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3db6b40

void CustomLogic_CustomLogicColorBuiltin_Bindings__<__CreatePropertyBinding__A>g____setter_5_1
               (CustomLogic_CustomLogicColorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  
  if (DAT_057027fc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057027fc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    (pUVar1->fields).A = iVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x3db35d0

void CustomLogic_CustomLogicColorBuiltin___ctor
               (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  
  if (DAT_057027d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    DAT_057027d5 = '\x01';
  }
  __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Value = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Value);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, System_String_o* hexString, const MethodInfo* method);
// 0x3db3660

void CustomLogic_CustomLogicColorBuiltin___ctor
               (CustomLogic_CustomLogicColorBuiltin_o *__this,System_String_o *hexString,
               MethodInfo *method)

{
  Utility_Color255_o **ppUVar1;
  bool_conflict bVar2;
  Utility_Color255_o *pUVar3;
  UnityEngine_Color_o color;
  UnityEngine_Color_Fields local_58;
  float local_48;
  float fStack_44;
  undefined8 uStack_40;
  UnityEngine_Color_Fields local_38;
  
  if (DAT_057027d6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    DAT_057027d6 = '\x01';
  }
  local_58.r = 0.0;
  local_58.g = 0.0;
  local_58.b = 0.0;
  local_58.a = 0.0;
  pUVar3 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).Value;
  (__this->fields).Value = pUVar3;
  il2cpp_runtime_glue(ppUVar1);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                    (hexString,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    local_38.r = local_58.r;
    local_38.g = local_58.g;
    local_38.b = 0.0;
    local_38.a = 0.0;
    local_48 = local_58.b;
    fStack_44 = local_58.a;
    uStack_40 = 0;
    pUVar3 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
    color.fields.b = local_48;
    color.fields.a = fStack_44;
    color.fields.r = local_38.r;
    color.fields.g = local_38.g;
    Utility_Color255___ctor(pUVar3,color,(MethodInfo *)0x0);
    *ppUVar1 = pUVar3;
    il2cpp_runtime_glue(ppUVar1,pUVar3);
  }
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t r, int32_t g, int32_t b, const MethodInfo* method);
// 0x3db3760

void CustomLogic_CustomLogicColorBuiltin___ctor
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t r,int32_t g,int32_t b,
               MethodInfo *method)

{
  Utility_Color255_o **ppUVar1;
  Utility_Color255_o *pUVar2;
  
  if (DAT_057027d7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    DAT_057027d7 = '\x01';
  }
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar2,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).Value;
  (__this->fields).Value = pUVar2;
  il2cpp_runtime_glue(ppUVar1);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar2,r,g,b,0xff,(MethodInfo *)0x0);
  (__this->fields).Value = pUVar2;
  il2cpp_runtime_glue(ppUVar1,pUVar2);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t r, int32_t g, int32_t b, int32_t a, const MethodInfo* method);
// 0x3db3840

void CustomLogic_CustomLogicColorBuiltin___ctor
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t r,int32_t g,int32_t b,
               int32_t a,MethodInfo *method)

{
  Utility_Color255_o **ppUVar1;
  Utility_Color255_o *pUVar2;
  
  if (DAT_057027d8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    DAT_057027d8 = '\x01';
  }
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar2,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).Value;
  (__this->fields).Value = pUVar2;
  il2cpp_runtime_glue(ppUVar1);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar2,r,g,b,a,(MethodInfo *)0x0);
  (__this->fields).Value = pUVar2;
  il2cpp_runtime_glue(ppUVar1,pUVar2);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x3db3920

void CustomLogic_CustomLogicColorBuiltin___ctor
               (CustomLogic_CustomLogicColorBuiltin_o *__this,UnityEngine_Color_o color,
               MethodInfo *method)

{
  Utility_Color255_o **ppUVar1;
  Utility_Color255_o *pUVar2;
  
  if (DAT_057027d9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    DAT_057027d9 = '\x01';
  }
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar2,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).Value;
  (__this->fields).Value = pUVar2;
  il2cpp_runtime_glue(ppUVar1);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar2,color,(MethodInfo *)0x0);
  (__this->fields).Value = pUVar2;
  il2cpp_runtime_glue(ppUVar1,pUVar2);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, Utility_Color255_o* value, const MethodInfo* method);
// 0x3db39f0

void CustomLogic_CustomLogicColorBuiltin___ctor
               (CustomLogic_CustomLogicColorBuiltin_o *__this,Utility_Color255_o *value,
               MethodInfo *method)

{
  Utility_Color255_o **ppUVar1;
  Utility_Color255_o *__this_00;
  
  if (DAT_057027da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    DAT_057027da = '\x01';
  }
  __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).Value;
  (__this->fields).Value = __this_00;
  il2cpp_runtime_glue(ppUVar1);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value = value;
  il2cpp_runtime_glue(ppUVar1,value);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$get_R
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__get_R (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x3db3aa0

int32_t CustomLogic_CustomLogicColorBuiltin__get_R
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    return (pUVar1->fields).R;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin$$set_R
// il2cpp: void CustomLogic_CustomLogicColorBuiltin__set_R (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3db3ac0

void CustomLogic_CustomLogicColorBuiltin__set_R
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    (pUVar1->fields).R = value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin$$get_G
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__get_G (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x3db3ae0

int32_t CustomLogic_CustomLogicColorBuiltin__get_G
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    return (pUVar1->fields).G;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin$$set_G
// il2cpp: void CustomLogic_CustomLogicColorBuiltin__set_G (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3db3b00

void CustomLogic_CustomLogicColorBuiltin__set_G
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    (pUVar1->fields).G = value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin$$get_B
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__get_B (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x3db3b20

int32_t CustomLogic_CustomLogicColorBuiltin__get_B
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    return (pUVar1->fields).B;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin$$set_B
// il2cpp: void CustomLogic_CustomLogicColorBuiltin__set_B (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3db3b40

void CustomLogic_CustomLogicColorBuiltin__set_B
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    (pUVar1->fields).B = value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin$$get_A
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__get_A (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x3db3b60

int32_t CustomLogic_CustomLogicColorBuiltin__get_A
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    return (pUVar1->fields).A;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin$$set_A
// il2cpp: void CustomLogic_CustomLogicColorBuiltin__set_A (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3db3b80

void CustomLogic_CustomLogicColorBuiltin__set_A
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    (pUVar1->fields).A = value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin$$ToHexString
// il2cpp: System_String_o* CustomLogic_CustomLogicColorBuiltin__ToHexString (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x3db3ba0

System_String_o *
CustomLogic_CustomLogicColorBuiltin__ToHexString
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  System_String_o *pSVar1;
  UnityEngine_Color_o color;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Utility_Color255_o *)0x0) {
    color = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
    pSVar1 = Unity_VisualScripting_XColor__ToHexString(color,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin$$Lerp
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicColorBuiltin__Lerp (CustomLogic_CustomLogicColorBuiltin_o* a, CustomLogic_CustomLogicColorBuiltin_o* b, float t, const MethodInfo* method);
// 0x3db3bc0

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicColorBuiltin__Lerp
          (CustomLogic_CustomLogicColorBuiltin_o *a,CustomLogic_CustomLogicColorBuiltin_o *b,float t
          ,MethodInfo *method)

{
  Utility_Color255_o *value;
  undefined1 auVar1 [16];
  
  if (DAT_057027db == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    DAT_057027db = '\x01';
  }
  if ((a != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) {
    value = Utility_Color255__Lerp((a->fields).Value,(b->fields).Value,t,(MethodInfo *)0x0);
    auVar1 = il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor(auVar1._0_8_,value,auVar1._8_8_);
    return auVar1._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin$$Gradient
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicColorBuiltin__Gradient (CustomLogic_CustomLogicColorBuiltin_o* a, CustomLogic_CustomLogicColorBuiltin_o* b, float t, const MethodInfo* method);
// 0x3db3c40

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicColorBuiltin__Gradient
          (CustomLogic_CustomLogicColorBuiltin_o *a,CustomLogic_CustomLogicColorBuiltin_o *b,float t
          ,MethodInfo *method)

{
  UnityEngine_GradientAlphaKey_Fields UVar1;
  UnityEngine_GradientColorKey_o __this;
  UnityEngine_GradientColorKey_o __this_00;
  UnityEngine_GradientAlphaKey_o __this_01;
  UnityEngine_GradientAlphaKey_o __this_02;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphakeys;
  Utility_Color255_o *pUVar2;
  MethodInfo *extraout_RDX;
  float time;
  UnityEngine_Color_o UVar3;
  undefined1 auVar4 [16];
  undefined4 in_stack_ffffffffffffff78;
  undefined4 uVar5;
  float fVar6;
  undefined4 in_stack_ffffffffffffff7c;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_stack_ffffffffffffff80;
  undefined4 uVar9;
  float in_stack_ffffffffffffff84;
  float in_stack_ffffffffffffff88;
  UnityEngine_GradientAlphaKey_Fields local_70;
  float local_68;
  float fStack_64;
  Il2CppType **local_58;
  _union_13 _Stack_50;
  _union_14 local_48 [2];
  _union_13 local_38;
  _union_14 _Stack_30;
  float local_28;
  
  if (DAT_057027dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_GradientAlphaKey);
    il2cpp_init_method_metadata(&TypeInfo_GradientColorKey);
    DAT_057027dc = '\x01';
    method = extraout_RDX;
  }
  colorKeys = (UnityEngine_GradientColorKey_array *)il2cpp_glue_02274930(TypeInfo_GradientColorKey,2,method);
  if ((a != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar2 = (a->fields).Value, pUVar2 != (Utility_Color255_o *)0x0)) {
    UVar3 = Utility_Color255__ToColor(pUVar2,(MethodInfo *)0x0);
    local_38.rgctx_data = (Il2CppRGCTXData *)0x0;
    _Stack_30.genericMethod = (Il2CppType *)0x0;
    local_28 = 0.0;
    __this.fields.color.fields.g = (float)in_stack_ffffffffffffff7c;
    __this.fields.color.fields.r = (float)in_stack_ffffffffffffff78;
    __this.fields.color.fields.b = (float)in_stack_ffffffffffffff80;
    __this.fields.color.fields.a = in_stack_ffffffffffffff84;
    __this.fields.time = in_stack_ffffffffffffff88;
    UnityEngine_GradientColorKey___ctor(__this,UVar3,0.0,(MethodInfo *)&local_38);
    if (colorKeys != (UnityEngine_GradientColorKey_array *)0x0) {
      uVar5 = local_38._0_4_;
      uVar7 = local_38._4_4_;
      uVar9 = _Stack_30._0_4_;
      fVar6 = _Stack_30._4_4_;
      if ((int)colorKeys->max_length == 0) {
LAB_03db3ead:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      colorKeys->m_Items[0].fields.time = local_28;
      *(_union_13 *)&colorKeys->m_Items[0].fields.color.fields = (Il2CppRGCTXData *)local_38;
      *(_union_14 *)&colorKeys->m_Items[0].fields.color.fields.b = (void *)_Stack_30;
      if ((b != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
         (pUVar2 = (b->fields).Value, pUVar2 != (Utility_Color255_o *)0x0)) {
        fVar8 = local_28;
        UVar3 = Utility_Color255__ToColor(pUVar2,(MethodInfo *)0x0);
        local_58 = (Il2CppType **)0x0;
        _Stack_50.rgctx_data = (Il2CppRGCTXData *)0x0;
        local_48[0]._0_4_ = 0.0;
        time = 1.0;
        __this_00.fields.color.fields.g = (float)uVar7;
        __this_00.fields.color.fields.r = (float)uVar5;
        __this_00.fields.color.fields.b = (float)uVar9;
        __this_00.fields.color.fields.a = fVar6;
        __this_00.fields.time = fVar8;
        UnityEngine_GradientColorKey___ctor(__this_00,UVar3,1.0,(MethodInfo *)&local_58);
        if ((uint)colorKeys->max_length < 2) goto LAB_03db3ead;
        colorKeys->m_Items[1].fields.time = (float)local_48[0]._0_4_;
        colorKeys->m_Items[1].fields.color.fields.r = SUB84(local_58,0);
        colorKeys->m_Items[1].fields.color.fields.g = (float)((ulong)local_58 >> 0x20);
        colorKeys->m_Items[1].fields.color.fields.b = _Stack_50._0_4_;
        colorKeys->m_Items[1].fields.color.fields.a = _Stack_50._4_4_;
        alphakeys = (UnityEngine_GradientAlphaKey_array *)il2cpp_glue_02274930(TypeInfo_GradientAlphaKey);
        pUVar2 = (a->fields).Value;
        if (pUVar2 != (Utility_Color255_o *)0x0) {
          UVar3 = Utility_Color255__ToColor(pUVar2,(MethodInfo *)0x0);
          pUVar2 = (a->fields).Value;
          if (pUVar2 != (Utility_Color255_o *)0x0) {
            local_68 = UVar3.fields.a;
            fStack_64 = UVar3.fields.a;
            UVar3 = Utility_Color255__ToColor(pUVar2,(MethodInfo *)0x0);
            fVar6 = 0.0;
            fVar8 = 0.0;
            __this_01.fields.time = fStack_64;
            __this_01.fields.alpha = local_68;
            UnityEngine_GradientAlphaKey___ctor
                      (__this_01,UVar3.fields.a,time,(MethodInfo *)&stack0xffffffffffffff78);
            if (alphakeys != (UnityEngine_GradientAlphaKey_array *)0x0) {
              if ((int)alphakeys->max_length == 0) goto LAB_03db3ead;
              UVar1.time = fVar8;
              UVar1.alpha = fVar6;
              alphakeys->m_Items[0].fields = UVar1;
              pUVar2 = (b->fields).Value;
              if (pUVar2 != (Utility_Color255_o *)0x0) {
                UVar3 = Utility_Color255__ToColor(pUVar2,(MethodInfo *)0x0);
                pUVar2 = (b->fields).Value;
                if (pUVar2 != (Utility_Color255_o *)0x0) {
                  local_68 = UVar3.fields.a;
                  fStack_64 = UVar3.fields.a;
                  UVar3 = Utility_Color255__ToColor(pUVar2,(MethodInfo *)0x0);
                  local_70.alpha = 0.0;
                  local_70.time = 0.0;
                  __this_02.fields.time = fStack_64;
                  __this_02.fields.alpha = local_68;
                  UnityEngine_GradientAlphaKey___ctor
                            (__this_02,UVar3.fields.a,time,(MethodInfo *)&local_70);
                  if (1 < (uint)alphakeys->max_length) {
                    alphakeys->m_Items[1].fields = local_70;
                    pUVar2 = Utility_Color255__Gradient(colorKeys,alphakeys,0,t,(MethodInfo *)0x0);
                    auVar4 = il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
                    CustomLogic_CustomLogicColorBuiltin___ctor(auVar4._0_8_,pUVar2,auVar4._8_8_);
                    return auVar4._0_8_;
                  }
                  goto LAB_03db3ead;
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


// CustomLogic.CustomLogicColorBuiltin$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__GetHashCode (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x3db3ec0

int32_t CustomLogic_CustomLogicColorBuiltin__GetHashCode
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  int32_t iVar2;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._2_GetHashCode.methodPtr;
    iVar2 = (*vtable_dispatch)
                      (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method,in_RDX,
                       vtable_dispatch);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin$$Equals
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin__Equals (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x3db3ef0

bool_conflict
CustomLogic_CustomLogicColorBuiltin__Equals
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Utility_Color255_o *pUVar3;
  Il2CppClass *pIVar4;
  
  if (DAT_057027dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    DAT_057027dd = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((bVar1 <= (obj->klass->_2).naturalAligment) &&
       ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) {
      pUVar3 = (__this->fields).Value;
      if ((pUVar3 == (Utility_Color255_o *)0x0) ||
         (pIVar4 = obj[3].klass, pIVar4 == (Il2CppClass *)0x0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((((pUVar3->fields).R == *(int *)&(pIVar4->_1).name) &&
          ((pUVar3->fields).G == *(int *)((long)&(pIVar4->_1).name + 4))) &&
         ((pUVar3->fields).B == *(int *)&(pIVar4->_1).namespaze)) {
        iVar2 = (pUVar3->fields).A;
        return CONCAT31((int3)((uint)iVar2 >> 8),
                        iVar2 == *(int *)((long)&(pIVar4->_1).namespaze + 4));
      }
    }
  }
  return 0;
}


// CustomLogic.CustomLogicColorBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicColorBuiltin__ToString (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x3db3f90

System_String_o *
CustomLogic_CustomLogicColorBuiltin__ToString
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  System_String_o *pSVar4;
  undefined8 uVar5;
  int32_t local_38;
  int32_t local_34;
  int32_t local_30;
  int32_t local_2c;
  
  if (DAT_057027de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"({0}, {1}, {2}, {3})");
    DAT_057027de = '\x01';
  }
  args = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,4);
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    local_2c = (pUVar1->fields).R;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
    if (args == (System_Object_array *)0x0) goto LAB_03db4188;
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar3 = il2cpp_runtime_glue(pIVar2,(((args->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_03db4192;
    }
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar2;
      il2cpp_runtime_glue(args->m_Items,pIVar2);
      pUVar1 = (__this->fields).Value;
      if (pUVar1 == (Utility_Color255_o *)0x0) goto LAB_03db4188;
      local_30 = (pUVar1->fields).G;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
      if (pIVar2 != (Il2CppObject *)0x0) {
        lVar3 = il2cpp_runtime_glue(pIVar2,(((args->obj).klass)->_1).element_class);
        if (lVar3 == 0) goto LAB_03db4192;
      }
      if ((uint)args->max_length < 2) goto LAB_03db418d;
      args->m_Items[1] = pIVar2;
      il2cpp_runtime_glue(args->m_Items + 1,pIVar2);
      pUVar1 = (__this->fields).Value;
      if (pUVar1 == (Utility_Color255_o *)0x0) goto LAB_03db4188;
      local_34 = (pUVar1->fields).B;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
      if (pIVar2 != (Il2CppObject *)0x0) {
        lVar3 = il2cpp_runtime_glue(pIVar2,(((args->obj).klass)->_1).element_class);
        if (lVar3 == 0) goto LAB_03db4192;
      }
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar2;
        il2cpp_runtime_glue(args->m_Items + 2,pIVar2);
        pUVar1 = (__this->fields).Value;
        if (pUVar1 == (Utility_Color255_o *)0x0) goto LAB_03db4188;
        local_38 = (pUVar1->fields).A;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
        if (pIVar2 != (Il2CppObject *)0x0) {
          lVar3 = il2cpp_runtime_glue(pIVar2,(((args->obj).klass)->_1).element_class);
          if (lVar3 == 0) {
LAB_03db4192:
            uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar5,0);
          }
        }
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar2;
          il2cpp_runtime_glue(args->m_Items + 3,pIVar2);
          pSVar4 = System_String__Format("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
          return pSVar4;
        }
      }
    }
LAB_03db418d:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03db4188:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin$$Copy
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicColorBuiltin__Copy (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x3db41b0

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicColorBuiltin__Copy
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  Utility_Color255_o *pUVar1;
  undefined1 auVar2 [16];
  
  if (DAT_057027df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    DAT_057027df = '\x01';
  }
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    r = (pUVar1->fields).R;
    g = (pUVar1->fields).G;
    b = (pUVar1->fields).B;
    a = (pUVar1->fields).A;
    pUVar1 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar1,r,g,b,a,(MethodInfo *)0x0);
    auVar2 = il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor(auVar2._0_8_,pUVar1,auVar2._8_8_);
    return auVar2._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin____Eq__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3db4260

bool_conflict
CustomLogic_CustomLogicColorBuiltin____Eq__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  
  if (DAT_057027e0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    DAT_057027e0 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if (bVar1 <= (self->klass->_2).naturalAligment) {
      if ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin) {
        self = (Il2CppObject *)0x0;
      }
      if ((((other != (Il2CppObject *)0x0) && (self != (Il2CppObject *)0x0)) &&
          (bVar1 <= (other->klass->_2).naturalAligment)) &&
         ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) {
        return (bool_conflict)
               CONCAT71((int7)((ulong)self[3].klass >> 8),self[3].klass == other[3].klass);
      }
    }
  }
  return 0;
}


// CustomLogic.CustomLogicColorBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin____Hash__ (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x3db4300

int32_t CustomLogic_CustomLogicColorBuiltin____Hash__
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  int32_t iVar2;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._2_GetHashCode.methodPtr;
    iVar2 = (*vtable_dispatch)
                      (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method,in_RDX,
                       vtable_dispatch);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Copy__ (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x3db4330

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Copy__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  Utility_Color255_o *pUVar1;
  undefined1 auVar2 [16];
  
  if (DAT_057027e1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    DAT_057027e1 = '\x01';
  }
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    r = (pUVar1->fields).R;
    g = (pUVar1->fields).G;
    b = (pUVar1->fields).B;
    a = (pUVar1->fields).A;
    pUVar1 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar1,r,g,b,a,(MethodInfo *)0x0);
    auVar2 = il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor(auVar2._0_8_,pUVar1,auVar2._8_8_);
    return (Il2CppObject *)auVar2._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColorBuiltin$$__Str__
// il2cpp: System_String_o* CustomLogic_CustomLogicColorBuiltin____Str__ (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x3db43e0

System_String_o *
CustomLogic_CustomLogicColorBuiltin____Str__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar1;
  undefined8 in_RDX;
  
  vtable_dispatch = (__this->klass->vtable)._3_ToString.methodPtr;
  pSVar1 = (System_String_o *)
           (*vtable_dispatch)
                     (__this,(__this->klass->vtable)._3_ToString.method,in_RDX,vtable_dispatch
                     );
  return pSVar1;
}


// CustomLogic.CustomLogicColorBuiltin$$__Add__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Add__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3db4400

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Add__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppClass *pIVar3;
  Utility_Color255_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar4;
  undefined8 uVar5;
  int b;
  int a;
  int32_t iVar6;
  int r;
  int g;
  undefined1 auVar7 [16];
  
  if (DAT_057027e2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    DAT_057027e2 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (self->klass->_2).naturalAligment) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (other->klass->_2).naturalAligment &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pIVar2 = self[3].klass;
      if ((pIVar2 != (Il2CppClass *)0x0) && (pIVar3 = other[3].klass, pIVar3 != (Il2CppClass *)0x0))
      {
        r = *(int *)&(pIVar3->_1).name + *(int *)&(pIVar2->_1).name;
        if (0xff < r) {
          r = 0xff;
        }
        iVar6 = 0;
        if (r < 0) {
          r = iVar6;
        }
        g = *(int *)((long)&(pIVar3->_1).name + 4) + *(int *)((long)&(pIVar2->_1).name + 4);
        if (0xff < g) {
          g = 0xff;
        }
        if (g < 0) {
          g = iVar6;
        }
        b = *(int *)&(pIVar3->_1).namespaze + *(int *)&(pIVar2->_1).namespaze;
        if (0xff < b) {
          b = 0xff;
        }
        if (b < 0) {
          b = iVar6;
        }
        a = *(int *)((long)&(pIVar3->_1).namespaze + 4) +
            *(int *)((long)&(pIVar2->_1).namespaze + 4);
        if (0xff < a) {
          a = 0xff;
        }
        if (a < 0) {
          a = 0;
        }
        __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
        Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
        auVar7 = il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor(auVar7._0_8_,__this_00,auVar7._8_8_);
        return (Il2CppObject *)auVar7._0_8_;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Add__");
  pSVar4 = CustomLogic_CustomLogicUtils__OperatorException
                     (operatorName,self,other,(MethodInfo *)0x0);
  uVar5 = il2cpp_init_method_metadata(&MethodInfo_Object___Add);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(pSVar4,uVar5);
}


// CustomLogic.CustomLogicColorBuiltin$$__Sub__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Sub__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3db45b0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Sub__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppClass *pIVar3;
  Utility_Color255_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar4;
  undefined8 uVar5;
  int b;
  int a;
  int32_t iVar6;
  int r;
  int g;
  undefined1 auVar7 [16];
  
  if (DAT_057027e3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    DAT_057027e3 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (self->klass->_2).naturalAligment) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (other->klass->_2).naturalAligment &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pIVar2 = self[3].klass;
      if ((pIVar2 != (Il2CppClass *)0x0) && (pIVar3 = other[3].klass, pIVar3 != (Il2CppClass *)0x0))
      {
        r = *(int *)&(pIVar2->_1).name - *(int *)&(pIVar3->_1).name;
        if (0xff < r) {
          r = 0xff;
        }
        iVar6 = 0;
        if (r < 0) {
          r = iVar6;
        }
        g = *(int *)((long)&(pIVar2->_1).name + 4) - *(int *)((long)&(pIVar3->_1).name + 4);
        if (0xff < g) {
          g = 0xff;
        }
        if (g < 0) {
          g = iVar6;
        }
        b = *(int *)&(pIVar2->_1).namespaze - *(int *)&(pIVar3->_1).namespaze;
        if (0xff < b) {
          b = 0xff;
        }
        if (b < 0) {
          b = iVar6;
        }
        a = *(int *)((long)&(pIVar2->_1).namespaze + 4) -
            *(int *)((long)&(pIVar3->_1).namespaze + 4);
        if (0xff < a) {
          a = 0xff;
        }
        if (a < 0) {
          a = 0;
        }
        __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
        Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
        auVar7 = il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor(auVar7._0_8_,__this_00,auVar7._8_8_);
        return (Il2CppObject *)auVar7._0_8_;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Sub__");
  pSVar4 = CustomLogic_CustomLogicUtils__OperatorException
                     (operatorName,self,other,(MethodInfo *)0x0);
  uVar5 = il2cpp_init_method_metadata(&MethodInfo_Object___Sub);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(pSVar4,uVar5);
}


// CustomLogic.CustomLogicColorBuiltin$$__Mul__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Mul__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3db4760

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Mul__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppClass *pIVar3;
  Utility_Color255_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar4;
  undefined8 uVar5;
  int b;
  int a;
  int32_t iVar6;
  int r;
  int g;
  undefined1 auVar7 [16];
  
  if (DAT_057027e4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    DAT_057027e4 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (self->klass->_2).naturalAligment) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (other->klass->_2).naturalAligment &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pIVar2 = self[3].klass;
      if ((pIVar2 != (Il2CppClass *)0x0) && (pIVar3 = other[3].klass, pIVar3 != (Il2CppClass *)0x0))
      {
        r = *(int *)&(pIVar3->_1).name * *(int *)&(pIVar2->_1).name;
        if (0xff < r) {
          r = 0xff;
        }
        iVar6 = 0;
        if (r < 0) {
          r = iVar6;
        }
        g = *(int *)((long)&(pIVar3->_1).name + 4) * *(int *)((long)&(pIVar2->_1).name + 4);
        if (0xff < g) {
          g = 0xff;
        }
        if (g < 0) {
          g = iVar6;
        }
        b = *(int *)&(pIVar3->_1).namespaze * *(int *)&(pIVar2->_1).namespaze;
        if (0xff < b) {
          b = 0xff;
        }
        if (b < 0) {
          b = iVar6;
        }
        a = *(int *)((long)&(pIVar3->_1).namespaze + 4) *
            *(int *)((long)&(pIVar2->_1).namespaze + 4);
        if (0xff < a) {
          a = 0xff;
        }
        if (a < 0) {
          a = 0;
        }
        __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
        Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
        auVar7 = il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor(auVar7._0_8_,__this_00,auVar7._8_8_);
        return (Il2CppObject *)auVar7._0_8_;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Mul__");
  pSVar4 = CustomLogic_CustomLogicUtils__OperatorException
                     (operatorName,self,other,(MethodInfo *)0x0);
  uVar5 = il2cpp_init_method_metadata(&MethodInfo_Object___Mul);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(pSVar4,uVar5);
}


// CustomLogic.CustomLogicColorBuiltin$$__Div__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Div__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3db4910

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Div__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Il2CppClass *pIVar4;
  Il2CppClass *pIVar5;
  int r;
  int g;
  int b;
  int iVar6;
  Utility_Color255_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar7;
  undefined8 uVar8;
  int a;
  int32_t iVar9;
  undefined1 auVar10 [16];
  
  if (DAT_057027e5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    DAT_057027e5 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (self->klass->_2).naturalAligment) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (other->klass->_2).naturalAligment &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pIVar4 = self[3].klass;
      if ((pIVar4 != (Il2CppClass *)0x0) && (pIVar5 = other[3].klass, pIVar5 != (Il2CppClass *)0x0))
      {
        r = *(int *)&(pIVar4->_1).name / *(int *)&(pIVar5->_1).name;
        if (0xff < r) {
          r = 0xff;
        }
        iVar9 = 0;
        if (r < 0) {
          r = iVar9;
        }
        g = *(int *)((long)&(pIVar4->_1).name + 4) / *(int *)((long)&(pIVar5->_1).name + 4);
        if (0xff < g) {
          g = 0xff;
        }
        if (g < 0) {
          g = iVar9;
        }
        b = *(int *)&(pIVar4->_1).namespaze / *(int *)&(pIVar5->_1).namespaze;
        if (0xff < b) {
          b = 0xff;
        }
        if (b < 0) {
          b = iVar9;
        }
        iVar2 = *(int *)((long)&(pIVar4->_1).namespaze + 4);
        iVar3 = *(int *)((long)&(pIVar5->_1).namespaze + 4);
        iVar6 = iVar2 / iVar3;
        a = 0xff;
        if (iVar6 < 0x100) {
          a = iVar6;
        }
        if (a < 0) {
          a = 0;
        }
        __this_00 = (Utility_Color255_o *)
                    il2cpp_runtime_glue(TypeInfo_Color255,pIVar4,(long)iVar2 % (long)iVar3 & 0xffffffff);
        Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
        auVar10 = il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor(auVar10._0_8_,__this_00,auVar10._8_8_);
        return (Il2CppObject *)auVar10._0_8_;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Div__");
  pSVar7 = CustomLogic_CustomLogicUtils__OperatorException
                     (operatorName,self,other,(MethodInfo *)0x0);
  uVar8 = il2cpp_init_method_metadata(&MethodInfo_Object___Div);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(pSVar7,uVar8);
}


// CustomLogic.CustomLogicColorBuiltin$$__Mod__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Mod__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3db4ac0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Mod__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
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


// CustomLogic.CustomLogicColorBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicColorBuiltin__get_ClassName (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x3db4b00

System_String_o *
CustomLogic_CustomLogicColorBuiltin__get_ClassName
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_057027e6 == '\0') {
    il2cpp_init_method_metadata(&"Color");
    DAT_057027e6 = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin__get_IsAbstract (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x3db4b30

bool_conflict
CustomLogic_CustomLogicColorBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicColorBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin__get_IsStatic (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x3db4b40

bool_conflict
CustomLogic_CustomLogicColorBuiltin__get_IsStatic
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicColorBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x3db4b50

bool_conflict
CustomLogic_CustomLogicColorBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


