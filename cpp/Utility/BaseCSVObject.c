// Type: Utility.BaseCSVObject
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/BaseCSVObject.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/BaseCSVObject.cs
// --------------------------------

// Utility.BaseCSVObject.<>c$$.cctor
// il2cpp: void Utility_BaseCSVObject___c___cctor (const MethodInfo* method);
// 0x182340e90

void Utility_BaseCSVObject___c___cctor(MethodInfo *method)

{
  Utility_BaseCSVObject___c_o *__this;
  
  if (Il2CppMethodInitialized_1843477e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseCSVObject_c);
    Il2CppMethodInitialized_1843477e2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_BaseCSVObject_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Utility_BaseCSVObject_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_BaseCSVObject_c->static_fields->__9,__this);
  return;
}


// Utility.BaseCSVObject.<>c$$.ctor
// il2cpp: void Utility_BaseCSVObject___c___ctor (Utility_BaseCSVObject___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_BaseCSVObject___c___ctor(Utility_BaseCSVObject___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.BaseCSVObject.<>c$$<GetFields>b__12_0
// il2cpp: int32_t Utility_BaseCSVObject___c___GetFields_b__12_0 (Utility_BaseCSVObject___c_o* __this, System_Reflection_FieldInfo_o* t, const MethodInfo* method);
// 0x182340660

int32_t Utility_BaseCSVObject___c___GetFields_b__12_0
                  (Utility_BaseCSVObject___c_o *__this,System_Reflection_FieldInfo_o *t,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  Il2CppType *pIVar3;
  bool bVar4;
  System_Type_o *pSVar5;
  System_Object_array *pSVar6;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_1843477e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Utility_OrderAttribute);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_OrderAttribute);
    Il2CppMethodInitialized_1843477e3 = '\x01';
  }
  pIVar3 = TypeRef_Utility_OrderAttribute;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar5 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar3,(MethodInfo *)0x0);
  bVar4 = Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection__HasAttribute_1b5d430
                    ((System_Reflection_MemberInfo_o *)t,pSVar5,false,in_R9);
  pIVar3 = TypeRef_Utility_OrderAttribute;
  if (!bVar4) {
    return 0;
  }
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar5 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar3,(MethodInfo *)0x0);
  if (t != (System_Reflection_FieldInfo_o *)0x0) {
    pSVar6 = (*(t->klass->vtable)._14_GetCustomAttributes.methodPtr)
                       (t,pSVar5,true,(t->klass->vtable)._14_GetCustomAttributes.method);
    if (pSVar6 != (System_Object_array *)0x0) {
      if ((int)pSVar6->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pIVar2 = pSVar6->m_Items[0];
      if (pIVar2 != (Il2CppObject *)0x0) {
        bVar1 = (TypeInfo_Utility_OrderAttribute->_2).typeHierarchyDepth;
        if ((bVar1 <= (pIVar2->klass->_2).typeHierarchyDepth) &&
           ((pIVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Utility_OrderAttribute)) {
          return *(int32_t *)&pIVar2[1].klass;
        }
        il2cpp_codegen_raise_invalid_cast_exception(pIVar2,TypeInfo_Utility_OrderAttribute);
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.BaseCSVObject$$get_Delimiter
// il2cpp: uint16_t Utility_BaseCSVObject__get_Delimiter (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x180846f90

uint16_t
Utility_BaseCSVObject__get_Delimiter(Utility_BaseCSVObject_o* __this, MethodInfo* method)

{
  return 0x2c;
}


// Utility.BaseCSVObject$$get_ParamDelimiter
// il2cpp: uint16_t Utility_BaseCSVObject__get_ParamDelimiter (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x18232bb20

uint16_t
Utility_BaseCSVObject__get_ParamDelimiter(Utility_BaseCSVObject_o* __this, MethodInfo* method)

{
  return 0x3a;
}


// Utility.BaseCSVObject$$get_StructDelimiter
// il2cpp: uint16_t Utility_BaseCSVObject__get_StructDelimiter (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x18232bb30

uint16_t
Utility_BaseCSVObject__get_StructDelimiter(Utility_BaseCSVObject_o* __this, MethodInfo* method)

{
  return 0x2f;
}


// Utility.BaseCSVObject$$get_NamedParams
// il2cpp: bool Utility_BaseCSVObject__get_NamedParams (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x180668280

bool
Utility_BaseCSVObject__get_NamedParams(Utility_BaseCSVObject_o* __this, MethodInfo* method)

{
  return false;
}


// Utility.BaseCSVObject$$Serialize
// il2cpp: System_String_o* Utility_BaseCSVObject__Serialize (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x18232b8a0

System_String_o * Utility_BaseCSVObject__Serialize(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  int32_t iVar5;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Reflection_FieldInfo_o *pSVar6;
  System_String_o *pSVar7;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  int index;
  MethodInfo *in_R8;
  uint16_t local_res8 [4];
  
  if (Il2CppMethodInitialized_1843477d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_FieldInfo_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FieldInfo_get_Item)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_1843477d9 = '\x01';
  }
  local_res8[0] = 0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  __this_01 = (System_Collections_Generic_List_object__o *)
              (*(__this->klass->vtable)._11_GetFields.methodPtr)
                        (__this,(__this->klass->vtable)._11_GetFields.method);
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    index = 0;
    while (index < (__this_01->fields)._size) {
      pSVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         (__this_01,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_FieldInfo_get_Item);
      in_R8 = (MethodInfo *)__this;
      pSVar7 = (*(__this->klass->vtable)._14_SerializeField.methodPtr)
                         (__this,pSVar6,(Il2CppObject *)__this,
                          (__this->klass->vtable)._14_SerializeField.method);
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_18232ba77;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 == (System_String_array *)0x0) goto label_18232ba77;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = pSVar7;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar7);
        index = index + 1;
      }
      else {
        in_R8 = pMVar4->klass->rgctx_data[0xe].method;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar7,
                   (MethodInfo_93DD50 *)in_R8);
        index = index + 1;
      }
    }
    iVar5 = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)(__this);
    local_res8[0] = (uint16_t)iVar5;
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    pSVar7 = System_Char__ToString(local_res8,(System_IFormatProvider_o *)0x0,in_R8);
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      value = System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_T__o *)__this_00,
                         (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      pSVar7 = System_String__Join(pSVar7,(System_String_array *)value,(MethodInfo *)0x0);
      return pSVar7;
    }
  }
label_18232ba77:
  ThrowNullReferenceException();
}


