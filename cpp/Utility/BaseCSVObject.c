// Type: Utility.BaseCSVObject
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/BaseCSVObject.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/BaseCSVObject.cs
// --------------------------------

// Utility.BaseCSVObject.<>c$$.cctor
// il2cpp: void Utility_BaseCSVObject___c___cctor (const MethodInfo* method);
// 0x5de30f0

void Utility_BaseCSVObject___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754828d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseCSVObject_c);
    Il2CppMethodInitialized_0754828d = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_BaseCSVObject_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Utility_BaseCSVObject_c->static_fields->__9 = (Utility_BaseCSVObject___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_BaseCSVObject_c->static_fields->__9);
  return;
}


// Utility.BaseCSVObject.<>c$$.ctor
// il2cpp: void Utility_BaseCSVObject___c___ctor (Utility_BaseCSVObject___c_o* __this, const MethodInfo* method);
// 0x5de3160

void Utility_BaseCSVObject___c___ctor(Utility_BaseCSVObject___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.BaseCSVObject.<>c$$<GetFields>b__12_0
// il2cpp: int32_t Utility_BaseCSVObject___c___GetFields_b__12_0 (Utility_BaseCSVObject___c_o* __this, System_Reflection_FieldInfo_o* t, const MethodInfo* method);
// 0x5de3170

int32_t Utility_BaseCSVObject___c___GetFields_b__12_0
                  (Utility_BaseCSVObject___c_o *__this,System_Reflection_FieldInfo_o *t,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  Il2CppType *pIVar3;
  bool bVar4;
  System_Type_o *pSVar5;
  System_Object_array *pSVar6;
  
  if (Il2CppMethodInitialized_0754828e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Utility_OrderAttribute);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_OrderAttribute);
    Il2CppMethodInitialized_0754828e = '\x01';
  }
  pIVar3 = TypeRef_Utility_OrderAttribute;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar5 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar3,(MethodInfo *)0x0);
  bVar4 = System_Attribute__IsDefined((System_Reflection_MemberInfo_o *)t,pSVar5,(MethodInfo *)0x0);
  pIVar3 = TypeRef_Utility_OrderAttribute;
  if (!bVar4) {
    return 0;
  }
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar5 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar3,(MethodInfo *)0x0);
  if ((t != (System_Reflection_FieldInfo_o *)0x0) &&
     (pSVar6 = (*(t->klass->vtable)._14_GetCustomAttributes.methodPtr)
                         (t,pSVar5,true,(t->klass->vtable)._14_GetCustomAttributes.method),
     pSVar6 != (System_Object_array *)0x0)) {
    if ((int)pSVar6->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = pSVar6->m_Items[0];
    if (pIVar2 != (Il2CppObject *)0x0) {
      bVar1 = (TypeInfo_Utility_OrderAttribute->_2).typeHierarchyDepth;
      if (((pIVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Utility_OrderAttribute)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      return *(int32_t *)&pIVar2[1].klass;
    }
  }
  ThrowNullReferenceException();
}


// Utility.BaseCSVObject$$get_Delimiter
// il2cpp: uint16_t Utility_BaseCSVObject__get_Delimiter (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x5de1380

uint16_t Utility_BaseCSVObject__get_Delimiter(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  return 0x2c;
}


// Utility.BaseCSVObject$$get_ParamDelimiter
// il2cpp: uint16_t Utility_BaseCSVObject__get_ParamDelimiter (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x5de1390

uint16_t Utility_BaseCSVObject__get_ParamDelimiter(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  return 0x3a;
}


// Utility.BaseCSVObject$$get_StructDelimiter
// il2cpp: uint16_t Utility_BaseCSVObject__get_StructDelimiter (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x5de13a0

uint16_t Utility_BaseCSVObject__get_StructDelimiter(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  return 0x2f;
}


// Utility.BaseCSVObject$$get_NamedParams
// il2cpp: bool Utility_BaseCSVObject__get_NamedParams (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x5de13b0

bool Utility_BaseCSVObject__get_NamedParams(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  return false;
}


// Utility.BaseCSVObject$$Serialize
// il2cpp: System_String_o* Utility_BaseCSVObject__Serialize (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x5de1020
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de1185: jmp 0x5de118b

System_String_o * Utility_BaseCSVObject__Serialize(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  uint16_t uVar4;
  undefined8 in_RAX;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Reflection_FieldInfo_o *pSVar5;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  int iVar8;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_07548284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_FieldInfo_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FieldInfo_get_Item)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07548284 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  __this_01 = (System_Collections_Generic_List_object__o *)
              (*(__this->klass->vtable)._11_GetFields.methodPtr)
                        (__this,(__this->klass->vtable)._11_GetFields.method);
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar8 = (__this_01->fields)._size;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
      if (0 < iVar8) {
        pSVar5 = System_Collections_Generic_List_object___get_Item
                           (__this_01,0,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_FieldInfo_get_Item);
        (*(__this->klass->vtable)._14_SerializeField.methodPtr)
                  (__this,pSVar5,(Il2CppObject *)__this,(__this->klass->vtable)._14_SerializeField.method);
        ThrowNullReferenceException();
      }
    }
    else if (0 < iVar8) {
      iVar8 = 0;
      do {
        while( true ) {
          pSVar5 = System_Collections_Generic_List_object___get_Item
                             (__this_01,iVar8,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_FieldInfo_get_Item);
          pSVar6 = (*(__this->klass->vtable)._14_SerializeField.methodPtr)
                             (__this,pSVar5,(Il2CppObject *)__this,
                              (__this->klass->vtable)._14_SerializeField.method);
          pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (__this_00->fields)._items;
          if (pSVar7 == (System_String_array *)0x0) goto label_05de1201;
          uVar2 = (__this_00->fields)._size;
          if ((uint)pSVar7->max_length <= uVar2) break;
          (__this_00->fields)._size = uVar2 + 1;
          pSVar7->m_Items[(int)uVar2] = pSVar6;
          Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar2);
          iVar8 = iVar8 + 1;
          if ((__this_01->fields)._size <= iVar8) goto label_05de118b;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar6,
                   (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
        iVar8 = iVar8 + 1;
      } while (iVar8 < (__this_01->fields)._size);
    }
label_05de118b:
    uVar4 = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_Delimiter.method);
    uStack_38 = CONCAT26(uVar4,(undefined6)uStack_38);
    if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556750);
    }
    pSVar6 = System_Char__ToString((uint16_t *)((long)&uStack_38 + 6),(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar7 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      pSVar6 = System_String__Join(pSVar6,pSVar7,(MethodInfo *)0x0);
      return pSVar6;
    }
  }
label_05de1201:
  ThrowNullReferenceException();
}


// Utility.BaseCSVObject$$Deserialize
// il2cpp: void Utility_BaseCSVObject__Deserialize (Utility_BaseCSVObject_o* __this, System_String_o* csv, const MethodInfo* method);
// 0x5de13c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de162d: jmp 0x5de1871
// asm:   0x5de184f: jmp 0x5de1780

void Utility_BaseCSVObject__Deserialize
               (Utility_BaseCSVObject_o *__this,System_String_o *csv,MethodInfo *method)

