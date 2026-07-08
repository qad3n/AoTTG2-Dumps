// Type: Utility.BaseCSVObject
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/BaseCSVObject.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/CSV/BaseCSVObject.cs  [CHANGED since prior version]
// --------------------------------

// Utility.BaseCSVObject.<>c$$.cctor
// il2cpp: void Utility_BaseCSVObject___c___cctor (const MethodInfo* method);
// 0x4153af0

void Utility_BaseCSVObject_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057049f9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057049f9 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Utility.BaseCSVObject.<>c$$.ctor
// il2cpp: void Utility_BaseCSVObject___c___ctor (Utility_BaseCSVObject___c_o* __this, const MethodInfo* method);
// 0x4153b60

void Utility_BaseCSVObject_<>c___ctor(Utility_BaseCSVObject___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.BaseCSVObject.<>c$$<GetFields>b__12_0
// il2cpp: int32_t Utility_BaseCSVObject___c___GetFields_b__12_0 (Utility_BaseCSVObject___c_o* __this, System_Reflection_FieldInfo_o* t, const MethodInfo* method);
// 0x4153b70

int32_t Utility_BaseCSVObject_<>c__<GetFields>b__12_0
                  (Utility_BaseCSVObject___c_o *__this,System_Reflection_FieldInfo_o *t,
                  MethodInfo *method)

{
  long *plVar1;
  System_RuntimeTypeHandle_o SVar2;
  bool_conflict bVar3;
  System_Type_o *pSVar4;
  long lVar5;
  
  if (DAT_057049fa == '\0') {
    il2cpp_init_method_metadata(&TypeRef_OrderAttribute);
    il2cpp_init_method_metadata(&TypeInfo_OrderAttribute);
    DAT_057049fa = '\x01';
  }
  SVar2.fields.value = TypeRef_OrderAttribute.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  bVar3 = System_Attribute__IsDefined((System_Reflection_MemberInfo_o *)t,pSVar4,(MethodInfo *)0x0);
  SVar2 = TypeRef_OrderAttribute;
  if ((char)bVar3 == '\0') {
    return 0;
  }
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if ((t != (System_Reflection_FieldInfo_o *)0x0) &&
     (lVar5 = (*(t->klass->vtable)._14_GetCustomAttributes.methodPtr)
                        (t,pSVar4,1,(t->klass->vtable)._14_GetCustomAttributes.method), lVar5 != 0))
  {
    if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar1 = *(long **)(lVar5 + 0x20);
    if (plVar1 != (long *)0x0) {
      if ((*(byte *)(TypeInfo_OrderAttribute + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
         (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_OrderAttribute + 0x130) * 8) ==
          TypeInfo_OrderAttribute)) {
        return (int32_t)plVar1[2];
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.BaseCSVObject$$get_Delimiter
// il2cpp: uint16_t Utility_BaseCSVObject__get_Delimiter (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x4151ab0

uint16_t Utility_BaseCSVObject__get_Delimiter(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  return 0x2c;
}


// Utility.BaseCSVObject$$get_ParamDelimiter
// il2cpp: uint16_t Utility_BaseCSVObject__get_ParamDelimiter (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x4151ac0

uint16_t Utility_BaseCSVObject__get_ParamDelimiter
                   (Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  return 0x3a;
}


// Utility.BaseCSVObject$$get_StructDelimiter
// il2cpp: uint16_t Utility_BaseCSVObject__get_StructDelimiter (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x4151ad0

uint16_t Utility_BaseCSVObject__get_StructDelimiter
                   (Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  return 0x2f;
}


// Utility.BaseCSVObject$$get_NamedParams
// il2cpp: bool Utility_BaseCSVObject__get_NamedParams (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x4151ae0

bool_conflict
Utility_BaseCSVObject__get_NamedParams(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  return 0;
}


// Utility.BaseCSVObject$$Serialize
// il2cpp: System_String_o* Utility_BaseCSVObject__Serialize (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x4151740

System_String_o *
Utility_BaseCSVObject__Serialize(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  undefined2 uVar5;
  ulong in_RAX;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  System_String_array *value;
  int iVar8;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (DAT_057049f0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_FieldInfo_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_057049f0 = '\x01';
  }
  uStack_38 = uStack_38 & 0xffffffffffff;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
  __this_01 = (System_Collections_Generic_List_object__o *)
              (*(__this->klass->vtable)._11_GetFields.methodPtr)(__this);
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar8 = (__this_01->fields)._size;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < iVar8) {
        pIVar6 = System_Collections_Generic_List<object>__get_Item(__this_01,0,MethodInfo_FieldInfo_get_Item);
        (*(__this->klass->vtable)._14_SerializeField.methodPtr)
                  (__this,pIVar6,__this,(__this->klass->vtable)._14_SerializeField.method);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else if (0 < iVar8) {
      iVar8 = 0;
      do {
        while( true ) {
          pIVar6 = System_Collections_Generic_List<object>__get_Item(__this_01,iVar8,MethodInfo_FieldInfo_get_Item);
          pIVar6 = (Il2CppObject *)
                   (*(__this->klass->vtable)._14_SerializeField.methodPtr)
                             (__this,pIVar6,__this,(__this->klass->vtable)._14_SerializeField.method
                             );
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_04151924;
          uVar2 = (__this_00->fields)._size;
          if ((uint)pSVar3->max_length <= uVar2) break;
          (__this_00->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar6;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pIVar6);
          iVar8 = iVar8 + 1;
          if ((__this_01->fields)._size <= iVar8) goto LAB_041518ae;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,pIVar6,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        iVar8 = iVar8 + 1;
      } while (iVar8 < (__this_01->fields)._size);
    }
LAB_041518ae:
    uVar5 = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)(__this);
    uStack_38 = CONCAT26(uVar5,(undefined6)uStack_38);
    if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar7 = System_Char__ToString((short)&uStack_38 + 6,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      value = (System_String_array *)
              System_Collections_Generic_List<object>__ToArray(__this_00,MethodInfo_String___ToArray);
      pSVar7 = System_String__Join(pSVar7,value,(MethodInfo *)0x0);
      return pSVar7;
    }
  }
LAB_04151924:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.BaseCSVObject$$Deserialize
// il2cpp: void Utility_BaseCSVObject__Deserialize (Utility_BaseCSVObject_o* __this, System_String_o* csv, const MethodInfo* method);
// 0x4151af0

void Utility_BaseCSVObject__Deserialize
               (Utility_BaseCSVObject_o *__this,System_String_o *csv,MethodInfo *method)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  uint16_t uVar4;
  uint uVar5;
  bool_conflict bVar6;
  System_String_array *pSVar7;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar8;
  System_String_array *pSVar9;
  System_Reflection_FieldInfo_o *left;
  Il2CppObject *pIVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  MethodInfo *extraout_RDX;
  uint uVar15;
  long lVar16;
  int32_t index;
  ulong uVar17;
  
  if (DAT_057049f1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IList);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_FieldInfo_get_Item);
    DAT_057049f1 = '\x01';
    method = extraout_RDX;
  }
  uVar4 = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)
                    (__this,(__this->klass->vtable)._4_get_Delimiter.method,method);
  if (csv != (System_String_o *)0x0) {
    pSVar7 = System_String__Split(csv,uVar4,0,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_List_object__o *)
                (*(__this->klass->vtable)._11_GetFields.methodPtr)(__this);
    if (pSVar7 != (System_String_array *)0x0) {
      uVar5 = (uint)pSVar7->max_length;
      if (0 < (int)uVar5) {
        uVar15 = 0;
        do {
          if (uVar5 <= uVar15) goto LAB_04151fa0;
          if (pSVar7->m_Items[(int)uVar15] == (System_String_o *)0x0) goto LAB_04151fa5;
          pSVar8 = System_String__Trim(pSVar7->m_Items[(int)uVar15],(MethodInfo *)0x0);
          if ((uint)pSVar7->max_length <= uVar15) goto LAB_04151fa0;
          pSVar7->m_Items[(int)uVar15] = pSVar8;
          il2cpp_runtime_glue();
          uVar15 = uVar15 + 1;
          uVar5 = (uint)pSVar7->max_length;
        } while ((int)uVar15 < (int)uVar5);
      }
      cVar3 = (*(__this->klass->vtable)._7_get_NamedParams.methodPtr)
                        (__this,(__this->klass->vtable)._7_get_NamedParams.method);
      if (cVar3 == '\0') {
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_04151fa5;
        if (0 < (__this_00->fields)._size) {
          uVar17 = 0;
          do {
            index = (int32_t)uVar17;
            pIVar10 = System_Collections_Generic_List<object>__get_Item
                                (__this_00,index,MethodInfo_FieldInfo_get_Item);
            cVar3 = (*(__this->klass->vtable)._13_IsList.methodPtr)
                              (__this,pIVar10,(__this->klass->vtable)._13_IsList.method);
            pIVar10 = System_Collections_Generic_List<object>__get_Item
                                (__this_00,index,MethodInfo_FieldInfo_get_Item);
            if (cVar3 != '\0') {
              if (((pIVar10 == (Il2CppObject *)0x0) ||
                  (plVar11 = (long *)(*pIVar10->klass->vtable[0x11].methodPtr)
                                               (pIVar10,pIVar10->klass->vtable[0x11].method),
                  plVar11 == (long *)0x0)) ||
                 (lVar16 = (**(code **)(*plVar11 + 0x468))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x470)), lVar16 == 0))
              goto LAB_04151fa5;
              if (*(int *)(lVar16 + 0x18) == 0) goto LAB_04151fa0;
              uVar2 = *(undefined8 *)(lVar16 + 0x20);
              pIVar10 = System_Collections_Generic_List<object>__get_Item
                                  (__this_00,index,MethodInfo_FieldInfo_get_Item);
              if ((pIVar10 == (Il2CppObject *)0x0) ||
                 (lVar12 = (*pIVar10->klass->vtable[0x1a].methodPtr)
                                     (pIVar10,__this,pIVar10->klass->vtable[0x1a].method),
                 lVar16 = TypeInfo_IList, lVar12 == 0)) goto LAB_04151fa5;
              plVar11 = (long *)il2cpp_runtime_glue(lVar12,TypeInfo_IList);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume(lVar12,lVar16);
              }
              lVar16 = *plVar11;
              if ((ulong)*(ushort *)(lVar16 + 0x12e) == 0) goto LAB_04151e4f;
              lVar12 = 0;
              goto LAB_04151e40;
            }
            if ((uint)pSVar7->max_length <= uVar17) goto LAB_04151fa0;
            (*(__this->klass->vtable)._15_DeserializeField.methodPtr)
                      (__this,pIVar10,__this,pSVar7->m_Items[uVar17],
                       (__this->klass->vtable)._15_DeserializeField.method);
            uVar17 = uVar17 + 1;
          } while ((long)uVar17 < (long)(__this_00->fields)._size);
        }
      }
      else {
        iVar1 = (int)pSVar7->max_length;
        if (0 < iVar1) {
          lVar16 = 0;
          if (iVar1 != 0) {
            do {
              pSVar8 = pSVar7->m_Items[lVar16];
              uVar4 = (*(__this->klass->vtable)._5_get_ParamDelimiter.methodPtr)
                                (__this,(__this->klass->vtable)._5_get_ParamDelimiter.method);
              if ((pSVar8 == (System_String_o *)0x0) ||
                 (pSVar9 = System_String__Split(pSVar8,uVar4,0,(MethodInfo *)0x0),
                 pSVar9 == (System_String_array *)0x0)) goto LAB_04151fa5;
              if ((int)pSVar9->max_length == 0) break;
              left = (System_Reflection_FieldInfo_o *)
                     (*(__this->klass->vtable)._12_FindField.methodPtr)
                               (__this,pSVar9->m_Items[0],
                                (__this->klass->vtable)._12_FindField.method);
              bVar6 = System_Reflection_FieldInfo__op_Inequality
                                (left,(System_Reflection_FieldInfo_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar6 != '\0') {
                if ((uint)pSVar9->max_length < 2) break;
                (*(__this->klass->vtable)._15_DeserializeField.methodPtr)
                          (__this,left,__this,pSVar9->m_Items[1],
                           (__this->klass->vtable)._15_DeserializeField.method);
              }
              uVar5 = (uint)pSVar7->max_length;
              lVar16 = lVar16 + 1;
              if ((int)uVar5 <= (int)(uint)lVar16) {
                return;
              }
            } while ((uint)lVar16 < uVar5);
          }
          goto LAB_04151fa0;
        }
      }
      return;
    }
  }