// Utility.BaseCSVObject$$Deserialize
// il2cpp: void Utility_BaseCSVObject__Deserialize (Utility_BaseCSVObject_o* __this, System_String_o* csv, const MethodInfo* method);
// 0x18232a340
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232a3ed: nop dword ptr [rax]
// asm:   0x18232a62d: nop dword ptr [rax]

void Utility_BaseCSVObject__Deserialize
               (Utility_BaseCSVObject_o *__this,System_String_o *csv,MethodInfo *method)

{
  System_Type_o *pSVar1;
  System_Collections_IList_c *pSVar2;
  bool bVar3;
  int32_t iVar4;
  System_String_array *pSVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar6;
  System_Reflection_FieldInfo_o *pSVar7;
  longlong *plVar8;
  longlong lVar9;
  Il2CppObject *pIVar10;
  Il2CppObject *obj;
  System_String_array *pSVar11;
  uint uVar12;
  
  if (Il2CppMethodInitialized_1843477da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IList);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_FieldInfo_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FieldInfo_get_Item)
    ;
    Il2CppMethodInitialized_1843477da = '\x01';
  }
  iVar4 = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)(__this);
  if (csv != (System_String_o *)0x0) {
    pSVar5 = System_String__Split(csv,(uint16_t)iVar4,0,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_List_object__o *)
                (*(__this->klass->vtable)._11_GetFields.methodPtr)
                          (__this,(__this->klass->vtable)._11_GetFields.method);
    if (pSVar5 != (System_String_array *)0x0) {
      for (uVar12 = 0; (int)uVar12 < (int)pSVar5->max_length; uVar12 = uVar12 + 1) {
        if ((uint)pSVar5->max_length <= uVar12) goto label_18232a717;
        if (pSVar5->m_Items[(int)uVar12] == (System_String_o *)0x0) goto label_18232a71d;
        pSVar6 = System_String__Trim(pSVar5->m_Items[(int)uVar12],(MethodInfo *)0x0);
        if ((uint)pSVar5->max_length <= uVar12) goto label_18232a717;
        pSVar5->m_Items[(int)uVar12] = pSVar6;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar12,pSVar6);
      }
      bVar3 = (*(__this->klass->vtable)._7_get_NamedParams.methodPtr)
                        (__this,(__this->klass->vtable)._7_get_NamedParams.method);
      if (bVar3) {
        for (uVar12 = 0; (int)uVar12 < (int)pSVar5->max_length; uVar12 = uVar12 + 1) {
          if ((uint)pSVar5->max_length <= uVar12) goto label_18232a717;
          pSVar6 = pSVar5->m_Items[(int)uVar12];
          iVar4 = (*(__this->klass->vtable)._5_get_ParamDelimiter.methodPtr)
                            (__this,(__this->klass->vtable)._5_get_ParamDelimiter.method);
          if ((pSVar6 == (System_String_o *)0x0) ||
             (pSVar11 = System_String__Split(pSVar6,(uint16_t)iVar4,0,(MethodInfo *)0x0),
             pSVar11 == (System_String_array *)0x0)) goto label_18232a71d;
          if ((int)pSVar11->max_length == 0) goto label_18232a717;
          pSVar7 = (*(__this->klass->vtable)._12_FindField.methodPtr)
                             (__this,pSVar11->m_Items[0],(__this->klass->vtable)._12_FindField.method);
          bVar3 = System_Reflection_PropertyInfo__op_Inequality
                            ((System_Reflection_PropertyInfo_o *)pSVar7,
                             (System_Reflection_PropertyInfo_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            if ((uint)pSVar11->max_length < 2) goto label_18232a717;
            (*(__this->klass->vtable)._15_DeserializeField.methodPtr)
                      (__this,pSVar7,(Il2CppObject *)__this,pSVar11->m_Items[1],
                       (__this->klass->vtable)._15_DeserializeField.method);
          }
        }
      }
      else {
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_18232a71d;
        for (uVar12 = 0; (int)uVar12 < (__this_00->fields)._size; uVar12 = uVar12 + 1) {
          pSVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             (__this_00,uVar12,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_FieldInfo_get_Item);
          bVar3 = (*(__this->klass->vtable)._13_IsList.methodPtr)
                            (__this,pSVar7,(__this->klass->vtable)._13_IsList.method);
          if (bVar3) {
            pSVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               (__this_00,uVar12,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_FieldInfo_get_Item);
            if (((pSVar7 == (System_Reflection_FieldInfo_o *)0x0) ||
                (plVar8 = (longlong *)
                          (*(pSVar7->klass->vtable)._17_unknown.methodPtr)
                                    (pSVar7,(pSVar7->klass->vtable)._17_unknown.method),
                plVar8 == (longlong *)0x0)) ||
               (lVar9 = (**(code **)(*plVar8 + 0x468))(plVar8,*(undefined8 *)(*plVar8 + 0x470)), lVar9 == 0))
            goto label_18232a71d;
            if (*(int *)(lVar9 + 0x18) == 0) goto label_18232a717;
            pSVar1 = *(System_Type_o **)(lVar9 + 0x20);
            pSVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               (__this_00,uVar12,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_FieldInfo_get_Item);
            if ((pSVar7 == (System_Reflection_FieldInfo_o *)0x0) ||
               (pIVar10 = (Il2CppObject *)
                          (*(pSVar7->klass->vtable)._26_unknown.methodPtr)
                                    (pSVar7,__this,(pSVar7->klass->vtable)._26_unknown.method),
               pSVar2 = TypeInfo_System_Collections_IList, pIVar10 == (Il2CppObject *)0x0))
            goto label_18232a71d;
            obj = il2cpp_vm_Object_IsInst(pIVar10,(Il2CppClass *)TypeInfo_System_Collections_IList);
            if (obj == (Il2CppObject *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar10,pSVar2);
            }
            InterfaceInvoker0_Invoke(4,(Il2CppClass *)TypeInfo_System_Collections_IList,obj);
            goto label_18232a5aa;
          }
          pSVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             (__this_00,uVar12,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_FieldInfo_get_Item);
          if ((uint)pSVar5->max_length <= uVar12) goto label_18232a717;
          il2cpp_runtime_helper_180030cb0(0xf,__this,pSVar7,__this,pSVar5->m_Items[(int)uVar12]);
        }
      }
      return;
    }
  }
label_18232a71d:
  ThrowNullReferenceException();