{
  System_Type_o *pSVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_Collections_IList_c *pSVar4;
  bool bVar5;
  uint16_t uVar6;
  uint uVar7;
  System_String_array *pSVar8;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar9;
  System_String_array *pSVar10;
  System_Reflection_FieldInfo_o *pSVar11;
  long *plVar12;
  Il2CppObject *pIVar13;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar14;
  ulong uVar15;
  int32_t index;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  
  if (Il2CppMethodInitialized_07548285 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IList);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_FieldInfo_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FieldInfo_get_Item)
    ;
    Il2CppMethodInitialized_07548285 = '\x01';
  }
  uVar6 = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)
                    (__this,(__this->klass->vtable)._4_get_Delimiter.method);
  if (csv != (System_String_o *)0x0) {
    pSVar8 = System_String__Split(csv,uVar6,0,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_List_object__o *)
                (*(__this->klass->vtable)._11_GetFields.methodPtr)
                          (__this,(__this->klass->vtable)._11_GetFields.method);
    if (pSVar8 != (System_String_array *)0x0) {
      uVar7 = (uint)pSVar8->max_length;
      if (0 < (int)uVar7) {
        uVar17 = 0;
        do {
          if (uVar7 <= uVar17) goto label_05de1880;
          if (pSVar8->m_Items[(int)uVar17] == (System_String_o *)0x0) goto label_05de1885;
          pSVar9 = System_String__Trim(pSVar8->m_Items[(int)uVar17],(MethodInfo *)0x0);
          if ((uint)pSVar8->max_length <= uVar17) goto label_05de1880;
          pSVar8->m_Items[(int)uVar17] = pSVar9;
          Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar17);
          uVar17 = uVar17 + 1;
          uVar7 = (uint)pSVar8->max_length;
        } while ((int)uVar17 < (int)uVar7);
      }
      bVar5 = (*(__this->klass->vtable)._7_get_NamedParams.methodPtr)
                        (__this,(__this->klass->vtable)._7_get_NamedParams.method);
      if (bVar5) {
        uVar7 = (uint)pSVar8->max_length;
        if (0 < (int)uVar7) {
          lVar18 = 0;
          do {
            if (uVar7 <= (uint)lVar18) goto label_05de1880;
            pSVar9 = pSVar8->m_Items[lVar18];
            uVar6 = (*(__this->klass->vtable)._5_get_ParamDelimiter.methodPtr)
                              (__this,(__this->klass->vtable)._5_get_ParamDelimiter.method);
            if ((pSVar9 == (System_String_o *)0x0) ||
               (pSVar10 = System_String__Split(pSVar9,uVar6,0,(MethodInfo *)0x0),
               pSVar10 == (System_String_array *)0x0)) goto label_05de1885;
            if ((int)pSVar10->max_length == 0) goto label_05de1880;
            pSVar11 = (*(__this->klass->vtable)._12_FindField.methodPtr)
                                (__this,pSVar10->m_Items[0],(__this->klass->vtable)._12_FindField.method);
            bVar5 = System_Reflection_FieldInfo__op_Inequality
                              (pSVar11,(System_Reflection_FieldInfo_o *)0x0,(MethodInfo *)0x0);
            if (bVar5) {
              if ((pSVar10->max_length & 0xfffffffe) == 0) goto label_05de1880;
              (*(__this->klass->vtable)._15_DeserializeField.methodPtr)
                        (__this,pSVar11,(Il2CppObject *)__this,pSVar10->m_Items[1],
                         (__this->klass->vtable)._15_DeserializeField.method);
            }
            uVar7 = (uint)pSVar8->max_length;
            lVar18 = lVar18 + 1;
          } while ((int)lVar18 < (int)uVar7);
        }
      }
      else {
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_05de1885;
        if (0 < (__this_00->fields)._size) {
          uVar16 = 0;
          do {
            index = (int32_t)uVar16;
            pSVar11 = System_Collections_Generic_List_object___get_Item
                                (__this_00,index,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_FieldInfo_get_Item);
            bVar5 = (*(__this->klass->vtable)._13_IsList.methodPtr)
                              (__this,pSVar11,(__this->klass->vtable)._13_IsList.method);
            if (bVar5) {
              pSVar11 = System_Collections_Generic_List_object___get_Item
                                  (__this_00,index,
                                   (MethodInfo_395CF20 *)
                                   MethodInfo_System_Collections_Generic_List_FieldInfo_get_Item);
              if (((pSVar11 == (System_Reflection_FieldInfo_o *)0x0) ||
                  (plVar12 = (long *)(*(pSVar11->klass->vtable)._17_unknown.methodPtr)
                                               (pSVar11,(pSVar11->klass->vtable)._17_unknown.method),
                  plVar12 == (long *)0x0)) ||
                 (lVar18 = (**(code **)(*plVar12 + 0x468))(plVar12,*(undefined8 *)(*plVar12 + 0x470)),
                 lVar18 == 0)) goto label_05de1885;
              if (*(int *)(lVar18 + 0x18) == 0) goto label_05de1880;
              pSVar1 = *(System_Type_o **)(lVar18 + 0x20);
              pSVar11 = System_Collections_Generic_List_object___get_Item
                                  (__this_00,index,
                                   (MethodInfo_395CF20 *)
                                   MethodInfo_System_Collections_Generic_List_FieldInfo_get_Item);
              if ((pSVar11 == (System_Reflection_FieldInfo_o *)0x0) ||
                 (pIVar13 = (Il2CppObject *)
                            (*(pSVar11->klass->vtable)._26_unknown.methodPtr)
                                      (pSVar11,__this,(pSVar11->klass->vtable)._26_unknown.method),
                 pSVar4 = TypeInfo_System_Collections_IList, pIVar13 == (Il2CppObject *)0x0))
              goto label_05de1885;
              obj = il2cpp_vm_Object_IsInst(pIVar13,(Il2CppClass *)TypeInfo_System_Collections_IList);
              if (obj == (Il2CppObject *)0x0) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar13,pSVar4);
              }
              pIVar2 = obj->klass;
              uVar15 = (ulong)(pIVar2->_2).interface_offsets_count;
              if (uVar15 == 0) goto label_05de172f;
              pIVar3 = (pIVar2->_1).interfaceOffsets;
              lVar18 = 0;
              goto label_05de1720;
            }
            pSVar11 = System_Collections_Generic_List_object___get_Item
                                (__this_00,index,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_FieldInfo_get_Item);
            if ((uint)pSVar8->max_length <= uVar16) goto label_05de1880;
            (*(__this->klass->vtable)._15_DeserializeField.methodPtr)
                      (__this,pSVar11,(Il2CppObject *)__this,pSVar8->m_Items[uVar16],
                       (__this->klass->vtable)._15_DeserializeField.method);
            uVar16 = uVar16 + 1;
          } while ((long)uVar16 < (long)(__this_00->fields)._size);
        }
      }
      return;
    }
  }