LAB_04151fa5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
  while (lVar12 = lVar12 + 0x10, (ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar12) {
LAB_04151e40:
    if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar12) == TypeInfo_IList) {
      puVar13 = (undefined8 *)
                (lVar16 + (long)(*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar12) + 4) * 0x10 + 0x138
                );
      goto LAB_04151e75;
    }
  }
LAB_04151e4f:
  puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar11,TypeInfo_IList,4);
LAB_04151e75:
  (*(code *)*puVar13)(plVar11,puVar13[1]);
  if ((int)pSVar7->max_length <= index) {
    return;
  }
  if (uVar17 < (pSVar7->max_length & 0xffffffff)) {
    do {
      bVar6 = System_String__op_Inequality
                        (pSVar7->m_Items[uVar17],
                         (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0
                        );
      if ((char)bVar6 != '\0') {
        if ((uint)pSVar7->max_length <= uVar17) break;
        uVar14 = (*(__this->klass->vtable)._17_DeserializeValue.methodPtr)
                           (__this,uVar2,pSVar7->m_Items[uVar17],
                            (__this->klass->vtable)._17_DeserializeValue.method);
        lVar16 = *plVar11;
        if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar12) == TypeInfo_IList) {
              puVar13 = (undefined8 *)
                        ((long)(*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar12) + 2) * 0x10 + lVar16
                        + 0x138);
              goto LAB_04151eb0;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar12);
        }
        puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar11,TypeInfo_IList,2);
