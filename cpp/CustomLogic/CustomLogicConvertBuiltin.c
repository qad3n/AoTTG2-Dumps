// Type: CustomLogic.CustomLogicConvertBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicConvertBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicConvertBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicConvertBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicConvertBuiltin_o* CustomLogic_CustomLogicConvertBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3f37670

CustomLogic_CustomLogicConvertBuiltin_o *
CustomLogic_CustomLogicConvertBuiltin_Factory__CreateInstance
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
  if (DAT_05703d5f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicConvertBuiltin);
    DAT_05703d5f = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicConvertBuiltin);
      if (DAT_05703d54 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703d54 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,method);
      return (CustomLogic_CustomLogicConvertBuiltin_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicConvertBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicConvertBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3f395a0

void CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703d72 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d72 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3f39610

void CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToFloat>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToFloat_b__2_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f39620

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c__<__CreateMethodBinding__ToFloat>b__2_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    CustomLogic_CustomLogicConvertBuiltin__ToFloat(__a->m_Items[0],(MethodInfo *)__c);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToInt>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToInt_b__3_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f39660

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c__<__CreateMethodBinding__ToInt>b__3_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *s;
  System_String_c *pSVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    s = (System_String_o *)__a->m_Items[0];
    if (s != (System_String_o *)0x0) {
      pSVar1 = s->klass;
      if (pSVar1 == DAT_057110b0) {
        System_Int32__Parse(s,(MethodInfo *)0x0);
      }
      else if (pSVar1 == DAT_05711098) {
        il2cpp_glue_022c7330();
      }
      else if (pSVar1 == DAT_05711068) {
        il2cpp_glue_022c7330();
      }
      else if (pSVar1 == DAT_05711048) {
        il2cpp_glue_022c7330();
      }
    }
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToBool>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToBool_b__4_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f396f0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c__<__CreateMethodBinding__ToBool>b__4_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    uStack_8 = in_RAX;
    bVar1 = CustomLogic_CustomLogicConvertBuiltin__ToBool(__a->m_Items[0],(MethodInfo *)__c);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToString>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToString_b__5_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f39730

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c__<__CreateMethodBinding__ToString>b__5_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar2;
  char *pcVar3;
  undefined8 *puVar4;
  System_Object_array *extraout_RDX;
  
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar2 = __a->m_Items[0];
  if (DAT_05703d57 == '\0') {
    il2cpp_init_method_metadata(&"null");
    il2cpp_init_method_metadata(&"false");
    il2cpp_init_method_metadata(&"true");
    DAT_05703d57 = '\x01';
    __a = extraout_RDX;
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    puVar4 = &"null";
  }
  else {
    pIVar1 = pIVar2->klass;
    if (pIVar1 == DAT_057110b0) {
      return pIVar2;
    }
    if (pIVar1 != DAT_05711048) {
      vtable_dispatch = pIVar1->vtable[3].methodPtr;
      pIVar2 = (Il2CppObject *)
               (*vtable_dispatch)(pIVar2,pIVar1->vtable[3].method,__a,vtable_dispatch);
      return pIVar2;
    }
    pcVar3 = (char *)il2cpp_glue_022c7330(pIVar2);
    if (*pcVar3 == '\0') {
      puVar4 = &"false";
    }
    else {
      puVar4 = &"true";
    }
  }
  return (Il2CppObject *)*puVar4;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsFloat>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsFloat_b__6_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f397f0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c__<__CreateMethodBinding__IsFloat>b__6_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined8 in_RAX;
  Il2CppObject *pIVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  bool bVar2;
  
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    if (__a->m_Items[0] == (Il2CppObject *)0x0) {
      bVar2 = false;
    }
    else {
      method = (MethodInfo *)&DAT_05711020;
      bVar2 = __a->m_Items[0]->klass == DAT_05711098;
    }
    pIVar1 = (Il2CppObject *)
             il2cpp_runtime_glue(DAT_05711048,&stack0xffffffffffffffff,__a,method,in_R8,in_R9,
                                CONCAT17(bVar2,(int7)in_RAX));
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsInt>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsInt_b__7_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f39840

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c__<__CreateMethodBinding__IsInt>b__7_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined8 in_RAX;
  Il2CppObject *pIVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  bool bVar2;
  
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    if (__a->m_Items[0] == (Il2CppObject *)0x0) {
      bVar2 = false;
    }
    else {
      method = (MethodInfo *)&DAT_05711020;
      bVar2 = __a->m_Items[0]->klass == DAT_05711068;
    }
    pIVar1 = (Il2CppObject *)
             il2cpp_runtime_glue(DAT_05711048,&stack0xffffffffffffffff,__a,method,in_R8,in_R9,
                                CONCAT17(bVar2,(int7)in_RAX));
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsBool>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsBool_b__8_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f39890

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c__<__CreateMethodBinding__IsBool>b__8_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsString>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsString_b__9_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f398e0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c__<__CreateMethodBinding__IsString>b__9_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined8 in_RAX;
  Il2CppObject *pIVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  bool bVar2;
  
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    if (__a->m_Items[0] == (Il2CppObject *)0x0) {
      bVar2 = false;
    }
    else {
      method = (MethodInfo *)&DAT_05711020;
      bVar2 = __a->m_Items[0]->klass == DAT_057110b0;
    }
    pIVar1 = (Il2CppObject *)
             il2cpp_runtime_glue(DAT_05711048,&stack0xffffffffffffffff,__a,method,in_R8,in_R9,
                                CONCAT17(bVar2,(int7)in_RAX));
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsObject>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsObject_b__10_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f39940

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c__<__CreateMethodBinding__IsObject>b__10_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_9;
  
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar3 = __a->m_Items[0];
  if (DAT_05703d58 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassInstance);
    DAT_05703d58 = '\x01';
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar3->klass;
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if (bVar1 <= (pIVar2->_2).naturalAligment) {
      local_9 = (pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance;
      goto LAB_03f399a4;
    }
  }
  local_9 = false;
LAB_03f399a4:
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
  return pIVar3;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsList>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsList_b__11_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f399d0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c__<__CreateMethodBinding__IsList>b__11_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_9;
  
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar3 = __a->m_Items[0];
  if (DAT_05703d59 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    DAT_05703d59 = '\x01';
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar3->klass;
    bVar1 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
    if (bVar1 <= (pIVar2->_2).naturalAligment) {
      local_9 = (pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicListBuiltin;
      goto LAB_03f39a34;
    }
  }
  local_9 = false;
LAB_03f39a34:
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
  return pIVar3;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsDict>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsDict_b__12_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f39a60

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c__<__CreateMethodBinding__IsDict>b__12_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_9;
  
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar3 = __a->m_Items[0];
  if (DAT_05703d5a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicDictBuiltin);
    DAT_05703d5a = '\x01';
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar3->klass;
    bVar1 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
    if (bVar1 <= (pIVar2->_2).naturalAligment) {
      local_9 = (pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicDictBuiltin;
      goto LAB_03f39ac4;
    }
  }
  local_9 = false;
LAB_03f39ac4:
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
  return pIVar3;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasVariable>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__HasVariable_b__13_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f39af0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c__<__CreateMethodBinding__HasVariable>b__13_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  CustomLogic_CustomLogicClassInstance_o *__this_00;
  System_String_o *name;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_05703d73 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicCl);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d73 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f39bba:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = (CustomLogic_CustomLogicClassInstance_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicCl);
    if (1 < (uint)__a->max_length) {
      name = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
      if (__this_00 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
        bVar1 = CustomLogic_CustomLogicClassInstance__HasVariable(__this_00,name,method_00);
        uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
        return pIVar2;
      }
      goto LAB_03f39bba;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__DefineVariable>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__DefineVariable_b__14_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f39bc0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c__<__CreateMethodBinding__DefineVariable>b__14_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar2;
  CustomLogic_CustomLogicClassInstance_o *__this_01;
  System_String_o *name;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05703d74 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicCl);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d74 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto LAB_03f39cc1;
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicCl);
    if (1 < (uint)__a->max_length) {
      name = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
      if (2 < (uint)__a->max_length) {
        pIVar1 = __a->m_Items[2];
        method_00 = extraout_RDX;
        if (DAT_05703d5b == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
          DAT_05703d5b = '\x01';
          method_00 = extraout_RDX_00;
        }
        if (__this_01 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(__this_01,name,method_00);
          if ((char)bVar2 == '\0') {
            __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this_01->fields).Variables;
            if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto LAB_03f39cc1;
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      (__this_00,(Il2CppObject *)name,pIVar1,MethodInfo_Void_set_Item);
          }
          return (Il2CppObject *)0x0;
        }
LAB_03f39cc1:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveVariable>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__RemoveVariable_b__15_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f39cd0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c__<__CreateMethodBinding__RemoveVariable>b__15_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  CustomLogic_CustomLogicClassInstance_o *__this_01;
  System_String_o *name;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05703d75 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicCl);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d75 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto LAB_03f39dc0;
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicCl);
    if (1 < (uint)__a->max_length) {
      name = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
      method_00 = extraout_RDX;
      if (DAT_05703d5c == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
        DAT_05703d5c = '\x01';
        method_00 = extraout_RDX_00;
      }
      if (__this_01 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
        bVar1 = CustomLogic_CustomLogicClassInstance__HasVariable(__this_01,name,method_00);
        if ((char)bVar1 != '\0') {
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this_01->fields).Variables;
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_03f39dc0;
          System_Collections_Generic_Dictionary<object__object>__Remove
                    (__this_00,(Il2CppObject *)name,MethodInfo_Boolean_Remove);
        }
        return (Il2CppObject *)0x0;
      }