label_05de1885:
  ThrowNullReferenceException();
  while (lVar18 = lVar18 + 0x10, uVar15 * 0x10 != lVar18) {
label_05de1720:
    if (*(System_Collections_IList_c **)((long)&pIVar3->interfaceType + lVar18) ==
        TypeInfo_System_Collections_IList) {
      pVVar14 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar18) + 4);
      goto label_05de1755;
    }
  }
label_05de172f:
  pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_Collections_IList,4);
label_05de1755:
  (*pVVar14->methodPtr)(obj,pVVar14->method);
  if ((int)pSVar8->max_length <= index) {
    return;
  }
  uVar15 = pSVar8->max_length & 0xffffffff;
  while (uVar16 < uVar15) {
    bVar5 = System_String__op_Inequality
                      (pSVar8->m_Items[uVar16],(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                       (MethodInfo *)0x0);
    if (bVar5) {
      if ((uint)pSVar8->max_length <= uVar16) break;
      pIVar13 = (*(__this->klass->vtable)._17_DeserializeValue.methodPtr)
                          (__this,pSVar1,pSVar8->m_Items[uVar16],
                           (__this->klass->vtable)._17_DeserializeValue.method);
      pIVar2 = obj->klass;
      uVar15 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar15 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar18 = 0;
        do {
          if (*(System_Collections_IList_c **)((long)&pIVar3->interfaceType + lVar18) ==
              TypeInfo_System_Collections_IList) {
            pVVar14 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar18) + 2);
            goto label_05de1790;
          }
          lVar18 = lVar18 + 0x10;
        } while (uVar15 * 0x10 != lVar18);
      }
      pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                          (obj,(Il2CppClass *)TypeInfo_System_Collections_IList,2);
label_05de1790:
      (*pVVar14->methodPtr)(obj,pIVar13,pVVar14->method);
    }
    uVar16 = uVar16 + 1;
    uVar7 = (uint)pSVar8->max_length;
    uVar15 = (ulong)uVar7;
    if ((long)(int)uVar7 <= (long)uVar16) {
      return;
    }
  }
label_05de1880:
  ThrowIndexOutOfRangeException();
}


// Utility.BaseCSVObject$$Copy
// il2cpp: void Utility_BaseCSVObject__Copy (Utility_BaseCSVObject_o* __this, Utility_BaseCSVObject_o* other, const MethodInfo* method);
// 0x5de18a0

void Utility_BaseCSVObject__Copy
               (Utility_BaseCSVObject_o *__this,Utility_BaseCSVObject_o *other,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (other == (Utility_BaseCSVObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (*(other->klass->vtable)._8_Serialize.methodPtr)(other,(other->klass->vtable)._8_Serialize.method);
  (*(__this->klass->vtable)._9_Deserialize.methodPtr)
            (__this,pSVar1,(__this->klass->vtable)._9_Deserialize.method);
  return;
}


// Utility.BaseCSVObject$$GetFields
// il2cpp: System_Collections_Generic_List_FieldInfo__o* Utility_BaseCSVObject__GetFields (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x5de18e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de1a1f: jmp 0x5de1a3a

System_Collections_Generic_List_FieldInfo__o *
Utility_BaseCSVObject__GetFields(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppObject *object;
  bool bVar2;
  System_Type_o *__this_00;
  System_Reflection_FieldInfo_array *source;
  Utility_BaseCSVObject___c_StaticFields *pUVar3;
  System_Func_FieldInfo__int__o *__this_01;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *value;
  System_Collections_Generic_List_FieldInfo__o *pSVar4;
  
  if (Il2CppMethodInitialized_07548286 == '\0') {
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
    Il2CppMethodInitialized_07548286 = '\x01';
  }
  __this_00 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_BaseCSVObject->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_BaseCSVObject);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Utility_BaseCSVObject->static_fields->_fields;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05de1b29;
  bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar1,(Il2CppObject *)__this_00,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo_ContainsKey);
  if (!bVar2) {
    if ((TypeInfo_Utility_BaseCSVObject->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_BaseCSVObject);
    }
    if (__this_00 == (System_Type_o *)0x0) goto label_05de1b29;
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Utility_BaseCSVObject->static_fields->_fields;
    source = System_Type__GetFields(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_BaseCSVObject_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_BaseCSVObject_c);
      pUVar3 = TypeInfo_Utility_BaseCSVObject_c->static_fields;
      __this_01 = pUVar3->__9__12_0;
    }
    else {
      pUVar3 = TypeInfo_Utility_BaseCSVObject_c->static_fields;
      __this_01 = pUVar3->__9__12_0;
    }
    if (__this_01 == (System_Func_FieldInfo__int__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Utility_BaseCSVObject_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_BaseCSVObject_c);
        pUVar3 = TypeInfo_Utility_BaseCSVObject_c->static_fields;
      }
      object = (Il2CppObject *)pUVar3->__9;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_FieldInfo_int);
      System_Func_object__int____ctor
                ((System_Func_object__int__o *)__this_01,object,
                 (intptr_t)MethodInfo_Utility_BaseCSVObject_c_GetFields_b__12_0,(MethodInfo_4F198F0 *)0x0);
      pUVar3 = TypeInfo_Utility_BaseCSVObject_c->static_fields;
      pUVar3->__9__12_0 = __this_01;
      Il2CppCodeGenWriteBarrier(&pUVar3->__9__12_0);
    }
    source_00 = System_Linq_Enumerable__OrderBy_object__int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TKey__o *)__this_01,
                           (MethodInfo_34F1DD0 *)MethodInfo_System_Linq_Enumerable_OrderBy_FieldInfo_int);
    value = System_Linq_Enumerable__ToList_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                       (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_FieldInfo);
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05de1b29;
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,(Il2CppObject *)__this_00,(Il2CppObject *)value,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo_Add)
    ;
  }
  if ((TypeInfo_Utility_BaseCSVObject->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_BaseCSVObject);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Utility_BaseCSVObject->static_fields->_fields;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar4 = (System_Collections_Generic_List_FieldInfo__o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)__this_00,
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo_get_Item);
    return pSVar4;
  }
label_05de1b29:
  ThrowNullReferenceException();
}