LAB_04151eb0:
        (*(code *)*puVar13)(plVar11,uVar14,puVar13[1]);
      }
      uVar17 = uVar17 + 1;
      uVar5 = (uint)pSVar7->max_length;
      if ((long)(int)uVar5 <= (long)uVar17) {
        return;
      }
    } while (uVar17 < uVar5);
  }
LAB_04151fa0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.BaseCSVObject$$Copy
// il2cpp: void Utility_BaseCSVObject__Copy (Utility_BaseCSVObject_o* __this, Utility_BaseCSVObject_o* other, const MethodInfo* method);
// 0x4151fc0

void Utility_BaseCSVObject__Copy
               (Utility_BaseCSVObject_o *__this,Utility_BaseCSVObject_o *other,MethodInfo *method)

{
  Utility_BaseCSVObject_c *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar2;
  
  if (other != (Utility_BaseCSVObject_o *)0x0) {
    uVar2 = (*(other->klass->vtable)._8_Serialize.methodPtr)
                      (other,(other->klass->vtable)._8_Serialize.method);
    pUVar1 = __this->klass;
    vtable_dispatch = (pUVar1->vtable)._9_Deserialize.methodPtr;
    (*vtable_dispatch)
              (__this,uVar2,(pUVar1->vtable)._9_Deserialize.method,pUVar1,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.BaseCSVObject$$GetFields
// il2cpp: System_Collections_Generic_List_FieldInfo__o* Utility_BaseCSVObject__GetFields (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x4152000

System_Collections_Generic_List_FieldInfo__o *
Utility_BaseCSVObject__GetFields(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long lVar1;
  bool_conflict bVar2;
  System_Type_o *__this_01;
  System_Reflection_FieldInfo_array *source;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *value;
  System_Collections_Generic_List_FieldInfo__o *pSVar3;
  
  if (DAT_057049f2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCSVObject);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Reflection_FieldInfo__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_System_Reflection_FieldInfo);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Reflection_FieldInfo__ToList_Field);
    il2cpp_init_method_metadata(&TypeInfo_Func_FieldInfo__int);
    il2cpp_init_method_metadata(&MethodInfo_Int32__GetFields_b__12_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057049f2 = '\x01';
  }
  __this_01 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_BaseCSVObject + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)
      **(undefined8 **)(TypeInfo_BaseCSVObject + 0xb8) ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0415224d;
  bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_BaseCSVObject + 0xb8),(Il2CppObject *)__this_01,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_BaseCSVObject + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (__this_01 == (System_Type_o *)0x0) goto LAB_0415224d;
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                **(undefined8 **)(TypeInfo_BaseCSVObject + 0xb8);
    source = System_Type__GetFields(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_FieldInfo__int);
      System_Func<object__int>___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar1 + 8) = keySelector;
      il2cpp_runtime_glue(lVar1 + 8,keySelector);
    }
    source_00 = System_Linq_Enumerable__OrderBy<object__int>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,
                           MethodInfo_IOrderedEnumerable_1_System_Reflection_FieldInfo);
    value = System_Linq_Enumerable__ToList<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_System_Reflection_FieldInfo__ToList_Field);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto LAB_0415224d;
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this_00,(Il2CppObject *)__this_01,(Il2CppObject *)value,MethodInfo_Void_Add);
  }
  if (*(int *)(TypeInfo_BaseCSVObject + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)
      **(undefined8 **)(TypeInfo_BaseCSVObject + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar3 = (System_Collections_Generic_List_FieldInfo__o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)
                        **(undefined8 **)(TypeInfo_BaseCSVObject + 0xb8),(Il2CppObject *)__this_01,
                        MethodInfo_List_1_System_Reflection_FieldInfo__get_Item);
    return pSVar3;
  }
LAB_0415224d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.BaseCSVObject$$FindField
// il2cpp: System_Reflection_FieldInfo_o* Utility_BaseCSVObject__FindField (Utility_BaseCSVObject_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4152260

