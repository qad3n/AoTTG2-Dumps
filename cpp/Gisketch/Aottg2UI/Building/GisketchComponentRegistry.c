// Type: Gisketch.Aottg2UI.Building.GisketchComponentRegistry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchComponentRegistry.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$Register
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o* __this, System_String_o* type, Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* factory, const MethodInfo* method);
// 0x3b641f0

void Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
               (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this,System_String_o *type,
               Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar3;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *extraout_RDX;
  System_Int32_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *in_R8;
  Il2CppObject *in_R9;
  undefined1 unaff_R14B;
  int32_t iVar5;
  int32_t in_XMM1_Da;
  int32_t in_XMM2_Da;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM4_Da;
  
  iVar2 = (int32_t)method;
  if (g_data_057a9e10 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057a9e10 = '\x01';
  }
  pSVar4 = (System_Int32_array *)0x0;
  bVar1 = System_String__IsNullOrEmpty(type,(MethodInfo *)0x0);
  if ((factory != (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)0x0) && ((char)bVar1 == '\0')) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._factories;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_00,(Il2CppObject *)type,(Il2CppObject *)factory,MethodInfo_Void_set_Item);
      return;
    }
    iVar5 = il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9da4 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchGridPickerItem);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a9da4 = '\x01';
    }
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields)._buckets = pSVar4;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pSVar4);
    pSVar3 = extraout_RDX;
    if (extraout_RDX == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
      pSVar3 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchGridPickerItem,0)
      ;
    }
    (__this_00->fields)._entries = pSVar3;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._entries,pSVar3);
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = System_Math__Max_3cb7c30(1,iVar2,(MethodInfo *)0x0);
    (__this_00->fields)._count = iVar2;
    (__this_00->fields)._freeList = iVar5;
    (__this_00->fields)._freeCount = in_XMM1_Da;
    (__this_00->fields)._version = in_XMM2_Da;
    *(undefined4 *)&(__this_00->fields)._comparer = in_XMM3_Da;
    (__this_00->fields)._values = in_R8;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._values,in_R8);
    (__this_00->fields)._syncRoot = in_R9;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._syncRoot,in_R9);
    *(undefined4 *)((long)&(__this_00->fields)._comparer + 4) = in_XMM4_Da;
    *(undefined1 *)&(__this_00->fields)._keys = unaff_R14B;
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$TryBuild
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchComponentRegistry__TryBuild (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o* __this, System_String_o* type, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b73490

bool_conflict
Gisketch_Aottg2UI_Building_GisketchComponentRegistry__TryBuild
          (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this,System_String_o *type,
          UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  bool_conflict bVar2;
  bool_conflict bVar3;
  bool_conflict extraout_EAX;
  System_Int32_array *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Il2CppObject *pIStack_40;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGStack_38;
  
  pGStack_38 = view;
  if (g_data_057a9e11 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    g_data_057a9e11 = '\x01';
  }
  pIStack_40 = (Il2CppObject *)0x0;
  bVar3 = 0;
  bVar2 = System_String__IsNullOrEmpty(type,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._factories;
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_03b73549:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9e12 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Building_Gi);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_GisketchComponentFactory);
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9e12 = '\x01';
        iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057a9c88 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9c88 = '\x01';
        iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
                  (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
      __this_00 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_GisketchComponentFactory);
      System_Collections_Generic_Dictionary_object__object____ctor_31042a0
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,comparer,MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Building_Gi);
      (__this_01->fields)._buckets = __this_00;
      il2cpp_runtime_helper_022b4080(&__this_01->fields);
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      return extraout_EAX;
    }
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_01,(Il2CppObject *)type,&pIStack_40,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar2 == '\0') {
      bVar3 = 0;
    }
    else {
      if (pIStack_40 == (Il2CppObject *)0x0) goto label_03b73549;
      bVar3 = (*pIStack_40[1].monitor)(pIStack_40[4].klass,go,node,context,pGStack_38,pIStack_40[2].monitor);
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchComponentRegistry___ctor (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o* __this, const MethodInfo* method);
// 0x3b73550

void Gisketch_Aottg2UI_Building_GisketchComponentRegistry___ctor
               (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057a9e12 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Building_Gi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_GisketchComponentFactory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9e12 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18)
  ;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_GisketchComponentFactory);
  System_Collections_Generic_Dictionary_object__object____ctor_31042a0(__this_00,comparer,MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Building_Gi);
  (__this->fields)._factories =
       (System_Collections_Generic_Dictionary_string__GisketchComponentFactory__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchComponentRegistry___cctor (const MethodInfo* method);
// 0x3b73670

void Gisketch_Aottg2UI_Building_GisketchComponentRegistry___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  MethodInfo *in_RSI;
  
  if (g_data_057a9e13 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
    g_data_057a9e13 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentRegistry);
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry___ctor(__this,in_RSI);
  **(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_GisketchComponentRegistry + 0xb8),__this);
  return;
}