label_18232a5aa:
  if ((int)pSVar5->max_length <= (int)uVar12) {
    return;
  }
  if ((uint)pSVar5->max_length <= uVar12) goto label_18232a717;
  bVar3 = System_String__op_Inequality
                    (pSVar5->m_Items[(int)uVar12],(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                     (MethodInfo *)0x0);
  if (bVar3) {
    if ((uint)pSVar5->max_length <= uVar12) {
label_18232a717:
      ThrowIndexOutOfRangeException();
    }
    pIVar10 = (*(__this->klass->vtable)._17_DeserializeValue.methodPtr)
                        (__this,pSVar1,pSVar5->m_Items[(int)uVar12],
                         (__this->klass->vtable)._17_DeserializeValue.method);
    il2cpp_runtime_helper_180014780(2,TypeInfo_System_Collections_IList,obj,pIVar10);
  }
  uVar12 = uVar12 + 1;
  goto label_18232a5aa;
}


// Utility.BaseCSVObject$$Copy
// il2cpp: void Utility_BaseCSVObject__Copy (Utility_BaseCSVObject_o* __this, Utility_BaseCSVObject_o* other, const MethodInfo* method);
// 0x182329c70

void Utility_BaseCSVObject__Copy
               (Utility_BaseCSVObject_o *__this,Utility_BaseCSVObject_o *other,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (other != (Utility_BaseCSVObject_o *)0x0) {
    pSVar1 = (*(other->klass->vtable)._8_Serialize.methodPtr)
                       (other,(other->klass->vtable)._8_Serialize.method);
    (*(__this->klass->vtable)._9_Deserialize.methodPtr)
              (__this,pSVar1,(__this->klass->vtable)._9_Deserialize.method);
    return;
  }
  ThrowNullReferenceException();
}


// Utility.BaseCSVObject$$GetFields
// il2cpp: System_Collections_Generic_List_FieldInfo__o* Utility_BaseCSVObject__GetFields (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x18232a900

System_Collections_Generic_List_FieldInfo__o *
Utility_BaseCSVObject__GetFields(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Type__List_FieldInfo___o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppObject *object;
  bool bVar2;
  System_Type_o *__this_01;
  System_Reflection_FieldInfo_array *source;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_02;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *value;
  System_Collections_Generic_List_FieldInfo__o *pSVar3;
  
  if (Il2CppMethodInitialized_1843477db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseCSVObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_FieldInfo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_FieldInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_FieldInfo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_BaseCSVObject_c_GetFields_b__12_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseCSVObject_c);
    Il2CppMethodInitialized_1843477db = '\x01';
  }
  __this_01 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_BaseCSVObject->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_BaseCSVObject);
  }
  __this_00 = TypeInfo_Utility_BaseCSVObject->static_fields->_fields;
  if (__this_00 == (System_Collections_Generic_Dictionary_Type__List_FieldInfo___o *)0x0) goto label_18232ab5b;
  bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                     (Il2CppObject *)__this_01,
                     (MethodInfo_1455450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo_ContainsKey);
  if (!bVar2) {
    if ((TypeInfo_Utility_BaseCSVObject->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_BaseCSVObject);
    }
    if (__this_01 == (System_Type_o *)0x0) goto label_18232ab5b;
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Utility_BaseCSVObject->static_fields->_fields;
    source = System_Type__GetFields(__this_01,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_BaseCSVObject_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_BaseCSVObject_c);
    }
    __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                TypeInfo_Utility_BaseCSVObject_c->static_fields->__9__12_0;
    if (__this_02 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
      if ((TypeInfo_Utility_BaseCSVObject_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_BaseCSVObject_c);
      }
      object = (Il2CppObject *)TypeInfo_Utility_BaseCSVObject_c->static_fields->__9;
      __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_FieldInfo_int);
      System_Func_object__int____ctor
                (__this_02,object,(intptr_t)MethodInfo_Utility_BaseCSVObject_c_GetFields_b__12_0,
                 (MethodInfo_AF4D50 *)0x0);
      TypeInfo_Utility_BaseCSVObject_c->static_fields->__9__12_0 = (System_Func_FieldInfo__int__o *)__this_02;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_BaseCSVObject_c->static_fields->__9__12_0,__this_02);
    }
    source_00 = System_Linq_Enumerable__OrderBy_object__int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TKey__o *)__this_02,
                           (MethodInfo_6C12E0 *)MethodInfo_System_Linq_Enumerable_OrderBy_FieldInfo_int);
    value = System_Linq_Enumerable__ToList_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                       (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_FieldInfo);
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18232ab5b;
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,(Il2CppObject *)__this_01,(Il2CppObject *)value,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo_Add)
    ;
  }
  if ((TypeInfo_Utility_BaseCSVObject->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_BaseCSVObject);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Utility_BaseCSVObject->static_fields->_fields;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar3 = (System_Collections_Generic_List_FieldInfo__o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)__this_01,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo_get_Item);
    return pSVar3;
  }
label_18232ab5b:
  ThrowNullReferenceException();
}


// Utility.BaseCSVObject$$FindField
// il2cpp: System_Reflection_FieldInfo_o* Utility_BaseCSVObject__FindField (Utility_BaseCSVObject_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18232a730
// eh: try 0x18232a840..0x18232a8f4 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232a8bb: mov rdx, qword ptr [rip + 0x1d549c6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_FieldInfo_Dispose
// asm:   0x18232a8c2: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18232a8c7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18232a8cc: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18232a8d1: test rcx, rcx
// asm:   0x18232a8d4: jne 0x18232a8f4
// asm:   0x18232a8f4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_Reflection_FieldInfo_o *
Utility_BaseCSVObject__FindField(Utility_BaseCSVObject_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Type_o *key;
  System_Collections_Generic_List_T__o *__this_01;
  System_String_o *a;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843477dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseCSVObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FieldInfo_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FieldInfo_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FieldInfo_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_FieldInfo_GetEnumerator);
    Il2CppMethodInitialized_1843477dc = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Utility_BaseCSVObject->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_BaseCSVObject);
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              TypeInfo_Utility_BaseCSVObject->static_fields->_fields;
  key = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_01 = (System_Collections_Generic_List_T__o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_00,(Il2CppObject *)key,
                           (MethodInfo_147A5B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo_get_Item);
    if (__this_01 != (System_Collections_Generic_List_T__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this_01,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_FieldInfo_GetEnumerator);
      local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      local_28.fields._index = local_40._8_4_;
      local_28.fields._version = local_40._12_4_;
      local_28.fields._current = local_30;
      local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_40._8_8_ = &local_28;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_28,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_FieldInfo_MoveNext);
        pIVar1 = local_28.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_List_Enumerator_FieldInfo_Dispose);
          return (System_Reflection_FieldInfo_o *)0x0;
        }
        if (local_28.fields._current == (Il2CppObject *)0x0) break;
        a = (System_String_o *)
            (*(((System_Reflection_FieldInfo_VTable *)(local_28.fields._current)->klass->vtable)->_8_unknown).
              methodPtr)(local_28.fields._current,
                         (((System_Reflection_FieldInfo_VTable *)(local_28.fields._current)->klass->vtable)->
                         _8_unknown).method);
        bVar2 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
        if (bVar2) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_List_Enumerator_FieldInfo_Dispose);
          return (System_Reflection_FieldInfo_o *)pIVar1;
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Utility.BaseCSVObject$$IsList
// il2cpp: bool Utility_BaseCSVObject__IsList (Utility_BaseCSVObject_o* __this, System_Reflection_FieldInfo_o* field, const MethodInfo* method);
// 0x18232ab70