System_Reflection_FieldInfo_o *
Utility_BaseCSVObject__FindField
          (Utility_BaseCSVObject_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  System_Type_o *key;
  System_Collections_Generic_List_object__o *__this_03;
  System_String_o *a;
  Il2CppObject *pIVar2;
  int iVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  
  if (DAT_057049f3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCSVObject);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Reflection_FieldInfo__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_FieldInfo_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Reflection_FieldInfo);
    DAT_057049f3 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  pIVar6 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_BaseCSVObject + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              **(undefined8 **)(TypeInfo_BaseCSVObject + 0xb8);
  key = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_03 = (System_Collections_Generic_List_object__o *)
                System_Collections_Generic_Dictionary<object__object>__get_Item
                          (__this_00,(Il2CppObject *)key,MethodInfo_List_1_System_Reflection_FieldInfo__get_Item);
    if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
                 __this_03,MethodInfo_List_1_T__Enumerator_System_Reflection_FieldInfo);
      do {
        pIVar7 = pIVar6;
        __this_01.fields._8_8_ = pIVar5;
        __this_01.fields._list = pSVar4;
        __this_01.fields._current = pIVar7;
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
        if ((char)bVar1 == '\0') {
          iVar3 = 5;
          pIVar2 = (Il2CppObject *)0x0;
          goto LAB_0415239c;
        }
        if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pIVar6 = pIVar7;
        a = (System_String_o *)
            (*pIVar7->klass->vtable[8].methodPtr)(pIVar7,pIVar7->klass->vtable[8].method);
        bVar1 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
      } while ((char)bVar1 == '\0');
      iVar3 = 4;
      pIVar2 = pIVar7;
      pIVar7 = pIVar6;
LAB_0415239c:
      __this_02.fields._8_8_ = pIVar5;
      __this_02.fields._list = pSVar4;
      __this_02.fields._current = pIVar7;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
      pIVar6 = (Il2CppObject *)0x0;
      if (iVar3 == 4) {
        pIVar6 = pIVar2;
      }
      return (System_Reflection_FieldInfo_o *)pIVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.BaseCSVObject$$IsList
// il2cpp: bool Utility_BaseCSVObject__IsList (Utility_BaseCSVObject_o* __this, System_Reflection_FieldInfo_o* field, const MethodInfo* method);
// 0x4152460

bool_conflict
Utility_BaseCSVObject__IsList
          (Utility_BaseCSVObject_o *__this,System_Reflection_FieldInfo_o *field,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  char cVar1;
  bool_conflict bVar2;
  long *plVar3;
  System_Type_o *left;
  System_Type_o *right;
  MethodInfo *extraout_RDX;
  
  if (DAT_057049f4 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_List_T);
    DAT_057049f4 = '\x01';
    method = extraout_RDX;
  }
  if (field != (System_Reflection_FieldInfo_o *)0x0) {
    plVar3 = (long *)(*(field->klass->vtable)._17_unknown.methodPtr)
                               (field,(field->klass->vtable)._17_unknown.method,method);
    if (plVar3 != (long *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
      if (cVar1 == '\0') {
        return 0;
      }
      plVar3 = (long *)(*(field->klass->vtable)._17_unknown.methodPtr)
                                 (field,(field->klass->vtable)._17_unknown.method);
      if (plVar3 != (long *)0x0) {
        left = (System_Type_o *)(**(code **)(*plVar3 + 0x448))(plVar3);
        handle = TypeRef_List_T;
        if (*(int *)(DAT_05711100 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        bVar2 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.BaseCSVObject$$SerializeField
// il2cpp: System_String_o* Utility_BaseCSVObject__SerializeField (Utility_BaseCSVObject_o* __this, System_Reflection_FieldInfo_o* info, Il2CppObject* instance, const MethodInfo* method);
// 0x4152540

/* WARNING: Removing unreachable block (ram,0x04152b05) */
/* WARNING: Removing unreachable block (ram,0x04152c14) */

System_String_o *
Utility_BaseCSVObject__SerializeField
          (Utility_BaseCSVObject_o *__this,System_Reflection_FieldInfo_o *info,
          Il2CppObject *instance,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  char cVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_object__o *__this_00;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  Il2CppObject *item;
  System_String_array *value;
  long lVar13;
  undefined2 uStack_42;
  undefined8 uStack_40;
  System_String_o *pSStack_38;
  
  if (DAT_057049f5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_IList);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_057049f5 = '\x01';
  }
  uStack_42 = 0;
  pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  cVar4 = (*(__this->klass->vtable)._7_get_NamedParams.methodPtr)
                    (__this,(__this->klass->vtable)._7_get_NamedParams.method);
  if (cVar4 != '\0') {
    if (info == (System_Reflection_FieldInfo_o *)0x0) goto LAB_04152bef;
    pSVar5 = (System_String_o *)
             (*(info->klass->vtable)._8_unknown.methodPtr)
                       (info,(info->klass->vtable)._8_unknown.method);
    uStack_42 = (*(__this->klass->vtable)._5_get_ParamDelimiter.methodPtr)(__this);
    if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = System_Char__ToString((uint16_t)&uStack_42,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat(pSVar5,pSVar6,(MethodInfo *)0x0);
  }
  cVar4 = (*(__this->klass->vtable)._13_IsList.methodPtr)
                    (__this,info,(__this->klass->vtable)._13_IsList.method);
  if (cVar4 == '\0') {
    if (info != (System_Reflection_FieldInfo_o *)0x0) {
      uVar12 = (*(info->klass->vtable)._17_unknown.methodPtr)
                         (info,(info->klass->vtable)._17_unknown.method);
      uVar11 = (*(info->klass->vtable)._26_unknown.methodPtr)
                         (info,instance,(info->klass->vtable)._26_unknown.method);
      pSVar6 = (System_String_o *)
               (*(__this->klass->vtable)._16_SerializeValue.methodPtr)
                         (__this,uVar12,uVar11,(__this->klass->vtable)._16_SerializeValue.method);
LAB_04152b86:
      pSVar5 = System_String__Concat(pSVar5,pSVar6,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
  else {
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
    if (((info != (System_Reflection_FieldInfo_o *)0x0) &&
        (plVar7 = (long *)(*(info->klass->vtable)._17_unknown.methodPtr)
                                    (info,(info->klass->vtable)._17_unknown.method),
        plVar7 != (long *)0x0)) &&
       (lVar8 = (**(code **)(*plVar7 + 0x468))(plVar7,*(undefined8 *)(*plVar7 + 0x470)), lVar8 != 0)
       ) {
      if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uStack_40 = *(undefined8 *)(lVar8 + 0x20);
      pSStack_38 = pSVar5;
      lVar8 = (*(info->klass->vtable)._26_unknown.methodPtr)
                        (info,instance,(info->klass->vtable)._26_unknown.method);
      uVar12 = TypeInfo_IList;
      if (lVar8 != 0) {
        lVar9 = il2cpp_runtime_glue(lVar8,TypeInfo_IList);
        uVar11 = TypeInfo_IList;
        lVar13 = TypeInfo_IEnumerable;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(lVar8,uVar12);
        }
        plVar7 = (long *)il2cpp_runtime_glue(lVar8);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(lVar8,uVar11);
        }
        lVar8 = *plVar7;
        if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
          lVar9 = 0;
          do {
            if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar9) == lVar13) {
              puVar10 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar9) * 0x10 + lVar8 + 0x138)
              ;
              goto LAB_0415282c;
            }
            lVar9 = lVar9 + 0x10;
          } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar9);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar7,lVar13,0);
LAB_0415282c:
        plVar7 = (long *)(*(code *)*puVar10)(plVar7,puVar10[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          do {
            lVar8 = *plVar7;
            if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
              lVar13 = 0;
              do {
                if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar13) == TypeInfo_IEnumerator) {
                  puVar10 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar13) * 0x10 + lVar8 +
                            0x138);
                  goto LAB_041528d3;
                }
                lVar13 = lVar13 + 0x10;
              } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar13);
            }
            puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator,0);
LAB_041528d3:
            cVar4 = (*(code *)*puVar10)(plVar7,puVar10[1]);
            if (cVar4 == '\0') goto LAB_04152a78;
            lVar8 = *plVar7;
            if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
              lVar13 = 0;
              do {
                if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar13) == TypeInfo_IEnumerator) {
                  puVar10 = (undefined8 *)
                            ((long)(*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar13) + 1) * 0x10 +
                             lVar8 + 0x138);
                  goto LAB_04152958;
                }
                lVar13 = lVar13 + 0x10;
              } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar13);
            }
            puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator,1);