// Utility.BaseCSVObject$$FindField
// il2cpp: System_Reflection_FieldInfo_o* Utility_BaseCSVObject__FindField (Utility_BaseCSVObject_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5de1b30
// eh: try 0x5de1c34..0x5de1ca9 -> pad 0x5de1cb4 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5de1ccc..0x5de1cd1 -> pad 0x5de1cf6 cleanup
// eh: try 0x5de1cf9..0x5de1d03 -> pad 0x5de1d0b catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de1c2d: nop dword ptr [rax]
// asm:   0x5de1cae: jmp 0x5de1cb4
// asm:   0x5de1cb0: jmp 0x5de1cb4
// asm:   0x5de1cb2: jmp 0x5de1cb4
// asm:   0x5de1cb4: mov rbx, rax
// asm:   0x5de1cb7: cmp edx, 1
// asm:   0x5de1cba: jne 0x5de1cf9
// asm:   0x5de1cbc: mov rdi, rbx
// asm:   0x5de1cbf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5de1cc4: mov rbx, qword ptr [rax]
// asm:   0x5de1cc7: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5de1ccc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de1cd1: lea rax, [rip + 0x14abff8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_FieldInfo_Dispose
// asm:   0x5de1cd8: mov rsi, qword ptr [rax]
// asm:   0x5de1cdb: mov rdi, rsp
// asm:   0x5de1cde: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5de1ce3: test rbx, rbx
// asm:   0x5de1ce6: jne 0x5de1cee
// asm:   0x5de1ce8: xor ebx, ebx
// asm:   0x5de1cea: xor ebp, ebp
// asm:   0x5de1cec: jmp 0x5de1c8e
// asm:   0x5de1cee: mov rdi, rbx
// asm:   0x5de1cf1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5de1cf6: mov rbx, rax
// asm:   0x5de1cf9: lea rdi, [rsp + 0x20]
// asm:   0x5de1cfe: call 0x2fded00  ; il2cpp_runtime_helper_02fded00()
// asm:   0x5de1d03: mov rdi, rbx
// asm:   0x5de1d06: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5de1d0b: mov rdi, rax
// asm:   0x5de1d0e: call 0x2ab61e0  ; __clang_call_terminate()

System_Reflection_FieldInfo_o *
Utility_BaseCSVObject__FindField(Utility_BaseCSVObject_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_Type_o *key;
  System_Collections_Generic_List_object__o *__this_01;
  System_String_o *a;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o SStack_58;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  
  if (Il2CppMethodInitialized_07548287 == '\0') {
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
    Il2CppMethodInitialized_07548287 = '\x01';
  }
  SStack_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_58.fields._index = 0;
  SStack_58.fields._version = 0;
  SStack_58.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Utility_BaseCSVObject->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_BaseCSVObject);
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              TypeInfo_Utility_BaseCSVObject->static_fields->_fields;
  key = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_01 = (System_Collections_Generic_List_object__o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_00,(Il2CppObject *)key,
                           (MethodInfo_4AAD450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo_get_Item);
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_58,__this_01,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_FieldInfo_GetEnumerator);
      uStack_38 = 0;
      puStack_30 = (undefined1 *)&SStack_58;
      do {
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_58,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_FieldInfo_MoveNext);
        pIVar3 = SStack_58.fields._current;
        if (!bVar1) {
          iVar4 = 5;
          pIVar3 = (Il2CppObject *)0x0;
          goto label_05de1c7c;
        }
        if (SStack_58.fields._current == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        a = (System_String_o *)
            (*(((System_Reflection_FieldInfo_VTable *)(SStack_58.fields._current)->klass->vtable)->_8_unknown)
              .methodPtr)(SStack_58.fields._current,
                          (((System_Reflection_FieldInfo_VTable *)(SStack_58.fields._current)->klass->vtable)
                          ->_8_unknown).method);
        bVar1 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
      } while (!bVar1);
      iVar4 = 4;
label_05de1c7c:
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_58,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_FieldInfo_Dispose
                );
      pIVar2 = (Il2CppObject *)0x0;
      if (iVar4 == 4) {
        pIVar2 = pIVar3;
      }
      return (System_Reflection_FieldInfo_o *)pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// Utility.BaseCSVObject$$IsList
// il2cpp: bool Utility_BaseCSVObject__IsList (Utility_BaseCSVObject_o* __this, System_Reflection_FieldInfo_o* field, const MethodInfo* method);
// 0x5de1d20

bool Utility_BaseCSVObject__IsList
               (Utility_BaseCSVObject_o *__this,System_Reflection_FieldInfo_o *field,MethodInfo *method)