bool Utility_BaseCSVObject__IsList
               (Utility_BaseCSVObject_o *__this,System_Reflection_FieldInfo_o *field,MethodInfo *method)

{
  Il2CppType *handle;
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *left;
  System_Type_o *right;
  
  if (Il2CppMethodInitialized_1843477dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_System_Collections_Generic_List_T);
    Il2CppMethodInitialized_1843477dd = '\x01';
  }
  if (field != (System_Reflection_FieldInfo_o *)0x0) {
    plVar3 = (longlong *)
             (*(field->klass->vtable)._17_unknown.methodPtr)(field,(field->klass->vtable)._17_unknown.method);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
      if (cVar1 == '\0') {
        return false;
      }
      plVar3 = (longlong *)
               (*(field->klass->vtable)._17_unknown.methodPtr)
                         (field,(field->klass->vtable)._17_unknown.method);
      if (plVar3 != (longlong *)0x0) {
        left = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)
               (**(code **)(*plVar3 + 0x448))(plVar3);
        handle = TypeRef_System_Collections_Generic_List_T;
        if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354ea0);
        }
        right = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
        bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                          (left,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)right,
                           (MethodInfo_841F20 *)0x0);
        return bVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.BaseCSVObject$$SerializeField
// il2cpp: System_String_o* Utility_BaseCSVObject__SerializeField (Utility_BaseCSVObject_o* __this, System_Reflection_FieldInfo_o* info, Il2CppObject* instance, const MethodInfo* method);
// 0x18232ac50
// eh: try 0x18232af10..0x18232b16c -> pad 0x1833209c0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232af0e: nop 
// asm:   0x18232b080: lea rcx, [rsp + 0x58]
// asm:   0x18232b085: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x18232b08a: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x18232b08f: test rcx, rcx
// asm:   0x18232b092: jne 0x18232b16c
// asm:   0x18232b098: mov r14, qword ptr [rsp + 0xa0]
// asm:   0x18232b0a0: mov r12, qword ptr [rsp + 0x30]
// asm:   0x18232b0a5: mov rdi, qword ptr [rsp + 0x40]
// asm:   0x18232b0aa: mov r15, qword ptr [rsp + 0x48]
// asm:   0x18232b16c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833209c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833209c5: push rbp
// asm:   0x1833209c6: sub rsp, 0x20
// asm:   0x1833209ca: mov rbp, rdx
// asm:   0x1833209cd: mov rax, qword ptr [rbp + 0x68]
// asm:   0x1833209d1: mov rcx, qword ptr [rax]
// asm:   0x1833209d4: mov qword ptr [rbp + 0x50], rcx
// asm:   0x1833209d8: movabs rax, 0
// asm:   0x1833209e2: add rsp, 0x20
// asm:   0x1833209e6: pop rbp
// asm:   0x1833209e7: ret 