LAB_04152958:
            uVar12 = (*(code *)*puVar10)(plVar7,puVar10[1]);
            item = (Il2CppObject *)
                   (*(__this->klass->vtable)._16_SerializeValue.methodPtr)
                             (__this,uStack_40,uVar12,
                              (__this->klass->vtable)._16_SerializeValue.method);
            lVar8 = MethodInfo_Void_Add;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this_00->fields)._items;
            if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = item;
              il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,item);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,item,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
          } while( true );
        }
        lVar8 = *plVar7;
        if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
          lVar13 = 0;
          do {
            if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar13) == TypeInfo_IEnumerator) {
              puVar10 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar13) * 0x10 + lVar8 + 0x138
                        );
              goto LAB_04152a21;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar13);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator,0);
LAB_04152a21:
        cVar4 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        if (cVar4 != '\0') {
          lVar8 = *plVar7;
          if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
            lVar13 = 0;
            do {
              if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar13) == TypeInfo_IEnumerator) {
                puVar10 = (undefined8 *)
                          ((long)(*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar13) + 1) * 0x10 + lVar8
                          + 0x138);
                goto LAB_04152bc1;
              }
              lVar13 = lVar13 + 0x10;
            } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar13);
          }
          puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator,1);
LAB_04152bc1:
          uVar12 = (*(code *)*puVar10)(plVar7,puVar10[1]);
          (*(__this->klass->vtable)._16_SerializeValue.methodPtr)
                    (__this,uStack_40,uVar12,(__this->klass->vtable)._16_SerializeValue.method);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_04152a78:
        plVar7 = (long *)il2cpp_runtime_glue(plVar7,TypeInfo_IDisposable);
        if (plVar7 != (long *)0x0) {
          lVar8 = *plVar7;
          if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
            lVar13 = 0;
            do {
              if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
                puVar10 = (undefined8 *)
                          (lVar8 + (long)*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar13) * 0x10 +
                          0x138);
                goto LAB_04152aed;
              }
              lVar13 = lVar13 + 0x10;
            } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar13);
          }
          puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IDisposable,0);
LAB_04152aed:
          (*(code *)*puVar10)(plVar7,puVar10[1]);
        }
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          if ((__this_00->fields)._size < 1) {
            return pSStack_38;
          }
          uStack_42 = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)(__this);
          if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar5 = System_Char__ToString((uint16_t)&uStack_42,(MethodInfo *)0x0);
          value = (System_String_array *)
                  System_Collections_Generic_List<object>__ToArray(__this_00,MethodInfo_String___ToArray);
          pSVar6 = System_String__Join(pSVar5,value,(MethodInfo *)0x0);
          pSVar5 = pSStack_38;
          goto LAB_04152b86;
        }
      }
    }
  }
LAB_04152bef:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.BaseCSVObject$$DeserializeField
// il2cpp: void Utility_BaseCSVObject__DeserializeField (Utility_BaseCSVObject_o* __this, System_Reflection_FieldInfo_o* info, Il2CppObject* instance, System_String_o* value, const MethodInfo* method);
// 0x4152d50

void Utility_BaseCSVObject__DeserializeField
               (Utility_BaseCSVObject_o *__this,System_Reflection_FieldInfo_o *info,
               Il2CppObject *instance,System_String_o *value,MethodInfo *method)