{
  Il2CppType *handle;
  char cVar1;
  bool bVar2;
  long *plVar3;
  System_Type_o *left;
  System_Type_o *right;
  
  if (Il2CppMethodInitialized_07548288 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_System_Collections_Generic_List_T);
    Il2CppMethodInitialized_07548288 = '\x01';
  }
  if (field != (System_Reflection_FieldInfo_o *)0x0) {
    plVar3 = (long *)(*(field->klass->vtable)._17_unknown.methodPtr)
                               (field,(field->klass->vtable)._17_unknown.method);
    if (plVar3 != (long *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
      if (cVar1 == '\0') {
        return false;
      }
      plVar3 = (long *)(*(field->klass->vtable)._17_unknown.methodPtr)
                                 (field,(field->klass->vtable)._17_unknown.method);
      if (plVar3 != (long *)0x0) {
        left = (System_Type_o *)(**(code **)(*plVar3 + 0x448))(plVar3);
        handle = TypeRef_System_Collections_Generic_List_T;
        if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_075567a8);
        }
        right = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
        bVar2 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.BaseCSVObject$$SerializeField
// il2cpp: System_String_o* Utility_BaseCSVObject__SerializeField (Utility_BaseCSVObject_o* __this, System_Reflection_FieldInfo_o* info, Il2CppObject* instance, const MethodInfo* method);
// 0x5de1e00
// eh: try 0x5de213f..0x5de23f5 -> pad 0x5de2429 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5de2444..0x5de2449 -> pad 0x5de244e cleanup
// eh: try 0x5de2451..0x5de245b -> pad 0x5de2463 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de2120: lea r14, [rip + 0x14972d1]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5de2127: lea r13, [rip + 0x14b482a]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5de212e: jmp 0x5de2158
// asm:   0x5de214a: mov rbp, qword ptr [rsp + 0x10]
// asm:   0x5de214f: test rbp, rbp
// asm:   0x5de2152: je 0x5de23eb
// asm:   0x5de22fe: nop 
// asm:   0x5de2417: mov rdi, r13
// asm:   0x5de241a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5de241f: jmp 0x5de2429
// asm:   0x5de2421: jmp 0x5de2429
// asm:   0x5de2423: jmp 0x5de2429
// asm:   0x5de2425: jmp 0x5de2429
// asm:   0x5de2427: jmp 0x5de2429
// asm:   0x5de2429: mov rbp, rax
// asm:   0x5de242c: cmp edx, 1
// asm:   0x5de242f: jne 0x5de2451
// asm:   0x5de2431: mov rdi, rbp
// asm:   0x5de2434: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5de2439: mov r13, qword ptr [rax]
// asm:   0x5de243c: mov qword ptr [rsp + 0x30], r13
// asm:   0x5de2441: xor r14d, r14d
// asm:   0x5de2444: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de2449: jmp 0x5de22bc
// asm:   0x5de244e: mov rbp, rax
// asm:   0x5de2451: lea rdi, [rsp + 0x30]
// asm:   0x5de2456: call 0x2fded30  ; il2cpp_runtime_helper_02fded30()
// asm:   0x5de245b: mov rdi, rbp
// asm:   0x5de245e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5de2463: mov rdi, rax
// asm:   0x5de2466: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
Utility_BaseCSVObject__SerializeField
          (Utility_BaseCSVObject_o *__this,System_Reflection_FieldInfo_o *info,Il2CppObject *instance,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Collections_IEnumerable_c *itf;
  System_Collections_IList_c *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  char cVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_Collections_Generic_List_string__o *__this_00;
  long *plVar11;
  long lVar12;
  Il2CppObject *pIVar13;
  Il2CppObject *pIVar14;
  VirtualInvokeData *pVVar15;
  System_Type_o *pSVar16;
  System_String_array *pSVar17;
  ulong uVar18;
  uint16_t uStack_6a;
  Il2CppObject *pIStack_68;
  Il2CppObject *pIStack_60;
  System_Collections_IList_c *pSStack_58;
  System_String_o *pSStack_50;
  undefined8 uStack_48;
  Il2CppObject **ppIStack_40;
  Il2CppObject **ppIStack_38;
  
  if (Il2CppMethodInitialized_07548289 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IList);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07548289 = '\x01';
  }
  uStack_6a = 0;
  pIStack_68 = (Il2CppObject *)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  pSVar9 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  bVar7 = (*(__this->klass->vtable)._7_get_NamedParams.methodPtr)
                    (__this,(__this->klass->vtable)._7_get_NamedParams.method);
  if (bVar7) {
    if (info == (System_Reflection_FieldInfo_o *)0x0) goto label_05de23f5;
    pSVar9 = (System_String_o *)
             (*(info->klass->vtable)._8_unknown.methodPtr)(info,(info->klass->vtable)._8_unknown.method);
    uStack_6a = (*(__this->klass->vtable)._5_get_ParamDelimiter.methodPtr)
                          (__this,(__this->klass->vtable)._5_get_ParamDelimiter.method);
    if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556750);
    }
    pSVar10 = System_Char__ToString(&uStack_6a,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_52f0320(pSVar9,pSVar10,(MethodInfo *)0x0);
  }
  bVar7 = (*(__this->klass->vtable)._13_IsList.methodPtr)
                    (__this,info,(__this->klass->vtable)._13_IsList.method);
  if (bVar7) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if (((info != (System_Reflection_FieldInfo_o *)0x0) &&
        (plVar11 = (long *)(*(info->klass->vtable)._17_unknown.methodPtr)
                                     (info,(info->klass->vtable)._17_unknown.method), plVar11 != (long *)0x0))
       && (lVar12 = (**(code **)(*plVar11 + 0x468))(plVar11,*(undefined8 *)(*plVar11 + 0x470)), lVar12 != 0))
    {
      pSStack_50 = pSVar9;
      if (*(int *)(lVar12 + 0x18) == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSVar16 = *(System_Type_o **)(lVar12 + 0x20);
      pIVar13 = (Il2CppObject *)
                (*(info->klass->vtable)._26_unknown.methodPtr)
                          (info,instance,(info->klass->vtable)._26_unknown.method);
      pSVar5 = TypeInfo_System_Collections_IList;
      if (pIVar13 != (Il2CppObject *)0x0) {
        pIVar14 = il2cpp_vm_Object_IsInst(pIVar13,(Il2CppClass *)TypeInfo_System_Collections_IList);
        itf = TypeInfo_System_Collections_IEnumerable;
        if (pIVar14 == (Il2CppObject *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar13,pSVar5);
        }
        pSStack_58 = TypeInfo_System_Collections_IList;
        pIVar14 = il2cpp_vm_Object_IsInst(pIVar13,(Il2CppClass *)TypeInfo_System_Collections_IList);
        if (pIVar14 == (Il2CppObject *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar13,pSStack_58);
        }
        pIVar3 = pIVar14->klass;
        uVar18 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar18 != 0) {
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(System_Collections_IEnumerable_c **)((long)&pIVar4->interfaceType + lVar12) == itf) {
              pVVar15 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
              goto label_05de20e9;
            }
            lVar12 = lVar12 + 0x10;
          } while (uVar18 * 0x10 != lVar12);
        }
        pVVar15 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar14,(Il2CppClass *)itf,0);
label_05de20e9:
        pIVar13 = (Il2CppObject *)(*pVVar15->methodPtr)(pIVar14,pVVar15->method);
        uStack_48 = 0;
        ppIStack_40 = &pIStack_68;
        ppIStack_38 = &pIStack_60;
        do {
          pIStack_68 = pIVar13;
          if (pIVar13 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar3 = pIVar13->klass;
          uVar18 = (ulong)(pIVar3->_2).interface_offsets_count;
          if (uVar18 != 0) {
            pIVar4 = (pIVar3->_1).interfaceOffsets;
            lVar12 = 0;
            do {
              if (*(Il2CppClass **)((long)&pIVar4->interfaceType + lVar12) ==
                  (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
                pVVar15 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
                goto label_05de21b3;
              }
              lVar12 = lVar12 + 0x10;
            } while (uVar18 * 0x10 != lVar12);
          }
          pVVar15 = GetInterfaceInvokeDataFromVTableSlowPath
                              (pIVar13,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05de21b3:
          cVar8 = (*pVVar15->methodPtr)(pIVar13,pVVar15->method);
          pIVar13 = pIStack_68;
          if (cVar8 == '\0') {
            pIVar13 = il2cpp_vm_Object_IsInst(pIStack_68,(Il2CppClass *)TypeInfo_System_IDisposable);
            pIStack_60 = pIVar13;
            if (pIVar13 == (Il2CppObject *)0x0) goto label_05de2336;
            pIVar3 = pIVar13->klass;
            uVar18 = (ulong)(pIVar3->_2).interface_offsets_count;
            if (uVar18 == 0) goto label_05de230f;
            pIVar4 = (pIVar3->_1).interfaceOffsets;
            lVar12 = 0;
            goto label_05de2300;
          }
          if (pIStack_68 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar3 = pIStack_68->klass;
          uVar18 = (ulong)(pIVar3->_2).interface_offsets_count;
          if (uVar18 != 0) {
            pIVar4 = (pIVar3->_1).interfaceOffsets;
            lVar12 = 0;
            do {
              if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar12) ==
                  TypeInfo_System_Collections_IEnumerator) {
                pVVar15 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar12) + 1);
                goto label_05de2247;
              }
              lVar12 = lVar12 + 0x10;
            } while (uVar18 * 0x10 != lVar12);
          }
          pVVar15 = GetInterfaceInvokeDataFromVTableSlowPath
                              (pIStack_68,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05de2247:
          pIVar13 = (*pVVar15->methodPtr)(pIVar13,pVVar15->method);
          pSVar9 = (*(__this->klass->vtable)._16_SerializeValue.methodPtr)
                             (__this,pSVar16,pIVar13,(__this->klass->vtable)._16_SerializeValue.method);
          pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
label_05de23e6:
            ThrowNullReferenceException();
          }
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar17 = (__this_00->fields)._items;
          if (pSVar17 == (System_String_array *)0x0) goto label_05de23e6;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar17->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar17->m_Items[(int)uVar2] = pSVar9;
            Il2CppCodeGenWriteBarrier(pSVar17->m_Items + (int)uVar2);
            pIVar13 = pIStack_68;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                       (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
            pIVar13 = pIStack_68;
          }
        } while( true );
      }
    }
  }
  else if (info != (System_Reflection_FieldInfo_o *)0x0) {
    pSVar16 = (System_Type_o *)
              (*(info->klass->vtable)._17_unknown.methodPtr)(info,(info->klass->vtable)._17_unknown.method);
    pIVar13 = (Il2CppObject *)
              (*(info->klass->vtable)._26_unknown.methodPtr)
                        (info,instance,(info->klass->vtable)._26_unknown.method);
    pSVar10 = (*(__this->klass->vtable)._16_SerializeValue.methodPtr)
                        (__this,pSVar16,pIVar13,(__this->klass->vtable)._16_SerializeValue.method);
    goto label_05de23c4;
  }
  goto label_05de23f5;
  while (lVar12 = lVar12 + 0x10, uVar18 * 0x10 != lVar12) {
label_05de2300:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_System_IDisposable) {
      pVVar15 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
      goto label_05de232d;
    }
  }