System_String_o *
Utility_BaseCSVObject__SerializeField
          (Utility_BaseCSVObject_o *__this,System_Reflection_FieldInfo_o *info,Il2CppObject *instance,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppMethodPointer pIVar3;
  System_String_array *pSVar4;
  System_Collections_IList_c *pSVar5;
  System_Collections_IList_c *pSVar6;
  bool bVar7;
  ushort uVar8;
  int32_t iVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  System_Type_o *pSVar12;
  Il2CppObject *pIVar13;
  System_Collections_Generic_List_string__o *__this_00;
  longlong *plVar14;
  longlong lVar15;
  Il2CppObject *pIVar16;
  void *pvVar17;
  VirtualInvokeData *pVVar18;
  MethodInfo *pMVar19;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  Utility_BaseCSVObject_c *method_00;
  MethodInfo *method_01;
  uint16_t local_78 [4];
  MethodInfo *local_70;
  System_String_o *local_68;
  MethodInfo *local_60;
  System_Collections_Generic_List_string__o *local_58;
  Utility_BaseCSVObject_o *local_50;
  undefined8 local_48;
  MethodInfo **local_40;
  MethodInfo **local_38;
  
  if (Il2CppMethodInitialized_1843477de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IList);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_1843477de = '\x01';
  }
  local_78[0] = 0;
  local_70 = (MethodInfo *)0x0;
  local_60 = (MethodInfo *)0x0;
  pSVar10 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  bVar7 = (*(__this->klass->vtable)._7_get_NamedParams.methodPtr)
                    (__this,(__this->klass->vtable)._7_get_NamedParams.method);
  if (bVar7) {
    if (info == (System_Reflection_FieldInfo_o *)0x0) goto label_18232b145;
    pSVar10 = (System_String_o *)
              (*(info->klass->vtable)._8_unknown.methodPtr)(info,(info->klass->vtable)._8_unknown.method);
    method_00 = __this->klass;
    iVar9 = (*(method_00->vtable)._5_get_ParamDelimiter.methodPtr)
                      (__this,(method_00->vtable)._5_get_ParamDelimiter.method);
    local_78[0] = (uint16_t)iVar9;
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    pSVar11 = System_Char__ToString(local_78,(System_IFormatProvider_o *)0x0,(MethodInfo *)method_00);
    pSVar10 = System_String__Concat_1969e50(pSVar10,pSVar11,(MethodInfo *)0x0);
  }
  local_68 = pSVar10;
  bVar7 = (*(__this->klass->vtable)._13_IsList.methodPtr)
                    (__this,info,(__this->klass->vtable)._13_IsList.method);
  if (bVar7) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if (((info != (System_Reflection_FieldInfo_o *)0x0) &&
        (plVar14 = (longlong *)
                   (*(info->klass->vtable)._17_unknown.methodPtr)
                             (info,(info->klass->vtable)._17_unknown.method), plVar14 != (longlong *)0x0)) &&
       (lVar15 = (**(code **)(*plVar14 + 0x468))(plVar14,*(undefined8 *)(*plVar14 + 0x470)), lVar15 != 0)) {
      if (*(int *)(lVar15 + 0x18) == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSVar12 = *(System_Type_o **)(lVar15 + 0x20);
      pIVar13 = (Il2CppObject *)
                (*(info->klass->vtable)._26_unknown.methodPtr)
                          (info,instance,(info->klass->vtable)._26_unknown.method);
      pSVar5 = TypeInfo_System_Collections_IList;
      if (pIVar13 != (Il2CppObject *)0x0) {
        pIVar16 = il2cpp_vm_Object_IsInst(pIVar13,(Il2CppClass *)TypeInfo_System_Collections_IList);
        pSVar6 = TypeInfo_System_Collections_IList;
        if (pIVar16 == (Il2CppObject *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar13,pSVar5);
        }
        local_50 = __this;
        pIVar16 = il2cpp_vm_Object_IsInst(pIVar13,(Il2CppClass *)TypeInfo_System_Collections_IList);
        if (pIVar16 == (Il2CppObject *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar13,pSVar6);
        }
        local_58 = __this_00;
        local_70 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,pIVar16);
        local_48 = 0;
        local_40 = &local_70;
        local_38 = &local_60;
        while( true ) {
          if (local_70 == (MethodInfo *)0x0) {
            ThrowNullReferenceException();
          }
          method_01 = local_70;
          pvVar17 = InterfaceInvoker0_Invoke
                              (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,
                               (Il2CppObject *)local_70);
          pMVar19 = local_70;
          if ((char)pvVar17 == '\0') break;
          if (local_70 == (MethodInfo *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar3 = local_70->methodPointer;
          uVar8 = 0;
          if (*(ushort *)(pIVar3 + 0x12e) != 0) {
            do {
              if (*(System_Collections_IEnumerator_c **)
                   (*(longlong *)(pIVar3 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                  TypeInfo_System_Collections_IEnumerator) {
                pVVar18 = (VirtualInvokeData *)
                          (pIVar3 + (longlong)
                                    (*(int *)(*(longlong *)(pIVar3 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 1)
                                    * 0x10 + 0x138);
                goto label_18232af99;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(ushort *)(pIVar3 + 0x12e));
          }
          pVVar18 = GetInterfaceInvokeDataFromVTableSlowPath
                              ((Il2CppObject *)local_70,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator
                               ,1);
label_18232af99:
          pIVar13 = (*pVVar18->methodPtr)((Il2CppObject *)pMVar19,pVVar18->method);
          pSVar11 = (*(__this->klass->vtable)._16_SerializeValue.methodPtr)
                              (__this,pSVar12,pIVar13,(__this->klass->vtable)._16_SerializeValue.method);
          pMVar19 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_00->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) {
            ThrowNullReferenceException();
          }
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            if ((uint)pSVar4->max_length <= uVar2) {
              ThrowIndexOutOfRangeException();
            }
            pSVar4->m_Items[(int)uVar2] = pSVar11;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pSVar11);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar11,
                       (MethodInfo_93DD50 *)pMVar19->klass->rgctx_data[0xe].method);
          }
        }
        pMVar19 = (MethodInfo *)
                  il2cpp_vm_Object_IsInst((Il2CppObject *)local_70,(Il2CppClass *)TypeInfo_System_IDisposable)
        ;
        local_60 = pMVar19;
        if (pMVar19 != (MethodInfo *)0x0) {
          InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)pMVar19);
          method_01 = pMVar19;
        }
        if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
          if ((__this_00->fields)._size < 1) {
            return pSVar10;
          }
          iVar9 = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)(__this);
          local_78[0] = (uint16_t)iVar9;
          if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354e48);
          }
          pSVar11 = System_Char__ToString(local_78,(System_IFormatProvider_o *)0x0,method_01);
          value = System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_T__o *)__this_00,
                             (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
          pSVar11 = System_String__Join(pSVar11,(System_String_array *)value,(MethodInfo *)0x0);
          goto label_18232b117;
        }
      }
    }
  }
  else if (info != (System_Reflection_FieldInfo_o *)0x0) {
    pSVar12 = (System_Type_o *)
              (*(info->klass->vtable)._17_unknown.methodPtr)(info,(info->klass->vtable)._17_unknown.method);
    pIVar13 = (Il2CppObject *)
              (*(info->klass->vtable)._26_unknown.methodPtr)
                        (info,instance,(info->klass->vtable)._26_unknown.method);
    pSVar11 = (*(__this->klass->vtable)._16_SerializeValue.methodPtr)
                        (__this,pSVar12,pIVar13,(__this->klass->vtable)._16_SerializeValue.method);
label_18232b117:
    pSVar10 = System_String__Concat_1969e50(pSVar10,pSVar11,(MethodInfo *)0x0);
    return pSVar10;
  }
label_18232b145:
  ThrowNullReferenceException();
}


// Utility.BaseCSVObject$$DeserializeField
// il2cpp: void Utility_BaseCSVObject__DeserializeField (Utility_BaseCSVObject_o* __this, System_Reflection_FieldInfo_o* info, Il2CppObject* instance, System_String_o* value, const MethodInfo* method);
// 0x182329cc0

void Utility_BaseCSVObject__DeserializeField
               (Utility_BaseCSVObject_o *__this,System_Reflection_FieldInfo_o *info,Il2CppObject *instance,
               System_String_o *value,MethodInfo *method)

