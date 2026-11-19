// Type: CustomLogic.CustomLogicConvertBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicConvertBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicConvertBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicConvertBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicConvertBuiltin_o* CustomLogic_CustomLogicConvertBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5b28a90

CustomLogic_CustomLogicConvertBuiltin_o *
CustomLogic_CustomLogicConvertBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_0754719b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin);
    Il2CppMethodInitialized_0754719b = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicConvertBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin);
  if (Il2CppMethodInitialized_07547190 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07547190 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicConvertBuiltin_o *)__this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5b2a8c0

void CustomLogic_CustomLogicConvertBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075471ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471ae = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5b2a930

void CustomLogic_CustomLogicConvertBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToFloat>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToFloat_b__2_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2a940

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToFloat_b__2_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  CustomLogic_CustomLogicConvertBuiltin__ToFloat(__a->m_Items[0],(MethodInfo *)__c);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToInt>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToInt_b__3_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2a980

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToInt_b__3_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *s;
  Il2CppClass *pIVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  s = (System_String_o *)__a->m_Items[0];
  if (s != (System_String_o *)0x0) {
    pIVar1 = (Il2CppClass *)s->klass;
    if (pIVar1 == g_data_07556758) {
      System_Int32__Parse(s,(MethodInfo *)0x0);
    }
    else if (pIVar1 == g_data_07556740) {
      il2cpp_vm_Object_Unbox((Il2CppObject *)s);
    }
    else if (pIVar1 == g_data_07556710) {
      il2cpp_vm_Object_Unbox((Il2CppObject *)s);
    }
    else if (pIVar1 == g_data_075566f0) {
      il2cpp_vm_Object_Unbox((Il2CppObject *)s);
    }
  }
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar2;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToBool>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToBool_b__4_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2aa10

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToBool_b__4_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicConvertBuiltin__ToBool(__a->m_Items[0],(MethodInfo *)__c);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToString>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToString_b__5_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2aa50

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToString_b__5_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *pIVar2;
  char *pcVar3;
  System_String_o **ppSVar4;
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar2 = __a->m_Items[0];
  if (Il2CppMethodInitialized_07547193 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_07547193 = '\x01';
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    ppSVar4 = &"null";
  }
  else {
    pIVar1 = pIVar2->klass;
    if (pIVar1 == g_data_07556758) {
      return pIVar2;
    }
    if (pIVar1 != g_data_075566f0) {
      pIVar2 = (Il2CppObject *)(*pIVar1->vtable[3].methodPtr)(pIVar2,pIVar1->vtable[3].method);
      return pIVar2;
    }
    pcVar3 = il2cpp_vm_Object_Unbox(pIVar2);
    if (*pcVar3 == '\0') {
      ppSVar4 = &"false";
    }
    else {
      ppSVar4 = &"true";
    }
  }
  return (Il2CppObject *)*ppSVar4;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsFloat>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsFloat_b__6_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2ab10

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsFloat_b__6_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsInt>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsInt_b__7_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2ab60

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsInt_b__7_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsBool>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsBool_b__8_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2abb0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsBool_b__8_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsString>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsString_b__9_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2ac00

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsString_b__9_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsObject>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsObject_b__10_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2ac60

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsObject_b__10_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_9;
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar3 = __a->m_Items[0];
  if (Il2CppMethodInitialized_07547194 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    Il2CppMethodInitialized_07547194 = '\x01';
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar3->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if (bVar1 <= (pIVar2->_2).typeHierarchyDepth) {
      local_9 = (pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance;
      goto label_05b2acc4;
    }
  }
  local_9 = false;
label_05b2acc4:
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&local_9);
  return pIVar3;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsList>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsList_b__11_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2acf0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsList_b__11_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_9;
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar3 = __a->m_Items[0];
  if (Il2CppMethodInitialized_07547195 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    Il2CppMethodInitialized_07547195 = '\x01';
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar3->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
    if (bVar1 <= (pIVar2->_2).typeHierarchyDepth) {
      local_9 = (pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin;
      goto label_05b2ad54;
    }
  }
  local_9 = false;
label_05b2ad54:
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&local_9);
  return pIVar3;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsDict>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsDict_b__12_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2ad80

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsDict_b__12_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_9;
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar3 = __a->m_Items[0];
  if (Il2CppMethodInitialized_07547196 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin);
    Il2CppMethodInitialized_07547196 = '\x01';
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar3->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin->_2).typeHierarchyDepth;
    if (bVar1 <= (pIVar2->_2).typeHierarchyDepth) {
      local_9 = (pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin;
      goto label_05b2ade4;
    }
  }
  local_9 = false;
