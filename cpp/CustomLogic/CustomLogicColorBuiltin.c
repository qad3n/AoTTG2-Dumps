// Type: CustomLogic.CustomLogicColorBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicColorBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicColorBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicColorBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicColorBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59ab430

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicColorBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int iVar2;
  int32_t a;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  System_String_o *pSVar6;
  CustomLogic_CustomLogicColorBuiltin_o *__this;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  int32_t local_34;
  
  if (Il2CppMethodInitialized_07545aee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545aee = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length == 0) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor(__this,method);
  }
  else {
    iVar2 = (int)args->max_length;
    if (iVar2 == 4) {
      pIVar1 = args->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (pIVar1,(MethodInfo_34BDC20 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if ((((args->max_length & 0xfffffffe) == 0) ||
          (iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                             (args->m_Items[1],
                              (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int)
          , (uint)args->max_length < 3)) ||
         (iVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                            (args->m_Items[2],
                             (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int),
         (args->max_length & 0xfffffffc) == 0)) {
label_059ab679:
        ThrowIndexOutOfRangeException();
      }
      a = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (args->m_Items[3],
                     (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_58aa130(__this,iVar3,iVar4,iVar5,a,in_R9);
    }
    else if (iVar2 == 3) {
      pIVar1 = args->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (pIVar1,(MethodInfo_34BDC20 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (((args->max_length & 0xfffffffe) == 0) ||
         (iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                            (args->m_Items[1],
                             (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int),
         (uint)args->max_length < 3)) goto label_059ab679;
      iVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (args->m_Items[2],
                         (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_58aa050(__this,iVar3,iVar4,iVar5,in_R8);
    }
    else {
      if (iVar2 != 1) {
        NullCheck(args);
        pSVar6 = System_Int32__ToString(&local_34,(MethodInfo *)0x0);
        str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicColorBuiltin constructor found that takes ");
        str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
        pSVar6 = System_String__Concat_5301f10(str0,pSVar6,str2,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
        __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
        System_ArgumentException___ctor_54186d0(__this_00,pSVar6,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicColorBuiltin_Factory_CreateInstance);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
      }
      pIVar1 = args->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pSVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar1,(MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_58a9f50(__this,pSVar6,method_00);
    }
  }
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x59ad410

void CustomLogic_CustomLogicColorBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545b04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b04 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x59ad480

void CustomLogic_CustomLogicColorBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToHexString>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__ToHexString_b__6_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ad490

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__ToHexString_b__6_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  System_String_o *pSVar1;
  UnityEngine_Color_o color;
  
  if ((__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields).Value, __this_00 == (Utility_Color255_o *)0x0)) {
    ThrowNullReferenceException();
  }
  color = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
  pSVar1 = Unity_VisualScripting_XColor__ToHexString(color,(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__7_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ad4c0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__7_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar1;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar2;
  Utility_Color255_o *value;
  MethodInfo *method_00;
  float t;
  
  if (Il2CppMethodInitialized_07545b05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b05 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059ad5f0:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
      if (2 < (uint)__a->max_length) {
        t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (__a->m_Items[2],
                       (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (Il2CppMethodInitialized_07545ae2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
          Il2CppMethodInitialized_07545ae2 = '\x01';
        }
        if ((pCVar1 != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
           (pCVar2 != (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) {
          value = Utility_Color255__Lerp((pCVar1->fields).Value,(pCVar2->fields).Value,t,(MethodInfo *)0x0);
          pCVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
          CustomLogic_CustomLogicColorBuiltin___ctor_58aa2e0(pCVar1,value,method_00);
          return (Il2CppObject *)pCVar1;
        }
        goto label_059ad5f0;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding__Gradient>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__Gradient_b__8_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ad600

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__Gradient_b__8_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar1;
  CustomLogic_CustomLogicColorBuiltin_o *b;
  MethodInfo *method_00;
  float t;
  
  if (Il2CppMethodInitialized_07545b06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b06 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__a->m_Items[1],
                     (MethodInfo_34BDE00 *)
                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
      if (2 < (uint)__a->max_length) {
        t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (__a->m_Items[2],
                       (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        pCVar1 = CustomLogic_CustomLogicColorBuiltin__Gradient(pCVar1,b,t,method_00);
        return (Il2CppObject *)pCVar1;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__9_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ad6d0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__9_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  undefined8 in_RAX;
  Il2CppObject *pIVar4;
  bool bVar5;
  undefined8 uStack_18;
  
  if (__a == (System_Object_array *)0x0) {
label_059ad7a4:
    ThrowNullReferenceException();
  }
  iVar2 = (int)__a->max_length;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    ThrowIndexOutOfRangeException();
  }
  if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_059ad7a4;
  pIVar4 = __a->m_Items[0];
  pIVar3 = __a->m_Items[1];
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07545ae7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_07545ae7 = '\x01';
  }
  if (pIVar4 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
    if (bVar1 <= (pIVar4->klass->_2).typeHierarchyDepth) {
      bVar5 = false;
      if ((pIVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin) {
        pIVar4 = (Il2CppObject *)0x0;
      }
      if ((pIVar3 == (Il2CppObject *)0x0) || (pIVar4 == (Il2CppObject *)0x0)) goto label_059ad776;
      if ((bVar1 <= (pIVar3->klass->_2).typeHierarchyDepth) &&
         ((pIVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
        bVar5 = pIVar4[3].klass == pIVar3[3].klass;
        goto label_059ad776;
      }
    }
  }
  bVar5 = false;
label_059ad776:
  uStack_18 = CONCAT17(bVar5,(undefined7)uStack_18);
  pIVar4 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
  return pIVar4;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__10_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ad7b0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__10_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if ((__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
     (pUVar1 = (__c->fields).Value, pUVar1 == (Utility_Color255_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._2_GetHashCode.methodPtr)(pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method);
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar2;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__11_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ad7f0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__11_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = CustomLogic_CustomLogicColorBuiltin____Copy__(__c,(MethodInfo *)__c);
  return pIVar1;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Str__>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Str___b__12_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ad810

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Str___b__12_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (*(__c->klass->vtable)._3_ToString.methodPtr)(__c,(__c->klass->vtable)._3_ToString.method);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Add__>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Add___b__13_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ad840

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Add___b__13_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicColorBuiltin____Add__
                         ((CustomLogic_CustomLogicColorBuiltin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                          method);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Sub__>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Sub___b__14_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ad870

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Sub___b__14_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicColorBuiltin____Sub__
                         ((CustomLogic_CustomLogicColorBuiltin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                          method);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Mul___b__15_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ad8a0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Mul___b__15_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicColorBuiltin____Mul__
                         ((CustomLogic_CustomLogicColorBuiltin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                          method);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Div__>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Div___b__16_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ad8d0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Div___b__16_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicColorBuiltin____Div__
                         ((CustomLogic_CustomLogicColorBuiltin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                          method);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicColorBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59ab710

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicColorBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicColorBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545aef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"__Sub__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Str__");
    il2cpp_codegen_initialize_runtime_metadata(&"R");
    il2cpp_codegen_initialize_runtime_metadata(&"G");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"Gradient");
    il2cpp_codegen_initialize_runtime_metadata(&"Lerp");
    il2cpp_codegen_initialize_runtime_metadata(&"ToHexString");
    il2cpp_codegen_initialize_runtime_metadata(&"__Div__");
    il2cpp_codegen_initialize_runtime_metadata(&"B");
    il2cpp_codegen_initialize_runtime_metadata(&"__Mul__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Add__");
    il2cpp_codegen_initialize_runtime_metadata(&"A");
    Il2CppMethodInitialized_07545aef = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x993c73c6) {
    if (uVar2 < 0x2115286d) {
      if (uVar2 == 0xdc1f3cc) {
        bVar1 = System_String__op_Equality(name,"__Add__",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Add__
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Add__
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x18c37b41) {
        bVar1 = System_String__op_Equality(name,"__Mul__",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Mul__
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Mul__
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x2115286c) {
        bVar1 = System_String__op_Equality(name,"ToHexString",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__ToHexString
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__ToHexString
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x792a6492) {
      if (uVar2 == 0x549f4d10) {
        bVar1 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Copy__
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x792a6491) {
        bVar1 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Hash__
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x91efe6d7) {
      bVar1 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Eq__
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x993c73c5) {
      bVar1 = System_String__op_Equality(name,"Gradient",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Gradient
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xc40bf6cd) {
    if (uVar2 < 0x9f4a1a21) {
      if (uVar2 == 0x9e956088) {
        bVar1 = System_String__op_Equality(name,"Lerp",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Lerp
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x9f4a1a20) {
        bVar1 = System_String__op_Equality(name,"__Str__",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Str__
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xc20bf3a6) {
      bVar1 = System_String__op_Equality(name,"G",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__G
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xc40bf6cc) {
      bVar1 = System_String__op_Equality(name,"A",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__A
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xd70c14b6) {
    if (uVar2 == 0xc70bfb85) {
      bVar1 = System_String__op_Equality(name,"B",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__B
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xd70c14b5) {
      bVar1 = System_String__op_Equality(name,"R",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__R
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 == 0xd7cecb55) {
    bVar1 = System_String__op_Equality(name,"__Sub__",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Sub__
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xff76b6dc) {
    bVar1 = System_String__op_Equality(name,"__Div__",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Div__
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicColorBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__R
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__R (const MethodInfo* method);
// 0x59abd30

CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__R(MethodInfo *method)

{
  System_Func_CustomLogicColorBuiltin__object__o *__this;
  System_Action_CustomLogicColorBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545af0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColorBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__R_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__R_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColorBuiltin_object);
    Il2CppMethodInitialized_07545af0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__R_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicColorBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__R_g____setter_2_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__G
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__G (const MethodInfo* method);
// 0x59abe10

CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__G(MethodInfo *method)

{
  System_Func_CustomLogicColorBuiltin__object__o *__this;
  System_Action_CustomLogicColorBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545af1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColorBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__G_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__G_g____setter_3_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColorBuiltin_object);
    Il2CppMethodInitialized_07545af1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__G_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicColorBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__G_g____setter_3_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__B
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__B (const MethodInfo* method);
// 0x59abef0

CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__B(MethodInfo *method)

{
  System_Func_CustomLogicColorBuiltin__object__o *__this;
  System_Action_CustomLogicColorBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545af2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColorBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__B_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__B_g____setter_4_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColorBuiltin_object);
    Il2CppMethodInitialized_07545af2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__B_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicColorBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__B_g____setter_4_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__A
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__A (const MethodInfo* method);
// 0x59abfd0

CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__A(MethodInfo *method)

{
  System_Func_CustomLogicColorBuiltin__object__o *__this;
  System_Action_CustomLogicColorBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545af3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColorBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__A_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__A_g____setter_5_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColorBuiltin_object);
    Il2CppMethodInitialized_07545af3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__A_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicColorBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__A_g____setter_5_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding__ToHexString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__ToHexString (const MethodInfo* method);
// 0x59ac0b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ac0e5: jmp 0x59ac155

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__ToHexString(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicColorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545af4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__ToHexString_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545af4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicColorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__ToHexString_b__6_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding__Lerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Lerp (const MethodInfo* method);
// 0x59ac1f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ac225: jmp 0x59ac295

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Lerp(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicColorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545af5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545af5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicColorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__7_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding__Gradient
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Gradient (const MethodInfo* method);
// 0x59ac330
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ac365: jmp 0x59ac3d5

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Gradient(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicColorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545af6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__Gradient_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545af6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicColorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__Gradient_b__8_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x59ac470
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ac4a5: jmp 0x59ac515

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicColorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545af7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Eq___b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545af7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicColorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Eq___b__9_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x59ac5b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ac5e5: jmp 0x59ac655

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicColorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545af8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Hash___b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545af8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicColorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Hash___b__10_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x59ac6f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ac725: jmp 0x59ac795

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicColorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545af9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Copy___b__11_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545af9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicColorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Copy___b__11_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Str__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Str__ (const MethodInfo* method);
// 0x59ac830
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ac865: jmp 0x59ac8d5

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Str__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicColorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545afa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Str___b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545afa = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__12_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__12_0;
  }
  if (__this == (System_Func_CustomLogicColorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Str___b__12_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__12_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Add__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Add__ (const MethodInfo* method);
// 0x59ac970
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ac9a5: jmp 0x59aca15

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Add__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicColorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545afb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Add___b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545afb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__13_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__13_0;
  }
  if (__this == (System_Func_CustomLogicColorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Add___b__13_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__13_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Sub__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Sub__ (const MethodInfo* method);
// 0x59acab0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59acae5: jmp 0x59acb55

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Sub__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicColorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545afc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Sub___b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545afc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__14_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__14_0;
  }
  if (__this == (System_Func_CustomLogicColorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Sub___b__14_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__14_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Mul__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Mul__ (const MethodInfo* method);
// 0x59acbf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59acc25: jmp 0x59acc95

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Mul__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicColorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545afd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Mul___b__15_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545afd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__15_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__15_0;
  }
  if (__this == (System_Func_CustomLogicColorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Mul___b__15_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__15_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Div__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Div__ (const MethodInfo* method);
// 0x59acd30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59acd65: jmp 0x59acdd5

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Div__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicColorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545afe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Div___b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545afe = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__16_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__16_0;
  }
  if (__this == (System_Func_CustomLogicColorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Div___b__16_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__16_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__16_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x59ace70

void CustomLogic_CustomLogicColorBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545aff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"__Sub__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Str__");
    il2cpp_codegen_initialize_runtime_metadata(&"R");
    il2cpp_codegen_initialize_runtime_metadata(&"G");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"Gradient");
    il2cpp_codegen_initialize_runtime_metadata(&"Lerp");
    il2cpp_codegen_initialize_runtime_metadata(&"ToHexString");
    il2cpp_codegen_initialize_runtime_metadata(&"__Div__");
    il2cpp_codegen_initialize_runtime_metadata(&"B");
    il2cpp_codegen_initialize_runtime_metadata(&"__Mul__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Add__");
    il2cpp_codegen_initialize_runtime_metadata(&"A");
    Il2CppMethodInitialized_07545aff = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"R",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"G",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"B",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"A",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToHexString",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Lerp",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Gradient",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Eq__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Hash__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Copy__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Str__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Add__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Sub__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Mul__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Div__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__R>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__R_g____getter_2_0 (CustomLogic_CustomLogicColorBuiltin_o* __i, const MethodInfo* method);
// 0x59ad110

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__R_g____getter_2_0
          (CustomLogic_CustomLogicColorBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
     ((__i->fields).Value == (Utility_Color255_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__R>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__R_g____setter_2_1 (CustomLogic_CustomLogicColorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59ad150

void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__R_g____setter_2_1
               (CustomLogic_CustomLogicColorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_07545b00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b00 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
     (pUVar1 = (__i->fields).Value, pUVar1 == (Utility_Color255_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (pUVar1->fields).R = iVar2;
  return;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__G>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__G_g____getter_3_0 (CustomLogic_CustomLogicColorBuiltin_o* __i, const MethodInfo* method);
// 0x59ad1d0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__G_g____getter_3_0
          (CustomLogic_CustomLogicColorBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
     ((__i->fields).Value == (Utility_Color255_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__G>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__G_g____setter_3_1 (CustomLogic_CustomLogicColorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59ad210

void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__G_g____setter_3_1
               (CustomLogic_CustomLogicColorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_07545b01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b01 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
     (pUVar1 = (__i->fields).Value, pUVar1 == (Utility_Color255_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (pUVar1->fields).G = iVar2;
  return;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__B>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__B_g____getter_4_0 (CustomLogic_CustomLogicColorBuiltin_o* __i, const MethodInfo* method);
// 0x59ad290

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__B_g____getter_4_0
          (CustomLogic_CustomLogicColorBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
     ((__i->fields).Value == (Utility_Color255_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__B>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__B_g____setter_4_1 (CustomLogic_CustomLogicColorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59ad2d0

void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__B_g____setter_4_1
               (CustomLogic_CustomLogicColorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_07545b02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b02 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
     (pUVar1 = (__i->fields).Value, pUVar1 == (Utility_Color255_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (pUVar1->fields).B = iVar2;
  return;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__A>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__A_g____getter_5_0 (CustomLogic_CustomLogicColorBuiltin_o* __i, const MethodInfo* method);
// 0x59ad350

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__A_g____getter_5_0
          (CustomLogic_CustomLogicColorBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
     ((__i->fields).Value == (Utility_Color255_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__A>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__A_g____setter_5_1 (CustomLogic_CustomLogicColorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59ad390

void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__A_g____setter_5_1
               (CustomLogic_CustomLogicColorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_07545b03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b03 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
     (pUVar1 = (__i->fields).Value, pUVar1 == (Utility_Color255_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (pUVar1->fields).A = iVar2;
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x59a9ec0

void CustomLogic_CustomLogicColorBuiltin___ctor
               (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  
  if (Il2CppMethodInitialized_07545adc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_07545adc = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_5ce7770(__this_00,(MethodInfo *)0x0);
  (__this->fields).Value = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, System_String_o* hexString, const MethodInfo* method);
// 0x59a9f50

void CustomLogic_CustomLogicColorBuiltin___ctor_58a9f50
               (CustomLogic_CustomLogicColorBuiltin_o *__this,System_String_o *hexString,MethodInfo *method)

{
  Utility_Color255_o **targetAddress;
  bool bVar1;
  Utility_Color255_o *pUVar2;
  UnityEngine_Color_o color;
  UnityEngine_Color_Fields local_58;
  float local_48;
  float fStack_44;
  undefined8 uStack_40;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_07545add == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_07545add = '\x01';
  }
  local_58.r = 0.0;
  local_58.g = 0.0;
  local_58.b = 0.0;
  local_58.a = 0.0;
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_5ce7770(pUVar2,(MethodInfo *)0x0);
  targetAddress = &(__this->fields).Value;
  (__this->fields).Value = pUVar2;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (hexString,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
  if (bVar1) {
    local_38.r = local_58.r;
    local_38.g = local_58.g;
    local_38.b = 0.0;
    local_38.a = 0.0;
    local_48 = local_58.b;
    fStack_44 = local_58.a;
    uStack_40 = 0;
    pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    color.fields.b = local_48;
    color.fields.a = fStack_44;
    color.fields.r = local_38.r;
    color.fields.g = local_38.g;
    Utility_Color255___ctor_5ce7790(pUVar2,color,(MethodInfo *)0x0);
    *targetAddress = pUVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t r, int32_t g, int32_t b, const MethodInfo* method);
// 0x59aa050

void CustomLogic_CustomLogicColorBuiltin___ctor_58aa050
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t r,int32_t g,int32_t b,MethodInfo *method
               )

{
  Utility_Color255_o **targetAddress;
  Utility_Color255_o *pUVar1;
  
  if (Il2CppMethodInitialized_07545ade == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_07545ade = '\x01';
  }
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_5ce7770(pUVar1,(MethodInfo *)0x0);
  targetAddress = &(__this->fields).Value;
  (__this->fields).Value = pUVar1;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar1,r,g,b,0xff,(MethodInfo *)0x0);
  (__this->fields).Value = pUVar1;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t r, int32_t g, int32_t b, int32_t a, const MethodInfo* method);
// 0x59aa130

void CustomLogic_CustomLogicColorBuiltin___ctor_58aa130
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t r,int32_t g,int32_t b,int32_t a,
               MethodInfo *method)

{
  Utility_Color255_o **targetAddress;
  Utility_Color255_o *pUVar1;
  
  if (Il2CppMethodInitialized_07545adf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_07545adf = '\x01';
  }
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_5ce7770(pUVar1,(MethodInfo *)0x0);
  targetAddress = &(__this->fields).Value;
  (__this->fields).Value = pUVar1;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar1,r,g,b,a,(MethodInfo *)0x0);
  (__this->fields).Value = pUVar1;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x59aa210

void CustomLogic_CustomLogicColorBuiltin___ctor_58aa210
               (CustomLogic_CustomLogicColorBuiltin_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  Utility_Color255_o **targetAddress;
  Utility_Color255_o *pUVar1;
  
  if (Il2CppMethodInitialized_07545ae0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_07545ae0 = '\x01';
  }
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_5ce7770(pUVar1,(MethodInfo *)0x0);
  targetAddress = &(__this->fields).Value;
  (__this->fields).Value = pUVar1;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_5ce7790(pUVar1,color,(MethodInfo *)0x0);
  (__this->fields).Value = pUVar1;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, Utility_Color255_o* value, const MethodInfo* method);
// 0x59aa2e0

void CustomLogic_CustomLogicColorBuiltin___ctor_58aa2e0
               (CustomLogic_CustomLogicColorBuiltin_o *__this,Utility_Color255_o *value,MethodInfo *method)

{
  Utility_Color255_o **targetAddress;
  Utility_Color255_o *__this_00;
  
  if (Il2CppMethodInitialized_07545ae1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_07545ae1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_5ce7770(__this_00,(MethodInfo *)0x0);
  targetAddress = &(__this->fields).Value;
  (__this->fields).Value = __this_00;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value = value;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$get_R
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__get_R (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x59aa390

int32_t CustomLogic_CustomLogicColorBuiltin__get_R
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pUVar1->fields).R;
}


// CustomLogic.CustomLogicColorBuiltin$$set_R
// il2cpp: void CustomLogic_CustomLogicColorBuiltin__set_R (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x59aa3b0

void CustomLogic_CustomLogicColorBuiltin__set_R
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pUVar1->fields).R = value;
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$get_G
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__get_G (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x59aa3d0

int32_t CustomLogic_CustomLogicColorBuiltin__get_G
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pUVar1->fields).G;
}


// CustomLogic.CustomLogicColorBuiltin$$set_G
// il2cpp: void CustomLogic_CustomLogicColorBuiltin__set_G (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x59aa3f0

void CustomLogic_CustomLogicColorBuiltin__set_G
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pUVar1->fields).G = value;
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$get_B
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__get_B (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x59aa410

int32_t CustomLogic_CustomLogicColorBuiltin__get_B
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pUVar1->fields).B;
}


// CustomLogic.CustomLogicColorBuiltin$$set_B
// il2cpp: void CustomLogic_CustomLogicColorBuiltin__set_B (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x59aa430

void CustomLogic_CustomLogicColorBuiltin__set_B
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pUVar1->fields).B = value;
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$get_A
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__get_A (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x59aa450

int32_t CustomLogic_CustomLogicColorBuiltin__get_A
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pUVar1->fields).A;
}


// CustomLogic.CustomLogicColorBuiltin$$set_A
// il2cpp: void CustomLogic_CustomLogicColorBuiltin__set_A (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x59aa470

void CustomLogic_CustomLogicColorBuiltin__set_A
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pUVar1->fields).A = value;
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$ToHexString
// il2cpp: System_String_o* CustomLogic_CustomLogicColorBuiltin__ToHexString (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x59aa490

System_String_o *
CustomLogic_CustomLogicColorBuiltin__ToHexString
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  System_String_o *pSVar1;
  UnityEngine_Color_o color;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  color = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
  pSVar1 = Unity_VisualScripting_XColor__ToHexString(color,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicColorBuiltin$$Lerp
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicColorBuiltin__Lerp (CustomLogic_CustomLogicColorBuiltin_o* a, CustomLogic_CustomLogicColorBuiltin_o* b, float t, const MethodInfo* method);
// 0x59aa4b0

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicColorBuiltin__Lerp
          (CustomLogic_CustomLogicColorBuiltin_o *a,CustomLogic_CustomLogicColorBuiltin_o *b,float t,
          MethodInfo *method)

{
  Utility_Color255_o *value;
  CustomLogic_CustomLogicColorBuiltin_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545ae2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_07545ae2 = '\x01';
  }
  if ((a == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  value = Utility_Color255__Lerp((a->fields).Value,(b->fields).Value,t,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
  CustomLogic_CustomLogicColorBuiltin___ctor_58aa2e0(__this,value,method_00);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin$$Gradient
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicColorBuiltin__Gradient (CustomLogic_CustomLogicColorBuiltin_o* a, CustomLogic_CustomLogicColorBuiltin_o* b, float t, const MethodInfo* method);
// 0x59aa530

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicColorBuiltin__Gradient
          (CustomLogic_CustomLogicColorBuiltin_o *a,CustomLogic_CustomLogicColorBuiltin_o *b,float t,
          MethodInfo *method)

{
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphakeys;
  Utility_Color255_o *pUVar1;
  CustomLogic_CustomLogicColorBuiltin_o *__this;
  MethodInfo *method_00;
  float fVar2;
  UnityEngine_Color_o UVar3;
  UnityEngine_GradientAlphaKey_Fields UStack_78;
  UnityEngine_GradientAlphaKey_Fields UStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  UnityEngine_GradientColorKey_o UStack_58;
  UnityEngine_GradientColorKey_o UStack_38;
  
  if (Il2CppMethodInitialized_07545ae3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GradientAlphaKey_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GradientColorKey_array);
    Il2CppMethodInitialized_07545ae3 = '\x01';
  }
  colorKeys = (UnityEngine_GradientColorKey_array *)SZArrayNew(TypeInfo_UnityEngine_GradientColorKey_array,2);
  if ((a != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (a->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    UVar3 = Utility_Color255__ToColor(pUVar1,(MethodInfo *)0x0);
    UStack_38.fields.color.fields.r = 0.0;
    UStack_38.fields.color.fields.g = 0.0;
    UStack_38.fields.color.fields.b = 0.0;
    UStack_38.fields.color.fields.a = 0.0;
    UStack_38.fields.time = 0.0;
    UnityEngine_GradientColorKey___ctor(&UStack_38,UVar3,0.0,(MethodInfo *)0x0);
    if (colorKeys != (UnityEngine_GradientColorKey_array *)0x0) {
      if ((int)colorKeys->max_length == 0) {
label_059aa78b:
        ThrowIndexOutOfRangeException();
      }
      colorKeys->m_Items[0].fields.time = UStack_38.fields.time;
      colorKeys->m_Items[0].fields.color.fields.r = UStack_38.fields.color.fields.r;
      colorKeys->m_Items[0].fields.color.fields.g = UStack_38.fields.color.fields.g;
      colorKeys->m_Items[0].fields.color.fields.b = UStack_38.fields.color.fields.b;
      colorKeys->m_Items[0].fields.color.fields.a = UStack_38.fields.color.fields.a;
      if ((b != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
         (pUVar1 = (b->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
        UVar3 = Utility_Color255__ToColor(pUVar1,(MethodInfo *)0x0);
        UStack_58.fields.color.fields.r = 0.0;
        UStack_58.fields.color.fields.g = 0.0;
        UStack_58.fields.color.fields.b = 0.0;
        UStack_58.fields.color.fields.a = 0.0;
        UStack_58.fields.time = 0.0;
        UnityEngine_GradientColorKey___ctor(&UStack_58,UVar3,1.0,(MethodInfo *)0x0);
        if ((colorKeys->max_length & 0xfffffffe) == 0) goto label_059aa78b;
        colorKeys->m_Items[1].fields.time = UStack_58.fields.time;
        colorKeys->m_Items[1].fields.color.fields.r = UStack_58.fields.color.fields.r;
        colorKeys->m_Items[1].fields.color.fields.g = UStack_58.fields.color.fields.g;
        colorKeys->m_Items[1].fields.color.fields.b = UStack_58.fields.color.fields.b;
        colorKeys->m_Items[1].fields.color.fields.a = UStack_58.fields.color.fields.a;
        alphakeys = (UnityEngine_GradientAlphaKey_array *)
                    SZArrayNew(TypeInfo_UnityEngine_GradientAlphaKey_array,2);
        pUVar1 = (a->fields).Value;
        if (pUVar1 != (Utility_Color255_o *)0x0) {
          UVar3 = Utility_Color255__ToColor(pUVar1,(MethodInfo *)0x0);
          fVar2 = UVar3.fields.a;
          pUVar1 = (a->fields).Value;
          if (pUVar1 != (Utility_Color255_o *)0x0) {
            fStack_68 = fVar2;
            fStack_64 = fVar2;
            fStack_60 = fVar2;
            fStack_5c = fVar2;
            UVar3 = Utility_Color255__ToColor(pUVar1,(MethodInfo *)0x0);
            UStack_70.alpha = 0.0;
            UStack_70.time = 0.0;
            UnityEngine_GradientAlphaKey___ctor
                      ((UnityEngine_GradientAlphaKey_o *)&UStack_70,fStack_68,UVar3.fields.a,(MethodInfo *)0x0
                      );
            if (alphakeys != (UnityEngine_GradientAlphaKey_array *)0x0) {
              if ((int)alphakeys->max_length == 0) goto label_059aa78b;
              alphakeys->m_Items[0].fields = UStack_70;
              pUVar1 = (b->fields).Value;
              if (pUVar1 != (Utility_Color255_o *)0x0) {
                UVar3 = Utility_Color255__ToColor(pUVar1,(MethodInfo *)0x0);
                fVar2 = UVar3.fields.a;
                pUVar1 = (b->fields).Value;
                if (pUVar1 != (Utility_Color255_o *)0x0) {
                  fStack_68 = fVar2;
                  fStack_64 = fVar2;
                  fStack_60 = fVar2;
                  fStack_5c = fVar2;
                  UVar3 = Utility_Color255__ToColor(pUVar1,(MethodInfo *)0x0);
                  UStack_78.alpha = 0.0;
                  UStack_78.time = 0.0;
                  UnityEngine_GradientAlphaKey___ctor
                            ((UnityEngine_GradientAlphaKey_o *)&UStack_78,fStack_68,UVar3.fields.a,
                             (MethodInfo *)0x0);
                  if ((alphakeys->max_length & 0xfffffffe) != 0) {
                    alphakeys->m_Items[1].fields = UStack_78;
                    pUVar1 = Utility_Color255__Gradient(colorKeys,alphakeys,0,t,(MethodInfo *)0x0);
                    __this = il2cpp_codegen_object_new
                                       ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
                    CustomLogic_CustomLogicColorBuiltin___ctor_58aa2e0(__this,pUVar1,method_00);
                    return __this;
                  }
                  goto label_059aa78b;
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


// CustomLogic.CustomLogicColorBuiltin$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__GetHashCode (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x59aa790

int32_t CustomLogic_CustomLogicColorBuiltin__GetHashCode
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (*(pUVar1->klass->vtable)._2_GetHashCode.methodPtr)
                    (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method);
  return iVar2;
}


// CustomLogic.CustomLogicColorBuiltin$$Equals
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin__Equals (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x59aa7c0

bool CustomLogic_CustomLogicColorBuiltin__Equals
               (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  Utility_Color255_o *pUVar2;
  Il2CppClass *pIVar3;
  
  if (Il2CppMethodInitialized_07545ae4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_07545ae4 = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
    if ((bVar1 <= (obj->klass->_2).typeHierarchyDepth) &&
       ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
      pUVar2 = (__this->fields).Value;
      if ((pUVar2 == (Utility_Color255_o *)0x0) || (pIVar3 = obj[3].klass, pIVar3 == (Il2CppClass *)0x0)) {
        ThrowNullReferenceException();
      }
      if ((((pUVar2->fields).R == *(int *)&(pIVar3->_1).name) &&
          ((pUVar2->fields).G == *(int *)((long)&(pIVar3->_1).name + 4))) &&
         ((pUVar2->fields).B == *(int *)&(pIVar3->_1).namespaze)) {
        return (pUVar2->fields).A == *(int *)((long)&(pIVar3->_1).namespaze + 4);
      }
    }
  }
  return false;
}


// CustomLogic.CustomLogicColorBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicColorBuiltin__ToString (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x59aa860

System_String_o *
CustomLogic_CustomLogicColorBuiltin__ToString
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  int32_t local_38;
  int32_t local_34;
  int32_t local_30;
  int32_t local_2c;
  
  if (Il2CppMethodInitialized_07545ae5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"({0}, {1}, {2}, {3})");
    Il2CppMethodInitialized_07545ae5 = '\x01';
  }
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,4);
  pUVar1 = (__this->fields).Value;
  if (pUVar1 == (Utility_Color255_o *)0x0) {
label_059aaa5e:
    ThrowNullReferenceException();
  }
  local_2c = (pUVar1->fields).R;
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&local_2c);
  if (args == (System_Object_array *)0x0) goto label_059aaa5e;
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_059aaa68;
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar2;
    Il2CppCodeGenWriteBarrier(args->m_Items);
    pUVar1 = (__this->fields).Value;
    if (pUVar1 == (Utility_Color255_o *)0x0) goto label_059aaa5e;
    local_30 = (pUVar1->fields).G;
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&local_30);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_059aaa68;
    }
    if ((args->max_length & 0xfffffffe) == 0) goto label_059aaa63;
    args->m_Items[1] = pIVar2;
    Il2CppCodeGenWriteBarrier(args->m_Items + 1);
    pUVar1 = (__this->fields).Value;
    if (pUVar1 == (Utility_Color255_o *)0x0) goto label_059aaa5e;
    local_34 = (pUVar1->fields).B;
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_059aaa68;
    }
    if (2 < (uint)args->max_length) {
      args->m_Items[2] = pIVar2;
      Il2CppCodeGenWriteBarrier(args->m_Items + 2);
      pUVar1 = (__this->fields).Value;
      if (pUVar1 == (Utility_Color255_o *)0x0) goto label_059aaa5e;
      local_38 = (pUVar1->fields).A;
      pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
      if (pIVar2 != (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
        if (pIVar3 == (Il2CppObject *)0x0) {
label_059aaa68:
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if ((args->max_length & 0xfffffffc) != 0) {
        args->m_Items[3] = pIVar2;
        Il2CppCodeGenWriteBarrier(args->m_Items + 3);
        pSVar4 = System_String__Format_5302cf0("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
        return pSVar4;
      }
    }
  }
label_059aaa63:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicColorBuiltin$$Copy
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicColorBuiltin__Copy (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x59aaa80

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicColorBuiltin__Copy(CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  Utility_Color255_o *pUVar1;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545ae6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_07545ae6 = '\x01';
  }
  pUVar1 = (__this->fields).Value;
  if (pUVar1 == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  r = (pUVar1->fields).R;
  g = (pUVar1->fields).G;
  b = (pUVar1->fields).B;
  a = (pUVar1->fields).A;
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar1,r,g,b,a,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
  CustomLogic_CustomLogicColorBuiltin___ctor_58aa2e0(__this_00,pUVar1,method_00);
  return __this_00;
}


// CustomLogic.CustomLogicColorBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin____Eq__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59aab30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59aab77: xor eax, eax

bool CustomLogic_CustomLogicColorBuiltin____Eq__
               (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
               MethodInfo *method)

{
  byte bVar1;
  
  if (Il2CppMethodInitialized_07545ae7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_07545ae7 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
    if (bVar1 <= (self->klass->_2).typeHierarchyDepth) {
      if ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin) {
        self = (Il2CppObject *)0x0;
      }
      if ((((other != (Il2CppObject *)0x0) && (self != (Il2CppObject *)0x0)) &&
          (bVar1 <= (other->klass->_2).typeHierarchyDepth)) &&
         ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
        return self[3].klass == other[3].klass;
      }
    }
  }
  return false;
}


// CustomLogic.CustomLogicColorBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin____Hash__ (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x59aabd0

int32_t CustomLogic_CustomLogicColorBuiltin____Hash__
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (*(pUVar1->klass->vtable)._2_GetHashCode.methodPtr)
                    (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method);
  return iVar2;
}


// CustomLogic.CustomLogicColorBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Copy__ (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x59aac00

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Copy__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  Utility_Color255_o *pUVar1;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545ae8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_07545ae8 = '\x01';
  }
  pUVar1 = (__this->fields).Value;
  if (pUVar1 == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  r = (pUVar1->fields).R;
  g = (pUVar1->fields).G;
  b = (pUVar1->fields).B;
  a = (pUVar1->fields).A;
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar1,r,g,b,a,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
  CustomLogic_CustomLogicColorBuiltin___ctor_58aa2e0(__this_00,pUVar1,method_00);
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicColorBuiltin$$__Str__
// il2cpp: System_String_o* CustomLogic_CustomLogicColorBuiltin____Str__ (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x59aacb0

System_String_o *
CustomLogic_CustomLogicColorBuiltin____Str__(CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = (*(__this->klass->vtable)._3_ToString.methodPtr)(__this,(__this->klass->vtable)._3_ToString.method)
  ;
  return pSVar1;
}


// CustomLogic.CustomLogicColorBuiltin$$__Add__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Add__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59aacd0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Add__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppClass *pIVar3;
  Utility_Color255_o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *__this_01;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  MethodInfo *method_00;
  int32_t b;
  int32_t a;
  int32_t r;
  int32_t g;
  
  if (Il2CppMethodInitialized_07545ae9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_07545ae9 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
    if ((((bVar1 <= (self->klass->_2).typeHierarchyDepth) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (other->klass->_2).typeHierarchyDepth &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)))) {
      pIVar2 = self[3].klass;
      if ((pIVar2 == (Il2CppClass *)0x0) || (pIVar3 = other[3].klass, pIVar3 == (Il2CppClass *)0x0)) {
        ThrowNullReferenceException();
      }
      r = *(int *)&(pIVar3->_1).name + *(int *)&(pIVar2->_1).name;
      if (0xfe < r) {
        r = 0xff;
      }
      if (r < 1) {
        r = 0;
      }
      g = *(int *)((long)&(pIVar3->_1).name + 4) + *(int *)((long)&(pIVar2->_1).name + 4);
      if (0xfe < g) {
        g = 0xff;
      }
      if (g < 1) {
        g = 0;
      }
      b = *(int *)&(pIVar3->_1).namespaze + *(int *)&(pIVar2->_1).namespaze;
      if (0xfe < b) {
        b = 0xff;
      }
      if (b < 1) {
        b = 0;
      }
      a = *(int *)((long)&(pIVar3->_1).namespaze + 4) + *(int *)((long)&(pIVar2->_1).namespaze + 4);
      if (0xfe < a) {
        a = 0xff;
      }
      if (a < 1) {
        a = 0;
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_58aa2e0(__this_01,__this_00,method_00);
      return (Il2CppObject *)__this_01;
    }
  }
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Add__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColorBuiltin___Add);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicColorBuiltin$$__Sub__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Sub__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59aae80

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Sub__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppClass *pIVar3;
  Utility_Color255_o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *__this_01;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  MethodInfo *method_00;
  int32_t b;
  int32_t a;
  int32_t r;
  int32_t g;
  
  if (Il2CppMethodInitialized_07545aea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_07545aea = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
    if ((((bVar1 <= (self->klass->_2).typeHierarchyDepth) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (other->klass->_2).typeHierarchyDepth &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)))) {
      pIVar2 = self[3].klass;
      if ((pIVar2 == (Il2CppClass *)0x0) || (pIVar3 = other[3].klass, pIVar3 == (Il2CppClass *)0x0)) {
        ThrowNullReferenceException();
      }
      r = *(int *)&(pIVar2->_1).name - *(int *)&(pIVar3->_1).name;
      if (0xfe < r) {
        r = 0xff;
      }
      if (r < 1) {
        r = 0;
      }
      g = *(int *)((long)&(pIVar2->_1).name + 4) - *(int *)((long)&(pIVar3->_1).name + 4);
      if (0xfe < g) {
        g = 0xff;
      }
      if (g < 1) {
        g = 0;
      }
      b = *(int *)&(pIVar2->_1).namespaze - *(int *)&(pIVar3->_1).namespaze;
      if (0xfe < b) {
        b = 0xff;
      }
      if (b < 1) {
        b = 0;
      }
      a = *(int *)((long)&(pIVar2->_1).namespaze + 4) - *(int *)((long)&(pIVar3->_1).namespaze + 4);
      if (0xfe < a) {
        a = 0xff;
      }
      if (a < 1) {
        a = 0;
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_58aa2e0(__this_01,__this_00,method_00);
      return (Il2CppObject *)__this_01;
    }
  }
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Sub__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColorBuiltin___Sub);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicColorBuiltin$$__Mul__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Mul__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59ab030

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Mul__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppClass *pIVar3;
  Utility_Color255_o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *__this_01;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  MethodInfo *method_00;
  int32_t b;
  int32_t a;
  int32_t r;
  int32_t g;
  
  if (Il2CppMethodInitialized_07545aeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_07545aeb = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
    if ((((bVar1 <= (self->klass->_2).typeHierarchyDepth) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (other->klass->_2).typeHierarchyDepth &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)))) {
      pIVar2 = self[3].klass;
      if ((pIVar2 == (Il2CppClass *)0x0) || (pIVar3 = other[3].klass, pIVar3 == (Il2CppClass *)0x0)) {
        ThrowNullReferenceException();
      }
      r = *(int *)&(pIVar3->_1).name * *(int *)&(pIVar2->_1).name;
      if (0xfe < r) {
        r = 0xff;
      }
      if (r < 1) {
        r = 0;
      }
      g = *(int *)((long)&(pIVar3->_1).name + 4) * *(int *)((long)&(pIVar2->_1).name + 4);
      if (0xfe < g) {
        g = 0xff;
      }
      if (g < 1) {
        g = 0;
      }
      b = *(int *)&(pIVar3->_1).namespaze * *(int *)&(pIVar2->_1).namespaze;
      if (0xfe < b) {
        b = 0xff;
      }
      if (b < 1) {
        b = 0;
      }
      a = *(int *)((long)&(pIVar3->_1).namespaze + 4) * *(int *)((long)&(pIVar2->_1).namespaze + 4);
      if (0xfe < a) {
        a = 0xff;
      }
      if (a < 1) {
        a = 0;
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_58aa2e0(__this_01,__this_00,method_00);
      return (Il2CppObject *)__this_01;
    }
  }
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Mul__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColorBuiltin___Mul);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicColorBuiltin$$__Div__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Div__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59ab1e0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Div__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppClass *pIVar3;
  int r;
  int g;
  int b;
  int iVar4;
  Utility_Color255_o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *__this_01;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  MethodInfo *method_00;
  int a;
  
  if (Il2CppMethodInitialized_07545aec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_07545aec = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
    if ((((bVar1 <= (self->klass->_2).typeHierarchyDepth) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (other->klass->_2).typeHierarchyDepth &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)))) {
      pIVar2 = self[3].klass;
      if ((pIVar2 == (Il2CppClass *)0x0) || (pIVar3 = other[3].klass, pIVar3 == (Il2CppClass *)0x0)) {
        ThrowNullReferenceException();
      }
      r = *(int *)&(pIVar2->_1).name / *(int *)&(pIVar3->_1).name;
      if (0xfe < r) {
        r = 0xff;
      }
      if (r < 1) {
        r = 0;
      }
      g = *(int *)((long)&(pIVar2->_1).name + 4) / *(int *)((long)&(pIVar3->_1).name + 4);
      if (0xfe < g) {
        g = 0xff;
      }
      if (g < 1) {
        g = 0;
      }
      b = *(int *)&(pIVar2->_1).namespaze / *(int *)&(pIVar3->_1).namespaze;
      if (0xfe < b) {
        b = 0xff;
      }
      if (b < 1) {
        b = 0;
      }
      iVar4 = *(int *)((long)&(pIVar2->_1).namespaze + 4) / *(int *)((long)&(pIVar3->_1).namespaze + 4);
      a = 0xff;
      if (iVar4 < 0xff) {
        a = iVar4;
      }
      if (a < 1) {
        a = 0;
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_58aa2e0(__this_01,__this_00,method_00);
      return (Il2CppObject *)__this_01;
    }
  }
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Div__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColorBuiltin___Div);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicColorBuiltin$$__Mod__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Mod__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59ab390

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Mod__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotImplementedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_codegen_object_new(klass);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColorBuiltin___Mod);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicColorBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicColorBuiltin__get_ClassName (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x59ab3d0

System_String_o *
CustomLogic_CustomLogicColorBuiltin__get_ClassName
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545aed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    Il2CppMethodInitialized_07545aed = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin__get_IsAbstract (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x59ab400

bool CustomLogic_CustomLogicColorBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicColorBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin__get_IsStatic (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x59ab410

bool CustomLogic_CustomLogicColorBuiltin__get_IsStatic
               (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicColorBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x59ab420

bool CustomLogic_CustomLogicColorBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