{
  System_Type_o *pSVar1;
  Il2CppObject *value_00;
  
  if (info != (System_Reflection_FieldInfo_o *)0x0) {
    pSVar1 = (System_Type_o *)
             (*(info->klass->vtable)._17_unknown.methodPtr)(info,(info->klass->vtable)._17_unknown.method);
    value_00 = (*(__this->klass->vtable)._17_DeserializeValue.methodPtr)
                         (__this,pSVar1,value,(__this->klass->vtable)._17_DeserializeValue.method);
    System_Reflection_FieldInfo__SetValue(info,instance,value_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Utility.BaseCSVObject$$SerializeValue
// il2cpp: System_String_o* Utility_BaseCSVObject__SerializeValue (Utility_BaseCSVObject_o* __this, System_Type_o* t, Il2CppObject* value, const MethodInfo* method);
// 0x18232b190

System_String_o *
Utility_BaseCSVObject__SerializeValue
          (Utility_BaseCSVObject_o *__this,System_Type_o *t,Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  Il2CppType *pIVar2;
  longlong lVar3;
  bool bVar4;
  int32_t iVar5;
  System_Type_o *pSVar6;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  undefined8 *puVar10;
  System_String_o **targetAddress;
  MethodInfo *pMVar11;
  Il2CppClass *pIVar12;
  uint16_t local_res10 [12];
  int32_t local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  float local_30 [4];
  
  if (Il2CppMethodInitialized_1843477df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Utility_BaseCSVObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseCSVObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_1843477df = '\x01';
  }
  pIVar12 = g_data_184354e50;
  local_48[0] = 0;
  local_38 = 0;
  local_30[0] = 0.0;
  local_res10[0] = 0;
  local_40 = 0;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar6 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)&(pIVar12->_1).byval_arg,(MethodInfo *)0x0);
  bVar4 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)t,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar6,(MethodInfo_841F20 *)0x0
                    );
  lVar3 = g_data_184354e08;
  if (bVar4) {
    pSVar7 = (System_String_o *)0x0;
    if (value != (Il2CppObject *)0x0) {
      if (value->klass == g_data_184354e50) {
        pSVar7 = (System_String_o *)value;
      }
      if (pSVar7 == (System_String_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(value);
      }
    }
    return pSVar7;
  }
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)(lVar3 + 0x20),(MethodInfo *)0x0);
  bVar4 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)t,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar6,(MethodInfo_841F20 *)0x0
                    );
  lVar3 = g_data_184354e38;
  if (!bVar4) {
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)(lVar3 + 0x20),(MethodInfo *)0x0);
    bVar4 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                      ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)t,
                       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar6,
                       (MethodInfo_841F20 *)0x0);
    lVar3 = g_data_184354de8;
    if (!bVar4) {
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)(lVar3 + 0x20),(MethodInfo *)0x0);
      bVar4 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                        ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)t,
                         (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar6,
                         (MethodInfo_841F20 *)0x0);
      pIVar2 = TypeRef_Utility_BaseCSVObject;
      if (bVar4) {
        if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
        }
        local_48[0] = System_Convert__ToInt32(value,(MethodInfo *)0x0);
        pSVar7 = System_Int32__ToString(local_48,(MethodInfo *)0x0);
        return pSVar7;
      }
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
      if (pSVar6 != (System_Type_o *)0x0) {
        bVar4 = (*(pSVar6->klass->vtable)._22_IsAssignableFrom.methodPtr)
                          (pSVar6,t,(pSVar6->klass->vtable)._22_IsAssignableFrom.method);
        pIVar2 = TypeRef_UnityEngine_Vector3;
        if (bVar4) {
          if (value != (Il2CppObject *)0x0) {
            pIVar12 = value->klass;
            bVar1 = (TypeInfo_Utility_BaseCSVObject->_2).typeHierarchyDepth;
            if ((bVar1 <= (pIVar12->_2).typeHierarchyDepth) &&
               ((pIVar12->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_Utility_BaseCSVObject)) {
              pSVar7 = (System_String_o *)(*pIVar12->vtable[8].methodPtr)(value,pIVar12->vtable[8].method);
              return pSVar7;
            }
            il2cpp_codegen_raise_invalid_cast_exception(value);
          }
        }
        else {
          if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354ea0);
          }
          pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
          pMVar11 = (MethodInfo *)0x0;
          bVar4 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                            ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)t,
                             (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar6,
                             (MethodInfo_841F20 *)0x0);
          pIVar2 = TypeRef_UnityEngine_Vector2;
          if (bVar4) {
            if (value != (Il2CppObject *)0x0) {
              if ((value->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class) {
                il2cpp_codegen_raise_invalid_cast_exception();
              }
              puVar10 = il2cpp_object_unbox(value);
              local_38 = *puVar10;
              local_30[0] = *(float *)(puVar10 + 1);
              iVar5 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                                (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
              local_res10[0] = (uint16_t)iVar5;
              if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_184354e48);
              }
              pSVar7 = System_Char__ToString(local_res10,(System_IFormatProvider_o *)0x0,pMVar11);
              pSVar8 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
              pSVar9 = System_Single__ToString((float *)&local_38,(MethodInfo *)0x0);
              if (pSVar8 != (System_String_array *)0x0) {
                if ((int)pSVar8->max_length != 0) {
                  pSVar8->m_Items[0] = pSVar9;
                  Il2CppCodeGenWriteBarrier(pSVar8->m_Items,pSVar9);
                  pSVar9 = System_Single__ToString((float *)((longlong)&local_38 + 4),(MethodInfo *)0x0);
                  if (1 < (uint)pSVar8->max_length) {
                    pSVar8->m_Items[1] = pSVar9;
                    Il2CppCodeGenWriteBarrier(pSVar8->m_Items + 1,pSVar9);
                    pSVar9 = System_Single__ToString(local_30,(MethodInfo *)0x0);
                    if (2 < (uint)pSVar8->max_length) {
                      pSVar8->m_Items[2] = pSVar9;
                      targetAddress = pSVar8->m_Items + 2;
                      goto label_18232b76c;
                    }
                  }
                }
                goto label_18232b878;
              }
            }
          }
          else {
            if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_184354ea0);
            }
            pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
            pMVar11 = (MethodInfo *)0x0;
            bVar4 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                              ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)t,
                               (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar6,
                               (MethodInfo_841F20 *)0x0);
            pIVar2 = TypeRef_Utility_Color255;
            if (bVar4) {
              if (value != (Il2CppObject *)0x0) {
                if ((value->klass->_1).element_class != (TypeInfo_UnityEngine_Vector2->_1).element_class) {
                  il2cpp_codegen_raise_invalid_cast_exception();
                }
                puVar10 = il2cpp_object_unbox(value);
                local_40 = *puVar10;
                iVar5 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                                  (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
                local_res10[0] = (uint16_t)iVar5;
                if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init(g_data_184354e48);
                }
                pSVar7 = System_Char__ToString(local_res10,(System_IFormatProvider_o *)0x0,pMVar11);
                pSVar8 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                pSVar9 = System_Single__ToString((float *)&local_40,(MethodInfo *)0x0);
                if (pSVar8 != (System_String_array *)0x0) {
                  if ((int)pSVar8->max_length != 0) {
                    pSVar8->m_Items[0] = pSVar9;
                    Il2CppCodeGenWriteBarrier(pSVar8->m_Items,pSVar9);
                    pSVar9 = System_Single__ToString((float *)((longlong)&local_40 + 4),(MethodInfo *)0x0);
                    if (1 < (uint)pSVar8->max_length) {
                      pSVar8->m_Items[1] = pSVar9;
                      targetAddress = pSVar8->m_Items + 1;
label_18232b76c:
                      Il2CppCodeGenWriteBarrier(targetAddress,pSVar9);
                      pSVar7 = System_String__Join(pSVar7,pSVar8,(MethodInfo *)0x0);
                      return pSVar7;
                    }
                  }
                  goto label_18232b878;
                }
              }
            }
            else {
              if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_184354ea0);
              }
              pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
              pIVar12 = (Il2CppClass *)0x0;
              bVar4 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                                ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)t,
                                 (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar6,
                                 (MethodInfo_841F20 *)0x0);
              if (!bVar4) {
                return *(System_String_o **)g_data_184354e50->static_fields;
              }
              if (value != (Il2CppObject *)0x0) {
                pIVar12 = value->klass;
                bVar1 = (TypeInfo_Utility_Color255->_2).typeHierarchyDepth;
                if (((pIVar12->_2).typeHierarchyDepth < bVar1) ||
                   ((pIVar12->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_Utility_Color255)) {
                  il2cpp_codegen_raise_invalid_cast_exception(value);
                }
              }
              iVar5 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                                (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
              local_res10[0] = (uint16_t)iVar5;
              if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_184354e48);
              }
              pSVar7 = System_Char__ToString
                                 (local_res10,(System_IFormatProvider_o *)0x0,(MethodInfo *)pIVar12);
              pSVar8 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
              if ((value != (Il2CppObject *)0x0) &&
                 (pSVar9 = System_Int32__ToString((int32_t *)(value + 1),(MethodInfo *)0x0),
                 pSVar8 != (System_String_array *)0x0)) {
                if ((int)pSVar8->max_length != 0) {
                  pSVar8->m_Items[0] = pSVar9;
                  Il2CppCodeGenWriteBarrier(pSVar8->m_Items,pSVar9);
                  pSVar9 = System_Int32__ToString
                                     ((int32_t *)((longlong)&value[1].klass + 4),(MethodInfo *)0x0);
                  if (1 < (uint)pSVar8->max_length) {
                    pSVar8->m_Items[1] = pSVar9;
                    Il2CppCodeGenWriteBarrier(pSVar8->m_Items + 1,pSVar9);
                    pSVar9 = System_Int32__ToString((int32_t *)&value[1].monitor,(MethodInfo *)0x0);
                    if (2 < (uint)pSVar8->max_length) {
                      pSVar8->m_Items[2] = pSVar9;
                      Il2CppCodeGenWriteBarrier(pSVar8->m_Items + 2,pSVar9);
                      pSVar9 = System_Int32__ToString
                                         ((int32_t *)((longlong)&value[1].monitor + 4),(MethodInfo *)0x0);
                      if (3 < (uint)pSVar8->max_length) {
                        pSVar8->m_Items[3] = pSVar9;
                        Il2CppCodeGenWriteBarrier(pSVar8->m_Items + 3,pSVar9);
                        pSVar7 = System_String__Join(pSVar7,pSVar8,(MethodInfo *)0x0);
                        return pSVar7;
                      }
                    }
                  }
                }
label_18232b878:
                ThrowIndexOutOfRangeException();
              }
            }
          }
        }
      }
      goto label_18232b88d;
    }
  }
  if (value != (Il2CppObject *)0x0) {
    pSVar7 = (System_String_o *)(*value->klass->vtable[3].methodPtr)(value,value->klass->vtable[3].method);
    return pSVar7;
  }