label_05de230f:
  pVVar15 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar13,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05de232d:
  (*pVVar15->methodPtr)(pIVar13,pVVar15->method);
label_05de2336:
  pSVar9 = pSStack_50;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    if ((__this_00->fields)._size < 1) {
      return pSStack_50;
    }
    uStack_6a = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_Delimiter.method);
    if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556750);
    }
    pSVar10 = System_Char__ToString(&uStack_6a,(MethodInfo *)0x0);
    pSVar17 = (System_String_array *)
              System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    pSVar10 = System_String__Join(pSVar10,pSVar17,(MethodInfo *)0x0);
label_05de23c4:
    pSVar9 = System_String__Concat_52f0320(pSVar9,pSVar10,(MethodInfo *)0x0);
    return pSVar9;
  }
label_05de23f5:
  ThrowNullReferenceException();
}


// Utility.BaseCSVObject$$DeserializeField
// il2cpp: void Utility_BaseCSVObject__DeserializeField (Utility_BaseCSVObject_o* __this, System_Reflection_FieldInfo_o* info, Il2CppObject* instance, System_String_o* value, const MethodInfo* method);
// 0x5de2470

void Utility_BaseCSVObject__DeserializeField
               (Utility_BaseCSVObject_o *__this,System_Reflection_FieldInfo_o *info,Il2CppObject *instance,
               System_String_o *value,MethodInfo *method)

{
  System_Type_o *pSVar1;
  Il2CppObject *value_00;
  
  if (info == (System_Reflection_FieldInfo_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (System_Type_o *)
           (*(info->klass->vtable)._17_unknown.methodPtr)(info,(info->klass->vtable)._17_unknown.method);
  value_00 = (*(__this->klass->vtable)._17_DeserializeValue.methodPtr)
                       (__this,pSVar1,value,(__this->klass->vtable)._17_DeserializeValue.method);
  System_Reflection_FieldInfo__SetValue(info,instance,value_00,(MethodInfo *)0x0);
  return;
}


// Utility.BaseCSVObject$$SerializeValue
// il2cpp: System_String_o* Utility_BaseCSVObject__SerializeValue (Utility_BaseCSVObject_o* __this, System_Type_o* t, Il2CppObject* value, const MethodInfo* method);
// 0x5de24e0

System_String_o *
Utility_BaseCSVObject__SerializeValue
          (Utility_BaseCSVObject_o *__this,System_Type_o *t,Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppClass_1 *pIVar3;
  Il2CppType *pIVar4;
  bool bVar5;
  System_Type_o *pSVar6;
  System_String_o *pSVar7;
  undefined8 *puVar8;
  System_String_array *value_00;
  System_String_o *pSVar9;
  Il2CppObject *pIVar10;
  Il2CppMethodPointer vtableDispatch;
  Il2CppClass **extraout_RDX;
  Il2CppClass **extraout_RDX_00;
  Il2CppClass **ppIVar11;
  System_RuntimeTypeHandle_o SVar12;
  int32_t index;
  MethodInfo *pMVar13;
  uint16_t local_46;
  int32_t local_44;
  undefined8 local_40;
  float local_38 [2];
  undefined8 local_30;
  
  if (Il2CppMethodInitialized_0754828a == '\0') {
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
    Il2CppMethodInitialized_0754828a = '\x01';
  }
  local_44 = 0;
  local_38[0] = 0.0;
  local_40 = 0;
  local_46 = 0;
  local_30 = 0;
  pIVar3 = &g_data_07556758->_1;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)&pIVar3->byval_arg,(MethodInfo *)0x0);
  bVar5 = System_Type__op_Equality(t,pSVar6,(MethodInfo *)0x0);
  if (bVar5) {
    if (value == (Il2CppObject *)0x0) {
      value = (Il2CppObject *)0x0;
    }
    else if (value->klass != g_data_07556758) {
label_05de2603:
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    return (System_String_o *)value;
  }
  SVar12.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_07556710 + 0x20);
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar6 = System_Type__GetTypeFromHandle(SVar12,(MethodInfo *)0x0);
  bVar5 = System_Type__op_Equality(t,pSVar6,(MethodInfo *)0x0);
  ppIVar11 = extraout_RDX;
  if (!bVar5) {
    SVar12.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_07556740 + 0x20);
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar6 = System_Type__GetTypeFromHandle(SVar12,(MethodInfo *)0x0);
    bVar5 = System_Type__op_Equality(t,pSVar6,(MethodInfo *)0x0);
    ppIVar11 = extraout_RDX_00;
    if (!bVar5) {
      SVar12.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_075566f0 + 0x20);
      if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075567a8);
      }
      pSVar6 = System_Type__GetTypeFromHandle(SVar12,(MethodInfo *)0x0);
      bVar5 = System_Type__op_Equality(t,pSVar6,(MethodInfo *)0x0);
      pIVar4 = TypeRef_Utility_BaseCSVObject;
      if (bVar5) {
        if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
        }
        local_44 = System_Convert__ToInt32(value,(MethodInfo *)0x0);
        pSVar7 = System_Int32__ToString(&local_44,(MethodInfo *)0x0);
        return pSVar7;
      }
      if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075567a8);
      }
      pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar4,(MethodInfo *)0x0);
      if (pSVar6 == (System_Type_o *)0x0) goto label_05de2afb;
      bVar5 = (*(pSVar6->klass->vtable)._22_IsAssignableFrom.methodPtr)
                        (pSVar6,t,(pSVar6->klass->vtable)._22_IsAssignableFrom.method);
      pIVar4 = TypeRef_UnityEngine_Vector3;
      if (!bVar5) {
        if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_075567a8);
        }
        pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar4,(MethodInfo *)0x0);
        bVar5 = System_Type__op_Equality(t,pSVar6,(MethodInfo *)0x0);
        pIVar4 = TypeRef_UnityEngine_Vector2;
        if (bVar5) {
          puVar8 = (undefined8 *)il2cpp_runtime_helper_02abd3a0(value,TypeInfo_UnityEngine_Vector3);
          local_40 = *puVar8;
          local_38[0] = *(float *)(puVar8 + 1);
          local_46 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                               (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
          if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556750);
          }
          pSVar7 = System_Char__ToString(&local_46,(MethodInfo *)0x0);
          value_00 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
          pSVar9 = System_Single__ToString((float *)&local_40,(MethodInfo *)0x0);
          if (value_00 != (System_String_array *)0x0) {
            il2cpp_codegen_array_set_ref((System_Array_o *)value_00,0,(Il2CppObject *)pSVar9);
            pSVar9 = System_Single__ToString((float *)((long)&local_40 + 4),(MethodInfo *)0x0);
            il2cpp_codegen_array_set_ref((System_Array_o *)value_00,1,(Il2CppObject *)pSVar9);
            pSVar9 = System_Single__ToString(local_38,(MethodInfo *)0x0);
            index = 2;
            goto label_05de2abc;
          }
        }
        else {
          if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_075567a8);
          }
          pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar4,(MethodInfo *)0x0);
          bVar5 = System_Type__op_Equality(t,pSVar6,(MethodInfo *)0x0);
          pIVar4 = TypeRef_Utility_Color255;
          if (bVar5) {
            puVar8 = (undefined8 *)il2cpp_runtime_helper_02abd3a0(value,TypeInfo_UnityEngine_Vector2);
            local_30 = *puVar8;
            local_46 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                                 (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
            if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_07556750);
            }
            pSVar7 = System_Char__ToString(&local_46,(MethodInfo *)0x0);
            value_00 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
            pSVar9 = System_Single__ToString((float *)&local_30,(MethodInfo *)0x0);
            if (value_00 != (System_String_array *)0x0) {
              il2cpp_codegen_array_set_ref((System_Array_o *)value_00,0,(Il2CppObject *)pSVar9);
              pSVar9 = System_Single__ToString((float *)((long)&local_30 + 4),(MethodInfo *)0x0);
              index = 1;
label_05de2abc:
              il2cpp_codegen_array_set_ref((System_Array_o *)value_00,index,(Il2CppObject *)pSVar9);
              pSVar7 = System_String__Join(pSVar7,value_00,(MethodInfo *)0x0);
              return pSVar7;
            }
          }
          else {
            if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_075567a8);
            }
            pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar4,(MethodInfo *)0x0);
            bVar5 = System_Type__op_Equality(t,pSVar6,(MethodInfo *)0x0);
            if (!bVar5) {
              return *(System_String_o **)g_data_07556758->static_fields;
            }
            pIVar10 = il2cpp_codegen_is_inst_class(value,(Il2CppClass *)TypeInfo_Utility_Color255);
            local_46 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                                 (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
            if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_07556750);
            }
            pSVar7 = System_Char__ToString(&local_46,(MethodInfo *)0x0);
            value_00 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
            if ((pIVar10 != (Il2CppObject *)0x0) &&
               (pSVar9 = System_Int32__ToString((int32_t *)(pIVar10 + 1),(MethodInfo *)0x0),
               value_00 != (System_String_array *)0x0)) {
              il2cpp_codegen_array_set_ref((System_Array_o *)value_00,0,(Il2CppObject *)pSVar9);
              pSVar9 = System_Int32__ToString((int32_t *)((long)&pIVar10[1].klass + 4),(MethodInfo *)0x0);
              il2cpp_codegen_array_set_ref((System_Array_o *)value_00,1,(Il2CppObject *)pSVar9);
              pSVar9 = System_Int32__ToString((int32_t *)&pIVar10[1].monitor,(MethodInfo *)0x0);
              il2cpp_codegen_array_set_ref((System_Array_o *)value_00,2,(Il2CppObject *)pSVar9);
              pSVar9 = System_Int32__ToString((int32_t *)((long)&pIVar10[1].monitor + 4),(MethodInfo *)0x0);
              index = 3;
              goto label_05de2abc;
            }
          }
        }
        goto label_05de2afb;
      }
      if (value == (Il2CppObject *)0x0) goto label_05de2afb;
      pIVar2 = value->klass;
      bVar1 = (TypeInfo_Utility_BaseCSVObject->_2).typeHierarchyDepth;
      if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
         (ppIVar11 = (pIVar2->_2).typeHierarchy,
         ppIVar11[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Utility_BaseCSVObject)) goto label_05de2603;
      vtableDispatch = pIVar2->vtable[8].methodPtr;
      pMVar13 = pIVar2->vtable[8].method;
      goto label_05de2696;
    }
  }
  if (value == (Il2CppObject *)0x0) {
label_05de2afb:
    ThrowNullReferenceException();
  }
  vtableDispatch = value->klass->vtable[3].methodPtr;
  pMVar13 = value->klass->vtable[3].method;