{
  undefined8 uVar1;
  Il2CppObject *value_00;
  
  if (info != (System_Reflection_FieldInfo_o *)0x0) {
    uVar1 = (*(info->klass->vtable)._17_unknown.methodPtr)
                      (info,(info->klass->vtable)._17_unknown.method);
    value_00 = (Il2CppObject *)
               (*(__this->klass->vtable)._17_DeserializeValue.methodPtr)(__this,uVar1,value);
    System_Reflection_FieldInfo__SetValue(info,instance,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.BaseCSVObject$$SerializeValue
// il2cpp: System_String_o* Utility_BaseCSVObject__SerializeValue (Utility_BaseCSVObject_o* __this, System_Type_o* t, Il2CppObject* value, const MethodInfo* method);
// 0x4152dc0

System_String_o *
Utility_BaseCSVObject__SerializeValue
          (Utility_BaseCSVObject_o *__this,System_Type_o *t,Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  int iVar3;
  Il2CppClass_1 *pIVar4;
  char cVar5;
  bool_conflict bVar6;
  System_Type_o *pSVar7;
  System_String_o *pSVar8;
  undefined8 *puVar9;
  System_String_array *value_00;
  System_String_o *pSVar10;
  System_RuntimeTypeHandle_o SVar11;
  System_String_o **ppSVar12;
  float __this_00;
  float fVar13;
  float __this_01;
  undefined2 local_46;
  int32_t local_44;
  undefined1 local_40 [8];
  undefined1 local_38 [12];
  
  if (DAT_057049f6 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_BaseCSVObject);
    il2cpp_init_method_metadata(&TypeInfo_BaseCSVObject);
    il2cpp_init_method_metadata(&TypeRef_Color255);
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeRef_Vector2);
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    il2cpp_init_method_metadata(&TypeRef_Vector3);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_057049f6 = '\x01';
  }
  local_44 = 0;
  local_38._0_4_ = 0;
  local_40 = (undefined1  [8])0x0;
  local_46 = 0;
  stack0xffffffffffffffd0 = (InvokerMethod)0x0;
  pIVar4 = &DAT_057110b0->_1;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)&pIVar4->byval_arg,(MethodInfo *)0x0);
  bVar6 = System_Type__op_Equality(t,pSVar7,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    SVar11.fields.value = (System_RuntimeTypeHandle_Fields)(DAT_05711068 + 0x20);
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar7 = System_Type__GetTypeFromHandle(SVar11,(MethodInfo *)0x0);
    bVar6 = System_Type__op_Equality(t,pSVar7,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      SVar11.fields.value = (System_RuntimeTypeHandle_Fields)(DAT_05711098 + 0x20);
      if (*(int *)(DAT_05711100 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = System_Type__GetTypeFromHandle(SVar11,(MethodInfo *)0x0);
      bVar6 = System_Type__op_Equality(t,pSVar7,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        SVar11.fields.value = (System_RuntimeTypeHandle_Fields)(DAT_05711048 + 0x20);
        if (*(int *)(DAT_05711100 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = System_Type__GetTypeFromHandle(SVar11,(MethodInfo *)0x0);
        bVar6 = System_Type__op_Equality(t,pSVar7,(MethodInfo *)0x0);
        SVar11 = TypeRef_BaseCSVObject;
        if ((char)bVar6 != '\0') {
          if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
            il2cpp_init_class();
          }
          local_44 = System_Convert__ToInt32(value,(MethodInfo *)0x0);
          pSVar8 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
          return pSVar8;
        }
        if (*(int *)(DAT_05711100 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = System_Type__GetTypeFromHandle(SVar11,(MethodInfo *)0x0);
        if (pSVar7 != (System_Type_o *)0x0) {
          cVar5 = (*(pSVar7->klass->vtable)._22_IsAssignableFrom.methodPtr)
                            (pSVar7,t,(pSVar7->klass->vtable)._22_IsAssignableFrom.method);
          SVar11 = TypeRef_Vector3;
          if (cVar5 == '\0') {
            if (*(int *)(DAT_05711100 + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = System_Type__GetTypeFromHandle(SVar11,(MethodInfo *)0x0);
            bVar6 = System_Type__op_Equality(t,pSVar7,(MethodInfo *)0x0);
            SVar11 = TypeRef_Vector2;
            if ((char)bVar6 == '\0') {
              if (*(int *)(DAT_05711100 + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = System_Type__GetTypeFromHandle(SVar11,(MethodInfo *)0x0);
              bVar6 = System_Type__op_Equality(t,pSVar7,(MethodInfo *)0x0);
              SVar11 = TypeRef_Color255;
              if ((char)bVar6 == '\0') {
                if (*(int *)(DAT_05711100 + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar7 = System_Type__GetTypeFromHandle(SVar11,(MethodInfo *)0x0);
                bVar6 = System_Type__op_Equality(t,pSVar7,(MethodInfo *)0x0);
                if ((char)bVar6 == '\0') {
                  return *(System_String_o **)DAT_057110b0->static_fields;
                }
                if (value != (Il2CppObject *)0x0) {
                  bVar1 = (TypeInfo_Color255->_2).naturalAligment;
                  if (((value->klass->_2).naturalAligment < bVar1) ||
                     ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Color255))
                  goto LAB_04152ee2;
                }
                local_46 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)(__this);
                if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar8 = System_Char__ToString((uint16_t)&local_46,(MethodInfo *)0x0);
                value_00 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string);
                if (value != (Il2CppObject *)0x0) {
                  iVar3 = (int)value;
                  pSVar10 = System_Int32__ToString(iVar3 + 0x10,(MethodInfo *)0x0);
                  if (value_00 != (System_String_array *)0x0) {
                    if ((int)value_00->max_length != 0) {
                      value_00->m_Items[0] = pSVar10;
                      il2cpp_runtime_glue(value_00->m_Items);
                      pSVar10 = System_Int32__ToString(iVar3 + 0x14,(MethodInfo *)0x0);
                      if (1 < (uint)value_00->max_length) {
                        value_00->m_Items[1] = pSVar10;
                        il2cpp_runtime_glue(value_00->m_Items + 1);
                        pSVar10 = System_Int32__ToString(iVar3 + 0x18,(MethodInfo *)0x0);
                        if (2 < (uint)value_00->max_length) {
                          value_00->m_Items[2] = pSVar10;
                          il2cpp_runtime_glue(value_00->m_Items + 2);
                          pSVar10 = System_Int32__ToString(iVar3 + 0x1c,(MethodInfo *)0x0);
                          if (3 < (uint)value_00->max_length) {
                            ppSVar12 = value_00->m_Items + 3;
                            value_00->m_Items[3] = pSVar10;
                            goto LAB_0415347f;
                          }
                        }
                      }
                    }
                    goto LAB_041534b4;
                  }
                }
              }
              else if (value != (Il2CppObject *)0x0) {
                if ((value->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Vector2 + 0x40))
                goto LAB_04152ee2;
                puVar9 = (undefined8 *)il2cpp_glue_022c7330(value);
                unique0x00023e00 = (InvokerMethod)*puVar9;
                local_46 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)(__this);
                if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar8 = System_Char__ToString((uint16_t)&local_46,(MethodInfo *)0x0);
                value_00 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                pSVar10 = System_Single__ToString(__this_01,(MethodInfo *)(local_38 + 8));
                if (value_00 != (System_String_array *)0x0) {
                  if ((int)value_00->max_length != 0) {
                    value_00->m_Items[0] = pSVar10;
                    fVar13 = (float)il2cpp_runtime_glue(value_00->m_Items,pSVar10);
                    pSVar10 = System_Single__ToString(fVar13,(MethodInfo *)&stack0xffffffffffffffd4)
                    ;
                    if (1 < (uint)value_00->max_length) {
                      ppSVar12 = value_00->m_Items + 1;
                      value_00->m_Items[1] = pSVar10;
                      goto LAB_0415347f;
                    }
                  }
                  goto LAB_041534b4;
                }
              }
            }
            else if (value != (Il2CppObject *)0x0) {
              if ((value->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Vector3 + 0x40))
              goto LAB_04152ee2;
              puVar9 = (undefined8 *)il2cpp_glue_022c7330(value);
              local_40 = (undefined1  [8])*puVar9;
              local_38._0_4_ = *(undefined4 *)(puVar9 + 1);
              local_46 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)(__this);
              if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar8 = System_Char__ToString((uint16_t)&local_46,(MethodInfo *)0x0);
              value_00 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,3);
              pSVar10 = System_Single__ToString(__this_00,(MethodInfo *)local_40);
              if (value_00 != (System_String_array *)0x0) {
                if ((int)value_00->max_length != 0) {
                  value_00->m_Items[0] = pSVar10;
                  fVar13 = (float)il2cpp_runtime_glue(value_00->m_Items,pSVar10);
                  pSVar10 = System_Single__ToString(fVar13,(MethodInfo *)(local_40 + 4));
                  if (1 < (uint)value_00->max_length) {
                    value_00->m_Items[1] = pSVar10;
                    fVar13 = (float)il2cpp_runtime_glue(value_00->m_Items + 1,pSVar10);
                    pSVar10 = System_Single__ToString(fVar13,(MethodInfo *)local_38);
                    if (2 < (uint)value_00->max_length) {
                      ppSVar12 = value_00->m_Items + 2;
                      value_00->m_Items[2] = pSVar10;
LAB_0415347f:
                      il2cpp_runtime_glue(ppSVar12,pSVar10);
                      pSVar8 = System_String__Join(pSVar8,value_00,(MethodInfo *)0x0);
                      return pSVar8;
                    }
                  }
                }
LAB_041534b4:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
            }
          }
          else if (value != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_BaseCSVObject->_2).naturalAligment;
            if ((bVar1 <= (value->klass->_2).naturalAligment) &&
               ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseCSVObject)) {
              pIVar2 = value->klass;
              bVar1 = (TypeInfo_BaseCSVObject->_2).naturalAligment;
              if ((bVar1 <= (pIVar2->_2).naturalAligment) &&
                 ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseCSVObject)) {
                pSVar8 = (System_String_o *)
                         (*pIVar2->vtable[8].methodPtr)(value,pIVar2->vtable[8].method);
                return pSVar8;
              }
            }
LAB_04152ee2:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(value);
          }
        }
        goto LAB_041534af;
      }
    }
    if (value == (Il2CppObject *)0x0) {
LAB_041534af:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    value = (Il2CppObject *)
            (*value->klass->vtable[3].methodPtr)(value,value->klass->vtable[3].method);
  }
  else if ((value != (Il2CppObject *)0x0) && (value->klass != DAT_057110b0)) goto LAB_04152ee2;
  return (System_String_o *)value;
}


// Utility.BaseCSVObject$$DeserializeValue
// il2cpp: Il2CppObject* Utility_BaseCSVObject__DeserializeValue (Utility_BaseCSVObject_o* __this, System_Type_o* t, System_String_o* value, const MethodInfo* method);
// 0x41534c0

/* WARNING: Type propagation algorithm not settling */

Il2CppObject *
Utility_BaseCSVObject__DeserializeValue
          (Utility_BaseCSVObject_o *__this,System_Type_o *t,System_String_o *value,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  char cVar3;
  uint16_t uVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  int32_t iVar7;
  int32_t iVar8;
  int32_t iVar9;
  System_Type_o *pSVar10;
  System_String_array *pSVar11;
  long *plVar12;
  Il2CppObject *pIVar13;
  System_RuntimeTypeHandle_o SVar14;
  long lVar15;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  
  if (DAT_057049f7 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_BaseCSVObject);
    il2cpp_init_method_metadata(&TypeInfo_BaseCSVObject);
    il2cpp_init_method_metadata(&TypeRef_Color255);
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    il2cpp_init_method_metadata(&TypeRef_Vector2);
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    il2cpp_init_method_metadata(&TypeRef_Vector3);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_057049f7 = '\x01';
  }
  SVar14.fields.value = (System_RuntimeTypeHandle_Fields)(DAT_057110b0 + 0x20);
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar10 = System_Type__GetTypeFromHandle(SVar14,(MethodInfo *)0x0);
  bVar5 = System_Type__op_Equality(t,pSVar10,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (Il2CppObject *)value;
  }
  SVar14.fields.value = (System_RuntimeTypeHandle_Fields)(DAT_05711068 + 0x20);
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar10 = System_Type__GetTypeFromHandle(SVar14,(MethodInfo *)0x0);
  bVar5 = System_Type__op_Equality(t,pSVar10,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    SVar14.fields.value = (System_RuntimeTypeHandle_Fields)(DAT_05711098 + 0x20);
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar10 = System_Type__GetTypeFromHandle(SVar14,(MethodInfo *)0x0);
    bVar5 = System_Type__op_Equality(t,pSVar10,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      SVar14.fields.value = (System_RuntimeTypeHandle_Fields)(DAT_05711048 + 0x20);
      if (*(int *)(DAT_05711100 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar10 = System_Type__GetTypeFromHandle(SVar14,(MethodInfo *)0x0);
      bVar5 = System_Type__op_Equality(t,pSVar10,(MethodInfo *)0x0);
      SVar14 = TypeRef_BaseCSVObject;
      if ((char)bVar5 == '\0') {
        if (*(int *)(DAT_05711100 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = System_Type__GetTypeFromHandle(SVar14,(MethodInfo *)0x0);
        if (pSVar10 != (System_Type_o *)0x0) {
          cVar3 = (*(pSVar10->klass->vtable)._22_IsAssignableFrom.methodPtr)
                            (pSVar10,t,(pSVar10->klass->vtable)._22_IsAssignableFrom.method);
          SVar14 = TypeRef_Vector3;
          if (cVar3 == '\0') {
            if (*(int *)(DAT_05711100 + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = System_Type__GetTypeFromHandle(SVar14,(MethodInfo *)0x0);
            bVar5 = System_Type__op_Equality(t,pSVar10,(MethodInfo *)0x0);
            SVar14 = TypeRef_Vector2;
            if ((char)bVar5 == '\0') {
              if (*(int *)(DAT_05711100 + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = System_Type__GetTypeFromHandle(SVar14,(MethodInfo *)0x0);
              bVar5 = System_Type__op_Equality(t,pSVar10,(MethodInfo *)0x0);
              SVar14 = TypeRef_Color255;
              if ((char)bVar5 == '\0') {
                if (*(int *)(DAT_05711100 + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar10 = System_Type__GetTypeFromHandle(SVar14,(MethodInfo *)0x0);
                bVar5 = System_Type__op_Equality(t,pSVar10,(MethodInfo *)0x0);
                if ((char)bVar5 == '\0') {
                  return (Il2CppObject *)0x0;
                }
                uVar4 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                                  (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
                if ((value != (System_String_o *)0x0) &&
                   (pSVar11 = System_String__Split(value,uVar4,0,(MethodInfo *)0x0),
                   pSVar11 != (System_String_array *)0x0)) {
                  if (((int)pSVar11->max_length != 0) &&
                     (((iVar6 = System_Int32__Parse(pSVar11->m_Items[0],(MethodInfo *)0x0),
                       1 < (uint)pSVar11->max_length &&
                       (iVar7 = System_Int32__Parse(pSVar11->m_Items[1],(MethodInfo *)0x0),
                       2 < (uint)pSVar11->max_length)) &&
                      (iVar8 = System_Int32__Parse(pSVar11->m_Items[2],(MethodInfo *)0x0),
                      3 < (uint)pSVar11->max_length)))) {
                    iVar9 = System_Int32__Parse(pSVar11->m_Items[3],(MethodInfo *)0x0);
                    pIVar13 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Color255);
                    System_Object___ctor(pIVar13,(MethodInfo *)0x0);
                    *(int32_t *)&pIVar13[1].klass = iVar6;
                    *(int32_t *)((long)&pIVar13[1].klass + 4) = iVar7;
                    *(int32_t *)&pIVar13[1].monitor = iVar8;
                    *(int32_t *)((long)&pIVar13[1].monitor + 4) = iVar9;
                    return pIVar13;
                  }
LAB_04153a15:
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                goto LAB_04153a10;
              }
              uVar4 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                                (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
              if ((value == (System_String_o *)0x0) ||
                 (pSVar11 = System_String__Split(value,uVar4,0,(MethodInfo *)0x0),
                 pSVar11 == (System_String_array *)0x0)) goto LAB_04153a10;
              if (((int)pSVar11->max_length == 0) ||
                 (local_38 = System_Single__Parse(pSVar11->m_Items[0],(MethodInfo *)0x0),
                 (uint)pSVar11->max_length < 2)) goto LAB_04153a15;
              local_44 = System_Single__Parse(pSVar11->m_Items[1],(MethodInfo *)0x0);
              plVar12 = &TypeInfo_Vector2;
            }
            else {
              uVar4 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                                (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
              if ((value == (System_String_o *)0x0) ||
                 (pSVar11 = System_String__Split(value,uVar4,0,(MethodInfo *)0x0),
                 pSVar11 == (System_String_array *)0x0)) goto LAB_04153a10;
              if ((((int)pSVar11->max_length == 0) ||
                  (local_38 = System_Single__Parse(pSVar11->m_Items[0],(MethodInfo *)0x0),
                  (uint)pSVar11->max_length < 2)) ||
                 (local_34 = System_Single__Parse(pSVar11->m_Items[1],(MethodInfo *)0x0),
                 (uint)pSVar11->max_length < 3)) goto LAB_04153a15;
              local_40 = System_Single__Parse(pSVar11->m_Items[2],(MethodInfo *)0x0);
              local_44 = local_34;
              plVar12 = &TypeInfo_Vector3;
            }
            lVar15 = *plVar12;
            local_48 = local_38;
            goto LAB_04153901;
          }
          pIVar13 = System_Activator__CreateInstance(t,(MethodInfo *)0x0);
          if (pIVar13 != (Il2CppObject *)0x0) {
            pIVar2 = pIVar13->klass;
            bVar1 = (TypeInfo_BaseCSVObject->_2).naturalAligment;
            if ((bVar1 <= (pIVar2->_2).naturalAligment) &&
               ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseCSVObject)) {
              (*pIVar2->vtable[9].methodPtr)(pIVar13,value,pIVar2->vtable[9].method);
              return pIVar13;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pIVar13);
          }
        }
LAB_04153a10:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar6 = System_Int32__Parse(value,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = System_Convert__ToBoolean(iVar6,(MethodInfo *)0x0);
      local_48 = (float)CONCAT31(local_48._1_3_,(char)bVar5);
      lVar15 = DAT_05711048;
    }
    else {
      local_48 = System_Single__Parse(value,(MethodInfo *)0x0);
      lVar15 = DAT_05711098;
    }
  }
  else {
    local_48 = (float)System_Int32__Parse(value,(MethodInfo *)0x0);
    lVar15 = DAT_05711068;
  }
LAB_04153901:
  pIVar13 = (Il2CppObject *)il2cpp_runtime_glue(lVar15,&local_48);
  return pIVar13;
}


// Utility.BaseCSVObject$$.ctor
// il2cpp: void Utility_BaseCSVObject___ctor (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x4151aa0

void Utility_BaseCSVObject___ctor(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.BaseCSVObject$$.cctor
// il2cpp: void Utility_BaseCSVObject___cctor (const MethodInfo* method);
// 0x4153a70

void Utility_BaseCSVObject___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (DAT_057049f8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCSVObject);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Type_List_1_System_Reflectio);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_Type__List_FieldInfo);
    DAT_057049f8 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_Type__List_FieldInfo);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_Type_List_1_System_Reflectio);
  **(undefined8 **)(TypeInfo_BaseCSVObject + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_BaseCSVObject + 0xb8),__this);
  return;
}


