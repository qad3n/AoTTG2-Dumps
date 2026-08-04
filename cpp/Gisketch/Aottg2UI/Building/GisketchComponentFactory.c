// Type: Gisketch.Aottg2UI.Building.GisketchComponentFactory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchComponentFactory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchComponentFactory$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x3b64140

void Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor(void)

{
  char cVar1;
  char cVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  long lVar5;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar6;
  int32_t in_ECX;
  long in_RDX;
  Il2CppObject *value;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *extraout_RDX;
  long in_RSI;
  System_String_o *value_00;
  System_Int32_array *pSVar7;
  long in_RDI;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *in_R8;
  Il2CppObject *in_R9;
  int32_t iVar8;
  int32_t in_XMM1_Da;
  int32_t in_XMM2_Da;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM4_Da;
  
  *(undefined8 *)(in_RDI + 0x10) = *(undefined8 *)(in_RDX + 8);
  *(long *)(in_RDI + 0x28) = in_RDX;
  *(long *)(in_RDI + 0x20) = in_RSI;
  il2cpp_runtime_helper_022b4080(in_RDI + 0x20);
  cVar1 = *(char *)(in_RDX + 0x52);
  *(long *)(in_RDI + 0x40) = in_RDI;
  cVar2 = il2cpp_runtime_helper_022b2a80();
  if (cVar2 == '\0') {
    if (cVar1 == '\x03') {
      *(undefined1 **)(in_RDI + 0x18) = &label_02099410;
      goto label_03b641b8;
    }
    if (in_RSI == 0) {
      lVar5 = il2cpp_runtime_helper_0231a840(0);
      value_00 = (System_String_o *)0x0;
      il2cpp_runtime_helper_022b2b10();
      if (g_data_057a9e10 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057a9e10 = '\x01';
      }
      pSVar7 = (System_Int32_array *)0x0;
      bVar3 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
      if ((value != (Il2CppObject *)0x0) && ((char)bVar3 == '\0')) {
        __this = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar5 + 0x10);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this,(Il2CppObject *)value_00,value,MethodInfo_Void_set_Item);
          return;
        }
        iVar8 = il2cpp_runtime_helper_022b2c90();
        if (g_data_057a9da4 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchGridPickerItem);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a9da4 = '\x01';
        }
        System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
        (__this->fields)._buckets = pSVar7;
        il2cpp_runtime_helper_022b4080(&__this->fields,pSVar7);
        pSVar6 = extraout_RDX;
        if (extraout_RDX == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          pSVar6 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                   il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchGridPickerItem,0);
        }
        (__this->fields)._entries = pSVar6;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._entries,pSVar6);
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar4 = System_Math__Max_3cb7c30(1,in_ECX,(MethodInfo *)0x0);
        (__this->fields)._count = iVar4;
        (__this->fields)._freeList = iVar8;
        (__this->fields)._freeCount = in_XMM1_Da;
        (__this->fields)._version = in_XMM2_Da;
        *(undefined4 *)&(__this->fields)._comparer = in_XMM3_Da;
        (__this->fields)._values = in_R8;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._values,in_R8);
        (__this->fields)._syncRoot = in_R9;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._syncRoot,in_R9);
        *(undefined4 *)((long)&(__this->fields)._comparer + 4) = in_XMM4_Da;
        *(undefined1 *)&(__this->fields)._keys = 0;
        return;
      }
      return;
    }
  }
  else if (cVar1 == '\x04') {
    *(undefined1 **)(in_RDI + 0x18) = &label_02099440;
    goto label_03b641b8;
  }
  *(undefined8 *)(in_RDI + 0x18) = *(undefined8 *)(in_RDI + 0x10);
  *(undefined8 *)(in_RDI + 0x40) = *(undefined8 *)(in_RDI + 0x20);
label_03b641b8:
  *(undefined1 **)(in_RDI + 0x38) = &label_020993a0;
  return;
}


// Gisketch.Aottg2UI.Building.GisketchComponentFactory$$Invoke
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchComponentFactory__Invoke (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b73400

bool_conflict
Gisketch_Aottg2UI_Building_GisketchComponentFactory__Invoke
          (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this,UnityEngine_GameObject_o *go,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = (*(code *)(__this->fields).invoke_impl)((__this->fields).method_code);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchComponentFactory$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Gisketch_Aottg2UI_Building_GisketchComponentFactory__BeginInvoke (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x3b73420

System_IAsyncResult_o *
Gisketch_Aottg2UI_Building_GisketchComponentFactory__BeginInvoke
          (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this,UnityEngine_GameObject_o *go,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  UnityEngine_GameObject_o *local_28;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_20;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *local_18;
  Gisketch_Aottg2UI_Building_GisketchView_o *local_10;
  undefined8 local_8;
  
  local_8 = 0;
  local_28 = go;
  local_20 = node;
  local_18 = context;
  local_10 = view;
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_0233b920(__this,&local_28,callback,object);
  return pSVar1;
}


// Gisketch.Aottg2UI.Building.GisketchComponentFactory$$EndInvoke
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchComponentFactory__EndInvoke (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x3b73460

bool_conflict
Gisketch_Aottg2UI_Building_GisketchComponentFactory__EndInvoke
          (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this,System_IAsyncResult_o *result,
          MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  bool_conflict bVar2;
  bool_conflict bVar3;
  bool_conflict extraout_EAX;
  long lVar4;
  undefined1 *puVar5;
  System_Int32_array *__this_00;
  undefined8 in_RCX;
  undefined8 extraout_RDX;
  System_String_o *value;
  System_IAsyncResult_c *__this_01;
  undefined8 in_R8;
  undefined8 in_R9;
  Il2CppObject *pIStack_48;
  undefined8 uStack_40;
  
  value = (System_String_o *)0x0;
  lVar4 = il2cpp_runtime_helper_0233bb60();
  if (lVar4 != 0) {
    puVar5 = (undefined1 *)il2cpp_runtime_helper_02305440(lVar4);
    return (bool_conflict)CONCAT71((int7)((ulong)puVar5 >> 8),*puVar5);
  }
  il2cpp_runtime_helper_022b2c90();
  uStack_40 = in_R9;
  if (g_data_057a9e11 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    g_data_057a9e11 = '\x01';
  }
  pIStack_48 = (Il2CppObject *)0x0;
  bVar3 = 0;
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    __this_01 = result[1].klass;
    if (__this_01 == (System_IAsyncResult_c *)0x0) {
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
      ((System_Collections_Generic_Dictionary_object__object__Fields *)&(__this_01->_1).name)->_buckets =
           __this_00;
      il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)&(__this_01->_1).name
                        );
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      return extraout_EAX;
    }
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                       (Il2CppObject *)value,&pIStack_48,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar2 == '\0') {
      bVar3 = 0;
    }
    else {
      if (pIStack_48 == (Il2CppObject *)0x0) goto label_03b73549;
      bVar3 = (*pIStack_48[1].monitor)
                        (pIStack_48[4].klass,extraout_RDX,in_RCX,in_R8,uStack_40,pIStack_48[2].monitor);
    }
  }
  return bVar3;
}