LAB_03f39dc0:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasMethod>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__HasMethod_b__16_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f39dd0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c__<__CreateMethodBinding__HasMethod>b__16_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool_conflict bVar2;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  System_String_o *methodName;
  Il2CppObject *pIVar3;
  undefined1 local_19;
  
  if (DAT_05703d76 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicCl);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d76 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    classInstance =
         (CustomLogic_CustomLogicClassInstance_o *)
         CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar3,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicCl);
    if (1 < (uint)__a->max_length) {
      methodName = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String)
      ;
      if (DAT_05703d5d == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
        DAT_05703d5d = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      }
      else {
        __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      }
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        local_19 = 0;
      }
      else {
        bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                          (__this_00,classInstance,methodName,(MethodInfo *)0x0);
        local_19 = (undefined1)bVar2;
      }
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_19);
      return pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetType>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__GetType_b__17_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f39f20

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings_<>c__<__CreateMethodBinding__GetType>b__17_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar1;
  
  if (DAT_05703d77 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicCl);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d77 = '\x01';
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
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicCl);
    if (pIVar1 != (Il2CppObject *)0x0) {
      vtable_dispatch = pIVar1->klass->vtable[4].methodPtr;
      pIVar1 = (Il2CppObject *)
               (*vtable_dispatch)
                         (pIVar1,pIVar1->klass->vtable[4].method,vtable_dispatch);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicConvertBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3f37790

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicConvertBuiltin_Bindings__CreateMemberBinding
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
  System_Func_T__object____object__o *pSVar7;
  CustomLogic_CLMethodBinding_T__o *pCVar8;
  
  if (DAT_05703d60 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"GetType");
    il2cpp_init_method_metadata(&"DefineVariable");
    il2cpp_init_method_metadata(&"ToString");
    il2cpp_init_method_metadata(&"HasVariable");
    il2cpp_init_method_metadata(&"IsDict");
    il2cpp_init_method_metadata(&"IsList");
    il2cpp_init_method_metadata(&"IsInt");
    il2cpp_init_method_metadata(&"IsBool");
    il2cpp_init_method_metadata(&"RemoveVariable");
    il2cpp_init_method_metadata(&"IsString");
    il2cpp_init_method_metadata(&"IsFloat");
    il2cpp_init_method_metadata(&"HasMethod");
    il2cpp_init_method_metadata(&"IsObject");
    il2cpp_init_method_metadata(&"ToInt");
    il2cpp_init_method_metadata(&"ToBool");
    il2cpp_init_method_metadata(&"ToFloat");
    DAT_05703d60 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x54aa9712) {
    if (uVar3 < 0x36ec8533) {
      if (uVar3 < 0x16a60c4e) {
        if (uVar3 == 0xb7c33aa) {
          bVar4 = System_String__op_Equality(name,"IsObject",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703d69 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsObject_b__10_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703d69 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x48);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x48);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x48,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0x16a60c4d) &&
                (bVar4 = System_String__op_Equality(name,"IsBool",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703d67 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsBool_b__8_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703d67 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x38,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x21b10f16) {
        bVar4 = System_String__op_Equality(name,"DefineVariable",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703d6d == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__DefineVariable_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703d6d = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x68,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x36ec8532) &&
              (bVar4 = System_String__op_Equality(name,"HasMethod",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703d6f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__HasMethod_b__16_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703d6f = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x78,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0x43eb6410) {
      if (uVar3 == 0x42797ce9) {
        bVar4 = System_String__op_Equality(name,"IsDict",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703d6b == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsDict_b__12_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703d6b = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x58,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x43eb640f) &&
              (bVar4 = System_String__op_Equality(name,"GetType",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703d70 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetType_b__17_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703d70 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x80,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x45844edd) {
      bVar4 = System_String__op_Equality(name,"RemoveVariable",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703d6e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RemoveVariable_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703d6e = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x70,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x54aa9711) &&
            (bVar4 = System_String__op_Equality(name,"IsList",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703d6a == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsList_b__11_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703d6a = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x50,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0x7bdd082f) {
    if (uVar3 < 0x7040ed26) {
      if (uVar3 == 0x59fa775c) {
        bVar4 = System_String__op_Equality(name,"ToBool",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703d63 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToBool_b__4_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703d63 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x18,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x7040ed25) &&
              (bVar4 = System_String__op_Equality(name,"ToString",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703d64 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToString_b__5_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703d64 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x72a1342f) {
      bVar4 = System_String__op_Equality(name,"HasVariable",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703d6c == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__HasVariable_b__13);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703d6c = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x60,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x7bdd082e) &&
            (bVar4 = System_String__op_Equality(name,"IsInt",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703d66 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsInt_b__7_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703d66 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x30,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xc34f3929) {
    if (uVar3 == 0xba01fe55) {
      bVar4 = System_String__op_Equality(name,"IsFloat",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703d65 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsFloat_b__6_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703d65 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x28,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xc34f3928) &&
            (bVar4 = System_String__op_Equality(name,"IsString",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703d68 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsString_b__9_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703d68 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x40,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xdfa2d4fd) {
    bVar4 = System_String__op_Equality(name,"ToInt",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703d62 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToInt_b__3_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703d62 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x10,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xc5a73b76) &&
          (bVar4 = System_String__op_Equality(name,"ToFloat",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703d61 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToFloat_b__2_0);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703d61 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar7;
      il2cpp_runtime_glue(lVar2 + 8,pSVar7);
    }
    pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicConvertBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToFloat (const MethodInfo* method);
// 0x3f37de0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToFloat(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (DAT_05703d61 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToFloat_b__2_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d61 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToInt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToInt (const MethodInfo* method);
// 0x3f37f30

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToInt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (DAT_05703d62 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToInt_b__3_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d62 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToBool (const MethodInfo* method);
// 0x3f38080

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToBool(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (DAT_05703d63 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToBool_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d63 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToString (const MethodInfo* method);
// 0x3f381d0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToString(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (DAT_05703d64 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToString_b__5_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d64 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsFloat (const MethodInfo* method);
// 0x3f38320

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsFloat(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (DAT_05703d65 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsFloat_b__6_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d65 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsInt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsInt (const MethodInfo* method);
// 0x3f38470

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsInt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (DAT_05703d66 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsInt_b__7_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d66 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsBool (const MethodInfo* method);
// 0x3f385c0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsBool(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (DAT_05703d67 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsBool_b__8_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d67 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsString (const MethodInfo* method);
// 0x3f38710

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsString(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (DAT_05703d68 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsString_b__9_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d68 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsObject (const MethodInfo* method);
// 0x3f38860

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsObject(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (DAT_05703d69 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsObject_b__10_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d69 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsList
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsList (const MethodInfo* method);
// 0x3f389b0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsList(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (DAT_05703d6a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsList_b__11_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d6a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsDict
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsDict (const MethodInfo* method);
// 0x3f38b00

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsDict(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (DAT_05703d6b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsDict_b__12_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d6b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__HasVariable
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasVariable (const MethodInfo* method);
// 0x3f38c50

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasVariable
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (DAT_05703d6c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__HasVariable_b__13);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d6c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__DefineVariable
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__DefineVariable (const MethodInfo* method);
// 0x3f38da0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__DefineVariable
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (DAT_05703d6d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__DefineVariable_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d6d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__RemoveVariable
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__RemoveVariable (const MethodInfo* method);
// 0x3f38ef0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__RemoveVariable
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (DAT_05703d6e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RemoveVariable_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d6e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__HasMethod
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasMethod (const MethodInfo* method);
// 0x3f39040

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasMethod(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (DAT_05703d6f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__HasMethod_b__16_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d6f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_glue(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__GetType
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__GetType (const MethodInfo* method);
// 0x3f39190

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__GetType(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (DAT_05703d70 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetType_b__17_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d70 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicConvertBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_glue(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3f392e0

void CustomLogic_CustomLogicConvertBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703d71 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"GetType");
    il2cpp_init_method_metadata(&"DefineVariable");
    il2cpp_init_method_metadata(&"ToString");
    il2cpp_init_method_metadata(&"HasVariable");
    il2cpp_init_method_metadata(&"IsDict");
    il2cpp_init_method_metadata(&"IsList");
    il2cpp_init_method_metadata(&"IsInt");
    il2cpp_init_method_metadata(&"IsBool");
    il2cpp_init_method_metadata(&"RemoveVariable");
    il2cpp_init_method_metadata(&"IsString");
    il2cpp_init_method_metadata(&"IsFloat");
    il2cpp_init_method_metadata(&"HasMethod");
    il2cpp_init_method_metadata(&"IsObject");
    il2cpp_init_method_metadata(&"ToInt");
    il2cpp_init_method_metadata(&"ToBool");
    il2cpp_init_method_metadata(&"ToFloat");
    DAT_05703d71 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"ToFloat",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ToInt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ToBool",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ToString",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsFloat",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsInt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsBool",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsString",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsObject",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsList",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsDict",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HasVariable",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DefineVariable",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RemoveVariable",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HasMethod",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetType",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin___ctor (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x3f36c30

void CustomLogic_CustomLogicConvertBuiltin___ctor
               (CustomLogic_CustomLogicConvertBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703d54 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703d54 = '\x01';
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


// CustomLogic.CustomLogicConvertBuiltin$$ToFloat
// il2cpp: float CustomLogic_CustomLogicConvertBuiltin__ToFloat (Il2CppObject* value, const MethodInfo* method);
// 0x3f36e30

float CustomLogic_CustomLogicConvertBuiltin__ToFloat(Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  char *pcVar2;
  System_Globalization_CultureInfo_o *provider;
  float *pfVar3;
  int *piVar4;
  float fVar5;
  
  if (DAT_05703d55 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    DAT_05703d55 = '\x01';
  }
  fVar5 = 0.0;
  if (value != (Il2CppObject *)0x0) {
    pIVar1 = value->klass;
    if (pIVar1 == DAT_057110b0) {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (value->klass == DAT_057110b0) {
        fVar5 = System_Single__Parse
                          ((System_String_o *)value,(System_IFormatProvider_o *)provider,
                           (MethodInfo *)0x0);
        return fVar5;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(value);
    }
    if (pIVar1 == DAT_05711098) {
      pfVar3 = (float *)il2cpp_glue_022c7330(value);
      return *pfVar3;
    }
    if (pIVar1 == DAT_05711068) {
      piVar4 = (int *)il2cpp_glue_022c7330(value);
      return (float)*piVar4;
    }
    if (pIVar1 == DAT_05711048) {
      pcVar2 = (char *)il2cpp_glue_022c7330(value);
      fVar5 = 0.0;
      if (*pcVar2 != '\0') {
        fVar5 = 1.0;
      }
    }
  }
  return fVar5;
}


// CustomLogic.CustomLogicConvertBuiltin$$ToInt
// il2cpp: int32_t CustomLogic_CustomLogicConvertBuiltin__ToInt (Il2CppObject* value, const MethodInfo* method);
// 0x3f36f20

int32_t CustomLogic_CustomLogicConvertBuiltin__ToInt(Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  int32_t iVar2;
  float *pfVar3;
  int32_t *piVar4;
  byte *pbVar5;
  
  if (value != (Il2CppObject *)0x0) {
    pIVar1 = value->klass;
    if (pIVar1 == DAT_057110b0) {
      iVar2 = System_Int32__Parse((System_String_o *)value,(MethodInfo *)0x0);
      return iVar2;
    }
    if (pIVar1 == DAT_05711098) {
      pfVar3 = (float *)il2cpp_glue_022c7330();
      return (int)*pfVar3;
    }
    if (pIVar1 == DAT_05711068) {
      piVar4 = (int32_t *)il2cpp_glue_022c7330();
      return *piVar4;
    }
    if (pIVar1 == DAT_05711048) {
      pbVar5 = (byte *)il2cpp_glue_022c7330();
      return (int32_t)*pbVar5;
    }
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$ToBool
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__ToBool (Il2CppObject* value, const MethodInfo* method);
// 0x3f36f80

bool_conflict CustomLogic_CustomLogicConvertBuiltin__ToBool(Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  bool_conflict bVar2;
  System_String_o *a;
  float *pfVar3;
  int *piVar4;
  char *pcVar5;
  
  if (DAT_05703d56 == '\0') {
    il2cpp_init_method_metadata(&"true");
    DAT_05703d56 = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    pIVar1 = value->klass;
    if (pIVar1 == DAT_057110b0) {
      a = System_String__ToLower((System_String_o *)value,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,"true",(MethodInfo *)0x0);
      return bVar2;
    }
    if (pIVar1 == DAT_05711098) {
      pfVar3 = (float *)il2cpp_glue_022c7330(value);
      return -(uint)(*pfVar3 != 0.0) & 1;
    }
    if (pIVar1 == DAT_05711068) {
      piVar4 = (int *)il2cpp_glue_022c7330(value);
      return (bool_conflict)CONCAT71((int7)((ulong)piVar4 >> 8),*piVar4 != 0);
    }
    if (pIVar1 == DAT_05711048) {
      pcVar5 = (char *)il2cpp_glue_022c7330(value);
      return (bool_conflict)CONCAT71((int7)((ulong)pcVar5 >> 8),*pcVar5 != '\0');
    }
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicConvertBuiltin__ToString (Il2CppObject* value, const MethodInfo* method);
// 0x3f37030

System_String_o *
CustomLogic_CustomLogicConvertBuiltin__ToString(Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (DAT_05703d57 == '\0') {
    il2cpp_init_method_metadata(&"null");
    il2cpp_init_method_metadata(&"false");
    il2cpp_init_method_metadata(&"true");
    DAT_05703d57 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (value == (Il2CppObject *)0x0) {
    puVar4 = &"null";
  }
  else {
    pIVar1 = value->klass;
    if (pIVar1 == DAT_057110b0) {
      return (System_String_o *)value;
    }
    if (pIVar1 != DAT_05711048) {
      vtable_dispatch = pIVar1->vtable[3].methodPtr;
      pSVar2 = (System_String_o *)
               (*vtable_dispatch)(value,pIVar1->vtable[3].method,in_RDX,vtable_dispatch)
      ;
      return pSVar2;
    }
    pcVar3 = (char *)il2cpp_glue_022c7330(value);
    if (*pcVar3 == '\0') {
      puVar4 = &"false";
    }
    else {
      puVar4 = &"true";
    }
  }
  return (System_String_o *)*puVar4;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsFloat
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsFloat (Il2CppObject* value, const MethodInfo* method);
// 0x3f370d0

bool_conflict CustomLogic_CustomLogicConvertBuiltin__IsFloat(Il2CppObject *value,MethodInfo *method)

{
  if (value != (Il2CppObject *)0x0) {
    return (bool_conflict)CONCAT71(0x57110,value->klass == DAT_05711098);
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsInt
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsInt (Il2CppObject* value, const MethodInfo* method);
// 0x3f370f0

bool_conflict CustomLogic_CustomLogicConvertBuiltin__IsInt(Il2CppObject *value,MethodInfo *method)

{
  if (value != (Il2CppObject *)0x0) {
    return (bool_conflict)CONCAT71(0x57110,value->klass == DAT_05711068);
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsBool
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsBool (Il2CppObject* value, const MethodInfo* method);
// 0x3f37110

bool_conflict CustomLogic_CustomLogicConvertBuiltin__IsBool(Il2CppObject *value,MethodInfo *method)

{
  if (value != (Il2CppObject *)0x0) {
    return (bool_conflict)CONCAT71(0x57110,value->klass == DAT_05711048);
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsString
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsString (Il2CppObject* value, const MethodInfo* method);
// 0x3f37130

bool_conflict
CustomLogic_CustomLogicConvertBuiltin__IsString(Il2CppObject *value,MethodInfo *method)

{
  if (value != (Il2CppObject *)0x0) {
    return (bool_conflict)CONCAT71(0x57110,value->klass == DAT_057110b0);
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsObject
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsObject (Il2CppObject* value, const MethodInfo* method);
// 0x3f37150

bool_conflict
CustomLogic_CustomLogicConvertBuiltin__IsObject(Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  
  if (DAT_05703d58 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassInstance);
    DAT_05703d58 = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if (bVar1 <= (value->klass->_2).naturalAligment) {
      return (bool_conflict)
             CONCAT71((int7)((ulong)TypeInfo_CustomLogicClassInstance >> 8),
                      (value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance);
    }
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsList
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsList (Il2CppObject* value, const MethodInfo* method);
// 0x3f371b0

bool_conflict CustomLogic_CustomLogicConvertBuiltin__IsList(Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  
  if (DAT_05703d59 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    DAT_05703d59 = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
    if (bVar1 <= (value->klass->_2).naturalAligment) {
      return (bool_conflict)
             CONCAT71((int7)((ulong)TypeInfo_CustomLogicListBuiltin >> 8),
                      (value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicListBuiltin);
    }
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsDict
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsDict (Il2CppObject* value, const MethodInfo* method);
// 0x3f37210

bool_conflict CustomLogic_CustomLogicConvertBuiltin__IsDict(Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  
  if (DAT_05703d5a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicDictBuiltin);
    DAT_05703d5a = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
    if (bVar1 <= (value->klass->_2).naturalAligment) {
      return (bool_conflict)
             CONCAT71((int7)((ulong)TypeInfo_CustomLogicDictBuiltin >> 8),
                      (value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicDictBuiltin);
    }
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$HasVariable
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__HasVariable (CustomLogic_CustomLogicClassInstance_o* cInstance, System_String_o* variableName, const MethodInfo* method);
// 0x3f37270

bool_conflict
CustomLogic_CustomLogicConvertBuiltin__HasVariable
          (CustomLogic_CustomLogicClassInstance_o *cInstance,System_String_o *variableName,
          MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (cInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    bVar1 = CustomLogic_CustomLogicClassInstance__HasVariable(cInstance,variableName,method);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin$$DefineVariable
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin__DefineVariable (CustomLogic_CustomLogicClassInstance_o* cInstance, System_String_o* variableName, Il2CppObject* value, const MethodInfo* method);
// 0x3f37480

void CustomLogic_CustomLogicConvertBuiltin__DefineVariable
               (CustomLogic_CustomLogicClassInstance_o *cInstance,System_String_o *variableName,
               Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool_conflict bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)value;
  if (DAT_05703d5b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_05703d5b = '\x01';
    method_00 = extraout_RDX;
  }
  if (cInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    bVar1 = CustomLogic_CustomLogicClassInstance__HasVariable(cInstance,variableName,method_00);
    if ((char)bVar1 != '\0') {
      return;
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             (cInstance->fields).Variables;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (__this,(Il2CppObject *)variableName,value,MethodInfo_Void_set_Item);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin$$RemoveVariable
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin__RemoveVariable (CustomLogic_CustomLogicClassInstance_o* cInstance, System_String_o* variableName, const MethodInfo* method);
// 0x3f374f0

void CustomLogic_CustomLogicConvertBuiltin__RemoveVariable
               (CustomLogic_CustomLogicClassInstance_o *cInstance,System_String_o *variableName,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool_conflict bVar1;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703d5c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_05703d5c = '\x01';
    method = extraout_RDX;
  }
  if (cInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    bVar1 = CustomLogic_CustomLogicClassInstance__HasVariable(cInstance,variableName,method);
    if ((char)bVar1 == '\0') {
      return;
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             (cInstance->fields).Variables;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Remove
                (__this,(Il2CppObject *)variableName,MethodInfo_Boolean_Remove);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin$$HasMethod
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__HasMethod (CustomLogic_CustomLogicClassInstance_o* cInstance, System_String_o* methodName, const MethodInfo* method);
// 0x3f37560

bool_conflict
CustomLogic_CustomLogicConvertBuiltin__HasMethod
          (CustomLogic_CustomLogicClassInstance_o *cInstance,System_String_o *methodName,
          MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this;
  bool_conflict bVar2;
  
  if (DAT_05703d5d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703d5d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                      (__this,cInstance,methodName,(MethodInfo *)0x0);
    return bVar2;
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$GetType
// il2cpp: System_String_o* CustomLogic_CustomLogicConvertBuiltin__GetType (CustomLogic_CustomLogicClassInstance_o* cInstance, const MethodInfo* method);
// 0x3f375f0

System_String_o *
CustomLogic_CustomLogicConvertBuiltin__GetType
          (CustomLogic_CustomLogicClassInstance_o *cInstance,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar1;
  undefined8 in_RDX;
  
  if (cInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    vtable_dispatch = (cInstance->klass->vtable)._4_unknown.methodPtr;
    pSVar1 = (System_String_o *)
             (*vtable_dispatch)
                       (cInstance,(cInstance->klass->vtable)._4_unknown.method,in_RDX,
                        vtable_dispatch);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicConvertBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicConvertBuiltin__get_ClassName (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x3f37610

System_String_o *
CustomLogic_CustomLogicConvertBuiltin__get_ClassName
          (CustomLogic_CustomLogicConvertBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703d5e == '\0') {
    il2cpp_init_method_metadata(&"Convert");
    DAT_05703d5e = '\x01';
  }
  return "Convert";
}


// CustomLogic.CustomLogicConvertBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__get_IsAbstract (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x3f37640

bool_conflict
CustomLogic_CustomLogicConvertBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicConvertBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicConvertBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__get_IsStatic (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x3f37650

bool_conflict
CustomLogic_CustomLogicConvertBuiltin__get_IsStatic
          (CustomLogic_CustomLogicConvertBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicConvertBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x3f37660

bool_conflict
CustomLogic_CustomLogicConvertBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicConvertBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


