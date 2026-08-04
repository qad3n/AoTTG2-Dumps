// Type: CustomLogic.Editor.CustomLogicMarkdownDocsGenerator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.Editor/CustomLogicMarkdownDocsGenerator.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator.<>c$$.cctor
// il2cpp: void CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c___cctor (const MethodInfo* method);
// 0x4280b00

void CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057adc75 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adc75 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator.<>c$$.ctor
// il2cpp: void CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c___ctor (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o* __this, const MethodInfo* method);
// 0x4280b70

void CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c___ctor
               (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator.<>c$$<Generate>b__7_0
// il2cpp: bool CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c___Generate_b__7_0 (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o* __this, CustomLogic_Editor_Models_CLMethod_o* x, const MethodInfo* method);
// 0x4280b80

bool_conflict
CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c___Generate_b__7_0
          (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o *__this,
          CustomLogic_Editor_Models_CLMethod_o *x,MethodInfo *method)

{
  CustomLogic_Editor_Models_CLMethod_c *pCVar1;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_c *pCVar2;
  undefined8 uVar3;
  bool_conflict bVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  MethodInfo *in_RCX;
  CustomLogic_Editor_Models_CLMethod_o *pCVar7;
  CustomLogic_Editor_Models_CLMethod_o *pCVar8;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *__this_00;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *member;
  
  pCVar7 = x;
  if (g_data_057adc76 == '\0') {
    __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o *)&"__";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc76 = '\x01';
  }
  if ((x != (CustomLogic_Editor_Models_CLMethod_o *)0x0) &&
     (pSVar6 = (x->fields)._Name_k__BackingField,
     __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o *)0x0,
     pSVar6 != (System_String_o *)0x0)) {
    bVar4 = System_String__StartsWith(pSVar6,"__",(MethodInfo *)0x0);
    return bVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar8 = pCVar7;
  if (g_data_057adc77 == '\0') {
    __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o *)&"__";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc77 = '\x01';
  }
  if ((pCVar7 != (CustomLogic_Editor_Models_CLMethod_o *)0x0) &&
     (pSVar6 = (pCVar7->fields)._Name_k__BackingField,
     __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o *)0x0,
     pSVar6 != (System_String_o *)0x0)) {
    bVar4 = System_String__StartsWith(pSVar6,"__",(MethodInfo *)0x0);
    return bVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar7 = pCVar8;
  if (g_data_057adc78 == '\0') {
    __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o *)&"__";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc78 = '\x01';
  }
  if ((pCVar8 != (CustomLogic_Editor_Models_CLMethod_o *)0x0) &&
     (pSVar6 = (pCVar8->fields)._Name_k__BackingField,
     __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o *)0x0,
     pSVar6 != (System_String_o *)0x0)) {
    bVar4 = System_String__StartsWith(pSVar6,"__",(MethodInfo *)0x0);
    return bVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pCVar7 != (CustomLogic_Editor_Models_CLMethod_o *)0x0) {
    bVar4 = System_String__IsNullOrEmpty
                      ((System_String_o *)(pCVar7->fields)._Parameters_k__BackingField,(MethodInfo *)0x0);
    bVar5 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar4 >> 8),1);
    if ((char)bVar4 != '\0') {
      pCVar1 = pCVar7[1].klass;
      if (pCVar1 == (CustomLogic_Editor_Models_CLMethod_c *)0x0) {
        return 0;
      }
      bVar5 = (bool_conflict)CONCAT71((int7)((ulong)pCVar1 >> 8),*(int *)&(pCVar1->_1).namespaze != 0);
    }
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = __this[1].klass;
  if (__this_00 != (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *)0x0) {
    pSVar6 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr
                       ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)__this_00,
                        (CustomLogic_Editor_Models_TypeReference_o *)pCVar7,*(int32_t *)&__this[1].monitor,
                        in_RCX);
    return (bool_conflict)pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  member = __this_00;
  if (g_data_057adc79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_CLTypeAttribute);
    member = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *)&"CustomLogic";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc79 = '\x01';
  }
  if (__this_00 != (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *)0x0) {
    pCVar2 = (__this_00->_1).image;
    uVar3._0_2_ = pCVar2[1]._2.interfaces_count;
    uVar3._2_2_ = pCVar2[1]._2.interface_offsets_count;
    uVar3._4_1_ = pCVar2[1]._2.typeHierarchyDepth;
    uVar3._5_1_ = pCVar2[1]._2.genericRecursionDepth;
    uVar3._6_1_ = pCVar2[1]._2.rank;
    uVar3._7_1_ = pCVar2[1]._2.minimumAlignment;
    pSVar6 = (System_String_o *)(**(code **)&pCVar2[1]._2.field_count)(__this_00,uVar3);
    bVar4 = System_String__op_Equality(pSVar6,"CustomLogic",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      bVar4 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
                        ((System_Type_o *)__this_00,0,MethodInfo_Boolean_HasAttribute_CLTypeAttribute);
      return bVar4;
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc7a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_CLPropertyAttribute);
    g_data_057adc7a = '\x01';
  }
  bVar4 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object__24ef9c0
                    ((System_Reflection_MemberInfo_o *)member,0,MethodInfo_Boolean_HasAttribute_CLPropertyAttribute);
  return bVar4;
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator.<>c$$<Generate>b__7_1
// il2cpp: bool CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c___Generate_b__7_1 (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o* __this, CustomLogic_Editor_Models_CLMethod_o* x, const MethodInfo* method);
// 0x4280bd0

bool_conflict
CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c___Generate_b__7_1
          (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o *__this,
          CustomLogic_Editor_Models_CLMethod_o *x,MethodInfo *method)

{
  CustomLogic_Editor_Models_CLMethod_c *pCVar1;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_c *pCVar2;
  undefined8 uVar3;
  bool_conflict bVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  MethodInfo *in_RCX;
  CustomLogic_Editor_Models_CLMethod_o *pCVar7;
  CustomLogic_Editor_Models_CLMethod_o *typeReference;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *__this_00;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *member;
  
  pCVar7 = x;
  if (g_data_057adc77 == '\0') {
    __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o *)&"__";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc77 = '\x01';
  }
  if ((x != (CustomLogic_Editor_Models_CLMethod_o *)0x0) &&
     (pSVar6 = (x->fields)._Name_k__BackingField,
     __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o *)0x0,
     pSVar6 != (System_String_o *)0x0)) {
    bVar4 = System_String__StartsWith(pSVar6,"__",(MethodInfo *)0x0);
    return bVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  typeReference = pCVar7;
  if (g_data_057adc78 == '\0') {
    __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o *)&"__";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc78 = '\x01';
  }
  if ((pCVar7 != (CustomLogic_Editor_Models_CLMethod_o *)0x0) &&
     (pSVar6 = (pCVar7->fields)._Name_k__BackingField,
     __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o *)0x0,
     pSVar6 != (System_String_o *)0x0)) {
    bVar4 = System_String__StartsWith(pSVar6,"__",(MethodInfo *)0x0);
    return bVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (typeReference != (CustomLogic_Editor_Models_CLMethod_o *)0x0) {
    bVar4 = System_String__IsNullOrEmpty
                      ((System_String_o *)(typeReference->fields)._Parameters_k__BackingField,
                       (MethodInfo *)0x0);
    bVar5 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar4 >> 8),1);
    if ((char)bVar4 != '\0') {
      pCVar1 = typeReference[1].klass;
      if (pCVar1 == (CustomLogic_Editor_Models_CLMethod_c *)0x0) {
        return 0;
      }
      bVar5 = (bool_conflict)CONCAT71((int7)((ulong)pCVar1 >> 8),*(int *)&(pCVar1->_1).namespaze != 0);
    }
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = __this[1].klass;
  if (__this_00 != (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *)0x0) {
    pSVar6 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr
                       ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)__this_00,
                        (CustomLogic_Editor_Models_TypeReference_o *)typeReference,
                        *(int32_t *)&__this[1].monitor,in_RCX);
    return (bool_conflict)pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  member = __this_00;
  if (g_data_057adc79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_CLTypeAttribute);
    member = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *)&"CustomLogic";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc79 = '\x01';
  }
  if (__this_00 != (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *)0x0) {
    pCVar2 = (__this_00->_1).image;
    uVar3._0_2_ = pCVar2[1]._2.interfaces_count;
    uVar3._2_2_ = pCVar2[1]._2.interface_offsets_count;
    uVar3._4_1_ = pCVar2[1]._2.typeHierarchyDepth;
    uVar3._5_1_ = pCVar2[1]._2.genericRecursionDepth;
    uVar3._6_1_ = pCVar2[1]._2.rank;
    uVar3._7_1_ = pCVar2[1]._2.minimumAlignment;
    pSVar6 = (System_String_o *)(**(code **)&pCVar2[1]._2.field_count)(__this_00,uVar3);
    bVar4 = System_String__op_Equality(pSVar6,"CustomLogic",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      bVar4 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
                        ((System_Type_o *)__this_00,0,MethodInfo_Boolean_HasAttribute_CLTypeAttribute);
      return bVar4;
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc7a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_CLPropertyAttribute);
    g_data_057adc7a = '\x01';
  }
  bVar4 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object__24ef9c0
                    ((System_Reflection_MemberInfo_o *)member,0,MethodInfo_Boolean_HasAttribute_CLPropertyAttribute);
  return bVar4;
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator.<>c$$<Generate>b__7_2
// il2cpp: bool CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c___Generate_b__7_2 (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o* __this, CustomLogic_Editor_Models_CLMethod_o* x, const MethodInfo* method);
// 0x4280c20

bool_conflict
CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c___Generate_b__7_2
          (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o *__this,
          CustomLogic_Editor_Models_CLMethod_o *x,MethodInfo *method)

{
  CustomLogic_Editor_Models_CLMethod_c *pCVar1;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_c *pCVar2;
  undefined8 uVar3;
  bool_conflict bVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  MethodInfo *in_RCX;
  CustomLogic_Editor_Models_CLMethod_o *typeReference;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *__this_00;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *member;
  
  typeReference = x;
  if (g_data_057adc78 == '\0') {
    __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o *)&"__";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc78 = '\x01';
  }
  if ((x != (CustomLogic_Editor_Models_CLMethod_o *)0x0) &&
     (pSVar6 = (x->fields)._Name_k__BackingField,
     __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o *)0x0,
     pSVar6 != (System_String_o *)0x0)) {
    bVar4 = System_String__StartsWith(pSVar6,"__",(MethodInfo *)0x0);
    return bVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (typeReference != (CustomLogic_Editor_Models_CLMethod_o *)0x0) {
    bVar4 = System_String__IsNullOrEmpty
                      ((System_String_o *)(typeReference->fields)._Parameters_k__BackingField,
                       (MethodInfo *)0x0);
    bVar5 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar4 >> 8),1);
    if ((char)bVar4 != '\0') {
      pCVar1 = typeReference[1].klass;
      if (pCVar1 == (CustomLogic_Editor_Models_CLMethod_c *)0x0) {
        return 0;
      }
      bVar5 = (bool_conflict)CONCAT71((int7)((ulong)pCVar1 >> 8),*(int *)&(pCVar1->_1).namespaze != 0);
    }
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = __this[1].klass;
  if (__this_00 != (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *)0x0) {
    pSVar6 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr
                       ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)__this_00,
                        (CustomLogic_Editor_Models_TypeReference_o *)typeReference,
                        *(int32_t *)&__this[1].monitor,in_RCX);
    return (bool_conflict)pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  member = __this_00;
  if (g_data_057adc79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_CLTypeAttribute);
    member = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *)&"CustomLogic";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc79 = '\x01';
  }
  if (__this_00 != (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *)0x0) {
    pCVar2 = (__this_00->_1).image;
    uVar3._0_2_ = pCVar2[1]._2.interfaces_count;
    uVar3._2_2_ = pCVar2[1]._2.interface_offsets_count;
    uVar3._4_1_ = pCVar2[1]._2.typeHierarchyDepth;
    uVar3._5_1_ = pCVar2[1]._2.genericRecursionDepth;
    uVar3._6_1_ = pCVar2[1]._2.rank;
    uVar3._7_1_ = pCVar2[1]._2.minimumAlignment;
    pSVar6 = (System_String_o *)(**(code **)&pCVar2[1]._2.field_count)(__this_00,uVar3);
    bVar4 = System_String__op_Equality(pSVar6,"CustomLogic",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      bVar4 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
                        ((System_Type_o *)__this_00,0,MethodInfo_Boolean_HasAttribute_CLTypeAttribute);
      return bVar4;
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc7a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_CLPropertyAttribute);
    g_data_057adc7a = '\x01';
  }
  bVar4 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object__24ef9c0
                    ((System_Reflection_MemberInfo_o *)member,0,MethodInfo_Boolean_HasAttribute_CLPropertyAttribute);
  return bVar4;
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator.<>c$$<AppendMethods>b__9_0
// il2cpp: bool CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c___AppendMethods_b__9_0 (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o* __this, CustomLogic_Editor_Models_CLParameter_o* p, const MethodInfo* method);
// 0x4280c70

bool_conflict
CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c___AppendMethods_b__9_0
          (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_o *__this,
          CustomLogic_Editor_Models_CLParameter_o *p,MethodInfo *method)

{
  System_String_array *pSVar1;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_c *pCVar2;
  undefined8 uVar3;
  bool_conflict bVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  MethodInfo *in_RCX;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *__this_00;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *member;
  
  if (p != (CustomLogic_Editor_Models_CLParameter_o *)0x0) {
    bVar4 = System_String__IsNullOrEmpty((p->fields)._Description_k__BackingField,(MethodInfo *)0x0);
    bVar5 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar4 >> 8),1);
    if ((char)bVar4 != '\0') {
      pSVar1 = (p->fields)._EnumNames_k__BackingField;
      if (pSVar1 == (System_String_array *)0x0) {
        return 0;
      }
      bVar5 = (bool_conflict)CONCAT71((int7)((ulong)pSVar1 >> 8),(int)pSVar1->max_length != 0);
    }
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = __this[1].klass;
  if (__this_00 != (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *)0x0) {
    pSVar6 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr
                       ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)__this_00,
                        (CustomLogic_Editor_Models_TypeReference_o *)p,*(int32_t *)&__this[1].monitor,in_RCX);
    return (bool_conflict)pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  member = __this_00;
  if (g_data_057adc79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_CLTypeAttribute);
    member = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *)&"CustomLogic";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc79 = '\x01';
  }
  if (__this_00 != (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c_c *)0x0) {
    pCVar2 = (__this_00->_1).image;
    uVar3._0_2_ = pCVar2[1]._2.interfaces_count;
    uVar3._2_2_ = pCVar2[1]._2.interface_offsets_count;
    uVar3._4_1_ = pCVar2[1]._2.typeHierarchyDepth;
    uVar3._5_1_ = pCVar2[1]._2.genericRecursionDepth;
    uVar3._6_1_ = pCVar2[1]._2.rank;
    uVar3._7_1_ = pCVar2[1]._2.minimumAlignment;
    pSVar6 = (System_String_o *)(**(code **)&pCVar2[1]._2.field_count)(__this_00,uVar3);
    bVar4 = System_String__op_Equality(pSVar6,"CustomLogic",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      bVar4 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
                        ((System_Type_o *)__this_00,0,MethodInfo_Boolean_HasAttribute_CLTypeAttribute);
      return bVar4;
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc7a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_CLPropertyAttribute);
    g_data_057adc7a = '\x01';
  }
  bVar4 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object__24ef9c0
                    ((System_Reflection_MemberInfo_o *)member,0,MethodInfo_Boolean_HasAttribute_CLPropertyAttribute);
  return bVar4;
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator.<>c__DisplayClass12_0$$.ctor
// il2cpp: void CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c__DisplayClass12_0___ctor (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x4280920

void CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c__DisplayClass12_0___ctor
               (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c__DisplayClass12_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator.<>c__DisplayClass12_0$$<GetTypeReferenceStr>b__0
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c__DisplayClass12_0___GetTypeReferenceStr_b__0 (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c__DisplayClass12_0_o* __this, CustomLogic_Editor_Models_TypeReference_o* x, const MethodInfo* method);
// 0x4280cb0

System_String_o *
CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c__DisplayClass12_0___GetTypeReferenceStr_b__0
          (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___c__DisplayClass12_0_o *__this,
          CustomLogic_Editor_Models_TypeReference_o *x,MethodInfo *method)

{
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_c *pCVar1;
  undefined8 uVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  MethodInfo *in_RCX;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *__this_00;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *member;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x0) {
    pSVar4 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr
                       (__this_00,x,(__this->fields).linkKind,in_RCX);
    return pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  member = __this_00;
  if (g_data_057adc79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_CLTypeAttribute);
    member = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)&"CustomLogic";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc79 = '\x01';
  }
  if (__this_00 != (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x0) {
    pCVar1 = __this_00->klass;
    uVar2._0_2_ = pCVar1[1]._2.interfaces_count;
    uVar2._2_2_ = pCVar1[1]._2.interface_offsets_count;
    uVar2._4_1_ = pCVar1[1]._2.typeHierarchyDepth;
    uVar2._5_1_ = pCVar1[1]._2.genericRecursionDepth;
    uVar2._6_1_ = pCVar1[1]._2.rank;
    uVar2._7_1_ = pCVar1[1]._2.minimumAlignment;
    pSVar4 = (System_String_o *)(**(code **)&pCVar1[1]._2.field_count)(__this_00,uVar2);
    bVar3 = System_String__op_Equality(pSVar4,"CustomLogic",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      bVar3 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
                        ((System_Type_o *)__this_00,0,MethodInfo_Boolean_HasAttribute_CLTypeAttribute);
      return (System_String_o *)CONCAT44(extraout_var,bVar3);
    }
    return (System_String_o *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc7a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_CLPropertyAttribute);
    g_data_057adc7a = '\x01';
  }
  bVar3 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object__24ef9c0
                    ((System_Reflection_MemberInfo_o *)member,0,MethodInfo_Boolean_HasAttribute_CLPropertyAttribute);
  return (System_String_o *)CONCAT44(extraout_var_00,bVar3);
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator$$.ctor
// il2cpp: void CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___ctor (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o* __this, CustomLogic_Editor_Models_CLType_array* allTypes, const MethodInfo* method);
// 0x427d0f0

void CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___ctor
               (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *__this,
               CustomLogic_Editor_Models_CLType_array *allTypes,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_Int32_array *pSVar6;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar7;
  System_Collections_Generic_Dictionary_object__int__c *pSVar8;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  void *pvVar11;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  Il2CppObject *arg1;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_02;
  undefined1 *puVar12;
  char cVar13;
  bool_conflict bVar14;
  uint uVar15;
  System_String_array *pSVar16;
  Il2CppClass *pIVar17;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  undefined8 *puVar18;
  System_String_array *values;
  System_String_o *pSVar19;
  System_Func_TSource__bool__o *pSVar20;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar21;
  Il2CppMethodPointer *ppIVar22;
  Il2CppObject *arg0;
  long *plVar23;
  System_String_o **in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  int iVar24;
  System_String_array *item;
  System_String_array *pSVar25;
  System_String_array *pSVar26;
  System_String_o **__this_04;
  long lVar27;
  long lVar28;
  MethodInfo_3503280 *in_R8;
  CustomLogic_Editor_Models_CLType_array **unaff_R12;
  long *plVar29;
  System_String_array *unaff_R13;
  MethodInfo_30FD980 **ppMVar30;
  System_String_array *unaff_R15;
  bool bVar31;
  undefined1 auVar32 [12];
  System_Collections_Generic_KeyValuePair_object__int__o __this_05;
  undefined8 in_stack_fffffffffffffee0;
  CustomLogic_Editor_Models_CLType_array *in_stack_fffffffffffffee8;
  CustomLogic_Editor_Models_CLType_array *pCVar33;
  CustomLogic_Editor_Models_CLType_array *pCVar34;
  undefined4 in_stack_fffffffffffffef0;
  uint uVar35;
  Il2CppClass *in_stack_fffffffffffffef8;
  System_String_array *in_stack_ffffffffffffff00;
  long lStack_f8;
  Il2CppObject IStack_f0;
  undefined1 auStack_e0 [52];
  undefined4 uStack_ac;
  Il2CppRGCTXData *pIStack_a8;
  _union_231605 _Stack_a0;
  char *pcStack_98;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSStack_90;
  System_String_array *pSStack_88;
  System_Collections_Generic_Dictionary_string__CLType__o **ppSStack_80;
  System_String_array *pSStack_78;
  System_String_array *pSStack_70;
  System_String_array *pSStack_68;
  Il2CppClass *pIStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  System_String_array *pSStack_48;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *pCStack_40;
  CustomLogic_Editor_Models_CLType_array *pCStack_38;
  
  pCStack_38 = allTypes;
  if (g_data_057adc6b == '\0') {
    pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d11b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_CustomLogic_Editor_Models_CLType_System_Int);
    pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d127;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_CustomLogic_Editor_Models_CLT);
    pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d133;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d13f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d14b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_CLType);
    pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d157;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_CLType_int);
    pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d163;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d16f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d17b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d187;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d193;
    il2cpp_runtime_helper_023445d0(&"Name");
    pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d19f;
    il2cpp_runtime_helper_023445d0(&"Type");
    pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d1ab;
    il2cpp_runtime_helper_023445d0(&"Description");
    pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d1b7;
    il2cpp_runtime_helper_023445d0(&"Readonly");
    g_data_057adc6b = '\x01';
  }
  pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d1cd;
  pSVar16 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d1da;
  System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)pSVar16,(MethodInfo *)0x0);
  (__this->fields)._sb = (System_Text_StringBuilder_o *)pSVar16;
  pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d1ea;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._sb,pSVar16);
  pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d1f9;
  pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d20e;
  item = MethodInfo_List_1_System_String;
  __this_04 = (System_String_o **)pIVar17;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pIVar17,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
  pSVar25 = "Name";
  pCVar33 = MethodInfo_Void_Add;
  ppMVar30 = (MethodInfo_30FD980 **)__this;
  if (pIVar17 != (Il2CppClass *)0x0) {
    unaff_R12 = &MethodInfo_Void_Add;
    puVar12 = (undefined1 *)((long)&(pIVar17->_1).namespaze + 4);
    *(int *)puVar12 = *(int *)puVar12 + 1;
    pSVar6 = ((System_Collections_Generic_Dictionary_object__int__Fields *)&(pIVar17->_1).name)->_buckets;
    in_RCX = (System_String_o **)pCVar33;
    item = pSVar25;
    if (pSVar6 != (System_Int32_array *)0x0) {
      uVar35 = *(uint *)&(pIVar17->_1).namespaze;
      if (uVar35 < (uint)pSVar6->max_length) {
        *(uint *)&(pIVar17->_1).namespaze = uVar35 + 1;
        __this_04 = (System_String_o **)(pSVar6->m_Items + (long)(int)uVar35 * 2);
        *(System_String_array **)(pSVar6->m_Items + (long)(int)uVar35 * 2) = pSVar25;
        pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d25e;
        il2cpp_runtime_helper_022b4080();
      }
      else {
        pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d277;
        __this_04 = (System_String_o **)pIVar17;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pIVar17,&pSVar25->obj,
                   (MethodInfo_362C220 *)
                   ((pCVar33->m_Items[0][1].fields._BaseType_k__BackingField)->fields).
                   _InstanceMethods_k__BackingField);
      }
      item = "Type";
      in_RCX = (System_String_o **)MethodInfo_Void_Add;
      puVar12 = (undefined1 *)((long)&(pIVar17->_1).namespaze + 4);
      *(int *)puVar12 = *(int *)puVar12 + 1;
      pSVar6 = ((System_Collections_Generic_Dictionary_object__int__Fields *)&(pIVar17->_1).name)->_buckets;
      if (pSVar6 != (System_Int32_array *)0x0) {
        uVar35 = *(uint *)&(pIVar17->_1).namespaze;
        if (uVar35 < (uint)pSVar6->max_length) {
          *(uint *)&(pIVar17->_1).namespaze = uVar35 + 1;
          __this_04 = (System_String_o **)(pSVar6->m_Items + (long)(int)uVar35 * 2);
          *(System_String_array **)(pSVar6->m_Items + (long)(int)uVar35 * 2) = item;
          pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d2b7;
          il2cpp_runtime_helper_022b4080();
        }
        else {
          pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d2d0;
          __this_04 = (System_String_o **)pIVar17;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pIVar17,&item->obj,
                     (MethodInfo_362C220 *)
                     ((((CustomLogic_Editor_Models_CLType_array *)in_RCX)->m_Items[0][1].fields.
                      _BaseType_k__BackingField)->fields)._InstanceMethods_k__BackingField);
        }
        item = "Readonly";
        in_RCX = (System_String_o **)MethodInfo_Void_Add;
        puVar12 = (undefined1 *)((long)&(pIVar17->_1).namespaze + 4);
        *(int *)puVar12 = *(int *)puVar12 + 1;
        pSVar6 = ((System_Collections_Generic_Dictionary_object__int__Fields *)&(pIVar17->_1).name)->_buckets;
        if (pSVar6 != (System_Int32_array *)0x0) {
          uVar35 = *(uint *)&(pIVar17->_1).namespaze;
          if (uVar35 < (uint)pSVar6->max_length) {
            *(uint *)&(pIVar17->_1).namespaze = uVar35 + 1;
            __this_04 = (System_String_o **)(pSVar6->m_Items + (long)(int)uVar35 * 2);
            *(System_String_array **)(pSVar6->m_Items + (long)(int)uVar35 * 2) = item;
            pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d310;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d329;
            __this_04 = (System_String_o **)pIVar17;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pIVar17,&item->obj,
                       (MethodInfo_362C220 *)
                       ((((CustomLogic_Editor_Models_CLType_array *)in_RCX)->m_Items[0][1].fields.
                        _BaseType_k__BackingField)->fields)._InstanceMethods_k__BackingField);
          }
          item = "Description";
          in_RCX = (System_String_o **)MethodInfo_Void_Add;
          puVar12 = (undefined1 *)((long)&(pIVar17->_1).namespaze + 4);
          *(int *)puVar12 = *(int *)puVar12 + 1;
          pSVar6 = ((System_Collections_Generic_Dictionary_object__int__Fields *)&(pIVar17->_1).name)->
                   _buckets;
          if (pSVar6 != (System_Int32_array *)0x0) {
            uVar35 = *(uint *)&(pIVar17->_1).namespaze;
            if (uVar35 < (uint)pSVar6->max_length) {
              in_RCX = (System_String_o **)(ulong)(uVar35 + 1);
              *(uint *)&(pIVar17->_1).namespaze = uVar35 + 1;
              *(System_String_array **)(pSVar6->m_Items + (long)(int)uVar35 * 2) = item;
              pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d369;
              il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (long)(int)uVar35 * 2);
            }
            else {
              pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d382;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pIVar17,&item->obj,
                         (MethodInfo_362C220 *)
                         ((((CustomLogic_Editor_Models_CLType_array *)in_RCX)->m_Items[0][1].fields.
                          _BaseType_k__BackingField)->fields)._InstanceMethods_k__BackingField);
            }
            (__this->fields)._propertiesHeaders = (System_Collections_Generic_List_string__o *)pIVar17;
            pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d395;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._propertiesHeaders);
            pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d39f;
            System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
            pCVar33 = pCStack_38;
            (__this->fields).AllTypes = pCStack_38;
            pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d3b3;
            il2cpp_runtime_helper_022b4080(&__this->fields,pCStack_38);
            pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d3c2;
            __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)
                        il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_CLType);
            pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d3d7;
            System_Collections_Generic_Dictionary_object__object____ctor(__this_03,MethodInfo_Dictionary_2_System_String_CustomLogic_Editor_Models_CLT);
            unaff_R12 = (CustomLogic_Editor_Models_CLType_array **)&(__this->fields)._typeNameMap;
            (__this->fields)._typeNameMap =
                 (System_Collections_Generic_Dictionary_string__CLType__o *)__this_03;
            pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d3ea;
            il2cpp_runtime_helper_022b4080(unaff_R12,__this_03);
            pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d3f9;
            unaff_R15 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_CLType_int);
            pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d40e;
            System_Collections_Generic_Dictionary_object__int____ctor
                      ((System_Collections_Generic_Dictionary_object__int__o *)unaff_R15,MethodInfo_Dictionary_2_CustomLogic_Editor_Models_CLType_System_Int);
            (__this->fields)._typeIndexMap = (System_Collections_Generic_Dictionary_CLType__int__o *)unaff_R15
            ;
            pIVar17 = (Il2CppClass *)&(__this->fields)._typeIndexMap;
            pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d424;
            item = unaff_R15;
            __this_04 = (System_String_o **)pIVar17;
            il2cpp_runtime_helper_022b4080();
            ppMVar30 = (MethodInfo_30FD980 **)0x0;
            pSVar16 = (System_String_array *)pIVar17;
            if (pCVar33 != (CustomLogic_Editor_Models_CLType_array *)0x0) {
              uVar35 = *(uint *)&pCVar33->max_length;
              if (0 < (int)uVar35) {
                unaff_R13 = (System_String_array *)0x0;
                ppMVar30 = &MethodInfo_Void_set_Item;
                in_RCX = (System_String_o **)pCVar33;
                do {
                  uVar15 = (uint)unaff_R13;
                  if (uVar35 <= uVar15) goto label_0427d4bf;
                  pSVar16 = (System_String_array *)
                            ((CustomLogic_Editor_Models_CLType_array *)in_RCX)->m_Items[(int)uVar15];
                  if (pSVar16 == (System_String_array *)0x0) goto label_0427d4ba;
                  __this_04 = (System_String_o **)0x0;
                  if ((System_Collections_Generic_Dictionary_object__object__o *)*unaff_R12 ==
                      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0427d4ba;
                  item = (System_String_array *)pSVar16->max_length;
                  pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d481;
                  in_RCX = (System_String_o **)MethodInfo_Void_set_Item;
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)*unaff_R12,
                             (Il2CppObject *)item,(Il2CppObject *)pSVar16,(MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
                  __this_04 = *(System_String_o ***)pIVar17;
                  if ((Il2CppClass *)__this_04 == (Il2CppClass *)0x0) goto label_0427d4ba;
                  unaff_R13 = (System_String_array *)(ulong)(uVar15 + 1);
                  pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d49c;
                  item = pSVar16;
                  System_Collections_Generic_Dictionary_object__int___set_Item
                            ((System_Collections_Generic_Dictionary_object__int__o *)__this_04,
                             (Il2CppObject *)pSVar16,uVar15,MethodInfo_Void_set_Item);
                  uVar35 = *(uint *)&pCStack_38->max_length;
                  in_RCX = (System_String_o **)pCStack_38;
                  unaff_R15 = unaff_R13;
                } while ((int)(uVar15 + 1) < (int)uVar35);
              }
              return;
            }
          }
        }
      }
    }
  }
label_0427d4ba:
  pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d4bf;
  il2cpp_runtime_helper_022b2c90();
label_0427d4bf:
  pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x427d4c4;
  uStack_50 = il2cpp_runtime_helper_022b2ca0();
  pSVar25 = item;
  pSStack_48 = pSVar16;
  pCStack_40 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)ppMVar30;
  if (g_data_057adc6c == '\0') {
    uStack_58 = 0x427d4ec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    uStack_58 = 0x427d4f8;
    il2cpp_runtime_helper_023445d0(&"md/static/");
    uStack_58 = 0x427d504;
    il2cpp_runtime_helper_023445d0(&"/");
    uStack_58 = 0x427d510;
    il2cpp_runtime_helper_023445d0(&"md/objects/");
    uStack_58 = 0x427d51c;
    il2cpp_runtime_helper_023445d0(&"md/");
    __this_04 = &".md";
    uStack_58 = 0x427d528;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc6c = '\x01';
  }
  if (item != (System_String_array *)0x0) {
    uStack_58 = 0x427d543;
    bVar14 = System_String__IsNullOrEmpty((System_String_o *)item->m_Items[3],(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      if (((char)*(bool_conflict *)(item->m_Items + 1) == '\0') ||
         (*(char *)((long)item->m_Items + 9) == '\0')) {
        pSVar19 = (System_String_o *)item->max_length;
        puVar18 = &"md/objects/";
      }
      else {
        pSVar19 = (System_String_o *)item->max_length;
        puVar18 = &"md/static/";
      }
      System_String__Concat_3af7150((System_String_o *)*puVar18,pSVar19,".md",(MethodInfo *)0x0);
      return;
    }
    pSVar25 = (System_String_array *)&g_data_00000005;
    uStack_58 = 0x427d581;
    __this_04 = (System_String_o **)TypeInfo_string;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    pSVar26 = "md/";
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        __this_04 = values->m_Items;
        values->m_Items[0] = (System_String_o *)"md/";
        uStack_58 = 0x427d5ae;
        il2cpp_runtime_helper_022b4080();
        pSVar25 = pSVar26;
        if (1 < (uint)values->max_length) {
          pSVar25 = (System_String_array *)item->m_Items[3];
          __this_04 = values->m_Items + 1;
          values->m_Items[1] = (System_String_o *)pSVar25;
          uStack_58 = 0x427d5c9;
          il2cpp_runtime_helper_022b4080();
          pSVar16 = "/";
          if (2 < (uint)values->max_length) {
            __this_04 = values->m_Items + 2;
            values->m_Items[2] = (System_String_o *)"/";
            uStack_58 = 0x427d5ea;
            il2cpp_runtime_helper_022b4080();
            pSVar25 = pSVar16;
            if (3 < (uint)values->max_length) {
              pSVar25 = (System_String_array *)item->max_length;
              __this_04 = values->m_Items + 3;
              values->m_Items[3] = (System_String_o *)pSVar25;
              uStack_58 = 0x427d601;
              il2cpp_runtime_helper_022b4080();
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = ".md";
                uStack_58 = 0x427d621;
                il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      uStack_58 = 0x427d65d;
      il2cpp_runtime_helper_022b2ca0();
      pSVar16 = values;
    }
  }
  uStack_58 = 0x427d662;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pIStack_60 = (Il2CppClass *)0x427d681;
  pSVar19 = (System_String_o *)(*(((((Il2CppClass *)__this_04)->_1).image)->vtable)._4_unknown.methodPtr)();
  if (pSVar19 != (System_String_o *)0x0) {
    System_String__Substring_3af8da0(pSVar19,3,(pSVar19->fields)._stringLength + -3,(MethodInfo *)0x0);
    return;
  }
  pIStack_60 = (Il2CppClass *)0x427d6a1;
  il2cpp_runtime_helper_022b2c90();
  pSStack_88 = pSVar16;
  ppSStack_80 = (System_Collections_Generic_Dictionary_string__CLType__o **)unaff_R12;
  pSStack_78 = unaff_R13;
  pSStack_70 = item;
  pSStack_68 = unaff_R15;
  pIStack_60 = pIVar17;
  if (g_data_057adc6d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_CustomLogic_Editor_M);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_CLMethod);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_CustomLogic_Editor_Models_CLMethod_Where_C);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_CustomLogic_Editor_Models_CLType_System_I);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CLMethod_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_CLMethod);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_CLMethod);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Deconstruct);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Generate_b__7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Generate_b__7_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Generate_b__7_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"__Sub__");
    il2cpp_runtime_helper_023445d0(&"](../");
    il2cpp_runtime_helper_023445d0(&"__Copy__");
    il2cpp_runtime_helper_023445d0(&"`-`, ");
    il2cpp_runtime_helper_023445d0(&"__Str__");
    il2cpp_runtime_helper_023445d0(&"Overloads operators: ");
    il2cpp_runtime_helper_023445d0(&" // ");
    il2cpp_runtime_helper_023445d0(&"```csharp");
    il2cpp_runtime_helper_023445d0(&"```");
    il2cpp_runtime_helper_023445d0(&"__Eq__");
    il2cpp_runtime_helper_023445d0(&"__Hash__");
    il2cpp_runtime_helper_023445d0(&"`, ");
    il2cpp_runtime_helper_023445d0(&"`");
    il2cpp_runtime_helper_023445d0(&"Inherits from [");
    il2cpp_runtime_helper_023445d0(&"[^{0}]: [{1}](../{2})");
    il2cpp_runtime_helper_023445d0(&"__Div__");
    il2cpp_runtime_helper_023445d0(&"### Static Properties");
    il2cpp_runtime_helper_023445d0(&"### Properties");
    il2cpp_runtime_helper_023445d0(&"(");
    il2cpp_runtime_helper_023445d0(&"`*`, ");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&"### Remarks");
    il2cpp_runtime_helper_023445d0(&"`==`, ");
    il2cpp_runtime_helper_023445d0(&"### Methods");
    il2cpp_runtime_helper_023445d0(&"### Initialization");
    il2cpp_runtime_helper_023445d0(&"__Mul__");
    il2cpp_runtime_helper_023445d0(&"# ");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"`+`, ");
    il2cpp_runtime_helper_023445d0(&"__Add__");
    il2cpp_runtime_helper_023445d0(&"### Example");
    il2cpp_runtime_helper_023445d0(&"### Static Methods");
    il2cpp_runtime_helper_023445d0(&"`/`, ");
    g_data_057adc6d = '\x01';
  }
  uVar35 = 0;
  auStack_e0._16_8_ = (InvokerMethod)0x0;
  auStack_e0._24_8_ = (char *)0x0;
  auStack_e0._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_e0._8_8_ = (Il2CppRGCTXData *)0x0;
  auStack_e0._32_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  IStack_f0.klass = (Il2CppClass *)0x0;
  IStack_f0.monitor = (void *)0x0;
  lStack_f8 = 0;
  pIVar17 = in_stack_fffffffffffffef8;
  if (pSVar25 == (System_String_array *)0x0) goto label_0427e7ba;
  bVar31 = false;
  if (pSVar25->m_Items[9] != (System_String_o *)0x0) {
    bVar31 = *(int *)&pSVar25->m_Items[9][1].klass != 0;
  }
  pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
           (((Il2CppClass *)__this_04)->_1).namespaze;
  if (pSVar7 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0427e7ba;
  pCVar33 = (CustomLogic_Editor_Models_CLType_array *)&(((Il2CppClass *)__this_04)->_1).namespaze;
  System_Text_StringBuilder__Clear((System_Text_StringBuilder_o *)pSVar7,(MethodInfo *)0x0);
  pSVar7 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)pCVar33;
  pSVar19 = System_String__Concat_3ae5ba0
                      ("# ",(System_String_o *)pSVar25->max_length,(MethodInfo *)0x0);
  in_stack_fffffffffffffee8 = pCVar33;
  pIVar17 = in_stack_fffffffffffffef8;
  if (pSVar7 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0427e7ba;
  System_Text_StringBuilder__AppendLine_3b044f0
            ((System_Text_StringBuilder_o *)pSVar7,pSVar19,(MethodInfo *)0x0);
  plVar29 = (long *)__this_04;
  if ((*(char *)((long)pSVar25->m_Items + 10) != '\0') && (pSVar25->m_Items[4] != (System_String_o *)0x0)) {
    pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pCVar33->obj).klass;
    pSVar16 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    in_stack_fffffffffffffee8 = pCVar33;
    pIVar17 = in_stack_fffffffffffffef8;
    if (pSVar16 == (System_String_array *)0x0) goto label_0427e7ba;
    if ((int)pSVar16->max_length == 0) goto label_0427e7ce;
    pSVar16->m_Items[0] = "Inherits from [";
    il2cpp_runtime_helper_022b4080(pSVar16->m_Items);
    pSVar19 = CustomLogic_Editor_Models_CLType__get_BaseTypeName
                        ((CustomLogic_Editor_Models_CLType_o *)pSVar25,(MethodInfo *)0x0);
    if ((uint)pSVar16->max_length < 2) goto label_0427e7ce;
    pSVar16->m_Items[1] = pSVar19;
    il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 1);
    if ((uint)pSVar16->max_length < 3) goto label_0427e7ce;
    pSVar16->m_Items[2] = "](../";
    il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 2);
    pSVar8 = (((Il2CppClass *)__this_04)->_1).image;
    pSVar19 = (System_String_o *)
              (*(pSVar8->vtable)._4_unknown.methodPtr)
                        (__this_04,pSVar25->m_Items[4],(pSVar8->vtable)._4_unknown.method);
    in_stack_fffffffffffffee8 = pCVar33;
    pIVar17 = in_stack_fffffffffffffef8;
    if (pSVar19 == (System_String_o *)0x0) goto label_0427e7ba;
    in_RCX = (System_String_o **)0x0;
    pSVar19 = System_String__Substring_3af8da0
                        (pSVar19,3,(pSVar19->fields)._stringLength + -3,(MethodInfo *)0x0);
    if ((uint)pSVar16->max_length < 4) goto label_0427e7ce;
    pSVar16->m_Items[3] = pSVar19;
    il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 3);
    if ((uint)pSVar16->max_length < 5) goto label_0427e7ce;
    pSVar16->m_Items[4] = ")";
    il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 4);
    pSVar19 = System_String__Concat_3af7570(pSVar16,(MethodInfo *)0x0);
    in_stack_fffffffffffffee8 = pCVar33;
    pIVar17 = in_stack_fffffffffffffef8;
    if (pSVar7 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine_3b044f0
              ((System_Text_StringBuilder_o *)pSVar7,pSVar19,(MethodInfo *)0x0);
  }
  in_stack_fffffffffffffee8 = pCVar33;
  pIVar17 = in_stack_fffffffffffffef8;
  if (pSVar25->m_Items[0] == (System_String_o *)0x0) goto label_0427e7ba;
  pCVar34 = pCVar33;
  bVar14 = System_String__IsNullOrEmpty((System_String_o *)pSVar25->m_Items[0]->fields,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pCVar33->obj).klass;
    in_stack_fffffffffffffee8 = pCVar34;
    pIVar17 = in_stack_fffffffffffffef8;
    if (pSVar7 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine((System_Text_StringBuilder_o *)pSVar7,(MethodInfo *)0x0);
    in_stack_fffffffffffffee8 = pCVar34;
    pIVar17 = in_stack_fffffffffffffef8;
    if (pSVar25->m_Items[0] == (System_String_o *)0x0) goto label_0427e7ba;
    pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pCVar33->obj).klass;
    pSVar19 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                        ((System_String_o *)pSVar25->m_Items[0]->fields,0,method_00);
    in_stack_fffffffffffffee8 = pCVar34;
    pIVar17 = in_stack_fffffffffffffef8;
    if (pSVar7 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine_3b044f0
              ((System_Text_StringBuilder_o *)pSVar7,pSVar19,(MethodInfo *)0x0);
    pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pCVar33->obj).klass;
    in_stack_fffffffffffffee8 = pCVar34;
    pIVar17 = in_stack_fffffffffffffef8;
    if (pSVar7 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine((System_Text_StringBuilder_o *)pSVar7,(MethodInfo *)0x0);
  }
  in_stack_fffffffffffffee8 = pCVar34;
  pIVar17 = in_stack_fffffffffffffef8;
  if (pSVar25->m_Items[0] == (System_String_o *)0x0) goto label_0427e7ba;
  uVar15 = 0;
  bVar14 = System_String__IsNullOrEmpty((System_String_o *)pSVar25->m_Items[0][1].klass,(MethodInfo *)0x0);
  in_stack_fffffffffffffef8 = (Il2CppClass *)__this_04;
  pSVar16 = pSVar25;
  if (bVar31) {
    pSVar19 = pSVar25->m_Items[9];
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar20 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      pSVar16 = pSVar25;
    }
    else {
      pSVar20 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (pSVar20 == (System_Func_TSource__bool__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_04 = (System_String_o **)**(undefined8 **)(TypeInfo_c + 0xb8);
      pSVar20 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CLMethod_bool);
      in_RCX = (System_String_o **)0x0;
      System_Func_object__bool____ctor();
      lVar27 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__bool__o **)(lVar27 + 8) = pSVar20;
      il2cpp_runtime_helper_022b4080(lVar27 + 8,pSVar20);
    }
    uVar15 = System_Linq_Enumerable__Any_object__2504f10
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar19,pSVar20,MethodInfo_Boolean_Any_CLMethod);
    uVar15 = uVar15 & 0xff;
    plVar29 = (long *)__this_04;
  }
  in_stack_fffffffffffffee8 = pCVar34;
  in_stack_ffffffffffffff00 = pSVar16;
  if ((char)bVar14 == '\x01' && uVar15 == 0) goto label_0427e268;
  pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pCVar34->obj).klass;
  __this_04 = (System_String_o **)plVar29;
  pSVar25 = pSVar16;
  pIVar17 = in_stack_fffffffffffffef8;
  if (pSVar7 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0427e7ba;
  System_Text_StringBuilder__AppendLine_3b044f0
            ((System_Text_StringBuilder_o *)pSVar7,"### Remarks",(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    pIVar17 = in_stack_fffffffffffffef8;
    if (pSVar16->m_Items[0] == (System_String_o *)0x0) goto label_0427e7ba;
    pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pCVar34->obj).klass;
    pSVar19 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                        ((System_String_o *)pSVar16->m_Items[0][1].klass,0,method_01);
    pIVar17 = in_stack_fffffffffffffef8;
    if (pSVar7 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine_3b044f0
              ((System_Text_StringBuilder_o *)pSVar7,pSVar19,(MethodInfo *)0x0);
    pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pCVar34->obj).klass;
    pIVar17 = in_stack_fffffffffffffef8;
    if (pSVar7 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine((System_Text_StringBuilder_o *)pSVar7,(MethodInfo *)0x0);
  }
  if (uVar15 == 0) goto label_0427e268;
  pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pCVar34->obj).klass;
  pIVar17 = in_stack_fffffffffffffef8;
  if (pSVar7 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0427e7ba;
  System_Text_StringBuilder__AppendLine_3b044f0
            ((System_Text_StringBuilder_o *)pSVar7,"Overloads operators: ",(MethodInfo *)0x0);
  pSVar19 = pSVar16->m_Items[9];
  plVar29 = &TypeInfo_c;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar20 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    pSVar20 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (pSVar20 == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar20 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CLMethod_bool);
    in_RCX = (System_String_o **)0x0;
    System_Func_object__bool____ctor();
    lVar27 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar27 + 0x10) = pSVar20;
    il2cpp_runtime_helper_022b4080(lVar27 + 0x10,pSVar20);
  }
  bVar14 = System_Linq_Enumerable__Any_object__2504f10
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar19,pSVar20,MethodInfo_Boolean_Any_CLMethod);
  pSVar25 = "";
  if ((char)bVar14 == '\0') goto label_0427e268;
  pSVar19 = pSVar16->m_Items[9];
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar20 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
    pCVar33 = in_stack_fffffffffffffee8;
  }
  else {
    pSVar20 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
    pCVar33 = in_stack_fffffffffffffee8;
  }
  if (pSVar20 == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar20 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CLMethod_bool);
    System_Func_object__bool____ctor();
    lVar27 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar27 + 0x18) = pSVar20;
    il2cpp_runtime_helper_022b4080(lVar27 + 0x18,pSVar20);
  }
  pSVar21 = System_Linq_Enumerable__Where_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar19,pSVar20,MethodInfo_IEnumerable_1_CustomLogic_Editor_Models_CLMethod_Where_C);
  __this_04 = (System_String_o **)plVar29;
  in_stack_fffffffffffffee8 = pCVar33;
  pIVar17 = in_stack_fffffffffffffef8;
  if (pSVar21 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) goto label_0427e7ba;
  pSVar9 = pSVar21->klass;
  uVar1._0_1_ = (pSVar9->_2).rank;
  uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar10 = (pSVar9->_1).interfaceOffsets;
    lVar27 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar27) == TypeInfo_IEnumerable_CLMethod) {
        ppIVar22 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar27)].methodPtr;
        goto label_0427def1;
      }
      lVar27 = lVar27 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar27);
  }
  ppIVar22 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar21,TypeInfo_IEnumerable_CLMethod,0);
label_0427def1:
  plVar29 = (long *)(**ppIVar22)();
  if ((Il2CppClass *)plVar29 == (Il2CppClass *)0x0) goto label_0427e7d8;
  lVar27 = 0;
label_0427df10:
  pSVar8 = (((Il2CppClass *)plVar29)->_1).image;
  uVar2._0_1_ = (pSVar8->_2).rank;
  uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar10 = (pSVar8->_1).interfaceOffsets;
    lVar28 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar28) == TypeInfo_IEnumerator) {
        ppIVar22 = &(&(pSVar8->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar28)].methodPtr;
        goto label_0427df73;
      }
      lVar28 = lVar28 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar28);
  }
  ppIVar22 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar29,TypeInfo_IEnumerator,0);
label_0427df73:
  cVar13 = (**ppIVar22)();
  if (cVar13 == '\0') {
    iVar24 = 0x16;
    goto label_0427e1ac;
  }
  pSVar8 = (((Il2CppClass *)plVar29)->_1).image;
  uVar3._0_1_ = (pSVar8->_2).rank;
  uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar10 = (pSVar8->_1).interfaceOffsets;
    lVar28 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar28) == TypeInfo_IEnumerator_CLMethod) {
        ppIVar22 = &(&(pSVar8->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar28)].methodPtr;
        goto label_0427dfe3;
      }
      lVar28 = lVar28 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar28);
  }
  ppIVar22 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar29,TypeInfo_IEnumerator_CLMethod,0);
label_0427dfe3:
  lVar28 = (**ppIVar22)(plVar29);
  if (lVar28 != 0) {
    bVar14 = System_String__op_Equality(*(System_String_o **)(lVar28 + 0x28),"__Add__",(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pSVar25 = (System_String_array *)
                System_String__Concat_3ae5ba0((System_String_o *)pSVar25,"`+`, ",(MethodInfo *)0x0);
    }
    bVar14 = System_String__op_Equality(*(System_String_o **)(lVar28 + 0x28),"__Sub__",(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pSVar25 = (System_String_array *)
                System_String__Concat_3ae5ba0((System_String_o *)pSVar25,"`-`, ",(MethodInfo *)0x0);
    }
    bVar14 = System_String__op_Equality(*(System_String_o **)(lVar28 + 0x28),"__Mul__",(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pSVar25 = (System_String_array *)
                System_String__Concat_3ae5ba0((System_String_o *)pSVar25,"`*`, ",(MethodInfo *)0x0);
    }
    bVar14 = System_String__op_Equality(*(System_String_o **)(lVar28 + 0x28),"__Div__",(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pSVar25 = (System_String_array *)
                System_String__Concat_3ae5ba0((System_String_o *)pSVar25,"`/`, ",(MethodInfo *)0x0);
    }
    bVar14 = System_String__op_Equality(*(System_String_o **)(lVar28 + 0x28),"__Eq__",(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pSVar25 = (System_String_array *)
                System_String__Concat_3ae5ba0((System_String_o *)pSVar25,"`==`, ",(MethodInfo *)0x0);
    }
    bVar14 = System_String__op_Equality(*(System_String_o **)(lVar28 + 0x28),"__Copy__",(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      in_R8 = (MethodInfo_3503280 *)0x0;
      pSVar25 = (System_String_array *)
                System_String__Concat_3af7470
                          ((System_String_o *)pSVar25,"`",*(System_String_o **)(lVar28 + 0x28),
                           "`, ",(MethodInfo *)0x0);
    }
    bVar14 = System_String__op_Equality(*(System_String_o **)(lVar28 + 0x28),"__Hash__",(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      in_R8 = (MethodInfo_3503280 *)0x0;
      pSVar25 = (System_String_array *)
                System_String__Concat_3af7470
                          ((System_String_o *)pSVar25,"`",*(System_String_o **)(lVar28 + 0x28),
                           "`, ",(MethodInfo *)0x0);
    }
    bVar14 = System_String__op_Equality(*(System_String_o **)(lVar28 + 0x28),"__Str__",(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      in_R8 = (MethodInfo_3503280 *)0x0;
      pSVar25 = (System_String_array *)
                System_String__Concat_3af7470
                          ((System_String_o *)pSVar25,"`",*(System_String_o **)(lVar28 + 0x28),
                           "`, ",(MethodInfo *)0x0);
    }
    goto label_0427df10;
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_0427e7d8:
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar32 = il2cpp_runtime_helper_022fefe0();
      iVar24 = 0;
      if (auVar32._8_4_ != 1) {
        if ((Il2CppClass *)plVar29 == (Il2CppClass *)0x0) goto label_0427e9d6;
        pSVar8 = (((Il2CppClass *)plVar29)->_1).image;
        uVar5._0_1_ = (pSVar8->_2).rank;
        uVar5._1_1_ = (pSVar8->_2).minimumAlignment;
        if ((ulong)uVar5 == 0) goto label_0427e9af;
        pIVar10 = (pSVar8->_1).interfaceOffsets;
        lVar27 = 0;
        goto label_0427e9a0;
      }
      plVar23 = (long *)__cxa_begin_catch();
      lVar27 = *plVar23;
      __cxa_end_catch();
label_0427e1ac:
      in_RCX = (System_String_o **)pCVar33;
      if ((Il2CppClass *)plVar29 != (Il2CppClass *)0x0) {
        pSVar8 = (((Il2CppClass *)plVar29)->_1).image;
        uVar4._0_1_ = (pSVar8->_2).rank;
        uVar4._1_1_ = (pSVar8->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar10 = (pSVar8->_1).interfaceOffsets;
          lVar28 = 0;
          do {
            if (*(long *)((long)&pIVar10->interfaceType + lVar28) == TypeInfo_IDisposable) {
              ppIVar22 = &(&(pSVar8->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar28)].methodPtr;
              goto label_0427e20d;
            }
            lVar28 = lVar28 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar28);
        }
        ppIVar22 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar29,TypeInfo_IDisposable,0);
        in_RCX = (System_String_o **)pCVar33;
label_0427e20d:
        (**ppIVar22)(plVar29);
      }
      pCVar33 = (CustomLogic_Editor_Models_CLType_array *)in_RCX;
    } while (lVar27 != 0);
    if ((iVar24 != 0x16) && (iVar24 != 0)) {
      return;
    }
    __this_04 = (System_String_o **)plVar29;
    in_stack_fffffffffffffee8 = (CustomLogic_Editor_Models_CLType_array *)in_RCX;
    pIVar17 = in_stack_fffffffffffffef8;
    if (pSVar25 != (System_String_array *)0x0) {
      pSVar19 = System_String__Substring_3af8da0
                          ((System_String_o *)pSVar25,0,*(int *)&pSVar25->bounds + -2,(MethodInfo *)0x0);
      pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
               (((CustomLogic_Editor_Models_CLType_array *)in_RCX)->obj).klass;
      in_stack_fffffffffffffee8 = (CustomLogic_Editor_Models_CLType_array *)in_RCX;
      pIVar17 = in_stack_fffffffffffffef8;
      if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        System_Text_StringBuilder__AppendLine_3b044f0
                  ((System_Text_StringBuilder_o *)pSVar7,pSVar19,(MethodInfo *)0x0);
        pSVar16 = in_stack_ffffffffffffff00;
label_0427e268:
        pSVar25 = pSVar16;
        __this_04 = (System_String_o **)plVar29;
        pIVar17 = in_stack_fffffffffffffef8;
        if (pSVar25->m_Items[0] != (System_String_o *)0x0) {
          bVar14 = System_String__IsNullOrEmpty(pSVar25->m_Items[0][1].monitor,(MethodInfo *)0x0);
          pIVar17 = in_stack_fffffffffffffef8;
          if ((char)bVar14 == '\0') {
            pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                     (in_stack_fffffffffffffee8->obj).klass;
            if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
              pCVar33 = in_stack_fffffffffffffee8;
              System_Text_StringBuilder__AppendLine_3b044f0
                        ((System_Text_StringBuilder_o *)pSVar7,"### Example",(MethodInfo *)0x0);
              pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                       (in_stack_fffffffffffffee8->obj).klass;
              in_stack_fffffffffffffee8 = pCVar33;
              if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                System_Text_StringBuilder__AppendLine_3b044f0
                          ((System_Text_StringBuilder_o *)pSVar7,"```csharp",(MethodInfo *)0x0);
                in_stack_fffffffffffffee8 = pCVar33;
                if (pSVar25->m_Items[0] != (System_String_o *)0x0) {
                  pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                           (pCVar33->obj).klass;
                  pSVar19 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                      (pSVar25->m_Items[0][1].monitor,1,method_02);
                  if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                    System_Text_StringBuilder__AppendLine_3b044f0
                              ((System_Text_StringBuilder_o *)pSVar7,pSVar19,(MethodInfo *)0x0);
                    pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                             (pCVar33->obj).klass;
                    if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                      System_Text_StringBuilder__AppendLine_3b044f0
                                ((System_Text_StringBuilder_o *)pSVar7,"```",(MethodInfo *)0x0);
                      goto label_0427e324;
                    }
                  }
                }
              }
            }
          }
          else {
label_0427e324:
            if ((*(char *)((long)pSVar25->m_Items + 9) == '\0') &&
               ((*(char *)(pSVar25->m_Items + 1) == '\0' ||
                ((pSVar25->m_Items[5] != (System_String_o *)0x0 &&
                 (pSVar25->m_Items[5][1].klass != (System_String_c *)0x0)))))) {
              pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                       (in_stack_fffffffffffffee8->obj).klass;
              if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                pCVar33 = in_stack_fffffffffffffee8;
                System_Text_StringBuilder__AppendLine_3b044f0
                          ((System_Text_StringBuilder_o *)pSVar7,"### Initialization",(MethodInfo *)0x0);
                pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                         (in_stack_fffffffffffffee8->obj).klass;
                in_stack_fffffffffffffee8 = pCVar33;
                if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                  System_Text_StringBuilder__AppendLine_3b044f0
                            ((System_Text_StringBuilder_o *)pSVar7,"```csharp",(MethodInfo *)0x0);
                  __this_04 = (System_String_o **)pSVar25->m_Items[5];
                  uVar35 = 0;
                  in_stack_fffffffffffffee8 = pCVar33;
                  if ((Il2CppClass *)__this_04 != (Il2CppClass *)0x0) {
                    uVar15 = *(uint *)&(((Il2CppClass *)__this_04)->_1).namespaze;
                    in_stack_fffffffffffffef8 = pIVar17;
                    if (0 < (int)uVar15) {
                      lVar27 = 0;
                      do {
                        plVar29 = (long *)__this_04;
                        if (uVar15 <= (uint)lVar27) goto label_0427e7ce;
                        pvVar11 = (&(((Il2CppClass *)__this_04)->_1).byval_arg.data)[lVar27];
                        in_stack_fffffffffffffee8 = pCVar33;
                        pIVar17 = in_stack_fffffffffffffef8;
                        if (pvVar11 == (void *)0x0) goto label_0427e7ba;
                        pSVar19 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetParametersStr
                                            ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                                             in_stack_fffffffffffffef8,
                                             *(CustomLogic_Editor_Models_CLParameter_array **)
                                              ((long)pvVar11 + 0x18),0,(MethodInfo *)in_RCX);
                        in_R8 = (MethodInfo_3503280 *)0x0;
                        pSVar25 = (System_String_array *)
                                  System_String__Concat_3af7470
                                            ((System_String_o *)pSVar25->max_length,"(",pSVar19,
                                             ")",(MethodInfo *)0x0);
                        in_stack_fffffffffffffee8 = pCVar33;
                        pIVar17 = in_stack_fffffffffffffef8;
                        if (*(long *)((long)pvVar11 + 0x20) == 0) goto label_0427e7ba;
                        in_RCX = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
                        pIVar17 = (((CustomLogic_Editor_Models_CLType_array *)in_RCX)->obj).klass;
                        bVar14 = System_String__IsNullOrEmpty
                                           (*(System_String_o **)(*(long *)((long)pvVar11 + 0x20) + 0x10),
                                            (MethodInfo *)0x0);
                        if ((char)bVar14 == '\0') {
                          in_stack_fffffffffffffee8 = pCVar33;
                          pIVar17 = in_stack_fffffffffffffef8;
                          if (*(long *)((long)pvVar11 + 0x20) == 0) goto label_0427e7ba;
                          pSVar19 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                              (*(System_String_o **)(*(long *)((long)pvVar11 + 0x20) + 0x10),0
                                               ,method_03);
                          in_RCX = &" // ";
                          pIVar17 = (Il2CppClass *)
                                    System_String__Concat_3ae5ba0(" // ",pSVar19,(MethodInfo *)0x0);
                        }
                        pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                 (pCVar33->obj).klass;
                        pSVar19 = System_String__Concat_3ae5ba0
                                            ((System_String_o *)pSVar25,(System_String_o *)pIVar17,
                                             (MethodInfo *)0x0);
                        in_stack_fffffffffffffee8 = pCVar33;
                        pIVar17 = in_stack_fffffffffffffef8;
                        if (pSVar7 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                        goto label_0427e7ba;
                        pSVar25 = in_stack_ffffffffffffff00;
                        System_Text_StringBuilder__AppendLine_3b044f0
                                  ((System_Text_StringBuilder_o *)pSVar7,pSVar19,(MethodInfo *)0x0);
                        lVar27 = lVar27 + 1;
                        uVar35 = (uint)lVar27;
                        uVar15 = *(uint *)&(((Il2CppClass *)__this_04)->_1).namespaze;
                        in_stack_ffffffffffffff00 = pSVar25;
                      } while ((int)uVar35 < (int)uVar15);
                    }
                    pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                             (pCVar33->obj).klass;
                    in_stack_fffffffffffffee8 = pCVar33;
                    pIVar17 = in_stack_fffffffffffffef8;
                    if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                      System_Text_StringBuilder__AppendLine_3b044f0
                                ((System_Text_StringBuilder_o *)pSVar7,"```",(MethodInfo *)0x0);
                      pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                               (pCVar33->obj).klass;
                      pIVar17 = in_stack_fffffffffffffef8;
                      if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                        System_Text_StringBuilder__AppendLine
                                  ((System_Text_StringBuilder_o *)pSVar7,(MethodInfo *)0x0);
                        goto label_0427e4e7;
                      }
                    }
                  }
                }
              }
            }
            else {
label_0427e4e7:
              if ((pSVar25->m_Items[7] == (System_String_o *)0x0) ||
                 (pSVar25->m_Items[7][1].klass == (System_String_c *)0x0)) {
label_0427e539:
                if ((pSVar25->m_Items[6] == (System_String_o *)0x0) ||
                   (pSVar25->m_Items[6][1].klass == (System_String_c *)0x0)) {
label_0427e58b:
                  if ((pSVar25->m_Items[9] == (System_String_o *)0x0) ||
                     (pSVar25->m_Items[9][1].klass == (System_String_c *)0x0)) {
label_0427e5dd:
                    if ((pSVar25->m_Items[8] == (System_String_o *)0x0) ||
                       (pSVar25->m_Items[8][1].klass == (System_String_c *)0x0)) {
label_0427e62f:
                      __this_00 = (in_stack_fffffffffffffef8->_1).this_arg.data;
                      if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                        System_Collections_Generic_Dictionary_object__int___GetEnumerator
                                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                                   (auStack_e0 + 0x30),__this_00,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_CustomLogic_Editor_M);
                        auStack_e0._32_8_ = pSStack_90;
                        auStack_e0._0_8_ = CONCAT44(uStack_ac,auStack_e0._48_4_);
                        auStack_e0._16_8_ = _Stack_a0;
                        auStack_e0._24_8_ = pcStack_98;
                        auStack_e0._8_8_ = pIStack_a8;
                        while (__this_01.fields._8_8_ = in_stack_fffffffffffffee8,
                              __this_01.fields._dictionary =
                                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                   in_stack_fffffffffffffee0,
                              __this_01.fields._current.fields.key._0_4_ = in_stack_fffffffffffffef0,
                              __this_01.fields._current.fields.key._4_4_ = uVar35,
                              __this_01.fields._current.fields.value = (Il2CppObject *)pIVar17,
                              __this_01.fields._32_8_ = in_stack_ffffffffffffff00,
                              bVar14 = System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext
                                                 (__this_01,(MethodInfo_324FC20 *)auStack_e0),
                              (char)bVar14 != '\0') {
                          auVar32 = il2cpp_runtime_helper_04284760((MethodInfo_324FC20 *)auStack_e0,MethodInfo_KeyValuePair_2_CustomLogic_Editor_Models_CLType_System_I);
                          IStack_f0.klass = auVar32._0_8_;
                          IStack_f0.monitor = (void *)CONCAT44(IStack_f0.monitor._4_4_,auVar32._8_4_);
                          __this_05.fields._8_8_ = &lStack_f8;
                          __this_05.fields.key = &IStack_f0;
                          System_Collections_Generic_KeyValuePair_object__int___Deconstruct
                                    (__this_05,(Il2CppObject **)&stack0xfffffffffffffef4,MethodInfo_Void_Deconstruct,in_R8);
                          pCVar33 = in_stack_fffffffffffffee8;
                          uVar15 = uVar35;
                          if (lStack_f8 == 0) goto label_0427e7bf;
                          pSVar25 = (System_String_array *)(ulong)uVar35;
                          arg1 = *(Il2CppObject **)(lStack_f8 + 0x18);
                          pSVar8 = (in_stack_fffffffffffffef8->_1).image;
                          pSVar19 = (System_String_o *)
                                    (*(pSVar8->vtable)._4_unknown.methodPtr)
                                              (in_stack_fffffffffffffef8,lStack_f8,
                                               (pSVar8->vtable)._4_unknown.method);
                          in_stack_fffffffffffffef8 = pIVar17;
                          if (pSVar19 == (System_String_o *)0x0) goto label_0427e7c4;
                          __this_04 = (System_String_o **)
                                      System_String__Substring_3af8da0
                                                (pSVar19,3,(pSVar19->fields)._stringLength + -3,
                                                 (MethodInfo *)0x0);
                          pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                   (in_stack_fffffffffffffee8->obj).klass;
                          auStack_e0._48_4_ = uVar35;
                          arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_e0 + 0x30);
                          in_R8 = (MethodInfo_3503280 *)0x0;
                          in_stack_fffffffffffffef8 = pIVar17;
                          pSVar19 = System_String__Format_3af7930
                                              ("[^{0}]: [{1}](../{2})",arg0,arg1,(Il2CppObject *)__this_04,
                                               (MethodInfo *)0x0);
                          if (pSVar7 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0
                             ) goto label_0427e7c9;
                          pIVar17 = in_stack_fffffffffffffef8;
                          System_Text_StringBuilder__AppendLine_3b044f0
                                    ((System_Text_StringBuilder_o *)pSVar7,pSVar19,(MethodInfo *)0x0);
                          in_stack_fffffffffffffee8 = pCVar33;
                          uVar35 = uVar15;
                        }
                        __this_02.fields._8_8_ = in_stack_fffffffffffffee8;
                        __this_02.fields._dictionary =
                             (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                             in_stack_fffffffffffffee0;
                        __this_02.fields._current.fields.key._0_4_ = in_stack_fffffffffffffef0;
                        __this_02.fields._current.fields.key._4_4_ = uVar35;
                        __this_02.fields._current.fields.value = (Il2CppObject *)pIVar17;
                        __this_02.fields._32_8_ = in_stack_ffffffffffffff00;
                        System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose
                                  (__this_02,(MethodInfo_324FD30 *)auStack_e0);
                        pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                 (in_stack_fffffffffffffee8->obj).klass;
                        if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                        {
                          pIVar17 = (pSVar7->obj).klass;
                          (*pIVar17->vtable[3].methodPtr)(pSVar7,pIVar17->vtable[3].method);
                          return;
                        }
                      }
                    }
                    else {
                      pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                               (in_stack_fffffffffffffee8->obj).klass;
                      if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                        System_Text_StringBuilder__AppendLine_3b044f0
                                  ((System_Text_StringBuilder_o *)pSVar7,"### Static Methods",(MethodInfo *)0x0);
                        CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendMethods
                                  ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                                   in_stack_fffffffffffffef8,
                                   (CustomLogic_Editor_Models_CLMethod_array *)pSVar25->m_Items[8],method_07);
                        pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                 (in_stack_fffffffffffffef8->_1).namespaze;
                        if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                        {
                          System_Text_StringBuilder__AppendLine
                                    ((System_Text_StringBuilder_o *)pSVar7,(MethodInfo *)0x0);
                          goto label_0427e62f;
                        }
                      }
                    }
                  }
                  else {
                    pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                             (in_stack_fffffffffffffee8->obj).klass;
                    if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                      System_Text_StringBuilder__AppendLine_3b044f0
                                ((System_Text_StringBuilder_o *)pSVar7,"### Methods",(MethodInfo *)0x0);
                      CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendMethods
                                ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                                 in_stack_fffffffffffffef8,
                                 (CustomLogic_Editor_Models_CLMethod_array *)pSVar25->m_Items[9],method_06);
                      pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                               (in_stack_fffffffffffffef8->_1).namespaze;
                      if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                        System_Text_StringBuilder__AppendLine
                                  ((System_Text_StringBuilder_o *)pSVar7,(MethodInfo *)0x0);
                        goto label_0427e5dd;
                      }
                    }
                  }
                }
                else {
                  pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                           (in_stack_fffffffffffffee8->obj).klass;
                  if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                    System_Text_StringBuilder__AppendLine_3b044f0
                              ((System_Text_StringBuilder_o *)pSVar7,"### Static Properties",(MethodInfo *)0x0);
                    CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendProperties
                              ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                               in_stack_fffffffffffffef8,
                               (CustomLogic_Editor_Models_CLProperty_array *)pSVar25->m_Items[6],method_05);
                    pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                             (in_stack_fffffffffffffef8->_1).namespaze;
                    if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                      System_Text_StringBuilder__AppendLine
                                ((System_Text_StringBuilder_o *)pSVar7,(MethodInfo *)0x0);
                      goto label_0427e58b;
                    }
                  }
                }
              }
              else {
                pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                         (in_stack_fffffffffffffee8->obj).klass;
                if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                  System_Text_StringBuilder__AppendLine_3b044f0
                            ((System_Text_StringBuilder_o *)pSVar7,"### Properties",(MethodInfo *)0x0);
                  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendProperties
                            ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                             in_stack_fffffffffffffef8,
                             (CustomLogic_Editor_Models_CLProperty_array *)pSVar25->m_Items[7],method_04);
                  pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                           (in_stack_fffffffffffffef8->_1).namespaze;
                  if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                    System_Text_StringBuilder__AppendLine
                              ((System_Text_StringBuilder_o *)pSVar7,(MethodInfo *)0x0);
                    goto label_0427e539;
                  }
                }
              }
            }
          }
        }
      }
    }
label_0427e7ba:
    il2cpp_runtime_helper_022b2c90();
    pCVar33 = in_stack_fffffffffffffee8;
    uVar15 = uVar35;
label_0427e7bf:
    in_stack_fffffffffffffef8 = pIVar17;
    il2cpp_runtime_helper_022b2c90();
label_0427e7c4:
    il2cpp_runtime_helper_022b2c90();
label_0427e7c9:
    il2cpp_runtime_helper_022b2c90();
    plVar29 = (long *)__this_04;
    uVar35 = uVar15;
label_0427e7ce:
    il2cpp_runtime_helper_022b2ca0();
  } while( true );
  while (lVar27 = lVar27 + 0x10, (ulong)uVar5 << 4 != lVar27) {
label_0427e9a0:
    if (*(long *)((long)&pIVar10->interfaceType + lVar27) == TypeInfo_IDisposable) {
      ppIVar22 = &(&(pSVar8->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar27)].methodPtr;
      goto label_0427e9cd;
    }
  }
label_0427e9af:
  ppIVar22 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar29,TypeInfo_IDisposable,0);
label_0427e9cd:
  (**ppIVar22)(plVar29,(MethodInfo *)ppIVar22[1]);
label_0427e9d6:
  _Unwind_Resume(auVar32._0_8_);
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator$$GetRelativeFilePath
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetRelativeFilePath (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o* __this, CustomLogic_Editor_Models_CLType_o* type, const MethodInfo* method);
// 0x427d4d0

System_String_o *
CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetRelativeFilePath
          (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *__this,
          CustomLogic_Editor_Models_CLType_o *type,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_Text_StringBuilder_o *pSVar6;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_c *pCVar9;
  System_Collections_Generic_List_string__o *pSVar10;
  Il2CppObject *pIVar11;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_02;
  System_Text_StringBuilder_o **ppSVar12;
  bool_conflict bVar13;
  uint uVar14;
  undefined8 *puVar15;
  System_String_array *values;
  System_String_o *pSVar16;
  System_String_array *pSVar17;
  System_Func_TSource__bool__o *pSVar18;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar19;
  Il2CppMethodPointer *ppIVar20;
  Il2CppObject *arg0;
  long *plVar21;
  System_String_o **in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  int iVar22;
  System_String_array *unaff_RBX;
  System_String_array *__this_03;
  System_String_o **ppSVar23;
  long lVar24;
  long lVar25;
  MethodInfo_3503280 *in_R8;
  long *plVar26;
  bool bVar27;
  undefined1 auVar28 [12];
  System_Collections_Generic_KeyValuePair_object__int__o __this_04;
  undefined8 in_stack_ffffffffffffff18;
  MethodInfo *in_stack_ffffffffffffff20;
  MethodInfo *pMVar29;
  MethodInfo *pMVar30;
  undefined4 in_stack_ffffffffffffff28;
  uint uVar31;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *in_stack_ffffffffffffff30;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *pCVar32;
  System_String_array *in_stack_ffffffffffffff38;
  long lStack_c0;
  Il2CppObject IStack_b8;
  undefined1 auStack_a8 [52];
  undefined4 uStack_74;
  Il2CppRGCTXData *pIStack_70;
  _union_231605 _Stack_68;
  char *pcStack_60;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSStack_58;
  System_String_array *pSStack_50;
  
  __this_03 = (System_String_array *)type;
  if (g_data_057adc6c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"md/static/");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"md/objects/");
    il2cpp_runtime_helper_023445d0(&"md/");
    ppSVar23 = &".md";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc6c = '\x01';
    __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)ppSVar23;
  }
  if (type != (CustomLogic_Editor_Models_CLType_o *)0x0) {
    bVar13 = System_String__IsNullOrEmpty
                       ((System_String_o *)(type->fields)._TypeParameters_k__BackingField,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      if (((char)(type->fields)._IsStatic_k__BackingField == '\0') ||
         (*(char *)((long)&(type->fields)._IsStatic_k__BackingField + 1) == '\0')) {
        pSVar16 = (type->fields)._Name_k__BackingField;
        puVar15 = &"md/objects/";
      }
      else {
        pSVar16 = (type->fields)._Name_k__BackingField;
        puVar15 = &"md/static/";
      }
      pSVar16 = System_String__Concat_3af7150
                          ((System_String_o *)*puVar15,pSVar16,".md",(MethodInfo *)0x0);
      return pSVar16;
    }
    __this_03 = (System_String_array *)&g_data_00000005;
    __this = TypeInfo_string;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    pSVar17 = "md/";
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)values->m_Items;
        values->m_Items[0] = (System_String_o *)"md/";
        il2cpp_runtime_helper_022b4080();
        __this_03 = pSVar17;
        if (1 < (uint)values->max_length) {
          __this_03 = (type->fields)._TypeParameters_k__BackingField;
          __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)(values->m_Items + 1);
          values->m_Items[1] = (System_String_o *)__this_03;
          il2cpp_runtime_helper_022b4080();
          pSVar17 = "/";
          if (2 < (uint)values->max_length) {
            __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)(values->m_Items + 2);
            values->m_Items[2] = (System_String_o *)"/";
            il2cpp_runtime_helper_022b4080();
            __this_03 = pSVar17;
            if (3 < (uint)values->max_length) {
              __this_03 = (System_String_array *)(type->fields)._Name_k__BackingField;
              __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)(values->m_Items + 3);
              values->m_Items[3] = (System_String_o *)__this_03;
              il2cpp_runtime_helper_022b4080();
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = ".md";
                il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                pSVar16 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                return pSVar16;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
      unaff_RBX = values;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar16 = (System_String_o *)(*(__this->klass->vtable)._4_GetRelativeFilePath.methodPtr)();
  if (pSVar16 != (System_String_o *)0x0) {
    pSVar16 = System_String__Substring_3af8da0
                        (pSVar16,3,(pSVar16->fields)._stringLength + -3,(MethodInfo *)0x0);
    return pSVar16;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_50 = unaff_RBX;
  if (g_data_057adc6d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_CustomLogic_Editor_M);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_CLMethod);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_CustomLogic_Editor_Models_CLMethod_Where_C);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_CustomLogic_Editor_Models_CLType_System_I);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CLMethod_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_CLMethod);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_CLMethod);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Deconstruct);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Generate_b__7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Generate_b__7_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Generate_b__7_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"__Sub__");
    il2cpp_runtime_helper_023445d0(&"](../");
    il2cpp_runtime_helper_023445d0(&"__Copy__");
    il2cpp_runtime_helper_023445d0(&"`-`, ");
    il2cpp_runtime_helper_023445d0(&"__Str__");
    il2cpp_runtime_helper_023445d0(&"Overloads operators: ");
    il2cpp_runtime_helper_023445d0(&" // ");
    il2cpp_runtime_helper_023445d0(&"```csharp");
    il2cpp_runtime_helper_023445d0(&"```");
    il2cpp_runtime_helper_023445d0(&"__Eq__");
    il2cpp_runtime_helper_023445d0(&"__Hash__");
    il2cpp_runtime_helper_023445d0(&"`, ");
    il2cpp_runtime_helper_023445d0(&"`");
    il2cpp_runtime_helper_023445d0(&"Inherits from [");
    il2cpp_runtime_helper_023445d0(&"[^{0}]: [{1}](../{2})");
    il2cpp_runtime_helper_023445d0(&"__Div__");
    il2cpp_runtime_helper_023445d0(&"### Static Properties");
    il2cpp_runtime_helper_023445d0(&"### Properties");
    il2cpp_runtime_helper_023445d0(&"(");
    il2cpp_runtime_helper_023445d0(&"`*`, ");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&"### Remarks");
    il2cpp_runtime_helper_023445d0(&"`==`, ");
    il2cpp_runtime_helper_023445d0(&"### Methods");
    il2cpp_runtime_helper_023445d0(&"### Initialization");
    il2cpp_runtime_helper_023445d0(&"__Mul__");
    il2cpp_runtime_helper_023445d0(&"# ");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"`+`, ");
    il2cpp_runtime_helper_023445d0(&"__Add__");
    il2cpp_runtime_helper_023445d0(&"### Example");
    il2cpp_runtime_helper_023445d0(&"### Static Methods");
    il2cpp_runtime_helper_023445d0(&"`/`, ");
    g_data_057adc6d = '\x01';
  }
  uVar31 = 0;
  auStack_a8._16_8_ = (InvokerMethod)0x0;
  auStack_a8._24_8_ = (char *)0x0;
  auStack_a8._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_a8._8_8_ = (Il2CppRGCTXData *)0x0;
  auStack_a8._32_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  IStack_b8.klass = (Il2CppClass *)0x0;
  IStack_b8.monitor = (void *)0x0;
  lStack_c0 = 0;
  pCVar32 = in_stack_ffffffffffffff30;
  if (__this_03 == (System_String_array *)0x0) goto label_0427e7ba;
  bVar27 = false;
  if (__this_03->m_Items[9] != (System_String_o *)0x0) {
    bVar27 = *(int *)&__this_03->m_Items[9][1].klass != 0;
  }
  pSVar6 = (__this->fields)._sb;
  if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
  pMVar29 = (MethodInfo *)&(__this->fields)._sb;
  System_Text_StringBuilder__Clear(pSVar6,(MethodInfo *)0x0);
  pSVar6 = *(System_Text_StringBuilder_o **)pMVar29;
  pSVar16 = System_String__Concat_3ae5ba0
                      ("# ",(System_String_o *)__this_03->max_length,(MethodInfo *)0x0);
  in_stack_ffffffffffffff20 = pMVar29;
  pCVar32 = in_stack_ffffffffffffff30;
  if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
  System_Text_StringBuilder__AppendLine_3b044f0(pSVar6,pSVar16,(MethodInfo *)0x0);
  plVar26 = (long *)__this;
  if ((*(char *)((long)__this_03->m_Items + 10) != '\0') && (__this_03->m_Items[4] != (System_String_o *)0x0))
  {
    pSVar6 = (System_Text_StringBuilder_o *)pMVar29->methodPointer;
    pSVar17 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    in_stack_ffffffffffffff20 = pMVar29;
    pCVar32 = in_stack_ffffffffffffff30;
    if (pSVar17 == (System_String_array *)0x0) goto label_0427e7ba;
    if ((int)pSVar17->max_length == 0) goto label_0427e7ce;
    pSVar17->m_Items[0] = "Inherits from [";
    il2cpp_runtime_helper_022b4080(pSVar17->m_Items);
    pSVar16 = CustomLogic_Editor_Models_CLType__get_BaseTypeName
                        ((CustomLogic_Editor_Models_CLType_o *)__this_03,(MethodInfo *)0x0);
    if ((uint)pSVar17->max_length < 2) goto label_0427e7ce;
    pSVar17->m_Items[1] = pSVar16;
    il2cpp_runtime_helper_022b4080(pSVar17->m_Items + 1);
    if ((uint)pSVar17->max_length < 3) goto label_0427e7ce;
    pSVar17->m_Items[2] = "](../";
    il2cpp_runtime_helper_022b4080(pSVar17->m_Items + 2);
    pSVar16 = (System_String_o *)
              (*(__this->klass->vtable)._4_GetRelativeFilePath.methodPtr)
                        (__this,__this_03->m_Items[4],(__this->klass->vtable)._4_GetRelativeFilePath.method);
    in_stack_ffffffffffffff20 = pMVar29;
    pCVar32 = in_stack_ffffffffffffff30;
    if (pSVar16 == (System_String_o *)0x0) goto label_0427e7ba;
    in_RCX = (System_String_o **)0x0;
    pSVar16 = System_String__Substring_3af8da0
                        (pSVar16,3,(pSVar16->fields)._stringLength + -3,(MethodInfo *)0x0);
    if ((uint)pSVar17->max_length < 4) goto label_0427e7ce;
    pSVar17->m_Items[3] = pSVar16;
    il2cpp_runtime_helper_022b4080(pSVar17->m_Items + 3);
    if ((uint)pSVar17->max_length < 5) goto label_0427e7ce;
    pSVar17->m_Items[4] = ")";
    il2cpp_runtime_helper_022b4080(pSVar17->m_Items + 4);
    pSVar16 = System_String__Concat_3af7570(pSVar17,(MethodInfo *)0x0);
    in_stack_ffffffffffffff20 = pMVar29;
    pCVar32 = in_stack_ffffffffffffff30;
    if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine_3b044f0(pSVar6,pSVar16,(MethodInfo *)0x0);
  }
  in_stack_ffffffffffffff20 = pMVar29;
  pCVar32 = in_stack_ffffffffffffff30;
  if (__this_03->m_Items[0] == (System_String_o *)0x0) goto label_0427e7ba;
  pMVar30 = pMVar29;
  bVar13 = System_String__IsNullOrEmpty((System_String_o *)__this_03->m_Items[0]->fields,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    in_stack_ffffffffffffff20 = pMVar30;
    pCVar32 = in_stack_ffffffffffffff30;
    if ((System_Text_StringBuilder_o *)pMVar29->methodPointer == (System_Text_StringBuilder_o *)0x0)
    goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine
              ((System_Text_StringBuilder_o *)pMVar29->methodPointer,(MethodInfo *)0x0);
    in_stack_ffffffffffffff20 = pMVar30;
    pCVar32 = in_stack_ffffffffffffff30;
    if (__this_03->m_Items[0] == (System_String_o *)0x0) goto label_0427e7ba;
    pSVar6 = (System_Text_StringBuilder_o *)pMVar29->methodPointer;
    pSVar16 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                        ((System_String_o *)__this_03->m_Items[0]->fields,0,method_00);
    in_stack_ffffffffffffff20 = pMVar30;
    pCVar32 = in_stack_ffffffffffffff30;
    if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine_3b044f0(pSVar6,pSVar16,(MethodInfo *)0x0);
    in_stack_ffffffffffffff20 = pMVar30;
    pCVar32 = in_stack_ffffffffffffff30;
    if ((System_Text_StringBuilder_o *)pMVar29->methodPointer == (System_Text_StringBuilder_o *)0x0)
    goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine
              ((System_Text_StringBuilder_o *)pMVar29->methodPointer,(MethodInfo *)0x0);
  }
  in_stack_ffffffffffffff20 = pMVar30;
  pCVar32 = in_stack_ffffffffffffff30;
  if (__this_03->m_Items[0] == (System_String_o *)0x0) goto label_0427e7ba;
  uVar14 = 0;
  bVar13 = System_String__IsNullOrEmpty((System_String_o *)__this_03->m_Items[0][1].klass,(MethodInfo *)0x0);
  in_stack_ffffffffffffff30 = __this;
  pSVar17 = __this_03;
  if (bVar27) {
    pSVar16 = __this_03->m_Items[9];
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      pSVar17 = __this_03;
    }
    else {
      pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (pSVar18 == (System_Func_TSource__bool__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)**(long **)(TypeInfo_c + 0xb8);
      pSVar18 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CLMethod_bool);
      in_RCX = (System_String_o **)0x0;
      System_Func_object__bool____ctor();
      lVar24 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__bool__o **)(lVar24 + 8) = pSVar18;
      il2cpp_runtime_helper_022b4080(lVar24 + 8,pSVar18);
    }
    uVar14 = System_Linq_Enumerable__Any_object__2504f10
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar16,pSVar18,MethodInfo_Boolean_Any_CLMethod);
    uVar14 = uVar14 & 0xff;
    plVar26 = (long *)__this;
  }
  in_stack_ffffffffffffff20 = pMVar30;
  in_stack_ffffffffffffff38 = pSVar17;
  if ((char)bVar13 == '\x01' && uVar14 == 0) goto label_0427e268;
  __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar26;
  __this_03 = pSVar17;
  pCVar32 = in_stack_ffffffffffffff30;
  if ((System_Text_StringBuilder_o *)pMVar30->methodPointer == (System_Text_StringBuilder_o *)0x0)
  goto label_0427e7ba;
  System_Text_StringBuilder__AppendLine_3b044f0
            ((System_Text_StringBuilder_o *)pMVar30->methodPointer,"### Remarks",(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pCVar32 = in_stack_ffffffffffffff30;
    if (pSVar17->m_Items[0] == (System_String_o *)0x0) goto label_0427e7ba;
    pSVar6 = (System_Text_StringBuilder_o *)pMVar30->methodPointer;
    pSVar16 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                        ((System_String_o *)pSVar17->m_Items[0][1].klass,0,method_01);
    pCVar32 = in_stack_ffffffffffffff30;
    if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine_3b044f0(pSVar6,pSVar16,(MethodInfo *)0x0);
    pCVar32 = in_stack_ffffffffffffff30;
    if ((System_Text_StringBuilder_o *)pMVar30->methodPointer == (System_Text_StringBuilder_o *)0x0)
    goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine
              ((System_Text_StringBuilder_o *)pMVar30->methodPointer,(MethodInfo *)0x0);
  }
  if (uVar14 == 0) goto label_0427e268;
  pCVar32 = in_stack_ffffffffffffff30;
  if ((System_Text_StringBuilder_o *)pMVar30->methodPointer == (System_Text_StringBuilder_o *)0x0)
  goto label_0427e7ba;
  System_Text_StringBuilder__AppendLine_3b044f0
            ((System_Text_StringBuilder_o *)pMVar30->methodPointer,"Overloads operators: ",(MethodInfo *)0x0);
  pSVar16 = pSVar17->m_Items[9];
  plVar26 = &TypeInfo_c;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (pSVar18 == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar18 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CLMethod_bool);
    in_RCX = (System_String_o **)0x0;
    System_Func_object__bool____ctor();
    lVar24 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar24 + 0x10) = pSVar18;
    il2cpp_runtime_helper_022b4080(lVar24 + 0x10,pSVar18);
  }
  bVar13 = System_Linq_Enumerable__Any_object__2504f10
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar16,pSVar18,MethodInfo_Boolean_Any_CLMethod);
  __this_03 = "";
  if ((char)bVar13 == '\0') goto label_0427e268;
  pSVar16 = pSVar17->m_Items[9];
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
    pMVar29 = in_stack_ffffffffffffff20;
  }
  else {
    pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
    pMVar29 = in_stack_ffffffffffffff20;
  }
  if (pSVar18 == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar18 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CLMethod_bool);
    System_Func_object__bool____ctor();
    lVar24 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar24 + 0x18) = pSVar18;
    il2cpp_runtime_helper_022b4080(lVar24 + 0x18,pSVar18);
  }
  pSVar19 = System_Linq_Enumerable__Where_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar16,pSVar18,MethodInfo_IEnumerable_1_CustomLogic_Editor_Models_CLMethod_Where_C);
  __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar26;
  in_stack_ffffffffffffff20 = pMVar29;
  pCVar32 = in_stack_ffffffffffffff30;
  if (pSVar19 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) goto label_0427e7ba;
  pSVar7 = pSVar19->klass;
  uVar1._0_1_ = (pSVar7->_2).rank;
  uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar8 = (pSVar7->_1).interfaceOffsets;
    lVar24 = 0;
    do {
      if (*(long *)((long)&pIVar8->interfaceType + lVar24) == TypeInfo_IEnumerable_CLMethod) {
        ppIVar20 = &pSVar7->vtable[*(int *)((long)&pIVar8->offset + lVar24)].methodPtr;
        goto label_0427def1;
      }
      lVar24 = lVar24 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar24);
  }
  ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar19,TypeInfo_IEnumerable_CLMethod,0);
label_0427def1:
  plVar26 = (long *)(**ppIVar20)();
  if ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar26 ==
      (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x0) goto label_0427e7d8;
  lVar24 = 0;
label_0427df10:
  pCVar9 = ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar26)->klass;
  uVar2._0_1_ = (pCVar9->_2).rank;
  uVar2._1_1_ = (pCVar9->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar8 = (pCVar9->_1).interfaceOffsets;
    lVar25 = 0;
    do {
      if (*(long *)((long)&pIVar8->interfaceType + lVar25) == TypeInfo_IEnumerator) {
        ppIVar20 = &(&(pCVar9->vtable)._0_Equals)[*(int *)((long)&pIVar8->offset + lVar25)].methodPtr;
        goto label_0427df73;
      }
      lVar25 = lVar25 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar25);
  }
  ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar26,TypeInfo_IEnumerator,0);
label_0427df73:
  pSVar16 = (System_String_o *)(**ppIVar20)();
  if ((char)pSVar16 == '\0') {
    iVar22 = 0x16;
    goto label_0427e1ac;
  }
  pCVar9 = ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar26)->klass;
  uVar3._0_1_ = (pCVar9->_2).rank;
  uVar3._1_1_ = (pCVar9->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar8 = (pCVar9->_1).interfaceOffsets;
    lVar25 = 0;
    do {
      if (*(long *)((long)&pIVar8->interfaceType + lVar25) == TypeInfo_IEnumerator_CLMethod) {
        ppIVar20 = &(&(pCVar9->vtable)._0_Equals)[*(int *)((long)&pIVar8->offset + lVar25)].methodPtr;
        goto label_0427dfe3;
      }
      lVar25 = lVar25 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar25);
  }
  ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar26,TypeInfo_IEnumerator_CLMethod,0);
label_0427dfe3:
  lVar25 = (**ppIVar20)(plVar26);
  if (lVar25 != 0) {
    bVar13 = System_String__op_Equality(*(System_String_o **)(lVar25 + 0x28),"__Add__",(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      __this_03 = (System_String_array *)
                  System_String__Concat_3ae5ba0((System_String_o *)__this_03,"`+`, ",(MethodInfo *)0x0);
    }
    bVar13 = System_String__op_Equality(*(System_String_o **)(lVar25 + 0x28),"__Sub__",(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      __this_03 = (System_String_array *)
                  System_String__Concat_3ae5ba0((System_String_o *)__this_03,"`-`, ",(MethodInfo *)0x0);
    }
    bVar13 = System_String__op_Equality(*(System_String_o **)(lVar25 + 0x28),"__Mul__",(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      __this_03 = (System_String_array *)
                  System_String__Concat_3ae5ba0((System_String_o *)__this_03,"`*`, ",(MethodInfo *)0x0);
    }
    bVar13 = System_String__op_Equality(*(System_String_o **)(lVar25 + 0x28),"__Div__",(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      __this_03 = (System_String_array *)
                  System_String__Concat_3ae5ba0((System_String_o *)__this_03,"`/`, ",(MethodInfo *)0x0);
    }
    bVar13 = System_String__op_Equality(*(System_String_o **)(lVar25 + 0x28),"__Eq__",(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      __this_03 = (System_String_array *)
                  System_String__Concat_3ae5ba0((System_String_o *)__this_03,"`==`, ",(MethodInfo *)0x0);
    }
    bVar13 = System_String__op_Equality(*(System_String_o **)(lVar25 + 0x28),"__Copy__",(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      in_R8 = (MethodInfo_3503280 *)0x0;
      __this_03 = (System_String_array *)
                  System_String__Concat_3af7470
                            ((System_String_o *)__this_03,"`",*(System_String_o **)(lVar25 + 0x28),
                             "`, ",(MethodInfo *)0x0);
    }
    bVar13 = System_String__op_Equality(*(System_String_o **)(lVar25 + 0x28),"__Hash__",(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      in_R8 = (MethodInfo_3503280 *)0x0;
      __this_03 = (System_String_array *)
                  System_String__Concat_3af7470
                            ((System_String_o *)__this_03,"`",*(System_String_o **)(lVar25 + 0x28),
                             "`, ",(MethodInfo *)0x0);
    }
    bVar13 = System_String__op_Equality(*(System_String_o **)(lVar25 + 0x28),"__Str__",(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      in_R8 = (MethodInfo_3503280 *)0x0;
      __this_03 = (System_String_array *)
                  System_String__Concat_3af7470
                            ((System_String_o *)__this_03,"`",*(System_String_o **)(lVar25 + 0x28),
                             "`, ",(MethodInfo *)0x0);
    }
    goto label_0427df10;
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_0427e7d8:
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar28 = il2cpp_runtime_helper_022fefe0();
      iVar22 = 0;
      if (auVar28._8_4_ != 1) {
        if ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar26 ==
            (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x0) goto label_0427e9d6;
        pCVar9 = ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar26)->klass;
        uVar5._0_1_ = (pCVar9->_2).rank;
        uVar5._1_1_ = (pCVar9->_2).minimumAlignment;
        if ((ulong)uVar5 == 0) goto label_0427e9af;
        pIVar8 = (pCVar9->_1).interfaceOffsets;
        lVar24 = 0;
        goto label_0427e9a0;
      }
      plVar21 = (long *)__cxa_begin_catch();
      lVar24 = *plVar21;
      pSVar16 = (System_String_o *)__cxa_end_catch();
label_0427e1ac:
      in_RCX = (System_String_o **)pMVar29;
      if ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar26 !=
          (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x0) {
        pCVar9 = ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar26)->klass;
        uVar4._0_1_ = (pCVar9->_2).rank;
        uVar4._1_1_ = (pCVar9->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar8 = (pCVar9->_1).interfaceOffsets;
          lVar25 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar25) == TypeInfo_IDisposable) {
              ppIVar20 = &(&(pCVar9->vtable)._0_Equals)[*(int *)((long)&pIVar8->offset + lVar25)].methodPtr;
              goto label_0427e20d;
            }
            lVar25 = lVar25 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar25);
        }
        ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar26,TypeInfo_IDisposable,0);
        in_RCX = (System_String_o **)pMVar29;
label_0427e20d:
        pSVar16 = (System_String_o *)(**ppIVar20)(plVar26);
      }
      pMVar29 = (MethodInfo *)in_RCX;
    } while (lVar24 != 0);
    if ((iVar22 != 0x16) && (iVar22 != 0)) {
      return pSVar16;
    }
    __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar26;
    in_stack_ffffffffffffff20 = (MethodInfo *)in_RCX;
    pCVar32 = in_stack_ffffffffffffff30;
    if (__this_03 != (System_String_array *)0x0) {
      pSVar16 = System_String__Substring_3af8da0
                          ((System_String_o *)__this_03,0,*(int *)&__this_03->bounds + -2,(MethodInfo *)0x0);
      in_stack_ffffffffffffff20 = (MethodInfo *)in_RCX;
      pCVar32 = in_stack_ffffffffffffff30;
      if ((System_Text_StringBuilder_o *)((MethodInfo *)in_RCX)->methodPointer !=
          (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__AppendLine_3b044f0
                  ((System_Text_StringBuilder_o *)((MethodInfo *)in_RCX)->methodPointer,pSVar16,
                   (MethodInfo *)0x0);
        pSVar17 = in_stack_ffffffffffffff38;
label_0427e268:
        __this_03 = pSVar17;
        __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar26;
        pCVar32 = in_stack_ffffffffffffff30;
        if (__this_03->m_Items[0] != (System_String_o *)0x0) {
          bVar13 = System_String__IsNullOrEmpty(__this_03->m_Items[0][1].monitor,(MethodInfo *)0x0);
          pCVar32 = in_stack_ffffffffffffff30;
          if ((char)bVar13 == '\0') {
            if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff20->methodPointer !=
                (System_Text_StringBuilder_o *)0x0) {
              pMVar29 = in_stack_ffffffffffffff20;
              System_Text_StringBuilder__AppendLine_3b044f0
                        ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff20->methodPointer,"### Example",
                         (MethodInfo *)0x0);
              ppSVar12 = (System_Text_StringBuilder_o **)&in_stack_ffffffffffffff20->methodPointer;
              in_stack_ffffffffffffff20 = pMVar29;
              if (*ppSVar12 != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__AppendLine_3b044f0(*ppSVar12,"```csharp",(MethodInfo *)0x0);
                in_stack_ffffffffffffff20 = pMVar29;
                if (__this_03->m_Items[0] != (System_String_o *)0x0) {
                  pSVar6 = (System_Text_StringBuilder_o *)pMVar29->methodPointer;
                  pSVar16 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                      (__this_03->m_Items[0][1].monitor,1,method_02);
                  if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__AppendLine_3b044f0(pSVar6,pSVar16,(MethodInfo *)0x0);
                    if ((System_Text_StringBuilder_o *)pMVar29->methodPointer !=
                        (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__AppendLine_3b044f0
                                ((System_Text_StringBuilder_o *)pMVar29->methodPointer,"```",
                                 (MethodInfo *)0x0);
                      goto label_0427e324;
                    }
                  }
                }
              }
            }
          }
          else {
label_0427e324:
            if ((*(char *)((long)__this_03->m_Items + 9) == '\0') &&
               ((*(char *)(__this_03->m_Items + 1) == '\0' ||
                ((__this_03->m_Items[5] != (System_String_o *)0x0 &&
                 (__this_03->m_Items[5][1].klass != (System_String_c *)0x0)))))) {
              if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff20->methodPointer !=
                  (System_Text_StringBuilder_o *)0x0) {
                pMVar29 = in_stack_ffffffffffffff20;
                System_Text_StringBuilder__AppendLine_3b044f0
                          ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff20->methodPointer,
                           "### Initialization",(MethodInfo *)0x0);
                ppSVar12 = (System_Text_StringBuilder_o **)&in_stack_ffffffffffffff20->methodPointer;
                in_stack_ffffffffffffff20 = pMVar29;
                if (*ppSVar12 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__AppendLine_3b044f0(*ppSVar12,"```csharp",(MethodInfo *)0x0);
                  __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)__this_03->m_Items[5];
                  uVar31 = 0;
                  in_stack_ffffffffffffff20 = pMVar29;
                  if (__this != (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x0) {
                    uVar14 = *(uint *)&(__this->fields)._sb;
                    in_stack_ffffffffffffff30 = pCVar32;
                    if (0 < (int)uVar14) {
                      lVar24 = 0;
                      do {
                        plVar26 = (long *)__this;
                        if (uVar14 <= (uint)lVar24) goto label_0427e7ce;
                        pSVar10 = (&(__this->fields)._propertiesHeaders)[lVar24];
                        in_stack_ffffffffffffff20 = pMVar29;
                        pCVar32 = in_stack_ffffffffffffff30;
                        if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) goto label_0427e7ba;
                        pSVar16 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetParametersStr
                                            (in_stack_ffffffffffffff30,
                                             *(CustomLogic_Editor_Models_CLParameter_array **)
                                              &(pSVar10->fields)._size,0,(MethodInfo *)in_RCX);
                        in_R8 = (MethodInfo_3503280 *)0x0;
                        __this_03 = (System_String_array *)
                                    System_String__Concat_3af7470
                                              ((System_String_o *)__this_03->max_length,"(",pSVar16,
                                               ")",(MethodInfo *)0x0);
                        pIVar11 = (pSVar10->fields)._syncRoot;
                        in_stack_ffffffffffffff20 = pMVar29;
                        pCVar32 = in_stack_ffffffffffffff30;
                        if (pIVar11 == (Il2CppObject *)0x0) goto label_0427e7ba;
                        in_RCX = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
                        pSVar16 = (System_String_o *)((MethodInfo *)in_RCX)->methodPointer;
                        bVar13 = System_String__IsNullOrEmpty
                                           ((System_String_o *)pIVar11[1].klass,(MethodInfo *)0x0);
                        if ((char)bVar13 == '\0') {
                          pIVar11 = (pSVar10->fields)._syncRoot;
                          in_stack_ffffffffffffff20 = pMVar29;
                          pCVar32 = in_stack_ffffffffffffff30;
                          if (pIVar11 == (Il2CppObject *)0x0) goto label_0427e7ba;
                          pSVar16 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                              ((System_String_o *)pIVar11[1].klass,0,method_03);
                          in_RCX = &" // ";
                          pSVar16 = System_String__Concat_3ae5ba0(" // ",pSVar16,(MethodInfo *)0x0);
                        }
                        pSVar6 = (System_Text_StringBuilder_o *)pMVar29->methodPointer;
                        pSVar16 = System_String__Concat_3ae5ba0
                                            ((System_String_o *)__this_03,pSVar16,(MethodInfo *)0x0);
                        in_stack_ffffffffffffff20 = pMVar29;
                        pCVar32 = in_stack_ffffffffffffff30;
                        if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
                        __this_03 = in_stack_ffffffffffffff38;
                        System_Text_StringBuilder__AppendLine_3b044f0(pSVar6,pSVar16,(MethodInfo *)0x0);
                        lVar24 = lVar24 + 1;
                        uVar31 = (uint)lVar24;
                        uVar14 = *(uint *)&(__this->fields)._sb;
                        in_stack_ffffffffffffff38 = __this_03;
                      } while ((int)uVar31 < (int)uVar14);
                    }
                    in_stack_ffffffffffffff20 = pMVar29;
                    pCVar32 = in_stack_ffffffffffffff30;
                    if ((System_Text_StringBuilder_o *)pMVar29->methodPointer !=
                        (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__AppendLine_3b044f0
                                ((System_Text_StringBuilder_o *)pMVar29->methodPointer,"```",
                                 (MethodInfo *)0x0);
                      pCVar32 = in_stack_ffffffffffffff30;
                      if ((System_Text_StringBuilder_o *)pMVar29->methodPointer !=
                          (System_Text_StringBuilder_o *)0x0) {
                        System_Text_StringBuilder__AppendLine
                                  ((System_Text_StringBuilder_o *)pMVar29->methodPointer,(MethodInfo *)0x0);
                        goto label_0427e4e7;
                      }
                    }
                  }
                }
              }
            }
            else {
label_0427e4e7:
              if ((__this_03->m_Items[7] == (System_String_o *)0x0) ||
                 (__this_03->m_Items[7][1].klass == (System_String_c *)0x0)) {
label_0427e539:
                if ((__this_03->m_Items[6] == (System_String_o *)0x0) ||
                   (__this_03->m_Items[6][1].klass == (System_String_c *)0x0)) {
label_0427e58b:
                  if ((__this_03->m_Items[9] == (System_String_o *)0x0) ||
                     (__this_03->m_Items[9][1].klass == (System_String_c *)0x0)) {
label_0427e5dd:
                    if ((__this_03->m_Items[8] == (System_String_o *)0x0) ||
                       (__this_03->m_Items[8][1].klass == (System_String_c *)0x0)) {
label_0427e62f:
                      __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
                                  (in_stack_ffffffffffffff30->fields)._typeIndexMap;
                      if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                        System_Collections_Generic_Dictionary_object__int___GetEnumerator
                                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                                   (auStack_a8 + 0x30),__this_00,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_CustomLogic_Editor_M);
                        auStack_a8._32_8_ = pSStack_58;
                        auStack_a8._0_8_ = CONCAT44(uStack_74,auStack_a8._48_4_);
                        auStack_a8._16_8_ = _Stack_68;
                        auStack_a8._24_8_ = pcStack_60;
                        auStack_a8._8_8_ = pIStack_70;
                        while (__this_01.fields._8_8_ = in_stack_ffffffffffffff20,
                              __this_01.fields._dictionary =
                                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                   in_stack_ffffffffffffff18,
                              __this_01.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff28,
                              __this_01.fields._current.fields.key._4_4_ = uVar31,
                              __this_01.fields._current.fields.value = (Il2CppObject *)pCVar32,
                              __this_01.fields._32_8_ = in_stack_ffffffffffffff38,
                              bVar13 = System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext
                                                 (__this_01,(MethodInfo_324FC20 *)auStack_a8),
                              (char)bVar13 != '\0') {
                          auVar28 = il2cpp_runtime_helper_04284760((MethodInfo_324FC20 *)auStack_a8,MethodInfo_KeyValuePair_2_CustomLogic_Editor_Models_CLType_System_I);
                          IStack_b8.klass = auVar28._0_8_;
                          IStack_b8.monitor = (void *)CONCAT44(IStack_b8.monitor._4_4_,auVar28._8_4_);
                          __this_04.fields._8_8_ = &lStack_c0;
                          __this_04.fields.key = &IStack_b8;
                          System_Collections_Generic_KeyValuePair_object__int___Deconstruct
                                    (__this_04,(Il2CppObject **)&stack0xffffffffffffff2c,MethodInfo_Void_Deconstruct,in_R8);
                          pMVar29 = in_stack_ffffffffffffff20;
                          uVar14 = uVar31;
                          if (lStack_c0 == 0) goto label_0427e7bf;
                          __this_03 = (System_String_array *)(ulong)uVar31;
                          pIVar11 = *(Il2CppObject **)(lStack_c0 + 0x18);
                          pSVar16 = (System_String_o *)
                                    (*(in_stack_ffffffffffffff30->klass->vtable)._4_GetRelativeFilePath.
                                      methodPtr)(in_stack_ffffffffffffff30,lStack_c0,
                                                 (in_stack_ffffffffffffff30->klass->vtable).
                                                 _4_GetRelativeFilePath.method);
                          in_stack_ffffffffffffff30 = pCVar32;
                          if (pSVar16 == (System_String_o *)0x0) goto label_0427e7c4;
                          __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                                   System_String__Substring_3af8da0
                                             (pSVar16,3,(pSVar16->fields)._stringLength + -3,(MethodInfo *)0x0
                                             );
                          pSVar6 = (System_Text_StringBuilder_o *)in_stack_ffffffffffffff20->methodPointer;
                          auStack_a8._48_4_ = uVar31;
                          arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_a8 + 0x30);
                          in_R8 = (MethodInfo_3503280 *)0x0;
                          in_stack_ffffffffffffff30 = pCVar32;
                          pSVar16 = System_String__Format_3af7930
                                              ("[^{0}]: [{1}](../{2})",arg0,pIVar11,(Il2CppObject *)__this,
                                               (MethodInfo *)0x0);
                          if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7c9;
                          pCVar32 = in_stack_ffffffffffffff30;
                          System_Text_StringBuilder__AppendLine_3b044f0(pSVar6,pSVar16,(MethodInfo *)0x0);
                          in_stack_ffffffffffffff20 = pMVar29;
                          uVar31 = uVar14;
                        }
                        __this_02.fields._8_8_ = in_stack_ffffffffffffff20;
                        __this_02.fields._dictionary =
                             (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                             in_stack_ffffffffffffff18;
                        __this_02.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff28;
                        __this_02.fields._current.fields.key._4_4_ = uVar31;
                        __this_02.fields._current.fields.value = (Il2CppObject *)pCVar32;
                        __this_02.fields._32_8_ = in_stack_ffffffffffffff38;
                        System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose
                                  (__this_02,(MethodInfo_324FD30 *)auStack_a8);
                        pSVar6 = (System_Text_StringBuilder_o *)in_stack_ffffffffffffff20->methodPointer;
                        if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
                          pSVar16 = (System_String_o *)
                                    (*(pSVar6->klass->vtable)._3_ToString.methodPtr)
                                              (pSVar6,(pSVar6->klass->vtable)._3_ToString.method);
                          return pSVar16;
                        }
                      }
                    }
                    else if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff20->methodPointer !=
                             (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__AppendLine_3b044f0
                                ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff20->methodPointer,
                                 "### Static Methods",(MethodInfo *)0x0);
                      CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendMethods
                                (in_stack_ffffffffffffff30,
                                 (CustomLogic_Editor_Models_CLMethod_array *)__this_03->m_Items[8],method_07);
                      pSVar6 = (in_stack_ffffffffffffff30->fields)._sb;
                      if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
                        System_Text_StringBuilder__AppendLine(pSVar6,(MethodInfo *)0x0);
                        goto label_0427e62f;
                      }
                    }
                  }
                  else if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff20->methodPointer !=
                           (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__AppendLine_3b044f0
                              ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff20->methodPointer,
                               "### Methods",(MethodInfo *)0x0);
                    CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendMethods
                              (in_stack_ffffffffffffff30,
                               (CustomLogic_Editor_Models_CLMethod_array *)__this_03->m_Items[9],method_06);
                    pSVar6 = (in_stack_ffffffffffffff30->fields)._sb;
                    if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__AppendLine(pSVar6,(MethodInfo *)0x0);
                      goto label_0427e5dd;
                    }
                  }
                }
                else if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff20->methodPointer !=
                         (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__AppendLine_3b044f0
                            ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff20->methodPointer,
                             "### Static Properties",(MethodInfo *)0x0);
                  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendProperties
                            (in_stack_ffffffffffffff30,
                             (CustomLogic_Editor_Models_CLProperty_array *)__this_03->m_Items[6],method_05);
                  pSVar6 = (in_stack_ffffffffffffff30->fields)._sb;
                  if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__AppendLine(pSVar6,(MethodInfo *)0x0);
                    goto label_0427e58b;
                  }
                }
              }
              else if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff20->methodPointer !=
                       (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__AppendLine_3b044f0
                          ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff20->methodPointer,
                           "### Properties",(MethodInfo *)0x0);
                CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendProperties
                          (in_stack_ffffffffffffff30,
                           (CustomLogic_Editor_Models_CLProperty_array *)__this_03->m_Items[7],method_04);
                pSVar6 = (in_stack_ffffffffffffff30->fields)._sb;
                if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__AppendLine(pSVar6,(MethodInfo *)0x0);
                  goto label_0427e539;
                }
              }
            }
          }
        }
      }
    }
label_0427e7ba:
    il2cpp_runtime_helper_022b2c90();
    pMVar29 = in_stack_ffffffffffffff20;
    uVar14 = uVar31;
label_0427e7bf:
    in_stack_ffffffffffffff30 = pCVar32;
    il2cpp_runtime_helper_022b2c90();
label_0427e7c4:
    il2cpp_runtime_helper_022b2c90();
label_0427e7c9:
    il2cpp_runtime_helper_022b2c90();
    plVar26 = (long *)__this;
    uVar31 = uVar14;
label_0427e7ce:
    il2cpp_runtime_helper_022b2ca0();
  } while( true );
  while (lVar24 = lVar24 + 0x10, (ulong)uVar5 << 4 != lVar24) {
label_0427e9a0:
    if (*(long *)((long)&pIVar8->interfaceType + lVar24) == TypeInfo_IDisposable) {
      ppIVar20 = &(&(pCVar9->vtable)._0_Equals)[*(int *)((long)&pIVar8->offset + lVar24)].methodPtr;
      goto label_0427e9cd;
    }
  }
label_0427e9af:
  ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar26,TypeInfo_IDisposable,0);
label_0427e9cd:
  (**ppIVar20)(plVar26,(MethodInfo *)ppIVar20[1]);
label_0427e9d6:
  _Unwind_Resume(auVar28._0_8_);
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator$$GetRelativeRefPath
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetRelativeRefPath (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o* __this, CustomLogic_Editor_Models_CLType_o* type, const MethodInfo* method);
// 0x427d670

System_String_o *
CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetRelativeRefPath
          (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *__this,
          CustomLogic_Editor_Models_CLType_o *type,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  CustomLogic_Editor_Models_CLMethod_array *pCVar6;
  System_Text_StringBuilder_o *pSVar7;
  CustomLogic_Editor_Models_XmlInfo_o *pCVar8;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  CustomLogic_Editor_Models_CLType_c *pCVar11;
  CustomLogic_Editor_Models_CLProperty_array *pCVar12;
  CustomLogic_Editor_Models_CLConstructor_array *pCVar13;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  Il2CppObject *arg1;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_02;
  System_String_o **ppSVar14;
  bool_conflict bVar15;
  uint uVar16;
  System_String_o *pSVar17;
  System_String_array *values;
  System_Func_TSource__bool__o *pSVar18;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar19;
  Il2CppMethodPointer *ppIVar20;
  System_String_o *str1;
  Il2CppObject *arg0;
  long *plVar21;
  System_String_o **in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  int iVar22;
  long lVar23;
  long lVar24;
  MethodInfo_3503280 *in_R8;
  long *plVar25;
  bool bVar26;
  undefined1 auVar27 [12];
  System_Collections_Generic_KeyValuePair_object__int__o __this_03;
  undefined8 in_stack_ffffffffffffff30;
  MethodInfo *in_stack_ffffffffffffff38;
  MethodInfo *pMVar28;
  MethodInfo *pMVar29;
  undefined4 in_stack_ffffffffffffff40;
  uint uVar30;
  CustomLogic_Editor_Models_CLType_o *in_stack_ffffffffffffff48;
  CustomLogic_Editor_Models_CLType_o *pCVar31;
  CustomLogic_Editor_Models_CLType_o *in_stack_ffffffffffffff50;
  CustomLogic_Editor_Models_CLType_o *pCVar32;
  long lStack_a8;
  Il2CppObject IStack_a0;
  undefined1 auStack_90 [52];
  undefined4 uStack_5c;
  Il2CppRGCTXData *pIStack_58;
  _union_231605 _Stack_50;
  char *pcStack_48;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSStack_40;
  
  pSVar17 = (System_String_o *)
            (*(__this->klass->vtable)._4_GetRelativeFilePath.methodPtr)
                      (__this,type,(__this->klass->vtable)._4_GetRelativeFilePath.method);
  if (pSVar17 != (System_String_o *)0x0) {
    pSVar17 = System_String__Substring_3af8da0
                        (pSVar17,3,(pSVar17->fields)._stringLength + -3,(MethodInfo *)0x0);
    return pSVar17;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc6d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_CustomLogic_Editor_M);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_CLMethod);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_CustomLogic_Editor_Models_CLMethod_Where_C);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_CustomLogic_Editor_Models_CLType_System_I);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CLMethod_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_CLMethod);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_CLMethod);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Deconstruct);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Generate_b__7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Generate_b__7_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Generate_b__7_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"__Sub__");
    il2cpp_runtime_helper_023445d0(&"](../");
    il2cpp_runtime_helper_023445d0(&"__Copy__");
    il2cpp_runtime_helper_023445d0(&"`-`, ");
    il2cpp_runtime_helper_023445d0(&"__Str__");
    il2cpp_runtime_helper_023445d0(&"Overloads operators: ");
    il2cpp_runtime_helper_023445d0(&" // ");
    il2cpp_runtime_helper_023445d0(&"```csharp");
    il2cpp_runtime_helper_023445d0(&"```");
    il2cpp_runtime_helper_023445d0(&"__Eq__");
    il2cpp_runtime_helper_023445d0(&"__Hash__");
    il2cpp_runtime_helper_023445d0(&"`, ");
    il2cpp_runtime_helper_023445d0(&"`");
    il2cpp_runtime_helper_023445d0(&"Inherits from [");
    il2cpp_runtime_helper_023445d0(&"[^{0}]: [{1}](../{2})");
    il2cpp_runtime_helper_023445d0(&"__Div__");
    il2cpp_runtime_helper_023445d0(&"### Static Properties");
    il2cpp_runtime_helper_023445d0(&"### Properties");
    il2cpp_runtime_helper_023445d0(&"(");
    il2cpp_runtime_helper_023445d0(&"`*`, ");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&"### Remarks");
    il2cpp_runtime_helper_023445d0(&"`==`, ");
    il2cpp_runtime_helper_023445d0(&"### Methods");
    il2cpp_runtime_helper_023445d0(&"### Initialization");
    il2cpp_runtime_helper_023445d0(&"__Mul__");
    il2cpp_runtime_helper_023445d0(&"# ");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"`+`, ");
    il2cpp_runtime_helper_023445d0(&"__Add__");
    il2cpp_runtime_helper_023445d0(&"### Example");
    il2cpp_runtime_helper_023445d0(&"### Static Methods");
    il2cpp_runtime_helper_023445d0(&"`/`, ");
    g_data_057adc6d = '\x01';
  }
  uVar30 = 0;
  auStack_90._16_8_ = (InvokerMethod)0x0;
  auStack_90._24_8_ = (char *)0x0;
  auStack_90._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_90._8_8_ = (Il2CppRGCTXData *)0x0;
  auStack_90._32_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  IStack_a0.klass = (Il2CppClass *)0x0;
  IStack_a0.monitor = (void *)0x0;
  lStack_a8 = 0;
  pCVar31 = in_stack_ffffffffffffff48;
  if (type == (CustomLogic_Editor_Models_CLType_o *)0x0) goto label_0427e7ba;
  pCVar6 = (type->fields)._StaticMethods_k__BackingField;
  bVar26 = false;
  if (pCVar6 != (CustomLogic_Editor_Models_CLMethod_array *)0x0) {
    bVar26 = (int)pCVar6->max_length != 0;
  }
  pSVar7 = (System_Text_StringBuilder_o *)
           (((CustomLogic_Editor_Models_CLType_o *)__this)->fields)._Name_k__BackingField;
  if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
  pMVar28 = (MethodInfo *)&(((CustomLogic_Editor_Models_CLType_o *)__this)->fields)._Name_k__BackingField;
  System_Text_StringBuilder__Clear(pSVar7,(MethodInfo *)0x0);
  pSVar7 = *(System_Text_StringBuilder_o **)pMVar28;
  pSVar17 = System_String__Concat_3ae5ba0("# ",(type->fields)._Name_k__BackingField,(MethodInfo *)0x0)
  ;
  in_stack_ffffffffffffff38 = pMVar28;
  pCVar31 = in_stack_ffffffffffffff48;
  if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
  System_Text_StringBuilder__AppendLine_3b044f0(pSVar7,pSVar17,(MethodInfo *)0x0);
  plVar25 = (long *)__this;
  if ((*(char *)((long)&(type->fields)._IsStatic_k__BackingField + 2) != '\0') &&
     ((type->fields)._Category_k__BackingField != (System_String_o *)0x0)) {
    pSVar7 = (System_Text_StringBuilder_o *)pMVar28->methodPointer;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    in_stack_ffffffffffffff38 = pMVar28;
    pCVar31 = in_stack_ffffffffffffff48;
    if (values == (System_String_array *)0x0) goto label_0427e7ba;
    if ((int)values->max_length == 0) goto label_0427e7ce;
    values->m_Items[0] = "Inherits from [";
    il2cpp_runtime_helper_022b4080(values->m_Items);
    pSVar17 = CustomLogic_Editor_Models_CLType__get_BaseTypeName(type,(MethodInfo *)0x0);
    if ((uint)values->max_length < 2) goto label_0427e7ce;
    values->m_Items[1] = pSVar17;
    il2cpp_runtime_helper_022b4080(values->m_Items + 1);
    if ((uint)values->max_length < 3) goto label_0427e7ce;
    values->m_Items[2] = "](../";
    il2cpp_runtime_helper_022b4080(values->m_Items + 2);
    pSVar17 = (System_String_o *)
              (*((CustomLogic_Editor_Models_CLType_o *)__this)->klass[1]._1.image)
                        (__this,(type->fields)._Category_k__BackingField,
                         ((CustomLogic_Editor_Models_CLType_o *)__this)->klass[1]._1.gc_desc);
    in_stack_ffffffffffffff38 = pMVar28;
    pCVar31 = in_stack_ffffffffffffff48;
    if (pSVar17 == (System_String_o *)0x0) goto label_0427e7ba;
    in_RCX = (System_String_o **)0x0;
    pSVar17 = System_String__Substring_3af8da0
                        (pSVar17,3,(pSVar17->fields)._stringLength + -3,(MethodInfo *)0x0);
    if ((uint)values->max_length < 4) goto label_0427e7ce;
    values->m_Items[3] = pSVar17;
    il2cpp_runtime_helper_022b4080(values->m_Items + 3);
    if ((uint)values->max_length < 5) goto label_0427e7ce;
    values->m_Items[4] = ")";
    il2cpp_runtime_helper_022b4080(values->m_Items + 4);
    pSVar17 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
    in_stack_ffffffffffffff38 = pMVar28;
    pCVar31 = in_stack_ffffffffffffff48;
    if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine_3b044f0(pSVar7,pSVar17,(MethodInfo *)0x0);
  }
  pCVar8 = (type->fields)._Info_k__BackingField;
  in_stack_ffffffffffffff38 = pMVar28;
  pCVar31 = in_stack_ffffffffffffff48;
  if (pCVar8 == (CustomLogic_Editor_Models_XmlInfo_o *)0x0) goto label_0427e7ba;
  pMVar29 = pMVar28;
  bVar15 = System_String__IsNullOrEmpty((pCVar8->fields)._Summary_k__BackingField,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    in_stack_ffffffffffffff38 = pMVar29;
    pCVar31 = in_stack_ffffffffffffff48;
    if ((System_Text_StringBuilder_o *)pMVar28->methodPointer == (System_Text_StringBuilder_o *)0x0)
    goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine
              ((System_Text_StringBuilder_o *)pMVar28->methodPointer,(MethodInfo *)0x0);
    pCVar8 = (type->fields)._Info_k__BackingField;
    in_stack_ffffffffffffff38 = pMVar29;
    pCVar31 = in_stack_ffffffffffffff48;
    if (pCVar8 == (CustomLogic_Editor_Models_XmlInfo_o *)0x0) goto label_0427e7ba;
    pSVar7 = (System_Text_StringBuilder_o *)pMVar28->methodPointer;
    pSVar17 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                        ((pCVar8->fields)._Summary_k__BackingField,0,method_00);
    in_stack_ffffffffffffff38 = pMVar29;
    pCVar31 = in_stack_ffffffffffffff48;
    if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine_3b044f0(pSVar7,pSVar17,(MethodInfo *)0x0);
    in_stack_ffffffffffffff38 = pMVar29;
    pCVar31 = in_stack_ffffffffffffff48;
    if ((System_Text_StringBuilder_o *)pMVar28->methodPointer == (System_Text_StringBuilder_o *)0x0)
    goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine
              ((System_Text_StringBuilder_o *)pMVar28->methodPointer,(MethodInfo *)0x0);
  }
  pCVar8 = (type->fields)._Info_k__BackingField;
  in_stack_ffffffffffffff38 = pMVar29;
  pCVar31 = in_stack_ffffffffffffff48;
  if (pCVar8 == (CustomLogic_Editor_Models_XmlInfo_o *)0x0) goto label_0427e7ba;
  uVar16 = 0;
  bVar15 = System_String__IsNullOrEmpty((pCVar8->fields)._Remarks_k__BackingField,(MethodInfo *)0x0);
  in_stack_ffffffffffffff48 = (CustomLogic_Editor_Models_CLType_o *)__this;
  pCVar32 = type;
  if (bVar26) {
    pCVar6 = (type->fields)._StaticMethods_k__BackingField;
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      pCVar32 = type;
    }
    else {
      pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (pSVar18 == (System_Func_TSource__bool__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)**(long **)(TypeInfo_c + 0xb8);
      pSVar18 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CLMethod_bool);
      in_RCX = (System_String_o **)0x0;
      System_Func_object__bool____ctor();
      lVar23 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__bool__o **)(lVar23 + 8) = pSVar18;
      il2cpp_runtime_helper_022b4080(lVar23 + 8,pSVar18);
    }
    uVar16 = System_Linq_Enumerable__Any_object__2504f10
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pCVar6,pSVar18,MethodInfo_Boolean_Any_CLMethod);
    uVar16 = uVar16 & 0xff;
    plVar25 = (long *)__this;
  }
  in_stack_ffffffffffffff38 = pMVar29;
  in_stack_ffffffffffffff50 = pCVar32;
  if ((char)bVar15 == '\x01' && uVar16 == 0) goto label_0427e268;
  __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar25;
  type = pCVar32;
  pCVar31 = in_stack_ffffffffffffff48;
  if ((System_Text_StringBuilder_o *)pMVar29->methodPointer == (System_Text_StringBuilder_o *)0x0)
  goto label_0427e7ba;
  System_Text_StringBuilder__AppendLine_3b044f0
            ((System_Text_StringBuilder_o *)pMVar29->methodPointer,"### Remarks",(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    pCVar8 = (pCVar32->fields)._Info_k__BackingField;
    pCVar31 = in_stack_ffffffffffffff48;
    if (pCVar8 == (CustomLogic_Editor_Models_XmlInfo_o *)0x0) goto label_0427e7ba;
    pSVar7 = (System_Text_StringBuilder_o *)pMVar29->methodPointer;
    pSVar17 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                        ((pCVar8->fields)._Remarks_k__BackingField,0,method_01);
    pCVar31 = in_stack_ffffffffffffff48;
    if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine_3b044f0(pSVar7,pSVar17,(MethodInfo *)0x0);
    pCVar31 = in_stack_ffffffffffffff48;
    if ((System_Text_StringBuilder_o *)pMVar29->methodPointer == (System_Text_StringBuilder_o *)0x0)
    goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine
              ((System_Text_StringBuilder_o *)pMVar29->methodPointer,(MethodInfo *)0x0);
  }
  if (uVar16 == 0) goto label_0427e268;
  pCVar31 = in_stack_ffffffffffffff48;
  if ((System_Text_StringBuilder_o *)pMVar29->methodPointer == (System_Text_StringBuilder_o *)0x0)
  goto label_0427e7ba;
  System_Text_StringBuilder__AppendLine_3b044f0
            ((System_Text_StringBuilder_o *)pMVar29->methodPointer,"Overloads operators: ",(MethodInfo *)0x0);
  pCVar6 = (pCVar32->fields)._StaticMethods_k__BackingField;
  plVar25 = &TypeInfo_c;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (pSVar18 == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar18 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CLMethod_bool);
    in_RCX = (System_String_o **)0x0;
    System_Func_object__bool____ctor();
    lVar23 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar23 + 0x10) = pSVar18;
    il2cpp_runtime_helper_022b4080(lVar23 + 0x10,pSVar18);
  }
  bVar15 = System_Linq_Enumerable__Any_object__2504f10
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pCVar6,pSVar18,MethodInfo_Boolean_Any_CLMethod);
  type = "";
  if ((char)bVar15 == '\0') goto label_0427e268;
  pCVar6 = (pCVar32->fields)._StaticMethods_k__BackingField;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
    pMVar28 = in_stack_ffffffffffffff38;
  }
  else {
    pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
    pMVar28 = in_stack_ffffffffffffff38;
  }
  if (pSVar18 == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar18 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CLMethod_bool);
    System_Func_object__bool____ctor();
    lVar23 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar23 + 0x18) = pSVar18;
    il2cpp_runtime_helper_022b4080(lVar23 + 0x18,pSVar18);
  }
  pSVar19 = System_Linq_Enumerable__Where_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pCVar6,pSVar18,MethodInfo_IEnumerable_1_CustomLogic_Editor_Models_CLMethod_Where_C);
  __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar25;
  in_stack_ffffffffffffff38 = pMVar28;
  pCVar31 = in_stack_ffffffffffffff48;
  if (pSVar19 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) goto label_0427e7ba;
  pSVar9 = pSVar19->klass;
  uVar1._0_1_ = (pSVar9->_2).rank;
  uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar10 = (pSVar9->_1).interfaceOffsets;
    lVar23 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_IEnumerable_CLMethod) {
        ppIVar20 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar23)].methodPtr;
        goto label_0427def1;
      }
      lVar23 = lVar23 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar23);
  }
  ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar19,TypeInfo_IEnumerable_CLMethod,0);
label_0427def1:
  plVar25 = (long *)(**ppIVar20)();
  if ((CustomLogic_Editor_Models_CLType_o *)plVar25 == (CustomLogic_Editor_Models_CLType_o *)0x0)
  goto label_0427e7d8;
  lVar23 = 0;
label_0427df10:
  pCVar11 = ((CustomLogic_Editor_Models_CLType_o *)plVar25)->klass;
  uVar2._0_1_ = (pCVar11->_2).rank;
  uVar2._1_1_ = (pCVar11->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar10 = (pCVar11->_1).interfaceOffsets;
    lVar24 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IEnumerator) {
        ppIVar20 = &(&(pCVar11->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar24)].methodPtr;
        goto label_0427df73;
      }
      lVar24 = lVar24 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar24);
  }
  ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar25,TypeInfo_IEnumerator,0);
label_0427df73:
  pSVar17 = (System_String_o *)(**ppIVar20)();
  if ((char)pSVar17 == '\0') {
    iVar22 = 0x16;
    goto label_0427e1ac;
  }
  pCVar11 = ((CustomLogic_Editor_Models_CLType_o *)plVar25)->klass;
  uVar3._0_1_ = (pCVar11->_2).rank;
  uVar3._1_1_ = (pCVar11->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar10 = (pCVar11->_1).interfaceOffsets;
    lVar24 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IEnumerator_CLMethod) {
        ppIVar20 = &(&(pCVar11->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar24)].methodPtr;
        goto label_0427dfe3;
      }
      lVar24 = lVar24 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar24);
  }
  ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar25,TypeInfo_IEnumerator_CLMethod,0);
label_0427dfe3:
  lVar24 = (**ppIVar20)(plVar25);
  if (lVar24 != 0) {
    bVar15 = System_String__op_Equality(*(System_String_o **)(lVar24 + 0x28),"__Add__",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      type = (CustomLogic_Editor_Models_CLType_o *)
             System_String__Concat_3ae5ba0((System_String_o *)type,"`+`, ",(MethodInfo *)0x0);
    }
    bVar15 = System_String__op_Equality(*(System_String_o **)(lVar24 + 0x28),"__Sub__",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      type = (CustomLogic_Editor_Models_CLType_o *)
             System_String__Concat_3ae5ba0((System_String_o *)type,"`-`, ",(MethodInfo *)0x0);
    }
    bVar15 = System_String__op_Equality(*(System_String_o **)(lVar24 + 0x28),"__Mul__",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      type = (CustomLogic_Editor_Models_CLType_o *)
             System_String__Concat_3ae5ba0((System_String_o *)type,"`*`, ",(MethodInfo *)0x0);
    }
    bVar15 = System_String__op_Equality(*(System_String_o **)(lVar24 + 0x28),"__Div__",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      type = (CustomLogic_Editor_Models_CLType_o *)
             System_String__Concat_3ae5ba0((System_String_o *)type,"`/`, ",(MethodInfo *)0x0);
    }
    bVar15 = System_String__op_Equality(*(System_String_o **)(lVar24 + 0x28),"__Eq__",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      type = (CustomLogic_Editor_Models_CLType_o *)
             System_String__Concat_3ae5ba0((System_String_o *)type,"`==`, ",(MethodInfo *)0x0);
    }
    bVar15 = System_String__op_Equality(*(System_String_o **)(lVar24 + 0x28),"__Copy__",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      in_R8 = (MethodInfo_3503280 *)0x0;
      type = (CustomLogic_Editor_Models_CLType_o *)
             System_String__Concat_3af7470
                       ((System_String_o *)type,"`",*(System_String_o **)(lVar24 + 0x28),"`, "
                        ,(MethodInfo *)0x0);
    }
    bVar15 = System_String__op_Equality(*(System_String_o **)(lVar24 + 0x28),"__Hash__",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      in_R8 = (MethodInfo_3503280 *)0x0;
      type = (CustomLogic_Editor_Models_CLType_o *)
             System_String__Concat_3af7470
                       ((System_String_o *)type,"`",*(System_String_o **)(lVar24 + 0x28),"`, "
                        ,(MethodInfo *)0x0);
    }
    bVar15 = System_String__op_Equality(*(System_String_o **)(lVar24 + 0x28),"__Str__",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      in_R8 = (MethodInfo_3503280 *)0x0;
      type = (CustomLogic_Editor_Models_CLType_o *)
             System_String__Concat_3af7470
                       ((System_String_o *)type,"`",*(System_String_o **)(lVar24 + 0x28),"`, "
                        ,(MethodInfo *)0x0);
    }
    goto label_0427df10;
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_0427e7d8:
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar27 = il2cpp_runtime_helper_022fefe0();
      iVar22 = 0;
      if (auVar27._8_4_ != 1) {
        if ((CustomLogic_Editor_Models_CLType_o *)plVar25 == (CustomLogic_Editor_Models_CLType_o *)0x0)
        goto label_0427e9d6;
        pCVar11 = ((CustomLogic_Editor_Models_CLType_o *)plVar25)->klass;
        uVar5._0_1_ = (pCVar11->_2).rank;
        uVar5._1_1_ = (pCVar11->_2).minimumAlignment;
        if ((ulong)uVar5 == 0) goto label_0427e9af;
        pIVar10 = (pCVar11->_1).interfaceOffsets;
        lVar23 = 0;
        goto label_0427e9a0;
      }
      plVar21 = (long *)__cxa_begin_catch();
      lVar23 = *plVar21;
      pSVar17 = (System_String_o *)__cxa_end_catch();
label_0427e1ac:
      in_RCX = (System_String_o **)pMVar28;
      if ((CustomLogic_Editor_Models_CLType_o *)plVar25 != (CustomLogic_Editor_Models_CLType_o *)0x0) {
        pCVar11 = ((CustomLogic_Editor_Models_CLType_o *)plVar25)->klass;
        uVar4._0_1_ = (pCVar11->_2).rank;
        uVar4._1_1_ = (pCVar11->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar10 = (pCVar11->_1).interfaceOffsets;
          lVar24 = 0;
          do {
            if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IDisposable) {
              ppIVar20 = &(&(pCVar11->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar24)].methodPtr;
              goto label_0427e20d;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar24);
        }
        ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar25,TypeInfo_IDisposable,0);
        in_RCX = (System_String_o **)pMVar28;
label_0427e20d:
        pSVar17 = (System_String_o *)(**ppIVar20)(plVar25);
      }
      pMVar28 = (MethodInfo *)in_RCX;
    } while (lVar23 != 0);
    if ((iVar22 != 0x16) && (iVar22 != 0)) {
      return pSVar17;
    }
    __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar25;
    in_stack_ffffffffffffff38 = (MethodInfo *)in_RCX;
    pCVar31 = in_stack_ffffffffffffff48;
    if (type != (CustomLogic_Editor_Models_CLType_o *)0x0) {
      pSVar17 = System_String__Substring_3af8da0
                          ((System_String_o *)type,0,
                           *(int *)&(type->fields)._ObsoleteMessage_k__BackingField + -2,(MethodInfo *)0x0);
      in_stack_ffffffffffffff38 = (MethodInfo *)in_RCX;
      pCVar31 = in_stack_ffffffffffffff48;
      if ((System_Text_StringBuilder_o *)((MethodInfo *)in_RCX)->methodPointer !=
          (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__AppendLine_3b044f0
                  ((System_Text_StringBuilder_o *)((MethodInfo *)in_RCX)->methodPointer,pSVar17,
                   (MethodInfo *)0x0);
        pCVar32 = in_stack_ffffffffffffff50;
label_0427e268:
        type = pCVar32;
        pCVar8 = (type->fields)._Info_k__BackingField;
        __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar25;
        pCVar31 = in_stack_ffffffffffffff48;
        if (pCVar8 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
          bVar15 = System_String__IsNullOrEmpty((pCVar8->fields)._Code_k__BackingField,(MethodInfo *)0x0);
          pCVar31 = in_stack_ffffffffffffff48;
          if ((char)bVar15 == '\0') {
            if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff38->methodPointer !=
                (System_Text_StringBuilder_o *)0x0) {
              pMVar28 = in_stack_ffffffffffffff38;
              System_Text_StringBuilder__AppendLine_3b044f0
                        ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff38->methodPointer,"### Example",
                         (MethodInfo *)0x0);
              ppSVar14 = (System_String_o **)&in_stack_ffffffffffffff38->methodPointer;
              in_stack_ffffffffffffff38 = pMVar28;
              if ((System_Text_StringBuilder_o *)*ppSVar14 != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__AppendLine_3b044f0
                          ((System_Text_StringBuilder_o *)*ppSVar14,"```csharp",(MethodInfo *)0x0);
                pCVar8 = (type->fields)._Info_k__BackingField;
                in_stack_ffffffffffffff38 = pMVar28;
                if (pCVar8 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
                  pSVar7 = (System_Text_StringBuilder_o *)pMVar28->methodPointer;
                  pSVar17 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                      ((pCVar8->fields)._Code_k__BackingField,1,method_02);
                  if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__AppendLine_3b044f0(pSVar7,pSVar17,(MethodInfo *)0x0);
                    if ((System_Text_StringBuilder_o *)pMVar28->methodPointer !=
                        (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__AppendLine_3b044f0
                                ((System_Text_StringBuilder_o *)pMVar28->methodPointer,"```",
                                 (MethodInfo *)0x0);
                      goto label_0427e324;
                    }
                  }
                }
              }
            }
          }
          else {
label_0427e324:
            if ((*(char *)((long)&(type->fields)._IsStatic_k__BackingField + 1) == '\0') &&
               (((char)(type->fields)._IsStatic_k__BackingField == '\0' ||
                ((pCVar32 = (type->fields)._BaseType_k__BackingField,
                 pCVar32 != (CustomLogic_Editor_Models_CLType_o *)0x0 &&
                 ((pCVar32->fields)._Name_k__BackingField != (System_String_o *)0x0)))))) {
              if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff38->methodPointer !=
                  (System_Text_StringBuilder_o *)0x0) {
                pMVar28 = in_stack_ffffffffffffff38;
                System_Text_StringBuilder__AppendLine_3b044f0
                          ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff38->methodPointer,
                           "### Initialization",(MethodInfo *)0x0);
                ppSVar14 = (System_String_o **)&in_stack_ffffffffffffff38->methodPointer;
                in_stack_ffffffffffffff38 = pMVar28;
                if ((System_Text_StringBuilder_o *)*ppSVar14 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__AppendLine_3b044f0
                            ((System_Text_StringBuilder_o *)*ppSVar14,"```csharp",(MethodInfo *)0x0);
                  __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                           (type->fields)._BaseType_k__BackingField;
                  uVar30 = 0;
                  in_stack_ffffffffffffff38 = pMVar28;
                  if ((CustomLogic_Editor_Models_CLType_o *)__this !=
                      (CustomLogic_Editor_Models_CLType_o *)0x0) {
                    uVar16 = *(uint *)&(((CustomLogic_Editor_Models_CLType_o *)__this)->fields).
                                       _Name_k__BackingField;
                    in_stack_ffffffffffffff48 = pCVar31;
                    if (0 < (int)uVar16) {
                      lVar23 = 0;
                      do {
                        plVar25 = (long *)__this;
                        if (uVar16 <= (uint)lVar23) goto label_0427e7ce;
                        pCVar8 = (&(((CustomLogic_Editor_Models_CLType_o *)__this)->fields).
                                   _Info_k__BackingField)[lVar23];
                        in_stack_ffffffffffffff38 = pMVar28;
                        pCVar31 = in_stack_ffffffffffffff48;
                        if (pCVar8 == (CustomLogic_Editor_Models_XmlInfo_o *)0x0) goto label_0427e7ba;
                        pSVar17 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetParametersStr
                                            ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                                             in_stack_ffffffffffffff48,
                                             (CustomLogic_Editor_Models_CLParameter_array *)
                                             (pCVar8->fields)._Remarks_k__BackingField,0,(MethodInfo *)in_RCX)
                        ;
                        in_R8 = (MethodInfo_3503280 *)0x0;
                        type = (CustomLogic_Editor_Models_CLType_o *)
                               System_String__Concat_3af7470
                                         ((type->fields)._Name_k__BackingField,"(",pSVar17,
                                          ")",(MethodInfo *)0x0);
                        pSVar17 = (pCVar8->fields)._Code_k__BackingField;
                        in_stack_ffffffffffffff38 = pMVar28;
                        pCVar31 = in_stack_ffffffffffffff48;
                        if (pSVar17 == (System_String_o *)0x0) goto label_0427e7ba;
                        in_RCX = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
                        str1 = (System_String_o *)((MethodInfo *)in_RCX)->methodPointer;
                        bVar15 = System_String__IsNullOrEmpty
                                           ((System_String_o *)pSVar17->fields,(MethodInfo *)0x0);
                        if ((char)bVar15 == '\0') {
                          pSVar17 = (pCVar8->fields)._Code_k__BackingField;
                          in_stack_ffffffffffffff38 = pMVar28;
                          pCVar31 = in_stack_ffffffffffffff48;
                          if (pSVar17 == (System_String_o *)0x0) goto label_0427e7ba;
                          pSVar17 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                              ((System_String_o *)pSVar17->fields,0,method_03);
                          in_RCX = &" // ";
                          str1 = System_String__Concat_3ae5ba0(" // ",pSVar17,(MethodInfo *)0x0);
                        }
                        pSVar7 = (System_Text_StringBuilder_o *)pMVar28->methodPointer;
                        pSVar17 = System_String__Concat_3ae5ba0
                                            ((System_String_o *)type,str1,(MethodInfo *)0x0);
                        in_stack_ffffffffffffff38 = pMVar28;
                        pCVar31 = in_stack_ffffffffffffff48;
                        if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
                        type = in_stack_ffffffffffffff50;
                        System_Text_StringBuilder__AppendLine_3b044f0(pSVar7,pSVar17,(MethodInfo *)0x0);
                        lVar23 = lVar23 + 1;
                        uVar30 = (uint)lVar23;
                        uVar16 = *(uint *)&(((CustomLogic_Editor_Models_CLType_o *)__this)->fields).
                                           _Name_k__BackingField;
                        in_stack_ffffffffffffff50 = type;
                      } while ((int)uVar30 < (int)uVar16);
                    }
                    in_stack_ffffffffffffff38 = pMVar28;
                    pCVar31 = in_stack_ffffffffffffff48;
                    if ((System_Text_StringBuilder_o *)pMVar28->methodPointer !=
                        (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__AppendLine_3b044f0
                                ((System_Text_StringBuilder_o *)pMVar28->methodPointer,"```",
                                 (MethodInfo *)0x0);
                      pCVar31 = in_stack_ffffffffffffff48;
                      if ((System_Text_StringBuilder_o *)pMVar28->methodPointer !=
                          (System_Text_StringBuilder_o *)0x0) {
                        System_Text_StringBuilder__AppendLine
                                  ((System_Text_StringBuilder_o *)pMVar28->methodPointer,(MethodInfo *)0x0);
                        goto label_0427e4e7;
                      }
                    }
                  }
                }
              }
            }
            else {
label_0427e4e7:
              pCVar12 = (type->fields)._StaticProperties_k__BackingField;
              if ((pCVar12 == (CustomLogic_Editor_Models_CLProperty_array *)0x0) || (pCVar12->max_length == 0)
                 ) {
label_0427e539:
                pCVar13 = (type->fields)._Constructors_k__BackingField;
                if ((pCVar13 == (CustomLogic_Editor_Models_CLConstructor_array *)0x0) ||
                   (pCVar13->max_length == 0)) {
label_0427e58b:
                  pCVar6 = (type->fields)._StaticMethods_k__BackingField;
                  if ((pCVar6 == (CustomLogic_Editor_Models_CLMethod_array *)0x0) || (pCVar6->max_length == 0)
                     ) {
label_0427e5dd:
                    pCVar12 = (type->fields)._InstanceProperties_k__BackingField;
                    if ((pCVar12 == (CustomLogic_Editor_Models_CLProperty_array *)0x0) ||
                       (pCVar12->max_length == 0)) {
label_0427e62f:
                      __this_00 = *(System_Collections_Generic_Dictionary_object__int__o **)
                                   &(in_stack_ffffffffffffff48->fields)._InheritBaseMembers_k__BackingField;
                      if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                        System_Collections_Generic_Dictionary_object__int___GetEnumerator
                                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                                   (auStack_90 + 0x30),__this_00,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_CustomLogic_Editor_M);
                        auStack_90._32_8_ = pSStack_40;
                        auStack_90._0_8_ = CONCAT44(uStack_5c,auStack_90._48_4_);
                        auStack_90._16_8_ = _Stack_50;
                        auStack_90._24_8_ = pcStack_48;
                        auStack_90._8_8_ = pIStack_58;
                        while (__this_01.fields._8_8_ = in_stack_ffffffffffffff38,
                              __this_01.fields._dictionary =
                                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                   in_stack_ffffffffffffff30,
                              __this_01.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff40,
                              __this_01.fields._current.fields.key._4_4_ = uVar30,
                              __this_01.fields._current.fields.value = (Il2CppObject *)pCVar31,
                              __this_01.fields._32_8_ = in_stack_ffffffffffffff50,
                              bVar15 = System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext
                                                 (__this_01,(MethodInfo_324FC20 *)auStack_90),
                              (char)bVar15 != '\0') {
                          auVar27 = il2cpp_runtime_helper_04284760((MethodInfo_324FC20 *)auStack_90,MethodInfo_KeyValuePair_2_CustomLogic_Editor_Models_CLType_System_I);
                          IStack_a0.klass = auVar27._0_8_;
                          IStack_a0.monitor = (void *)CONCAT44(IStack_a0.monitor._4_4_,auVar27._8_4_);
                          __this_03.fields._8_8_ = &lStack_a8;
                          __this_03.fields.key = &IStack_a0;
                          System_Collections_Generic_KeyValuePair_object__int___Deconstruct
                                    (__this_03,(Il2CppObject **)&stack0xffffffffffffff44,MethodInfo_Void_Deconstruct,in_R8);
                          pMVar28 = in_stack_ffffffffffffff38;
                          uVar16 = uVar30;
                          if (lStack_a8 == 0) goto label_0427e7bf;
                          type = (CustomLogic_Editor_Models_CLType_o *)(ulong)uVar30;
                          arg1 = *(Il2CppObject **)(lStack_a8 + 0x18);
                          pSVar17 = (System_String_o *)
                                    (*in_stack_ffffffffffffff48->klass[1]._1.image)
                                              (in_stack_ffffffffffffff48,lStack_a8,
                                               in_stack_ffffffffffffff48->klass[1]._1.gc_desc);
                          in_stack_ffffffffffffff48 = pCVar31;
                          if (pSVar17 == (System_String_o *)0x0) goto label_0427e7c4;
                          __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                                   System_String__Substring_3af8da0
                                             (pSVar17,3,(pSVar17->fields)._stringLength + -3,(MethodInfo *)0x0
                                             );
                          pSVar7 = (System_Text_StringBuilder_o *)in_stack_ffffffffffffff38->methodPointer;
                          auStack_90._48_4_ = uVar30;
                          arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_90 + 0x30);
                          in_R8 = (MethodInfo_3503280 *)0x0;
                          in_stack_ffffffffffffff48 = pCVar31;
                          pSVar17 = System_String__Format_3af7930
                                              ("[^{0}]: [{1}](../{2})",arg0,arg1,(Il2CppObject *)__this,(MethodInfo *)0x0
                                              );
                          if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7c9;
                          pCVar31 = in_stack_ffffffffffffff48;
                          System_Text_StringBuilder__AppendLine_3b044f0(pSVar7,pSVar17,(MethodInfo *)0x0);
                          in_stack_ffffffffffffff38 = pMVar28;
                          uVar30 = uVar16;
                        }
                        __this_02.fields._8_8_ = in_stack_ffffffffffffff38;
                        __this_02.fields._dictionary =
                             (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                             in_stack_ffffffffffffff30;
                        __this_02.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff40;
                        __this_02.fields._current.fields.key._4_4_ = uVar30;
                        __this_02.fields._current.fields.value = (Il2CppObject *)pCVar31;
                        __this_02.fields._32_8_ = in_stack_ffffffffffffff50;
                        System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose
                                  (__this_02,(MethodInfo_324FD30 *)auStack_90);
                        pSVar17 = (System_String_o *)in_stack_ffffffffffffff38->methodPointer;
                        if (pSVar17 != (System_String_o *)0x0) {
                          pSVar17 = (System_String_o *)
                                    (*(pSVar17->klass->vtable)._3_ToString.methodPtr)
                                              (pSVar17,(pSVar17->klass->vtable)._3_ToString.method);
                          return pSVar17;
                        }
                      }
                    }
                    else if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff38->methodPointer !=
                             (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__AppendLine_3b044f0
                                ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff38->methodPointer,
                                 "### Static Methods",(MethodInfo *)0x0);
                      CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendMethods
                                ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                                 in_stack_ffffffffffffff48,
                                 (CustomLogic_Editor_Models_CLMethod_array *)
                                 (type->fields)._InstanceProperties_k__BackingField,method_07);
                      pSVar7 = (System_Text_StringBuilder_o *)
                               (in_stack_ffffffffffffff48->fields)._Name_k__BackingField;
                      if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
                        System_Text_StringBuilder__AppendLine(pSVar7,(MethodInfo *)0x0);
                        goto label_0427e62f;
                      }
                    }
                  }
                  else if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff38->methodPointer !=
                           (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__AppendLine_3b044f0
                              ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff38->methodPointer,
                               "### Methods",(MethodInfo *)0x0);
                    CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendMethods
                              ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                               in_stack_ffffffffffffff48,(type->fields)._StaticMethods_k__BackingField,
                               method_06);
                    pSVar7 = (System_Text_StringBuilder_o *)
                             (in_stack_ffffffffffffff48->fields)._Name_k__BackingField;
                    if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__AppendLine(pSVar7,(MethodInfo *)0x0);
                      goto label_0427e5dd;
                    }
                  }
                }
                else if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff38->methodPointer !=
                         (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__AppendLine_3b044f0
                            ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff38->methodPointer,
                             "### Static Properties",(MethodInfo *)0x0);
                  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendProperties
                            ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                             in_stack_ffffffffffffff48,
                             (CustomLogic_Editor_Models_CLProperty_array *)
                             (type->fields)._Constructors_k__BackingField,method_05);
                  pSVar7 = (System_Text_StringBuilder_o *)
                           (in_stack_ffffffffffffff48->fields)._Name_k__BackingField;
                  if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__AppendLine(pSVar7,(MethodInfo *)0x0);
                    goto label_0427e58b;
                  }
                }
              }
              else if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff38->methodPointer !=
                       (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__AppendLine_3b044f0
                          ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff38->methodPointer,
                           "### Properties",(MethodInfo *)0x0);
                CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendProperties
                          ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)in_stack_ffffffffffffff48,
                           (type->fields)._StaticProperties_k__BackingField,method_04);
                pSVar7 = (System_Text_StringBuilder_o *)
                         (in_stack_ffffffffffffff48->fields)._Name_k__BackingField;
                if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__AppendLine(pSVar7,(MethodInfo *)0x0);
                  goto label_0427e539;
                }
              }
            }
          }
        }
      }
    }
label_0427e7ba:
    il2cpp_runtime_helper_022b2c90();
    pMVar28 = in_stack_ffffffffffffff38;
    uVar16 = uVar30;
label_0427e7bf:
    in_stack_ffffffffffffff48 = pCVar31;
    il2cpp_runtime_helper_022b2c90();
label_0427e7c4:
    il2cpp_runtime_helper_022b2c90();
label_0427e7c9:
    il2cpp_runtime_helper_022b2c90();
    plVar25 = (long *)__this;
    uVar30 = uVar16;
label_0427e7ce:
    il2cpp_runtime_helper_022b2ca0();
  } while( true );
  while (lVar23 = lVar23 + 0x10, (ulong)uVar5 << 4 != lVar23) {
label_0427e9a0:
    if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_IDisposable) {
      ppIVar20 = &(&(pCVar11->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar23)].methodPtr;
      goto label_0427e9cd;
    }
  }
label_0427e9af:
  ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar25,TypeInfo_IDisposable,0);
label_0427e9cd:
  (**ppIVar20)(plVar25,(MethodInfo *)ppIVar20[1]);
label_0427e9d6:
  _Unwind_Resume(auVar27._0_8_);
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator$$Generate
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__Generate (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o* __this, CustomLogic_Editor_Models_CLType_o* type, const MethodInfo* method);
// 0x427d6b0

System_String_o *
CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__Generate
          (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *__this,
          CustomLogic_Editor_Models_CLType_o *type,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  CustomLogic_Editor_Models_CLMethod_array *pCVar6;
  System_Text_StringBuilder_o *pSVar7;
  CustomLogic_Editor_Models_XmlInfo_o *pCVar8;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  CustomLogic_Editor_Models_CLType_c *pCVar11;
  CustomLogic_Editor_Models_CLProperty_array *pCVar12;
  CustomLogic_Editor_Models_CLConstructor_array *pCVar13;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  Il2CppObject *arg1;
  Il2CppMethodPointer pIVar14;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar15;
  uint uVar16;
  System_String_o *pSVar17;
  System_String_array *values;
  System_Func_TSource__bool__o *pSVar18;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar19;
  Il2CppMethodPointer *ppIVar20;
  System_String_o *str1;
  Il2CppObject *arg0;
  long *plVar21;
  System_String_o **in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  int iVar22;
  long lVar23;
  long lVar24;
  MethodInfo_3503280 *in_R8;
  long *plVar25;
  bool bVar26;
  undefined1 auVar27 [12];
  System_Collections_Generic_KeyValuePair_object__int__o __this_03;
  undefined8 in_stack_ffffffffffffff38;
  MethodInfo *in_stack_ffffffffffffff40;
  MethodInfo *pMVar28;
  MethodInfo *pMVar29;
  undefined4 in_stack_ffffffffffffff48;
  uint uVar30;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *in_stack_ffffffffffffff50;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *pCVar31;
  CustomLogic_Editor_Models_CLType_o *in_stack_ffffffffffffff58;
  CustomLogic_Editor_Models_CLType_o *pCVar32;
  long lStack_a0;
  Il2CppObject IStack_98;
  undefined1 auStack_88 [52];
  undefined4 uStack_54;
  Il2CppRGCTXData *pIStack_50;
  _union_231605 _Stack_48;
  char *pcStack_40;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSStack_38;
  
  if (g_data_057adc6d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_CustomLogic_Editor_M);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_CLMethod);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_CustomLogic_Editor_Models_CLMethod_Where_C);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_CustomLogic_Editor_Models_CLType_System_I);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CLMethod_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_CLMethod);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_CLMethod);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Deconstruct);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Generate_b__7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Generate_b__7_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Generate_b__7_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"__Sub__");
    il2cpp_runtime_helper_023445d0(&"](../");
    il2cpp_runtime_helper_023445d0(&"__Copy__");
    il2cpp_runtime_helper_023445d0(&"`-`, ");
    il2cpp_runtime_helper_023445d0(&"__Str__");
    il2cpp_runtime_helper_023445d0(&"Overloads operators: ");
    il2cpp_runtime_helper_023445d0(&" // ");
    il2cpp_runtime_helper_023445d0(&"```csharp");
    il2cpp_runtime_helper_023445d0(&"```");
    il2cpp_runtime_helper_023445d0(&"__Eq__");
    il2cpp_runtime_helper_023445d0(&"__Hash__");
    il2cpp_runtime_helper_023445d0(&"`, ");
    il2cpp_runtime_helper_023445d0(&"`");
    il2cpp_runtime_helper_023445d0(&"Inherits from [");
    il2cpp_runtime_helper_023445d0(&"[^{0}]: [{1}](../{2})");
    il2cpp_runtime_helper_023445d0(&"__Div__");
    il2cpp_runtime_helper_023445d0(&"### Static Properties");
    il2cpp_runtime_helper_023445d0(&"### Properties");
    il2cpp_runtime_helper_023445d0(&"(");
    il2cpp_runtime_helper_023445d0(&"`*`, ");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&"### Remarks");
    il2cpp_runtime_helper_023445d0(&"`==`, ");
    il2cpp_runtime_helper_023445d0(&"### Methods");
    il2cpp_runtime_helper_023445d0(&"### Initialization");
    il2cpp_runtime_helper_023445d0(&"__Mul__");
    il2cpp_runtime_helper_023445d0(&"# ");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"`+`, ");
    il2cpp_runtime_helper_023445d0(&"__Add__");
    il2cpp_runtime_helper_023445d0(&"### Example");
    il2cpp_runtime_helper_023445d0(&"### Static Methods");
    il2cpp_runtime_helper_023445d0(&"`/`, ");
    g_data_057adc6d = '\x01';
  }
  uVar30 = 0;
  auStack_88._16_8_ = (InvokerMethod)0x0;
  auStack_88._24_8_ = (char *)0x0;
  auStack_88._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_88._8_8_ = (Il2CppRGCTXData *)0x0;
  auStack_88._32_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  IStack_98.klass = (Il2CppClass *)0x0;
  IStack_98.monitor = (void *)0x0;
  lStack_a0 = 0;
  pCVar31 = in_stack_ffffffffffffff50;
  if (type == (CustomLogic_Editor_Models_CLType_o *)0x0) goto label_0427e7ba;
  pCVar6 = (type->fields)._StaticMethods_k__BackingField;
  bVar26 = false;
  if (pCVar6 != (CustomLogic_Editor_Models_CLMethod_array *)0x0) {
    bVar26 = (int)pCVar6->max_length != 0;
  }
  pSVar7 = (__this->fields)._sb;
  if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
  pMVar28 = (MethodInfo *)&(__this->fields)._sb;
  System_Text_StringBuilder__Clear(pSVar7,(MethodInfo *)0x0);
  pSVar7 = *(System_Text_StringBuilder_o **)pMVar28;
  pSVar17 = System_String__Concat_3ae5ba0("# ",(type->fields)._Name_k__BackingField,(MethodInfo *)0x0)
  ;
  in_stack_ffffffffffffff40 = pMVar28;
  pCVar31 = in_stack_ffffffffffffff50;
  if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
  System_Text_StringBuilder__AppendLine_3b044f0(pSVar7,pSVar17,(MethodInfo *)0x0);
  plVar25 = (long *)__this;
  if ((*(char *)((long)&(type->fields)._IsStatic_k__BackingField + 2) != '\0') &&
     ((type->fields)._Category_k__BackingField != (System_String_o *)0x0)) {
    pSVar7 = (System_Text_StringBuilder_o *)pMVar28->methodPointer;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    in_stack_ffffffffffffff40 = pMVar28;
    pCVar31 = in_stack_ffffffffffffff50;
    if (values == (System_String_array *)0x0) goto label_0427e7ba;
    if ((int)values->max_length == 0) goto label_0427e7ce;
    values->m_Items[0] = "Inherits from [";
    il2cpp_runtime_helper_022b4080(values->m_Items);
    pSVar17 = CustomLogic_Editor_Models_CLType__get_BaseTypeName(type,(MethodInfo *)0x0);
    if ((uint)values->max_length < 2) goto label_0427e7ce;
    values->m_Items[1] = pSVar17;
    il2cpp_runtime_helper_022b4080(values->m_Items + 1);
    if ((uint)values->max_length < 3) goto label_0427e7ce;
    values->m_Items[2] = "](../";
    il2cpp_runtime_helper_022b4080(values->m_Items + 2);
    pSVar17 = (System_String_o *)
              (*(__this->klass->vtable)._4_GetRelativeFilePath.methodPtr)
                        (__this,(type->fields)._Category_k__BackingField,
                         (__this->klass->vtable)._4_GetRelativeFilePath.method);
    in_stack_ffffffffffffff40 = pMVar28;
    pCVar31 = in_stack_ffffffffffffff50;
    if (pSVar17 == (System_String_o *)0x0) goto label_0427e7ba;
    in_RCX = (System_String_o **)0x0;
    pSVar17 = System_String__Substring_3af8da0
                        (pSVar17,3,(pSVar17->fields)._stringLength + -3,(MethodInfo *)0x0);
    if ((uint)values->max_length < 4) goto label_0427e7ce;
    values->m_Items[3] = pSVar17;
    il2cpp_runtime_helper_022b4080(values->m_Items + 3);
    if ((uint)values->max_length < 5) goto label_0427e7ce;
    values->m_Items[4] = ")";
    il2cpp_runtime_helper_022b4080(values->m_Items + 4);
    pSVar17 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
    in_stack_ffffffffffffff40 = pMVar28;
    pCVar31 = in_stack_ffffffffffffff50;
    if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine_3b044f0(pSVar7,pSVar17,(MethodInfo *)0x0);
  }
  pCVar8 = (type->fields)._Info_k__BackingField;
  in_stack_ffffffffffffff40 = pMVar28;
  pCVar31 = in_stack_ffffffffffffff50;
  if (pCVar8 == (CustomLogic_Editor_Models_XmlInfo_o *)0x0) goto label_0427e7ba;
  pMVar29 = pMVar28;
  bVar15 = System_String__IsNullOrEmpty((pCVar8->fields)._Summary_k__BackingField,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    in_stack_ffffffffffffff40 = pMVar29;
    pCVar31 = in_stack_ffffffffffffff50;
    if ((System_Text_StringBuilder_o *)pMVar28->methodPointer == (System_Text_StringBuilder_o *)0x0)
    goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine
              ((System_Text_StringBuilder_o *)pMVar28->methodPointer,(MethodInfo *)0x0);
    pCVar8 = (type->fields)._Info_k__BackingField;
    in_stack_ffffffffffffff40 = pMVar29;
    pCVar31 = in_stack_ffffffffffffff50;
    if (pCVar8 == (CustomLogic_Editor_Models_XmlInfo_o *)0x0) goto label_0427e7ba;
    pSVar7 = (System_Text_StringBuilder_o *)pMVar28->methodPointer;
    pSVar17 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                        ((pCVar8->fields)._Summary_k__BackingField,0,method_00);
    in_stack_ffffffffffffff40 = pMVar29;
    pCVar31 = in_stack_ffffffffffffff50;
    if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine_3b044f0(pSVar7,pSVar17,(MethodInfo *)0x0);
    in_stack_ffffffffffffff40 = pMVar29;
    pCVar31 = in_stack_ffffffffffffff50;
    if ((System_Text_StringBuilder_o *)pMVar28->methodPointer == (System_Text_StringBuilder_o *)0x0)
    goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine
              ((System_Text_StringBuilder_o *)pMVar28->methodPointer,(MethodInfo *)0x0);
  }
  pCVar8 = (type->fields)._Info_k__BackingField;
  in_stack_ffffffffffffff40 = pMVar29;
  pCVar31 = in_stack_ffffffffffffff50;
  if (pCVar8 == (CustomLogic_Editor_Models_XmlInfo_o *)0x0) goto label_0427e7ba;
  uVar16 = 0;
  bVar15 = System_String__IsNullOrEmpty((pCVar8->fields)._Remarks_k__BackingField,(MethodInfo *)0x0);
  in_stack_ffffffffffffff50 = __this;
  pCVar32 = type;
  if (bVar26) {
    pCVar6 = (type->fields)._StaticMethods_k__BackingField;
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      pCVar32 = type;
    }
    else {
      pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (pSVar18 == (System_Func_TSource__bool__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)**(long **)(TypeInfo_c + 0xb8);
      pSVar18 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CLMethod_bool);
      in_RCX = (System_String_o **)0x0;
      System_Func_object__bool____ctor();
      lVar23 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__bool__o **)(lVar23 + 8) = pSVar18;
      il2cpp_runtime_helper_022b4080(lVar23 + 8,pSVar18);
    }
    uVar16 = System_Linq_Enumerable__Any_object__2504f10
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pCVar6,pSVar18,MethodInfo_Boolean_Any_CLMethod);
    uVar16 = uVar16 & 0xff;
    plVar25 = (long *)__this;
  }
  in_stack_ffffffffffffff40 = pMVar29;
  in_stack_ffffffffffffff58 = pCVar32;
  if ((char)bVar15 == '\x01' && uVar16 == 0) goto label_0427e268;
  __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar25;
  type = pCVar32;
  pCVar31 = in_stack_ffffffffffffff50;
  if ((System_Text_StringBuilder_o *)pMVar29->methodPointer == (System_Text_StringBuilder_o *)0x0)
  goto label_0427e7ba;
  System_Text_StringBuilder__AppendLine_3b044f0
            ((System_Text_StringBuilder_o *)pMVar29->methodPointer,"### Remarks",(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    pCVar8 = (pCVar32->fields)._Info_k__BackingField;
    pCVar31 = in_stack_ffffffffffffff50;
    if (pCVar8 == (CustomLogic_Editor_Models_XmlInfo_o *)0x0) goto label_0427e7ba;
    pSVar7 = (System_Text_StringBuilder_o *)pMVar29->methodPointer;
    pSVar17 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                        ((pCVar8->fields)._Remarks_k__BackingField,0,method_01);
    pCVar31 = in_stack_ffffffffffffff50;
    if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine_3b044f0(pSVar7,pSVar17,(MethodInfo *)0x0);
    pCVar31 = in_stack_ffffffffffffff50;
    if ((System_Text_StringBuilder_o *)pMVar29->methodPointer == (System_Text_StringBuilder_o *)0x0)
    goto label_0427e7ba;
    System_Text_StringBuilder__AppendLine
              ((System_Text_StringBuilder_o *)pMVar29->methodPointer,(MethodInfo *)0x0);
  }
  if (uVar16 == 0) goto label_0427e268;
  pCVar31 = in_stack_ffffffffffffff50;
  if ((System_Text_StringBuilder_o *)pMVar29->methodPointer == (System_Text_StringBuilder_o *)0x0)
  goto label_0427e7ba;
  System_Text_StringBuilder__AppendLine_3b044f0
            ((System_Text_StringBuilder_o *)pMVar29->methodPointer,"Overloads operators: ",(MethodInfo *)0x0);
  pCVar6 = (pCVar32->fields)._StaticMethods_k__BackingField;
  plVar25 = &TypeInfo_c;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (pSVar18 == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar18 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CLMethod_bool);
    in_RCX = (System_String_o **)0x0;
    System_Func_object__bool____ctor();
    lVar23 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar23 + 0x10) = pSVar18;
    il2cpp_runtime_helper_022b4080(lVar23 + 0x10,pSVar18);
  }
  bVar15 = System_Linq_Enumerable__Any_object__2504f10
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pCVar6,pSVar18,MethodInfo_Boolean_Any_CLMethod);
  type = "";
  if ((char)bVar15 == '\0') goto label_0427e268;
  pCVar6 = (pCVar32->fields)._StaticMethods_k__BackingField;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
    pMVar28 = in_stack_ffffffffffffff40;
  }
  else {
    pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
    pMVar28 = in_stack_ffffffffffffff40;
  }
  if (pSVar18 == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar18 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CLMethod_bool);
    System_Func_object__bool____ctor();
    lVar23 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar23 + 0x18) = pSVar18;
    il2cpp_runtime_helper_022b4080(lVar23 + 0x18,pSVar18);
  }
  pSVar19 = System_Linq_Enumerable__Where_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pCVar6,pSVar18,MethodInfo_IEnumerable_1_CustomLogic_Editor_Models_CLMethod_Where_C);
  __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar25;
  in_stack_ffffffffffffff40 = pMVar28;
  pCVar31 = in_stack_ffffffffffffff50;
  if (pSVar19 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) goto label_0427e7ba;
  pSVar9 = pSVar19->klass;
  uVar1._0_1_ = (pSVar9->_2).rank;
  uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar10 = (pSVar9->_1).interfaceOffsets;
    lVar23 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_IEnumerable_CLMethod) {
        ppIVar20 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar23)].methodPtr;
        goto label_0427def1;
      }
      lVar23 = lVar23 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar23);
  }
  ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar19,TypeInfo_IEnumerable_CLMethod,0);
label_0427def1:
  plVar25 = (long *)(**ppIVar20)();
  if ((CustomLogic_Editor_Models_CLType_o *)plVar25 == (CustomLogic_Editor_Models_CLType_o *)0x0)
  goto label_0427e7d8;
  lVar23 = 0;
label_0427df10:
  pCVar11 = ((CustomLogic_Editor_Models_CLType_o *)plVar25)->klass;
  uVar2._0_1_ = (pCVar11->_2).rank;
  uVar2._1_1_ = (pCVar11->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar10 = (pCVar11->_1).interfaceOffsets;
    lVar24 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IEnumerator) {
        ppIVar20 = &(&(pCVar11->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar24)].methodPtr;
        goto label_0427df73;
      }
      lVar24 = lVar24 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar24);
  }
  ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar25,TypeInfo_IEnumerator,0);
label_0427df73:
  pSVar17 = (System_String_o *)(**ppIVar20)();
  if ((char)pSVar17 == '\0') {
    iVar22 = 0x16;
    goto label_0427e1ac;
  }
  pCVar11 = ((CustomLogic_Editor_Models_CLType_o *)plVar25)->klass;
  uVar3._0_1_ = (pCVar11->_2).rank;
  uVar3._1_1_ = (pCVar11->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar10 = (pCVar11->_1).interfaceOffsets;
    lVar24 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IEnumerator_CLMethod) {
        ppIVar20 = &(&(pCVar11->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar24)].methodPtr;
        goto label_0427dfe3;
      }
      lVar24 = lVar24 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar24);
  }
  ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar25,TypeInfo_IEnumerator_CLMethod,0);
label_0427dfe3:
  lVar24 = (**ppIVar20)(plVar25);
  if (lVar24 != 0) {
    bVar15 = System_String__op_Equality(*(System_String_o **)(lVar24 + 0x28),"__Add__",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      type = (CustomLogic_Editor_Models_CLType_o *)
             System_String__Concat_3ae5ba0((System_String_o *)type,"`+`, ",(MethodInfo *)0x0);
    }
    bVar15 = System_String__op_Equality(*(System_String_o **)(lVar24 + 0x28),"__Sub__",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      type = (CustomLogic_Editor_Models_CLType_o *)
             System_String__Concat_3ae5ba0((System_String_o *)type,"`-`, ",(MethodInfo *)0x0);
    }
    bVar15 = System_String__op_Equality(*(System_String_o **)(lVar24 + 0x28),"__Mul__",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      type = (CustomLogic_Editor_Models_CLType_o *)
             System_String__Concat_3ae5ba0((System_String_o *)type,"`*`, ",(MethodInfo *)0x0);
    }
    bVar15 = System_String__op_Equality(*(System_String_o **)(lVar24 + 0x28),"__Div__",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      type = (CustomLogic_Editor_Models_CLType_o *)
             System_String__Concat_3ae5ba0((System_String_o *)type,"`/`, ",(MethodInfo *)0x0);
    }
    bVar15 = System_String__op_Equality(*(System_String_o **)(lVar24 + 0x28),"__Eq__",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      type = (CustomLogic_Editor_Models_CLType_o *)
             System_String__Concat_3ae5ba0((System_String_o *)type,"`==`, ",(MethodInfo *)0x0);
    }
    bVar15 = System_String__op_Equality(*(System_String_o **)(lVar24 + 0x28),"__Copy__",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      in_R8 = (MethodInfo_3503280 *)0x0;
      type = (CustomLogic_Editor_Models_CLType_o *)
             System_String__Concat_3af7470
                       ((System_String_o *)type,"`",*(System_String_o **)(lVar24 + 0x28),"`, "
                        ,(MethodInfo *)0x0);
    }
    bVar15 = System_String__op_Equality(*(System_String_o **)(lVar24 + 0x28),"__Hash__",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      in_R8 = (MethodInfo_3503280 *)0x0;
      type = (CustomLogic_Editor_Models_CLType_o *)
             System_String__Concat_3af7470
                       ((System_String_o *)type,"`",*(System_String_o **)(lVar24 + 0x28),"`, "
                        ,(MethodInfo *)0x0);
    }
    bVar15 = System_String__op_Equality(*(System_String_o **)(lVar24 + 0x28),"__Str__",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      in_R8 = (MethodInfo_3503280 *)0x0;
      type = (CustomLogic_Editor_Models_CLType_o *)
             System_String__Concat_3af7470
                       ((System_String_o *)type,"`",*(System_String_o **)(lVar24 + 0x28),"`, "
                        ,(MethodInfo *)0x0);
    }
    goto label_0427df10;
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_0427e7d8:
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar27 = il2cpp_runtime_helper_022fefe0();
      iVar22 = 0;
      if (auVar27._8_4_ != 1) {
        if ((CustomLogic_Editor_Models_CLType_o *)plVar25 == (CustomLogic_Editor_Models_CLType_o *)0x0)
        goto label_0427e9d6;
        pCVar11 = ((CustomLogic_Editor_Models_CLType_o *)plVar25)->klass;
        uVar5._0_1_ = (pCVar11->_2).rank;
        uVar5._1_1_ = (pCVar11->_2).minimumAlignment;
        if ((ulong)uVar5 == 0) goto label_0427e9af;
        pIVar10 = (pCVar11->_1).interfaceOffsets;
        lVar23 = 0;
        goto label_0427e9a0;
      }
      plVar21 = (long *)__cxa_begin_catch();
      lVar23 = *plVar21;
      pSVar17 = (System_String_o *)__cxa_end_catch();
label_0427e1ac:
      in_RCX = (System_String_o **)pMVar28;
      if ((CustomLogic_Editor_Models_CLType_o *)plVar25 != (CustomLogic_Editor_Models_CLType_o *)0x0) {
        pCVar11 = ((CustomLogic_Editor_Models_CLType_o *)plVar25)->klass;
        uVar4._0_1_ = (pCVar11->_2).rank;
        uVar4._1_1_ = (pCVar11->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar10 = (pCVar11->_1).interfaceOffsets;
          lVar24 = 0;
          do {
            if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IDisposable) {
              ppIVar20 = &(&(pCVar11->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar24)].methodPtr;
              goto label_0427e20d;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar24);
        }
        ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar25,TypeInfo_IDisposable,0);
        in_RCX = (System_String_o **)pMVar28;
label_0427e20d:
        pSVar17 = (System_String_o *)(**ppIVar20)(plVar25);
      }
      pMVar28 = (MethodInfo *)in_RCX;
    } while (lVar23 != 0);
    if ((iVar22 != 0x16) && (iVar22 != 0)) {
      return pSVar17;
    }
    __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar25;
    in_stack_ffffffffffffff40 = (MethodInfo *)in_RCX;
    pCVar31 = in_stack_ffffffffffffff50;
    if (type != (CustomLogic_Editor_Models_CLType_o *)0x0) {
      pSVar17 = System_String__Substring_3af8da0
                          ((System_String_o *)type,0,
                           *(int *)&(type->fields)._ObsoleteMessage_k__BackingField + -2,(MethodInfo *)0x0);
      in_stack_ffffffffffffff40 = (MethodInfo *)in_RCX;
      pCVar31 = in_stack_ffffffffffffff50;
      if ((System_Text_StringBuilder_o *)((MethodInfo *)in_RCX)->methodPointer !=
          (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__AppendLine_3b044f0
                  ((System_Text_StringBuilder_o *)((MethodInfo *)in_RCX)->methodPointer,pSVar17,
                   (MethodInfo *)0x0);
        pCVar32 = in_stack_ffffffffffffff58;
label_0427e268:
        type = pCVar32;
        pCVar8 = (type->fields)._Info_k__BackingField;
        __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)plVar25;
        pCVar31 = in_stack_ffffffffffffff50;
        if (pCVar8 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
          bVar15 = System_String__IsNullOrEmpty((pCVar8->fields)._Code_k__BackingField,(MethodInfo *)0x0);
          pCVar31 = in_stack_ffffffffffffff50;
          if ((char)bVar15 == '\0') {
            if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff40->methodPointer !=
                (System_Text_StringBuilder_o *)0x0) {
              pMVar28 = in_stack_ffffffffffffff40;
              System_Text_StringBuilder__AppendLine_3b044f0
                        ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff40->methodPointer,"### Example",
                         (MethodInfo *)0x0);
              ppIVar20 = &in_stack_ffffffffffffff40->methodPointer;
              in_stack_ffffffffffffff40 = pMVar28;
              if ((System_Text_StringBuilder_o *)*ppIVar20 != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__AppendLine_3b044f0
                          ((System_Text_StringBuilder_o *)*ppIVar20,"```csharp",(MethodInfo *)0x0);
                pCVar8 = (type->fields)._Info_k__BackingField;
                in_stack_ffffffffffffff40 = pMVar28;
                if (pCVar8 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
                  pSVar7 = (System_Text_StringBuilder_o *)pMVar28->methodPointer;
                  pSVar17 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                      ((pCVar8->fields)._Code_k__BackingField,1,method_02);
                  if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__AppendLine_3b044f0(pSVar7,pSVar17,(MethodInfo *)0x0);
                    if ((System_Text_StringBuilder_o *)pMVar28->methodPointer !=
                        (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__AppendLine_3b044f0
                                ((System_Text_StringBuilder_o *)pMVar28->methodPointer,"```",
                                 (MethodInfo *)0x0);
                      goto label_0427e324;
                    }
                  }
                }
              }
            }
          }
          else {
label_0427e324:
            if ((*(char *)((long)&(type->fields)._IsStatic_k__BackingField + 1) == '\0') &&
               (((char)(type->fields)._IsStatic_k__BackingField == '\0' ||
                ((pCVar32 = (type->fields)._BaseType_k__BackingField,
                 pCVar32 != (CustomLogic_Editor_Models_CLType_o *)0x0 &&
                 ((pCVar32->fields)._Name_k__BackingField != (System_String_o *)0x0)))))) {
              if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff40->methodPointer !=
                  (System_Text_StringBuilder_o *)0x0) {
                pMVar28 = in_stack_ffffffffffffff40;
                System_Text_StringBuilder__AppendLine_3b044f0
                          ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff40->methodPointer,
                           "### Initialization",(MethodInfo *)0x0);
                ppIVar20 = &in_stack_ffffffffffffff40->methodPointer;
                in_stack_ffffffffffffff40 = pMVar28;
                if ((System_Text_StringBuilder_o *)*ppIVar20 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__AppendLine_3b044f0
                            ((System_Text_StringBuilder_o *)*ppIVar20,"```csharp",(MethodInfo *)0x0);
                  __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                           (type->fields)._BaseType_k__BackingField;
                  uVar30 = 0;
                  in_stack_ffffffffffffff40 = pMVar28;
                  if ((CustomLogic_Editor_Models_CLType_o *)__this !=
                      (CustomLogic_Editor_Models_CLType_o *)0x0) {
                    uVar16 = *(uint *)&(((CustomLogic_Editor_Models_CLType_o *)__this)->fields).
                                       _Name_k__BackingField;
                    in_stack_ffffffffffffff50 = pCVar31;
                    if (0 < (int)uVar16) {
                      lVar23 = 0;
                      do {
                        plVar25 = (long *)__this;
                        if (uVar16 <= (uint)lVar23) goto label_0427e7ce;
                        pCVar8 = (&(((CustomLogic_Editor_Models_CLType_o *)__this)->fields).
                                   _Info_k__BackingField)[lVar23];
                        in_stack_ffffffffffffff40 = pMVar28;
                        pCVar31 = in_stack_ffffffffffffff50;
                        if (pCVar8 == (CustomLogic_Editor_Models_XmlInfo_o *)0x0) goto label_0427e7ba;
                        pSVar17 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetParametersStr
                                            (in_stack_ffffffffffffff50,
                                             (CustomLogic_Editor_Models_CLParameter_array *)
                                             (pCVar8->fields)._Remarks_k__BackingField,0,(MethodInfo *)in_RCX)
                        ;
                        in_R8 = (MethodInfo_3503280 *)0x0;
                        type = (CustomLogic_Editor_Models_CLType_o *)
                               System_String__Concat_3af7470
                                         ((type->fields)._Name_k__BackingField,"(",pSVar17,
                                          ")",(MethodInfo *)0x0);
                        pSVar17 = (pCVar8->fields)._Code_k__BackingField;
                        in_stack_ffffffffffffff40 = pMVar28;
                        pCVar31 = in_stack_ffffffffffffff50;
                        if (pSVar17 == (System_String_o *)0x0) goto label_0427e7ba;
                        in_RCX = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
                        str1 = (System_String_o *)((MethodInfo *)in_RCX)->methodPointer;
                        bVar15 = System_String__IsNullOrEmpty
                                           ((System_String_o *)pSVar17->fields,(MethodInfo *)0x0);
                        if ((char)bVar15 == '\0') {
                          pSVar17 = (pCVar8->fields)._Code_k__BackingField;
                          in_stack_ffffffffffffff40 = pMVar28;
                          pCVar31 = in_stack_ffffffffffffff50;
                          if (pSVar17 == (System_String_o *)0x0) goto label_0427e7ba;
                          pSVar17 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                              ((System_String_o *)pSVar17->fields,0,method_03);
                          in_RCX = &" // ";
                          str1 = System_String__Concat_3ae5ba0(" // ",pSVar17,(MethodInfo *)0x0);
                        }
                        pSVar7 = (System_Text_StringBuilder_o *)pMVar28->methodPointer;
                        pSVar17 = System_String__Concat_3ae5ba0
                                            ((System_String_o *)type,str1,(MethodInfo *)0x0);
                        in_stack_ffffffffffffff40 = pMVar28;
                        pCVar31 = in_stack_ffffffffffffff50;
                        if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7ba;
                        type = in_stack_ffffffffffffff58;
                        System_Text_StringBuilder__AppendLine_3b044f0(pSVar7,pSVar17,(MethodInfo *)0x0);
                        lVar23 = lVar23 + 1;
                        uVar30 = (uint)lVar23;
                        uVar16 = *(uint *)&(((CustomLogic_Editor_Models_CLType_o *)__this)->fields).
                                           _Name_k__BackingField;
                        in_stack_ffffffffffffff58 = type;
                      } while ((int)uVar30 < (int)uVar16);
                    }
                    in_stack_ffffffffffffff40 = pMVar28;
                    pCVar31 = in_stack_ffffffffffffff50;
                    if ((System_Text_StringBuilder_o *)pMVar28->methodPointer !=
                        (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__AppendLine_3b044f0
                                ((System_Text_StringBuilder_o *)pMVar28->methodPointer,"```",
                                 (MethodInfo *)0x0);
                      pCVar31 = in_stack_ffffffffffffff50;
                      if ((System_Text_StringBuilder_o *)pMVar28->methodPointer !=
                          (System_Text_StringBuilder_o *)0x0) {
                        System_Text_StringBuilder__AppendLine
                                  ((System_Text_StringBuilder_o *)pMVar28->methodPointer,(MethodInfo *)0x0);
                        goto label_0427e4e7;
                      }
                    }
                  }
                }
              }
            }
            else {
label_0427e4e7:
              pCVar12 = (type->fields)._StaticProperties_k__BackingField;
              if ((pCVar12 == (CustomLogic_Editor_Models_CLProperty_array *)0x0) || (pCVar12->max_length == 0)
                 ) {
label_0427e539:
                pCVar13 = (type->fields)._Constructors_k__BackingField;
                if ((pCVar13 == (CustomLogic_Editor_Models_CLConstructor_array *)0x0) ||
                   (pCVar13->max_length == 0)) {
label_0427e58b:
                  pCVar6 = (type->fields)._StaticMethods_k__BackingField;
                  if ((pCVar6 == (CustomLogic_Editor_Models_CLMethod_array *)0x0) || (pCVar6->max_length == 0)
                     ) {
label_0427e5dd:
                    pCVar12 = (type->fields)._InstanceProperties_k__BackingField;
                    if ((pCVar12 == (CustomLogic_Editor_Models_CLProperty_array *)0x0) ||
                       (pCVar12->max_length == 0)) {
label_0427e62f:
                      __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
                                  (in_stack_ffffffffffffff50->fields)._typeIndexMap;
                      if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                        System_Collections_Generic_Dictionary_object__int___GetEnumerator
                                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                                   (auStack_88 + 0x30),__this_00,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_CustomLogic_Editor_M);
                        auStack_88._32_8_ = pSStack_38;
                        auStack_88._0_8_ = CONCAT44(uStack_54,auStack_88._48_4_);
                        auStack_88._16_8_ = _Stack_48;
                        auStack_88._24_8_ = pcStack_40;
                        auStack_88._8_8_ = pIStack_50;
                        while (__this_01.fields._8_8_ = in_stack_ffffffffffffff40,
                              __this_01.fields._dictionary =
                                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                   in_stack_ffffffffffffff38,
                              __this_01.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff48,
                              __this_01.fields._current.fields.key._4_4_ = uVar30,
                              __this_01.fields._current.fields.value = (Il2CppObject *)pCVar31,
                              __this_01.fields._32_8_ = in_stack_ffffffffffffff58,
                              bVar15 = System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext
                                                 (__this_01,(MethodInfo_324FC20 *)auStack_88),
                              (char)bVar15 != '\0') {
                          auVar27 = il2cpp_runtime_helper_04284760((MethodInfo_324FC20 *)auStack_88,MethodInfo_KeyValuePair_2_CustomLogic_Editor_Models_CLType_System_I);
                          IStack_98.klass = auVar27._0_8_;
                          IStack_98.monitor = (void *)CONCAT44(IStack_98.monitor._4_4_,auVar27._8_4_);
                          __this_03.fields._8_8_ = &lStack_a0;
                          __this_03.fields.key = &IStack_98;
                          System_Collections_Generic_KeyValuePair_object__int___Deconstruct
                                    (__this_03,(Il2CppObject **)&stack0xffffffffffffff4c,MethodInfo_Void_Deconstruct,in_R8);
                          pMVar28 = in_stack_ffffffffffffff40;
                          uVar16 = uVar30;
                          if (lStack_a0 == 0) goto label_0427e7bf;
                          type = (CustomLogic_Editor_Models_CLType_o *)(ulong)uVar30;
                          arg1 = *(Il2CppObject **)(lStack_a0 + 0x18);
                          pSVar17 = (System_String_o *)
                                    (*(in_stack_ffffffffffffff50->klass->vtable)._4_GetRelativeFilePath.
                                      methodPtr)(in_stack_ffffffffffffff50,lStack_a0,
                                                 (in_stack_ffffffffffffff50->klass->vtable).
                                                 _4_GetRelativeFilePath.method);
                          in_stack_ffffffffffffff50 = pCVar31;
                          if (pSVar17 == (System_String_o *)0x0) goto label_0427e7c4;
                          __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                                   System_String__Substring_3af8da0
                                             (pSVar17,3,(pSVar17->fields)._stringLength + -3,(MethodInfo *)0x0
                                             );
                          pSVar7 = (System_Text_StringBuilder_o *)in_stack_ffffffffffffff40->methodPointer;
                          auStack_88._48_4_ = uVar30;
                          arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_88 + 0x30);
                          in_R8 = (MethodInfo_3503280 *)0x0;
                          in_stack_ffffffffffffff50 = pCVar31;
                          pSVar17 = System_String__Format_3af7930
                                              ("[^{0}]: [{1}](../{2})",arg0,arg1,(Il2CppObject *)__this,(MethodInfo *)0x0
                                              );
                          if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0427e7c9;
                          pCVar31 = in_stack_ffffffffffffff50;
                          System_Text_StringBuilder__AppendLine_3b044f0(pSVar7,pSVar17,(MethodInfo *)0x0);
                          in_stack_ffffffffffffff40 = pMVar28;
                          uVar30 = uVar16;
                        }
                        __this_02.fields._8_8_ = in_stack_ffffffffffffff40;
                        __this_02.fields._dictionary =
                             (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                             in_stack_ffffffffffffff38;
                        __this_02.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff48;
                        __this_02.fields._current.fields.key._4_4_ = uVar30;
                        __this_02.fields._current.fields.value = (Il2CppObject *)pCVar31;
                        __this_02.fields._32_8_ = in_stack_ffffffffffffff58;
                        System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose
                                  (__this_02,(MethodInfo_324FD30 *)auStack_88);
                        pIVar14 = in_stack_ffffffffffffff40->methodPointer;
                        if (pIVar14 != (Il2CppMethodPointer)0x0) {
                          pSVar17 = (System_String_o *)
                                    (**(code **)(*(long *)pIVar14 + 0x168))
                                              (pIVar14,*(undefined8 *)(*(long *)pIVar14 + 0x170));
                          return pSVar17;
                        }
                      }
                    }
                    else if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff40->methodPointer !=
                             (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__AppendLine_3b044f0
                                ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff40->methodPointer,
                                 "### Static Methods",(MethodInfo *)0x0);
                      CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendMethods
                                (in_stack_ffffffffffffff50,
                                 (CustomLogic_Editor_Models_CLMethod_array *)
                                 (type->fields)._InstanceProperties_k__BackingField,method_07);
                      pSVar7 = (in_stack_ffffffffffffff50->fields)._sb;
                      if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
                        System_Text_StringBuilder__AppendLine(pSVar7,(MethodInfo *)0x0);
                        goto label_0427e62f;
                      }
                    }
                  }
                  else if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff40->methodPointer !=
                           (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__AppendLine_3b044f0
                              ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff40->methodPointer,
                               "### Methods",(MethodInfo *)0x0);
                    CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendMethods
                              (in_stack_ffffffffffffff50,(type->fields)._StaticMethods_k__BackingField,
                               method_06);
                    pSVar7 = (in_stack_ffffffffffffff50->fields)._sb;
                    if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__AppendLine(pSVar7,(MethodInfo *)0x0);
                      goto label_0427e5dd;
                    }
                  }
                }
                else if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff40->methodPointer !=
                         (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__AppendLine_3b044f0
                            ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff40->methodPointer,
                             "### Static Properties",(MethodInfo *)0x0);
                  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendProperties
                            (in_stack_ffffffffffffff50,
                             (CustomLogic_Editor_Models_CLProperty_array *)
                             (type->fields)._Constructors_k__BackingField,method_05);
                  pSVar7 = (in_stack_ffffffffffffff50->fields)._sb;
                  if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__AppendLine(pSVar7,(MethodInfo *)0x0);
                    goto label_0427e58b;
                  }
                }
              }
              else if ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff40->methodPointer !=
                       (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__AppendLine_3b044f0
                          ((System_Text_StringBuilder_o *)in_stack_ffffffffffffff40->methodPointer,
                           "### Properties",(MethodInfo *)0x0);
                CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendProperties
                          (in_stack_ffffffffffffff50,(type->fields)._StaticProperties_k__BackingField,
                           method_04);
                pSVar7 = (in_stack_ffffffffffffff50->fields)._sb;
                if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__AppendLine(pSVar7,(MethodInfo *)0x0);
                  goto label_0427e539;
                }
              }
            }
          }
        }
      }
    }
label_0427e7ba:
    il2cpp_runtime_helper_022b2c90();
    pMVar28 = in_stack_ffffffffffffff40;
    uVar16 = uVar30;
label_0427e7bf:
    in_stack_ffffffffffffff50 = pCVar31;
    il2cpp_runtime_helper_022b2c90();
label_0427e7c4:
    il2cpp_runtime_helper_022b2c90();
label_0427e7c9:
    il2cpp_runtime_helper_022b2c90();
    plVar25 = (long *)__this;
    uVar30 = uVar16;
label_0427e7ce:
    il2cpp_runtime_helper_022b2ca0();
  } while( true );
  while (lVar23 = lVar23 + 0x10, (ulong)uVar5 << 4 != lVar23) {
label_0427e9a0:
    if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_IDisposable) {
      ppIVar20 = &(&(pCVar11->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar23)].methodPtr;
      goto label_0427e9cd;
    }
  }
label_0427e9af:
  ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar25,TypeInfo_IDisposable,0);
label_0427e9cd:
  (**ppIVar20)(plVar25,(MethodInfo *)ppIVar20[1]);
label_0427e9d6:
  _Unwind_Resume(auVar27._0_8_);
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator$$AppendProperties
// il2cpp: void CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendProperties (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o* __this, CustomLogic_Editor_Models_CLProperty_array* properties, const MethodInfo* method);
// 0x427f1e0

void CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendProperties
               (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *__this,
               CustomLogic_Editor_Models_CLProperty_array *properties,MethodInfo *method)

{
  int *piVar1;
  Il2CppType ***pppIVar2;
  uint uVar3;
  Il2CppArrayBounds *pIVar4;
  Il2CppClass *pIVar5;
  CustomLogic_Editor_Models_TypeReference_array *source;
  long lVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_object__o *pSVar7;
  bool_conflict bVar8;
  int32_t iVar9;
  long *plVar10;
  CustomLogic_Editor_Models_CLProperty_array *selector;
  System_String_array *pSVar11;
  Il2CppRGCTXData IVar12;
  Il2CppRGCTXData values;
  Il2CppRGCTXData IVar13;
  Il2CppRGCTXData IVar14;
  Il2CppRGCTXData str0;
  Il2CppObject *pIVar15;
  System_Func_TSource__TResult__o *selector_00;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar16;
  System_String_o *pSVar17;
  System_Text_StringBuilder_o *pSVar18;
  System_String_o **in_RCX;
  Il2CppRGCTXData *pIVar19;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  int iVar20;
  Il2CppRGCTXData unaff_RBX;
  Il2CppRGCTXData unaff_RBP;
  ulong uVar21;
  Il2CppRGCTXData IVar22;
  Il2CppRGCTXData IVar23;
  Il2CppRGCTXData IVar24;
  System_String_o **__this_09;
  CustomLogic_Editor_Models_CLProperty_o *unaff_R14;
  Il2CppRGCTXData unaff_R15;
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  undefined8 in_stack_fffffffffffffe80;
  undefined8 in_stack_fffffffffffffe88;
  undefined8 uVar27;
  undefined1 auStack_150 [32];
  _union_249689 _Stack_130;
  System_Collections_Generic_List_object__o *pSStack_128;
  Il2CppRGCTXData IStack_120;
  Il2CppRGCTXData IStack_118;
  Il2CppRGCTXData IStack_110;
  Il2CppRGCTXData IStack_108;
  Il2CppRGCTXData IStack_100;
  Il2CppRGCTXData IStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  Il2CppRGCTXData IStack_e0;
  Il2CppRGCTXData IStack_d8;
  Il2CppRGCTXData IStack_d0;
  Il2CppRGCTXData IStack_c8;
  Il2CppRGCTXData IStack_c0;
  Il2CppRGCTXData IStack_b8;
  Il2CppRGCTXData IStack_a8;
  Il2CppRGCTXData IStack_a0;
  Il2CppRGCTXData IStack_98;
  Il2CppRGCTXData IStack_90;
  Il2CppRGCTXData IStack_88;
  CustomLogic_Editor_Models_CLProperty_array *pCStack_80;
  Il2CppRGCTXData IStack_78;
  CustomLogic_Editor_Models_CLProperty_o *pCStack_70;
  Il2CppRGCTXData IStack_68;
  Il2CppRGCTXData IStack_60;
  undefined1 local_49;
  Il2CppRGCTXData local_48;
  CustomLogic_Editor_Models_CLProperty_array *local_40;
  Il2CppRGCTXData local_38;
  
  local_48 = (Il2CppRGCTXData)__this;
  if (g_data_057adc6e == '\0') {
    IStack_60 = (Il2CppRGCTXData)0x427f20f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_AppendProperties_b__8_0);
    IStack_60 = (Il2CppRGCTXData)0x427f21b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    IStack_60 = (Il2CppRGCTXData)0x427f227;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    IStack_60 = (Il2CppRGCTXData)0x427f233;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    IStack_60 = (Il2CppRGCTXData)0x427f23f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    IStack_60 = (Il2CppRGCTXData)0x427f24b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    IStack_60 = (Il2CppRGCTXData)0x427f257;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_List_1_System_String);
    IStack_60 = (Il2CppRGCTXData)0x427f263;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    IStack_60 = (Il2CppRGCTXData)0x427f26f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_List_string);
    IStack_60 = (Il2CppRGCTXData)0x427f27b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    IStack_60 = (Il2CppRGCTXData)0x427f287;
    il2cpp_runtime_helper_023445d0(&" ");
    IStack_60 = (Il2CppRGCTXData)0x427f293;
    il2cpp_runtime_helper_023445d0(&"\r\n");
    IStack_60 = (Il2CppRGCTXData)0x427f29f;
    il2cpp_runtime_helper_023445d0(&", ");
    IStack_60 = (Il2CppRGCTXData)0x427f2ab;
    il2cpp_runtime_helper_023445d0(&"Refer to ");
    IStack_60 = (Il2CppRGCTXData)0x427f2b7;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adc6e = '\x01';
  }
  local_49 = 0;
  IStack_60 = (Il2CppRGCTXData)0x427f2d2;
  plVar10 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_List_List_string);
  IStack_60 = (Il2CppRGCTXData)0x427f2e7;
  IVar14 = MethodInfo_List_1_List_1_System_String;
  IVar23.rgctxDataDummy = plVar10;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)plVar10,(MethodInfo_362B8B0 *)MethodInfo_List_1_List_1_System_String.method);
  pIVar19 = (Il2CppRGCTXData *)in_RCX;
  selector = properties;
  if (properties == (CustomLogic_Editor_Models_CLProperty_array *)0x0) {
label_0427f78b:
    in_RCX = (System_String_o **)pIVar19;
    IStack_60 = (Il2CppRGCTXData)0x427f790;
    il2cpp_runtime_helper_022b2c90();
    IVar12 = unaff_RBP;
    properties = selector;
  }
  else {
    iVar20 = (int)properties->max_length;
    method_00 = extraout_RDX;
    if (iVar20 < 1) {
label_0427f755:
      pSVar18 = (System_Text_StringBuilder_o *)(local_48.method)->name;
      IVar23 = (Il2CppRGCTXData)(local_48.method)->klass;
      IStack_60 = (Il2CppRGCTXData)0x427f76a;
      IVar14.rgctxDataDummy = plVar10;
      pSVar17 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__CreateTable
                          ((System_Collections_Generic_List_string__o *)IVar23.method,
                           (System_Collections_Generic_List_List_string___o *)plVar10,method_00);
      unaff_RBX.rgctxDataDummy = (System_String_array *)0x0;
      pIVar19 = (Il2CppRGCTXData *)in_RCX;
      selector = properties;
      if (pSVar18 != (System_Text_StringBuilder_o *)0x0) {
        IStack_60 = (Il2CppRGCTXData)0x427f77c;
        System_Text_StringBuilder__AppendLine_3b044f0(pSVar18,pSVar17,(MethodInfo *)0x0);
        return;
      }
      goto label_0427f78b;
    }
    IVar12.rgctxDataDummy = (System_String_array *)0x0;
    unaff_R15.rgctxDataDummy = (System_String_array *)0x0;
    local_40 = properties;
    if (iVar20 != 0) {
      do {
        unaff_R14 = properties->m_Items[unaff_R15._0_4_];
        pIVar19 = (Il2CppRGCTXData *)in_RCX;
        unaff_RBP = IVar12;
        selector = properties;
        if (unaff_R14 == (CustomLogic_Editor_Models_CLProperty_o *)0x0) goto label_0427f78b;
        unaff_RBP = (Il2CppRGCTXData)(unaff_R14->fields)._Info_k__BackingField;
        if (unaff_RBP.rgctxDataDummy == (System_String_array *)0x0) {
label_0427f38e:
          unaff_RBP = IVar12;
          IVar23 = "";
        }
        else {
          if (unaff_RBP.rgctxDataDummy == (System_String_array *)0x0) goto label_0427f78b;
          IVar23 = (Il2CppRGCTXData)
                   *(Il2CppRGCTXData *)
                    &((System_String_Fields *)&(unaff_RBP.method)->invoker_method)->_stringLength;
          IVar12 = unaff_RBP;
          if (IVar23.rgctxDataDummy == (System_String_array *)0x0) goto label_0427f38e;
        }
        IVar14.rgctxDataDummy = (System_String_array *)0x0;
        IStack_60 = (Il2CppRGCTXData)0x427f39f;
        IVar12.rgctxDataDummy =
             CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                       (IVar23.rgctxDataDummy,0,method_00);
        pIVar19 = (Il2CppRGCTXData *)in_RCX;
        if (IVar12.rgctxDataDummy == (System_String_array *)0x0) goto label_0427f78b;
        pIVar19 = (Il2CppRGCTXData *)0x0;
        IStack_60 = (Il2CppRGCTXData)0x427f3c6;
        IVar14 = "\r\n";
        IVar22.rgctxDataDummy =
             System_String__Replace_3af9030
                       (IVar12.rgctxDataDummy,"\r\n".rgctxDataDummy," ",(MethodInfo *)0x0);
        IVar23 = IVar12;
        if (IVar22.rgctxDataDummy == (System_String_array *)0x0) goto label_0427f78b;
        IVar14 = (Il2CppRGCTXData)0xa;
        pIVar19 = (Il2CppRGCTXData *)0x0;
        IStack_60 = (Il2CppRGCTXData)0x427f3e3;
        pSVar17 = System_String__Replace((System_String_o *)IVar22.method,10,0x20,(MethodInfo *)0x0);
        IVar23 = IVar22;
        if (pSVar17 == (System_String_o *)0x0) goto label_0427f78b;
        pIVar19 = (Il2CppRGCTXData *)0x0;
        IStack_60 = (Il2CppRGCTXData)0x427f400;
        unaff_RBX.method = (MethodInfo *)System_String__Replace(pSVar17,9,0x20,(MethodInfo *)0x0);
        pSVar11 = (unaff_R14->fields)._EnumNames_k__BackingField;
        local_38 = unaff_RBP;
        if ((pSVar11 != (System_String_array *)0x0) && (pSVar11->max_length != 0)) {
          IStack_60 = (Il2CppRGCTXData)0x427f42a;
          bVar8 = System_String__IsNullOrEmpty((System_String_o *)unaff_RBX.method,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            IStack_60 = (Il2CppRGCTXData)0x427f442;
            unaff_RBX.method =
                 (MethodInfo *)
                 System_String__Concat_3ae5ba0
                           ((System_String_o *)unaff_RBX.method," ",(MethodInfo *)0x0);
          }
          unaff_RBP = (Il2CppRGCTXData)(unaff_R14->fields)._EnumNames_k__BackingField;
          IStack_60 = (Il2CppRGCTXData)0x427f458;
          selector = (CustomLogic_Editor_Models_CLProperty_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
          IStack_60 = (Il2CppRGCTXData)0x427f474;
          System_Func_object__object____ctor();
          IStack_60 = (Il2CppRGCTXData)0x427f489;
          IVar23.method =
               (MethodInfo *)
               System_Linq_Enumerable__Select_object__object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)unaff_RBP.method,
                          (System_Func_TSource__TResult__o *)selector,MethodInfo_IEnumerable_1_System_String_Select_String_String);
          pIVar19 = &MethodInfo_String_ToArray_String;
          IStack_60 = (Il2CppRGCTXData)0x427f49b;
          IVar14 = MethodInfo_String_ToArray_String;
          pSVar11 = (System_String_array *)
                    System_Linq_Enumerable__ToArray_object_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)IVar23.method,
                               (MethodInfo_2522A10 *)MethodInfo_String_ToArray_String.method);
          properties = local_40;
          if (pSVar11 == (System_String_array *)0x0) goto label_0427f78b;
          if ((int)pSVar11->max_length == 1) {
            pSVar17 = pSVar11->m_Items[0];
          }
          else {
            IStack_60 = (Il2CppRGCTXData)0x427f4f4;
            pSVar17 = System_String__Join(", ",pSVar11,(MethodInfo *)0x0);
          }
          pIVar19 = (Il2CppRGCTXData *)0x0;
          IStack_60 = (Il2CppRGCTXData)0x427f50b;
          unaff_RBX.rgctxDataDummy =
               System_String__Concat_3af7150(unaff_RBX.rgctxDataDummy,"Refer to ",pSVar17,(MethodInfo *)0x0);
        }
        IStack_60 = (Il2CppRGCTXData)0x427f51d;
        unaff_RBP.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        IStack_60 = (Il2CppRGCTXData)0x427f532;
        IVar14 = MethodInfo_List_1_System_String;
        IVar23.rgctxDataDummy = unaff_RBP.rgctxDataDummy;
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)unaff_RBP.method,
                   (MethodInfo_362B8B0 *)MethodInfo_List_1_System_String.method);
        IVar12 = MethodInfo_Void_Add;
        selector = properties;
        if (unaff_RBP.rgctxDataDummy == (System_String_array *)0x0) goto label_0427f78b;
        IVar14 = (Il2CppRGCTXData)(unaff_R14->fields)._Name_k__BackingField;
        piVar1 = (int *)((long)&(unaff_RBP.method)->name + 4);
        *piVar1 = *piVar1 + 1;
        pIVar4 = (Il2CppArrayBounds *)(unaff_RBP.method)->invoker_method;
        pIVar19 = (Il2CppRGCTXData *)IVar12;
        if (pIVar4 == (Il2CppArrayBounds *)0x0) goto label_0427f78b;
        uVar3 = *(uint *)&(unaff_RBP.method)->name;
        if (uVar3 < (uint)pIVar4[1].lower_bound) {
          IVar12._0_4_ = uVar3 + 1;
          IVar12._4_4_ = 0;
          *(uint *)&(unaff_RBP.method)->name = IVar12._0_4_;
          ((Il2CppRGCTXData *)(&pIVar4[2].length + (int)uVar3))->method = (MethodInfo *)IVar14;
          IStack_60 = (Il2CppRGCTXData)0x427f57b;
          il2cpp_runtime_helper_022b4080(&pIVar4[2].length + (int)uVar3);
        }
        else {
          IStack_60 = (Il2CppRGCTXData)0x427f597;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)unaff_RBP.method,
                     (Il2CppObject *)IVar14.method,
                     (MethodInfo_362C220 *)(IVar12.method)->klass->rgctx_data[0xe].method);
        }
        IVar14 = (Il2CppRGCTXData)(unaff_R14->fields)._Type_k__BackingField;
        IStack_60 = (Il2CppRGCTXData)0x427f5aa;
        IVar23 = local_48;
        pSVar17 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr
                            ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)local_48.method,
                             (CustomLogic_Editor_Models_TypeReference_o *)IVar14.method,1,IVar12.method);
        IVar12 = MethodInfo_Void_Add;
        piVar1 = (int *)((long)&(unaff_RBP.method)->name + 4);
        *piVar1 = *piVar1 + 1;
        pIVar4 = (Il2CppArrayBounds *)(unaff_RBP.method)->invoker_method;
        pIVar19 = (Il2CppRGCTXData *)(System_String_array *)0x0;
        if (pIVar4 == (Il2CppArrayBounds *)0x0) goto label_0427f78b;
        uVar3 = *(uint *)&(unaff_RBP.method)->name;
        if (uVar3 < (uint)pIVar4[1].lower_bound) {
          *(uint *)&(unaff_RBP.method)->name = uVar3 + 1;
          (&pIVar4[2].length)[(int)uVar3] = (il2cpp_array_size_t)pSVar17;
          IStack_60 = (Il2CppRGCTXData)0x427f5e9;
          il2cpp_runtime_helper_022b4080(&pIVar4[2].length + (int)uVar3);
        }
        else {
          IStack_60 = (Il2CppRGCTXData)0x427f60a;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)unaff_RBP.method,(Il2CppObject *)pSVar17,
                     (MethodInfo_362C220 *)(IVar12.method)->klass->rgctx_data[0xe].method);
        }
        local_49 = (undefined1)(unaff_R14->fields)._IsReadonly_k__BackingField;
        if (*(int *)(g_data_057b9b98 + 0xe4) == 0) {
          IStack_60 = (Il2CppRGCTXData)0x427f62c;
          il2cpp_runtime_helper_02337ed0();
        }
        IVar23.rgctxDataDummy = &local_49;
        IVar14.rgctxDataDummy = (System_String_array *)0x0;
        IStack_60 = (Il2CppRGCTXData)0x427f638;
        IVar22.method = (MethodInfo *)System_Boolean__ToString(IVar23._0_4_,(MethodInfo *)0x0);
        IVar12 = MethodInfo_Void_Add;
        piVar1 = (int *)((long)&(unaff_RBP.method)->name + 4);
        *piVar1 = *piVar1 + 1;
        pIVar4 = (Il2CppArrayBounds *)(unaff_RBP.method)->invoker_method;
        pIVar19 = (Il2CppRGCTXData *)(System_String_array *)0x0;
        if (pIVar4 == (Il2CppArrayBounds *)0x0) goto label_0427f78b;
        uVar3 = *(uint *)&(unaff_RBP.method)->name;
        if (uVar3 < (uint)pIVar4[1].lower_bound) {
          *(uint *)&(unaff_RBP.method)->name = uVar3 + 1;
          IVar23.rgctxDataDummy = &pIVar4[2].length + (int)uVar3;
          ((Il2CppRGCTXData *)(&pIVar4[2].length + (int)uVar3))->method = (MethodInfo *)IVar22;
          IStack_60 = (Il2CppRGCTXData)0x427f677;
          il2cpp_runtime_helper_022b4080();
          IVar14 = IVar22;
        }
        else {
          IStack_60 = (Il2CppRGCTXData)0x427f69a;
          IVar23.rgctxDataDummy = unaff_RBP.rgctxDataDummy;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)unaff_RBP.method,
                     (Il2CppObject *)IVar22.method,
                     (MethodInfo_362C220 *)(IVar12.method)->klass->rgctx_data[0xe].method);
          IVar14 = IVar22;
        }
        pIVar19 = (Il2CppRGCTXData *)MethodInfo_Void_Add;
        piVar1 = (int *)((long)&(unaff_RBP.method)->name + 4);
        *piVar1 = *piVar1 + 1;
        pIVar4 = (Il2CppArrayBounds *)(unaff_RBP.method)->invoker_method;
        if (pIVar4 == (Il2CppArrayBounds *)0x0) goto label_0427f78b;
        uVar3 = *(uint *)&(unaff_RBP.method)->name;
        IVar14 = unaff_RBX;
        if (uVar3 < (uint)pIVar4[1].lower_bound) {
          pIVar19._0_4_ = uVar3 + 1;
          pIVar19._4_4_ = 0;
          *(uint *)&(unaff_RBP.method)->name = (uint)pIVar19;
          IVar23.rgctxDataDummy = &pIVar4[2].length + (int)uVar3;
          ((Il2CppRGCTXData *)(&pIVar4[2].length + (int)uVar3))->method = (MethodInfo *)unaff_RBX;
          IStack_60 = (Il2CppRGCTXData)0x427f6d9;
          il2cpp_runtime_helper_022b4080();
          in_RCX = (System_String_o **)MethodInfo_Void_Add;
        }
        else {
          IStack_60 = (Il2CppRGCTXData)0x427f70a;
          IVar23.rgctxDataDummy = unaff_RBP.rgctxDataDummy;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)unaff_RBP.method,
                     (Il2CppObject *)unaff_RBX.method,
                     (MethodInfo_362C220 *)((MethodInfo *)pIVar19)->klass->rgctx_data[0xe].method);
          in_RCX = (System_String_o **)MethodInfo_Void_Add;
        }
        MethodInfo_Void_Add = (Il2CppRGCTXData)in_RCX;
        if ((System_String_array *)plVar10 == (System_String_array *)0x0) goto label_0427f78b;
        piVar1 = (int *)((long)&((MethodInfo *)plVar10)->name + 4);
        *piVar1 = *piVar1 + 1;
        pIVar4 = (Il2CppArrayBounds *)((MethodInfo *)plVar10)->invoker_method;
        pIVar19 = (Il2CppRGCTXData *)in_RCX;
        if (pIVar4 == (Il2CppArrayBounds *)0x0) goto label_0427f78b;
        uVar3 = *(uint *)&((MethodInfo *)plVar10)->name;
        if (uVar3 < (uint)pIVar4[1].lower_bound) {
          in_RCX._0_4_ = uVar3 + 1;
          in_RCX._4_4_ = 0;
          *(uint *)&((MethodInfo *)plVar10)->name = (uint)in_RCX;
          IVar23.rgctxDataDummy = &pIVar4[2].length + (int)uVar3;
          ((Il2CppRGCTXData *)(&pIVar4[2].length + (int)uVar3))->method = (MethodInfo *)unaff_RBP;
          IStack_60 = (Il2CppRGCTXData)0x427f750;
          il2cpp_runtime_helper_022b4080();
          method_00 = extraout_RDX_01;
          IVar14 = unaff_RBP;
        }
        else {
          IStack_60 = (Il2CppRGCTXData)0x427f33a;
          IVar23.rgctxDataDummy = plVar10;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)plVar10,(Il2CppObject *)unaff_RBP.method,
                     (MethodInfo_362C220 *)((MethodInfo *)in_RCX)->klass->rgctx_data[0xe].method);
          method_00 = extraout_RDX_00;
          IVar14 = unaff_RBP;
        }
        unaff_R15._0_4_ = unaff_R15._0_4_ + 1;
        unaff_R15._4_4_ = 0;
        uVar3 = (uint)properties->max_length;
        unaff_RBP = local_38;
        if ((int)uVar3 <= (int)unaff_R15._0_4_) goto label_0427f755;
        IVar12 = local_38;
      } while (unaff_R15._0_4_ < uVar3);
    }
  }
  IStack_60 = (Il2CppRGCTXData)0x427f795;
  il2cpp_runtime_helper_022b2ca0();
  IVar22 = IVar14;
  __this_09 = (System_String_o **)IVar23;
  IStack_88 = unaff_RBX;
  pCStack_80 = properties;
  IStack_78.rgctxDataDummy = plVar10;
  pCStack_70 = unaff_R14;
  IStack_68 = unaff_R15;
  IStack_60 = IVar12;
  if (g_data_057adc6f == '\0') {
    IStack_b8 = (Il2CppRGCTXData)0x427f7cd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_AppendMethods_b__9_1);
    IStack_b8 = (Il2CppRGCTXData)0x427f7d9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_CLParameter);
    IStack_b8 = (Il2CppRGCTXData)0x427f7e5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    IStack_b8 = (Il2CppRGCTXData)0x427f7f1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    IStack_b8 = (Il2CppRGCTXData)0x427f7fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CLParameter_bool);
    IStack_b8 = (Il2CppRGCTXData)0x427f809;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    IStack_b8 = (Il2CppRGCTXData)0x427f815;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    IStack_b8 = (Il2CppRGCTXData)0x427f821;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_AppendMethods_b__9_0);
    IStack_b8 = (Il2CppRGCTXData)0x427f82d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    IStack_b8 = (Il2CppRGCTXData)0x427f839;
    il2cpp_runtime_helper_023445d0(&" ");
    IStack_b8 = (Il2CppRGCTXData)0x427f845;
    il2cpp_runtime_helper_023445d0(&"> **Remarks**: ");
    IStack_b8 = (Il2CppRGCTXData)0x427f851;
    il2cpp_runtime_helper_023445d0(&"__");
    IStack_b8 = (Il2CppRGCTXData)0x427f85d;
    il2cpp_runtime_helper_023445d0(&"> ");
    IStack_b8 = (Il2CppRGCTXData)0x427f869;
    il2cpp_runtime_helper_023445d0(&"{% hint style=\"warning\" %}");
    IStack_b8 = (Il2CppRGCTXData)0x427f875;
    il2cpp_runtime_helper_023445d0(&"> - `");
    IStack_b8 = (Il2CppRGCTXData)0x427f881;
    il2cpp_runtime_helper_023445d0(&"<pre class=\"language-typescript\"><code class=\"lang-typescript\">function ");
    IStack_b8 = (Il2CppRGCTXData)0x427f88d;
    il2cpp_runtime_helper_023445d0(&"null");
    IStack_b8 = (Il2CppRGCTXData)0x427f899;
    il2cpp_runtime_helper_023445d0(&"{% endhint %}");
    IStack_b8 = (Il2CppRGCTXData)0x427f8a5;
    il2cpp_runtime_helper_023445d0(&"`: ");
    IStack_b8 = (Il2CppRGCTXData)0x427f8b1;
    il2cpp_runtime_helper_023445d0(&", ");
    IStack_b8 = (Il2CppRGCTXData)0x427f8bd;
    il2cpp_runtime_helper_023445d0(&"Refer to ");
    IStack_b8 = (Il2CppRGCTXData)0x427f8c9;
    il2cpp_runtime_helper_023445d0(&" -> ");
    IStack_b8 = (Il2CppRGCTXData)0x427f8d5;
    il2cpp_runtime_helper_023445d0(&"(");
    IStack_b8 = (Il2CppRGCTXData)0x427f8e1;
    il2cpp_runtime_helper_023445d0(&")");
    IStack_b8 = (Il2CppRGCTXData)0x427f8ed;
    il2cpp_runtime_helper_023445d0(&"");
    IStack_b8 = (Il2CppRGCTXData)0x427f8f9;
    il2cpp_runtime_helper_023445d0(&"> **Returns**: ");
    IStack_b8 = (Il2CppRGCTXData)0x427f905;
    il2cpp_runtime_helper_023445d0(&"> **Parameters**:");
    IStack_b8 = (Il2CppRGCTXData)0x427f911;
    il2cpp_runtime_helper_023445d0(&"**Obsolete**: ");
    __this_09 = &"</code></pre>";
    IStack_b8 = (Il2CppRGCTXData)0x427f91d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc6f = '\x01';
  }
  IStack_a8 = IVar23;
  if (IVar14.rgctxDataDummy == (System_String_array *)0x0) {
label_0428007e:
    IStack_b8 = (Il2CppRGCTXData)0x4280083;
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  if (*(int *)&(IVar14.method)->name < 1) {
    return;
  }
  str0.rgctxDataDummy = (System_Collections_Generic_List_string__o *)0x0;
  IStack_98 = IVar14;
  if (*(int *)&(IVar14.method)->name != 0) {
    do {
      IVar13 = (Il2CppRGCTXData)
               ((Il2CppRGCTXData *)((long)IVar14.rgctxDataDummy + (long)str0._0_4_ * 8 + 0x20))->method;
      if ((IVar13.rgctxDataDummy == (System_String_array *)0x0) ||
         (__this_09 = &(IVar13.method)->return_type->data,
         (System_String_array *)__this_09 == (System_String_array *)0x0)) goto label_0428007e;
      IStack_b8 = (Il2CppRGCTXData)0x427f9a9;
      IVar22 = "__";
      bVar8 = System_String__StartsWith
                        ((System_String_o *)__this_09,(System_String_o *)"__".method,(MethodInfo *)0x0
                        );
      IVar12 = IStack_a8;
      if ((char)bVar8 == '\0') {
        IStack_b8 = (Il2CppRGCTXData)0x427f9c8;
        IStack_90 = str0;
        plVar10 = (long *)CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetParametersStr
                                    ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)IStack_a8.method
                                     ,(CustomLogic_Editor_Models_CLParameter_array *)(IVar13.method)->name,2,
                                     (MethodInfo *)in_RCX);
        IStack_b8 = (Il2CppRGCTXData)0x427f9dc;
        pSVar17 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr
                            ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)IVar12.method,
                             (CustomLogic_Editor_Models_TypeReference_o *)(IVar13.method)->klass,2,
                             (MethodInfo *)in_RCX);
        IStack_b8 = (Il2CppRGCTXData)0x427f9e9;
        bVar8 = System_String__IsNullOrEmpty(pSVar17,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          IStack_b8 = (Il2CppRGCTXData)0x427fa01;
          bVar8 = System_String__op_Equality(pSVar17,"null",(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') goto label_0427fa05;
          IStack_b8 = (Il2CppRGCTXData)0x427fa33;
          IVar23.method = (MethodInfo *)System_String__Concat_3ae5ba0(" -> ",pSVar17,(MethodInfo *)0x0);
        }
        else {
label_0427fa05:
          IVar23 = **(Il2CppRGCTXData **)(g_data_057b9c00 + 0xb8);
        }
        IVar24 = IStack_a8;
        IStack_a0 = IVar13;
        if ((System_Text_StringBuilder_o *)(IStack_a8.method)->name == (System_Text_StringBuilder_o *)0x0)
        goto label_0428007e;
        IStack_b8 = (Il2CppRGCTXData)0x427fa5e;
        System_Text_StringBuilder__Append_3b03f90
                  ((System_Text_StringBuilder_o *)(IStack_a8.method)->name,"<pre class=\"language-typescript\"><code class=\"lang-typescript\">function ",(MethodInfo *)0x0);
        unaff_R15 = (Il2CppRGCTXData)(IVar24.method)->name;
        IVar22 = (Il2CppRGCTXData)0x5;
        IStack_b8 = (Il2CppRGCTXData)0x427fa76;
        __this_09 = (System_String_o **)TypeInfo_string;
        IVar14.rgctxDataDummy = (void *)il2cpp_runtime_helper_022b2a40();
        if (IVar14.rgctxDataDummy == (void *)0x0) goto label_0428007e;
        IVar12 = IVar24;
        if (*(int *)&(IVar14.method)->name == 0) break;
        IVar22 = (Il2CppRGCTXData)(IStack_a0.method)->return_type;
        __this_09 = &((IVar14.klass)->_1).byval_arg.data;
        (IVar14.method)->klass = (Il2CppClass *)IVar22;
        IStack_b8 = (Il2CppRGCTXData)0x427faa2;
        il2cpp_runtime_helper_022b4080();
        IVar13 = (Il2CppRGCTXData)"(";
        if (*(uint *)&(IVar14.method)->name < 2) break;
        __this_09 = (System_String_o **)&((IVar14.klass)->_1).byval_arg.bits;
        (IVar14.method)->return_type = (Il2CppType *)"(";
        IStack_b8 = (Il2CppRGCTXData)0x427fac4;
        il2cpp_runtime_helper_022b4080();
        IVar22 = IVar13;
        if (*(uint *)&(IVar14.method)->name < 3) break;
        __this_09 = &((IVar14.klass)->_1).this_arg.data;
        (IVar14.method)->parameters = (Il2CppType **)plVar10;
        IStack_b8 = (Il2CppRGCTXData)0x427fadf;
        IVar22.method = (MethodInfo *)plVar10;
        il2cpp_runtime_helper_022b4080();
        IVar13 = ")";
        if (*(uint *)&(IVar14.method)->name < 4) break;
        __this_09 = (System_String_o **)&((IVar14.klass)->_1).this_arg.bits;
        (IVar14.method)->field7_0x38 = (_union_13)")";
        IStack_b8 = (Il2CppRGCTXData)0x427fb01;
        il2cpp_runtime_helper_022b4080();
        str0 = IStack_90;
        IVar22 = IVar13;
        if (*(uint *)&(IVar14.method)->name < 5) break;
        (IVar14.method)->field8_0x40 = (_union_14)IVar23;
        IStack_b8 = (Il2CppRGCTXData)0x427fb24;
        il2cpp_runtime_helper_022b4080(&(IVar14.method)->field8_0x40);
        IStack_b8 = (Il2CppRGCTXData)0x427fb2e;
        pSVar17 = System_String__Concat_3af7570((System_String_array *)IVar14.method,(MethodInfo *)0x0);
        if (unaff_R15.rgctxDataDummy == (System_String_array *)0x0) goto label_0428007e;
        IStack_b8 = (Il2CppRGCTXData)0x427fb44;
        System_Text_StringBuilder__Append_3b03f90
                  ((System_Text_StringBuilder_o *)unaff_R15.method,pSVar17,(MethodInfo *)0x0);
        IVar14 = IStack_98;
        if ((System_Text_StringBuilder_o *)(IVar24.method)->name == (System_Text_StringBuilder_o *)0x0)
        goto label_0428007e;
        IStack_b8 = (Il2CppRGCTXData)0x427fb67;
        System_Text_StringBuilder__AppendLine_3b044f0
                  ((System_Text_StringBuilder_o *)(IVar24.method)->name,"</code></pre>",(MethodInfo *)0x0);
        unaff_R15 = IStack_a0;
        IStack_b8 = (Il2CppRGCTXData)0x427fb76;
        bVar8 = CustomLogic_Editor_Models_BaseModel__get_IsObsolete
                          ((CustomLogic_Editor_Models_BaseModel_o *)IStack_a0.method,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          if ((System_Text_StringBuilder_o *)(IVar24.method)->name == (System_Text_StringBuilder_o *)0x0)
          goto label_0428007e;
          IStack_b8 = (Il2CppRGCTXData)0x427fb92;
          System_Text_StringBuilder__AppendLine
                    ((System_Text_StringBuilder_o *)(IVar24.method)->name,(MethodInfo *)0x0);
          if ((System_Text_StringBuilder_o *)(IVar24.method)->name == (System_Text_StringBuilder_o *)0x0)
          goto label_0428007e;
          IStack_b8 = (Il2CppRGCTXData)0x427fbb0;
          System_Text_StringBuilder__AppendLine_3b044f0
                    ((System_Text_StringBuilder_o *)(IVar24.method)->name,"{% hint style=\"warning\" %}",(MethodInfo *)0x0);
          IVar23 = (Il2CppRGCTXData)(IVar24.method)->name;
          IStack_b8 = (Il2CppRGCTXData)0x427fbc9;
          pSVar17 = System_String__Concat_3ae5ba0
                              ("**Obsolete**: ",
                               *(System_String_o **)
                                &((System_String_Fields *)&(unaff_R15.method)->invoker_method)->_stringLength,
                               (MethodInfo *)0x0);
          if (IVar23.rgctxDataDummy == (System_String_array *)0x0) goto label_0428007e;
          IStack_b8 = (Il2CppRGCTXData)0x427fbdf;
          System_Text_StringBuilder__AppendLine_3b044f0
                    ((System_Text_StringBuilder_o *)IVar23.method,pSVar17,(MethodInfo *)0x0);
          if ((System_Text_StringBuilder_o *)(IVar24.method)->name == (System_Text_StringBuilder_o *)0x0)
          goto label_0428007e;
          IStack_b8 = (Il2CppRGCTXData)0x427fbfd;
          System_Text_StringBuilder__AppendLine_3b044f0
                    ((System_Text_StringBuilder_o *)(IVar24.method)->name,"{% endhint %}",(MethodInfo *)0x0);
          if ((System_Text_StringBuilder_o *)(IVar24.method)->name == (System_Text_StringBuilder_o *)0x0)
          goto label_0428007e;
          IStack_b8 = (Il2CppRGCTXData)0x427fc11;
          System_Text_StringBuilder__AppendLine
                    ((System_Text_StringBuilder_o *)(IVar24.method)->name,(MethodInfo *)0x0);
        }
        if ((unaff_R15.method)->parameters == (Il2CppType **)0x0) goto label_0428007e;
        __this_09 = (System_String_o **)((Il2CppRGCTXData *)((unaff_R15.method)->parameters + 2))->method;
        IVar22.rgctxDataDummy = (System_String_array *)0x0;
        IStack_b8 = (Il2CppRGCTXData)0x427fc29;
        bVar8 = System_String__IsNullOrEmpty((System_String_o *)__this_09,(MethodInfo *)0x0);
        IVar12 = IStack_a8;
        IVar13 = IVar24;
        if ((char)bVar8 == '\0') {
          if ((unaff_R15.method)->parameters == (Il2CppType **)0x0) goto label_0428007e;
          pSVar18 = (System_Text_StringBuilder_o *)(IStack_a8.method)->name;
          IStack_b8 = (Il2CppRGCTXData)0x427fc52;
          pSVar17 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                              ((System_String_o *)(unaff_R15.method)->parameters[2],0,method_01);
          in_RCX = &"> ";
          IStack_b8 = (Il2CppRGCTXData)0x427fc66;
          pSVar17 = System_String__Concat_3ae5ba0("> ",pSVar17,(MethodInfo *)0x0);
          if (pSVar18 == (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
          IStack_b8 = (Il2CppRGCTXData)0x427fc7c;
          System_Text_StringBuilder__AppendLine_3b044f0(pSVar18,pSVar17,(MethodInfo *)0x0);
          if ((System_Text_StringBuilder_o *)(IVar12.method)->name == (System_Text_StringBuilder_o *)0x0)
          goto label_0428007e;
          IStack_b8 = (Il2CppRGCTXData)0x427fc9a;
          System_Text_StringBuilder__AppendLine_3b044f0
                    ((System_Text_StringBuilder_o *)(IVar12.method)->name,"> ",(MethodInfo *)0x0);
          if ((unaff_R15.method)->parameters == (Il2CppType **)0x0) goto label_0428007e;
          IStack_b8 = (Il2CppRGCTXData)0x427fcb2;
          bVar8 = System_String__IsNullOrEmpty
                            ((System_String_o *)(unaff_R15.method)->parameters[3],(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            if ((unaff_R15.method)->parameters == (Il2CppType **)0x0) goto label_0428007e;
            pSVar18 = (System_Text_StringBuilder_o *)(IVar12.method)->name;
            IStack_b8 = (Il2CppRGCTXData)0x427fcd2;
            pSVar17 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                ((System_String_o *)(unaff_R15.method)->parameters[3],0,method_02);
            in_RCX = &"> **Remarks**: ";
            IStack_b8 = (Il2CppRGCTXData)0x427fce6;
            pSVar17 = System_String__Concat_3ae5ba0("> **Remarks**: ",pSVar17,(MethodInfo *)0x0);
            if (pSVar18 == (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
            IStack_b8 = (Il2CppRGCTXData)0x427fcfc;
            System_Text_StringBuilder__AppendLine_3b044f0(pSVar18,pSVar17,(MethodInfo *)0x0);
            if ((System_Text_StringBuilder_o *)(IVar12.method)->name == (System_Text_StringBuilder_o *)0x0)
            goto label_0428007e;
            IStack_b8 = (Il2CppRGCTXData)0x427fd1a;
            System_Text_StringBuilder__AppendLine_3b044f0
                      ((System_Text_StringBuilder_o *)(IVar12.method)->name,"> ",(MethodInfo *)0x0);
          }
          unaff_R15 = (Il2CppRGCTXData)(unaff_R15.method)->name;
          if (unaff_R15.rgctxDataDummy != (System_String_array *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              IStack_b8 = (Il2CppRGCTXData)0x427fd68;
              il2cpp_runtime_helper_02337ed0();
              IVar23 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(*(long *)(TypeInfo_c + 0xb8) + 0x20))->method;
            }
            else {
              IVar23 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(*(long *)(TypeInfo_c + 0xb8) + 0x20))->method;
            }
            if (IVar23.rgctxDataDummy == (System_String_array *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                IStack_b8 = (Il2CppRGCTXData)0x427fd82;
                il2cpp_runtime_helper_02337ed0();
              }
              plVar10 = &TypeInfo_c;
              IStack_b8 = (Il2CppRGCTXData)0x427fda6;
              IVar23.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CLParameter_bool);
              in_RCX = (System_String_o **)0x0;
              IStack_b8 = (Il2CppRGCTXData)0x427fdc0;
              System_Func_object__bool____ctor();
              lVar6 = *(long *)(TypeInfo_c + 0xb8);
              ((Il2CppRGCTXData *)(lVar6 + 0x20))->method = (MethodInfo *)IVar23;
              IStack_b8 = (Il2CppRGCTXData)0x427fddb;
              il2cpp_runtime_helper_022b4080(lVar6 + 0x20,IVar23.rgctxDataDummy);
              IVar14 = IStack_98;
            }
            IStack_b8 = (Il2CppRGCTXData)0x427fdf5;
            bVar8 = System_Linq_Enumerable__Any_object__2504f10
                              ((System_Collections_Generic_IEnumerable_TSource__o *)unaff_R15.method,
                               (System_Func_TSource__bool__o *)IVar23.method,MethodInfo_Boolean_Any_CLParameter);
            if ((char)bVar8 != '\0') {
              __this_09 = (System_String_o **)(IVar12.method)->name;
              if ((System_String_array *)__this_09 == (System_String_array *)0x0) goto label_0428007e;
              IStack_b8 = (Il2CppRGCTXData)0x427fe1b;
              IVar22 = "> **Parameters**:";
              System_Text_StringBuilder__AppendLine_3b044f0
                        ((System_Text_StringBuilder_o *)__this_09,(System_String_o *)"> **Parameters**:".method,
                         (MethodInfo *)0x0);
              plVar10 = (long *)(IStack_a0.method)->name;
              if ((System_String_array *)plVar10 == (System_String_array *)0x0) goto label_0428007e;
              if (0 < *(int *)&((MethodInfo *)plVar10)->name) {
                unaff_R15.rgctxDataDummy = (System_String_array *)0x0;
                IVar13.rgctxDataDummy = (System_String_array *)0x0;
                if (*(int *)&((MethodInfo *)plVar10)->name == 0) break;
                while( true ) {
                  str0 = (Il2CppRGCTXData)
                         ((Il2CppRGCTXData *)((long)plVar10 + (long)IVar13._0_4_ * 8 + 0x20))->klass;
                  if (str0.rgctxDataDummy == (System_Collections_Generic_List_string__o *)0x0)
                  goto label_0428007e;
                  IStack_b8 = (Il2CppRGCTXData)0x427fe94;
                  bVar8 = System_String__IsNullOrEmpty
                                    ((System_String_o *)(str0.method)->name,(MethodInfo *)0x0);
                  if ((char)bVar8 == '\0') {
                    IStack_b8 = (Il2CppRGCTXData)0x427ff6c;
                    IVar23.method =
                         (MethodInfo *)
                         CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                   ((System_String_o *)(str0.method)->name,0,method_03);
                    lVar6 = *(long *)&((str0.klass)->_1).this_arg.bits;
                  }
                  else {
                    lVar6 = *(long *)&((str0.klass)->_1).this_arg.bits;
                    IVar23 = "";
                  }
                  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
                    IStack_b8 = (Il2CppRGCTXData)0x427fec9;
                    bVar8 = System_String__IsNullOrEmpty((System_String_o *)IVar23.method,(MethodInfo *)0x0);
                    if ((char)bVar8 == '\0') {
                      IStack_b8 = (Il2CppRGCTXData)0x427fee1;
                      IVar23.rgctxDataDummy =
                           System_String__Concat_3ae5ba0(IVar23.rgctxDataDummy," ",(MethodInfo *)0x0)
                      ;
                    }
                    IVar14 = (Il2CppRGCTXData)*(Il2CppRGCTXData *)&((str0.klass)->_1).this_arg.bits;
                    IStack_b8 = (Il2CppRGCTXData)0x427fef8;
                    IVar12.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
                    IStack_b8 = (Il2CppRGCTXData)0x427ff14;
                    System_Func_object__object____ctor();
                    IStack_b8 = (Il2CppRGCTXData)0x427ff29;
                    pSVar16 = System_Linq_Enumerable__Select_object__object_
                                        ((System_Collections_Generic_IEnumerable_TSource__o *)IVar14.method,
                                         (System_Func_TSource__TResult__o *)IVar12.method,MethodInfo_IEnumerable_1_System_String_Select_String_String);
                    IStack_b8 = (Il2CppRGCTXData)0x427ff3b;
                    pSVar11 = (System_String_array *)
                              System_Linq_Enumerable__ToArray_object_
                                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar16,
                                         (MethodInfo_2522A10 *)MethodInfo_String_ToArray_String.method);
                    if (pSVar11 == (System_String_array *)0x0) goto label_0428007e;
                    if ((int)pSVar11->max_length == 1) {
                      pSVar17 = pSVar11->m_Items[0];
                    }
                    else {
                      IStack_b8 = (Il2CppRGCTXData)0x427ff93;
                      pSVar17 = System_String__Join(", ",pSVar11,(MethodInfo *)0x0);
                    }
                    in_RCX = (System_String_o **)0x0;
                    IStack_b8 = (Il2CppRGCTXData)0x427ffaa;
                    IVar23.rgctxDataDummy =
                         System_String__Concat_3af7150
                                   (IVar23.rgctxDataDummy,"Refer to ",pSVar17,(MethodInfo *)0x0);
                  }
                  IVar22.rgctxDataDummy = (System_String_array *)0x0;
                  IStack_b8 = (Il2CppRGCTXData)0x427ffb7;
                  __this_09 = (System_String_o **)IVar23;
                  bVar8 = System_String__IsNullOrEmpty((System_String_o *)IVar23.method,(MethodInfo *)0x0);
                  if ((char)bVar8 == '\0') {
                    IVar12 = (Il2CppRGCTXData)(IStack_a8.method)->name;
                    IStack_b8 = (Il2CppRGCTXData)0x427ffec;
                    in_RCX = (System_String_o **)IVar23;
                    IVar22.rgctxDataDummy =
                         System_String__Concat_3af7470
                                   ("> - `",
                                    (System_String_o *)
                                    ((System_Collections_Generic_List_string__Fields *)
                                    &(str0.method)->invoker_method)->_items,"`: ",IVar23.rgctxDataDummy
                                    ,(MethodInfo *)0x0);
                    if (IVar12.rgctxDataDummy == (System_String_array *)0x0) goto label_0428007e;
                    IStack_b8 = (Il2CppRGCTXData)0x427fe5d;
                    __this_09 = (System_String_o **)IVar12;
                    System_Text_StringBuilder__AppendLine_3b044f0
                              ((System_Text_StringBuilder_o *)IVar12.method,(System_String_o *)IVar22.method,
                               (MethodInfo *)0x0);
                  }
                  unaff_R15._0_4_ = IVar13._0_4_ + 1;
                  unaff_R15._4_4_ = 0;
                  if ((int)*(uint *)&((MethodInfo *)plVar10)->name <= (int)unaff_R15._0_4_) break;
                  IVar13 = unaff_R15;
                  if (*(uint *)&((MethodInfo *)plVar10)->name <= unaff_R15._0_4_) goto label_04280092;
                }
              }
              IVar12 = IStack_a8;
              if ((System_Text_StringBuilder_o *)(IStack_a8.method)->name ==
                  (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
              IStack_b8 = (Il2CppRGCTXData)0x4280019;
              System_Text_StringBuilder__AppendLine_3b044f0
                        ((System_Text_StringBuilder_o *)(IStack_a8.method)->name,"> ",
                         (MethodInfo *)0x0);
              str0 = IStack_90;
              IVar14 = IStack_98;
            }
          }
          IVar23 = IStack_a0;
          if ((IStack_a0.method)->parameters == (Il2CppType **)0x0) goto label_0428007e;
          __this_09 = (System_String_o **)((Il2CppRGCTXData *)((IStack_a0.method)->parameters + 5))->method;
          IVar22.rgctxDataDummy = (System_String_array *)0x0;
          IStack_b8 = (Il2CppRGCTXData)0x428003c;
          bVar8 = System_String__IsNullOrEmpty((System_String_o *)__this_09,(MethodInfo *)0x0);
          IVar13 = IVar12;
          if ((char)bVar8 == '\0') {
            pppIVar2 = &(IVar23.method)->parameters;
            if (*pppIVar2 == (Il2CppType **)0x0) goto label_0428007e;
            IVar23 = (Il2CppRGCTXData)(IStack_a8.method)->name;
            IStack_b8 = (Il2CppRGCTXData)0x4280061;
            pSVar17 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                ((System_String_o *)(*pppIVar2)[5],0,method_04);
            in_RCX = &"> **Returns**: ";
            IStack_b8 = (Il2CppRGCTXData)0x4280075;
            IVar22.method =
                 (MethodInfo *)System_String__Concat_3ae5ba0("> **Returns**: ",pSVar17,(MethodInfo *)0x0);
            if (IVar23.rgctxDataDummy == (System_String_array *)0x0) goto label_0428007e;
            IStack_b8 = (Il2CppRGCTXData)0x427f95d;
            __this_09 = (System_String_o **)IVar23;
            System_Text_StringBuilder__AppendLine_3b044f0
                      ((System_Text_StringBuilder_o *)IVar23.method,(System_String_o *)IVar22.method,
                       (MethodInfo *)0x0);
          }
        }
      }
      IVar12 = IVar13;
      str0._0_4_ = str0._0_4_ + 1;
      str0._4_4_ = 0;
      if ((int)*(uint *)&(IVar14.method)->name <= (int)str0._0_4_) {
        return;
      }
    } while (str0._0_4_ < *(uint *)&(IVar14.method)->name);
  }
label_04280092:
  IStack_b8 = (Il2CppRGCTXData)0x4280097;
  auVar26 = il2cpp_runtime_helper_022b2ca0();
  uStack_e8 = auVar26._0_8_;
  uVar21 = auVar26._8_8_ & 0xffffffff;
  IStack_e0 = IVar23;
  IStack_d8 = str0;
  IStack_d0 = (Il2CppRGCTXData)plVar10;
  IStack_c8 = IVar14;
  IStack_c0 = unaff_R15;
  IStack_b8 = IVar12;
  if (g_data_057adc71 == '\0') {
    uStack_f0 = 0x42800cc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    uStack_f0 = 0x42800d8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLType_get_Item);
    uStack_f0 = 0x42800e4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    uStack_f0 = 0x42800f0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_TypeReference_String);
    uStack_f0 = 0x42800fc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_TypeReference_string);
    uStack_f0 = 0x4280108;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    uStack_f0 = 0x4280114;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetTypeReferenceStr_b__0);
    uStack_f0 = 0x4280120;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass12_0);
    uStack_f0 = 0x428012c;
    il2cpp_runtime_helper_023445d0(&"<a data-footnote-ref href=\"#user-content-fn-{0}\">{1}</a>");
    uStack_f0 = 0x4280138;
    il2cpp_runtime_helper_023445d0(&"](../");
    uStack_f0 = 0x4280144;
    il2cpp_runtime_helper_023445d0(&"<");
    uStack_f0 = 0x4280150;
    il2cpp_runtime_helper_023445d0(&")");
    uStack_f0 = 0x428015c;
    il2cpp_runtime_helper_023445d0(&",");
    uStack_f0 = 0x4280168;
    il2cpp_runtime_helper_023445d0(&"[");
    uStack_f0 = 0x4280174;
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057adc71 = '\x01';
  }
  uStack_f0 = 0x428018a;
  IVar12.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass12_0);
  IVar23.rgctxDataDummy = (System_Collections_Generic_List_string__o *)0x0;
  uStack_f0 = 0x4280197;
  IVar14.rgctxDataDummy = IVar12.rgctxDataDummy;
  System_Object___ctor((Il2CppObject *)IVar12.method,(MethodInfo *)0x0);
  if (IVar12.rgctxDataDummy == (System_Collections_Generic_List_string__o *)0x0) {
label_04280428:
    values = (Il2CppRGCTXData)plVar10;
    IVar13 = IVar14;
    uStack_f0 = 0x428042d;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    IVar14.rgctxDataDummy = &(IVar12.method)->invoker_method;
    ((System_Collections_Generic_List_string__Fields *)&(IVar12.method)->invoker_method)->_items =
         (System_String_array *)__this_09;
    uStack_f0 = 0x42801b3;
    IVar23 = (Il2CppRGCTXData)__this_09;
    il2cpp_runtime_helper_022b4080();
    *(int32_t *)&(IVar12.method)->name = auVar26._8_4_;
    if (IVar22.rgctxDataDummy == (System_String_array *)0x0) goto label_04280428;
    IVar14.rgctxDataDummy = (System_Collections_Generic_List_string__o *)0x0;
    if ((System_Collections_Generic_Dictionary_object__object__o *)((MethodInfo *)__this_09)->return_type ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04280428;
    str0 = (Il2CppRGCTXData)
           ((CustomLogic_Editor_Models_TypeReference_Fields *)&(IVar22.method)->invoker_method)->Name;
    uStack_f0 = 0x42801e3;
    IVar23 = str0;
    bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       ((MethodInfo *)__this_09)->return_type,(Il2CppObject *)str0.method,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar8 == '\0') {
label_0428038f:
      source = (CustomLogic_Editor_Models_TypeReference_array *)(IVar22.method)->name;
      if ((source != (CustomLogic_Editor_Models_TypeReference_array *)0x0) && (source->max_length != 0)) {
        uStack_f0 = 0x42803ae;
        selector_00 = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_TypeReference_string);
        uStack_f0 = 0x42803c8;
        System_Func_object__object____ctor();
        uStack_f0 = 0x42803dd;
        pSVar16 = System_Linq_Enumerable__Select_object__object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,selector_00,
                             MethodInfo_IEnumerable_1_System_String_Select_TypeReference_String);
        uStack_f0 = 0x42803f1;
        pSVar17 = System_String__Join_3af7e00
                            (",",(System_Collections_Generic_IEnumerable_string__o *)pSVar16,
                             (MethodInfo *)0x0);
        uStack_f0 = 0x4280413;
        System_String__Concat_3af7470
                  ((System_String_o *)str0.method,"<",pSVar17,">",(MethodInfo *)0x0);
      }
      return;
    }
    if (*(int *)&(IVar12.method)->name == 2) {
      IVar14.rgctxDataDummy = (System_Collections_Generic_List_string__o *)0x0;
      if ((System_Collections_Generic_Dictionary_object__object__o *)((MethodInfo *)__this_09)->return_type !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        uStack_f0 = 0x428033d;
        IVar23 = str0;
        pIVar15 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             ((MethodInfo *)__this_09)->return_type,(Il2CppObject *)str0.method,MethodInfo_CLType_get_Item);
        IVar14.rgctxDataDummy = (System_Collections_Generic_List_string__o *)0x0;
        if ((System_Collections_Generic_Dictionary_object__int__o *)((MethodInfo *)__this_09)->parameters !=
            (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
          uStack_f0 = 0x428035c;
          iVar9 = System_Collections_Generic_Dictionary_object__int___get_Item
                            ((System_Collections_Generic_Dictionary_object__int__o *)
                             ((MethodInfo *)__this_09)->parameters,pIVar15,MethodInfo_Int32_get_Item);
          uStack_e8 = CONCAT44(iVar9,(undefined4)uStack_e8);
          uStack_f0 = 0x4280375;
          pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_e8 + 4);
          uStack_f0 = 0x428038c;
          str0.method = (MethodInfo *)
                        System_String__Format_3af78e0
                                  ("<a data-footnote-ref href=\"#user-content-fn-{0}\">{1}</a>",pIVar15,(Il2CppObject *)str0.method,(MethodInfo *)0x0);
          goto label_0428038f;
        }
      }
      goto label_04280428;
    }
    if (*(int *)&(IVar12.method)->name != 1) goto label_0428038f;
    IVar23 = (Il2CppRGCTXData)0x5;
    uStack_f0 = 0x4280215;
    IVar13 = TypeInfo_string;
    values.rgctxDataDummy = (void *)il2cpp_runtime_helper_022b2a40();
    IVar24 = "[";
    IVar14 = IVar13;
    if (values.rgctxDataDummy == (void *)0x0) goto label_04280428;
    if (*(int *)&(values.method)->name != 0) {
      IVar13.rgctxDataDummy = &((values.klass)->_1).byval_arg;
      (values.method)->klass = (Il2CppClass *)"[";
      uStack_f0 = 0x4280242;
      il2cpp_runtime_helper_022b4080();
      IVar23 = IVar24;
      if (1 < *(uint *)&(values.method)->name) {
        IVar13.rgctxDataDummy = &((values.klass)->_1).byval_arg.bits;
        (values.method)->return_type = (Il2CppType *)str0;
        uStack_f0 = 0x428025d;
        IVar23 = str0;
        il2cpp_runtime_helper_022b4080();
        IVar14 = "](../";
        if (2 < *(uint *)&(values.method)->name) {
          (values.method)->parameters = (Il2CppType **)"](../";
          uStack_f0 = 0x428027f;
          il2cpp_runtime_helper_022b4080(&(values.method)->parameters);
          IVar23 = IVar14;
          IVar14.rgctxDataDummy = (System_Collections_Generic_List_string__o *)0x0;
          plVar10 = values.rgctxDataDummy;
          if ((System_Collections_Generic_Dictionary_object__object__o *)
              ((MethodInfo *)__this_09)->return_type !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            uStack_f0 = 0x428029e;
            IVar23.method =
                 (MethodInfo *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)
                            ((MethodInfo *)__this_09)->return_type,(Il2CppObject *)str0.method,MethodInfo_CLType_get_Item);
            pIVar5 = ((Il2CppObject *)&((MethodInfo *)__this_09)->methodPointer)->klass;
            uStack_f0 = 0x42802b4;
            IVar14 = (Il2CppRGCTXData)__this_09;
            IVar13.rgctxDataDummy =
                 (void *)(*pIVar5->vtable[4].methodPtr)
                                   (__this_09,IVar23.rgctxDataDummy,pIVar5->vtable[4].method);
            if (IVar13.rgctxDataDummy != (System_Collections_Generic_List_string__o *)0x0) {
              IVar23 = (Il2CppRGCTXData)0x3;
              uStack_f0 = 0x42802d2;
              IVar14.method =
                   (MethodInfo *)
                   System_String__Substring_3af8da0
                             ((System_String_o *)IVar13.method,3,
                              *(int *)&((System_Collections_Generic_List_string__Fields *)
                                       &(IVar13.method)->invoker_method)->_items + -3,(MethodInfo *)0x0);
              if (3 < *(uint *)&(values.method)->name) {
                IVar13.rgctxDataDummy = &((values.klass)->_1).this_arg.bits;
                *(Il2CppRGCTXData *)&((values.klass)->_1).this_arg.bits = (MethodInfo *)IVar14;
                uStack_f0 = 0x42802ed;
                il2cpp_runtime_helper_022b4080();
                IVar23 = IVar14;
                if (4 < *(uint *)&(values.method)->name) {
                  (values.method)->field8_0x40 = (_union_14)")";
                  uStack_f0 = 0x4280312;
                  il2cpp_runtime_helper_022b4080(&(values.method)->field8_0x40);
                  uStack_f0 = 0x428031c;
                  str0.method = (MethodInfo *)
                                System_String__Concat_3af7570
                                          ((System_String_array *)values.method,(MethodInfo *)0x0);
                  goto label_0428038f;
                }
              }
              goto label_0428042d;
            }
          }
          goto label_04280428;
        }
      }
    }
  }
label_0428042d:
  uStack_f0 = 0x4280432;
  il2cpp_runtime_helper_022b2ca0();
  IStack_118 = IVar22;
  IStack_110 = str0;
  IStack_108 = values;
  IStack_100.rgctxDataDummy = IVar12.rgctxDataDummy;
  IStack_f8 = (Il2CppRGCTXData)__this_09;
  uStack_f0 = uVar21;
  if (g_data_057adc73 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"---|");
    il2cpp_runtime_helper_023445d0(&"|");
    g_data_057adc73 = '\x01';
  }
  pIVar19 = (Il2CppRGCTXData *)0x0;
  auStack_150._0_8_ = (Il2CppRGCTXData *)0x0;
  auStack_150._8_8_ = (Il2CppType *)0x0;
  auStack_150._16_8_ = (System_Collections_Generic_List_object__o *)0x0;
  pSVar18 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(pSVar18,(MethodInfo *)0x0);
  if ((pSVar18 != (System_Text_StringBuilder_o *)0x0) &&
     (System_Text_StringBuilder__Append_3b048f0(pSVar18,0x7c,(MethodInfo *)0x0),
     IVar13.rgctxDataDummy != (System_Collections_Generic_List_string__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_150 + 0x18),
               (System_Collections_Generic_List_object__o *)IVar13.method,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar7 = pSStack_128;
    pIVar19 = (Il2CppRGCTXData *)auStack_150._24_8_;
    IStack_120 = IVar23;
    while (__this_00.fields._index = (int)in_stack_fffffffffffffe88,
          __this_00.fields._version = (int)((ulong)in_stack_fffffffffffffe88 >> 0x20),
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe80,
          __this_00.fields._current = (Il2CppObject *)pIVar19,
          bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe90), (char)bVar8 != '\0') {
      pSVar17 = System_String__Concat_3ae5ba0((System_String_o *)pSVar7,"|",(MethodInfo *)0x0);
      System_Text_StringBuilder__Append_3b03f90(pSVar18,pSVar17,(MethodInfo *)0x0);
    }
    __this_01.fields._index = (int)in_stack_fffffffffffffe88;
    __this_01.fields._version = (int)((ulong)in_stack_fffffffffffffe88 >> 0x20);
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe80;
    __this_01.fields._current = (Il2CppObject *)pIVar19;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe90);
    iVar20 = 0;
    System_Text_StringBuilder__AppendLine(pSVar18,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append_3b048f0(pSVar18,0x7c,(MethodInfo *)0x0);
    if (0 < *(int *)&(IVar13.method)->name) {
      do {
        System_Text_StringBuilder__Append_3b03f90(pSVar18,"---|",(MethodInfo *)0x0);
        iVar20 = iVar20 + 1;
      } while (iVar20 < *(int *)&(IVar13.method)->name);
    }
    System_Text_StringBuilder__AppendLine(pSVar18,(MethodInfo *)0x0);
    if (IStack_120.rgctxDataDummy != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_150 + 0x18),
                 (System_Collections_Generic_List_object__o *)IStack_120.method,MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
      auStack_150._16_8_ = pSStack_128;
      auStack_150._0_8_ = auStack_150._24_8_;
      auStack_150._8_8_ = _Stack_130;
      while (__this_02.fields._index = (int)in_stack_fffffffffffffe88,
            __this_02.fields._version = (int)((ulong)in_stack_fffffffffffffe88 >> 0x20),
            __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe80,
            __this_02.fields._current = (Il2CppObject *)pIVar19,
            bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_02,(MethodInfo_321A1D0 *)auStack_150), uVar27 = auStack_150._16_8_,
            (char)bVar8 != '\0') {
        System_Text_StringBuilder__Append_3b03f90(pSVar18,"|",(MethodInfo *)0x0);
        if ((System_Collections_Generic_List_object__o *)uVar27 ==
            (System_Collections_Generic_List_object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_042807f9;
        }
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_150 + 0x18),
                   (System_Collections_Generic_List_object__o *)uVar27,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
        pSVar7 = pSStack_128;
        pIVar19 = (Il2CppRGCTXData *)auStack_150._24_8_;
        while (__this_03.fields._index = (int)in_stack_fffffffffffffe88,
              __this_03.fields._version = (int)((ulong)in_stack_fffffffffffffe88 >> 0x20),
              __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe80,
              __this_03.fields._current = (Il2CppObject *)pIVar19,
              bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_03,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe90),
              (char)bVar8 != '\0') {
          pSVar17 = System_String__Concat_3ae5ba0((System_String_o *)pSVar7,"|",(MethodInfo *)0x0);
          System_Text_StringBuilder__Append_3b03f90(pSVar18,pSVar17,(MethodInfo *)0x0);
        }
        __this_04.fields._index = (int)in_stack_fffffffffffffe88;
        __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffe88 >> 0x20);
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe80;
        __this_04.fields._current = (Il2CppObject *)pIVar19;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe90);
        System_Text_StringBuilder__AppendLine(pSVar18,(MethodInfo *)0x0);
      }
      __this_05.fields._index = (int)in_stack_fffffffffffffe88;
      __this_05.fields._version = (int)((ulong)in_stack_fffffffffffffe88 >> 0x20);
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe80;
      __this_05.fields._current = (Il2CppObject *)pIVar19;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)auStack_150)
      ;
      goto label_0428078a;
    }
  }
label_042807f9:
  auVar25 = il2cpp_runtime_helper_022b2c90();
  uVar27 = auVar25._0_8_;
  if (auVar25._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(uVar27);
    lVar6 = *plVar10;
    __cxa_end_catch();
    __this_06.fields._index = (int)uVar27;
    __this_06.fields._version = (int)((ulong)uVar27 >> 0x20);
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe80;
    __this_06.fields._current = (Il2CppObject *)pIVar19;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)auStack_150);
    if (lVar6 == 0) {
label_0428078a:
      (*(pSVar18->klass->vtable)._3_ToString.methodPtr)(pSVar18,(pSVar18->klass->vtable)._3_ToString.method);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
    __this_08.fields._index = (int)uVar27;
    __this_08.fields._version = (int)((ulong)uVar27 >> 0x20);
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe80;
    __this_08.fields._current = (Il2CppObject *)pIVar19;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_08,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe90);
  }
  else {
    __this_07.fields._index = (int)uVar27;
    __this_07.fields._version = (int)((ulong)uVar27 >> 0x20);
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe80;
    __this_07.fields._current = (Il2CppObject *)pIVar19;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_07,(MethodInfo_321A1C0 *)auStack_150);
  }
  _Unwind_Resume(uVar27);
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator$$AppendMethods
// il2cpp: void CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendMethods (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o* __this, CustomLogic_Editor_Models_CLMethod_array* methods, const MethodInfo* method);
// 0x427f7a0

void CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__AppendMethods
               (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *__this,
               CustomLogic_Editor_Models_CLMethod_array *methods,MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  uint uVar2;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_object__o *pSVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  System_String_array *value;
  Il2CppRGCTXData __this_09;
  Il2CppRGCTXData values;
  Il2CppRGCTXData __this_10;
  Il2CppRGCTXData IVar7;
  Il2CppRGCTXData str0;
  Il2CppObject *pIVar8;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar9;
  System_String_o *pSVar10;
  System_Text_StringBuilder_o *pSVar11;
  long *plVar12;
  System_String_o **in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  int iVar13;
  Il2CppRGCTXData unaff_RBP;
  ulong uVar14;
  Il2CppRGCTXData value_00;
  Il2CppRGCTXData IVar15;
  Il2CppRGCTXData IVar16;
  System_String_o **__this_11;
  long *unaff_R13;
  Il2CppRGCTXData unaff_R15;
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  undefined8 in_stack_fffffffffffffed8;
  undefined8 in_stack_fffffffffffffee0;
  undefined8 uVar19;
  Il2CppRGCTXData *pIVar20;
  undefined1 auStack_f8 [32];
  _union_249689 _Stack_d8;
  System_Collections_Generic_List_object__o *pSStack_d0;
  Il2CppRGCTXData IStack_c8;
  Il2CppRGCTXData IStack_c0;
  Il2CppRGCTXData IStack_b8;
  Il2CppRGCTXData IStack_b0;
  Il2CppRGCTXData IStack_a8;
  Il2CppRGCTXData IStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  Il2CppRGCTXData IStack_88;
  Il2CppRGCTXData IStack_80;
  Il2CppRGCTXData IStack_78;
  CustomLogic_Editor_Models_CLMethod_array *pCStack_70;
  Il2CppRGCTXData IStack_68;
  Il2CppRGCTXData IStack_60;
  Il2CppRGCTXData local_50;
  Il2CppRGCTXData local_48;
  CustomLogic_Editor_Models_CLMethod_array *local_40;
  Il2CppRGCTXData local_38;
  
  value_00 = (Il2CppRGCTXData)methods;
  __this_11 = (System_String_o **)__this;
  if (g_data_057adc6f == '\0') {
    IStack_60 = (Il2CppRGCTXData)0x427f7cd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_AppendMethods_b__9_1);
    IStack_60 = (Il2CppRGCTXData)0x427f7d9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_CLParameter);
    IStack_60 = (Il2CppRGCTXData)0x427f7e5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    IStack_60 = (Il2CppRGCTXData)0x427f7f1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    IStack_60 = (Il2CppRGCTXData)0x427f7fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CLParameter_bool);
    IStack_60 = (Il2CppRGCTXData)0x427f809;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    IStack_60 = (Il2CppRGCTXData)0x427f815;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    IStack_60 = (Il2CppRGCTXData)0x427f821;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_AppendMethods_b__9_0);
    IStack_60 = (Il2CppRGCTXData)0x427f82d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    IStack_60 = (Il2CppRGCTXData)0x427f839;
    il2cpp_runtime_helper_023445d0(&" ");
    IStack_60 = (Il2CppRGCTXData)0x427f845;
    il2cpp_runtime_helper_023445d0(&"> **Remarks**: ");
    IStack_60 = (Il2CppRGCTXData)0x427f851;
    il2cpp_runtime_helper_023445d0(&"__");
    IStack_60 = (Il2CppRGCTXData)0x427f85d;
    il2cpp_runtime_helper_023445d0(&"> ");
    IStack_60 = (Il2CppRGCTXData)0x427f869;
    il2cpp_runtime_helper_023445d0(&"{% hint style=\"warning\" %}");
    IStack_60 = (Il2CppRGCTXData)0x427f875;
    il2cpp_runtime_helper_023445d0(&"> - `");
    IStack_60 = (Il2CppRGCTXData)0x427f881;
    il2cpp_runtime_helper_023445d0(&"<pre class=\"language-typescript\"><code class=\"lang-typescript\">function ");
    IStack_60 = (Il2CppRGCTXData)0x427f88d;
    il2cpp_runtime_helper_023445d0(&"null");
    IStack_60 = (Il2CppRGCTXData)0x427f899;
    il2cpp_runtime_helper_023445d0(&"{% endhint %}");
    IStack_60 = (Il2CppRGCTXData)0x427f8a5;
    il2cpp_runtime_helper_023445d0(&"`: ");
    IStack_60 = (Il2CppRGCTXData)0x427f8b1;
    il2cpp_runtime_helper_023445d0(&", ");
    IStack_60 = (Il2CppRGCTXData)0x427f8bd;
    il2cpp_runtime_helper_023445d0(&"Refer to ");
    IStack_60 = (Il2CppRGCTXData)0x427f8c9;
    il2cpp_runtime_helper_023445d0(&" -> ");
    IStack_60 = (Il2CppRGCTXData)0x427f8d5;
    il2cpp_runtime_helper_023445d0(&"(");
    IStack_60 = (Il2CppRGCTXData)0x427f8e1;
    il2cpp_runtime_helper_023445d0(&")");
    IStack_60 = (Il2CppRGCTXData)0x427f8ed;
    il2cpp_runtime_helper_023445d0(&"");
    IStack_60 = (Il2CppRGCTXData)0x427f8f9;
    il2cpp_runtime_helper_023445d0(&"> **Returns**: ");
    IStack_60 = (Il2CppRGCTXData)0x427f905;
    il2cpp_runtime_helper_023445d0(&"> **Parameters**:");
    IStack_60 = (Il2CppRGCTXData)0x427f911;
    il2cpp_runtime_helper_023445d0(&"**Obsolete**: ");
    __this_11 = &"</code></pre>";
    IStack_60 = (Il2CppRGCTXData)0x427f91d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc6f = '\x01';
  }
  local_50 = (Il2CppRGCTXData)__this;
  if (methods == (CustomLogic_Editor_Models_CLMethod_array *)0x0) {
label_0428007e:
    IStack_60 = (Il2CppRGCTXData)0x4280083;
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  iVar13 = (int)methods->max_length;
  if (iVar13 < 1) {
    return;
  }
  str0.rgctxDataDummy = (System_String_o *)0x0;
  local_40 = methods;
  if (iVar13 != 0) {
    do {
      IVar15 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(methods->m_Items + str0._0_4_))->method;
      if (((System_String_Fields)IVar15.rgctxDataDummy == (System_String_Fields)0x0) ||
         (__this_11 = &(IVar15.method)->return_type->data,
         (System_String_o *)__this_11 == (System_String_o *)0x0)) goto label_0428007e;
      IStack_60 = (Il2CppRGCTXData)0x427f9a9;
      value_00 = "__";
      bVar5 = System_String__StartsWith
                        ((System_String_o *)__this_11,(System_String_o *)"__".method,(MethodInfo *)0x0
                        );
      IVar7 = local_50;
      if ((char)bVar5 == '\0') {
        IStack_60 = (Il2CppRGCTXData)0x427f9c8;
        local_38 = str0;
        unaff_R13 = (long *)CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetParametersStr
                                      ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                                       local_50.method,
                                       (CustomLogic_Editor_Models_CLParameter_array *)(IVar15.method)->name,2,
                                       (MethodInfo *)in_RCX);
        IStack_60 = (Il2CppRGCTXData)0x427f9dc;
        pSVar10 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr
                            ((CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)IVar7.method,
                             (CustomLogic_Editor_Models_TypeReference_o *)(IVar15.method)->klass,2,
                             (MethodInfo *)in_RCX);
        IStack_60 = (Il2CppRGCTXData)0x427f9e9;
        bVar5 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          IStack_60 = (Il2CppRGCTXData)0x427fa01;
          bVar5 = System_String__op_Equality(pSVar10,"null",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') goto label_0427fa05;
          IStack_60 = (Il2CppRGCTXData)0x427fa33;
          __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                   System_String__Concat_3ae5ba0(" -> ",pSVar10,(MethodInfo *)0x0);
        }
        else {
label_0427fa05:
          __this = *(CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o **)
                    *(Il2CppRGCTXData **)(g_data_057b9c00 + 0xb8);
        }
        IVar7 = local_50;
        local_48 = IVar15;
        if ((System_Text_StringBuilder_o *)(local_50.method)->name == (System_Text_StringBuilder_o *)0x0)
        goto label_0428007e;
        IStack_60 = (Il2CppRGCTXData)0x427fa5e;
        System_Text_StringBuilder__Append_3b03f90
                  ((System_Text_StringBuilder_o *)(local_50.method)->name,"<pre class=\"language-typescript\"><code class=\"lang-typescript\">function ",(MethodInfo *)0x0);
        unaff_R15 = (Il2CppRGCTXData)(IVar7.method)->name;
        value_00 = (Il2CppRGCTXData)0x5;
        IStack_60 = (Il2CppRGCTXData)0x427fa76;
        __this_11 = (System_String_o **)TypeInfo_string;
        methods = (CustomLogic_Editor_Models_CLMethod_array *)il2cpp_runtime_helper_022b2a40();
        if (methods == (CustomLogic_Editor_Models_CLMethod_array *)0x0) goto label_0428007e;
        unaff_RBP = IVar7;
        if ((int)methods->max_length == 0) break;
        value_00 = (Il2CppRGCTXData)(local_48.method)->return_type;
        __this_11 = (System_String_o **)methods->m_Items;
        methods->m_Items[0] = (CustomLogic_Editor_Models_CLMethod_o *)value_00;
        IStack_60 = (Il2CppRGCTXData)0x427faa2;
        il2cpp_runtime_helper_022b4080();
        IVar15 = (Il2CppRGCTXData)"(";
        if ((uint)methods->max_length < 2) break;
        __this_11 = (System_String_o **)(methods->m_Items + 1);
        methods->m_Items[1] = (CustomLogic_Editor_Models_CLMethod_o *)"(";
        IStack_60 = (Il2CppRGCTXData)0x427fac4;
        il2cpp_runtime_helper_022b4080();
        value_00 = IVar15;
        if ((uint)methods->max_length < 3) break;
        __this_11 = (System_String_o **)(methods->m_Items + 2);
        ((Il2CppRGCTXData *)(methods->m_Items + 2))->method = (MethodInfo *)unaff_R13;
        IStack_60 = (Il2CppRGCTXData)0x427fadf;
        value_00.method = (MethodInfo *)unaff_R13;
        il2cpp_runtime_helper_022b4080();
        IVar15 = ")";
        if ((uint)methods->max_length < 4) break;
        __this_11 = (System_String_o **)(methods->m_Items + 3);
        *(Il2CppRGCTXData *)(methods->m_Items + 3) = ")";
        IStack_60 = (Il2CppRGCTXData)0x427fb01;
        il2cpp_runtime_helper_022b4080();
        str0 = local_38;
        value_00 = IVar15;
        if ((uint)methods->max_length < 5) break;
        *(CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o **)(methods->m_Items + 4) = __this;
        IStack_60 = (Il2CppRGCTXData)0x427fb24;
        il2cpp_runtime_helper_022b4080(methods->m_Items + 4);
        IStack_60 = (Il2CppRGCTXData)0x427fb2e;
        pSVar10 = System_String__Concat_3af7570((System_String_array *)methods,(MethodInfo *)0x0);
        if ((System_String_Fields)unaff_R15.rgctxDataDummy == (System_String_Fields)0x0) goto label_0428007e;
        IStack_60 = (Il2CppRGCTXData)0x427fb44;
        System_Text_StringBuilder__Append_3b03f90
                  ((System_Text_StringBuilder_o *)unaff_R15.method,pSVar10,(MethodInfo *)0x0);
        methods = local_40;
        if ((System_Text_StringBuilder_o *)(IVar7.method)->name == (System_Text_StringBuilder_o *)0x0)
        goto label_0428007e;
        IStack_60 = (Il2CppRGCTXData)0x427fb67;
        System_Text_StringBuilder__AppendLine_3b044f0
                  ((System_Text_StringBuilder_o *)(IVar7.method)->name,"</code></pre>",(MethodInfo *)0x0);
        unaff_R15 = local_48;
        IStack_60 = (Il2CppRGCTXData)0x427fb76;
        bVar5 = CustomLogic_Editor_Models_BaseModel__get_IsObsolete
                          ((CustomLogic_Editor_Models_BaseModel_o *)local_48.method,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if ((System_Text_StringBuilder_o *)(IVar7.method)->name == (System_Text_StringBuilder_o *)0x0)
          goto label_0428007e;
          IStack_60 = (Il2CppRGCTXData)0x427fb92;
          System_Text_StringBuilder__AppendLine
                    ((System_Text_StringBuilder_o *)(IVar7.method)->name,(MethodInfo *)0x0);
          if ((System_Text_StringBuilder_o *)(IVar7.method)->name == (System_Text_StringBuilder_o *)0x0)
          goto label_0428007e;
          IStack_60 = (Il2CppRGCTXData)0x427fbb0;
          System_Text_StringBuilder__AppendLine_3b044f0
                    ((System_Text_StringBuilder_o *)(IVar7.method)->name,"{% hint style=\"warning\" %}",(MethodInfo *)0x0);
          __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)(IVar7.method)->name;
          IStack_60 = (Il2CppRGCTXData)0x427fbc9;
          pSVar10 = System_String__Concat_3ae5ba0
                              ("**Obsolete**: ",(System_String_o *)(unaff_R15.method)->invoker_method,
                               (MethodInfo *)0x0);
          if ((System_String_Fields)__this == (System_String_Fields)0x0) goto label_0428007e;
          IStack_60 = (Il2CppRGCTXData)0x427fbdf;
          System_Text_StringBuilder__AppendLine_3b044f0
                    ((System_Text_StringBuilder_o *)__this,pSVar10,(MethodInfo *)0x0);
          if ((System_Text_StringBuilder_o *)(IVar7.method)->name == (System_Text_StringBuilder_o *)0x0)
          goto label_0428007e;
          IStack_60 = (Il2CppRGCTXData)0x427fbfd;
          System_Text_StringBuilder__AppendLine_3b044f0
                    ((System_Text_StringBuilder_o *)(IVar7.method)->name,"{% endhint %}",(MethodInfo *)0x0);
          if ((System_Text_StringBuilder_o *)(IVar7.method)->name == (System_Text_StringBuilder_o *)0x0)
          goto label_0428007e;
          IStack_60 = (Il2CppRGCTXData)0x427fc11;
          System_Text_StringBuilder__AppendLine
                    ((System_Text_StringBuilder_o *)(IVar7.method)->name,(MethodInfo *)0x0);
        }
        if ((unaff_R15.method)->parameters == (Il2CppType **)0x0) goto label_0428007e;
        __this_11 = (System_String_o **)((Il2CppRGCTXData *)((unaff_R15.method)->parameters + 2))->method;
        value_00.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
        IStack_60 = (Il2CppRGCTXData)0x427fc29;
        bVar5 = System_String__IsNullOrEmpty((System_String_o *)__this_11,(MethodInfo *)0x0);
        unaff_RBP = local_50;
        IVar15 = IVar7;
        if ((char)bVar5 == '\0') {
          if ((unaff_R15.method)->parameters == (Il2CppType **)0x0) goto label_0428007e;
          pSVar11 = (System_Text_StringBuilder_o *)(local_50.method)->name;
          IStack_60 = (Il2CppRGCTXData)0x427fc52;
          pSVar10 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                              ((System_String_o *)(unaff_R15.method)->parameters[2],0,method_00);
          in_RCX = &"> ";
          IStack_60 = (Il2CppRGCTXData)0x427fc66;
          pSVar10 = System_String__Concat_3ae5ba0("> ",pSVar10,(MethodInfo *)0x0);
          if (pSVar11 == (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
          IStack_60 = (Il2CppRGCTXData)0x427fc7c;
          System_Text_StringBuilder__AppendLine_3b044f0(pSVar11,pSVar10,(MethodInfo *)0x0);
          if ((System_Text_StringBuilder_o *)(unaff_RBP.method)->name == (System_Text_StringBuilder_o *)0x0)
          goto label_0428007e;
          IStack_60 = (Il2CppRGCTXData)0x427fc9a;
          System_Text_StringBuilder__AppendLine_3b044f0
                    ((System_Text_StringBuilder_o *)(unaff_RBP.method)->name,"> ",(MethodInfo *)0x0);
          if ((unaff_R15.method)->parameters == (Il2CppType **)0x0) goto label_0428007e;
          IStack_60 = (Il2CppRGCTXData)0x427fcb2;
          bVar5 = System_String__IsNullOrEmpty
                            ((System_String_o *)(unaff_R15.method)->parameters[3],(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            if ((unaff_R15.method)->parameters == (Il2CppType **)0x0) goto label_0428007e;
            pSVar11 = (System_Text_StringBuilder_o *)(unaff_RBP.method)->name;
            IStack_60 = (Il2CppRGCTXData)0x427fcd2;
            pSVar10 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                ((System_String_o *)(unaff_R15.method)->parameters[3],0,method_01);
            in_RCX = &"> **Remarks**: ";
            IStack_60 = (Il2CppRGCTXData)0x427fce6;
            pSVar10 = System_String__Concat_3ae5ba0("> **Remarks**: ",pSVar10,(MethodInfo *)0x0);
            if (pSVar11 == (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
            IStack_60 = (Il2CppRGCTXData)0x427fcfc;
            System_Text_StringBuilder__AppendLine_3b044f0(pSVar11,pSVar10,(MethodInfo *)0x0);
            if ((System_Text_StringBuilder_o *)(unaff_RBP.method)->name == (System_Text_StringBuilder_o *)0x0)
            goto label_0428007e;
            IStack_60 = (Il2CppRGCTXData)0x427fd1a;
            System_Text_StringBuilder__AppendLine_3b044f0
                      ((System_Text_StringBuilder_o *)(unaff_RBP.method)->name,"> ",(MethodInfo *)0x0)
            ;
          }
          unaff_R15 = (Il2CppRGCTXData)(unaff_R15.method)->name;
          if ((System_String_Fields)unaff_R15.rgctxDataDummy != (System_String_Fields)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              IStack_60 = (Il2CppRGCTXData)0x427fd68;
              il2cpp_runtime_helper_02337ed0();
              __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                       ((Il2CppRGCTXData *)(*(long *)(TypeInfo_c + 0xb8) + 0x20))->method;
            }
            else {
              __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                       ((Il2CppRGCTXData *)(*(long *)(TypeInfo_c + 0xb8) + 0x20))->method;
            }
            if ((System_String_Fields)__this == (System_String_Fields)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                IStack_60 = (Il2CppRGCTXData)0x427fd82;
                il2cpp_runtime_helper_02337ed0();
              }
              unaff_R13 = &TypeInfo_c;
              IStack_60 = (Il2CppRGCTXData)0x427fda6;
              __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                       il2cpp_runtime_helper_023052d0(TypeInfo_Func_CLParameter_bool);
              in_RCX = (System_String_o **)0x0;
              IStack_60 = (Il2CppRGCTXData)0x427fdc0;
              System_Func_object__bool____ctor();
              lVar3 = *(long *)(TypeInfo_c + 0xb8);
              ((Il2CppRGCTXData *)(lVar3 + 0x20))->method = (MethodInfo *)__this;
              IStack_60 = (Il2CppRGCTXData)0x427fddb;
              il2cpp_runtime_helper_022b4080(lVar3 + 0x20,__this);
              methods = local_40;
            }
            IStack_60 = (Il2CppRGCTXData)0x427fdf5;
            bVar5 = System_Linq_Enumerable__Any_object__2504f10
                              ((System_Collections_Generic_IEnumerable_TSource__o *)unaff_R15.method,
                               (System_Func_TSource__bool__o *)__this,MethodInfo_Boolean_Any_CLParameter);
            if ((char)bVar5 != '\0') {
              __this_11 = (System_String_o **)(unaff_RBP.method)->name;
              if ((System_String_Fields)__this_11 == (System_String_Fields)0x0) goto label_0428007e;
              IStack_60 = (Il2CppRGCTXData)0x427fe1b;
              value_00 = "> **Parameters**:";
              System_Text_StringBuilder__AppendLine_3b044f0
                        ((System_Text_StringBuilder_o *)__this_11,(System_String_o *)"> **Parameters**:".method,
                         (MethodInfo *)0x0);
              unaff_R13 = (long *)(local_48.method)->name;
              if ((Il2CppRGCTXData *)unaff_R13 == (Il2CppRGCTXData *)0x0) goto label_0428007e;
              if (0 < *(int *)&((MethodInfo *)unaff_R13)->name) {
                unaff_R15.rgctxDataDummy = (void *)0x0;
                IVar15.rgctxDataDummy = (void *)0x0;
                if (*(int *)&((MethodInfo *)unaff_R13)->name == 0) break;
                while( true ) {
                  str0 = (Il2CppRGCTXData)
                         ((Il2CppRGCTXData *)((long)unaff_R13 + (long)IVar15._0_4_ * 8 + 0x20))->klass;
                  if (str0.rgctxDataDummy == (System_String_o *)0x0) goto label_0428007e;
                  IStack_60 = (Il2CppRGCTXData)0x427fe94;
                  bVar5 = System_String__IsNullOrEmpty
                                    ((System_String_o *)(str0.method)->name,(MethodInfo *)0x0);
                  if ((char)bVar5 == '\0') {
                    IStack_60 = (Il2CppRGCTXData)0x427ff6c;
                    __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                             CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                       ((System_String_o *)(str0.method)->name,0,method_02);
                    lVar3 = *(long *)&((str0.klass)->_1).this_arg.bits;
                  }
                  else {
                    lVar3 = *(long *)&((str0.klass)->_1).this_arg.bits;
                    __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)"";
                  }
                  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
                    IStack_60 = (Il2CppRGCTXData)0x427fec9;
                    bVar5 = System_String__IsNullOrEmpty((System_String_o *)__this,(MethodInfo *)0x0);
                    if ((char)bVar5 == '\0') {
                      IStack_60 = (Il2CppRGCTXData)0x427fee1;
                      __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                               System_String__Concat_3ae5ba0
                                         ((System_String_o *)__this," ",(MethodInfo *)0x0);
                    }
                    methods = *(CustomLogic_Editor_Models_CLMethod_array **)&((str0.klass)->_1).this_arg.bits;
                    IStack_60 = (Il2CppRGCTXData)0x427fef8;
                    unaff_RBP.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
                    IStack_60 = (Il2CppRGCTXData)0x427ff14;
                    System_Func_object__object____ctor();
                    IStack_60 = (Il2CppRGCTXData)0x427ff29;
                    pSVar9 = System_Linq_Enumerable__Select_object__object_
                                       ((System_Collections_Generic_IEnumerable_TSource__o *)methods,
                                        (System_Func_TSource__TResult__o *)unaff_RBP.method,MethodInfo_IEnumerable_1_System_String_Select_String_String);
                    IStack_60 = (Il2CppRGCTXData)0x427ff3b;
                    value = (System_String_array *)
                            System_Linq_Enumerable__ToArray_object_
                                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar9,
                                       MethodInfo_String_ToArray_String);
                    if (value == (System_String_array *)0x0) goto label_0428007e;
                    if ((int)value->max_length == 1) {
                      pSVar10 = value->m_Items[0];
                    }
                    else {
                      IStack_60 = (Il2CppRGCTXData)0x427ff93;
                      pSVar10 = System_String__Join(", ",value,(MethodInfo *)0x0);
                    }
                    in_RCX = (System_String_o **)0x0;
                    IStack_60 = (Il2CppRGCTXData)0x427ffaa;
                    __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                             System_String__Concat_3af7150
                                       ((System_String_o *)__this,"Refer to ",pSVar10,(MethodInfo *)0x0);
                  }
                  value_00.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                  IStack_60 = (Il2CppRGCTXData)0x427ffb7;
                  __this_11 = (System_String_o **)__this;
                  bVar5 = System_String__IsNullOrEmpty((System_String_o *)__this,(MethodInfo *)0x0);
                  if ((char)bVar5 == '\0') {
                    unaff_RBP = (Il2CppRGCTXData)(local_50.method)->name;
                    IStack_60 = (Il2CppRGCTXData)0x427ffec;
                    in_RCX = (System_String_o **)__this;
                    value_00.method =
                         (MethodInfo *)
                         System_String__Concat_3af7470
                                   ("> - `",
                                    (System_String_o *)*(System_String_Fields *)&(str0.method)->invoker_method
                                    ,"`: ",(System_String_o *)__this,(MethodInfo *)0x0);
                    if ((System_String_Fields)unaff_RBP.rgctxDataDummy == (System_String_Fields)0x0)
                    goto label_0428007e;
                    IStack_60 = (Il2CppRGCTXData)0x427fe5d;
                    __this_11 = (System_String_o **)unaff_RBP;
                    System_Text_StringBuilder__AppendLine_3b044f0
                              ((System_Text_StringBuilder_o *)unaff_RBP.method,
                               (System_String_o *)value_00.method,(MethodInfo *)0x0);
                  }
                  unaff_R15._0_4_ = IVar15._0_4_ + 1;
                  unaff_R15._4_4_ = 0;
                  if ((int)*(uint *)&((MethodInfo *)unaff_R13)->name <= (int)unaff_R15._0_4_) break;
                  IVar15 = unaff_R15;
                  if (*(uint *)&((MethodInfo *)unaff_R13)->name <= unaff_R15._0_4_) goto label_04280092;
                }
              }
              unaff_RBP = local_50;
              if ((System_Text_StringBuilder_o *)(local_50.method)->name == (System_Text_StringBuilder_o *)0x0
                 ) goto label_0428007e;
              IStack_60 = (Il2CppRGCTXData)0x4280019;
              System_Text_StringBuilder__AppendLine_3b044f0
                        ((System_Text_StringBuilder_o *)(local_50.method)->name,"> ",(MethodInfo *)0x0
                        );
              str0 = local_38;
              methods = local_40;
            }
          }
          __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)local_48;
          if ((local_48.method)->parameters == (Il2CppType **)0x0) goto label_0428007e;
          __this_11 = (System_String_o **)((Il2CppRGCTXData *)((local_48.method)->parameters + 5))->method;
          value_00.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
          IStack_60 = (Il2CppRGCTXData)0x428003c;
          bVar5 = System_String__IsNullOrEmpty((System_String_o *)__this_11,(MethodInfo *)0x0);
          IVar15 = unaff_RBP;
          if ((char)bVar5 == '\0') {
            pppIVar1 = &((MethodInfo *)__this)->parameters;
            if (*pppIVar1 == (Il2CppType **)0x0) goto label_0428007e;
            __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)(local_50.method)->name;
            IStack_60 = (Il2CppRGCTXData)0x4280061;
            pSVar10 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                ((System_String_o *)(*pppIVar1)[5],0,method_03);
            in_RCX = &"> **Returns**: ";
            IStack_60 = (Il2CppRGCTXData)0x4280075;
            value_00.method =
                 (MethodInfo *)System_String__Concat_3ae5ba0("> **Returns**: ",pSVar10,(MethodInfo *)0x0);
            if ((System_String_Fields)__this == (System_String_Fields)0x0) goto label_0428007e;
            IStack_60 = (Il2CppRGCTXData)0x427f95d;
            __this_11 = (System_String_o **)__this;
            System_Text_StringBuilder__AppendLine_3b044f0
                      ((System_Text_StringBuilder_o *)__this,(System_String_o *)value_00.method,
                       (MethodInfo *)0x0);
          }
        }
      }
      unaff_RBP = IVar15;
      str0._0_4_ = str0._0_4_ + 1;
      str0._4_4_ = 0;
      uVar2 = (uint)methods->max_length;
      if ((int)uVar2 <= (int)str0._0_4_) {
        return;
      }
    } while (str0._0_4_ < uVar2);
  }
label_04280092:
  IStack_60 = (Il2CppRGCTXData)0x4280097;
  auVar18 = il2cpp_runtime_helper_022b2ca0();
  uStack_90 = auVar18._0_8_;
  uVar14 = auVar18._8_8_ & 0xffffffff;
  IStack_88 = (Il2CppRGCTXData)__this;
  IStack_80 = str0;
  IStack_78 = (Il2CppRGCTXData)unaff_R13;
  pCStack_70 = methods;
  IStack_68 = unaff_R15;
  IStack_60 = unaff_RBP;
  if (g_data_057adc71 == '\0') {
    uStack_98 = 0x42800cc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    uStack_98 = 0x42800d8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLType_get_Item);
    uStack_98 = 0x42800e4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    uStack_98 = 0x42800f0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_TypeReference_String);
    uStack_98 = 0x42800fc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_TypeReference_string);
    uStack_98 = 0x4280108;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    uStack_98 = 0x4280114;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetTypeReferenceStr_b__0);
    uStack_98 = 0x4280120;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass12_0);
    uStack_98 = 0x428012c;
    il2cpp_runtime_helper_023445d0(&"<a data-footnote-ref href=\"#user-content-fn-{0}\">{1}</a>");
    uStack_98 = 0x4280138;
    il2cpp_runtime_helper_023445d0(&"](../");
    uStack_98 = 0x4280144;
    il2cpp_runtime_helper_023445d0(&"<");
    uStack_98 = 0x4280150;
    il2cpp_runtime_helper_023445d0(&")");
    uStack_98 = 0x428015c;
    il2cpp_runtime_helper_023445d0(&",");
    uStack_98 = 0x4280168;
    il2cpp_runtime_helper_023445d0(&"[");
    uStack_98 = 0x4280174;
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057adc71 = '\x01';
  }
  uStack_98 = 0x428018a;
  __this_09.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass12_0);
  IVar15.rgctxDataDummy = (System_String_o *)0x0;
  uStack_98 = 0x4280197;
  IVar7.rgctxDataDummy = __this_09.rgctxDataDummy;
  System_Object___ctor((Il2CppObject *)__this_09.method,(MethodInfo *)0x0);
  if (__this_09.rgctxDataDummy == (System_String_o *)0x0) {
label_04280428:
    values = (Il2CppRGCTXData)unaff_R13;
    __this_10 = IVar7;
    uStack_98 = 0x428042d;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    IVar7.rgctxDataDummy = &(__this_09.method)->invoker_method;
    *(System_String_o ***)&(__this_09.method)->invoker_method = __this_11;
    uStack_98 = 0x42801b3;
    IVar15 = (Il2CppRGCTXData)__this_11;
    il2cpp_runtime_helper_022b4080();
    *(int *)&(__this_09.method)->name = auVar18._8_4_;
    if (value_00.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_04280428;
    IVar7.rgctxDataDummy = (System_String_o *)0x0;
    if ((System_Collections_Generic_Dictionary_object__object__o *)((MethodInfo *)__this_11)->return_type ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04280428;
    str0 = (Il2CppRGCTXData)(value_00.method)->invoker_method;
    uStack_98 = 0x42801e3;
    IVar15 = str0;
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       ((MethodInfo *)__this_11)->return_type,(Il2CppObject *)str0.method,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 == '\0') {
label_0428038f:
      source = (System_Collections_Generic_IEnumerable_TSource__o *)(value_00.method)->name;
      if ((source != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) &&
         (source[1].monitor != (void *)0x0)) {
        uStack_98 = 0x42803ae;
        selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_TypeReference_string);
        uStack_98 = 0x42803c8;
        System_Func_object__object____ctor();
        uStack_98 = 0x42803dd;
        pSVar9 = System_Linq_Enumerable__Select_object__object_(source,selector,MethodInfo_IEnumerable_1_System_String_Select_TypeReference_String);
        uStack_98 = 0x42803f1;
        pSVar10 = System_String__Join_3af7e00
                            (",",(System_Collections_Generic_IEnumerable_string__o *)pSVar9,
                             (MethodInfo *)0x0);
        uStack_98 = 0x4280413;
        System_String__Concat_3af7470
                  ((System_String_o *)str0.method,"<",pSVar10,">",(MethodInfo *)0x0);
      }
      return;
    }
    if (*(int *)&(__this_09.method)->name == 2) {
      IVar7.rgctxDataDummy = (System_String_o *)0x0;
      if ((System_Collections_Generic_Dictionary_object__object__o *)((MethodInfo *)__this_11)->return_type !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        uStack_98 = 0x428033d;
        IVar15 = str0;
        pIVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)
                            ((MethodInfo *)__this_11)->return_type,(Il2CppObject *)str0.method,MethodInfo_CLType_get_Item);
        IVar7.rgctxDataDummy = (System_String_o *)0x0;
        if ((System_Collections_Generic_Dictionary_object__int__o *)((MethodInfo *)__this_11)->parameters !=
            (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
          uStack_98 = 0x428035c;
          iVar6 = System_Collections_Generic_Dictionary_object__int___get_Item
                            ((System_Collections_Generic_Dictionary_object__int__o *)
                             ((MethodInfo *)__this_11)->parameters,pIVar8,MethodInfo_Int32_get_Item);
          uStack_90 = CONCAT44(iVar6,(undefined4)uStack_90);
          uStack_98 = 0x4280375;
          pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_90 + 4);
          uStack_98 = 0x428038c;
          str0.method = (MethodInfo *)
                        System_String__Format_3af78e0
                                  ("<a data-footnote-ref href=\"#user-content-fn-{0}\">{1}</a>",pIVar8,(Il2CppObject *)str0.method,(MethodInfo *)0x0);
          goto label_0428038f;
        }
      }
      goto label_04280428;
    }
    if (*(int *)&(__this_09.method)->name != 1) goto label_0428038f;
    IVar15 = (Il2CppRGCTXData)0x5;
    uStack_98 = 0x4280215;
    __this_10 = TypeInfo_string;
    values.rgctxDataDummy = (void *)il2cpp_runtime_helper_022b2a40();
    IVar16 = "[";
    IVar7 = __this_10;
    if (values.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_04280428;
    if (*(int *)&(values.method)->name != 0) {
      __this_10.rgctxDataDummy = (Il2CppRGCTXData *)&(values.klass)->_1 + 4;
      (values.method)->klass = (Il2CppClass *)"[";
      uStack_98 = 0x4280242;
      il2cpp_runtime_helper_022b4080();
      IVar15 = IVar16;
      if (1 < *(uint *)&(values.method)->name) {
        __this_10.rgctxDataDummy = (Il2CppRGCTXData *)&(values.klass)->_1 + 5;
        (values.method)->return_type = (Il2CppType *)str0;
        uStack_98 = 0x428025d;
        IVar15 = str0;
        il2cpp_runtime_helper_022b4080();
        IVar7 = "](../";
        if (2 < *(uint *)&(values.method)->name) {
          (values.method)->parameters = (Il2CppType **)"](../";
          uStack_98 = 0x428027f;
          il2cpp_runtime_helper_022b4080(&(values.method)->parameters);
          IVar15 = IVar7;
          IVar7.rgctxDataDummy = (System_String_o *)0x0;
          unaff_R13 = values.rgctxDataDummy;
          if ((System_Collections_Generic_Dictionary_object__object__o *)
              ((MethodInfo *)__this_11)->return_type !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            uStack_98 = 0x428029e;
            IVar15.method =
                 (MethodInfo *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)
                            ((MethodInfo *)__this_11)->return_type,(Il2CppObject *)str0.method,MethodInfo_CLType_get_Item);
            uStack_98 = 0x42802b4;
            IVar7 = (Il2CppRGCTXData)__this_11;
            __this_10.rgctxDataDummy =
                 (void *)(**(code **)(((MethodInfo *)__this_11)->methodPointer + 0x178))
                                   (__this_11,IVar15.rgctxDataDummy,
                                    *(undefined8 *)(((MethodInfo *)__this_11)->methodPointer + 0x180));
            if (__this_10.rgctxDataDummy != (void *)0x0) {
              IVar15 = (Il2CppRGCTXData)0x3;
              uStack_98 = 0x42802d2;
              IVar7.method = (MethodInfo *)
                             System_String__Substring_3af8da0
                                       ((System_String_o *)__this_10.method,3,
                                        *(int *)&(__this_10.method)->invoker_method + -3,(MethodInfo *)0x0);
              if (3 < *(uint *)&(values.method)->name) {
                __this_10.rgctxDataDummy = (Il2CppRGCTXData *)&(values.klass)->_1 + 7;
                ((Il2CppRGCTXData *)&(values.klass)->_1)[7].method = (MethodInfo *)IVar7;
                uStack_98 = 0x42802ed;
                il2cpp_runtime_helper_022b4080();
                IVar15 = IVar7;
                if (4 < *(uint *)&(values.method)->name) {
                  (values.method)->field8_0x40 = (_union_14)")";
                  uStack_98 = 0x4280312;
                  il2cpp_runtime_helper_022b4080(&(values.method)->field8_0x40);
                  uStack_98 = 0x428031c;
                  str0.method = (MethodInfo *)
                                System_String__Concat_3af7570
                                          ((System_String_array *)values.method,(MethodInfo *)0x0);
                  goto label_0428038f;
                }
              }
              goto label_0428042d;
            }
          }
          goto label_04280428;
        }
      }
    }
  }
label_0428042d:
  uStack_98 = 0x4280432;
  il2cpp_runtime_helper_022b2ca0();
  IStack_c0 = value_00;
  IStack_b8 = str0;
  IStack_b0 = values;
  IStack_a8.rgctxDataDummy = __this_09.rgctxDataDummy;
  IStack_a0 = (Il2CppRGCTXData)__this_11;
  uStack_98 = uVar14;
  if (g_data_057adc73 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"---|");
    il2cpp_runtime_helper_023445d0(&"|");
    g_data_057adc73 = '\x01';
  }
  pIVar20 = (Il2CppRGCTXData *)0x0;
  auStack_f8._0_8_ = (Il2CppRGCTXData *)0x0;
  auStack_f8._8_8_ = (Il2CppType *)0x0;
  auStack_f8._16_8_ = (System_Collections_Generic_List_object__o *)0x0;
  pSVar11 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(pSVar11,(MethodInfo *)0x0);
  if ((pSVar11 != (System_Text_StringBuilder_o *)0x0) &&
     (System_Text_StringBuilder__Append_3b048f0(pSVar11,0x7c,(MethodInfo *)0x0),
     __this_10.rgctxDataDummy != (void *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_f8 + 0x18),
               (System_Collections_Generic_List_object__o *)__this_10.method,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar4 = pSStack_d0;
    pIVar20 = (Il2CppRGCTXData *)auStack_f8._24_8_;
    IStack_c8 = IVar15;
    while (__this_00.fields._index = (int)in_stack_fffffffffffffee0,
          __this_00.fields._version = (int)((ulong)in_stack_fffffffffffffee0 >> 0x20),
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8,
          __this_00.fields._current = (Il2CppObject *)pIVar20,
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffee8), (char)bVar5 != '\0') {
      pSVar10 = System_String__Concat_3ae5ba0((System_String_o *)pSVar4,"|",(MethodInfo *)0x0);
      System_Text_StringBuilder__Append_3b03f90(pSVar11,pSVar10,(MethodInfo *)0x0);
    }
    __this_01.fields._index = (int)in_stack_fffffffffffffee0;
    __this_01.fields._version = (int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8;
    __this_01.fields._current = (Il2CppObject *)pIVar20;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee8);
    iVar13 = 0;
    System_Text_StringBuilder__AppendLine(pSVar11,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append_3b048f0(pSVar11,0x7c,(MethodInfo *)0x0);
    if (0 < *(int *)&(__this_10.method)->name) {
      do {
        System_Text_StringBuilder__Append_3b03f90(pSVar11,"---|",(MethodInfo *)0x0);
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)&(__this_10.method)->name);
    }
    System_Text_StringBuilder__AppendLine(pSVar11,(MethodInfo *)0x0);
    if (IStack_c8.rgctxDataDummy != (void *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_f8 + 0x18),
                 (System_Collections_Generic_List_object__o *)IStack_c8.method,MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
      auStack_f8._16_8_ = pSStack_d0;
      auStack_f8._0_8_ = auStack_f8._24_8_;
      auStack_f8._8_8_ = _Stack_d8;
      while (__this_02.fields._index = (int)in_stack_fffffffffffffee0,
            __this_02.fields._version = (int)((ulong)in_stack_fffffffffffffee0 >> 0x20),
            __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8,
            __this_02.fields._current = (Il2CppObject *)pIVar20,
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_02,(MethodInfo_321A1D0 *)auStack_f8), uVar19 = auStack_f8._16_8_,
            (char)bVar5 != '\0') {
        System_Text_StringBuilder__Append_3b03f90(pSVar11,"|",(MethodInfo *)0x0);
        if ((System_Collections_Generic_List_object__o *)uVar19 ==
            (System_Collections_Generic_List_object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_042807f9;
        }
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_f8 + 0x18),
                   (System_Collections_Generic_List_object__o *)uVar19,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
        pSVar4 = pSStack_d0;
        pIVar20 = (Il2CppRGCTXData *)auStack_f8._24_8_;
        while (__this_03.fields._index = (int)in_stack_fffffffffffffee0,
              __this_03.fields._version = (int)((ulong)in_stack_fffffffffffffee0 >> 0x20),
              __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8,
              __this_03.fields._current = (Il2CppObject *)pIVar20,
              bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_03,(MethodInfo_321A1D0 *)&stack0xfffffffffffffee8),
              (char)bVar5 != '\0') {
          pSVar10 = System_String__Concat_3ae5ba0((System_String_o *)pSVar4,"|",(MethodInfo *)0x0);
          System_Text_StringBuilder__Append_3b03f90(pSVar11,pSVar10,(MethodInfo *)0x0);
        }
        __this_04.fields._index = (int)in_stack_fffffffffffffee0;
        __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8;
        __this_04.fields._current = (Il2CppObject *)pIVar20;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee8);
        System_Text_StringBuilder__AppendLine(pSVar11,(MethodInfo *)0x0);
      }
      __this_05.fields._index = (int)in_stack_fffffffffffffee0;
      __this_05.fields._version = (int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8;
      __this_05.fields._current = (Il2CppObject *)pIVar20;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)auStack_f8);
      goto label_0428078a;
    }
  }
label_042807f9:
  auVar17 = il2cpp_runtime_helper_022b2c90();
  uVar19 = auVar17._0_8_;
  if (auVar17._8_4_ == 1) {
    plVar12 = (long *)__cxa_begin_catch(uVar19);
    lVar3 = *plVar12;
    __cxa_end_catch();
    __this_06.fields._index = (int)uVar19;
    __this_06.fields._version = (int)((ulong)uVar19 >> 0x20);
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8;
    __this_06.fields._current = (Il2CppObject *)pIVar20;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)auStack_f8);
    if (lVar3 == 0) {
label_0428078a:
      (*(pSVar11->klass->vtable)._3_ToString.methodPtr)(pSVar11,(pSVar11->klass->vtable)._3_ToString.method);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
    __this_08.fields._index = (int)uVar19;
    __this_08.fields._version = (int)((ulong)uVar19 >> 0x20);
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8;
    __this_08.fields._current = (Il2CppObject *)pIVar20;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_08,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee8);
  }
  else {
    __this_07.fields._index = (int)uVar19;
    __this_07.fields._version = (int)((ulong)uVar19 >> 0x20);
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8;
    __this_07.fields._current = (Il2CppObject *)pIVar20;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_07,(MethodInfo_321A1C0 *)auStack_f8);
  }
  _Unwind_Resume(uVar19);
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator$$GetParametersStr
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetParametersStr (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o* __this, CustomLogic_Editor_Models_CLParameter_array* parameters, int32_t linkKind, const MethodInfo* method);
// 0x427efa0

System_String_o *
CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetParametersStr
          (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *__this,
          CustomLogic_Editor_Models_CLParameter_array *parameters,int32_t linkKind,MethodInfo *method)

{
  long *plVar1;
  System_String_c *__this_00;
  void *pvVar2;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_object__o *pSVar4;
  uint uVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  System_String_array *pSVar8;
  MethodInfo *pMVar9;
  System_String_o *str2;
  System_String_o *pSVar10;
  long *plVar11;
  _union_249689 _Var12;
  System_Func_TSource__TResult__o *selector;
  _union_249689 _Var13;
  _union_249689 values;
  _union_249689 _Var14;
  Il2CppObject *pIVar15;
  System_Func_TSource__TResult__o *pSVar16;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar17;
  System_Text_StringBuilder_o *pSVar18;
  MethodInfo *pMVar19;
  _union_249689 *p_Var20;
  System_String_o **method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  int iVar21;
  _union_249689 _Var22;
  ulong uVar23;
  _union_249689 _Var24;
  _union_249689 _Var25;
  System_String_o **__this_10;
  _union_249689 _Var26;
  CustomLogic_Editor_Models_CLParameter_o *unaff_R12;
  _union_249689 unaff_R15;
  undefined1 auVar27 [12];
  undefined1 auVar28 [16];
  undefined8 in_stack_fffffffffffffe38;
  undefined8 in_stack_fffffffffffffe40;
  undefined8 uVar29;
  Il2CppRGCTXData *pIVar30;
  undefined1 auStack_198 [32];
  _union_249689 _Stack_178;
  System_Collections_Generic_List_object__o *pSStack_170;
  _union_249689 _Stack_168;
  _union_249689 _Stack_160;
  _union_249689 _Stack_158;
  _union_249689 _Stack_150;
  _union_249689 _Stack_148;
  _union_249689 _Stack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  _union_249689 _Stack_128;
  _union_249689 _Stack_120;
  _union_249689 _Stack_118;
  _union_249689 _Stack_110;
  _union_249689 _Stack_108;
  _union_249689 _Stack_100;
  _union_249689 _Stack_f0;
  _union_249689 _Stack_e8;
  _union_249689 _Stack_e0;
  _union_249689 _Stack_d8;
  _union_249689 _Stack_d0;
  System_Func_TSource__TResult__o *pSStack_c8;
  _union_249689 _Stack_c0;
  _union_249689 _Stack_b8;
  _union_249689 _Stack_b0;
  _union_249689 _Stack_a8;
  undefined1 uStack_91;
  _union_249689 _Stack_90;
  System_Func_TSource__TResult__o *pSStack_88;
  _union_249689 _Stack_80;
  _union_249689 _Stack_78;
  CustomLogic_Editor_Models_CLParameter_o *pCStack_70;
  CustomLogic_Editor_Models_CLParameter_array *pCStack_68;
  _union_249689 _Stack_60;
  _union_249689 _Stack_58;
  _union_249689 _Stack_50;
  int32_t local_44;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *local_40;
  System_String_array *local_38;
  
  local_44 = linkKind;
  local_40 = __this;
  if (g_data_057adc70 == '\0') {
    _Stack_50 = (_union_249689)0x427efcf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    _Stack_50 = (_union_249689)0x427efdb;
    il2cpp_runtime_helper_023445d0(&": ");
    _Stack_50 = (_union_249689)0x427efe7;
    il2cpp_runtime_helper_023445d0(&" = ");
    _Stack_50 = (_union_249689)0x427eff3;
    il2cpp_runtime_helper_023445d0(&", ");
    g_data_057adc70 = '\x01';
  }
  if ((parameters == (CustomLogic_Editor_Models_CLParameter_array *)0x0) || (parameters->max_length == 0)) {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  _Stack_50 = (_union_249689)0x427f01f;
  pSVar8 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string.genericMethod);
  uVar5 = (uint)parameters->max_length;
  if ((int)uVar5 < 1) {
label_0427f109:
    pSVar10 = System_String__Join(", ",pSVar8,(MethodInfo *)0x0);
    return pSVar10;
  }
  if (pSVar8 != (System_String_array *)0x0) {
    _Var22.genericMethod = pSVar8->m_Items;
    unaff_R15.genericMethod = (void *)0x0;
    local_38 = pSVar8;
    do {
      if (uVar5 <= unaff_R15._0_4_) {
label_0427f152:
        _Stack_50 = (_union_249689)0x427f157;
        il2cpp_runtime_helper_022b2ca0();
        goto label_0427f157;
      }
      unaff_R12 = parameters->m_Items[(long)unaff_R15];
      if (unaff_R12 == (CustomLogic_Editor_Models_CLParameter_o *)0x0) goto label_0427f160;
      if ((char)(unaff_R12->fields)._IsOptional_k__BackingField == '\0') {
        pMVar19 = method;
        method = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        _Stack_50 = (_union_249689)0x427f085;
        pMVar9 = (MethodInfo *)
                 System_String__Concat_3ae5ba0
                           (" = ",(unaff_R12->fields)._DefaultValue_k__BackingField,(MethodInfo *)0x0);
        pMVar19 = method;
        method = pMVar9;
      }
      pSVar10 = (unaff_R12->fields)._Name_k__BackingField;
      _Stack_50 = (_union_249689)0x427f0c0;
      str2 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr
                       (local_40,(unaff_R12->fields)._Type_k__BackingField,local_44,pMVar19);
      _Stack_50 = (_union_249689)0x427f0db;
      pSVar10 = System_String__Concat_3af7470
                          (pSVar10,(System_String_o *)": ",str2,(System_String_o *)method,
                           (MethodInfo *)0x0);
      pSVar8 = local_38;
      if ((uint)local_38->max_length <= unaff_R15._0_4_) goto label_0427f152;
      *(System_String_o **)_Var22.genericMethod = pSVar10;
      _Stack_50 = (_union_249689)0x427f0f4;
      il2cpp_runtime_helper_022b4080(_Var22.genericMethod,pSVar10);
      uVar5 = (uint)parameters->max_length;
      _Var22.genericMethod = _Var22.genericMethod + 8;
      unaff_R15.genericMethod = unaff_R15.genericMethod + 1;
    } while (unaff_R15._0_4_ < (int)uVar5);
    goto label_0427f109;
  }
label_0427f157:
  _Var22 = (_union_249689)parameters->m_Items[0];
  if ((System_String_Fields)_Var22.genericMethod == (System_String_Fields)0x0) {
label_0427f160:
    _Stack_50 = (_union_249689)0x427f165;
    il2cpp_runtime_helper_022b2c90();
  }
  if (*(char *)((long)_Var22.genericMethod + 0x30) == '\0') {
    _Var25 = (_union_249689)(*(_union_249689 **)(g_data_057b9c00 + 0xb8))->genericMethod;
  }
  else {
    _Stack_50 = (_union_249689)0x427f19a;
    _Var25.genericMethod =
         System_String__Concat_3ae5ba0
                   (" = ",*(System_String_o **)((long)_Var22.genericMethod + 0x28),(MethodInfo *)0x0);
  }
  _Var24 = (_union_249689)((_union_249689 *)((long)_Var22.genericMethod + 0x10))->genericMethod;
  _Stack_50 = (_union_249689)0x427f1b3;
  pSVar10 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr
                      (local_40,*(CustomLogic_Editor_Models_TypeReference_o **)
                                 ((long)_Var22.genericMethod + 0x20),local_44,method);
  _Stack_50 = (_union_249689)0x427f1ce;
  method_00 = (System_String_o **)_Var25;
  pSVar16 = ": ";
  _Var26 = _Var24;
  System_String__Concat_3af7470
            (_Var24.genericMethod,(System_String_o *)": ",pSVar10,_Var25.genericMethod,
             (MethodInfo *)0x0);
  _Stack_50 = (_union_249689)0x427f1d3;
  il2cpp_runtime_helper_022b2c90();
  _Stack_90 = _Var26;
  _Stack_78 = _Var22;
  pCStack_70 = unaff_R12;
  pCStack_68 = parameters;
  _Stack_60 = _Var25;
  _Stack_58 = unaff_R15;
  _Stack_50 = _Var24;
  if (g_data_057adc6e == '\0') {
    _Stack_a8 = (_union_249689)0x427f20f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_AppendProperties_b__8_0);
    _Stack_a8 = (_union_249689)0x427f21b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    _Stack_a8 = (_union_249689)0x427f227;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    _Stack_a8 = (_union_249689)0x427f233;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    _Stack_a8 = (_union_249689)0x427f23f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    _Stack_a8 = (_union_249689)0x427f24b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    _Stack_a8 = (_union_249689)0x427f257;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_List_1_System_String);
    _Stack_a8 = (_union_249689)0x427f263;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    _Stack_a8 = (_union_249689)0x427f26f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_List_string);
    _Stack_a8 = (_union_249689)0x427f27b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    _Stack_a8 = (_union_249689)0x427f287;
    il2cpp_runtime_helper_023445d0(&" ");
    _Stack_a8 = (_union_249689)0x427f293;
    il2cpp_runtime_helper_023445d0(&"\r\n");
    _Stack_a8 = (_union_249689)0x427f29f;
    il2cpp_runtime_helper_023445d0(&", ");
    _Stack_a8 = (_union_249689)0x427f2ab;
    il2cpp_runtime_helper_023445d0(&"Refer to ");
    _Stack_a8 = (_union_249689)0x427f2b7;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adc6e = '\x01';
  }
  uStack_91 = 0;
  _Stack_a8 = (_union_249689)0x427f2d2;
  plVar11 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_List_List_string);
  _Stack_a8 = (_union_249689)0x427f2e7;
  _Var13 = MethodInfo_List_1_List_1_System_String;
  _Var26.genericMethod = plVar11;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)plVar11,MethodInfo_List_1_List_1_System_String.genericMethod);
  p_Var20 = (_union_249689 *)method_00;
  selector = pSVar16;
  if (pSVar16 == (System_Func_TSource__TResult__o *)0x0) {
label_0427f78b:
    method_00 = (System_String_o **)p_Var20;
    _Stack_a8 = (_union_249689)0x427f790;
    il2cpp_runtime_helper_022b2c90();
    _Var14 = _Var24;
    pSVar16 = selector;
  }
  else {
    iVar21 = (int)(pSVar16->fields).invoke_impl;
    pMVar19 = extraout_RDX;
    if (iVar21 < 1) {
label_0427f755:
      __this_00 = ((System_String_o *)((long)_Stack_90.genericMethod + 0x18))->klass;
      _Var26 = (_union_249689)((_union_249689 *)((long)_Stack_90.genericMethod + 0x20))->genericMethod;
      _Stack_a8 = (_union_249689)0x427f76a;
      _Var13.genericMethod = plVar11;
      pSVar10 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__CreateTable
                          (_Var26.genericMethod,(System_Collections_Generic_List_List_string___o *)plVar11,
                           pMVar19);
      _Var22.genericMethod = (void *)0x0;
      p_Var20 = (_union_249689 *)method_00;
      selector = pSVar16;
      if (__this_00 != (System_String_c *)0x0) {
        _Stack_a8 = (_union_249689)0x427f77c;
        pSVar18 = System_Text_StringBuilder__AppendLine_3b044f0
                            ((System_Text_StringBuilder_o *)__this_00,pSVar10,(MethodInfo *)0x0);
        return (System_String_o *)pSVar18;
      }
      goto label_0427f78b;
    }
    _Var14.genericMethod = (void *)0x0;
    unaff_R15.genericMethod = (void *)0x0;
    pSStack_88 = pSVar16;
    if (iVar21 != 0) {
      do {
        _Var25 = (_union_249689)
                 ((_union_249689 *)(&(pSVar16->fields).m_target + unaff_R15._0_4_))->genericMethod;
        p_Var20 = (_union_249689 *)method_00;
        _Var24 = _Var14;
        selector = pSVar16;
        if ((System_String_Fields)_Var25.genericMethod == (System_String_Fields)0x0) goto label_0427f78b;
        _Var24 = (_union_249689)((_union_249689 *)((long)_Var25.genericMethod + 0x28))->genericMethod;
        if ((System_String_Fields)_Var24.genericMethod == (System_String_Fields)0x0) {
label_0427f38e:
          _Var24 = _Var14;
          _Var26 = "";
        }
        else {
          if ((System_String_Fields)_Var24.genericMethod == (System_String_Fields)0x0) goto label_0427f78b;
          _Var26.genericMethod = ((_union_249689 *)((long)_Var24.genericMethod + 0x10))->genericMethod;
          _Var14 = _Var24;
          if ((System_String_Fields)((_union_249689 *)((long)_Var24.genericMethod + 0x10))->genericMethod ==
              (System_String_Fields)0x0) goto label_0427f38e;
        }
        _Var13.genericMethod = (void *)0x0;
        _Stack_a8 = (_union_249689)0x427f39f;
        _Var14.genericMethod =
             CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                       (_Var26.genericMethod,0,pMVar19);
        p_Var20 = (_union_249689 *)method_00;
        if ((System_String_Fields)_Var14.genericMethod == (System_String_Fields)0x0) goto label_0427f78b;
        p_Var20 = (_union_249689 *)0x0;
        _Stack_a8 = (_union_249689)0x427f3c6;
        _Var13 = "\r\n";
        _Var12.genericMethod =
             System_String__Replace_3af9030
                       (_Var14.genericMethod,"\r\n".genericMethod," ",(MethodInfo *)0x0);
        _Var26 = _Var14;
        if ((System_String_Fields)_Var12.genericMethod == (System_String_Fields)0x0) goto label_0427f78b;
        _Var13 = (_union_249689)0xa;
        p_Var20 = (_union_249689 *)0x0;
        _Stack_a8 = (_union_249689)0x427f3e3;
        pSVar10 = System_String__Replace(_Var12.genericMethod,10,0x20,(MethodInfo *)0x0);
        _Var26 = _Var12;
        if (pSVar10 == (System_String_o *)0x0) goto label_0427f78b;
        p_Var20 = (_union_249689 *)0x0;
        _Stack_a8 = (_union_249689)0x427f400;
        _Var22.genericMethod = System_String__Replace(pSVar10,9,0x20,(MethodInfo *)0x0);
        _Stack_80 = _Var24;
        if ((*(long *)((long)_Var25.genericMethod + 0x38) != 0) &&
           (*(long *)(*(long *)((long)_Var25.genericMethod + 0x38) + 0x18) != 0)) {
          _Stack_a8 = (_union_249689)0x427f42a;
          bVar6 = System_String__IsNullOrEmpty(_Var22.genericMethod,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            _Stack_a8 = (_union_249689)0x427f442;
            _Var22.genericMethod =
                 System_String__Concat_3ae5ba0(_Var22.genericMethod," ",(MethodInfo *)0x0);
          }
          _Var24 = (_union_249689)((_union_249689 *)((long)_Var25.genericMethod + 0x38))->genericMethod;
          _Stack_a8 = (_union_249689)0x427f458;
          selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
          _Stack_a8 = (_union_249689)0x427f474;
          System_Func_object__object____ctor();
          _Stack_a8 = (_union_249689)0x427f489;
          _Var26.genericMethod =
               System_Linq_Enumerable__Select_object__object_(_Var24.genericMethod,selector,MethodInfo_IEnumerable_1_System_String_Select_String_String);
          p_Var20 = &MethodInfo_String_ToArray_String;
          _Stack_a8 = (_union_249689)0x427f49b;
          _Var13 = MethodInfo_String_ToArray_String;
          pSVar8 = (System_String_array *)
                   System_Linq_Enumerable__ToArray_object_(_Var26.genericMethod,MethodInfo_String_ToArray_String.genericMethod);
          pSVar16 = pSStack_88;
          if (pSVar8 == (System_String_array *)0x0) goto label_0427f78b;
          if ((int)pSVar8->max_length == 1) {
            pSVar10 = pSVar8->m_Items[0];
          }
          else {
            _Stack_a8 = (_union_249689)0x427f4f4;
            pSVar10 = System_String__Join(", ",pSVar8,(MethodInfo *)0x0);
          }
          p_Var20 = (_union_249689 *)0x0;
          _Stack_a8 = (_union_249689)0x427f50b;
          _Var22.genericMethod =
               System_String__Concat_3af7150(_Var22.genericMethod,"Refer to ",pSVar10,(MethodInfo *)0x0);
        }
        _Stack_a8 = (_union_249689)0x427f51d;
        _Var24.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        _Stack_a8 = (_union_249689)0x427f532;
        _Var13 = MethodInfo_List_1_System_String;
        _Var26.genericMethod = _Var24.genericMethod;
        System_Collections_Generic_List_object____ctor(_Var24.genericMethod,MethodInfo_List_1_System_String.genericMethod);
        _Var14 = MethodInfo_Void_Add;
        selector = pSVar16;
        if ((System_String_Fields)_Var24.genericMethod == (System_String_Fields)0x0) goto label_0427f78b;
        _Var13 = (_union_249689)((_union_249689 *)((long)_Var25.genericMethod + 0x20))->genericMethod;
        *(int *)((long)_Var24.genericMethod + 0x1c) = *(int *)((long)_Var24.genericMethod + 0x1c) + 1;
        lVar3 = *(long *)((long)_Var24.genericMethod + 0x10);
        p_Var20 = (_union_249689 *)_Var14;
        if (lVar3 == 0) goto label_0427f78b;
        uVar5 = *(uint *)((long)_Var24.genericMethod + 0x18);
        if (uVar5 < *(uint *)(lVar3 + 0x18)) {
          _Var14._0_4_ = uVar5 + 1;
          _Var14._4_4_ = 0;
          *(uint *)((long)_Var24.genericMethod + 0x18) = _Var14._0_4_;
          ((_union_249689 *)(lVar3 + 0x20 + (long)(int)uVar5 * 8))->genericMethod = (void *)_Var13;
          _Stack_a8 = (_union_249689)0x427f57b;
          il2cpp_runtime_helper_022b4080(lVar3 + (long)(int)uVar5 * 8 + 0x20);
        }
        else {
          _Stack_a8 = (_union_249689)0x427f597;
          System_Collections_Generic_List_object___AddWithResize
                    (_Var24.genericMethod,_Var13.genericMethod,
                     *(MethodInfo_362C220 **)
                      (*(long *)(*(long *)((long)_Var14.genericMethod + 0x20) + 0xc0) + 0x70));
        }
        _Var13 = (_union_249689)((_union_249689 *)((long)_Var25.genericMethod + 0x18))->genericMethod;
        _Stack_a8 = (_union_249689)0x427f5aa;
        _Var26 = _Stack_90;
        pSVar10 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr
                            (_Stack_90.genericMethod,_Var13.genericMethod,1,_Var14.genericMethod);
        _Var14 = MethodInfo_Void_Add;
        *(int *)((long)_Var24.genericMethod + 0x1c) = *(int *)((long)_Var24.genericMethod + 0x1c) + 1;
        lVar3 = *(long *)((long)_Var24.genericMethod + 0x10);
        p_Var20 = (void *)0x0;
        if (lVar3 == 0) goto label_0427f78b;
        uVar5 = *(uint *)((long)_Var24.genericMethod + 0x18);
        if (uVar5 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)((long)_Var24.genericMethod + 0x18) = uVar5 + 1;
          *(System_String_o **)(lVar3 + 0x20 + (long)(int)uVar5 * 8) = pSVar10;
          _Stack_a8 = (_union_249689)0x427f5e9;
          il2cpp_runtime_helper_022b4080(lVar3 + (long)(int)uVar5 * 8 + 0x20);
        }
        else {
          _Stack_a8 = (_union_249689)0x427f60a;
          System_Collections_Generic_List_object___AddWithResize
                    (_Var24.genericMethod,(Il2CppObject *)pSVar10,
                     *(MethodInfo_362C220 **)
                      (*(long *)(*(long *)((long)_Var14.genericMethod + 0x20) + 0xc0) + 0x70));
        }
        uStack_91 = *(undefined1 *)((long)_Var25.genericMethod + 0x30);
        if (*(int *)(g_data_057b9b98 + 0xe4) == 0) {
          _Stack_a8 = (_union_249689)0x427f62c;
          il2cpp_runtime_helper_02337ed0();
        }
        _Var26.genericMethod = &uStack_91;
        _Var13.genericMethod = (void *)0x0;
        _Stack_a8 = (_union_249689)0x427f638;
        _Var12.genericMethod = System_Boolean__ToString(_Var26._0_4_,(MethodInfo *)0x0);
        _Var14 = MethodInfo_Void_Add;
        *(int *)((long)_Var24.genericMethod + 0x1c) = *(int *)((long)_Var24.genericMethod + 0x1c) + 1;
        lVar3 = *(long *)((long)_Var24.genericMethod + 0x10);
        p_Var20 = (void *)0x0;
        if (lVar3 == 0) goto label_0427f78b;
        uVar5 = *(uint *)((long)_Var24.genericMethod + 0x18);
        if (uVar5 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)((long)_Var24.genericMethod + 0x18) = uVar5 + 1;
          _Var26.genericMethod = (void *)(lVar3 + (long)(int)uVar5 * 8 + 0x20);
          ((_union_249689 *)(lVar3 + 0x20 + (long)(int)uVar5 * 8))->genericMethod = (void *)_Var12;
          _Stack_a8 = (_union_249689)0x427f677;
          il2cpp_runtime_helper_022b4080();
          _Var13 = _Var12;
        }
        else {
          _Stack_a8 = (_union_249689)0x427f69a;
          _Var26.genericMethod = _Var24.genericMethod;
          System_Collections_Generic_List_object___AddWithResize
                    (_Var24.genericMethod,_Var12.genericMethod,
                     *(MethodInfo_362C220 **)
                      (*(long *)(*(long *)((long)_Var14.genericMethod + 0x20) + 0xc0) + 0x70));
          _Var13 = _Var12;
        }
        p_Var20 = (_union_249689 *)MethodInfo_Void_Add;
        *(int *)((long)_Var24.genericMethod + 0x1c) = *(int *)((long)_Var24.genericMethod + 0x1c) + 1;
        lVar3 = *(long *)((long)_Var24.genericMethod + 0x10);
        if (lVar3 == 0) goto label_0427f78b;
        uVar5 = *(uint *)((long)_Var24.genericMethod + 0x18);
        _Var13 = _Var22;
        if (uVar5 < *(uint *)(lVar3 + 0x18)) {
          p_Var20._0_4_ = uVar5 + 1;
          p_Var20._4_4_ = 0;
          *(uint *)((long)_Var24.genericMethod + 0x18) = (uint)p_Var20;
          _Var26.genericMethod = (void *)(lVar3 + (long)(int)uVar5 * 8 + 0x20);
          ((_union_249689 *)(lVar3 + 0x20 + (long)(int)uVar5 * 8))->genericMethod = (void *)_Var22;
          _Stack_a8 = (_union_249689)0x427f6d9;
          il2cpp_runtime_helper_022b4080();
          method_00 = (System_String_o **)MethodInfo_Void_Add;
        }
        else {
          _Stack_a8 = (_union_249689)0x427f70a;
          _Var26.genericMethod = _Var24.genericMethod;
          System_Collections_Generic_List_object___AddWithResize
                    (_Var24.genericMethod,_Var22.genericMethod,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)((long)p_Var20 + 0x20) + 0xc0) + 0x70));
          method_00 = (System_String_o **)MethodInfo_Void_Add;
        }
        MethodInfo_Void_Add = (_union_249689)method_00;
        if ((System_String_Fields)plVar11 == (System_String_Fields)0x0) goto label_0427f78b;
        *(int *)((long)plVar11 + 0x1c) = *(int *)((long)plVar11 + 0x1c) + 1;
        lVar3 = *(long *)((long)plVar11 + 0x10);
        p_Var20 = (_union_249689 *)method_00;
        if (lVar3 == 0) goto label_0427f78b;
        uVar5 = *(uint *)((long)plVar11 + 0x18);
        if (uVar5 < *(uint *)(lVar3 + 0x18)) {
          method_00._0_4_ = uVar5 + 1;
          method_00._4_4_ = 0;
          *(uint *)((long)plVar11 + 0x18) = (uint)method_00;
          _Var26.genericMethod = (void *)(lVar3 + (long)(int)uVar5 * 8 + 0x20);
          ((_union_249689 *)(lVar3 + 0x20 + (long)(int)uVar5 * 8))->genericMethod = (void *)_Var24;
          _Stack_a8 = (_union_249689)0x427f750;
          il2cpp_runtime_helper_022b4080();
          pMVar19 = extraout_RDX_01;
          _Var13 = _Var24;
        }
        else {
          _Stack_a8 = (_union_249689)0x427f33a;
          _Var26.genericMethod = plVar11;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)plVar11,_Var24.genericMethod,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)((long)method_00 + 0x20) + 0xc0) + 0x70));
          pMVar19 = extraout_RDX_00;
          _Var13 = _Var24;
        }
        unaff_R15._0_4_ = unaff_R15._0_4_ + 1;
        unaff_R15._4_4_ = 0;
        uVar5 = (uint)(pSVar16->fields).invoke_impl;
        _Var24 = _Stack_80;
        if ((int)uVar5 <= (int)unaff_R15._0_4_) goto label_0427f755;
        _Var14 = _Stack_80;
      } while (unaff_R15._0_4_ < uVar5);
    }
  }
  _Stack_a8 = (_union_249689)0x427f795;
  il2cpp_runtime_helper_022b2ca0();
  _Var24 = _Var13;
  __this_10 = (System_String_o **)_Var26;
  _Stack_d0 = _Var22;
  pSStack_c8 = pSVar16;
  _Stack_c0.genericMethod = plVar11;
  _Stack_b8 = _Var25;
  _Stack_b0 = unaff_R15;
  _Stack_a8 = _Var14;
  if (g_data_057adc6f == '\0') {
    _Stack_100 = (_union_249689)0x427f7cd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_AppendMethods_b__9_1);
    _Stack_100 = (_union_249689)0x427f7d9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_CLParameter);
    _Stack_100 = (_union_249689)0x427f7e5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    _Stack_100 = (_union_249689)0x427f7f1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    _Stack_100 = (_union_249689)0x427f7fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CLParameter_bool);
    _Stack_100 = (_union_249689)0x427f809;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    _Stack_100 = (_union_249689)0x427f815;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    _Stack_100 = (_union_249689)0x427f821;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_AppendMethods_b__9_0);
    _Stack_100 = (_union_249689)0x427f82d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    _Stack_100 = (_union_249689)0x427f839;
    il2cpp_runtime_helper_023445d0(&" ");
    _Stack_100 = (_union_249689)0x427f845;
    il2cpp_runtime_helper_023445d0(&"> **Remarks**: ");
    _Stack_100 = (_union_249689)0x427f851;
    il2cpp_runtime_helper_023445d0(&"__");
    _Stack_100 = (_union_249689)0x427f85d;
    il2cpp_runtime_helper_023445d0(&"> ");
    _Stack_100 = (_union_249689)0x427f869;
    il2cpp_runtime_helper_023445d0(&"{% hint style=\"warning\" %}");
    _Stack_100 = (_union_249689)0x427f875;
    il2cpp_runtime_helper_023445d0(&"> - `");
    _Stack_100 = (_union_249689)0x427f881;
    il2cpp_runtime_helper_023445d0(&"<pre class=\"language-typescript\"><code class=\"lang-typescript\">function ");
    _Stack_100 = (_union_249689)0x427f88d;
    il2cpp_runtime_helper_023445d0(&"null");
    _Stack_100 = (_union_249689)0x427f899;
    il2cpp_runtime_helper_023445d0(&"{% endhint %}");
    _Stack_100 = (_union_249689)0x427f8a5;
    il2cpp_runtime_helper_023445d0(&"`: ");
    _Stack_100 = (_union_249689)0x427f8b1;
    il2cpp_runtime_helper_023445d0(&", ");
    _Stack_100 = (_union_249689)0x427f8bd;
    il2cpp_runtime_helper_023445d0(&"Refer to ");
    _Stack_100 = (_union_249689)0x427f8c9;
    il2cpp_runtime_helper_023445d0(&" -> ");
    _Stack_100 = (_union_249689)0x427f8d5;
    il2cpp_runtime_helper_023445d0(&"(");
    _Stack_100 = (_union_249689)0x427f8e1;
    il2cpp_runtime_helper_023445d0(&")");
    _Stack_100 = (_union_249689)0x427f8ed;
    il2cpp_runtime_helper_023445d0(&"");
    _Stack_100 = (_union_249689)0x427f8f9;
    il2cpp_runtime_helper_023445d0(&"> **Returns**: ");
    _Stack_100 = (_union_249689)0x427f905;
    il2cpp_runtime_helper_023445d0(&"> **Parameters**:");
    _Stack_100 = (_union_249689)0x427f911;
    il2cpp_runtime_helper_023445d0(&"**Obsolete**: ");
    __this_10 = &"</code></pre>";
    _Stack_100 = (_union_249689)0x427f91d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc6f = '\x01';
  }
  _Stack_f0 = _Var26;
  if ((System_String_Fields)_Var13.genericMethod == (System_String_Fields)0x0) {
label_0428007e:
    _Stack_100 = (_union_249689)0x4280083;
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
    return pSVar10;
  }
  uVar5 = *(uint *)((long)_Var13.genericMethod + 0x18);
  if ((int)uVar5 < 1) {
    return (System_String_o *)(ulong)uVar5;
  }
  _Var22.genericMethod = (System_String_o *)0x0;
  _Stack_e0 = _Var13;
  if (uVar5 != 0) {
    do {
      _Var25 = (_union_249689)
               ((_union_249689 *)((long)_Var13.genericMethod + (long)_Var22._0_4_ * 8 + 0x20))->genericMethod;
      if (((System_String_Fields)_Var25.genericMethod == (System_String_Fields)0x0) ||
         (__this_10 = ((_union_249689 *)((long)_Var25.genericMethod + 0x28))->genericMethod,
         (System_String_Fields)__this_10 == (System_String_Fields)0x0)) goto label_0428007e;
      _Stack_100 = (_union_249689)0x427f9a9;
      _Var24 = "__";
      bVar6 = System_String__StartsWith
                        ((System_String_o *)__this_10,"__".genericMethod,(MethodInfo *)0x0);
      _Var14 = _Stack_f0;
      if ((char)bVar6 == '\0') {
        _Stack_100 = (_union_249689)0x427f9c8;
        _Stack_d8 = _Var22;
        plVar11 = (long *)CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetParametersStr
                                    (_Stack_f0.genericMethod,
                                     *(CustomLogic_Editor_Models_CLParameter_array **)
                                      ((long)_Var25.genericMethod + 0x18),2,(MethodInfo *)method_00);
        _Stack_100 = (_union_249689)0x427f9dc;
        pSVar10 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr
                            (_Var14.genericMethod,
                             *(CustomLogic_Editor_Models_TypeReference_o **)
                              ((long)_Var25.genericMethod + 0x20),2,(MethodInfo *)method_00);
        _Stack_100 = (_union_249689)0x427f9e9;
        bVar6 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          _Stack_100 = (_union_249689)0x427fa01;
          bVar6 = System_String__op_Equality(pSVar10,"null",(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') goto label_0427fa05;
          _Stack_100 = (_union_249689)0x427fa33;
          _Var26.genericMethod = System_String__Concat_3ae5ba0(" -> ",pSVar10,(MethodInfo *)0x0);
        }
        else {
label_0427fa05:
          _Var26 = **(_union_249689 **)(g_data_057b9c00 + 0xb8);
        }
        _Var12 = _Stack_f0;
        _Stack_e8 = _Var25;
        if (*(System_Text_StringBuilder_o **)((long)_Stack_f0.genericMethod + 0x18) ==
            (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
        _Stack_100 = (_union_249689)0x427fa5e;
        System_Text_StringBuilder__Append_3b03f90
                  (*(System_Text_StringBuilder_o **)((long)_Stack_f0.genericMethod + 0x18),"<pre class=\"language-typescript\"><code class=\"lang-typescript\">function ",
                   (MethodInfo *)0x0);
        unaff_R15 = (_union_249689)((_union_249689 *)((long)_Var12.genericMethod + 0x18))->genericMethod;
        _Var24 = (_union_249689)0x5;
        _Stack_100 = (_union_249689)0x427fa76;
        __this_10 = (System_String_o **)TypeInfo_string;
        _Var13.genericMethod = (void *)il2cpp_runtime_helper_022b2a40();
        if ((System_String_Fields)_Var13.genericMethod == (System_String_Fields)0x0) goto label_0428007e;
        _Var14 = _Var12;
        if (*(int *)((long)_Var13.genericMethod + 0x18) == 0) break;
        _Var24 = (_union_249689)((_union_249689 *)((long)_Stack_e8.genericMethod + 0x28))->genericMethod;
        __this_10 = (System_String_o **)((long)_Var13.genericMethod + 0x20);
        ((_union_249689 *)((long)_Var13.genericMethod + 0x20))->genericMethod = (void *)_Var24;
        _Stack_100 = (_union_249689)0x427faa2;
        il2cpp_runtime_helper_022b4080();
        _Var25 = "(";
        if (*(uint *)((long)_Var13.genericMethod + 0x18) < 2) break;
        __this_10 = (System_String_o **)((long)_Var13.genericMethod + 0x28);
        *(_union_249689 *)((long)_Var13.genericMethod + 0x28) = "(";
        _Stack_100 = (_union_249689)0x427fac4;
        il2cpp_runtime_helper_022b4080();
        _Var24 = _Var25;
        if (*(uint *)((long)_Var13.genericMethod + 0x18) < 3) break;
        __this_10 = (System_String_o **)((long)_Var13.genericMethod + 0x30);
        ((_union_249689 *)((long)_Var13.genericMethod + 0x30))->genericMethod = plVar11;
        _Stack_100 = (_union_249689)0x427fadf;
        _Var24.genericMethod = plVar11;
        il2cpp_runtime_helper_022b4080();
        _Var25 = ")";
        if (*(uint *)((long)_Var13.genericMethod + 0x18) < 4) break;
        __this_10 = (System_String_o **)((long)_Var13.genericMethod + 0x38);
        *(_union_249689 *)((long)_Var13.genericMethod + 0x38) = ")";
        _Stack_100 = (_union_249689)0x427fb01;
        il2cpp_runtime_helper_022b4080();
        _Var22 = _Stack_d8;
        _Var24 = _Var25;
        if (*(uint *)((long)_Var13.genericMethod + 0x18) < 5) break;
        *(_union_249689 *)((long)_Var13.genericMethod + 0x40) = _Var26;
        _Stack_100 = (_union_249689)0x427fb24;
        il2cpp_runtime_helper_022b4080((long)_Var13.genericMethod + 0x40);
        _Stack_100 = (_union_249689)0x427fb2e;
        pSVar10 = System_String__Concat_3af7570(_Var13.genericMethod,(MethodInfo *)0x0);
        if ((System_String_Fields)unaff_R15.genericMethod == (System_String_Fields)0x0) goto label_0428007e;
        _Stack_100 = (_union_249689)0x427fb44;
        System_Text_StringBuilder__Append_3b03f90(unaff_R15.genericMethod,pSVar10,(MethodInfo *)0x0);
        _Var13 = _Stack_e0;
        if (*(System_Text_StringBuilder_o **)((long)_Var12.genericMethod + 0x18) ==
            (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
        _Stack_100 = (_union_249689)0x427fb67;
        System_Text_StringBuilder__AppendLine_3b044f0
                  (*(System_Text_StringBuilder_o **)((long)_Var12.genericMethod + 0x18),"</code></pre>",
                   (MethodInfo *)0x0);
        unaff_R15 = _Stack_e8;
        _Stack_100 = (_union_249689)0x427fb76;
        bVar6 = CustomLogic_Editor_Models_BaseModel__get_IsObsolete(_Stack_e8.genericMethod,(MethodInfo *)0x0)
        ;
        if ((char)bVar6 != '\0') {
          if (*(System_Text_StringBuilder_o **)((long)_Var12.genericMethod + 0x18) ==
              (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
          _Stack_100 = (_union_249689)0x427fb92;
          System_Text_StringBuilder__AppendLine
                    (*(System_Text_StringBuilder_o **)((long)_Var12.genericMethod + 0x18),(MethodInfo *)0x0);
          if (*(System_Text_StringBuilder_o **)((long)_Var12.genericMethod + 0x18) ==
              (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
          _Stack_100 = (_union_249689)0x427fbb0;
          System_Text_StringBuilder__AppendLine_3b044f0
                    (*(System_Text_StringBuilder_o **)((long)_Var12.genericMethod + 0x18),"{% hint style=\"warning\" %}",
                     (MethodInfo *)0x0);
          _Var26 = (_union_249689)((_union_249689 *)((long)_Var12.genericMethod + 0x18))->genericMethod;
          _Stack_100 = (_union_249689)0x427fbc9;
          pSVar10 = System_String__Concat_3ae5ba0
                              ("**Obsolete**: ",*(System_String_o **)((long)unaff_R15.genericMethod + 0x10),
                               (MethodInfo *)0x0);
          if ((System_String_Fields)_Var26.genericMethod == (System_String_Fields)0x0) goto label_0428007e;
          _Stack_100 = (_union_249689)0x427fbdf;
          System_Text_StringBuilder__AppendLine_3b044f0(_Var26.genericMethod,pSVar10,(MethodInfo *)0x0);
          if (*(System_Text_StringBuilder_o **)((long)_Var12.genericMethod + 0x18) ==
              (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
          _Stack_100 = (_union_249689)0x427fbfd;
          System_Text_StringBuilder__AppendLine_3b044f0
                    (*(System_Text_StringBuilder_o **)((long)_Var12.genericMethod + 0x18),"{% endhint %}",
                     (MethodInfo *)0x0);
          if (*(System_Text_StringBuilder_o **)((long)_Var12.genericMethod + 0x18) ==
              (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
          _Stack_100 = (_union_249689)0x427fc11;
          System_Text_StringBuilder__AppendLine
                    (*(System_Text_StringBuilder_o **)((long)_Var12.genericMethod + 0x18),(MethodInfo *)0x0);
        }
        if (*(long *)((long)unaff_R15.genericMethod + 0x30) == 0) goto label_0428007e;
        __this_10 = ((_union_249689 *)(*(long *)((long)unaff_R15.genericMethod + 0x30) + 0x10))->genericMethod
        ;
        _Var24.genericMethod = (void *)0x0;
        _Stack_100 = (_union_249689)0x427fc29;
        bVar6 = System_String__IsNullOrEmpty((System_String_o *)__this_10,(MethodInfo *)0x0);
        _Var14 = _Stack_f0;
        _Var25 = _Var12;
        if ((char)bVar6 == '\0') {
          if (*(long *)((long)unaff_R15.genericMethod + 0x30) == 0) goto label_0428007e;
          pSVar18 = *(System_Text_StringBuilder_o **)((long)_Stack_f0.genericMethod + 0x18);
          _Stack_100 = (_union_249689)0x427fc52;
          pSVar10 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                              (*(System_String_o **)(*(long *)((long)unaff_R15.genericMethod + 0x30) + 0x10),0
                               ,method_01);
          method_00 = &"> ";
          _Stack_100 = (_union_249689)0x427fc66;
          pSVar10 = System_String__Concat_3ae5ba0("> ",pSVar10,(MethodInfo *)0x0);
          if (pSVar18 == (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
          _Stack_100 = (_union_249689)0x427fc7c;
          System_Text_StringBuilder__AppendLine_3b044f0(pSVar18,pSVar10,(MethodInfo *)0x0);
          if (*(System_Text_StringBuilder_o **)((long)_Var14.genericMethod + 0x18) ==
              (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
          _Stack_100 = (_union_249689)0x427fc9a;
          System_Text_StringBuilder__AppendLine_3b044f0
                    (*(System_Text_StringBuilder_o **)((long)_Var14.genericMethod + 0x18),"> ",
                     (MethodInfo *)0x0);
          if (*(long *)((long)unaff_R15.genericMethod + 0x30) == 0) goto label_0428007e;
          _Stack_100 = (_union_249689)0x427fcb2;
          bVar6 = System_String__IsNullOrEmpty
                            (*(System_String_o **)(*(long *)((long)unaff_R15.genericMethod + 0x30) + 0x18),
                             (MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            if (*(long *)((long)unaff_R15.genericMethod + 0x30) == 0) goto label_0428007e;
            pSVar18 = *(System_Text_StringBuilder_o **)((long)_Var14.genericMethod + 0x18);
            _Stack_100 = (_union_249689)0x427fcd2;
            pSVar10 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                (*(System_String_o **)(*(long *)((long)unaff_R15.genericMethod + 0x30) + 0x18)
                                 ,0,method_02);
            method_00 = &"> **Remarks**: ";
            _Stack_100 = (_union_249689)0x427fce6;
            pSVar10 = System_String__Concat_3ae5ba0("> **Remarks**: ",pSVar10,(MethodInfo *)0x0);
            if (pSVar18 == (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
            _Stack_100 = (_union_249689)0x427fcfc;
            System_Text_StringBuilder__AppendLine_3b044f0(pSVar18,pSVar10,(MethodInfo *)0x0);
            if (*(System_Text_StringBuilder_o **)((long)_Var14.genericMethod + 0x18) ==
                (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
            _Stack_100 = (_union_249689)0x427fd1a;
            System_Text_StringBuilder__AppendLine_3b044f0
                      (*(System_Text_StringBuilder_o **)((long)_Var14.genericMethod + 0x18),"> ",
                       (MethodInfo *)0x0);
          }
          unaff_R15 = (_union_249689)((_union_249689 *)((long)unaff_R15.genericMethod + 0x18))->genericMethod;
          if ((System_String_Fields)unaff_R15.genericMethod != (System_String_Fields)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              _Stack_100 = (_union_249689)0x427fd68;
              il2cpp_runtime_helper_02337ed0();
              _Var26 = (_union_249689)
                       ((_union_249689 *)(*(long *)(TypeInfo_c + 0xb8) + 0x20))->genericMethod;
            }
            else {
              _Var26 = (_union_249689)
                       ((_union_249689 *)(*(long *)(TypeInfo_c + 0xb8) + 0x20))->genericMethod;
            }
            if ((System_String_Fields)_Var26.genericMethod == (System_String_Fields)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                _Stack_100 = (_union_249689)0x427fd82;
                il2cpp_runtime_helper_02337ed0();
              }
              plVar11 = &TypeInfo_c;
              _Stack_100 = (_union_249689)0x427fda6;
              _Var26.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CLParameter_bool);
              method_00 = (System_String_o **)0x0;
              _Stack_100 = (_union_249689)0x427fdc0;
              System_Func_object__bool____ctor();
              lVar3 = *(long *)(TypeInfo_c + 0xb8);
              ((_union_249689 *)(lVar3 + 0x20))->genericMethod = (void *)_Var26;
              _Stack_100 = (_union_249689)0x427fddb;
              il2cpp_runtime_helper_022b4080(lVar3 + 0x20,_Var26.genericMethod);
              _Var13 = _Stack_e0;
            }
            _Stack_100 = (_union_249689)0x427fdf5;
            bVar6 = System_Linq_Enumerable__Any_object__2504f10
                              (unaff_R15.genericMethod,_Var26.genericMethod,MethodInfo_Boolean_Any_CLParameter);
            if ((char)bVar6 != '\0') {
              __this_10 = ((_union_249689 *)((long)_Var14.genericMethod + 0x18))->genericMethod;
              if ((System_String_Fields)__this_10 == (System_String_Fields)0x0) goto label_0428007e;
              _Stack_100 = (_union_249689)0x427fe1b;
              _Var24 = "> **Parameters**:";
              System_Text_StringBuilder__AppendLine_3b044f0
                        ((System_Text_StringBuilder_o *)__this_10,"> **Parameters**:".genericMethod,(MethodInfo *)0x0
                        );
              plVar11 = ((_union_249689 *)((long)_Stack_e8.genericMethod + 0x18))->genericMethod;
              if ((System_String_Fields)plVar11 == (System_String_Fields)0x0) goto label_0428007e;
              if (0 < *(int *)((long)plVar11 + 0x18)) {
                unaff_R15.genericMethod = (void *)0x0;
                _Var25.genericMethod = (void *)0x0;
                if (*(int *)((long)plVar11 + 0x18) == 0) break;
                while( true ) {
                  _Var22 = (_union_249689)
                           ((_union_249689 *)((long)plVar11 + (long)_Var25._0_4_ * 8 + 0x20))->genericMethod;
                  if (_Var22.genericMethod == (System_String_o *)0x0) goto label_0428007e;
                  _Stack_100 = (_union_249689)0x427fe94;
                  bVar6 = System_String__IsNullOrEmpty
                                    ((System_String_o *)
                                     ((System_String_o *)((long)_Var22.genericMethod + 0x18))->klass,
                                     (MethodInfo *)0x0);
                  if ((char)bVar6 == '\0') {
                    _Stack_100 = (_union_249689)0x427ff6c;
                    _Var26.genericMethod =
                         CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                   ((System_String_o *)
                                    ((System_String_o *)((long)_Var22.genericMethod + 0x18))->klass,0,
                                    method_03);
                    pvVar2 = *(void **)((long)_Var22.genericMethod + 0x38);
                  }
                  else {
                    pvVar2 = *(void **)((long)_Var22.genericMethod + 0x38);
                    _Var26 = "";
                  }
                  if ((pvVar2 != (void *)0x0) && (*(long *)((long)pvVar2 + 0x18) != 0)) {
                    _Stack_100 = (_union_249689)0x427fec9;
                    bVar6 = System_String__IsNullOrEmpty(_Var26.genericMethod,(MethodInfo *)0x0);
                    if ((char)bVar6 == '\0') {
                      _Stack_100 = (_union_249689)0x427fee1;
                      _Var26.genericMethod =
                           System_String__Concat_3ae5ba0(_Var26.genericMethod," ",(MethodInfo *)0x0);
                    }
                    _Var13 = (_union_249689)
                             ((_union_249689 *)((long)_Var22.genericMethod + 0x38))->genericMethod;
                    _Stack_100 = (_union_249689)0x427fef8;
                    _Var14.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
                    _Stack_100 = (_union_249689)0x427ff14;
                    System_Func_object__object____ctor();
                    _Stack_100 = (_union_249689)0x427ff29;
                    pSVar17 = System_Linq_Enumerable__Select_object__object_
                                        (_Var13.genericMethod,_Var14.genericMethod,MethodInfo_IEnumerable_1_System_String_Select_String_String);
                    _Stack_100 = (_union_249689)0x427ff3b;
                    pSVar8 = (System_String_array *)
                             System_Linq_Enumerable__ToArray_object_
                                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar17,
                                        MethodInfo_String_ToArray_String.genericMethod);
                    if (pSVar8 == (System_String_array *)0x0) goto label_0428007e;
                    if ((int)pSVar8->max_length == 1) {
                      pSVar10 = pSVar8->m_Items[0];
                    }
                    else {
                      _Stack_100 = (_union_249689)0x427ff93;
                      pSVar10 = System_String__Join(", ",pSVar8,(MethodInfo *)0x0);
                    }
                    method_00 = (System_String_o **)0x0;
                    _Stack_100 = (_union_249689)0x427ffaa;
                    _Var26.genericMethod =
                         System_String__Concat_3af7150
                                   (_Var26.genericMethod,"Refer to ",pSVar10,(MethodInfo *)0x0);
                  }
                  _Var24.genericMethod = (void *)0x0;
                  _Stack_100 = (_union_249689)0x427ffb7;
                  __this_10 = (System_String_o **)_Var26;
                  bVar6 = System_String__IsNullOrEmpty(_Var26.genericMethod,(MethodInfo *)0x0);
                  if ((char)bVar6 == '\0') {
                    _Var14 = (_union_249689)
                             ((_union_249689 *)((long)_Stack_f0.genericMethod + 0x18))->genericMethod;
                    _Stack_100 = (_union_249689)0x427ffec;
                    method_00 = (System_String_o **)_Var26;
                    _Var24.genericMethod =
                         System_String__Concat_3af7470
                                   ("> - `",
                                    (System_String_o *)
                                    *(System_String_Fields *)((long)_Var22.genericMethod + 0x10),"`: ",
                                    _Var26.genericMethod,(MethodInfo *)0x0);
                    if ((System_String_Fields)_Var14.genericMethod == (System_String_Fields)0x0)
                    goto label_0428007e;
                    _Stack_100 = (_union_249689)0x427fe5d;
                    __this_10 = (System_String_o **)_Var14;
                    System_Text_StringBuilder__AppendLine_3b044f0
                              (_Var14.genericMethod,_Var24.genericMethod,(MethodInfo *)0x0);
                  }
                  unaff_R15._0_4_ = _Var25._0_4_ + 1;
                  unaff_R15._4_4_ = 0;
                  if ((int)*(uint *)((long)plVar11 + 0x18) <= (int)unaff_R15._0_4_) break;
                  _Var25 = unaff_R15;
                  if (*(uint *)((long)plVar11 + 0x18) <= unaff_R15._0_4_) goto label_04280092;
                }
              }
              _Var14 = _Stack_f0;
              if (*(System_Text_StringBuilder_o **)((long)_Stack_f0.genericMethod + 0x18) ==
                  (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
              _Stack_100 = (_union_249689)0x4280019;
              System_Text_StringBuilder__AppendLine_3b044f0
                        (*(System_Text_StringBuilder_o **)((long)_Stack_f0.genericMethod + 0x18),"> ",
                         (MethodInfo *)0x0);
              _Var22 = _Stack_d8;
              _Var13 = _Stack_e0;
            }
          }
          _Var26 = _Stack_e8;
          if (*(long *)((long)_Stack_e8.genericMethod + 0x30) == 0) goto label_0428007e;
          __this_10 = ((_union_249689 *)(*(long *)((long)_Stack_e8.genericMethod + 0x30) + 0x28))->
                      genericMethod;
          _Var24.genericMethod = (void *)0x0;
          _Stack_100 = (_union_249689)0x428003c;
          bVar6 = System_String__IsNullOrEmpty((System_String_o *)__this_10,(MethodInfo *)0x0);
          _Var25 = _Var14;
          if ((char)bVar6 == '\0') {
            plVar1 = (long *)((long)_Var26.genericMethod + 0x30);
            if (*plVar1 == 0) goto label_0428007e;
            _Var26 = (_union_249689)((_union_249689 *)((long)_Stack_f0.genericMethod + 0x18))->genericMethod;
            _Stack_100 = (_union_249689)0x4280061;
            pSVar10 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                (*(System_String_o **)(*plVar1 + 0x28),0,method_04);
            method_00 = &"> **Returns**: ";
            _Stack_100 = (_union_249689)0x4280075;
            _Var24.genericMethod = System_String__Concat_3ae5ba0("> **Returns**: ",pSVar10,(MethodInfo *)0x0);
            if ((System_String_Fields)_Var26.genericMethod == (System_String_Fields)0x0) goto label_0428007e;
            _Stack_100 = (_union_249689)0x427f95d;
            __this_10 = (System_String_o **)_Var26;
            System_Text_StringBuilder__AppendLine_3b044f0
                      (_Var26.genericMethod,_Var24.genericMethod,(MethodInfo *)0x0);
          }
        }
      }
      _Var14 = _Var25;
      _Var22._0_4_ = _Var22._0_4_ + 1;
      _Var22._4_4_ = 0;
      uVar5 = *(uint *)((long)_Var13.genericMethod + 0x18);
      if ((int)uVar5 <= (int)_Var22._0_4_) {
        return (System_String_o *)(ulong)uVar5;
      }
    } while (_Var22._0_4_ < uVar5);
  }
label_04280092:
  _Stack_100 = (_union_249689)0x4280097;
  auVar28 = il2cpp_runtime_helper_022b2ca0();
  uStack_130 = auVar28._0_8_;
  uVar23 = auVar28._8_8_ & 0xffffffff;
  _Stack_128 = _Var26;
  _Stack_120 = _Var22;
  _Stack_118 = (_union_249689)plVar11;
  _Stack_110 = _Var13;
  _Stack_108 = unaff_R15;
  _Stack_100 = _Var14;
  if (g_data_057adc71 == '\0') {
    uStack_138 = 0x42800cc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    uStack_138 = 0x42800d8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLType_get_Item);
    uStack_138 = 0x42800e4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    uStack_138 = 0x42800f0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_TypeReference_String);
    uStack_138 = 0x42800fc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_TypeReference_string);
    uStack_138 = 0x4280108;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    uStack_138 = 0x4280114;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetTypeReferenceStr_b__0);
    uStack_138 = 0x4280120;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass12_0);
    uStack_138 = 0x428012c;
    il2cpp_runtime_helper_023445d0(&"<a data-footnote-ref href=\"#user-content-fn-{0}\">{1}</a>");
    uStack_138 = 0x4280138;
    il2cpp_runtime_helper_023445d0(&"](../");
    uStack_138 = 0x4280144;
    il2cpp_runtime_helper_023445d0(&"<");
    uStack_138 = 0x4280150;
    il2cpp_runtime_helper_023445d0(&")");
    uStack_138 = 0x428015c;
    il2cpp_runtime_helper_023445d0(&",");
    uStack_138 = 0x4280168;
    il2cpp_runtime_helper_023445d0(&"[");
    uStack_138 = 0x4280174;
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057adc71 = '\x01';
  }
  uStack_138 = 0x428018a;
  _Var13.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass12_0);
  _Var25.genericMethod = (System_String_o *)0x0;
  uStack_138 = 0x4280197;
  _Var26.genericMethod = _Var13.genericMethod;
  System_Object___ctor(_Var13.genericMethod,(MethodInfo *)0x0);
  if (_Var13.genericMethod == (System_String_o *)0x0) {
label_04280428:
    values = (_union_249689)plVar11;
    _Var14 = _Var26;
    uStack_138 = 0x428042d;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    _Var26.genericMethod = (void *)((long)_Var13.genericMethod + 0x10);
    ((_union_249689 *)((long)_Var13.genericMethod + 0x10))->genericMethod = __this_10;
    uStack_138 = 0x42801b3;
    _Var25 = (_union_249689)__this_10;
    il2cpp_runtime_helper_022b4080();
    *(int *)&((System_String_o *)((long)_Var13.genericMethod + 0x18))->klass = auVar28._8_4_;
    if ((System_String_Fields)_Var24.genericMethod == (System_String_Fields)0x0) goto label_04280428;
    _Var26.genericMethod = (System_String_o *)0x0;
    if (*(System_String_Fields *)((long)__this_10 + 0x28) == (System_String_Fields)0x0) goto label_04280428;
    _Var22 = (_union_249689)((_union_249689 *)((long)_Var24.genericMethod + 0x10))->genericMethod;
    uStack_138 = 0x42801e3;
    _Var25 = _Var22;
    bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       *(System_String_Fields *)((long)__this_10 + 0x28),_Var22.genericMethod,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar6 == '\0') {
label_0428038f:
      source = *(System_Collections_Generic_IEnumerable_TSource__o **)((long)_Var24.genericMethod + 0x18);
      if ((source != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) &&
         (source[1].monitor != (void *)0x0)) {
        uStack_138 = 0x42803ae;
        pSVar16 = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_TypeReference_string);
        uStack_138 = 0x42803c8;
        System_Func_object__object____ctor();
        uStack_138 = 0x42803dd;
        pSVar17 = System_Linq_Enumerable__Select_object__object_(source,pSVar16,MethodInfo_IEnumerable_1_System_String_Select_TypeReference_String);
        uStack_138 = 0x42803f1;
        pSVar10 = System_String__Join_3af7e00
                            (",",(System_Collections_Generic_IEnumerable_string__o *)pSVar17,
                             (MethodInfo *)0x0);
        uStack_138 = 0x4280413;
        _Var22.genericMethod =
             System_String__Concat_3af7470
                       (_Var22.genericMethod,"<",pSVar10,">",(MethodInfo *)0x0);
      }
      return _Var22.genericMethod;
    }
    iVar21 = *(int *)&((System_String_o *)((long)_Var13.genericMethod + 0x18))->klass;
    if (iVar21 == 2) {
      _Var26.genericMethod = (System_String_o *)0x0;
      if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)__this_10 + 0x28) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        uStack_138 = 0x428033d;
        _Var25 = _Var22;
        pIVar15 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (*(System_Collections_Generic_Dictionary_object__object__o **)
                              ((long)__this_10 + 0x28),_Var22.genericMethod,MethodInfo_CLType_get_Item);
        _Var26.genericMethod = (System_String_o *)0x0;
        if (*(System_Collections_Generic_Dictionary_object__int__o **)((long)__this_10 + 0x30) !=
            (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
          uStack_138 = 0x428035c;
          iVar7 = System_Collections_Generic_Dictionary_object__int___get_Item
                            (*(System_Collections_Generic_Dictionary_object__int__o **)
                              ((long)__this_10 + 0x30),pIVar15,MethodInfo_Int32_get_Item);
          uStack_130 = CONCAT44(iVar7,(undefined4)uStack_130);
          uStack_138 = 0x4280375;
          pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_130 + 4);
          uStack_138 = 0x428038c;
          _Var22.genericMethod =
               System_String__Format_3af78e0("<a data-footnote-ref href=\"#user-content-fn-{0}\">{1}</a>",pIVar15,_Var22.genericMethod,(MethodInfo *)0x0);
          goto label_0428038f;
        }
      }
      goto label_04280428;
    }
    if (iVar21 != 1) goto label_0428038f;
    _Var25 = (_union_249689)0x5;
    uStack_138 = 0x4280215;
    _Var14 = TypeInfo_string;
    values.genericMethod = (void *)il2cpp_runtime_helper_022b2a40();
    _Var12 = "[";
    _Var26 = _Var14;
    if ((System_String_Fields)values.genericMethod == (System_String_Fields)0x0) goto label_04280428;
    if (*(int *)((long)values.genericMethod + 0x18) != 0) {
      _Var14.genericMethod = (void *)((long)values.genericMethod + 0x20);
      *(_union_249689 *)((long)values.genericMethod + 0x20) = "[";
      uStack_138 = 0x4280242;
      il2cpp_runtime_helper_022b4080();
      _Var25 = _Var12;
      if (1 < *(uint *)((long)values.genericMethod + 0x18)) {
        _Var14.genericMethod = (void *)((long)values.genericMethod + 0x28);
        ((_union_249689 *)((long)values.genericMethod + 0x28))->genericMethod = (void *)_Var22;
        uStack_138 = 0x428025d;
        _Var25 = _Var22;
        il2cpp_runtime_helper_022b4080();
        _Var26 = "](../";
        if (2 < *(uint *)((long)values.genericMethod + 0x18)) {
          *(_union_249689 *)((long)values.genericMethod + 0x30) = "](../";
          uStack_138 = 0x428027f;
          il2cpp_runtime_helper_022b4080((long)values.genericMethod + 0x30);
          _Var25 = _Var26;
          _Var26.genericMethod = (System_String_o *)0x0;
          plVar11 = values.genericMethod;
          if (*(System_String_Fields *)((long)__this_10 + 0x28) != (System_String_Fields)0x0) {
            uStack_138 = 0x428029e;
            _Var25.genericMethod =
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)
                            *(System_String_Fields *)((long)__this_10 + 0x28),_Var22.genericMethod,
                            MethodInfo_CLType_get_Item);
            uStack_138 = 0x42802b4;
            _Var26 = (_union_249689)__this_10;
            _Var14.genericMethod =
                 (void *)(**(code **)((long)*__this_10 + 0x178))
                                   (__this_10,_Var25.genericMethod,*(undefined8 *)((long)*__this_10 + 0x180));
            if (_Var14.genericMethod != (void *)0x0) {
              _Var25 = (_union_249689)0x3;
              uStack_138 = 0x42802d2;
              _Var26.genericMethod =
                   System_String__Substring_3af8da0
                             (_Var14.genericMethod,3,*(int *)((long)_Var14.genericMethod + 0x10) + -3,
                              (MethodInfo *)0x0);
              if (3 < *(uint *)((long)values.genericMethod + 0x18)) {
                _Var14.genericMethod = (void *)((long)values.genericMethod + 0x38);
                ((_union_249689 *)((long)values.genericMethod + 0x38))->genericMethod = (void *)_Var26;
                uStack_138 = 0x42802ed;
                il2cpp_runtime_helper_022b4080();
                _Var25 = _Var26;
                if (4 < *(uint *)((long)values.genericMethod + 0x18)) {
                  *(_union_249689 *)((long)values.genericMethod + 0x40) = ")";
                  uStack_138 = 0x4280312;
                  il2cpp_runtime_helper_022b4080((long)values.genericMethod + 0x40);
                  uStack_138 = 0x428031c;
                  _Var22.genericMethod = System_String__Concat_3af7570(values.genericMethod,(MethodInfo *)0x0)
                  ;
                  goto label_0428038f;
                }
              }
              goto label_0428042d;
            }
          }
          goto label_04280428;
        }
      }
    }
  }
label_0428042d:
  uStack_138 = 0x4280432;
  il2cpp_runtime_helper_022b2ca0();
  _Stack_160 = _Var24;
  _Stack_158 = _Var22;
  _Stack_150 = values;
  _Stack_148.genericMethod = _Var13.genericMethod;
  _Stack_140 = (_union_249689)__this_10;
  uStack_138 = uVar23;
  if (g_data_057adc73 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"---|");
    il2cpp_runtime_helper_023445d0(&"|");
    g_data_057adc73 = '\x01';
  }
  pIVar30 = (Il2CppRGCTXData *)0x0;
  auStack_198._0_8_ = (Il2CppRGCTXData *)0x0;
  auStack_198._8_8_ = (Il2CppType *)0x0;
  auStack_198._16_8_ = (System_Collections_Generic_List_object__o *)0x0;
  pSVar18 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(pSVar18,(MethodInfo *)0x0);
  if ((pSVar18 != (System_Text_StringBuilder_o *)0x0) &&
     (System_Text_StringBuilder__Append_3b048f0(pSVar18,0x7c,(MethodInfo *)0x0),
     _Var14.genericMethod != (void *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_198 + 0x18),_Var14.genericMethod,
               MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar4 = pSStack_170;
    pIVar30 = (Il2CppRGCTXData *)auStack_198._24_8_;
    _Stack_168 = _Var25;
    while (__this_01.fields._index = (int)in_stack_fffffffffffffe40,
          __this_01.fields._version = (int)((ulong)in_stack_fffffffffffffe40 >> 0x20),
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38,
          __this_01.fields._current = (Il2CppObject *)pIVar30,
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe48), (char)bVar6 != '\0') {
      pSVar10 = System_String__Concat_3ae5ba0((System_String_o *)pSVar4,"|",(MethodInfo *)0x0);
      System_Text_StringBuilder__Append_3b03f90(pSVar18,pSVar10,(MethodInfo *)0x0);
    }
    __this_02.fields._index = (int)in_stack_fffffffffffffe40;
    __this_02.fields._version = (int)((ulong)in_stack_fffffffffffffe40 >> 0x20);
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
    __this_02.fields._current = (Il2CppObject *)pIVar30;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe48);
    iVar21 = 0;
    System_Text_StringBuilder__AppendLine(pSVar18,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append_3b048f0(pSVar18,0x7c,(MethodInfo *)0x0);
    if (0 < *(int *)((long)_Var14.genericMethod + 0x18)) {
      do {
        System_Text_StringBuilder__Append_3b03f90(pSVar18,"---|",(MethodInfo *)0x0);
        iVar21 = iVar21 + 1;
      } while (iVar21 < *(int *)((long)_Var14.genericMethod + 0x18));
    }
    System_Text_StringBuilder__AppendLine(pSVar18,(MethodInfo *)0x0);
    if (_Stack_168.genericMethod != (void *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_198 + 0x18),
                 _Stack_168.genericMethod,MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
      auStack_198._16_8_ = pSStack_170;
      auStack_198._0_8_ = auStack_198._24_8_;
      auStack_198._8_8_ = _Stack_178;
      while (__this_03.fields._index = (int)in_stack_fffffffffffffe40,
            __this_03.fields._version = (int)((ulong)in_stack_fffffffffffffe40 >> 0x20),
            __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38,
            __this_03.fields._current = (Il2CppObject *)pIVar30,
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_03,(MethodInfo_321A1D0 *)auStack_198), uVar29 = auStack_198._16_8_,
            (char)bVar6 != '\0') {
        System_Text_StringBuilder__Append_3b03f90(pSVar18,"|",(MethodInfo *)0x0);
        if ((System_Collections_Generic_List_object__o *)uVar29 ==
            (System_Collections_Generic_List_object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_042807f9;
        }
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_198 + 0x18),
                   (System_Collections_Generic_List_object__o *)uVar29,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
        pSVar4 = pSStack_170;
        pIVar30 = (Il2CppRGCTXData *)auStack_198._24_8_;
        while (__this_04.fields._index = (int)in_stack_fffffffffffffe40,
              __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffe40 >> 0x20),
              __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38,
              __this_04.fields._current = (Il2CppObject *)pIVar30,
              bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_04,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe48),
              (char)bVar6 != '\0') {
          pSVar10 = System_String__Concat_3ae5ba0((System_String_o *)pSVar4,"|",(MethodInfo *)0x0);
          System_Text_StringBuilder__Append_3b03f90(pSVar18,pSVar10,(MethodInfo *)0x0);
        }
        __this_05.fields._index = (int)in_stack_fffffffffffffe40;
        __this_05.fields._version = (int)((ulong)in_stack_fffffffffffffe40 >> 0x20);
        __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
        __this_05.fields._current = (Il2CppObject *)pIVar30;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe48);
        System_Text_StringBuilder__AppendLine(pSVar18,(MethodInfo *)0x0);
      }
      __this_06.fields._index = (int)in_stack_fffffffffffffe40;
      __this_06.fields._version = (int)((ulong)in_stack_fffffffffffffe40 >> 0x20);
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
      __this_06.fields._current = (Il2CppObject *)pIVar30;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)auStack_198)
      ;
      goto label_0428078a;
    }
  }
label_042807f9:
  auVar27 = il2cpp_runtime_helper_022b2c90();
  uVar29 = auVar27._0_8_;
  if (auVar27._8_4_ == 1) {
    plVar11 = (long *)__cxa_begin_catch(uVar29);
    lVar3 = *plVar11;
    __cxa_end_catch();
    __this_07.fields._index = (int)uVar29;
    __this_07.fields._version = (int)((ulong)uVar29 >> 0x20);
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
    __this_07.fields._current = (Il2CppObject *)pIVar30;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_07,(MethodInfo_321A1C0 *)auStack_198);
    if (lVar3 == 0) {
label_0428078a:
      pSVar10 = (System_String_o *)
                (*(pSVar18->klass->vtable)._3_ToString.methodPtr)
                          (pSVar18,(pSVar18->klass->vtable)._3_ToString.method);
      return pSVar10;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
    __this_09.fields._index = (int)uVar29;
    __this_09.fields._version = (int)((ulong)uVar29 >> 0x20);
    __this_09.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
    __this_09.fields._current = (Il2CppObject *)pIVar30;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_09,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe48);
  }
  else {
    __this_08.fields._index = (int)uVar29;
    __this_08.fields._version = (int)((ulong)uVar29 >> 0x20);
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
    __this_08.fields._current = (Il2CppObject *)pIVar30;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_08,(MethodInfo_321A1C0 *)auStack_198);
  }
  _Unwind_Resume(uVar29);
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator$$GetTypeReferenceStr
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o* __this, CustomLogic_Editor_Models_TypeReference_o* typeReference, int32_t linkKind, const MethodInfo* method);
// 0x42800a0

System_String_o *
CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr
          (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *__this,
          CustomLogic_Editor_Models_TypeReference_o *typeReference,int32_t linkKind,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  CustomLogic_Editor_Models_TypeReference_array *source;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_object__o *pSVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  undefined8 in_RAX;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *__this_10;
  System_String_array *values;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *__this_11;
  _union_249689 _Var6;
  Il2CppObject *pIVar7;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *values_00;
  System_String_o *pSVar8;
  System_Text_StringBuilder_o *__this_12;
  long *plVar9;
  int iVar10;
  _union_249689 _Var11;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *pCVar12;
  _union_249689 unaff_R12;
  System_String_array *unaff_R13;
  undefined1 auVar13 [12];
  undefined8 in_stack_ffffffffffffff30;
  undefined8 in_stack_ffffffffffffff38;
  undefined8 uVar14;
  Il2CppRGCTXData *pIVar15;
  undefined1 auStack_a0 [32];
  _union_249689 _Stack_80;
  System_Collections_Generic_List_object__o *pSStack_78;
  _union_249689 _Stack_70;
  Il2CppRGCTXData *pIStack_68;
  _union_249689 _Stack_60;
  System_String_array *pSStack_58;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *pCStack_50;
  CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *pCStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (g_data_057adc71 == '\0') {
    uStack_40 = 0x42800cc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    uStack_40 = 0x42800d8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLType_get_Item);
    uStack_40 = 0x42800e4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    uStack_40 = 0x42800f0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_TypeReference_String);
    uStack_40 = 0x42800fc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_TypeReference_string);
    uStack_40 = 0x4280108;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    uStack_40 = 0x4280114;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetTypeReferenceStr_b__0);
    uStack_40 = 0x4280120;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass12_0);
    uStack_40 = 0x428012c;
    il2cpp_runtime_helper_023445d0(&"<a data-footnote-ref href=\"#user-content-fn-{0}\">{1}</a>");
    uStack_40 = 0x4280138;
    il2cpp_runtime_helper_023445d0(&"](../");
    uStack_40 = 0x4280144;
    il2cpp_runtime_helper_023445d0(&"<");
    uStack_40 = 0x4280150;
    il2cpp_runtime_helper_023445d0(&")");
    uStack_40 = 0x428015c;
    il2cpp_runtime_helper_023445d0(&",");
    uStack_40 = 0x4280168;
    il2cpp_runtime_helper_023445d0(&"[");
    uStack_40 = 0x4280174;
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057adc71 = '\x01';
  }
  uStack_40 = 0x428018a;
  __this_10 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass12_0);
  _Var11.genericMethod = (Il2CppObject *)0x0;
  uStack_40 = 0x4280197;
  pCVar12 = __this_10;
  System_Object___ctor((Il2CppObject *)__this_10,(MethodInfo *)0x0);
  if (__this_10 == (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x0) {
label_04280428:
    values = unaff_R13;
    __this_11 = pCVar12;
    uStack_40 = 0x428042d;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pCVar12 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)&__this_10->fields;
    (__this_10->fields).AllTypes = (CustomLogic_Editor_Models_CLType_array *)__this;
    uStack_40 = 0x42801b3;
    _Var11 = (_union_249689)__this;
    il2cpp_runtime_helper_022b4080();
    *(int32_t *)&(__this_10->fields)._sb = linkKind;
    if (typeReference == (CustomLogic_Editor_Models_TypeReference_o *)0x0) goto label_04280428;
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._typeNameMap;
    pCVar12 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x0;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04280428;
    unaff_R12 = (_union_249689)(typeReference->fields).Name;
    uStack_40 = 0x42801e3;
    _Var11 = unaff_R12;
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,unaff_R12.genericMethod,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 == '\0') {
label_0428038f:
      source = (typeReference->fields).Arguments;
      if ((source != (CustomLogic_Editor_Models_TypeReference_array *)0x0) && (source->max_length != 0)) {
        uStack_40 = 0x42803ae;
        selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_TypeReference_string);
        uStack_40 = 0x42803c8;
        System_Func_object__object____ctor();
        uStack_40 = 0x42803dd;
        values_00 = System_Linq_Enumerable__Select_object__object_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,selector,
                               MethodInfo_IEnumerable_1_System_String_Select_TypeReference_String);
        uStack_40 = 0x42803f1;
        pSVar8 = System_String__Join_3af7e00
                           (",",(System_Collections_Generic_IEnumerable_string__o *)values_00,
                            (MethodInfo *)0x0);
        uStack_40 = 0x4280413;
        unaff_R12.genericMethod =
             System_String__Concat_3af7470
                       (unaff_R12.genericMethod,"<",pSVar8,">",(MethodInfo *)0x0);
      }
      return unaff_R12.genericMethod;
    }
    iVar10 = *(int *)&(__this_10->fields)._sb;
    if (iVar10 == 2) {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._typeNameMap;
      pCVar12 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x0;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        uStack_40 = 0x428033d;
        _Var11 = unaff_R12;
        pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar1,unaff_R12.genericMethod,MethodInfo_CLType_get_Item);
        __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields)._typeIndexMap;
        pCVar12 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x0;
        if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
          uStack_40 = 0x428035c;
          iVar5 = System_Collections_Generic_Dictionary_object__int___get_Item(__this_00,pIVar7,MethodInfo_Int32_get_Item);
          uStack_38 = CONCAT44(iVar5,(undefined4)uStack_38);
          uStack_40 = 0x4280375;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_38 + 4);
          uStack_40 = 0x428038c;
          unaff_R12.genericMethod =
               System_String__Format_3af78e0("<a data-footnote-ref href=\"#user-content-fn-{0}\">{1}</a>",pIVar7,unaff_R12.genericMethod,(MethodInfo *)0x0);
          goto label_0428038f;
        }
      }
      goto label_04280428;
    }
    if (iVar10 != 1) goto label_0428038f;
    _Var11 = (_union_249689)0x5;
    uStack_40 = 0x4280215;
    __this_11 = TypeInfo_string;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    _Var6 = "[";
    pCVar12 = __this_11;
    if (values == (System_String_array *)0x0) goto label_04280428;
    if ((int)values->max_length != 0) {
      __this_11 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)values->m_Items;
      values->m_Items[0] = (System_String_o *)"[";
      uStack_40 = 0x4280242;
      il2cpp_runtime_helper_022b4080();
      _Var11 = _Var6;
      if (1 < (uint)values->max_length) {
        __this_11 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)(values->m_Items + 1);
        ((_union_249689 *)(values->m_Items + 1))->genericMethod = (void *)unaff_R12;
        uStack_40 = 0x428025d;
        _Var11 = unaff_R12;
        il2cpp_runtime_helper_022b4080();
        _Var6 = "](../";
        if (2 < (uint)values->max_length) {
          *(_union_249689 *)(values->m_Items + 2) = "](../";
          uStack_40 = 0x428027f;
          il2cpp_runtime_helper_022b4080(values->m_Items + 2);
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._typeNameMap;
          _Var11 = _Var6;
          pCVar12 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x0;
          unaff_R13 = values;
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            uStack_40 = 0x428029e;
            _Var11.genericMethod =
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar1,unaff_R12.genericMethod,MethodInfo_CLType_get_Item);
            uStack_40 = 0x42802b4;
            pCVar12 = __this;
            __this_11 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)
                        (*(__this->klass->vtable)._4_GetRelativeFilePath.methodPtr)
                                  (__this,_Var11.genericMethod,
                                   (__this->klass->vtable)._4_GetRelativeFilePath.method);
            if (__this_11 != (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x0) {
              _Var11 = (_union_249689)0x3;
              uStack_40 = 0x42802d2;
              _Var6.genericMethod =
                   System_String__Substring_3af8da0
                             ((System_String_o *)__this_11,3,*(int *)&(__this_11->fields).AllTypes + -3,
                              (MethodInfo *)0x0);
              if (3 < (uint)values->max_length) {
                __this_11 = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)(values->m_Items + 3);
                ((_union_249689 *)(values->m_Items + 3))->genericMethod = (void *)_Var6;
                uStack_40 = 0x42802ed;
                il2cpp_runtime_helper_022b4080();
                _Var11 = _Var6;
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = ")";
                  uStack_40 = 0x4280312;
                  il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                  uStack_40 = 0x428031c;
                  unaff_R12.genericMethod = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                  goto label_0428038f;
                }
              }
              goto label_0428042d;
            }
          }
          goto label_04280428;
        }
      }
    }
  }
label_0428042d:
  uStack_40 = 0x4280432;
  il2cpp_runtime_helper_022b2ca0();
  pIStack_68 = (Il2CppRGCTXData *)typeReference;
  _Stack_60 = unaff_R12;
  pSStack_58 = values;
  pCStack_50 = __this_10;
  pCStack_48 = __this;
  uStack_40 = (ulong)(uint)linkKind;
  if (g_data_057adc73 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"---|");
    il2cpp_runtime_helper_023445d0(&"|");
    g_data_057adc73 = '\x01';
  }
  pIVar15 = (Il2CppRGCTXData *)0x0;
  auStack_a0._0_8_ = (Il2CppRGCTXData *)0x0;
  auStack_a0._8_8_ = (Il2CppType *)0x0;
  auStack_a0._16_8_ = (System_Collections_Generic_List_object__o *)0x0;
  __this_12 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this_12,(MethodInfo *)0x0);
  if ((__this_12 != (System_Text_StringBuilder_o *)0x0) &&
     (System_Text_StringBuilder__Append_3b048f0(__this_12,0x7c,(MethodInfo *)0x0),
     __this_11 != (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_a0 + 0x18),
               (System_Collections_Generic_List_object__o *)__this_11,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar3 = pSStack_78;
    pIVar15 = (Il2CppRGCTXData *)auStack_a0._24_8_;
    _Stack_70 = _Var11;
    while (__this_01.fields._index = (int)in_stack_ffffffffffffff38,
          __this_01.fields._version = (int)((ulong)in_stack_ffffffffffffff38 >> 0x20),
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30,
          __this_01.fields._current = (Il2CppObject *)pIVar15,
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff40), (char)bVar4 != '\0') {
      pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)pSVar3,"|",(MethodInfo *)0x0);
      System_Text_StringBuilder__Append_3b03f90(__this_12,pSVar8,(MethodInfo *)0x0);
    }
    __this_02.fields._index = (int)in_stack_ffffffffffffff38;
    __this_02.fields._version = (int)((ulong)in_stack_ffffffffffffff38 >> 0x20);
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
    __this_02.fields._current = (Il2CppObject *)pIVar15;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
    iVar10 = 0;
    System_Text_StringBuilder__AppendLine(__this_12,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append_3b048f0(__this_12,0x7c,(MethodInfo *)0x0);
    if (0 < *(int *)&(__this_11->fields)._sb) {
      do {
        System_Text_StringBuilder__Append_3b03f90(__this_12,"---|",(MethodInfo *)0x0);
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)&(__this_11->fields)._sb);
    }
    System_Text_StringBuilder__AppendLine(__this_12,(MethodInfo *)0x0);
    if (_Stack_70.genericMethod != (void *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_a0 + 0x18),
                 _Stack_70.genericMethod,MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
      auStack_a0._16_8_ = pSStack_78;
      auStack_a0._0_8_ = auStack_a0._24_8_;
      auStack_a0._8_8_ = _Stack_80;
      while (__this_03.fields._index = (int)in_stack_ffffffffffffff38,
            __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffff38 >> 0x20),
            __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30,
            __this_03.fields._current = (Il2CppObject *)pIVar15,
            bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_03,(MethodInfo_321A1D0 *)auStack_a0), uVar14 = auStack_a0._16_8_,
            (char)bVar4 != '\0') {
        System_Text_StringBuilder__Append_3b03f90(__this_12,"|",(MethodInfo *)0x0);
        if ((System_Collections_Generic_List_object__o *)uVar14 ==
            (System_Collections_Generic_List_object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_042807f9;
        }
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_a0 + 0x18),
                   (System_Collections_Generic_List_object__o *)uVar14,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
        pSVar3 = pSStack_78;
        pIVar15 = (Il2CppRGCTXData *)auStack_a0._24_8_;
        while (__this_04.fields._index = (int)in_stack_ffffffffffffff38,
              __this_04.fields._version = (int)((ulong)in_stack_ffffffffffffff38 >> 0x20),
              __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30,
              __this_04.fields._current = (Il2CppObject *)pIVar15,
              bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff40),
              (char)bVar4 != '\0') {
          pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)pSVar3,"|",(MethodInfo *)0x0);
          System_Text_StringBuilder__Append_3b03f90(__this_12,pSVar8,(MethodInfo *)0x0);
        }
        __this_05.fields._index = (int)in_stack_ffffffffffffff38;
        __this_05.fields._version = (int)((ulong)in_stack_ffffffffffffff38 >> 0x20);
        __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
        __this_05.fields._current = (Il2CppObject *)pIVar15;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
        System_Text_StringBuilder__AppendLine(__this_12,(MethodInfo *)0x0);
      }
      __this_06.fields._index = (int)in_stack_ffffffffffffff38;
      __this_06.fields._version = (int)((ulong)in_stack_ffffffffffffff38 >> 0x20);
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
      __this_06.fields._current = (Il2CppObject *)pIVar15;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)auStack_a0);
      goto label_0428078a;
    }
  }
label_042807f9:
  auVar13 = il2cpp_runtime_helper_022b2c90();
  uVar14 = auVar13._0_8_;
  if (auVar13._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(uVar14);
    lVar2 = *plVar9;
    __cxa_end_catch();
    __this_07.fields._index = (int)uVar14;
    __this_07.fields._version = (int)((ulong)uVar14 >> 0x20);
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
    __this_07.fields._current = (Il2CppObject *)pIVar15;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_07,(MethodInfo_321A1C0 *)auStack_a0);
    if (lVar2 == 0) {
label_0428078a:
      pSVar8 = (System_String_o *)
               (*(__this_12->klass->vtable)._3_ToString.methodPtr)
                         (__this_12,(__this_12->klass->vtable)._3_ToString.method);
      return pSVar8;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
    __this_09.fields._index = (int)uVar14;
    __this_09.fields._version = (int)((ulong)uVar14 >> 0x20);
    __this_09.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
    __this_09.fields._current = (Il2CppObject *)pIVar15;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
  }
  else {
    __this_08.fields._index = (int)uVar14;
    __this_08.fields._version = (int)((ulong)uVar14 >> 0x20);
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
    __this_08.fields._current = (Il2CppObject *)pIVar15;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_08,(MethodInfo_321A1C0 *)auStack_a0);
  }
  _Unwind_Resume(uVar14);
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator$$GetEnumReference
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetEnumReference (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o* __this, System_String_o* enumName, const MethodInfo* method);
// 0x4280930

System_String_o *
CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetEnumReference
          (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *__this,System_String_o *e,MethodInfo *method
          )

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppClass *pIVar3;
  MethodInfo *pMVar4;
  Il2CppMethodPointer pIVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_String_array *values;
  System_String_o *pSVar8;
  System_String_array *unaff_RBX;
  System_String_array *pSVar9;
  System_String_o *unaff_R14;
  System_String_o *unaff_R15;
  
  do {
    pSVar8 = e;
    *(System_String_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(System_String_array **)((long)register0x00000020 + -0x18) = unaff_RBX;
    e = pSVar8;
    if (g_data_057adc72 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280950;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x428095c;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLType_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280968;
      il2cpp_runtime_helper_023445d0(&TypeInfo_string);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280974;
      il2cpp_runtime_helper_023445d0(&"](../");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280980;
      il2cpp_runtime_helper_023445d0(&")");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x428098c;
      il2cpp_runtime_helper_023445d0(&"[");
      g_data_057adc72 = '\x01';
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             ((System_String_array *)__this)->m_Items[1];
    pSVar9 = (System_String_array *)0x0;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_04280ad6:
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280adb;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42809b2;
      e = pSVar8;
      bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar2,(Il2CppObject *)pSVar8,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar6 == '\0') {
        return pSVar8;
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               ((System_String_array *)__this)->m_Items[1];
      pSVar9 = (System_String_array *)0x0;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04280ad6;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42809d9;
      e = (System_String_o *)
          System_Collections_Generic_Dictionary_object__object___get_Item
                    (pSVar2,(Il2CppObject *)pSVar8,MethodInfo_CLType_get_Item);
      pIVar3 = (((System_String_array *)__this)->obj).klass;
      pMVar4 = pIVar3->vtable[4].method;
      pIVar5 = pIVar3->vtable[4].methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42809ef;
      pSVar9 = (System_String_array *)__this;
      pSVar7 = (System_String_o *)(*pIVar5)(__this,e,pMVar4);
      if (pSVar7 == (System_String_o *)0x0) goto label_04280ad6;
      iVar1 = (pSVar7->fields)._stringLength;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280a0d;
      unaff_R15 = System_String__Substring_3af8da0(pSVar7,3,iVar1 + -3,(MethodInfo *)0x0);
      e = (System_String_o *)&g_data_00000005;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280a24;
      pSVar9 = TypeInfo_string;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
      pSVar7 = "[";
      if (values == (System_String_array *)0x0) goto label_04280ad6;
      __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)values;
      if ((int)values->max_length != 0) {
        pSVar9 = (System_String_array *)values->m_Items;
        values->m_Items[0] = "[";
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280a51;
        il2cpp_runtime_helper_022b4080();
        e = pSVar7;
        if (1 < (uint)values->max_length) {
          pSVar9 = (System_String_array *)(values->m_Items + 1);
          values->m_Items[1] = pSVar8;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280a6b;
          e = pSVar8;
          il2cpp_runtime_helper_022b4080();
          pSVar7 = "](../";
          if (2 < (uint)values->max_length) {
            pSVar9 = (System_String_array *)(values->m_Items + 2);
            values->m_Items[2] = "](../";
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280a88;
            il2cpp_runtime_helper_022b4080();
            e = pSVar7;
            if (3 < (uint)values->max_length) {
              pSVar9 = (System_String_array *)(values->m_Items + 3);
              values->m_Items[3] = unaff_R15;
              *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280a9e;
              e = unaff_R15;
              il2cpp_runtime_helper_022b4080();
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = ")";
                *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280abe;
                il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                pSVar8 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                return pSVar8;
              }
            }
          }
        }
      }
    }
    *(code **)((long)register0x00000020 + -0x20) =
         CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___AppendProperties_b__8_0;
    il2cpp_runtime_helper_022b2ca0();
    unaff_RBX = (System_String_array *)__this;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)pSVar9;
    unaff_R14 = pSVar8;
  } while( true );
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator$$CreateTable
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__CreateTable (System_Collections_Generic_List_string__o* headers, System_Collections_Generic_List_List_string___o* rows, const MethodInfo* method);
// 0x4280440

System_String_o *
CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__CreateTable
          (System_Collections_Generic_List_string__o *headers,
          System_Collections_Generic_List_List_string___o *rows,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_object__o *pSVar2;
  bool_conflict bVar3;
  System_Text_StringBuilder_o *__this_08;
  System_String_o *pSVar4;
  long *plVar5;
  int iVar6;
  undefined1 auVar7 [12];
  undefined8 in_stack_ffffffffffffff68;
  undefined8 in_stack_ffffffffffffff70;
  undefined8 uVar8;
  Il2CppRGCTXData *pIVar9;
  Il2CppRGCTXData *local_68;
  _union_249689 _Stack_60;
  System_Collections_Generic_List_object__o *local_58;
  undefined1 local_50 [16];
  System_Collections_Generic_List_object__o *local_40;
  System_Collections_Generic_List_List_string___o *local_38;
  
  if (g_data_057adc73 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"---|");
    il2cpp_runtime_helper_023445d0(&"|");
    g_data_057adc73 = '\x01';
  }
  pIVar9 = (Il2CppRGCTXData *)0x0;
  local_68 = (Il2CppRGCTXData *)0x0;
  _Stack_60.genericMethod = (Il2CppType *)0x0;
  local_58 = (System_Collections_Generic_List_object__o *)0x0;
  __this_08 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this_08,(MethodInfo *)0x0);
  if ((__this_08 != (System_Text_StringBuilder_o *)0x0) &&
     (System_Text_StringBuilder__Append_3b048f0(__this_08,0x7c,(MethodInfo *)0x0),
     headers != (System_Collections_Generic_List_string__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
               (System_Collections_Generic_List_object__o *)headers,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar2 = local_40;
    pIVar9 = (Il2CppRGCTXData *)local_50._0_8_;
    local_38 = rows;
    while (__this.fields._index = (int)in_stack_ffffffffffffff70,
          __this.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20),
          __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68,
          __this.fields._current = (Il2CppObject *)pIVar9,
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78), (char)bVar3 != '\0') {
      pSVar4 = System_String__Concat_3ae5ba0((System_String_o *)pSVar2,"|",(MethodInfo *)0x0);
      System_Text_StringBuilder__Append_3b03f90(__this_08,pSVar4,(MethodInfo *)0x0);
    }
    __this_00.fields._index = (int)in_stack_ffffffffffffff70;
    __this_00.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
    __this_00.fields._current = (Il2CppObject *)pIVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_00,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    iVar6 = 0;
    System_Text_StringBuilder__AppendLine(__this_08,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append_3b048f0(__this_08,0x7c,(MethodInfo *)0x0);
    if (0 < (headers->fields)._size) {
      do {
        System_Text_StringBuilder__Append_3b03f90(__this_08,"---|",(MethodInfo *)0x0);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (headers->fields)._size);
    }
    System_Text_StringBuilder__AppendLine(__this_08,(MethodInfo *)0x0);
    if (local_38 != (System_Collections_Generic_List_List_string___o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
                 (System_Collections_Generic_List_object__o *)local_38,MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
      local_58 = local_40;
      local_68 = (Il2CppRGCTXData *)local_50._0_8_;
      _Stack_60 = (_union_249689)local_50._8_8_;
      while (__this_01.fields._index = (int)in_stack_ffffffffffffff70,
            __this_01.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20),
            __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68,
            __this_01.fields._current = (Il2CppObject *)pIVar9,
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&local_68), pSVar2 = local_58,
            (char)bVar3 != '\0') {
        System_Text_StringBuilder__Append_3b03f90(__this_08,"|",(MethodInfo *)0x0);
        if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_042807f9;
        }
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_50,pSVar2,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
        pSVar2 = local_40;
        pIVar9 = (Il2CppRGCTXData *)local_50._0_8_;
        while (__this_02.fields._index = (int)in_stack_ffffffffffffff70,
              __this_02.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20),
              __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68,
              __this_02.fields._current = (Il2CppObject *)pIVar9,
              bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78),
              (char)bVar3 != '\0') {
          pSVar4 = System_String__Concat_3ae5ba0((System_String_o *)pSVar2,"|",(MethodInfo *)0x0);
          System_Text_StringBuilder__Append_3b03f90(__this_08,pSVar4,(MethodInfo *)0x0);
        }
        __this_03.fields._index = (int)in_stack_ffffffffffffff70;
        __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
        __this_03.fields._current = (Il2CppObject *)pIVar9;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
        System_Text_StringBuilder__AppendLine(__this_08,(MethodInfo *)0x0);
      }
      __this_04.fields._index = (int)in_stack_ffffffffffffff70;
      __this_04.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
      __this_04.fields._current = (Il2CppObject *)pIVar9;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&local_68);
      goto label_0428078a;
    }
  }
label_042807f9:
  auVar7 = il2cpp_runtime_helper_022b2c90();
  uVar8 = auVar7._0_8_;
  if (auVar7._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(uVar8);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_05.fields._index = (int)uVar8;
    __this_05.fields._version = (int)((ulong)uVar8 >> 0x20);
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
    __this_05.fields._current = (Il2CppObject *)pIVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)&local_68);
    if (lVar1 == 0) {
label_0428078a:
      pSVar4 = (System_String_o *)
               (*(__this_08->klass->vtable)._3_ToString.methodPtr)
                         (__this_08,(__this_08->klass->vtable)._3_ToString.method);
      return pSVar4;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
    __this_07.fields._index = (int)uVar8;
    __this_07.fields._version = (int)((ulong)uVar8 >> 0x20);
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
    __this_07.fields._current = (Il2CppObject *)pIVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  }
  else {
    __this_06.fields._index = (int)uVar8;
    __this_06.fields._version = (int)((ulong)uVar8 >> 0x20);
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
    __this_06.fields._current = (Il2CppObject *)pIVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&local_68);
  }
  _Unwind_Resume(uVar8);
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator$$TrimAndCleanLines
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines (System_String_o* val, bool isCodeBlock, const MethodInfo* method);
// 0x427eac0

System_String_o *
CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
          (System_String_o *val,bool_conflict isCodeBlock,MethodInfo *method)

{
  long *plVar1;
  int iVar2;
  System_String_c *__this;
  void *pvVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_object__o *pSVar5;
  bool_conflict bVar6;
  uint uVar7;
  uint uVar8;
  int32_t iVar9;
  undefined8 in_RAX;
  System_String_array *pSVar10;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar11;
  System_Func_TSource__bool__c *pSVar12;
  System_Char_array *pSVar13;
  System_String_array *value;
  MethodInfo *pMVar14;
  System_String_o *str2;
  System_String_o *pSVar15;
  long *plVar16;
  _union_249689 _Var17;
  System_Func_TSource__TResult__o *selector;
  _union_249689 _Var18;
  _union_249689 values;
  _union_249689 _Var19;
  _union_249689 _Var20;
  Il2CppObject *pIVar21;
  System_Func_TSource__TResult__o *pSVar22;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar23;
  System_Text_StringBuilder_o *pSVar24;
  MethodInfo *pMVar25;
  MethodInfo *method_00;
  _union_249689 *p_Var26;
  System_String_o **method_01;
  int32_t extraout_EDX;
  int32_t extraout_EDX_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  int iVar27;
  _union_249689 _Var28;
  ulong uVar29;
  _union_249689 _Var30;
  System_Func_TSource__bool__o *pSVar31;
  System_String_o **__this_09;
  _union_249689 _Var32;
  System_String_array *unaff_R12;
  uint uVar33;
  ulong unaff_R13;
  int startIndex;
  _union_249689 unaff_R15;
  undefined1 auVar34 [12];
  undefined1 auVar35 [16];
  undefined8 in_stack_fffffffffffffe00;
  undefined8 in_stack_fffffffffffffe08;
  undefined8 uVar36;
  Il2CppRGCTXData *pIVar37;
  undefined1 auStack_1d0 [32];
  _union_249689 _Stack_1b0;
  System_Collections_Generic_List_object__o *pSStack_1a8;
  _union_249689 _Stack_1a0;
  _union_249689 _Stack_198;
  _union_249689 _Stack_190;
  _union_249689 _Stack_188;
  _union_249689 _Stack_180;
  _union_249689 _Stack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  _union_249689 _Stack_160;
  _union_249689 _Stack_158;
  _union_249689 _Stack_150;
  _union_249689 _Stack_148;
  _union_249689 _Stack_140;
  _union_249689 _Stack_138;
  _union_249689 _Stack_128;
  _union_249689 _Stack_120;
  _union_249689 _Stack_118;
  _union_249689 _Stack_110;
  _union_249689 _Stack_108;
  System_Func_TSource__TResult__o *pSStack_100;
  _union_249689 _Stack_f8;
  _union_249689 _Stack_f0;
  _union_249689 _Stack_e8;
  _union_249689 _Stack_e0;
  undefined1 uStack_c9;
  _union_249689 _Stack_c8;
  System_Func_TSource__TResult__o *pSStack_c0;
  _union_249689 _Stack_b8;
  _union_249689 _Stack_b0;
  System_String_array *pSStack_a8;
  System_Char_array *pSStack_a0;
  _union_249689 _Stack_98;
  _union_249689 _Stack_90;
  _union_249689 _Stack_88;
  int32_t iStack_7c;
  _union_249689 _Stack_78;
  System_String_array *pSStack_70;
  _union_249689 _Stack_68;
  System_String_array *pSStack_60;
  ulong uStack_58;
  System_Func_TSource__bool__o *pSStack_50;
  _union_249689 _Stack_48;
  System_Func_TSource__bool__o *pSStack_40;
  undefined8 uStack_38;
  
  predicate = (System_Func_TSource__bool__o *)(ulong)(uint)isCodeBlock;
  uStack_38 = in_RAX;
  if (g_data_057adc74 == '\0') {
    pSStack_40 = (System_Func_TSource__bool__o *)0x427eae6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    pSStack_40 = (System_Func_TSource__bool__o *)0x427eaf2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_IsWhiteSpace);
    pSStack_40 = (System_Func_TSource__bool__o *)0x427eafe;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_Count_Char);
    pSStack_40 = (System_Func_TSource__bool__o *)0x427eb0a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Char_TakeWhile_Char);
    pSStack_40 = (System_Func_TSource__bool__o *)0x427eb16;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_char_bool);
    pSStack_40 = (System_Func_TSource__bool__o *)0x427eb22;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057adc74 = '\x01';
  }
  if (val == (System_String_o *)0x0) goto label_0427ee92;
  _Var28.genericMethod = (void *)0x0;
  pMVar25 = (MethodInfo *)0x0;
  pSStack_40 = (System_Func_TSource__bool__o *)0x427eb45;
  pSVar10 = System_String__Split(val,10,0,(MethodInfo *)0x0);
  if (pSVar10 == (System_String_array *)0x0) goto label_0427ee92;
  iVar27 = (int)pSVar10->max_length;
  uVar33 = iVar27 - 1;
  unaff_R13 = (ulong)uVar33;
  if ((int)uVar33 < 0) {
label_0427ebc7:
    uVar33 = _Var28._0_4_;
    iVar27 = (int)unaff_R13;
    unaff_R12 = pSVar10;
    if ((char)isCodeBlock == '\0') {
      pSStack_40 = (System_Func_TSource__bool__o *)0x427ec8e;
      val = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
      pSStack_40 = (System_Func_TSource__bool__o *)0x427ec9b;
      System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)val,(MethodInfo *)0x0);
      if (iVar27 < (int)uVar33) {
label_0427ece8:
        if ((System_Func_TSource__bool__o *)val == (System_Func_TSource__bool__o *)0x0) goto label_0427ee92;
        pSVar12 = ((System_Func_TSource__bool__o *)val)->klass;
        pMVar25 = (pSVar12->vtable)._3_ToString.method;
        pSVar31 = (System_Func_TSource__bool__o *)val;
        goto label_0427eea9;
      }
      if ((System_Func_TSource__bool__o *)val != (System_Func_TSource__bool__o *)0x0) {
        do {
          uVar33 = _Var28._0_4_;
          if ((uint)pSVar10->max_length <= uVar33) goto label_0427ef6e;
          if (pSVar10->m_Items[(int)uVar33] == (System_String_o *)0x0) goto label_0427ee92;
          pSStack_40 = (System_Func_TSource__bool__o *)0x427ecd3;
          pSVar15 = System_String__Trim(pSVar10->m_Items[(int)uVar33],(MethodInfo *)0x0);
          pSStack_40 = (System_Func_TSource__bool__o *)0x427ece0;
          System_Text_StringBuilder__AppendLine_3b044f0
                    ((System_Text_StringBuilder_o *)val,pSVar15,(MethodInfo *)0x0);
          _Var28._0_4_ = uVar33 + 1;
          _Var28._4_4_ = 0;
        } while ((int)_Var28._0_4_ <= iVar27);
        goto label_0427ece8;
      }
      if (uVar33 < (uint)pSVar10->max_length) {
        if (pSVar10->m_Items[(int)uVar33] == (System_String_o *)0x0) goto label_0427ee92;
        pSStack_40 = (System_Func_TSource__bool__o *)0x427ef2a;
        System_String__Trim(pSVar10->m_Items[(int)uVar33],(MethodInfo *)0x0);
        pSStack_40 = (System_Func_TSource__bool__o *)0x427ef2f;
        il2cpp_runtime_helper_022b2c90();
        iVar9 = extraout_EDX;
label_0427ef2f:
        pSStack_40 = (System_Func_TSource__bool__o *)0x427ef3c;
        _Var28.genericMethod =
             System_String__Substring_3af8da0(_Var28.genericMethod,unaff_R15._0_4_,iVar9,(MethodInfo *)0x0);
        pSStack_40 = (System_Func_TSource__bool__o *)0x427ef53;
        pSVar13 = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char,2);
        if (pSVar13 == (System_Char_array *)0x0) goto label_0427ee92;
        uVar33 = (uint)pSVar13->max_length;
        pMVar25 = (MethodInfo *)(ulong)uVar33;
        if ((uVar33 != 0) && (pSVar13->m_Items[0] = 0xd, uVar33 != 1)) goto label_0427ef73;
      }
      goto label_0427ef6e;
    }
    if ((int)uVar33 <= iVar27) {
      uStack_38 = CONCAT44(0x7fffffff,(undefined4)uStack_38);
      unaff_R15 = _Var28;
      if (uVar33 < (uint)pSVar10->max_length) {
        do {
          val = pSVar10->m_Items[unaff_R15._0_4_];
          pSStack_40 = (System_Func_TSource__bool__o *)0x427ec1a;
          bVar6 = System_String__IsNullOrWhiteSpace(val,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            pSStack_40 = (System_Func_TSource__bool__o *)0x427ec2d;
            predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_char_bool);
            pSStack_40 = (System_Func_TSource__bool__o *)0x427ec46;
            System_Func_char__bool____ctor();
            pSStack_40 = (System_Func_TSource__bool__o *)0x427ec5b;
            pSVar11 = System_Linq_Enumerable__TakeWhile_char_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)val,predicate,
                                 MethodInfo_IEnumerable_1_System_Char_TakeWhile_Char);
            pSStack_40 = (System_Func_TSource__bool__o *)0x427ec6d;
            uVar8 = System_Linq_Enumerable__Count_char_(pSVar11,MethodInfo_Int32_Count_Char);
            uVar7 = uStack_38._4_4_;
            if ((int)uVar8 <= (int)uStack_38._4_4_) {
              uVar7 = uVar8;
            }
            pMVar25 = (MethodInfo *)(ulong)uVar7;
            uStack_38 = CONCAT44(uVar7,(undefined4)uStack_38);
          }
          unaff_R15._0_4_ = unaff_R15._0_4_ + 1;
          unaff_R15._4_4_ = 0;
          if (iVar27 < (int)unaff_R15._0_4_) {
            unaff_R15._4_4_ = 0;
            unaff_R15._0_4_ = uStack_38._4_4_;
            if (uStack_38._4_4_ != 0x7fffffff) goto label_0427ed15;
            goto label_0427ed12;
          }
        } while ((uint)unaff_R15._0_4_ < (uint)pSVar10->max_length);
      }
      goto label_0427ef6e;
    }
label_0427ed12:
    unaff_R15.genericMethod = (void *)0x0;
label_0427ed15:
    pSStack_40 = (System_Func_TSource__bool__o *)0x427ed24;
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    pSStack_40 = (System_Func_TSource__bool__o *)0x427ed31;
    System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)predicate,(MethodInfo *)0x0);
    if (iVar27 < (int)uVar33) goto label_0427ee97;
    startIndex = unaff_R15._0_4_;
    if (predicate != (System_Func_TSource__bool__o *)0x0) {
      while (uVar33 = _Var28._0_4_, uVar33 < (uint)pSVar10->max_length) {
        val = pSVar10->m_Items[(int)uVar33];
        if ((System_Func_TSource__bool__o *)val == (System_Func_TSource__bool__o *)0x0) goto label_0427ee92;
        iVar2 = (int)(((System_Func_TSource__bool__o *)val)->fields).method_ptr;
        if (iVar2 < startIndex) {
          pSStack_40 = (System_Func_TSource__bool__o *)0x427ee0e;
          pSVar13 = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char,2);
          if (pSVar13 == (System_Char_array *)0x0) goto label_0427ee92;
          uVar7 = (uint)pSVar13->max_length;
          pMVar25 = (MethodInfo *)(ulong)uVar7;
          if ((uVar7 == 0) || (pSVar13->m_Items[0] = 0xd, uVar7 == 1)) break;
          pSVar13->m_Items[1] = 10;
        }
        else {
          pSStack_40 = (System_Func_TSource__bool__o *)0x427ee4d;
          val = System_String__Substring_3af8da0(val,startIndex,iVar2 - startIndex,(MethodInfo *)0x0);
          pSStack_40 = (System_Func_TSource__bool__o *)0x427ee64;
          pSVar13 = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char,2);
          if (pSVar13 == (System_Char_array *)0x0) goto label_0427ee92;
          uVar7 = (uint)pSVar13->max_length;
          pMVar25 = (MethodInfo *)(ulong)uVar7;
          if ((uVar7 == 0) || (pSVar13->m_Items[0] = 0xd, uVar7 == 1)) break;
          pSVar13->m_Items[1] = 10;
          if ((System_Func_TSource__bool__o *)val == (System_Func_TSource__bool__o *)0x0) goto label_0427ee92;
        }
        pSStack_40 = (System_Func_TSource__bool__o *)0x427edbd;
        pSVar15 = System_String__TrimEnd_3afbd30(val,pSVar13,(MethodInfo *)0x0);
        pSStack_40 = (System_Func_TSource__bool__o *)0x427edca;
        System_Text_StringBuilder__AppendLine_3b044f0
                  ((System_Text_StringBuilder_o *)predicate,pSVar15,(MethodInfo *)0x0);
        _Var28._0_4_ = uVar33 + 1;
        _Var28._4_4_ = 0;
        if (iVar27 < (int)_Var28._0_4_) goto label_0427ee97;
      }
      goto label_0427ef6e;
    }
    if ((uint)pSVar10->max_length <= uVar33) goto label_0427ef6e;
    _Var28 = (_union_249689)((_union_249689 *)(pSVar10->m_Items + (int)uVar33))->genericMethod;
    if ((System_String_Fields)_Var28.genericMethod == (System_String_Fields)0x0) goto label_0427ee92;
    iVar9 = *(int *)((long)_Var28.genericMethod + 0x10) - startIndex;
    if (startIndex <= *(int *)((long)_Var28.genericMethod + 0x10)) goto label_0427ef2f;
    pSStack_40 = (System_Func_TSource__bool__o *)0x427ed7f;
    pSVar13 = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char,2);
    if (pSVar13 == (System_Char_array *)0x0) goto label_0427ee92;
    uVar33 = (uint)pSVar13->max_length;
    pMVar25 = (MethodInfo *)(ulong)uVar33;
    if ((uVar33 == 0) || (pSVar13->m_Items[0] = 0xd, uVar33 == 1)) goto label_0427ef6e;
    pSVar13->m_Items[1] = 10;
  }
  else {
    if (iVar27 != 0) {
      _Var28.genericMethod = (void *)0x0;
      do {
        iVar27 = _Var28._0_4_;
        pSStack_40 = (System_Func_TSource__bool__o *)0x427eb7f;
        bVar6 = System_String__IsNullOrWhiteSpace(pSVar10->m_Items[iVar27],(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') goto label_0427ebc2;
        uVar7 = iVar27 + 1;
        if ((int)uVar33 < (int)uVar7) {
          _Var28._0_4_ = iVar27 + 1;
          _Var28._4_4_ = 0;
          goto label_0427ebc2;
        }
        _Var28._4_4_ = 0;
        _Var28._0_4_ = uVar7;
      } while (uVar7 < (uint)pSVar10->max_length);
    }
label_0427ef6e:
    while( true ) {
      pSStack_40 = (System_Func_TSource__bool__o *)0x427ef73;
      pSVar13 = (System_Char_array *)il2cpp_runtime_helper_022b2ca0();
label_0427ef73:
      pSVar13->m_Items[1] = 10;
      unaff_R12 = pSVar10;
      if ((System_String_Fields)_Var28.genericMethod != (System_String_Fields)0x0) break;
label_0427ee92:
      while( true ) {
        do {
          do {
            pSStack_40 = (System_Func_TSource__bool__o *)0x427ee97;
            il2cpp_runtime_helper_022b2c90();
            pSVar10 = unaff_R12;
label_0427ee97:
            unaff_R12 = pSVar10;
          } while (predicate == (System_Func_TSource__bool__o *)0x0);
          pSVar12 = predicate->klass;
          pMVar25 = (pSVar12->vtable)._3_ToString.method;
          pSVar31 = predicate;
label_0427eea9:
          pSStack_40 = (System_Func_TSource__bool__o *)0x427eeaf;
          _Var28.genericMethod = (void *)(*(pSVar12->vtable)._3_ToString.methodPtr)(pSVar31,pMVar25);
          pSStack_40 = (System_Func_TSource__bool__o *)0x427eec6;
          pSVar13 = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char,2);
          unaff_R12 = pSVar10;
        } while (pSVar13 == (System_Char_array *)0x0);
        uVar33 = (uint)pSVar13->max_length;
        pMVar25 = (MethodInfo *)(ulong)uVar33;
        if ((uVar33 == 0) || (pSVar13->m_Items[0] = 10, uVar33 == 1)) break;
        pSVar13->m_Items[1] = 0xd;
        if ((System_String_Fields)_Var28.genericMethod != (System_String_Fields)0x0) {
          pSVar15 = System_String__TrimEnd_3afbd30(_Var28.genericMethod,pSVar13,(MethodInfo *)0x0);
          return pSVar15;
        }
      }
    }
  }
  pSStack_40 = (System_Func_TSource__bool__o *)0x427ef8f;
  _Var20 = _Var28;
  System_String__TrimEnd_3afbd30(_Var28.genericMethod,pSVar13,(MethodInfo *)0x0);
  pSStack_40 = (System_Func_TSource__bool__o *)0x427ef94;
  il2cpp_runtime_helper_022b2c90();
  iStack_7c = extraout_EDX_00;
  _Stack_78 = _Var20;
  _Stack_68 = _Var28;
  pSStack_60 = pSVar10;
  uStack_58 = unaff_R13;
  pSStack_50 = predicate;
  _Stack_48 = unaff_R15;
  pSStack_40 = (System_Func_TSource__bool__o *)val;
  if (g_data_057adc70 == '\0') {
    _Stack_88 = (_union_249689)0x427efcf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    _Stack_88 = (_union_249689)0x427efdb;
    il2cpp_runtime_helper_023445d0(&": ");
    _Stack_88 = (_union_249689)0x427efe7;
    il2cpp_runtime_helper_023445d0(&" = ");
    _Stack_88 = (_union_249689)0x427eff3;
    il2cpp_runtime_helper_023445d0(&", ");
    g_data_057adc70 = '\x01';
  }
  if ((pSVar13 == (System_Char_array *)0x0) || (pSVar13->max_length == 0)) {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  _Stack_88 = (_union_249689)0x427f01f;
  value = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string.genericMethod);
  uVar33 = (uint)pSVar13->max_length;
  if ((int)uVar33 < 1) {
label_0427f109:
    pSVar15 = System_String__Join(", ",value,(MethodInfo *)0x0);
    return pSVar15;
  }
  if (value != (System_String_array *)0x0) {
    _Var28.genericMethod = value->m_Items;
    unaff_R15.genericMethod = (void *)0x0;
    pSStack_70 = value;
    do {
      if (uVar33 <= unaff_R15._0_4_) {
label_0427f152:
        _Stack_88 = (_union_249689)0x427f157;
        il2cpp_runtime_helper_022b2ca0();
        goto label_0427f157;
      }
      pSVar10 = *(System_String_array **)(pSVar13->m_Items + (long)unaff_R15.genericMethod * 4);
      if (pSVar10 == (System_String_array *)0x0) goto label_0427f160;
      if (*(char *)(pSVar10->m_Items + 2) == '\0') {
        method_00 = pMVar25;
        pMVar25 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        _Stack_88 = (_union_249689)0x427f085;
        pMVar14 = (MethodInfo *)
                  System_String__Concat_3ae5ba0(" = ",pSVar10->m_Items[1],(MethodInfo *)0x0);
        method_00 = pMVar25;
        pMVar25 = pMVar14;
      }
      pSVar15 = (System_String_o *)pSVar10->bounds;
      _Stack_88 = (_union_249689)0x427f0c0;
      str2 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr
                       (_Stack_78.genericMethod,
                        (CustomLogic_Editor_Models_TypeReference_o *)pSVar10->m_Items[0],iStack_7c,method_00);
      _Stack_88 = (_union_249689)0x427f0db;
      pSVar15 = System_String__Concat_3af7470
                          (pSVar15,(System_String_o *)": ",str2,(System_String_o *)pMVar25,
                           (MethodInfo *)0x0);
      value = pSStack_70;
      if ((uint)pSStack_70->max_length <= unaff_R15._0_4_) goto label_0427f152;
      *(System_String_o **)_Var28.genericMethod = pSVar15;
      _Stack_88 = (_union_249689)0x427f0f4;
      il2cpp_runtime_helper_022b4080(_Var28.genericMethod,pSVar15);
      uVar33 = (uint)pSVar13->max_length;
      _Var28.genericMethod = _Var28.genericMethod + 8;
      unaff_R15.genericMethod = unaff_R15.genericMethod + 1;
    } while (unaff_R15._0_4_ < (int)uVar33);
    goto label_0427f109;
  }
label_0427f157:
  _Var28 = (_union_249689)*(_union_249689 *)pSVar13->m_Items;
  if ((System_String_Fields)_Var28.genericMethod == (System_String_Fields)0x0) {
label_0427f160:
    _Stack_88 = (_union_249689)0x427f165;
    il2cpp_runtime_helper_022b2c90();
  }
  if (*(char *)((long)_Var28.genericMethod + 0x30) == '\0') {
    _Var20 = (_union_249689)(*(_union_249689 **)(g_data_057b9c00 + 0xb8))->genericMethod;
  }
  else {
    _Stack_88 = (_union_249689)0x427f19a;
    _Var20.genericMethod =
         System_String__Concat_3ae5ba0
                   (" = ",*(System_String_o **)((long)_Var28.genericMethod + 0x28),(MethodInfo *)0x0);
  }
  _Var30 = (_union_249689)((_union_249689 *)((long)_Var28.genericMethod + 0x10))->genericMethod;
  _Stack_88 = (_union_249689)0x427f1b3;
  pSVar15 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr
                      (_Stack_78.genericMethod,
                       *(CustomLogic_Editor_Models_TypeReference_o **)((long)_Var28.genericMethod + 0x20),
                       iStack_7c,pMVar25);
  _Stack_88 = (_union_249689)0x427f1ce;
  method_01 = (System_String_o **)_Var20;
  pSVar22 = ": ";
  _Var32 = _Var30;
  System_String__Concat_3af7470
            (_Var30.genericMethod,(System_String_o *)": ",pSVar15,_Var20.genericMethod,
             (MethodInfo *)0x0);
  _Stack_88 = (_union_249689)0x427f1d3;
  il2cpp_runtime_helper_022b2c90();
  _Stack_c8 = _Var32;
  _Stack_b0 = _Var28;
  pSStack_a8 = pSVar10;
  pSStack_a0 = pSVar13;
  _Stack_98 = _Var20;
  _Stack_90 = unaff_R15;
  _Stack_88 = _Var30;
  if (g_data_057adc6e == '\0') {
    _Stack_e0 = (_union_249689)0x427f20f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_AppendProperties_b__8_0);
    _Stack_e0 = (_union_249689)0x427f21b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    _Stack_e0 = (_union_249689)0x427f227;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    _Stack_e0 = (_union_249689)0x427f233;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    _Stack_e0 = (_union_249689)0x427f23f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    _Stack_e0 = (_union_249689)0x427f24b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    _Stack_e0 = (_union_249689)0x427f257;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_List_1_System_String);
    _Stack_e0 = (_union_249689)0x427f263;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    _Stack_e0 = (_union_249689)0x427f26f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_List_string);
    _Stack_e0 = (_union_249689)0x427f27b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    _Stack_e0 = (_union_249689)0x427f287;
    il2cpp_runtime_helper_023445d0(&" ");
    _Stack_e0 = (_union_249689)0x427f293;
    il2cpp_runtime_helper_023445d0(&"\r\n");
    _Stack_e0 = (_union_249689)0x427f29f;
    il2cpp_runtime_helper_023445d0(&", ");
    _Stack_e0 = (_union_249689)0x427f2ab;
    il2cpp_runtime_helper_023445d0(&"Refer to ");
    _Stack_e0 = (_union_249689)0x427f2b7;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adc6e = '\x01';
  }
  uStack_c9 = 0;
  _Stack_e0 = (_union_249689)0x427f2d2;
  plVar16 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_List_List_string);
  _Stack_e0 = (_union_249689)0x427f2e7;
  _Var18 = MethodInfo_List_1_List_1_System_String;
  _Var32.genericMethod = plVar16;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)plVar16,MethodInfo_List_1_List_1_System_String.genericMethod);
  p_Var26 = (_union_249689 *)method_01;
  selector = pSVar22;
  if (pSVar22 == (System_Func_TSource__TResult__o *)0x0) {
label_0427f78b:
    method_01 = (System_String_o **)p_Var26;
    _Stack_e0 = (_union_249689)0x427f790;
    il2cpp_runtime_helper_022b2c90();
    _Var19 = _Var30;
    pSVar22 = selector;
  }
  else {
    iVar27 = (int)(pSVar22->fields).invoke_impl;
    pMVar25 = extraout_RDX;
    if (iVar27 < 1) {
label_0427f755:
      __this = ((System_String_o *)((long)_Stack_c8.genericMethod + 0x18))->klass;
      _Var32 = (_union_249689)((_union_249689 *)((long)_Stack_c8.genericMethod + 0x20))->genericMethod;
      _Stack_e0 = (_union_249689)0x427f76a;
      _Var18.genericMethod = plVar16;
      pSVar15 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__CreateTable
                          (_Var32.genericMethod,(System_Collections_Generic_List_List_string___o *)plVar16,
                           pMVar25);
      _Var28.genericMethod = (void *)0x0;
      p_Var26 = (_union_249689 *)method_01;
      selector = pSVar22;
      if (__this != (System_String_c *)0x0) {
        _Stack_e0 = (_union_249689)0x427f77c;
        pSVar24 = System_Text_StringBuilder__AppendLine_3b044f0
                            ((System_Text_StringBuilder_o *)__this,pSVar15,(MethodInfo *)0x0);
        return (System_String_o *)pSVar24;
      }
      goto label_0427f78b;
    }
    _Var19.genericMethod = (void *)0x0;
    unaff_R15.genericMethod = (void *)0x0;
    pSStack_c0 = pSVar22;
    if (iVar27 != 0) {
      do {
        _Var20 = (_union_249689)
                 ((_union_249689 *)(&(pSVar22->fields).m_target + unaff_R15._0_4_))->genericMethod;
        p_Var26 = (_union_249689 *)method_01;
        _Var30 = _Var19;
        selector = pSVar22;
        if ((System_String_Fields)_Var20.genericMethod == (System_String_Fields)0x0) goto label_0427f78b;
        _Var30 = (_union_249689)((_union_249689 *)((long)_Var20.genericMethod + 0x28))->genericMethod;
        if ((System_String_Fields)_Var30.genericMethod == (System_String_Fields)0x0) {
label_0427f38e:
          _Var30 = _Var19;
          _Var32 = "";
        }
        else {
          if ((System_String_Fields)_Var30.genericMethod == (System_String_Fields)0x0) goto label_0427f78b;
          _Var32.genericMethod = ((_union_249689 *)((long)_Var30.genericMethod + 0x10))->genericMethod;
          _Var19 = _Var30;
          if ((System_String_Fields)((_union_249689 *)((long)_Var30.genericMethod + 0x10))->genericMethod ==
              (System_String_Fields)0x0) goto label_0427f38e;
        }
        _Var18.genericMethod = (void *)0x0;
        _Stack_e0 = (_union_249689)0x427f39f;
        _Var19.genericMethod =
             CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                       (_Var32.genericMethod,0,pMVar25);
        p_Var26 = (_union_249689 *)method_01;
        if ((System_String_Fields)_Var19.genericMethod == (System_String_Fields)0x0) goto label_0427f78b;
        p_Var26 = (_union_249689 *)0x0;
        _Stack_e0 = (_union_249689)0x427f3c6;
        _Var18 = "\r\n";
        _Var17.genericMethod =
             System_String__Replace_3af9030
                       (_Var19.genericMethod,"\r\n".genericMethod," ",(MethodInfo *)0x0);
        _Var32 = _Var19;
        if ((System_String_Fields)_Var17.genericMethod == (System_String_Fields)0x0) goto label_0427f78b;
        _Var18 = (_union_249689)0xa;
        p_Var26 = (_union_249689 *)0x0;
        _Stack_e0 = (_union_249689)0x427f3e3;
        pSVar15 = System_String__Replace(_Var17.genericMethod,10,0x20,(MethodInfo *)0x0);
        _Var32 = _Var17;
        if (pSVar15 == (System_String_o *)0x0) goto label_0427f78b;
        p_Var26 = (_union_249689 *)0x0;
        _Stack_e0 = (_union_249689)0x427f400;
        _Var28.genericMethod = System_String__Replace(pSVar15,9,0x20,(MethodInfo *)0x0);
        _Stack_b8 = _Var30;
        if ((*(long *)((long)_Var20.genericMethod + 0x38) != 0) &&
           (*(long *)(*(long *)((long)_Var20.genericMethod + 0x38) + 0x18) != 0)) {
          _Stack_e0 = (_union_249689)0x427f42a;
          bVar6 = System_String__IsNullOrEmpty(_Var28.genericMethod,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            _Stack_e0 = (_union_249689)0x427f442;
            _Var28.genericMethod =
                 System_String__Concat_3ae5ba0(_Var28.genericMethod," ",(MethodInfo *)0x0);
          }
          _Var30 = (_union_249689)((_union_249689 *)((long)_Var20.genericMethod + 0x38))->genericMethod;
          _Stack_e0 = (_union_249689)0x427f458;
          selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
          _Stack_e0 = (_union_249689)0x427f474;
          System_Func_object__object____ctor();
          _Stack_e0 = (_union_249689)0x427f489;
          _Var32.genericMethod =
               System_Linq_Enumerable__Select_object__object_(_Var30.genericMethod,selector,MethodInfo_IEnumerable_1_System_String_Select_String_String);
          p_Var26 = &MethodInfo_String_ToArray_String;
          _Stack_e0 = (_union_249689)0x427f49b;
          _Var18 = MethodInfo_String_ToArray_String;
          pSVar10 = (System_String_array *)
                    System_Linq_Enumerable__ToArray_object_(_Var32.genericMethod,MethodInfo_String_ToArray_String.genericMethod);
          pSVar22 = pSStack_c0;
          if (pSVar10 == (System_String_array *)0x0) goto label_0427f78b;
          if ((int)pSVar10->max_length == 1) {
            pSVar15 = pSVar10->m_Items[0];
          }
          else {
            _Stack_e0 = (_union_249689)0x427f4f4;
            pSVar15 = System_String__Join(", ",pSVar10,(MethodInfo *)0x0);
          }
          p_Var26 = (_union_249689 *)0x0;
          _Stack_e0 = (_union_249689)0x427f50b;
          _Var28.genericMethod =
               System_String__Concat_3af7150(_Var28.genericMethod,"Refer to ",pSVar15,(MethodInfo *)0x0);
        }
        _Stack_e0 = (_union_249689)0x427f51d;
        _Var30.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        _Stack_e0 = (_union_249689)0x427f532;
        _Var18 = MethodInfo_List_1_System_String;
        _Var32.genericMethod = _Var30.genericMethod;
        System_Collections_Generic_List_object____ctor(_Var30.genericMethod,MethodInfo_List_1_System_String.genericMethod);
        _Var19 = MethodInfo_Void_Add;
        selector = pSVar22;
        if ((System_String_Fields)_Var30.genericMethod == (System_String_Fields)0x0) goto label_0427f78b;
        _Var18 = (_union_249689)((_union_249689 *)((long)_Var20.genericMethod + 0x20))->genericMethod;
        *(int *)((long)_Var30.genericMethod + 0x1c) = *(int *)((long)_Var30.genericMethod + 0x1c) + 1;
        lVar4 = *(long *)((long)_Var30.genericMethod + 0x10);
        p_Var26 = (_union_249689 *)_Var19;
        if (lVar4 == 0) goto label_0427f78b;
        uVar33 = *(uint *)((long)_Var30.genericMethod + 0x18);
        if (uVar33 < *(uint *)(lVar4 + 0x18)) {
          _Var19._0_4_ = uVar33 + 1;
          _Var19._4_4_ = 0;
          *(uint *)((long)_Var30.genericMethod + 0x18) = _Var19._0_4_;
          ((_union_249689 *)(lVar4 + 0x20 + (long)(int)uVar33 * 8))->genericMethod = (void *)_Var18;
          _Stack_e0 = (_union_249689)0x427f57b;
          il2cpp_runtime_helper_022b4080(lVar4 + (long)(int)uVar33 * 8 + 0x20);
        }
        else {
          _Stack_e0 = (_union_249689)0x427f597;
          System_Collections_Generic_List_object___AddWithResize
                    (_Var30.genericMethod,_Var18.genericMethod,
                     *(MethodInfo_362C220 **)
                      (*(long *)(*(long *)((long)_Var19.genericMethod + 0x20) + 0xc0) + 0x70));
        }
        _Var18 = (_union_249689)((_union_249689 *)((long)_Var20.genericMethod + 0x18))->genericMethod;
        _Stack_e0 = (_union_249689)0x427f5aa;
        _Var32 = _Stack_c8;
        pSVar15 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr
                            (_Stack_c8.genericMethod,_Var18.genericMethod,1,_Var19.genericMethod);
        _Var19 = MethodInfo_Void_Add;
        *(int *)((long)_Var30.genericMethod + 0x1c) = *(int *)((long)_Var30.genericMethod + 0x1c) + 1;
        lVar4 = *(long *)((long)_Var30.genericMethod + 0x10);
        p_Var26 = (void *)0x0;
        if (lVar4 == 0) goto label_0427f78b;
        uVar33 = *(uint *)((long)_Var30.genericMethod + 0x18);
        if (uVar33 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)((long)_Var30.genericMethod + 0x18) = uVar33 + 1;
          *(System_String_o **)(lVar4 + 0x20 + (long)(int)uVar33 * 8) = pSVar15;
          _Stack_e0 = (_union_249689)0x427f5e9;
          il2cpp_runtime_helper_022b4080(lVar4 + (long)(int)uVar33 * 8 + 0x20);
        }
        else {
          _Stack_e0 = (_union_249689)0x427f60a;
          System_Collections_Generic_List_object___AddWithResize
                    (_Var30.genericMethod,(Il2CppObject *)pSVar15,
                     *(MethodInfo_362C220 **)
                      (*(long *)(*(long *)((long)_Var19.genericMethod + 0x20) + 0xc0) + 0x70));
        }
        uStack_c9 = *(undefined1 *)((long)_Var20.genericMethod + 0x30);
        if (*(int *)(g_data_057b9b98 + 0xe4) == 0) {
          _Stack_e0 = (_union_249689)0x427f62c;
          il2cpp_runtime_helper_02337ed0();
        }
        _Var32.genericMethod = &uStack_c9;
        _Var18.genericMethod = (void *)0x0;
        _Stack_e0 = (_union_249689)0x427f638;
        _Var17.genericMethod = System_Boolean__ToString(_Var32._0_4_,(MethodInfo *)0x0);
        _Var19 = MethodInfo_Void_Add;
        *(int *)((long)_Var30.genericMethod + 0x1c) = *(int *)((long)_Var30.genericMethod + 0x1c) + 1;
        lVar4 = *(long *)((long)_Var30.genericMethod + 0x10);
        p_Var26 = (void *)0x0;
        if (lVar4 == 0) goto label_0427f78b;
        uVar33 = *(uint *)((long)_Var30.genericMethod + 0x18);
        if (uVar33 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)((long)_Var30.genericMethod + 0x18) = uVar33 + 1;
          _Var32.genericMethod = (void *)(lVar4 + (long)(int)uVar33 * 8 + 0x20);
          ((_union_249689 *)(lVar4 + 0x20 + (long)(int)uVar33 * 8))->genericMethod = (void *)_Var17;
          _Stack_e0 = (_union_249689)0x427f677;
          il2cpp_runtime_helper_022b4080();
          _Var18 = _Var17;
        }
        else {
          _Stack_e0 = (_union_249689)0x427f69a;
          _Var32.genericMethod = _Var30.genericMethod;
          System_Collections_Generic_List_object___AddWithResize
                    (_Var30.genericMethod,_Var17.genericMethod,
                     *(MethodInfo_362C220 **)
                      (*(long *)(*(long *)((long)_Var19.genericMethod + 0x20) + 0xc0) + 0x70));
          _Var18 = _Var17;
        }
        p_Var26 = (_union_249689 *)MethodInfo_Void_Add;
        *(int *)((long)_Var30.genericMethod + 0x1c) = *(int *)((long)_Var30.genericMethod + 0x1c) + 1;
        lVar4 = *(long *)((long)_Var30.genericMethod + 0x10);
        if (lVar4 == 0) goto label_0427f78b;
        uVar33 = *(uint *)((long)_Var30.genericMethod + 0x18);
        _Var18 = _Var28;
        if (uVar33 < *(uint *)(lVar4 + 0x18)) {
          p_Var26._0_4_ = uVar33 + 1;
          p_Var26._4_4_ = 0;
          *(uint *)((long)_Var30.genericMethod + 0x18) = (uint)p_Var26;
          _Var32.genericMethod = (void *)(lVar4 + (long)(int)uVar33 * 8 + 0x20);
          ((_union_249689 *)(lVar4 + 0x20 + (long)(int)uVar33 * 8))->genericMethod = (void *)_Var28;
          _Stack_e0 = (_union_249689)0x427f6d9;
          il2cpp_runtime_helper_022b4080();
          method_01 = (System_String_o **)MethodInfo_Void_Add;
        }
        else {
          _Stack_e0 = (_union_249689)0x427f70a;
          _Var32.genericMethod = _Var30.genericMethod;
          System_Collections_Generic_List_object___AddWithResize
                    (_Var30.genericMethod,_Var28.genericMethod,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)((long)p_Var26 + 0x20) + 0xc0) + 0x70));
          method_01 = (System_String_o **)MethodInfo_Void_Add;
        }
        MethodInfo_Void_Add = (_union_249689)method_01;
        if ((System_String_Fields)plVar16 == (System_String_Fields)0x0) goto label_0427f78b;
        *(int *)((long)plVar16 + 0x1c) = *(int *)((long)plVar16 + 0x1c) + 1;
        lVar4 = *(long *)((long)plVar16 + 0x10);
        p_Var26 = (_union_249689 *)method_01;
        if (lVar4 == 0) goto label_0427f78b;
        uVar33 = *(uint *)((long)plVar16 + 0x18);
        if (uVar33 < *(uint *)(lVar4 + 0x18)) {
          method_01._0_4_ = uVar33 + 1;
          method_01._4_4_ = 0;
          *(uint *)((long)plVar16 + 0x18) = (uint)method_01;
          _Var32.genericMethod = (void *)(lVar4 + (long)(int)uVar33 * 8 + 0x20);
          ((_union_249689 *)(lVar4 + 0x20 + (long)(int)uVar33 * 8))->genericMethod = (void *)_Var30;
          _Stack_e0 = (_union_249689)0x427f750;
          il2cpp_runtime_helper_022b4080();
          pMVar25 = extraout_RDX_01;
          _Var18 = _Var30;
        }
        else {
          _Stack_e0 = (_union_249689)0x427f33a;
          _Var32.genericMethod = plVar16;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)plVar16,_Var30.genericMethod,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)((long)method_01 + 0x20) + 0xc0) + 0x70));
          pMVar25 = extraout_RDX_00;
          _Var18 = _Var30;
        }
        unaff_R15._0_4_ = unaff_R15._0_4_ + 1;
        unaff_R15._4_4_ = 0;
        uVar33 = (uint)(pSVar22->fields).invoke_impl;
        _Var30 = _Stack_b8;
        if ((int)uVar33 <= (int)unaff_R15._0_4_) goto label_0427f755;
        _Var19 = _Stack_b8;
      } while ((uint)unaff_R15._0_4_ < uVar33);
    }
  }
  _Stack_e0 = (_union_249689)0x427f795;
  il2cpp_runtime_helper_022b2ca0();
  _Var30 = _Var18;
  __this_09 = (System_String_o **)_Var32;
  _Stack_108 = _Var28;
  pSStack_100 = pSVar22;
  _Stack_f8.genericMethod = plVar16;
  _Stack_f0 = _Var20;
  _Stack_e8 = unaff_R15;
  _Stack_e0 = _Var19;
  if (g_data_057adc6f == '\0') {
    _Stack_138 = (_union_249689)0x427f7cd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_AppendMethods_b__9_1);
    _Stack_138 = (_union_249689)0x427f7d9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_CLParameter);
    _Stack_138 = (_union_249689)0x427f7e5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    _Stack_138 = (_union_249689)0x427f7f1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    _Stack_138 = (_union_249689)0x427f7fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CLParameter_bool);
    _Stack_138 = (_union_249689)0x427f809;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    _Stack_138 = (_union_249689)0x427f815;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    _Stack_138 = (_union_249689)0x427f821;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_AppendMethods_b__9_0);
    _Stack_138 = (_union_249689)0x427f82d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    _Stack_138 = (_union_249689)0x427f839;
    il2cpp_runtime_helper_023445d0(&" ");
    _Stack_138 = (_union_249689)0x427f845;
    il2cpp_runtime_helper_023445d0(&"> **Remarks**: ");
    _Stack_138 = (_union_249689)0x427f851;
    il2cpp_runtime_helper_023445d0(&"__");
    _Stack_138 = (_union_249689)0x427f85d;
    il2cpp_runtime_helper_023445d0(&"> ");
    _Stack_138 = (_union_249689)0x427f869;
    il2cpp_runtime_helper_023445d0(&"{% hint style=\"warning\" %}");
    _Stack_138 = (_union_249689)0x427f875;
    il2cpp_runtime_helper_023445d0(&"> - `");
    _Stack_138 = (_union_249689)0x427f881;
    il2cpp_runtime_helper_023445d0(&"<pre class=\"language-typescript\"><code class=\"lang-typescript\">function ");
    _Stack_138 = (_union_249689)0x427f88d;
    il2cpp_runtime_helper_023445d0(&"null");
    _Stack_138 = (_union_249689)0x427f899;
    il2cpp_runtime_helper_023445d0(&"{% endhint %}");
    _Stack_138 = (_union_249689)0x427f8a5;
    il2cpp_runtime_helper_023445d0(&"`: ");
    _Stack_138 = (_union_249689)0x427f8b1;
    il2cpp_runtime_helper_023445d0(&", ");
    _Stack_138 = (_union_249689)0x427f8bd;
    il2cpp_runtime_helper_023445d0(&"Refer to ");
    _Stack_138 = (_union_249689)0x427f8c9;
    il2cpp_runtime_helper_023445d0(&" -> ");
    _Stack_138 = (_union_249689)0x427f8d5;
    il2cpp_runtime_helper_023445d0(&"(");
    _Stack_138 = (_union_249689)0x427f8e1;
    il2cpp_runtime_helper_023445d0(&")");
    _Stack_138 = (_union_249689)0x427f8ed;
    il2cpp_runtime_helper_023445d0(&"");
    _Stack_138 = (_union_249689)0x427f8f9;
    il2cpp_runtime_helper_023445d0(&"> **Returns**: ");
    _Stack_138 = (_union_249689)0x427f905;
    il2cpp_runtime_helper_023445d0(&"> **Parameters**:");
    _Stack_138 = (_union_249689)0x427f911;
    il2cpp_runtime_helper_023445d0(&"**Obsolete**: ");
    __this_09 = &"</code></pre>";
    _Stack_138 = (_union_249689)0x427f91d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc6f = '\x01';
  }
  _Stack_128 = _Var32;
  if ((System_String_Fields)_Var18.genericMethod == (System_String_Fields)0x0) {
label_0428007e:
    _Stack_138 = (_union_249689)0x4280083;
    pSVar15 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
    return pSVar15;
  }
  uVar33 = *(uint *)((long)_Var18.genericMethod + 0x18);
  if ((int)uVar33 < 1) {
    return (System_String_o *)(ulong)uVar33;
  }
  _Var20.genericMethod = (System_String_o *)0x0;
  _Stack_118 = _Var18;
  if (uVar33 != 0) {
    do {
      _Var28 = (_union_249689)
               ((_union_249689 *)((long)_Var18.genericMethod + (long)_Var20._0_4_ * 8 + 0x20))->genericMethod;
      if (((System_String_Fields)_Var28.genericMethod == (System_String_Fields)0x0) ||
         (__this_09 = ((_union_249689 *)((long)_Var28.genericMethod + 0x28))->genericMethod,
         (System_String_Fields)__this_09 == (System_String_Fields)0x0)) goto label_0428007e;
      _Stack_138 = (_union_249689)0x427f9a9;
      _Var30 = "__";
      bVar6 = System_String__StartsWith
                        ((System_String_o *)__this_09,"__".genericMethod,(MethodInfo *)0x0);
      _Var19 = _Stack_128;
      if ((char)bVar6 == '\0') {
        _Stack_138 = (_union_249689)0x427f9c8;
        _Stack_110 = _Var20;
        plVar16 = (long *)CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetParametersStr
                                    (_Stack_128.genericMethod,
                                     *(CustomLogic_Editor_Models_CLParameter_array **)
                                      ((long)_Var28.genericMethod + 0x18),2,(MethodInfo *)method_01);
        _Stack_138 = (_union_249689)0x427f9dc;
        pSVar15 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__GetTypeReferenceStr
                            (_Var19.genericMethod,
                             *(CustomLogic_Editor_Models_TypeReference_o **)
                              ((long)_Var28.genericMethod + 0x20),2,(MethodInfo *)method_01);
        _Stack_138 = (_union_249689)0x427f9e9;
        bVar6 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          _Stack_138 = (_union_249689)0x427fa01;
          bVar6 = System_String__op_Equality(pSVar15,"null",(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') goto label_0427fa05;
          _Stack_138 = (_union_249689)0x427fa33;
          _Var32.genericMethod = System_String__Concat_3ae5ba0(" -> ",pSVar15,(MethodInfo *)0x0);
        }
        else {
label_0427fa05:
          _Var32 = **(_union_249689 **)(g_data_057b9c00 + 0xb8);
        }
        _Var17 = _Stack_128;
        _Stack_120 = _Var28;
        if (*(System_Text_StringBuilder_o **)((long)_Stack_128.genericMethod + 0x18) ==
            (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
        _Stack_138 = (_union_249689)0x427fa5e;
        System_Text_StringBuilder__Append_3b03f90
                  (*(System_Text_StringBuilder_o **)((long)_Stack_128.genericMethod + 0x18),"<pre class=\"language-typescript\"><code class=\"lang-typescript\">function ",
                   (MethodInfo *)0x0);
        unaff_R15 = (_union_249689)((_union_249689 *)((long)_Var17.genericMethod + 0x18))->genericMethod;
        _Var30 = (_union_249689)0x5;
        _Stack_138 = (_union_249689)0x427fa76;
        __this_09 = (System_String_o **)TypeInfo_string;
        _Var18.genericMethod = (void *)il2cpp_runtime_helper_022b2a40();
        if ((System_String_Fields)_Var18.genericMethod == (System_String_Fields)0x0) goto label_0428007e;
        _Var19 = _Var17;
        if (*(int *)((long)_Var18.genericMethod + 0x18) == 0) break;
        _Var30 = (_union_249689)((_union_249689 *)((long)_Stack_120.genericMethod + 0x28))->genericMethod;
        __this_09 = (System_String_o **)((long)_Var18.genericMethod + 0x20);
        ((_union_249689 *)((long)_Var18.genericMethod + 0x20))->genericMethod = (void *)_Var30;
        _Stack_138 = (_union_249689)0x427faa2;
        il2cpp_runtime_helper_022b4080();
        _Var28 = "(";
        if (*(uint *)((long)_Var18.genericMethod + 0x18) < 2) break;
        __this_09 = (System_String_o **)((long)_Var18.genericMethod + 0x28);
        *(_union_249689 *)((long)_Var18.genericMethod + 0x28) = "(";
        _Stack_138 = (_union_249689)0x427fac4;
        il2cpp_runtime_helper_022b4080();
        _Var30 = _Var28;
        if (*(uint *)((long)_Var18.genericMethod + 0x18) < 3) break;
        __this_09 = (System_String_o **)((long)_Var18.genericMethod + 0x30);
        ((_union_249689 *)((long)_Var18.genericMethod + 0x30))->genericMethod = plVar16;
        _Stack_138 = (_union_249689)0x427fadf;
        _Var30.genericMethod = plVar16;
        il2cpp_runtime_helper_022b4080();
        _Var28 = ")";
        if (*(uint *)((long)_Var18.genericMethod + 0x18) < 4) break;
        __this_09 = (System_String_o **)((long)_Var18.genericMethod + 0x38);
        *(_union_249689 *)((long)_Var18.genericMethod + 0x38) = ")";
        _Stack_138 = (_union_249689)0x427fb01;
        il2cpp_runtime_helper_022b4080();
        _Var20 = _Stack_110;
        _Var30 = _Var28;
        if (*(uint *)((long)_Var18.genericMethod + 0x18) < 5) break;
        *(_union_249689 *)((long)_Var18.genericMethod + 0x40) = _Var32;
        _Stack_138 = (_union_249689)0x427fb24;
        il2cpp_runtime_helper_022b4080((long)_Var18.genericMethod + 0x40);
        _Stack_138 = (_union_249689)0x427fb2e;
        pSVar15 = System_String__Concat_3af7570(_Var18.genericMethod,(MethodInfo *)0x0);
        if ((System_String_Fields)unaff_R15.genericMethod == (System_String_Fields)0x0) goto label_0428007e;
        _Stack_138 = (_union_249689)0x427fb44;
        System_Text_StringBuilder__Append_3b03f90(unaff_R15.genericMethod,pSVar15,(MethodInfo *)0x0);
        _Var18 = _Stack_118;
        if (*(System_Text_StringBuilder_o **)((long)_Var17.genericMethod + 0x18) ==
            (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
        _Stack_138 = (_union_249689)0x427fb67;
        System_Text_StringBuilder__AppendLine_3b044f0
                  (*(System_Text_StringBuilder_o **)((long)_Var17.genericMethod + 0x18),"</code></pre>",
                   (MethodInfo *)0x0);
        unaff_R15 = _Stack_120;
        _Stack_138 = (_union_249689)0x427fb76;
        bVar6 = CustomLogic_Editor_Models_BaseModel__get_IsObsolete
                          (_Stack_120.genericMethod,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          if (*(System_Text_StringBuilder_o **)((long)_Var17.genericMethod + 0x18) ==
              (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
          _Stack_138 = (_union_249689)0x427fb92;
          System_Text_StringBuilder__AppendLine
                    (*(System_Text_StringBuilder_o **)((long)_Var17.genericMethod + 0x18),(MethodInfo *)0x0);
          if (*(System_Text_StringBuilder_o **)((long)_Var17.genericMethod + 0x18) ==
              (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
          _Stack_138 = (_union_249689)0x427fbb0;
          System_Text_StringBuilder__AppendLine_3b044f0
                    (*(System_Text_StringBuilder_o **)((long)_Var17.genericMethod + 0x18),"{% hint style=\"warning\" %}",
                     (MethodInfo *)0x0);
          _Var32 = (_union_249689)((_union_249689 *)((long)_Var17.genericMethod + 0x18))->genericMethod;
          _Stack_138 = (_union_249689)0x427fbc9;
          pSVar15 = System_String__Concat_3ae5ba0
                              ("**Obsolete**: ",*(System_String_o **)((long)unaff_R15.genericMethod + 0x10),
                               (MethodInfo *)0x0);
          if ((System_String_Fields)_Var32.genericMethod == (System_String_Fields)0x0) goto label_0428007e;
          _Stack_138 = (_union_249689)0x427fbdf;
          System_Text_StringBuilder__AppendLine_3b044f0(_Var32.genericMethod,pSVar15,(MethodInfo *)0x0);
          if (*(System_Text_StringBuilder_o **)((long)_Var17.genericMethod + 0x18) ==
              (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
          _Stack_138 = (_union_249689)0x427fbfd;
          System_Text_StringBuilder__AppendLine_3b044f0
                    (*(System_Text_StringBuilder_o **)((long)_Var17.genericMethod + 0x18),"{% endhint %}",
                     (MethodInfo *)0x0);
          if (*(System_Text_StringBuilder_o **)((long)_Var17.genericMethod + 0x18) ==
              (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
          _Stack_138 = (_union_249689)0x427fc11;
          System_Text_StringBuilder__AppendLine
                    (*(System_Text_StringBuilder_o **)((long)_Var17.genericMethod + 0x18),(MethodInfo *)0x0);
        }
        if (*(long *)((long)unaff_R15.genericMethod + 0x30) == 0) goto label_0428007e;
        __this_09 = ((_union_249689 *)(*(long *)((long)unaff_R15.genericMethod + 0x30) + 0x10))->genericMethod
        ;
        _Var30.genericMethod = (void *)0x0;
        _Stack_138 = (_union_249689)0x427fc29;
        bVar6 = System_String__IsNullOrEmpty((System_String_o *)__this_09,(MethodInfo *)0x0);
        _Var19 = _Stack_128;
        _Var28 = _Var17;
        if ((char)bVar6 == '\0') {
          if (*(long *)((long)unaff_R15.genericMethod + 0x30) == 0) goto label_0428007e;
          pSVar24 = *(System_Text_StringBuilder_o **)((long)_Stack_128.genericMethod + 0x18);
          _Stack_138 = (_union_249689)0x427fc52;
          pSVar15 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                              (*(System_String_o **)(*(long *)((long)unaff_R15.genericMethod + 0x30) + 0x10),0
                               ,method_02);
          method_01 = &"> ";
          _Stack_138 = (_union_249689)0x427fc66;
          pSVar15 = System_String__Concat_3ae5ba0("> ",pSVar15,(MethodInfo *)0x0);
          if (pSVar24 == (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
          _Stack_138 = (_union_249689)0x427fc7c;
          System_Text_StringBuilder__AppendLine_3b044f0(pSVar24,pSVar15,(MethodInfo *)0x0);
          if (*(System_Text_StringBuilder_o **)((long)_Var19.genericMethod + 0x18) ==
              (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
          _Stack_138 = (_union_249689)0x427fc9a;
          System_Text_StringBuilder__AppendLine_3b044f0
                    (*(System_Text_StringBuilder_o **)((long)_Var19.genericMethod + 0x18),"> ",
                     (MethodInfo *)0x0);
          if (*(long *)((long)unaff_R15.genericMethod + 0x30) == 0) goto label_0428007e;
          _Stack_138 = (_union_249689)0x427fcb2;
          bVar6 = System_String__IsNullOrEmpty
                            (*(System_String_o **)(*(long *)((long)unaff_R15.genericMethod + 0x30) + 0x18),
                             (MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            if (*(long *)((long)unaff_R15.genericMethod + 0x30) == 0) goto label_0428007e;
            pSVar24 = *(System_Text_StringBuilder_o **)((long)_Var19.genericMethod + 0x18);
            _Stack_138 = (_union_249689)0x427fcd2;
            pSVar15 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                (*(System_String_o **)(*(long *)((long)unaff_R15.genericMethod + 0x30) + 0x18)
                                 ,0,method_03);
            method_01 = &"> **Remarks**: ";
            _Stack_138 = (_union_249689)0x427fce6;
            pSVar15 = System_String__Concat_3ae5ba0("> **Remarks**: ",pSVar15,(MethodInfo *)0x0);
            if (pSVar24 == (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
            _Stack_138 = (_union_249689)0x427fcfc;
            System_Text_StringBuilder__AppendLine_3b044f0(pSVar24,pSVar15,(MethodInfo *)0x0);
            if (*(System_Text_StringBuilder_o **)((long)_Var19.genericMethod + 0x18) ==
                (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
            _Stack_138 = (_union_249689)0x427fd1a;
            System_Text_StringBuilder__AppendLine_3b044f0
                      (*(System_Text_StringBuilder_o **)((long)_Var19.genericMethod + 0x18),"> ",
                       (MethodInfo *)0x0);
          }
          unaff_R15 = (_union_249689)((_union_249689 *)((long)unaff_R15.genericMethod + 0x18))->genericMethod;
          if ((System_String_Fields)unaff_R15.genericMethod != (System_String_Fields)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              _Stack_138 = (_union_249689)0x427fd68;
              il2cpp_runtime_helper_02337ed0();
              _Var32 = (_union_249689)
                       ((_union_249689 *)(*(long *)(TypeInfo_c + 0xb8) + 0x20))->genericMethod;
            }
            else {
              _Var32 = (_union_249689)
                       ((_union_249689 *)(*(long *)(TypeInfo_c + 0xb8) + 0x20))->genericMethod;
            }
            if ((System_String_Fields)_Var32.genericMethod == (System_String_Fields)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                _Stack_138 = (_union_249689)0x427fd82;
                il2cpp_runtime_helper_02337ed0();
              }
              plVar16 = &TypeInfo_c;
              _Stack_138 = (_union_249689)0x427fda6;
              _Var32.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CLParameter_bool);
              method_01 = (System_String_o **)0x0;
              _Stack_138 = (_union_249689)0x427fdc0;
              System_Func_object__bool____ctor();
              lVar4 = *(long *)(TypeInfo_c + 0xb8);
              ((_union_249689 *)(lVar4 + 0x20))->genericMethod = (void *)_Var32;
              _Stack_138 = (_union_249689)0x427fddb;
              il2cpp_runtime_helper_022b4080(lVar4 + 0x20,_Var32.genericMethod);
              _Var18 = _Stack_118;
            }
            _Stack_138 = (_union_249689)0x427fdf5;
            bVar6 = System_Linq_Enumerable__Any_object__2504f10
                              (unaff_R15.genericMethod,_Var32.genericMethod,MethodInfo_Boolean_Any_CLParameter);
            if ((char)bVar6 != '\0') {
              __this_09 = ((_union_249689 *)((long)_Var19.genericMethod + 0x18))->genericMethod;
              if ((System_String_Fields)__this_09 == (System_String_Fields)0x0) goto label_0428007e;
              _Stack_138 = (_union_249689)0x427fe1b;
              _Var30 = "> **Parameters**:";
              System_Text_StringBuilder__AppendLine_3b044f0
                        ((System_Text_StringBuilder_o *)__this_09,"> **Parameters**:".genericMethod,(MethodInfo *)0x0
                        );
              plVar16 = ((_union_249689 *)((long)_Stack_120.genericMethod + 0x18))->genericMethod;
              if ((System_String_Fields)plVar16 == (System_String_Fields)0x0) goto label_0428007e;
              if (0 < *(int *)((long)plVar16 + 0x18)) {
                unaff_R15.genericMethod = (void *)0x0;
                _Var28.genericMethod = (void *)0x0;
                if (*(int *)((long)plVar16 + 0x18) == 0) break;
                while( true ) {
                  _Var20 = (_union_249689)
                           ((_union_249689 *)((long)plVar16 + (long)_Var28._0_4_ * 8 + 0x20))->genericMethod;
                  if (_Var20.genericMethod == (System_String_o *)0x0) goto label_0428007e;
                  _Stack_138 = (_union_249689)0x427fe94;
                  bVar6 = System_String__IsNullOrEmpty
                                    ((System_String_o *)
                                     ((System_String_o *)((long)_Var20.genericMethod + 0x18))->klass,
                                     (MethodInfo *)0x0);
                  if ((char)bVar6 == '\0') {
                    _Stack_138 = (_union_249689)0x427ff6c;
                    _Var32.genericMethod =
                         CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                   ((System_String_o *)
                                    ((System_String_o *)((long)_Var20.genericMethod + 0x18))->klass,0,
                                    method_04);
                    pvVar3 = *(void **)((long)_Var20.genericMethod + 0x38);
                  }
                  else {
                    pvVar3 = *(void **)((long)_Var20.genericMethod + 0x38);
                    _Var32 = "";
                  }
                  if ((pvVar3 != (void *)0x0) && (*(long *)((long)pvVar3 + 0x18) != 0)) {
                    _Stack_138 = (_union_249689)0x427fec9;
                    bVar6 = System_String__IsNullOrEmpty(_Var32.genericMethod,(MethodInfo *)0x0);
                    if ((char)bVar6 == '\0') {
                      _Stack_138 = (_union_249689)0x427fee1;
                      _Var32.genericMethod =
                           System_String__Concat_3ae5ba0(_Var32.genericMethod," ",(MethodInfo *)0x0);
                    }
                    _Var18 = (_union_249689)
                             ((_union_249689 *)((long)_Var20.genericMethod + 0x38))->genericMethod;
                    _Stack_138 = (_union_249689)0x427fef8;
                    _Var19.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
                    _Stack_138 = (_union_249689)0x427ff14;
                    System_Func_object__object____ctor();
                    _Stack_138 = (_union_249689)0x427ff29;
                    pSVar23 = System_Linq_Enumerable__Select_object__object_
                                        (_Var18.genericMethod,_Var19.genericMethod,MethodInfo_IEnumerable_1_System_String_Select_String_String);
                    _Stack_138 = (_union_249689)0x427ff3b;
                    pSVar10 = (System_String_array *)
                              System_Linq_Enumerable__ToArray_object_
                                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar23,
                                         MethodInfo_String_ToArray_String.genericMethod);
                    if (pSVar10 == (System_String_array *)0x0) goto label_0428007e;
                    if ((int)pSVar10->max_length == 1) {
                      pSVar15 = pSVar10->m_Items[0];
                    }
                    else {
                      _Stack_138 = (_union_249689)0x427ff93;
                      pSVar15 = System_String__Join(", ",pSVar10,(MethodInfo *)0x0);
                    }
                    method_01 = (System_String_o **)0x0;
                    _Stack_138 = (_union_249689)0x427ffaa;
                    _Var32.genericMethod =
                         System_String__Concat_3af7150
                                   (_Var32.genericMethod,"Refer to ",pSVar15,(MethodInfo *)0x0);
                  }
                  _Var30.genericMethod = (void *)0x0;
                  _Stack_138 = (_union_249689)0x427ffb7;
                  __this_09 = (System_String_o **)_Var32;
                  bVar6 = System_String__IsNullOrEmpty(_Var32.genericMethod,(MethodInfo *)0x0);
                  if ((char)bVar6 == '\0') {
                    _Var19 = (_union_249689)
                             ((_union_249689 *)((long)_Stack_128.genericMethod + 0x18))->genericMethod;
                    _Stack_138 = (_union_249689)0x427ffec;
                    method_01 = (System_String_o **)_Var32;
                    _Var30.genericMethod =
                         System_String__Concat_3af7470
                                   ("> - `",
                                    (System_String_o *)
                                    *(System_String_Fields *)((long)_Var20.genericMethod + 0x10),"`: ",
                                    _Var32.genericMethod,(MethodInfo *)0x0);
                    if ((System_String_Fields)_Var19.genericMethod == (System_String_Fields)0x0)
                    goto label_0428007e;
                    _Stack_138 = (_union_249689)0x427fe5d;
                    __this_09 = (System_String_o **)_Var19;
                    System_Text_StringBuilder__AppendLine_3b044f0
                              (_Var19.genericMethod,_Var30.genericMethod,(MethodInfo *)0x0);
                  }
                  unaff_R15._0_4_ = _Var28._0_4_ + 1;
                  unaff_R15._4_4_ = 0;
                  if ((int)*(uint *)((long)plVar16 + 0x18) <= (int)unaff_R15._0_4_) break;
                  _Var28 = unaff_R15;
                  if (*(uint *)((long)plVar16 + 0x18) <= (uint)unaff_R15._0_4_) goto label_04280092;
                }
              }
              _Var19 = _Stack_128;
              if (*(System_Text_StringBuilder_o **)((long)_Stack_128.genericMethod + 0x18) ==
                  (System_Text_StringBuilder_o *)0x0) goto label_0428007e;
              _Stack_138 = (_union_249689)0x4280019;
              System_Text_StringBuilder__AppendLine_3b044f0
                        (*(System_Text_StringBuilder_o **)((long)_Stack_128.genericMethod + 0x18),"> "
                         ,(MethodInfo *)0x0);
              _Var20 = _Stack_110;
              _Var18 = _Stack_118;
            }
          }
          _Var32 = _Stack_120;
          if (*(long *)((long)_Stack_120.genericMethod + 0x30) == 0) goto label_0428007e;
          __this_09 = ((_union_249689 *)(*(long *)((long)_Stack_120.genericMethod + 0x30) + 0x28))->
                      genericMethod;
          _Var30.genericMethod = (void *)0x0;
          _Stack_138 = (_union_249689)0x428003c;
          bVar6 = System_String__IsNullOrEmpty((System_String_o *)__this_09,(MethodInfo *)0x0);
          _Var28 = _Var19;
          if ((char)bVar6 == '\0') {
            plVar1 = (long *)((long)_Var32.genericMethod + 0x30);
            if (*plVar1 == 0) goto label_0428007e;
            _Var32 = (_union_249689)((_union_249689 *)((long)_Stack_128.genericMethod + 0x18))->genericMethod;
            _Stack_138 = (_union_249689)0x4280061;
            pSVar15 = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator__TrimAndCleanLines
                                (*(System_String_o **)(*plVar1 + 0x28),0,method_05);
            method_01 = &"> **Returns**: ";
            _Stack_138 = (_union_249689)0x4280075;
            _Var30.genericMethod = System_String__Concat_3ae5ba0("> **Returns**: ",pSVar15,(MethodInfo *)0x0);
            if ((System_String_Fields)_Var32.genericMethod == (System_String_Fields)0x0) goto label_0428007e;
            _Stack_138 = (_union_249689)0x427f95d;
            __this_09 = (System_String_o **)_Var32;
            System_Text_StringBuilder__AppendLine_3b044f0
                      (_Var32.genericMethod,_Var30.genericMethod,(MethodInfo *)0x0);
          }
        }
      }
      _Var19 = _Var28;
      _Var20._0_4_ = _Var20._0_4_ + 1;
      _Var20._4_4_ = 0;
      uVar33 = *(uint *)((long)_Var18.genericMethod + 0x18);
      if ((int)uVar33 <= (int)_Var20._0_4_) {
        return (System_String_o *)(ulong)uVar33;
      }
    } while (_Var20._0_4_ < uVar33);
  }
label_04280092:
  _Stack_138 = (_union_249689)0x4280097;
  auVar35 = il2cpp_runtime_helper_022b2ca0();
  uStack_168 = auVar35._0_8_;
  uVar29 = auVar35._8_8_ & 0xffffffff;
  _Stack_160 = _Var32;
  _Stack_158 = _Var20;
  _Stack_150 = (_union_249689)plVar16;
  _Stack_148 = _Var18;
  _Stack_140 = unaff_R15;
  _Stack_138 = _Var19;
  if (g_data_057adc71 == '\0') {
    uStack_170 = 0x42800cc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    uStack_170 = 0x42800d8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLType_get_Item);
    uStack_170 = 0x42800e4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    uStack_170 = 0x42800f0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_TypeReference_String);
    uStack_170 = 0x42800fc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_TypeReference_string);
    uStack_170 = 0x4280108;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    uStack_170 = 0x4280114;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetTypeReferenceStr_b__0);
    uStack_170 = 0x4280120;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass12_0);
    uStack_170 = 0x428012c;
    il2cpp_runtime_helper_023445d0(&"<a data-footnote-ref href=\"#user-content-fn-{0}\">{1}</a>");
    uStack_170 = 0x4280138;
    il2cpp_runtime_helper_023445d0(&"](../");
    uStack_170 = 0x4280144;
    il2cpp_runtime_helper_023445d0(&"<");
    uStack_170 = 0x4280150;
    il2cpp_runtime_helper_023445d0(&")");
    uStack_170 = 0x428015c;
    il2cpp_runtime_helper_023445d0(&",");
    uStack_170 = 0x4280168;
    il2cpp_runtime_helper_023445d0(&"[");
    uStack_170 = 0x4280174;
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057adc71 = '\x01';
  }
  uStack_170 = 0x428018a;
  _Var18.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass12_0);
  _Var28.genericMethod = (System_String_o *)0x0;
  uStack_170 = 0x4280197;
  _Var32.genericMethod = _Var18.genericMethod;
  System_Object___ctor(_Var18.genericMethod,(MethodInfo *)0x0);
  if (_Var18.genericMethod == (System_String_o *)0x0) {
label_04280428:
    values = (_union_249689)plVar16;
    _Var19 = _Var32;
    uStack_170 = 0x428042d;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    _Var32.genericMethod = (void *)((long)_Var18.genericMethod + 0x10);
    ((_union_249689 *)((long)_Var18.genericMethod + 0x10))->genericMethod = __this_09;
    uStack_170 = 0x42801b3;
    _Var28 = (_union_249689)__this_09;
    il2cpp_runtime_helper_022b4080();
    *(int *)&((System_String_o *)((long)_Var18.genericMethod + 0x18))->klass = auVar35._8_4_;
    if ((System_String_Fields)_Var30.genericMethod == (System_String_Fields)0x0) goto label_04280428;
    _Var32.genericMethod = (System_String_o *)0x0;
    if (*(System_String_Fields *)((long)__this_09 + 0x28) == (System_String_Fields)0x0) goto label_04280428;
    _Var20 = (_union_249689)((_union_249689 *)((long)_Var30.genericMethod + 0x10))->genericMethod;
    uStack_170 = 0x42801e3;
    _Var28 = _Var20;
    bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       *(System_String_Fields *)((long)__this_09 + 0x28),_Var20.genericMethod,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar6 == '\0') {
label_0428038f:
      pSVar11 = *(System_Collections_Generic_IEnumerable_TSource__o **)((long)_Var30.genericMethod + 0x18);
      if ((pSVar11 != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) &&
         (pSVar11[1].monitor != (void *)0x0)) {
        uStack_170 = 0x42803ae;
        pSVar22 = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_TypeReference_string);
        uStack_170 = 0x42803c8;
        System_Func_object__object____ctor();
        uStack_170 = 0x42803dd;
        pSVar23 = System_Linq_Enumerable__Select_object__object_(pSVar11,pSVar22,MethodInfo_IEnumerable_1_System_String_Select_TypeReference_String);
        uStack_170 = 0x42803f1;
        pSVar15 = System_String__Join_3af7e00
                            (",",(System_Collections_Generic_IEnumerable_string__o *)pSVar23,
                             (MethodInfo *)0x0);
        uStack_170 = 0x4280413;
        _Var20.genericMethod =
             System_String__Concat_3af7470
                       (_Var20.genericMethod,"<",pSVar15,">",(MethodInfo *)0x0);
      }
      return _Var20.genericMethod;
    }
    iVar27 = *(int *)&((System_String_o *)((long)_Var18.genericMethod + 0x18))->klass;
    if (iVar27 == 2) {
      _Var32.genericMethod = (System_String_o *)0x0;
      if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)__this_09 + 0x28) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        uStack_170 = 0x428033d;
        _Var28 = _Var20;
        pIVar21 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (*(System_Collections_Generic_Dictionary_object__object__o **)
                              ((long)__this_09 + 0x28),_Var20.genericMethod,MethodInfo_CLType_get_Item);
        _Var32.genericMethod = (System_String_o *)0x0;
        if (*(System_Collections_Generic_Dictionary_object__int__o **)((long)__this_09 + 0x30) !=
            (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
          uStack_170 = 0x428035c;
          iVar9 = System_Collections_Generic_Dictionary_object__int___get_Item
                            (*(System_Collections_Generic_Dictionary_object__int__o **)
                              ((long)__this_09 + 0x30),pIVar21,MethodInfo_Int32_get_Item);
          uStack_168 = CONCAT44(iVar9,(undefined4)uStack_168);
          uStack_170 = 0x4280375;
          pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_168 + 4);
          uStack_170 = 0x428038c;
          _Var20.genericMethod =
               System_String__Format_3af78e0("<a data-footnote-ref href=\"#user-content-fn-{0}\">{1}</a>",pIVar21,_Var20.genericMethod,(MethodInfo *)0x0);
          goto label_0428038f;
        }
      }
      goto label_04280428;
    }
    if (iVar27 != 1) goto label_0428038f;
    _Var28 = (_union_249689)0x5;
    uStack_170 = 0x4280215;
    _Var19 = TypeInfo_string;
    values.genericMethod = (void *)il2cpp_runtime_helper_022b2a40();
    _Var17 = "[";
    _Var32 = _Var19;
    if ((System_String_Fields)values.genericMethod == (System_String_Fields)0x0) goto label_04280428;
    if (*(int *)((long)values.genericMethod + 0x18) != 0) {
      _Var19.genericMethod = (void *)((long)values.genericMethod + 0x20);
      *(_union_249689 *)((long)values.genericMethod + 0x20) = "[";
      uStack_170 = 0x4280242;
      il2cpp_runtime_helper_022b4080();
      _Var28 = _Var17;
      if (1 < *(uint *)((long)values.genericMethod + 0x18)) {
        _Var19.genericMethod = (void *)((long)values.genericMethod + 0x28);
        ((_union_249689 *)((long)values.genericMethod + 0x28))->genericMethod = (void *)_Var20;
        uStack_170 = 0x428025d;
        _Var28 = _Var20;
        il2cpp_runtime_helper_022b4080();
        _Var32 = "](../";
        if (2 < *(uint *)((long)values.genericMethod + 0x18)) {
          *(_union_249689 *)((long)values.genericMethod + 0x30) = "](../";
          uStack_170 = 0x428027f;
          il2cpp_runtime_helper_022b4080((long)values.genericMethod + 0x30);
          _Var28 = _Var32;
          _Var32.genericMethod = (System_String_o *)0x0;
          plVar16 = values.genericMethod;
          if (*(System_String_Fields *)((long)__this_09 + 0x28) != (System_String_Fields)0x0) {
            uStack_170 = 0x428029e;
            _Var28.genericMethod =
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)
                            *(System_String_Fields *)((long)__this_09 + 0x28),_Var20.genericMethod,
                            MethodInfo_CLType_get_Item);
            uStack_170 = 0x42802b4;
            _Var32 = (_union_249689)__this_09;
            _Var19.genericMethod =
                 (void *)(**(code **)((long)*__this_09 + 0x178))
                                   (__this_09,_Var28.genericMethod,*(undefined8 *)((long)*__this_09 + 0x180));
            if (_Var19.genericMethod != (void *)0x0) {
              _Var28 = (_union_249689)0x3;
              uStack_170 = 0x42802d2;
              _Var32.genericMethod =
                   System_String__Substring_3af8da0
                             (_Var19.genericMethod,3,*(int *)((long)_Var19.genericMethod + 0x10) + -3,
                              (MethodInfo *)0x0);
              if (3 < *(uint *)((long)values.genericMethod + 0x18)) {
                _Var19.genericMethod = (void *)((long)values.genericMethod + 0x38);
                ((_union_249689 *)((long)values.genericMethod + 0x38))->genericMethod = (void *)_Var32;
                uStack_170 = 0x42802ed;
                il2cpp_runtime_helper_022b4080();
                _Var28 = _Var32;
                if (4 < *(uint *)((long)values.genericMethod + 0x18)) {
                  *(_union_249689 *)((long)values.genericMethod + 0x40) = ")";
                  uStack_170 = 0x4280312;
                  il2cpp_runtime_helper_022b4080((long)values.genericMethod + 0x40);
                  uStack_170 = 0x428031c;
                  _Var20.genericMethod = System_String__Concat_3af7570(values.genericMethod,(MethodInfo *)0x0)
                  ;
                  goto label_0428038f;
                }
              }
              goto label_0428042d;
            }
          }
          goto label_04280428;
        }
      }
    }
  }
label_0428042d:
  uStack_170 = 0x4280432;
  il2cpp_runtime_helper_022b2ca0();
  _Stack_198 = _Var30;
  _Stack_190 = _Var20;
  _Stack_188 = values;
  _Stack_180.genericMethod = _Var18.genericMethod;
  _Stack_178 = (_union_249689)__this_09;
  uStack_170 = uVar29;
  if (g_data_057adc73 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"---|");
    il2cpp_runtime_helper_023445d0(&"|");
    g_data_057adc73 = '\x01';
  }
  pIVar37 = (Il2CppRGCTXData *)0x0;
  auStack_1d0._0_8_ = (Il2CppRGCTXData *)0x0;
  auStack_1d0._8_8_ = (Il2CppType *)0x0;
  auStack_1d0._16_8_ = (System_Collections_Generic_List_object__o *)0x0;
  pSVar24 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(pSVar24,(MethodInfo *)0x0);
  if ((pSVar24 != (System_Text_StringBuilder_o *)0x0) &&
     (System_Text_StringBuilder__Append_3b048f0(pSVar24,0x7c,(MethodInfo *)0x0),
     _Var19.genericMethod != (void *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_1d0 + 0x18),_Var19.genericMethod,
               MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar5 = pSStack_1a8;
    pIVar37 = (Il2CppRGCTXData *)auStack_1d0._24_8_;
    _Stack_1a0 = _Var28;
    while (__this_00.fields._index = (int)in_stack_fffffffffffffe08,
          __this_00.fields._version = (int)((ulong)in_stack_fffffffffffffe08 >> 0x20),
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe00,
          __this_00.fields._current = (Il2CppObject *)pIVar37,
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe10), (char)bVar6 != '\0') {
      pSVar15 = System_String__Concat_3ae5ba0((System_String_o *)pSVar5,"|",(MethodInfo *)0x0);
      System_Text_StringBuilder__Append_3b03f90(pSVar24,pSVar15,(MethodInfo *)0x0);
    }
    __this_01.fields._index = (int)in_stack_fffffffffffffe08;
    __this_01.fields._version = (int)((ulong)in_stack_fffffffffffffe08 >> 0x20);
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe00;
    __this_01.fields._current = (Il2CppObject *)pIVar37;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe10);
    iVar27 = 0;
    System_Text_StringBuilder__AppendLine(pSVar24,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append_3b048f0(pSVar24,0x7c,(MethodInfo *)0x0);
    if (0 < *(int *)((long)_Var19.genericMethod + 0x18)) {
      do {
        System_Text_StringBuilder__Append_3b03f90(pSVar24,"---|",(MethodInfo *)0x0);
        iVar27 = iVar27 + 1;
      } while (iVar27 < *(int *)((long)_Var19.genericMethod + 0x18));
    }
    System_Text_StringBuilder__AppendLine(pSVar24,(MethodInfo *)0x0);
    if (_Stack_1a0.genericMethod != (void *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_1d0 + 0x18),
                 _Stack_1a0.genericMethod,MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
      auStack_1d0._16_8_ = pSStack_1a8;
      auStack_1d0._0_8_ = auStack_1d0._24_8_;
      auStack_1d0._8_8_ = _Stack_1b0;
      while (__this_02.fields._index = (int)in_stack_fffffffffffffe08,
            __this_02.fields._version = (int)((ulong)in_stack_fffffffffffffe08 >> 0x20),
            __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe00,
            __this_02.fields._current = (Il2CppObject *)pIVar37,
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_02,(MethodInfo_321A1D0 *)auStack_1d0), uVar36 = auStack_1d0._16_8_,
            (char)bVar6 != '\0') {
        System_Text_StringBuilder__Append_3b03f90(pSVar24,"|",(MethodInfo *)0x0);
        if ((System_Collections_Generic_List_object__o *)uVar36 ==
            (System_Collections_Generic_List_object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_042807f9;
        }
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_1d0 + 0x18),
                   (System_Collections_Generic_List_object__o *)uVar36,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
        pSVar5 = pSStack_1a8;
        pIVar37 = (Il2CppRGCTXData *)auStack_1d0._24_8_;
        while (__this_03.fields._index = (int)in_stack_fffffffffffffe08,
              __this_03.fields._version = (int)((ulong)in_stack_fffffffffffffe08 >> 0x20),
              __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe00,
              __this_03.fields._current = (Il2CppObject *)pIVar37,
              bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_03,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe10),
              (char)bVar6 != '\0') {
          pSVar15 = System_String__Concat_3ae5ba0((System_String_o *)pSVar5,"|",(MethodInfo *)0x0);
          System_Text_StringBuilder__Append_3b03f90(pSVar24,pSVar15,(MethodInfo *)0x0);
        }
        __this_04.fields._index = (int)in_stack_fffffffffffffe08;
        __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffe08 >> 0x20);
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe00;
        __this_04.fields._current = (Il2CppObject *)pIVar37;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe10);
        System_Text_StringBuilder__AppendLine(pSVar24,(MethodInfo *)0x0);
      }
      __this_05.fields._index = (int)in_stack_fffffffffffffe08;
      __this_05.fields._version = (int)((ulong)in_stack_fffffffffffffe08 >> 0x20);
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe00;
      __this_05.fields._current = (Il2CppObject *)pIVar37;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)auStack_1d0)
      ;
      goto label_0428078a;
    }
  }
label_042807f9:
  auVar34 = il2cpp_runtime_helper_022b2c90();
  uVar36 = auVar34._0_8_;
  if (auVar34._8_4_ == 1) {
    plVar16 = (long *)__cxa_begin_catch(uVar36);
    lVar4 = *plVar16;
    __cxa_end_catch();
    __this_06.fields._index = (int)uVar36;
    __this_06.fields._version = (int)((ulong)uVar36 >> 0x20);
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe00;
    __this_06.fields._current = (Il2CppObject *)pIVar37;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)auStack_1d0);
    if (lVar4 == 0) {
label_0428078a:
      pSVar15 = (System_String_o *)
                (*(pSVar24->klass->vtable)._3_ToString.methodPtr)
                          (pSVar24,(pSVar24->klass->vtable)._3_ToString.method);
      return pSVar15;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
    __this_08.fields._index = (int)uVar36;
    __this_08.fields._version = (int)((ulong)uVar36 >> 0x20);
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe00;
    __this_08.fields._current = (Il2CppObject *)pIVar37;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_08,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe10);
  }
  else {
    __this_07.fields._index = (int)uVar36;
    __this_07.fields._version = (int)((ulong)uVar36 >> 0x20);
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe00;
    __this_07.fields._current = (Il2CppObject *)pIVar37;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_07,(MethodInfo_321A1C0 *)auStack_1d0);
  }
  _Unwind_Resume(uVar36);
label_0427ebc2:
  uVar33 = (uint)unaff_R13;
  if ((int)uVar33 < _Var28._0_4_) goto label_0427ebc7;
  if ((uint)pSVar10->max_length <= uVar33) goto label_0427ef6e;
  pSStack_40 = (System_Func_TSource__bool__o *)0x427ebba;
  bVar6 = System_String__IsNullOrWhiteSpace(pSVar10->m_Items[(int)uVar33],(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') goto label_0427ebc7;
  unaff_R13 = (ulong)(uVar33 - 1);
  goto label_0427ebc2;
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator$$<AppendProperties>b__8_0
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___AppendProperties_b__8_0 (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o* __this, System_String_o* e, const MethodInfo* method);
// 0x4280ae0

System_String_o *
CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___AppendProperties_b__8_0
          (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *__this,System_String_o *e,MethodInfo *method
          )

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppClass *pIVar3;
  MethodInfo *pMVar4;
  Il2CppMethodPointer pIVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_String_array *values;
  System_String_o *pSVar8;
  System_String_array *unaff_RBX;
  System_String_array *pSVar9;
  System_String_o *unaff_R14;
  System_String_o *unaff_R15;
  
  do {
    pSVar8 = e;
    *(System_String_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(System_String_array **)((long)register0x00000020 + -0x18) = unaff_RBX;
    e = pSVar8;
    if (g_data_057adc72 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280950;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x428095c;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLType_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280968;
      il2cpp_runtime_helper_023445d0(&TypeInfo_string);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280974;
      il2cpp_runtime_helper_023445d0(&"](../");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280980;
      il2cpp_runtime_helper_023445d0(&")");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x428098c;
      il2cpp_runtime_helper_023445d0(&"[");
      g_data_057adc72 = '\x01';
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             ((System_String_array *)__this)->m_Items[1];
    pSVar9 = (System_String_array *)0x0;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_04280ad6:
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280adb;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42809b2;
      e = pSVar8;
      bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar2,(Il2CppObject *)pSVar8,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar6 == '\0') {
        return pSVar8;
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               ((System_String_array *)__this)->m_Items[1];
      pSVar9 = (System_String_array *)0x0;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04280ad6;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42809d9;
      e = (System_String_o *)
          System_Collections_Generic_Dictionary_object__object___get_Item
                    (pSVar2,(Il2CppObject *)pSVar8,MethodInfo_CLType_get_Item);
      pIVar3 = (((System_String_array *)__this)->obj).klass;
      pMVar4 = pIVar3->vtable[4].method;
      pIVar5 = pIVar3->vtable[4].methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42809ef;
      pSVar9 = (System_String_array *)__this;
      pSVar7 = (System_String_o *)(*pIVar5)(__this,e,pMVar4);
      if (pSVar7 == (System_String_o *)0x0) goto label_04280ad6;
      iVar1 = (pSVar7->fields)._stringLength;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280a0d;
      unaff_R15 = System_String__Substring_3af8da0(pSVar7,3,iVar1 + -3,(MethodInfo *)0x0);
      e = (System_String_o *)&g_data_00000005;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280a24;
      pSVar9 = TypeInfo_string;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
      pSVar7 = "[";
      if (values == (System_String_array *)0x0) goto label_04280ad6;
      __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)values;
      if ((int)values->max_length != 0) {
        pSVar9 = (System_String_array *)values->m_Items;
        values->m_Items[0] = "[";
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280a51;
        il2cpp_runtime_helper_022b4080();
        e = pSVar7;
        if (1 < (uint)values->max_length) {
          pSVar9 = (System_String_array *)(values->m_Items + 1);
          values->m_Items[1] = pSVar8;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280a6b;
          e = pSVar8;
          il2cpp_runtime_helper_022b4080();
          pSVar7 = "](../";
          if (2 < (uint)values->max_length) {
            pSVar9 = (System_String_array *)(values->m_Items + 2);
            values->m_Items[2] = "](../";
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280a88;
            il2cpp_runtime_helper_022b4080();
            e = pSVar7;
            if (3 < (uint)values->max_length) {
              pSVar9 = (System_String_array *)(values->m_Items + 3);
              values->m_Items[3] = unaff_R15;
              *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280a9e;
              e = unaff_R15;
              il2cpp_runtime_helper_022b4080();
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = ")";
                *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4280abe;
                il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                pSVar8 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                return pSVar8;
              }
            }
          }
        }
      }
    }
    *(code **)((long)register0x00000020 + -0x20) =
         CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___AppendProperties_b__8_0;
    il2cpp_runtime_helper_022b2ca0();
    unaff_RBX = (System_String_array *)__this;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)pSVar9;
    unaff_R14 = pSVar8;
  } while( true );
}


// CustomLogic.Editor.CustomLogicMarkdownDocsGenerator$$<AppendMethods>b__9_1
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___AppendMethods_b__9_1 (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o* __this, System_String_o* e, const MethodInfo* method);
// 0x4280af0

System_String_o *
CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___AppendMethods_b__9_1
          (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *__this,System_String_o *e,MethodInfo *method
          )

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppClass *pIVar3;
  MethodInfo *pMVar4;
  Il2CppMethodPointer pIVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_String_array *values;
  System_String_o *pSVar8;
  System_String_array *unaff_RBX;
  undefined1 *puVar9;
  System_String_array *pSVar10;
  System_String_o *unaff_R14;
  System_String_o *unaff_R15;
  
  puVar9 = (undefined1 *)register0x00000020;
  do {
    pSVar8 = e;
    *(System_String_o **)(puVar9 + -8) = unaff_R15;
    *(System_String_o **)(puVar9 + -0x10) = unaff_R14;
    *(System_String_array **)(puVar9 + -0x18) = unaff_RBX;
    e = pSVar8;
    if (g_data_057adc72 == '\0') {
      *(undefined8 *)(puVar9 + -0x20) = 0x4280950;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)(puVar9 + -0x20) = 0x428095c;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLType_get_Item);
      *(undefined8 *)(puVar9 + -0x20) = 0x4280968;
      il2cpp_runtime_helper_023445d0(&TypeInfo_string);
      *(undefined8 *)(puVar9 + -0x20) = 0x4280974;
      il2cpp_runtime_helper_023445d0(&"](../");
      *(undefined8 *)(puVar9 + -0x20) = 0x4280980;
      il2cpp_runtime_helper_023445d0(&")");
      *(undefined8 *)(puVar9 + -0x20) = 0x428098c;
      il2cpp_runtime_helper_023445d0(&"[");
      g_data_057adc72 = '\x01';
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             ((System_String_array *)__this)->m_Items[1];
    pSVar10 = (System_String_array *)0x0;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_04280ad6:
      *(undefined8 *)(puVar9 + -0x20) = 0x4280adb;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      *(undefined8 *)(puVar9 + -0x20) = 0x42809b2;
      e = pSVar8;
      bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar2,(Il2CppObject *)pSVar8,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar6 == '\0') {
        return pSVar8;
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               ((System_String_array *)__this)->m_Items[1];
      pSVar10 = (System_String_array *)0x0;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04280ad6;
      *(undefined8 *)(puVar9 + -0x20) = 0x42809d9;
      e = (System_String_o *)
          System_Collections_Generic_Dictionary_object__object___get_Item
                    (pSVar2,(Il2CppObject *)pSVar8,MethodInfo_CLType_get_Item);
      pIVar3 = (((System_String_array *)__this)->obj).klass;
      pMVar4 = pIVar3->vtable[4].method;
      pIVar5 = pIVar3->vtable[4].methodPtr;
      *(undefined8 *)(puVar9 + -0x20) = 0x42809ef;
      pSVar10 = (System_String_array *)__this;
      pSVar7 = (System_String_o *)(*pIVar5)(__this,e,pMVar4);
      if (pSVar7 == (System_String_o *)0x0) goto label_04280ad6;
      iVar1 = (pSVar7->fields)._stringLength;
      *(undefined8 *)(puVar9 + -0x20) = 0x4280a0d;
      unaff_R15 = System_String__Substring_3af8da0(pSVar7,3,iVar1 + -3,(MethodInfo *)0x0);
      e = (System_String_o *)&g_data_00000005;
      *(undefined8 *)(puVar9 + -0x20) = 0x4280a24;
      pSVar10 = TypeInfo_string;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
      pSVar7 = "[";
      if (values == (System_String_array *)0x0) goto label_04280ad6;
      __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)values;
      if ((int)values->max_length != 0) {
        pSVar10 = (System_String_array *)values->m_Items;
        values->m_Items[0] = "[";
        *(undefined8 *)(puVar9 + -0x20) = 0x4280a51;
        il2cpp_runtime_helper_022b4080();
        e = pSVar7;
        if (1 < (uint)values->max_length) {
          pSVar10 = (System_String_array *)(values->m_Items + 1);
          values->m_Items[1] = pSVar8;
          *(undefined8 *)(puVar9 + -0x20) = 0x4280a6b;
          e = pSVar8;
          il2cpp_runtime_helper_022b4080();
          pSVar7 = "](../";
          if (2 < (uint)values->max_length) {
            pSVar10 = (System_String_array *)(values->m_Items + 2);
            values->m_Items[2] = "](../";
            *(undefined8 *)(puVar9 + -0x20) = 0x4280a88;
            il2cpp_runtime_helper_022b4080();
            e = pSVar7;
            if (3 < (uint)values->max_length) {
              pSVar10 = (System_String_array *)(values->m_Items + 3);
              values->m_Items[3] = unaff_R15;
              *(undefined8 *)(puVar9 + -0x20) = 0x4280a9e;
              e = unaff_R15;
              il2cpp_runtime_helper_022b4080();
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = ")";
                *(undefined8 *)(puVar9 + -0x20) = 0x4280abe;
                il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                pSVar8 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                return pSVar8;
              }
            }
          }
        }
      }
    }
    *(code **)(puVar9 + -0x20) = CustomLogic_Editor_CustomLogicMarkdownDocsGenerator___AppendProperties_b__8_0
    ;
    il2cpp_runtime_helper_022b2ca0();
    unaff_RBX = (System_String_array *)__this;
    puVar9 = puVar9 + -0x18;
    __this = (CustomLogic_Editor_CustomLogicMarkdownDocsGenerator_o *)pSVar10;
    unaff_R14 = pSVar8;
  } while( true );
}


