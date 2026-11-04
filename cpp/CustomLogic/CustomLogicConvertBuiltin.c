// Type: CustomLogic.CustomLogicConvertBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicConvertBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicConvertBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicConvertBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicConvertBuiltin_o* CustomLogic_CustomLogicConvertBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x1820aafa0

CustomLogic_CustomLogicConvertBuiltin_o *
CustomLogic_CustomLogicConvertBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843467dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin);
    Il2CppMethodInitialized_1843467dc = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin);
      if (Il2CppMethodInitialized_1843467d1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843467d1 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicConvertBuiltin_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicConvertBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x1820b5220

void CustomLogic_CustomLogicConvertBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843467ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843467ef = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicConvertBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToFloat>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToFloat_b__2_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b3f10

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToFloat_b__2_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    local_res18[0] = CustomLogic_CustomLogicConvertBuiltin__ToFloat(__a->m_Items[0],(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
    return pIVar1;
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToInt>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToInt_b__3_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b3f60

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToInt_b__3_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *obj;
  System_String_o *pSVar1;
  char *pcVar2;
  uint *puVar3;
  float *pfVar4;
  Il2CppObject *pIVar5;
  uint local_res18 [4];
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = (System_String_o *)__a->m_Items[0];
  if (obj != (System_String_o *)0x0) {
    pSVar1 = (System_String_o *)0x0;
    if ((Il2CppClass *)obj->klass == g_data_184354e50) {
      pSVar1 = obj;
    }
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = (System_String_o *)0x0;
      if ((Il2CppClass *)obj->klass == g_data_184354e50) {
        pSVar1 = obj;
      }
      if (pSVar1 == (System_String_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj);
      }
      local_res18[0] = System_Int32__Parse(pSVar1,(MethodInfo *)0x0);
      goto label_1820b4053;
    }
    pSVar1 = (System_String_o *)0x0;
    if ((Il2CppClass *)obj->klass == g_data_184354e38) {
      pSVar1 = obj;
    }
    if (pSVar1 != (System_String_o *)0x0) {
      if ((((Il2CppClass *)obj->klass)->_1).element_class != (g_data_184354e38->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pfVar4 = il2cpp_object_unbox((Il2CppObject *)obj);
      local_res18[0] = (uint)*pfVar4;
      goto label_1820b4053;
    }
    pSVar1 = (System_String_o *)0x0;
    if ((Il2CppClass *)obj->klass == g_data_184354e08) {
      pSVar1 = obj;
    }
    if (pSVar1 != (System_String_o *)0x0) {
      if ((((Il2CppClass *)obj->klass)->_1).element_class != (g_data_184354e08->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      puVar3 = il2cpp_object_unbox((Il2CppObject *)obj);
      local_res18[0] = *puVar3;
      goto label_1820b4053;
    }
    pSVar1 = (System_String_o *)0x0;
    if ((Il2CppClass *)obj->klass == g_data_184354de8) {
      pSVar1 = obj;
    }
    if (pSVar1 != (System_String_o *)0x0) {
      if ((((Il2CppClass *)obj->klass)->_1).element_class != (g_data_184354de8->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354de8);
      }
      pcVar2 = il2cpp_object_unbox((Il2CppObject *)obj);
      local_res18[0] = (uint)(*pcVar2 != '\0');
      goto label_1820b4053;
    }
  }
  local_res18[0] = 0;
label_1820b4053:
  pIVar5 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar5;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToBool>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToBool_b__4_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b3d80

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToBool_b__4_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined1 *puVar2;
  int *piVar3;
  float *pfVar4;
  System_String_o *pSVar5;
  Il2CppObject *pIVar6;
  undefined1 local_res18 [16];
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pSVar5 = (System_String_o *)__a->m_Items[0];
  if (Il2CppMethodInitialized_1843467d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_1843467d3 = '\x01';
  }
  if (pSVar5 != (System_String_o *)0x0) {
    pSVar1 = (System_String_o *)0x0;
    if ((Il2CppClass *)pSVar5->klass == g_data_184354e50) {
      pSVar1 = pSVar5;
    }
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = (System_String_o *)0x0;
      if ((Il2CppClass *)pSVar5->klass == g_data_184354e50) {
        pSVar1 = pSVar5;
      }
      if (pSVar1 == (System_String_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar5);
      }
      pSVar1 = (System_String_o *)0x0;
      if ((Il2CppClass *)pSVar5->klass == g_data_184354e50) {
        pSVar1 = pSVar5;
      }
      pSVar5 = System_String__ToLower(pSVar1,(MethodInfo *)0x0);
      local_res18[0] = System_String__op_Equality(pSVar5,"true",(MethodInfo *)0x0);
      goto label_1820b3ebd;
    }
    pSVar1 = (System_String_o *)0x0;
    if ((Il2CppClass *)pSVar5->klass == g_data_184354e38) {
      pSVar1 = pSVar5;
    }
    if (pSVar1 == (System_String_o *)0x0) {
      pSVar1 = (System_String_o *)0x0;
      if ((Il2CppClass *)pSVar5->klass == g_data_184354e08) {
        pSVar1 = pSVar5;
      }
      if (pSVar1 != (System_String_o *)0x0) {
        if ((((Il2CppClass *)pSVar5->klass)->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar3 = il2cpp_object_unbox((Il2CppObject *)pSVar5);
        local_res18[0] = *piVar3 != 0;
        goto label_1820b3ebd;
      }
      pSVar1 = (System_String_o *)0x0;
      if ((Il2CppClass *)pSVar5->klass == g_data_184354de8) {
        pSVar1 = pSVar5;
      }
      if (pSVar1 != (System_String_o *)0x0) {
        if ((((Il2CppClass *)pSVar5->klass)->_1).element_class != (g_data_184354de8->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        puVar2 = il2cpp_object_unbox((Il2CppObject *)pSVar5);
        local_res18[0] = *puVar2;
        goto label_1820b3ebd;
      }
    }
    else {
      if ((((Il2CppClass *)pSVar5->klass)->_1).element_class != (g_data_184354e38->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pfVar4 = il2cpp_object_unbox((Il2CppObject *)pSVar5);
      if (*pfVar4 != 0.0) {
        local_res18[0] = 1;
        goto label_1820b3ebd;
      }
    }
  }
  local_res18[0] = 0;
label_1820b3ebd:
  pIVar6 = il2cpp_value_box(g_data_184354de8,local_res18);
  return pIVar6;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToString>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToString_b__5_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b4130

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToString_b__5_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pSVar1 = CustomLogic_CustomLogicConvertBuiltin__ToString(__a->m_Items[0],(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsFloat>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsFloat_b__6_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820af6d0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsFloat_b__6_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res18 [16];
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (pIVar1 == (Il2CppObject *)0x0) {
      local_res18[0] = false;
    }
    else {
      pIVar2 = (Il2CppObject *)0x0;
      if (pIVar1->klass == g_data_184354e38) {
        pIVar2 = pIVar1;
      }
      local_res18[0] = pIVar2 != (Il2CppObject *)0x0;
    }
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
    return pIVar1;
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsInt>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsInt_b__7_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820af730

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsInt_b__7_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res18 [16];
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (pIVar1 == (Il2CppObject *)0x0) {
      local_res18[0] = false;
    }
    else {
      pIVar2 = (Il2CppObject *)0x0;
      if (pIVar1->klass == g_data_184354e08) {
        pIVar2 = pIVar1;
      }
      local_res18[0] = pIVar2 != (Il2CppObject *)0x0;
    }
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
    return pIVar1;
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsBool>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsBool_b__8_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820af5a0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsBool_b__8_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res18 [16];
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (pIVar1 == (Il2CppObject *)0x0) {
      local_res18[0] = 0;
      pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
      return pIVar1;
    }
    pIVar2 = (Il2CppObject *)0x0;
    if (pIVar1->klass == g_data_184354de8) {
      pIVar2 = pIVar1;
    }
    local_res18[0] = pIVar2 != (Il2CppObject *)0x0;
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
    return pIVar1;
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsString>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsString_b__9_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820af910

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsString_b__9_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res18 [16];
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (pIVar1 == (Il2CppObject *)0x0) {
      local_res18[0] = false;
    }
    else {
      pIVar2 = (Il2CppObject *)0x0;
      if (pIVar1->klass == g_data_184354e50) {
        pIVar2 = pIVar1;
      }
      local_res18[0] = pIVar2 != (Il2CppObject *)0x0;
    }
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
    return pIVar1;
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsObject>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsObject_b__10_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820af850

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsObject_b__10_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  undefined1 local_res18 [16];
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar4 = __a->m_Items[0];
    if (Il2CppMethodInitialized_1843467d5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
      Il2CppMethodInitialized_1843467d5 = '\x01';
    }
    if (pIVar4 == (Il2CppObject *)0x0) {
      local_res18[0] = false;
    }
    else {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
      if (((pIVar4->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      pIVar3 = (Il2CppObject *)0x0;
      if (bVar2) {
        pIVar3 = pIVar4;
      }
      local_res18[0] = pIVar3 != (Il2CppObject *)0x0;
    }
    pIVar4 = il2cpp_value_box(g_data_184354de8,local_res18);
    return pIVar4;
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsList>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsList_b__11_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820af790

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsList_b__11_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  undefined1 local_res18 [16];
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar4 = __a->m_Items[0];
    if (Il2CppMethodInitialized_1843467d6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
      Il2CppMethodInitialized_1843467d6 = '\x01';
    }
    if (pIVar4 == (Il2CppObject *)0x0) {
      local_res18[0] = false;
    }
    else {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
      if (((pIVar4->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      pIVar3 = (Il2CppObject *)0x0;
      if (bVar2) {
        pIVar3 = pIVar4;
      }
      local_res18[0] = pIVar3 != (Il2CppObject *)0x0;
    }
    pIVar4 = il2cpp_value_box(g_data_184354de8,local_res18);
    return pIVar4;
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsDict>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsDict_b__12_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820af610

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsDict_b__12_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  undefined1 local_res18 [16];
  
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar4 = __a->m_Items[0];
    if (Il2CppMethodInitialized_1843467d7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin);
      Il2CppMethodInitialized_1843467d7 = '\x01';
    }
    if (pIVar4 == (Il2CppObject *)0x0) {
      local_res18[0] = false;
    }
    else {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin->_2).typeHierarchyDepth;
      if (((pIVar4->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      pIVar3 = (Il2CppObject *)0x0;
      if (bVar2) {
        pIVar3 = pIVar4;
      }
      local_res18[0] = pIVar3 != (Il2CppObject *)0x0;
    }
    pIVar4 = il2cpp_value_box(g_data_184354de8,local_res18);
    return pIVar4;
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasVariable>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__HasVariable_b__13_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820af0e0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__HasVariable_b__13_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicClassInstance_o *__this_00;
  System_String_o *name;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843467f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843467f0 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820af1a1:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __this_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance
                          );
    if (1 < (uint)__a->max_length) {
      name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (__a->m_Items[1],
                        (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (__this_00 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
        local_res18[0] = CustomLogic_CustomLogicClassInstance__HasVariable(__this_00,name,(MethodInfo *)0x0);
        pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar1;
      }
      goto label_1820af1a1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__DefineVariable>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__DefineVariable_b__14_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ae3c0

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
  
  if (Il2CppMethodInitialized_1843467f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843467f1 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_1820ae4cc;
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __this_01 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance
                          );
    if (1 < (uint)__a->max_length) {
      name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (__a->m_Items[1],
                        (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        pIVar1 = __a->m_Items[2];
        if (Il2CppMethodInitialized_1843467d8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
          Il2CppMethodInitialized_1843467d8 = '\x01';
        }
        if (__this_01 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(__this_01,name,(MethodInfo *)0x0);
          if (!bVar2) {
            __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this_01->fields).Variables;
            if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto label_1820ae4cc;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (__this_00,(Il2CppObject *)name,pIVar1,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
          }
          return (Il2CppObject *)0x0;
        }
label_1820ae4cc:
        ThrowNullReferenceException();
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveVariable>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__RemoveVariable_b__15_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b2600

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
  
  if (Il2CppMethodInitialized_1843467f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843467f2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_1820b26f1;
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __this_01 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance)
    ;
    if (1 < (uint)__a->max_length) {
      name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (__a->m_Items[1],
                        (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (Il2CppMethodInitialized_1843467d9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Remove);
        Il2CppMethodInitialized_1843467d9 = '\x01';
      }
      if (__this_01 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
        bVar1 = CustomLogic_CustomLogicClassInstance__HasVariable(__this_01,name,(MethodInfo *)0x0);
        if (bVar1) {
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_01->fields).Variables
          ;
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1820b26f1;
          System_Collections_Generic_Dictionary_object__object___Remove
                    (__this_00,(Il2CppObject *)name,
                     (MethodInfo_1470BF0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_object_Remove);
        }
        return (Il2CppObject *)0x0;
      }
label_1820b26f1:
      ThrowNullReferenceException();
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasMethod>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__HasMethod_b__16_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820aefb0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__HasMethod_b__16_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  System_String_o *methodName;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843467f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843467f3 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    classInstance =
         CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                   (pIVar1,(MethodInfo_66EB70 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance);
    if (1 < (uint)__a->max_length) {
      methodName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[1],
                              (MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (Il2CppMethodInitialized_1843467da == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_1843467da = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        local_res18[0] = false;
      }
      else {
        local_res18[0] =
             CustomLogic_CustomLogicEvaluator__HasMethod(__this_00,classInstance,methodName,(MethodInfo *)0x0)
        ;
      }
      pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
      return pIVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetType>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__GetType_b__17_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820aef20

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__GetType_b__17_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicClassInstance_o *pCVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_1843467f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843467f4 = '\x01';
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
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicClassInstance)
    ;
    if (pCVar1 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
      pIVar2 = (Il2CppObject *)
               (*(pCVar1->klass->vtable)._6_unknown.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._6_unknown.method);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicConvertBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x18208f6b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicConvertBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *lastManagedFrame;
  System_Func_CustomLogicConvertBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_1843467dd == '\0') {
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
    Il2CppMethodInitialized_1843467dd = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x54aa9712) {
    if (uVar3 < 0x36ec8533) {
      if (uVar3 < 0x16a60c4e) {
        if (uVar3 == 0xb7c33aa) {
          bVar2 = System_String__op_Equality(name,"IsObject",(MethodInfo *)0x0);
          if (!bVar2) goto label_182090a39;
          if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843467e6 == '\0') {
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843467e6 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__10_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090a0a;
          if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsObject_b__10_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__10_0 =
               (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__10_0
          ;
        }
        else {
          if (uVar3 != 0x16a60c4d) goto label_182090a39;
          bVar2 = System_String__op_Equality(name,"IsBool",(MethodInfo *)0x0);
          if (!bVar2) goto label_182090a39;
          if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843467e4 == '\0') {
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843467e4 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__8_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090a0a;
          if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsBool_b__8_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__8_0 =
               (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__8_0;
        }
      }
      else if (uVar3 == 0x21b10f16) {
        bVar2 = System_String__op_Equality(name,"DefineVariable",(MethodInfo *)0x0);
        if (!bVar2) goto label_182090a39;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843467ea == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843467ea = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__14_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090a0a;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9
        ;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__DefineVariable_b__14_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__14_0 =
             (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__14_0;
      }
      else {
        if (uVar3 != 0x36ec8532) goto label_182090a39;
        bVar2 = System_String__op_Equality(name,"HasMethod",(MethodInfo *)0x0);
        if (!bVar2) goto label_182090a39;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843467ec == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843467ec = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__16_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090a0a;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9
        ;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__HasMethod_b__16_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__16_0 =
             (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__16_0;
      }
    }
    else if (uVar3 < 0x43eb6410) {
      if (uVar3 == 0x42797ce9) {
        bVar2 = System_String__op_Equality(name,"IsDict",(MethodInfo *)0x0);
        if (!bVar2) goto label_182090a39;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843467e8 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843467e8 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__12_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090a0a;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9
        ;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsDict_b__12_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__12_0 =
             (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__12_0;
      }
      else {
        if (uVar3 != 0x43eb640f) goto label_182090a39;
        bVar2 = System_String__op_Equality(name,"GetType",(MethodInfo *)0x0);
        if (!bVar2) goto label_182090a39;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843467ed == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843467ed = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__17_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090a0a;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9
        ;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__GetType_b__17_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__17_0 =
             (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__17_0;
      }
    }
    else if (uVar3 == 0x45844edd) {
      bVar2 = System_String__op_Equality(name,"RemoveVariable",(MethodInfo *)0x0);
      if (!bVar2) goto label_182090a39;
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843467eb == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)
        ;
        Il2CppMethodInitialized_1843467eb = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__15_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090a0a;
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__RemoveVariable_b__15_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__15_0 =
           (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__15_0;
    }
    else {
      if (uVar3 != 0x54aa9711) goto label_182090a39;
      bVar2 = System_String__op_Equality(name,"IsList",(MethodInfo *)0x0);
      if (!bVar2) goto label_182090a39;
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843467e7 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)
        ;
        Il2CppMethodInitialized_1843467e7 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__11_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090a0a;
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsList_b__11_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__11_0 =
           (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__11_0;
    }
  }
  else if (uVar3 < 0x7bdd082f) {
    if (uVar3 < 0x7040ed26) {
      if (uVar3 == 0x59fa775c) {
        bVar2 = System_String__op_Equality(name,"ToBool",(MethodInfo *)0x0);
        if (!bVar2) goto label_182090a39;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843467e0 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843467e0 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__4_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090a0a;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9
        ;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToBool_b__4_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__4_0 =
             (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__4_0;
      }
      else {
        if (uVar3 != 0x7040ed25) goto label_182090a39;
        bVar2 = System_String__op_Equality(name,"ToString",(MethodInfo *)0x0);
        if (!bVar2) goto label_182090a39;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843467e1 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843467e1 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__5_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090a0a;
        if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9
        ;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToString_b__5_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__5_0 =
             (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__5_0;
      }
    }
    else if (uVar3 == 0x72a1342f) {
      bVar2 = System_String__op_Equality(name,"HasVariable",(MethodInfo *)0x0);
      if (!bVar2) goto label_182090a39;
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843467e9 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)
        ;
        Il2CppMethodInitialized_1843467e9 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__13_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090a0a;
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__HasVariable_b__13_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__13_0 =
           (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__13_0;
    }
    else {
      if (uVar3 != 0x7bdd082e) goto label_182090a39;
      bVar2 = System_String__op_Equality(name,"IsInt",(MethodInfo *)0x0);
      if (!bVar2) goto label_182090a39;
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843467e3 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)
        ;
        Il2CppMethodInitialized_1843467e3 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__7_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090a0a;
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsInt_b__7_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__7_0 =
           (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__7_0;
    }
  }
  else if (uVar3 < 0xc34f3929) {
    if (uVar3 == 0xba01fe55) {
      bVar2 = System_String__op_Equality(name,"IsFloat",(MethodInfo *)0x0);
      if (!bVar2) goto label_182090a39;
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843467e2 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)
        ;
        Il2CppMethodInitialized_1843467e2 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__6_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090a0a;
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsFloat_b__6_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__6_0 =
           (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__6_0;
    }
    else {
      if (uVar3 != 0xc34f3928) goto label_182090a39;
      bVar2 = System_String__op_Equality(name,"IsString",(MethodInfo *)0x0);
      if (!bVar2) goto label_182090a39;
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843467e5 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c)
        ;
        Il2CppMethodInitialized_1843467e5 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__9_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090a0a;
      if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsString_b__9_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__9_0 =
           (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__9_0;
    }
  }
  else if (uVar3 == 0xc5a73b76) {
    bVar2 = System_String__op_Equality(name,"ToFloat",(MethodInfo *)0x0);
    if (!bVar2) goto label_182090a39;
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843467de == '\0') {
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
      Il2CppMethodInitialized_1843467de = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__2_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090a0a;
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToFloat_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__2_0;
  }
  else {
    if (uVar3 != 0xdfa2d4fd) {
label_182090a39:
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicConvertBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_01,pSVar4,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
    }
    bVar2 = System_String__op_Equality(name,"ToInt",(MethodInfo *)0x0);
    if (!bVar2) goto label_182090a39;
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843467df == '\0') {
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
      Il2CppMethodInitialized_1843467df = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__3_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090a0a;
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToInt_b__3_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__3_0;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_182090a0a:
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToFloat (const MethodInfo* method);
// 0x182099490

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToFloat(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467de == '\0') {
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
    Il2CppMethodInitialized_1843467de = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__2_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToFloat_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__2_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToInt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToInt (const MethodInfo* method);
// 0x1820995b0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToInt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467df == '\0') {
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
    Il2CppMethodInitialized_1843467df = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__3_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToInt_b__3_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__3_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToBool (const MethodInfo* method);
// 0x182099370

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToBool(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467e0 == '\0') {
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
    Il2CppMethodInitialized_1843467e0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToBool_b__4_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__4_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToString (const MethodInfo* method);
// 0x182099800

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToString(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467e1 == '\0') {
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
    Il2CppMethodInitialized_1843467e1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToString_b__5_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__5_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsFloat (const MethodInfo* method);
// 0x1820964a0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsFloat(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467e2 == '\0') {
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
    Il2CppMethodInitialized_1843467e2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsFloat_b__6_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsInt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsInt (const MethodInfo* method);
// 0x1820965c0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsInt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467e3 == '\0') {
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
    Il2CppMethodInitialized_1843467e3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsInt_b__7_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsBool (const MethodInfo* method);
// 0x182096260

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsBool(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467e4 == '\0') {
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
    Il2CppMethodInitialized_1843467e4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsBool_b__8_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsString (const MethodInfo* method);
// 0x182096920

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsString(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467e5 == '\0') {
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
    Il2CppMethodInitialized_1843467e5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsString_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsObject (const MethodInfo* method);
// 0x182096800

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsObject(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467e6 == '\0') {
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
    Il2CppMethodInitialized_1843467e6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsObject_b__10_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__10_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsList
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsList (const MethodInfo* method);
// 0x1820966e0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsList(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467e7 == '\0') {
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
    Il2CppMethodInitialized_1843467e7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsList_b__11_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__11_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsDict
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsDict (const MethodInfo* method);
// 0x182096380

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsDict(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467e8 == '\0') {
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
    Il2CppMethodInitialized_1843467e8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__12_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsDict_b__12_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__12_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__12_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__HasVariable
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasVariable (const MethodInfo* method);
// 0x182095dc0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasVariable(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467e9 == '\0') {
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
    Il2CppMethodInitialized_1843467e9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__13_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__HasVariable_b__13_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__13_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__DefineVariable
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__DefineVariable (const MethodInfo* method);
// 0x182095360

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__DefineVariable(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467ea == '\0') {
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
    Il2CppMethodInitialized_1843467ea = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__14_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__DefineVariable_b__14_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__14_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__14_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__RemoveVariable
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__RemoveVariable (const MethodInfo* method);
// 0x182098380

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__RemoveVariable(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467eb == '\0') {
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
    Il2CppMethodInitialized_1843467eb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__15_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__RemoveVariable_b__15_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__15_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__15_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__HasMethod
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasMethod (const MethodInfo* method);
// 0x182095ca0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasMethod(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467ec == '\0') {
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
    Il2CppMethodInitialized_1843467ec = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__16_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__HasMethod_b__16_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__16_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__16_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__GetType
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__GetType (const MethodInfo* method);
// 0x182095b70

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__GetType(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467ed == '\0') {
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
    Il2CppMethodInitialized_1843467ed = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__17_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicConvertBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__GetType_b__17_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__17_0 =
         (System_Func_CustomLogicConvertBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c->static_fields->__9__17_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x18209aad0

void CustomLogic_CustomLogicConvertBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843467ee == '\0') {
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
    Il2CppMethodInitialized_1843467ee = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToFloat",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToInt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToBool",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToString",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsFloat",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsInt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsBool",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsString",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsObject",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsList",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsDict",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasVariable",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DefineVariable",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RemoveVariable",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasMethod",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetType",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicConvertBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin___ctor (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x18209fee0

void CustomLogic_CustomLogicConvertBuiltin___ctor
               (CustomLogic_CustomLogicConvertBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843467d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843467d1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicConvertBuiltin$$ToFloat
// il2cpp: float CustomLogic_CustomLogicConvertBuiltin__ToFloat (Il2CppObject* value, const MethodInfo* method);
// 0x18209fb40

float CustomLogic_CustomLogicConvertBuiltin__ToFloat(Il2CppObject *value,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  char *pcVar2;
  int *piVar3;
  double *pdVar4;
  float *pfVar5;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *s;
  float fVar6;
  
  if (Il2CppMethodInitialized_1843467d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_1843467d2 = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    pIVar1 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e50) {
      pIVar1 = value;
    }
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      s = (System_String_o *)0x0;
      if (value->klass == g_data_184354e50) {
        s = (System_String_o *)value;
      }
      if (s != (System_String_o *)0x0) {
        fVar6 = System_Single__Parse_1b49890(s,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
        return fVar6;
      }
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    pIVar1 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e38) {
      pIVar1 = value;
    }
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((value->klass->_1).element_class == (g_data_184354e38->_1).element_class) {
        pfVar5 = il2cpp_object_unbox(value);
        return *pfVar5;
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pIVar1 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e40) {
      pIVar1 = value;
    }
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((value->klass->_1).element_class == (g_data_184354e40->_1).element_class) {
        pdVar4 = il2cpp_object_unbox(value);
        return (float)*pdVar4;
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pIVar1 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e08) {
      pIVar1 = value;
    }
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((value->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
        piVar3 = il2cpp_object_unbox(value);
        return (float)*piVar3;
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pIVar1 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354de8) {
      pIVar1 = value;
    }
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((value->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pcVar2 = il2cpp_object_unbox(value);
      if (*pcVar2 != '\0') {
        return 1.0;
      }
    }
  }
  return 0.0;
}


// CustomLogic.CustomLogicConvertBuiltin$$ToInt
// il2cpp: int32_t CustomLogic_CustomLogicConvertBuiltin__ToInt (Il2CppObject* value, const MethodInfo* method);
// 0x18209fcf0

int32_t CustomLogic_CustomLogicConvertBuiltin__ToInt(Il2CppObject *value,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *pIVar2;
  char *pcVar3;
  int32_t *piVar4;
  float *pfVar5;
  System_String_o *s;
  
  if (value != (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e50) {
      pIVar2 = value;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      s = (System_String_o *)0x0;
      if (value->klass == g_data_184354e50) {
        s = (System_String_o *)value;
      }
      if (s != (System_String_o *)0x0) {
        iVar1 = System_Int32__Parse(s,(MethodInfo *)0x0);
        return iVar1;
      }
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    pIVar2 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e38) {
      pIVar2 = value;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((value->klass->_1).element_class == (g_data_184354e38->_1).element_class) {
        pfVar5 = il2cpp_object_unbox(value);
        return (int)*pfVar5;
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pIVar2 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e08) {
      pIVar2 = value;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((value->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
        piVar4 = il2cpp_object_unbox(value);
        return *piVar4;
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pIVar2 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354de8) {
      pIVar2 = value;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((value->klass->_1).element_class == (g_data_184354de8->_1).element_class) {
        pcVar3 = il2cpp_object_unbox(value);
        return (int32_t)(*pcVar3 != '\0');
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$ToBool
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__ToBool (Il2CppObject* value, const MethodInfo* method);
// 0x18209f9f0

bool CustomLogic_CustomLogicConvertBuiltin__ToBool(Il2CppObject *value,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  undefined1 *puVar3;
  int *piVar4;
  float *pfVar5;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_1843467d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_1843467d3 = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e50) {
      pIVar2 = value;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar2 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e50) {
        pIVar2 = value;
      }
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(value);
      }
      pSVar6 = (System_String_o *)0x0;
      if (value->klass == g_data_184354e50) {
        pSVar6 = (System_String_o *)value;
      }
      pSVar6 = System_String__ToLower(pSVar6,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar6,"true",(MethodInfo *)0x0);
      return bVar1;
    }
    pIVar2 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e38) {
      pIVar2 = value;
    }
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar2 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e08) {
        pIVar2 = value;
      }
      if (pIVar2 != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar4 = il2cpp_object_unbox(value);
        return *piVar4 != 0;
      }
      pIVar2 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354de8) {
        pIVar2 = value;
      }
      if (pIVar2 != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        puVar3 = il2cpp_object_unbox(value);
        return (bool)*puVar3;
      }
    }
    else {
      if ((value->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pfVar5 = il2cpp_object_unbox(value);
      if (*pfVar5 != 0.0) {
        return true;
      }
    }
  }
  return false;
}


// CustomLogic.CustomLogicConvertBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicConvertBuiltin__ToString (Il2CppObject* value, const MethodInfo* method);
// 0x18209fdf0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18209feb5: jmp 0x18209febe
// asm:   0x18209feb7: mov rax, qword ptr [rip + 0x200578a]  ; "null"

System_String_o * CustomLogic_CustomLogicConvertBuiltin__ToString(Il2CppObject *value,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  char *pcVar3;
  
  if (Il2CppMethodInitialized_1843467d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_1843467d4 = '\x01';
  }
  pSVar2 = "null";
  if (value != (Il2CppObject *)0x0) {
    pIVar1 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e50) {
      pIVar1 = value;
    }
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354de8) {
        pIVar1 = value;
      }
      if (pIVar1 != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pcVar3 = il2cpp_object_unbox(value);
        pSVar2 = "false";
        if (*pcVar3 != '\0') {
          pSVar2 = "true";
        }
        return pSVar2;
      }
      pSVar2 = (System_String_o *)(*value->klass->vtable[3].methodPtr)(value,value->klass->vtable[3].method);
      return pSVar2;
    }
    pSVar2 = (System_String_o *)0x0;
    if (value->klass == g_data_184354e50) {
      pSVar2 = (System_String_o *)value;
    }
    if (pSVar2 == (System_String_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
  }
  return pSVar2;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsFloat
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsFloat (Il2CppObject* value, const MethodInfo* method);
// 0x18209f7f0

bool CustomLogic_CustomLogicConvertBuiltin__IsFloat(Il2CppObject *value,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (value == (Il2CppObject *)0x0) {
    return false;
  }
  pIVar1 = (Il2CppObject *)0x0;
  if (value->klass == g_data_184354e38) {
    pIVar1 = value;
  }
  return pIVar1 != (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsInt
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsInt (Il2CppObject* value, const MethodInfo* method);
// 0x18209f820

bool CustomLogic_CustomLogicConvertBuiltin__IsInt(Il2CppObject *value,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (value == (Il2CppObject *)0x0) {
    return false;
  }
  pIVar1 = (Il2CppObject *)0x0;
  if (value->klass == g_data_184354e08) {
    pIVar1 = value;
  }
  return pIVar1 != (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsBool
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsBool (Il2CppObject* value, const MethodInfo* method);
// 0x18209f740

bool CustomLogic_CustomLogicConvertBuiltin__IsBool(Il2CppObject *value,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (value == (Il2CppObject *)0x0) {
    return false;
  }
  pIVar1 = (Il2CppObject *)0x0;
  if (value->klass == g_data_184354de8) {
    pIVar1 = value;
  }
  return pIVar1 != (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsString
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsString (Il2CppObject* value, const MethodInfo* method);
// 0x18209f950

bool CustomLogic_CustomLogicConvertBuiltin__IsString(Il2CppObject *value,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (value == (Il2CppObject *)0x0) {
    return false;
  }
  pIVar1 = (Il2CppObject *)0x0;
  if (value->klass == g_data_184354e50) {
    pIVar1 = value;
  }
  return pIVar1 != (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsObject
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsObject (Il2CppObject* value, const MethodInfo* method);
// 0x18209f8d0

bool CustomLogic_CustomLogicConvertBuiltin__IsObject(Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_1843467d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    Il2CppMethodInitialized_1843467d5 = '\x01';
  }
  if (value == (Il2CppObject *)0x0) {
    return false;
  }
  bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
  if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
     ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  pIVar3 = (Il2CppObject *)0x0;
  if (bVar2) {
    pIVar3 = value;
  }
  return pIVar3 != (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsList
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsList (Il2CppObject* value, const MethodInfo* method);
// 0x18209f850

bool CustomLogic_CustomLogicConvertBuiltin__IsList(Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_1843467d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    Il2CppMethodInitialized_1843467d6 = '\x01';
  }
  if (value == (Il2CppObject *)0x0) {
    return false;
  }
  bVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
  if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
     ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  pIVar3 = (Il2CppObject *)0x0;
  if (bVar2) {
    pIVar3 = value;
  }
  return pIVar3 != (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsDict
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsDict (Il2CppObject* value, const MethodInfo* method);
// 0x18209f770

bool CustomLogic_CustomLogicConvertBuiltin__IsDict(Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_1843467d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin);
    Il2CppMethodInitialized_1843467d7 = '\x01';
  }
  if (value == (Il2CppObject *)0x0) {
    return false;
  }
  bVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin->_2).typeHierarchyDepth;
  if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
     ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  pIVar3 = (Il2CppObject *)0x0;
  if (bVar2) {
    pIVar3 = value;
  }
  return pIVar3 != (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicConvertBuiltin$$HasVariable
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__HasVariable (CustomLogic_CustomLogicClassInstance_o* cInstance, System_String_o* variableName, const MethodInfo* method);
// 0x18209f720

bool CustomLogic_CustomLogicConvertBuiltin__HasVariable
               (CustomLogic_CustomLogicClassInstance_o *cInstance,System_String_o *variableName,
               MethodInfo *method)

{
  bool bVar1;
  
  if (cInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    bVar1 = CustomLogic_CustomLogicClassInstance__HasVariable(cInstance,variableName,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicConvertBuiltin$$DefineVariable
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin__DefineVariable (CustomLogic_CustomLogicClassInstance_o* cInstance, System_String_o* variableName, Il2CppObject* value, const MethodInfo* method);
// 0x18209f5f0

void CustomLogic_CustomLogicConvertBuiltin__DefineVariable
               (CustomLogic_CustomLogicClassInstance_o *cInstance,System_String_o *variableName,
               Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843467d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    Il2CppMethodInitialized_1843467d8 = '\x01';
  }
  if (cInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    bVar1 = CustomLogic_CustomLogicClassInstance__HasVariable(cInstance,variableName,(MethodInfo *)0x0);
    if (!bVar1) {
      __this = (System_Collections_Generic_Dictionary_object__object__o *)(cInstance->fields).Variables;
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18209f666;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this,(Il2CppObject *)variableName,value,
                 (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item
                );
    }
    return;
  }
label_18209f666:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicConvertBuiltin$$RemoveVariable
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin__RemoveVariable (CustomLogic_CustomLogicClassInstance_o* cInstance, System_String_o* variableName, const MethodInfo* method);
// 0x18209f980

void CustomLogic_CustomLogicConvertBuiltin__RemoveVariable
               (CustomLogic_CustomLogicClassInstance_o *cInstance,System_String_o *variableName,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843467d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Remove);
    Il2CppMethodInitialized_1843467d9 = '\x01';
  }
  if (cInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    bVar1 = CustomLogic_CustomLogicClassInstance__HasVariable(cInstance,variableName,(MethodInfo *)0x0);
    if (bVar1) {
      __this = (System_Collections_Generic_Dictionary_object__object__o *)(cInstance->fields).Variables;
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18209f9e6;
      System_Collections_Generic_Dictionary_object__object___Remove
                (__this,(Il2CppObject *)variableName,
                 (MethodInfo_1470BF0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Remove);
    }
    return;
  }
label_18209f9e6:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicConvertBuiltin$$HasMethod
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__HasMethod (CustomLogic_CustomLogicClassInstance_o* cInstance, System_String_o* methodName, const MethodInfo* method);
// 0x18209f6a0

bool CustomLogic_CustomLogicConvertBuiltin__HasMethod
               (CustomLogic_CustomLogicClassInstance_o *cInstance,System_String_o *methodName,
               MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843467da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843467da = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return false;
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod(__this,cInstance,methodName,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicConvertBuiltin$$GetType
// il2cpp: System_String_o* CustomLogic_CustomLogicConvertBuiltin__GetType (CustomLogic_CustomLogicClassInstance_o* cInstance, const MethodInfo* method);
// 0x18209f670

System_String_o *
CustomLogic_CustomLogicConvertBuiltin__GetType
          (CustomLogic_CustomLogicClassInstance_o *cInstance,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (cInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    pSVar1 = (System_String_o *)
             (*(cInstance->klass->vtable)._6_unknown.methodPtr)
                       (cInstance,(cInstance->klass->vtable)._6_unknown.method);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicConvertBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicConvertBuiltin__get_ClassName (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x18209ff30

System_String_o *
CustomLogic_CustomLogicConvertBuiltin__get_ClassName
          (CustomLogic_CustomLogicConvertBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843467db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Convert");
    Il2CppMethodInitialized_1843467db = '\x01';
  }
  return "Convert";
}


// CustomLogic.CustomLogicConvertBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__get_IsAbstract (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicConvertBuiltin__get_IsAbstract(CustomLogic_CustomLogicConvertBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicConvertBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__get_IsStatic (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicConvertBuiltin__get_IsStatic(CustomLogic_CustomLogicConvertBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicConvertBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicConvertBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicConvertBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