label_18232b88d:
  ThrowNullReferenceException();
}


// Utility.BaseCSVObject$$DeserializeValue
// il2cpp: Il2CppObject* Utility_BaseCSVObject__DeserializeValue (Utility_BaseCSVObject_o* __this, System_Type_o* t, System_String_o* value, const MethodInfo* method);
// 0x182329d30
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232a220: mov rax, r8
// asm:   0x18232a223: mov rdx, rdi
// asm:   0x18232a226: mov r8, qword ptr [r8 + 0x1d0]
// asm:   0x18232a22d: mov rcx, rbx
// asm:   0x18232a230: call qword ptr [rax + 0x1c8]  ; vtable slot 9
// asm:   0x18232a236: mov rax, rbx
// asm:   0x18232a239: jmp 0x18232a1c1

Il2CppObject *
Utility_BaseCSVObject__DeserializeValue
          (Utility_BaseCSVObject_o *__this,System_Type_o *t,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppType *pIVar3;
  longlong lVar4;
  bool bVar5;
  int32_t iVar6;
  int32_t iVar7;
  int32_t iVar8;
  int32_t iVar9;
  System_Type_o *pSVar10;
  System_String_array *pSVar11;
  Utility_Color255_o *__this_00;
  Il2CppObject *pIVar12;
  float fVar13;
  float local_res10;
  float local_res14;
  float local_48;
  float local_44;
  float local_40;
  
  if (Il2CppMethodInitialized_1843477e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Utility_BaseCSVObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseCSVObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_1843477e0 = '\x01';
  }
  lVar4 = g_data_184354e50;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar10 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)(lVar4 + 0x20),(MethodInfo *)0x0);
  bVar5 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)t,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar10,
                     (MethodInfo_841F20 *)0x0);
  pIVar2 = g_data_184354e08;
  if (bVar5) {
    return (Il2CppObject *)value;
  }
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar10 = System_Type__GetTypeFromHandle
                      ((System_RuntimeTypeHandle_o)&(pIVar2->_1).byval_arg,(MethodInfo *)0x0);
  bVar5 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)t,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar10,
                     (MethodInfo_841F20 *)0x0);
  pIVar2 = g_data_184354e38;
  if (bVar5) {
    local_res10 = (float)System_Int32__Parse(value,(MethodInfo *)0x0);
    pIVar12 = il2cpp_value_box(g_data_184354e08,&local_res10);
    return pIVar12;
  }
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar10 = System_Type__GetTypeFromHandle
                      ((System_RuntimeTypeHandle_o)&(pIVar2->_1).byval_arg,(MethodInfo *)0x0);
  bVar5 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)t,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar10,
                     (MethodInfo_841F20 *)0x0);
  pIVar2 = g_data_184354de8;
  if (bVar5) {
    local_res10 = System_Single__Parse(value,(MethodInfo *)0x0);
    pIVar12 = il2cpp_value_box(g_data_184354e38,&local_res10);
    return pIVar12;
  }
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar10 = System_Type__GetTypeFromHandle
                      ((System_RuntimeTypeHandle_o)&(pIVar2->_1).byval_arg,(MethodInfo *)0x0);
  bVar5 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)t,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar10,
                     (MethodInfo_841F20 *)0x0);
  pIVar3 = TypeRef_Utility_BaseCSVObject;
  if (bVar5) {
    iVar6 = System_Int32__Parse(value,(MethodInfo *)0x0);
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    bVar5 = Cysharp_Threading_Tasks_UniTaskStatusExtensions__IsCompleted(iVar6,(MethodInfo *)0x0);
    local_res10 = (float)CONCAT31(local_res10._1_3_,bVar5);
    pIVar12 = il2cpp_value_box(g_data_184354de8,&local_res10);
    return pIVar12;
  }
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar10 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar3,(MethodInfo *)0x0);
  if (pSVar10 != (System_Type_o *)0x0) {
    bVar5 = (*(pSVar10->klass->vtable)._22_IsAssignableFrom.methodPtr)
                      (pSVar10,t,(pSVar10->klass->vtable)._22_IsAssignableFrom.method);
    pIVar3 = TypeRef_UnityEngine_Vector3;
    if (bVar5) {
      pIVar12 = System_Activator__CreateInstance_1b5a950(t,(MethodInfo *)0x0);
      if (pIVar12 != (Il2CppObject *)0x0) {
        pIVar2 = pIVar12->klass;
        bVar1 = (TypeInfo_Utility_BaseCSVObject->_2).typeHierarchyDepth;
        if ((bVar1 <= (pIVar2->_2).typeHierarchyDepth) &&
           ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Utility_BaseCSVObject)
           ) {
          (*pIVar2->vtable[9].methodPtr)(pIVar12,value,pIVar2->vtable[9].method);
          return pIVar12;
        }
        il2cpp_codegen_raise_invalid_cast_exception(pIVar12,TypeInfo_Utility_BaseCSVObject);
      }
    }
    else {
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      pSVar10 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar3,(MethodInfo *)0x0);
      bVar5 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                        ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)t,
                         (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar10,
                         (MethodInfo_841F20 *)0x0);
      pIVar3 = TypeRef_UnityEngine_Vector2;
      if (bVar5) {
        iVar6 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                          (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
        if ((value == (System_String_o *)0x0) ||
           (pSVar11 = System_String__Split(value,(uint16_t)iVar6,0,(MethodInfo *)0x0),
           pSVar11 == (System_String_array *)0x0)) {
          ThrowNullReferenceException();
        }
        if ((((int)pSVar11->max_length != 0) &&
            (fVar13 = System_Single__Parse(pSVar11->m_Items[0],(MethodInfo *)0x0),
            1 < (uint)pSVar11->max_length)) &&
           (local_44 = System_Single__Parse(pSVar11->m_Items[1],(MethodInfo *)0x0),
           2 < (uint)pSVar11->max_length)) {
          local_40 = System_Single__Parse(pSVar11->m_Items[2],(MethodInfo *)0x0);
          local_48 = fVar13;
          pIVar12 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_48);
          return pIVar12;
        }
        ThrowIndexOutOfRangeException();
      }
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      pSVar10 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar3,(MethodInfo *)0x0);
      bVar5 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                        ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)t,
                         (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar10,
                         (MethodInfo_841F20 *)0x0);
      pIVar3 = TypeRef_Utility_Color255;
      if (bVar5) {
        iVar6 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                          (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
        if ((value == (System_String_o *)0x0) ||
           (pSVar11 = System_String__Split(value,(uint16_t)iVar6,0,(MethodInfo *)0x0),
           pSVar11 == (System_String_array *)0x0)) {
          ThrowNullReferenceException();
        }
        if (((int)pSVar11->max_length != 0) &&
           (local_res10 = System_Single__Parse(pSVar11->m_Items[0],(MethodInfo *)0x0),
           1 < (uint)pSVar11->max_length)) {
          local_res14 = System_Single__Parse(pSVar11->m_Items[1],(MethodInfo *)0x0);
          pIVar12 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector2,&local_res10);
          return pIVar12;
        }
        ThrowIndexOutOfRangeException();
      }
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      pSVar10 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar3,(MethodInfo *)0x0);
      bVar5 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                        ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)t,
                         (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar10,
                         (MethodInfo_841F20 *)0x0);
      if (!bVar5) {
        return (Il2CppObject *)0x0;
      }
      iVar6 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                        (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
      if ((value != (System_String_o *)0x0) &&
         (pSVar11 = System_String__Split(value,(uint16_t)iVar6,0,(MethodInfo *)0x0),
         pSVar11 != (System_String_array *)0x0)) {
        if (((int)pSVar11->max_length != 0) &&
           (((iVar6 = System_Int32__Parse(pSVar11->m_Items[0],(MethodInfo *)0x0),
             1 < (uint)pSVar11->max_length &&
             (iVar7 = System_Int32__Parse(pSVar11->m_Items[1],(MethodInfo *)0x0),
             2 < (uint)pSVar11->max_length)) &&
            (iVar8 = System_Int32__Parse(pSVar11->m_Items[2],(MethodInfo *)0x0), 3 < (uint)pSVar11->max_length
            )))) {
          iVar9 = System_Int32__Parse(pSVar11->m_Items[3],(MethodInfo *)0x0);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0
                    );
          (__this_00->fields).G = iVar7;
          (__this_00->fields).R = iVar6;
          (__this_00->fields).B = iVar8;
          (__this_00->fields).A = iVar9;
          return (Il2CppObject *)__this_00;
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.BaseCSVObject$$.ctor
// il2cpp: void Utility_BaseCSVObject___ctor (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_BaseCSVObject___ctor(Utility_BaseCSVObject_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.BaseCSVObject$$.cctor
// il2cpp: void Utility_BaseCSVObject___cctor (const MethodInfo* method);
// 0x18232ba90

void Utility_BaseCSVObject___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Type__List_FieldInfo___o *__this;
  
  if (Il2CppMethodInitialized_1843477e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseCSVObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo);
    Il2CppMethodInitialized_1843477e1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo);
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo_ctor);
  TypeInfo_Utility_BaseCSVObject->static_fields->_fields = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_BaseCSVObject->static_fields->_fields,__this);
  return;
}