label_05de2696:
  pSVar7 = (System_String_o *)(*vtableDispatch)(value,pMVar13,ppIVar11,vtableDispatch);
  return pSVar7;
}


// Utility.BaseCSVObject$$DeserializeValue
// il2cpp: Il2CppObject* Utility_BaseCSVObject__DeserializeValue (Utility_BaseCSVObject_o* __this, System_Type_o* t, System_String_o* value, const MethodInfo* method);
// 0x5de2b00
// asm: 17 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de3020: mov r12d, eax
// asm:   0x5de3023: mov rdi, qword ptr [rbx + 0x38]
// asm:   0x5de3027: xor esi, esi
// asm:   0x5de3029: call 0x55b7710  ; System_Int32__Parse()
// asm:   0x5de302e: mov ebp, eax
// asm:   0x5de3030: lea rax, [rip + 0x14936d9]  ; TypeInfo_Utility_Color255
// asm:   0x5de3037: mov rdi, qword ptr [rax]
// asm:   0x5de303a: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5de303f: mov rbx, rax
// asm:   0x5de3042: mov rdi, rax
// asm:   0x5de3045: mov esi, r14d
// asm:   0x5de3048: mov edx, r15d
// asm:   0x5de304b: mov ecx, r12d
// asm:   0x5de304e: mov r8d, ebp
// asm:   0x5de3051: xor r9d, r9d
// asm:   0x5de3054: call 0x5de7730  ; Utility_Color255___ctor()
// asm:   0x5de3059: jmp 0x5de2f52

