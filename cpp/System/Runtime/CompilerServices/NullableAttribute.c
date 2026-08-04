// Type: System.Runtime.CompilerServices.NullableAttribute
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// Prior real C# source: none
// --------------------------------

// System.Runtime.CompilerServices.NullableAttribute$$.ctor
// il2cpp: void System_Runtime_CompilerServices_NullableAttribute___ctor (System_Runtime_CompilerServices_NullableAttribute_o* __this, uint8_t , const MethodInfo* method);
// 0x4059760

void System_Runtime_CompilerServices_NullableAttribute___ctor
               (System_Runtime_CompilerServices_NullableAttribute_o *__this,uint8_t param_2,MethodInfo *method
               )

{
  System_Byte_array *pSVar1;
  System_Attribute_c *pSVar2;
  System_Attribute_o *__this_00;
  
  if (g_data_057ac271 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    g_data_057ac271 = '\x01';
  }
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  pSVar2 = (System_Attribute_c *)0x1;
  __this_00 = TypeInfo_byte;
  pSVar1 = (System_Byte_array *)il2cpp_runtime_helper_022b2a40();
  if (pSVar1 == (System_Byte_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = param_2;
    (__this->fields).NullableFlags = pSVar1;
    il2cpp_runtime_helper_022b4080(&__this->fields,pSVar1);
    return;
  }
  il2cpp_runtime_helper_022b2ca0();
  System_Attribute___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = pSVar2;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,pSVar2);
  return;
}


// System.Runtime.CompilerServices.NullableAttribute$$.ctor
// il2cpp: void System_Runtime_CompilerServices_NullableAttribute___ctor (System_Runtime_CompilerServices_NullableAttribute_o* __this, System_Byte_array* , const MethodInfo* method);
// 0x40597e0

void System_Runtime_CompilerServices_NullableAttribute___ctor_3f597e0
               (System_Runtime_CompilerServices_NullableAttribute_o *__this,System_Byte_array *param_2,
               MethodInfo *method)

{
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  (__this->fields).NullableFlags = param_2;
  il2cpp_runtime_helper_022b4080(&__this->fields,param_2);
  return;
}


// System.Runtime.CompilerServices.NullableAttribute$$.ctor
// il2cpp: void System_Runtime_CompilerServices_NullableAttribute___ctor (System_Runtime_CompilerServices_NullableAttribute_1_o* __this, uint8_t , const MethodInfo* method);
// 0x3e54520

void System_Runtime_CompilerServices_NullableAttribute___ctor_3d54520
               (System_Runtime_CompilerServices_NullableAttribute_1_o *__this,uint8_t param_2,
               MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Attribute_c *pSVar2;
  System_Attribute_o *__this_00;
  
  if (g_data_057ab3b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    g_data_057ab3b7 = '\x01';
  }
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  pSVar2 = (System_Attribute_c *)0x1;
  __this_00 = TypeInfo_byte;
  pSVar1 = (System_Byte_array *)il2cpp_runtime_helper_022b2a40();
  if (pSVar1 == (System_Byte_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = param_2;
    (__this->fields).NullableFlags = pSVar1;
    il2cpp_runtime_helper_022b4080(&__this->fields,pSVar1);
    return;
  }
  il2cpp_runtime_helper_022b2ca0();
  System_Attribute___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = pSVar2;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,pSVar2);
  return;
}


// System.Runtime.CompilerServices.NullableAttribute$$.ctor
// il2cpp: void System_Runtime_CompilerServices_NullableAttribute___ctor (System_Runtime_CompilerServices_NullableAttribute_1_o* __this, System_Byte_array* , const MethodInfo* method);
// 0x3e545a0

void System_Runtime_CompilerServices_NullableAttribute___ctor_3d545a0
               (System_Runtime_CompilerServices_NullableAttribute_1_o *__this,System_Byte_array *param_2,
               MethodInfo *method)

{
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  (__this->fields).NullableFlags = param_2;
  il2cpp_runtime_helper_022b4080(&__this->fields,param_2);
  return;
}