label_05b2ade4:
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&local_9);
  return pIVar3;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasVariable>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__HasVariable_b__13_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2ae10

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__HasVariable_b__13_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  CustomLogic_CustomLogicClassInstance_o *__this_00;
  System_String_o *name;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_075471af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471af = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b2aede:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __this_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar2,(MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance
                          );
    if ((__a->max_length & 0xfffffffe) != 0) {
      name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (__a->m_Items[1],
                        (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (__this_00 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
        bVar1 = CustomLogic_CustomLogicClassInstance__HasVariable(__this_00,name,(MethodInfo *)0x0);
        uStack_18 = CONCAT17(bVar1,(undefined7)uStack_18);
        pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
        return pIVar2;
      }
      goto label_05b2aede;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__DefineVariable>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__DefineVariable_b__14_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2aef0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__DefineVariable_b__14_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  CustomLogic_CustomLogicClassInstance_o *__this_01;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_075471b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471b0 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_05b2aff6;
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __this_01 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance
                          );
    if ((__a->max_length & 0xfffffffe) != 0) {
      name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (__a->m_Items[1],
                        (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        pIVar1 = __a->m_Items[2];
        if (Il2CppMethodInitialized_07547197 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
          Il2CppMethodInitialized_07547197 = '\x01';
        }
        if (__this_01 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
label_05b2aff6:
          ThrowNullReferenceException();
        }
        bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(__this_01,name,(MethodInfo *)0x0);
        if (!bVar2) {
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_01->fields).Variables
          ;
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b2aff6;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this_00,(Il2CppObject *)name,pIVar1,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
        }
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveVariable>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__RemoveVariable_b__15_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2b000

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__RemoveVariable_b__15_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  CustomLogic_CustomLogicClassInstance_o *__this_01;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_075471b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471b1 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_05b2b0f5;
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __this_01 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance)
    ;
    if ((__a->max_length & 0xfffffffe) != 0) {
      name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (__a->m_Items[1],
                        (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (Il2CppMethodInitialized_07547198 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Remove);
        Il2CppMethodInitialized_07547198 = '\x01';
      }
      if (__this_01 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
label_05b2b0f5:
        ThrowNullReferenceException();
      }
      bVar1 = CustomLogic_CustomLogicClassInstance__HasVariable(__this_01,name,(MethodInfo *)0x0);
      if (bVar1) {
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_01->fields).Variables;
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b2b0f5;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (__this_00,(Il2CppObject *)name,
                   (MethodInfo_4AAED10 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Remove
                  );
      }
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasMethod>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__HasMethod_b__16_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2b100

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__HasMethod_b__16_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  System_String_o *methodName;
  Il2CppObject *pIVar2;
  undefined1 uStack_19;
  
  if (Il2CppMethodInitialized_075471b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471b2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    classInstance =
         CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                   (pIVar2,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance);
    if ((__a->max_length & 0xfffffffe) != 0) {
      methodName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[1],
                              (MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (Il2CppMethodInitialized_07547199 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_07547199 = '\x01';
        uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      }
      else {
        __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)
                     ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
      }
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        uStack_19 = false;
      }
      else {
        uStack_19 = CustomLogic_CustomLogicEvaluator__HasMethod
                              (__this_00,classInstance,methodName,(MethodInfo *)0x0);
      }
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_19);
      return pIVar2;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetType>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__GetType_b__17_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2b250

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__GetType_b__17_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  CustomLogic_CustomLogicClassInstance_o *pCVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_075471b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471b3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance)
    ;
    if (pCVar1 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
      vtableDispatch = (pCVar1->klass->vtable)._6_unknown.methodPtr;
      pIVar2 = (Il2CppObject *)
               (*vtableDispatch)
                         (pCVar1,(pCVar1->klass->vtable)._6_unknown.method,vtableDispatch);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicConvertBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5b28bb0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicConvertBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicConvertBuiltin_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_0754719c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"GetType");
    il2cpp_codegen_initialize_runtime_metadata(&"DefineVariable");
    il2cpp_codegen_initialize_runtime_metadata(&"ToString");
    il2cpp_codegen_initialize_runtime_metadata(&"HasVariable");
    il2cpp_codegen_initialize_runtime_metadata(&"IsDict");
    il2cpp_codegen_initialize_runtime_metadata(&"IsList");
    il2cpp_codegen_initialize_runtime_metadata(&"IsInt");
    il2cpp_codegen_initialize_runtime_metadata(&"IsBool");
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveVariable");
    il2cpp_codegen_initialize_runtime_metadata(&"IsString");
    il2cpp_codegen_initialize_runtime_metadata(&"IsFloat");
    il2cpp_codegen_initialize_runtime_metadata(&"HasMethod");
    il2cpp_codegen_initialize_runtime_metadata(&"IsObject");
    il2cpp_codegen_initialize_runtime_metadata(&"ToInt");
    il2cpp_codegen_initialize_runtime_metadata(&"ToBool");
    il2cpp_codegen_initialize_runtime_metadata(&"ToFloat");
    Il2CppMethodInitialized_0754719c = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x54aa9712) {
    if (uVar2 < 0x36ec8533) {
      if (uVar2 < 0x16a60c4e) {
        if (uVar2 == 0xb7c33aa) {
          bVar1 = System_String__op_Equality(name,"IsObject",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsObject
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x16a60c4d) {
          bVar1 = System_String__op_Equality(name,"IsBool",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsBool
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x21b10f16) {
        bVar1 = System_String__op_Equality(name,"DefineVariable",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__DefineVariable
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x36ec8532) {
        bVar1 = System_String__op_Equality(name,"HasMethod",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasMethod
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x43eb6410) {
      if (uVar2 == 0x42797ce9) {
        bVar1 = System_String__op_Equality(name,"IsDict",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsDict
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x43eb640f) {
        bVar1 = System_String__op_Equality(name,"GetType",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__GetType
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x45844edd) {
      bVar1 = System_String__op_Equality(name,"RemoveVariable",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__RemoveVariable
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x54aa9711) {
      bVar1 = System_String__op_Equality(name,"IsList",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsList
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x7bdd082f) {
    if (uVar2 < 0x7040ed26) {
      if (uVar2 == 0x59fa775c) {
        bVar1 = System_String__op_Equality(name,"ToBool",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToBool
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x7040ed25) {
        bVar1 = System_String__op_Equality(name,"ToString",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToString
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x72a1342f) {
      bVar1 = System_String__op_Equality(name,"HasVariable",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasVariable
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x7bdd082e) {
      bVar1 = System_String__op_Equality(name,"IsInt",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsInt
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xc34f3929) {
    if (uVar2 == 0xba01fe55) {
      bVar1 = System_String__op_Equality(name,"IsFloat",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsFloat
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xc34f3928) {
      bVar1 = System_String__op_Equality(name,"IsString",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsString
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xdfa2d4fd) {
    bVar1 = System_String__op_Equality(name,"ToInt",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToInt
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xc5a73b76) {
    bVar1 = System_String__op_Equality(name,"ToFloat",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToFloat
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicConvertBuiltin not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToFloat (const MethodInfo* method);
// 0x5b29200
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b29235: jmp 0x5b292a5

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToFloat(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicConvertBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754719d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToFloat_b__2_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754719d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__2_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__2_0;
  }
  if (__this == (System_Func_CustomLogicConvertBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToFloat_b__2_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    pCVar2->__9__2_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__2_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToInt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToInt (const MethodInfo* method);
// 0x5b29340
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b29375: jmp 0x5b293e5

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToInt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicConvertBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754719e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToInt_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754719e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicConvertBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToInt_b__3_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToBool (const MethodInfo* method);
// 0x5b29480
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b294b5: jmp 0x5b29525

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToBool(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicConvertBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754719f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToBool_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754719f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicConvertBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToBool_b__4_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToString (const MethodInfo* method);
// 0x5b295c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b295f5: jmp 0x5b29665

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToString(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicConvertBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToString_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471a0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicConvertBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToString_b__5_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsFloat (const MethodInfo* method);
// 0x5b29700
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b29735: jmp 0x5b297a5

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsFloat(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicConvertBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsFloat_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471a1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicConvertBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsFloat_b__6_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsInt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsInt (const MethodInfo* method);
// 0x5b29840
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b29875: jmp 0x5b298e5

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsInt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicConvertBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsInt_b__7_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471a2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicConvertBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsInt_b__7_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsBool (const MethodInfo* method);
// 0x5b29980
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b299b5: jmp 0x5b29a25

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsBool(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicConvertBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsBool_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471a3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicConvertBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsBool_b__8_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsString (const MethodInfo* method);
// 0x5b29ac0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b29af5: jmp 0x5b29b65

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsString(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicConvertBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsString_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471a4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicConvertBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsString_b__9_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsObject (const MethodInfo* method);
// 0x5b29c00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b29c35: jmp 0x5b29ca5

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsObject(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicConvertBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsObject_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471a5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicConvertBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsObject_b__10_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsList
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsList (const MethodInfo* method);
// 0x5b29d40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b29d75: jmp 0x5b29de5

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsList(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicConvertBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsList_b__11_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471a6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicConvertBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsList_b__11_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsDict
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsDict (const MethodInfo* method);
// 0x5b29e80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b29eb5: jmp 0x5b29f25

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsDict(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicConvertBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsDict_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471a7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__12_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__12_0;
  }
  if (__this == (System_Func_CustomLogicConvertBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsDict_b__12_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    pCVar2->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__12_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__HasVariable
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasVariable (const MethodInfo* method);
// 0x5b29fc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b29ff5: jmp 0x5b2a065

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasVariable(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicConvertBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__HasVariable_b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471a8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__13_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__13_0;
  }
  if (__this == (System_Func_CustomLogicConvertBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__HasVariable_b__13_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    pCVar2->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__13_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__DefineVariable
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__DefineVariable (const MethodInfo* method);
// 0x5b2a100
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2a135: jmp 0x5b2a1a5

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__DefineVariable(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicConvertBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__DefineVariable_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471a9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__14_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__14_0;
  }
  if (__this == (System_Func_CustomLogicConvertBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__DefineVariable_b__14_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    pCVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__14_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__RemoveVariable
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__RemoveVariable (const MethodInfo* method);
// 0x5b2a240
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2a275: jmp 0x5b2a2e5

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__RemoveVariable(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicConvertBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__RemoveVariable_b__15_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471aa = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__15_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__15_0;
  }
  if (__this == (System_Func_CustomLogicConvertBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__RemoveVariable_b__15_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    pCVar2->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__15_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__HasMethod
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasMethod (const MethodInfo* method);
// 0x5b2a380
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2a3b5: jmp 0x5b2a425

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasMethod(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicConvertBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__HasMethod_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471ab = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__16_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__16_0;
  }
  if (__this == (System_Func_CustomLogicConvertBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__HasMethod_b__16_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    pCVar2->__9__16_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__16_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__GetType
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__GetType (const MethodInfo* method);
// 0x5b2a4c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2a4f8: jmp 0x5b2a56b

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__GetType(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicConvertBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__GetType_b__17_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471ac = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__17_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__17_0;
  }
  if (__this == (System_Func_CustomLogicConvertBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__GetType_b__17_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields;
    pCVar2->__9__17_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__17_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5b2a600

void CustomLogic_CustomLogicConvertBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075471ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"GetType");
    il2cpp_codegen_initialize_runtime_metadata(&"DefineVariable");
    il2cpp_codegen_initialize_runtime_metadata(&"ToString");
    il2cpp_codegen_initialize_runtime_metadata(&"HasVariable");
    il2cpp_codegen_initialize_runtime_metadata(&"IsDict");
    il2cpp_codegen_initialize_runtime_metadata(&"IsList");
    il2cpp_codegen_initialize_runtime_metadata(&"IsInt");
    il2cpp_codegen_initialize_runtime_metadata(&"IsBool");
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveVariable");
    il2cpp_codegen_initialize_runtime_metadata(&"IsString");
    il2cpp_codegen_initialize_runtime_metadata(&"IsFloat");
    il2cpp_codegen_initialize_runtime_metadata(&"HasMethod");
    il2cpp_codegen_initialize_runtime_metadata(&"IsObject");
    il2cpp_codegen_initialize_runtime_metadata(&"ToInt");
    il2cpp_codegen_initialize_runtime_metadata(&"ToBool");
    il2cpp_codegen_initialize_runtime_metadata(&"ToFloat");
    Il2CppMethodInitialized_075471ad = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToFloat",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToInt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToBool",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToString",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsFloat",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsInt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsBool",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsString",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsObject",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsList",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsDict",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasVariable",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DefineVariable",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RemoveVariable",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasMethod",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetType",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicConvertBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin___ctor (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x5b283a0

void CustomLogic_CustomLogicConvertBuiltin___ctor
               (CustomLogic_CustomLogicConvertBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547190 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07547190 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicConvertBuiltin$$ToFloat
// il2cpp: float CustomLogic_CustomLogicConvertBuiltin__ToFloat (Il2CppObject* value, const MethodInfo* method);
// 0x5b28410

float CustomLogic_CustomLogicConvertBuiltin__ToFloat(Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_Globalization_CultureInfo_o *provider;
  float *pfVar2;
  double *pdVar3;
  int *piVar4;
  char *pcVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_07547191 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_07547191 = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    pIVar1 = value->klass;
    if (pIVar1 == g_data_07556758) {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (value->klass != g_data_07556758) {
        il2cpp_codegen_raise_invalid_cast_exception(value);
      }
      fVar6 = System_Single__Parse_54d0cc0
                        ((System_String_o *)value,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
      return fVar6;
    }
    if (pIVar1 == g_data_07556740) {
      pfVar2 = il2cpp_vm_Object_Unbox(value);
      return *pfVar2;
    }
    if (pIVar1 == g_data_07556748) {
      pdVar3 = il2cpp_vm_Object_Unbox(value);
      return (float)*pdVar3;
    }
    if (pIVar1 == g_data_07556710) {
      piVar4 = il2cpp_vm_Object_Unbox(value);
      return (float)*piVar4;
    }
    if (pIVar1 == g_data_075566f0) {
      pcVar5 = (char *)il2cpp_runtime_helper_02abd3a0(value);
      if (*pcVar5 != '\0') {
        return 1.0;
      }
    }
  }
  return 0.0;
}


// CustomLogic.CustomLogicConvertBuiltin$$ToInt
// il2cpp: int32_t CustomLogic_CustomLogicConvertBuiltin__ToInt (Il2CppObject* value, const MethodInfo* method);
// 0x5b28530

int32_t CustomLogic_CustomLogicConvertBuiltin__ToInt(Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  int32_t iVar2;
  float *pfVar3;
  int32_t *piVar4;
  byte *pbVar5;
  
  if (value != (Il2CppObject *)0x0) {
    pIVar1 = value->klass;
    if (pIVar1 == g_data_07556758) {
      iVar2 = System_Int32__Parse((System_String_o *)value,(MethodInfo *)0x0);
      return iVar2;
    }
    if (pIVar1 == g_data_07556740) {
      pfVar3 = il2cpp_vm_Object_Unbox(value);
      return (int)*pfVar3;
    }
    if (pIVar1 == g_data_07556710) {
      piVar4 = il2cpp_vm_Object_Unbox(value);
      return *piVar4;
    }
    if (pIVar1 == g_data_075566f0) {
      pbVar5 = il2cpp_vm_Object_Unbox(value);
      return (int32_t)*pbVar5;
    }
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$ToBool
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__ToBool (Il2CppObject* value, const MethodInfo* method);
// 0x5b28590

bool CustomLogic_CustomLogicConvertBuiltin__ToBool(Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  bool bVar2;
  System_String_o *a;
  float *pfVar3;
  int *piVar4;
  char *pcVar5;
  
  if (Il2CppMethodInitialized_07547192 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_07547192 = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    pIVar1 = value->klass;
    if (pIVar1 == g_data_07556758) {
      a = System_String__ToLower((System_String_o *)value,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,"true",(MethodInfo *)0x0);
      return bVar2;
    }
    if (pIVar1 == g_data_07556740) {
      pfVar3 = il2cpp_vm_Object_Unbox(value);
      return (bool)(-(*pfVar3 != 0.0) & 1);
    }
    if (pIVar1 == g_data_07556710) {
      piVar4 = il2cpp_vm_Object_Unbox(value);
      return *piVar4 != 0;
    }
    if (pIVar1 == g_data_075566f0) {
      pcVar5 = il2cpp_vm_Object_Unbox(value);
      return *pcVar5 != '\0';
    }
  }
  return false;
}


// CustomLogic.CustomLogicConvertBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicConvertBuiltin__ToString (Il2CppObject* value, const MethodInfo* method);
// 0x5b28640

System_String_o * CustomLogic_CustomLogicConvertBuiltin__ToString(Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar2;
  char *pcVar3;
  System_String_o **ppSVar4;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (Il2CppMethodInitialized_07547193 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_07547193 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (value == (Il2CppObject *)0x0) {
    ppSVar4 = &"null";
  }
  else {
    pIVar1 = value->klass;
    if (pIVar1 == g_data_07556758) {
      return (System_String_o *)value;
    }
    if (pIVar1 != g_data_075566f0) {
      vtableDispatch = pIVar1->vtable[3].methodPtr;
      pSVar2 = (System_String_o *)
               (*vtableDispatch)(value,pIVar1->vtable[3].method,in_RDX,vtableDispatch);
      return pSVar2;
    }
    pcVar3 = il2cpp_vm_Object_Unbox(value);
    if (*pcVar3 == '\0') {
      ppSVar4 = &"false";
    }
    else {
      ppSVar4 = &"true";
    }
  }
  return *ppSVar4;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsFloat
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsFloat (Il2CppObject* value, const MethodInfo* method);
// 0x5b286e0

bool CustomLogic_CustomLogicConvertBuiltin__IsFloat(Il2CppObject *value,MethodInfo *method)

{
  if (value == (Il2CppObject *)0x0) {
    return false;
  }
  return value->klass == g_data_07556740;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsInt
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsInt (Il2CppObject* value, const MethodInfo* method);
// 0x5b28700

bool CustomLogic_CustomLogicConvertBuiltin__IsInt(Il2CppObject *value,MethodInfo *method)

{
  if (value == (Il2CppObject *)0x0) {
    return false;
  }
  return value->klass == g_data_07556710;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsBool
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsBool (Il2CppObject* value, const MethodInfo* method);
// 0x5b28720

bool CustomLogic_CustomLogicConvertBuiltin__IsBool(Il2CppObject *value,MethodInfo *method)

{
  if (value == (Il2CppObject *)0x0) {
    return false;
  }
  return value->klass == g_data_075566f0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsString
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsString (Il2CppObject* value, const MethodInfo* method);
// 0x5b28740

bool CustomLogic_CustomLogicConvertBuiltin__IsString(Il2CppObject *value,MethodInfo *method)

{
  if (value == (Il2CppObject *)0x0) {
    return false;
  }
  return value->klass == g_data_07556758;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsObject
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsObject (Il2CppObject* value, const MethodInfo* method);
// 0x5b28760

bool CustomLogic_CustomLogicConvertBuiltin__IsObject(Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  
  if (Il2CppMethodInitialized_07547194 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    Il2CppMethodInitialized_07547194 = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if (bVar1 <= (value->klass->_2).typeHierarchyDepth) {
      return (value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
             (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance;
    }
  }
  return false;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsList
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsList (Il2CppObject* value, const MethodInfo* method);
// 0x5b287c0

bool CustomLogic_CustomLogicConvertBuiltin__IsList(Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  
  if (Il2CppMethodInitialized_07547195 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    Il2CppMethodInitialized_07547195 = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
    if (bVar1 <= (value->klass->_2).typeHierarchyDepth) {
      return (value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
             (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin;
    }
  }
  return false;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsDict
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsDict (Il2CppObject* value, const MethodInfo* method);
// 0x5b28820

bool CustomLogic_CustomLogicConvertBuiltin__IsDict(Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  
  if (Il2CppMethodInitialized_07547196 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin);
    Il2CppMethodInitialized_07547196 = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin->_2).typeHierarchyDepth;
    if (bVar1 <= (value->klass->_2).typeHierarchyDepth) {
      return (value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
             (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin;
    }
  }
  return false;
}


// CustomLogic.CustomLogicConvertBuiltin$$HasVariable
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__HasVariable (CustomLogic_CustomLogicClassInstance_o* cInstance, System_String_o* variableName, const MethodInfo* method);
// 0x5b28880

bool CustomLogic_CustomLogicConvertBuiltin__HasVariable
               (CustomLogic_CustomLogicClassInstance_o *cInstance,System_String_o *variableName,
               MethodInfo *method)

{
  bool bVar1;
  
  if (cInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = CustomLogic_CustomLogicClassInstance__HasVariable(cInstance,variableName,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicConvertBuiltin$$DefineVariable
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin__DefineVariable (CustomLogic_CustomLogicClassInstance_o* cInstance, System_String_o* variableName, Il2CppObject* value, const MethodInfo* method);
// 0x5b288a0

void CustomLogic_CustomLogicConvertBuiltin__DefineVariable
               (CustomLogic_CustomLogicClassInstance_o *cInstance,System_String_o *variableName,
               Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547197 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    Il2CppMethodInitialized_07547197 = '\x01';
  }
  if (cInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    bVar1 = CustomLogic_CustomLogicClassInstance__HasVariable(cInstance,variableName,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)(cInstance->fields).Variables;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this,(Il2CppObject *)variableName,value,
                 (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item
                );
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicConvertBuiltin$$RemoveVariable
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin__RemoveVariable (CustomLogic_CustomLogicClassInstance_o* cInstance, System_String_o* variableName, const MethodInfo* method);
// 0x5b28910

void CustomLogic_CustomLogicConvertBuiltin__RemoveVariable
               (CustomLogic_CustomLogicClassInstance_o *cInstance,System_String_o *variableName,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547198 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Remove);
    Il2CppMethodInitialized_07547198 = '\x01';
  }
  if (cInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    bVar1 = CustomLogic_CustomLogicClassInstance__HasVariable(cInstance,variableName,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)(cInstance->fields).Variables;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (__this,(Il2CppObject *)variableName,
                 (MethodInfo_4AAED10 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Remove);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicConvertBuiltin$$HasMethod
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__HasMethod (CustomLogic_CustomLogicClassInstance_o* cInstance, System_String_o* methodName, const MethodInfo* method);
// 0x5b28980

bool CustomLogic_CustomLogicConvertBuiltin__HasMethod
               (CustomLogic_CustomLogicClassInstance_o *cInstance,System_String_o *methodName,
               MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *__this;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547199 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07547199 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    __this = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (__this == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return false;
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod(__this,cInstance,methodName,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicConvertBuiltin$$GetType
// il2cpp: System_String_o* CustomLogic_CustomLogicConvertBuiltin__GetType (CustomLogic_CustomLogicClassInstance_o* cInstance, const MethodInfo* method);
// 0x5b28a10

System_String_o *
CustomLogic_CustomLogicConvertBuiltin__GetType
          (CustomLogic_CustomLogicClassInstance_o *cInstance,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar1;
  undefined8 in_RDX;
  
  if (cInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (cInstance->klass->vtable)._6_unknown.methodPtr;
  pSVar1 = (System_String_o *)
           (*vtableDispatch)
                     (cInstance,(cInstance->klass->vtable)._6_unknown.method,in_RDX,vtableDispatch);
  return pSVar1;
}


// CustomLogic.CustomLogicConvertBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicConvertBuiltin__get_ClassName (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x5b28a30

System_String_o *
CustomLogic_CustomLogicConvertBuiltin__get_ClassName
          (CustomLogic_CustomLogicConvertBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754719a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Convert");
    Il2CppMethodInitialized_0754719a = '\x01';
  }
  return "Convert";
}


// CustomLogic.CustomLogicConvertBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__get_IsAbstract (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x5b28a60

bool CustomLogic_CustomLogicConvertBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicConvertBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicConvertBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__get_IsStatic (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x5b28a70

bool CustomLogic_CustomLogicConvertBuiltin__get_IsStatic
               (CustomLogic_CustomLogicConvertBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicConvertBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x5b28a80

bool CustomLogic_CustomLogicConvertBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicConvertBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