Il2CppObject *
Utility_BaseCSVObject__DeserializeValue
          (Utility_BaseCSVObject_o *__this,System_Type_o *t,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass_1 *pIVar2;
  Il2CppType *pIVar3;
  bool bVar4;
  uint16_t uVar5;
  int32_t iVar6;
  int32_t g;
  int32_t b;
  int32_t a;
  System_Type_o *pSVar7;
  System_String_array *pSVar8;
  UnityEngine_Vector3_c **ppUVar9;
  Il2CppObject *pIVar10;
  Utility_Color255_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  Il2CppClass *pIVar11;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_0754828b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Utility_BaseCSVObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseCSVObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0754828b = '\x01';
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_07556758 + 0x20);
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar7 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  bVar4 = System_Type__op_Equality(t,pSVar7,(MethodInfo *)0x0);
  if (bVar4) {
    return (Il2CppObject *)value;
  }
  pIVar2 = &g_data_07556710->_1;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar7 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)&pIVar2->byval_arg,(MethodInfo *)0x0);
  bVar4 = System_Type__op_Equality(t,pSVar7,(MethodInfo *)0x0);
  if (bVar4) {
    fStack_48 = (float)System_Int32__Parse(value,(MethodInfo *)0x0);
    pIVar11 = g_data_07556710;
  }
  else {
    pIVar2 = &g_data_07556740->_1;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar7 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)&pIVar2->byval_arg,(MethodInfo *)0x0);
    bVar4 = System_Type__op_Equality(t,pSVar7,(MethodInfo *)0x0);
    if (bVar4) {
      fStack_48 = System_Single__Parse(value,(MethodInfo *)0x0);
      pIVar11 = g_data_07556740;
    }
    else {
      pIVar2 = &g_data_075566f0->_1;
      if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075567a8);
      }
      pSVar7 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)&pIVar2->byval_arg,(MethodInfo *)0x0);
      bVar4 = System_Type__op_Equality(t,pSVar7,(MethodInfo *)0x0);
      pIVar3 = TypeRef_Utility_BaseCSVObject;
      if (!bVar4) {
        if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_075567a8);
        }
        pSVar7 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar3,(MethodInfo *)0x0);
        if (pSVar7 != (System_Type_o *)0x0) {
          bVar4 = (*(pSVar7->klass->vtable)._22_IsAssignableFrom.methodPtr)
                            (pSVar7,t,(pSVar7->klass->vtable)._22_IsAssignableFrom.method);
          pIVar3 = TypeRef_UnityEngine_Vector3;
          if (!bVar4) {
            if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_075567a8);
            }
            pSVar7 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar3,(MethodInfo *)0x0);
            bVar4 = System_Type__op_Equality(t,pSVar7,(MethodInfo *)0x0);
            pIVar3 = TypeRef_UnityEngine_Vector2;
            if (bVar4) {
              uVar5 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                                (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
              if ((value == (System_String_o *)0x0) ||
                 (pSVar8 = System_String__Split(value,uVar5,0,(MethodInfo *)0x0),
                 pSVar8 == (System_String_array *)0x0)) goto label_05de305e;
              if ((((int)pSVar8->max_length == 0) ||
                  (fStack_38 = System_Single__Parse(pSVar8->m_Items[0],(MethodInfo *)0x0),
                  (pSVar8->max_length & 0xfffffffe) == 0)) ||
                 (fStack_34 = System_Single__Parse(pSVar8->m_Items[1],(MethodInfo *)0x0),
                 (uint)pSVar8->max_length < 3)) goto label_05de3063;
              fStack_40 = System_Single__Parse(pSVar8->m_Items[2],(MethodInfo *)0x0);
              fStack_44 = fStack_34;
              ppUVar9 = &TypeInfo_UnityEngine_Vector3;
            }
            else {
              if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_075567a8);
              }
              pSVar7 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar3,(MethodInfo *)0x0);
              bVar4 = System_Type__op_Equality(t,pSVar7,(MethodInfo *)0x0);
              pIVar3 = TypeRef_Utility_Color255;
              if (!bVar4) {
                if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init(g_data_075567a8);
                }
                pSVar7 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar3,(MethodInfo *)0x0);
                bVar4 = System_Type__op_Equality(t,pSVar7,(MethodInfo *)0x0);
                if (!bVar4) {
                  return (Il2CppObject *)0x0;
                }
                uVar5 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                                  (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
                if ((value != (System_String_o *)0x0) &&
                   (pSVar8 = System_String__Split(value,uVar5,0,(MethodInfo *)0x0),
                   pSVar8 != (System_String_array *)0x0)) {
                  if (((int)pSVar8->max_length != 0) &&
                     (((iVar6 = System_Int32__Parse(pSVar8->m_Items[0],(MethodInfo *)0x0),
                       (pSVar8->max_length & 0xfffffffe) != 0 &&
                       (g = System_Int32__Parse(pSVar8->m_Items[1],(MethodInfo *)0x0),
                       2 < (uint)pSVar8->max_length)) &&
                      (b = System_Int32__Parse(pSVar8->m_Items[2],(MethodInfo *)0x0),
                      (pSVar8->max_length & 0xfffffffc) != 0)))) {
                    a = System_Int32__Parse(pSVar8->m_Items[3],(MethodInfo *)0x0);
                    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
                    Utility_Color255___ctor(__this_00,iVar6,g,b,a,(MethodInfo *)0x0);
                    return (Il2CppObject *)__this_00;
                  }
label_05de3063:
                  ThrowIndexOutOfRangeException();
                }
                goto label_05de305e;
              }
              uVar5 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                                (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
              if ((value == (System_String_o *)0x0) ||
                 (pSVar8 = System_String__Split(value,uVar5,0,(MethodInfo *)0x0),
                 pSVar8 == (System_String_array *)0x0)) goto label_05de305e;
              if (((int)pSVar8->max_length == 0) ||
                 (fStack_38 = System_Single__Parse(pSVar8->m_Items[0],(MethodInfo *)0x0),
                 (pSVar8->max_length & 0xfffffffe) == 0)) goto label_05de3063;
              fStack_44 = System_Single__Parse(pSVar8->m_Items[1],(MethodInfo *)0x0);
              ppUVar9 = (UnityEngine_Vector3_c **)&TypeInfo_UnityEngine_Vector2;
            }
            pIVar11 = (Il2CppClass *)*ppUVar9;
            fStack_48 = fStack_38;
            goto label_05de2f47;
          }
          pIVar10 = System_Activator__CreateInstance_54ec050(t,(MethodInfo *)0x0);
          if (pIVar10 != (Il2CppObject *)0x0) {
            pIVar11 = pIVar10->klass;
            bVar1 = (TypeInfo_Utility_BaseCSVObject->_2).typeHierarchyDepth;
            if (((pIVar11->_2).typeHierarchyDepth < bVar1) ||
               ((pIVar11->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Utility_BaseCSVObject
               )) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar10);
            }
            (*pIVar11->vtable[9].methodPtr)(pIVar10,value,pIVar11->vtable[9].method);
            return pIVar10;
          }
        }
label_05de305e:
        ThrowNullReferenceException();
      }
      iVar6 = System_Int32__Parse(value,(MethodInfo *)0x0);
      if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
      }
      bVar4 = System_Convert__ToBoolean_5422360(iVar6,(MethodInfo *)0x0);
      fStack_48 = (float)CONCAT31(fStack_48._1_3_,bVar4);
      pIVar11 = g_data_075566f0;
    }
  }
label_05de2f47:
  pIVar10 = il2cpp_vm_Object_Box(pIVar11,&fStack_48);
  return pIVar10;
}


// Utility.BaseCSVObject$$.ctor
// il2cpp: void Utility_BaseCSVObject___ctor (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x5de1370

void Utility_BaseCSVObject___ctor(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.BaseCSVObject$$.cctor
// il2cpp: void Utility_BaseCSVObject___cctor (const MethodInfo* method);
// 0x5de3070

void Utility_BaseCSVObject___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Type__List_FieldInfo___o *__this;
  
  if (Il2CppMethodInitialized_0754828c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseCSVObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo);
    Il2CppMethodInitialized_0754828c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_Type_List_FieldInfo_ctor);
  TypeInfo_Utility_BaseCSVObject->static_fields->_fields = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_BaseCSVObject->static_fields->_fields);
  return;
}


