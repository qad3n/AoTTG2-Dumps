// Type: Utility.BaseCSVObject
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/BaseCSVObject.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/BaseCSVObject.cs
// --------------------------------

// Utility.BaseCSVObject.<>c$$.cctor
// il2cpp: void Utility_BaseCSVObject___c___cctor (const MethodInfo* method);
// 0x448ec20

void Utility_BaseCSVObject___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae8f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae8f0 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Utility.BaseCSVObject.<>c$$.ctor
// il2cpp: void Utility_BaseCSVObject___c___ctor (Utility_BaseCSVObject___c_o* __this, const MethodInfo* method);
// 0x448ec90

void Utility_BaseCSVObject___c___ctor(Utility_BaseCSVObject___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.BaseCSVObject.<>c$$<GetFields>b__12_0
// il2cpp: int32_t Utility_BaseCSVObject___c___GetFields_b__12_0 (Utility_BaseCSVObject___c_o* __this, System_Reflection_FieldInfo_o* t, const MethodInfo* method);
// 0x448eca0

int32_t Utility_BaseCSVObject___c___GetFields_b__12_0
                  (Utility_BaseCSVObject___c_o *__this,System_Reflection_FieldInfo_o *t,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  bool_conflict bVar3;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  System_Type_o *pSVar4;
  long lVar5;
  System_RuntimeTypeHandle_o SVar6;
  
  if (g_data_057ae8f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_OrderAttribute);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OrderAttribute);
    g_data_057ae8f1 = '\x01';
  }
  SVar6.fields.value = TypeRef_OrderAttribute.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
  bVar3 = System_Attribute__IsDefined((System_Reflection_MemberInfo_o *)t,pSVar4,(MethodInfo *)0x0);
  SVar6 = TypeRef_OrderAttribute;
  if ((char)bVar3 == '\0') {
    return 0;
  }
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
  if ((t == (System_Reflection_FieldInfo_o *)0x0) ||
     (lVar5 = (*(t->klass->vtable)._14_GetCustomAttributes.methodPtr)
                        (t,pSVar4,1,(t->klass->vtable)._14_GetCustomAttributes.method),
     SVar6.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)t, lVar5 == 0)) {
label_0448edac:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(lVar5 + 0x18) == 0) goto label_0448edb6;
    SVar6.fields.value = *(System_RuntimeTypeHandle_Fields *)(lVar5 + 0x20);
    if (SVar6.fields.value == 0) goto label_0448edac;
    bVar1 = (TypeInfo_OrderAttribute->_2).naturalAligment;
    if ((bVar1 <= (((Il2CppObject *)SVar6.fields.value)->klass->_2).naturalAligment) &&
       ((((Il2CppObject *)SVar6.fields.value)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_OrderAttribute)) {
      return *(int32_t *)&((Il2CppObject *)((long)SVar6.fields.value + 0x10))->klass;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
label_0448edb6:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae8f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    g_data_057ae8f2 = '\x01';
    iVar2 = *(int *)(TypeInfo_BaseCSVObject + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_BaseCSVObject + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    System_Object___ctor((Il2CppObject *)SVar6.fields.value,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  System_Object___ctor((Il2CppObject *)SVar6.fields.value,(MethodInfo *)0x0);
  return extraout_EAX;
}


// Utility.BaseCSVObject$$get_Delimiter
// il2cpp: uint16_t Utility_BaseCSVObject__get_Delimiter (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x448cc20

uint16_t Utility_BaseCSVObject__get_Delimiter(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  return 0x2c;
}


// Utility.BaseCSVObject$$get_ParamDelimiter
// il2cpp: uint16_t Utility_BaseCSVObject__get_ParamDelimiter (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x448cc30

uint16_t Utility_BaseCSVObject__get_ParamDelimiter(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  return 0x3a;
}


// Utility.BaseCSVObject$$get_StructDelimiter
// il2cpp: uint16_t Utility_BaseCSVObject__get_StructDelimiter (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x448cc40

uint16_t Utility_BaseCSVObject__get_StructDelimiter(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  return 0x2f;
}


// Utility.BaseCSVObject$$get_NamedParams
// il2cpp: bool Utility_BaseCSVObject__get_NamedParams (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x448cc50

bool_conflict Utility_BaseCSVObject__get_NamedParams(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  return 0;
}


// Utility.BaseCSVObject$$Serialize
// il2cpp: System_String_o* Utility_BaseCSVObject__Serialize (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x448c8b0

System_String_o * Utility_BaseCSVObject__Serialize(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  undefined2 uVar5;
  uint16_t separator;
  ulong in_RAX;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  System_String_o *extraout_RAX;
  System_String_o *extraout_RAX_00;
  Utility_BaseCSVObject_c *unaff_RBX;
  int iVar9;
  Il2CppObject *__this_02;
  System_Collections_Generic_List_object__o *unaff_R15;
  undefined8 uStack_50;
  Utility_BaseCSVObject_c *pUStack_48;
  Utility_BaseCSVObject_o *pUStack_40;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (g_data_057ae8e7 == '\0') {
    pUStack_40 = (Utility_BaseCSVObject_o *)0x448c8d3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pUStack_40 = (Utility_BaseCSVObject_o *)0x448c8df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    pUStack_40 = (Utility_BaseCSVObject_o *)0x448c8eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pUStack_40 = (Utility_BaseCSVObject_o *)0x448c8f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pUStack_40 = (Utility_BaseCSVObject_o *)0x448c903;
    il2cpp_runtime_helper_023445d0(&MethodInfo_FieldInfo_get_Item);
    pUStack_40 = (Utility_BaseCSVObject_o *)0x448c90f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae8e7 = '\x01';
  }
  uStack_38 = uStack_38 & 0xffffffffffff;
  pUStack_40 = (Utility_BaseCSVObject_o *)0x448c92c;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pUStack_40 = (Utility_BaseCSVObject_o *)0x448c941;
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
  pUStack_40 = (Utility_BaseCSVObject_o *)0x448c954;
  __this_01 = (System_Collections_Generic_List_object__o *)
              (*(__this->klass->vtable)._11_GetFields.methodPtr)(__this);
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar9 = (__this_01->fields)._size;
    unaff_R15 = __this_01;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < iVar9) goto label_0448ca99;
    }
    else if (0 < iVar9) {
      iVar9 = 0;
      do {
        while( true ) {
          pUStack_40 = (Utility_BaseCSVObject_o *)0x448c9b7;
          pIVar6 = System_Collections_Generic_List_object___get_Item(__this_01,iVar9,MethodInfo_FieldInfo_get_Item);
          unaff_RBX = __this->klass;
          pUStack_40 = (Utility_BaseCSVObject_o *)0x448c9d0;
          pIVar6 = (Il2CppObject *)
                   (*(unaff_RBX->vtable)._14_SerializeField.methodPtr)
                             (__this,pIVar6,__this,(unaff_RBX->vtable)._14_SerializeField.method);
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto label_0448ca94;
          uVar2 = (__this_00->fields)._size;
          if ((uint)pSVar3->max_length <= uVar2) break;
          (__this_00->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar6;
          pUStack_40 = (Utility_BaseCSVObject_o *)0x448ca0f;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pIVar6);
          iVar9 = iVar9 + 1;
          if ((__this_01->fields)._size <= iVar9) goto label_0448ca1e;
        }
        pUStack_40 = (Utility_BaseCSVObject_o *)0x448c99a;
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                  );
        iVar9 = iVar9 + 1;
      } while (iVar9 < (__this_01->fields)._size);
    }
label_0448ca1e:
    pUStack_40 = (Utility_BaseCSVObject_o *)0x448ca31;
    uVar5 = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)(__this);
    uStack_38 = CONCAT26(uVar5,(undefined6)uStack_38);
    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
      pUStack_40 = (Utility_BaseCSVObject_o *)0x448ca52;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_40 = (Utility_BaseCSVObject_o *)0x448ca5e;
    pSVar7 = System_Char__ToString((short)&uStack_38 + 6,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      pUStack_40 = (Utility_BaseCSVObject_o *)0x448ca78;
      pSVar8 = (System_String_array *)System_Collections_Generic_List_object___ToArray(__this_00,MethodInfo_String_ToArray)
      ;
      pUStack_40 = (Utility_BaseCSVObject_o *)0x448ca85;
      pSVar7 = System_String__Join(pSVar7,pSVar8,(MethodInfo *)0x0);
      return pSVar7;
    }
  }
label_0448ca94:
  pUStack_40 = (Utility_BaseCSVObject_o *)0x448ca99;
  il2cpp_runtime_helper_022b2c90();
  __this_01 = unaff_R15;
label_0448ca99:
  pUStack_40 = (Utility_BaseCSVObject_o *)0x448caad;
  pSVar7 = (System_String_o *)System_Collections_Generic_List_object___get_Item(__this_01,0,MethodInfo_FieldInfo_get_Item);
  pUStack_40 = (Utility_BaseCSVObject_o *)0x448cac6;
  pIVar6 = (Il2CppObject *)__this;
  (*(__this->klass->vtable)._14_SerializeField.methodPtr)(__this,pSVar7,__this);
  pUStack_40 = (Utility_BaseCSVObject_o *)0x448cacb;
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  pUStack_48 = unaff_RBX;
  pUStack_40 = __this;
  if (g_data_057ae8e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057ae8e5 = '\x01';
  }
  uStack_50 = uStack_50 & 0xffffffffffff;
  __this_02 = pIVar6;
  separator = (*(((Utility_BaseCSVObject_VTable *)pIVar6->klass->vtable)->_4_get_Delimiter).methodPtr)();
  if (pSVar7 != (System_String_o *)0x0) {
    pSVar8 = System_String__Split(pSVar7,separator,0,(MethodInfo *)0x0);
    uVar5 = (*(((Utility_BaseCSVObject_VTable *)pIVar6->klass->vtable)->_4_get_Delimiter).methodPtr)(pIVar6);
    uStack_50 = CONCAT26(uVar5,(undefined6)uStack_50);
    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = System_Char__ToString((short)&uStack_50 + 6,(MethodInfo *)0x0);
    pSVar7 = System_String__Concat_3ae5ba0(pSVar7,"\n",(MethodInfo *)0x0);
    pSVar7 = System_String__Join(pSVar7,pSVar8,(MethodInfo *)0x0);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    g_data_057ae8e6 = '\x01';
    iVar9 = *(int *)(TypeInfo_BaseCSVObject + 0xe4);
  }
  else {
    iVar9 = *(int *)(TypeInfo_BaseCSVObject + 0xe4);
  }
  if (iVar9 == 0) {
    il2cpp_runtime_helper_02337ed0();
    System_Object___ctor(__this_02,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Utility.BaseCSVObject$$Deserialize
// il2cpp: void Utility_BaseCSVObject__Deserialize (Utility_BaseCSVObject_o* __this, System_String_o* csv, const MethodInfo* method);
// 0x448cc60

void Utility_BaseCSVObject__Deserialize
               (Utility_BaseCSVObject_o *__this,System_String_o *csv,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_Object_array *pSVar10;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_RuntimeTypeHandle_o handle;
  char cVar11;
  uint16_t uVar12;
  uint uVar13;
  bool_conflict bVar14;
  System_String_array *pSVar15;
  System_Collections_Generic_List_object__o *pSVar16;
  System_String_o *pSVar17;
  System_Reflection_FieldInfo_o *left;
  undefined8 uVar18;
  MethodInfo_2525430 *__this_04;
  System_Reflection_FieldInfo_array *source;
  System_Func_TSource__TKey__o *keySelector;
  Il2CppObject *pIVar19;
  System_Collections_Generic_List_TSource__o *value;
  System_Type_o *pSVar20;
  System_RuntimeTypeHandle_o *pSVar21;
  long *plVar22;
  System_Type_o *right;
  System_String_array *pSVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  VirtualInvokeData *pVVar29;
  MethodInfo *extraout_RDX;
  long *extraout_RDX_00;
  uint uVar30;
  System_String_array *pSVar31;
  Il2CppObject *unaff_RBP;
  long *plVar32;
  MethodInfo_2525430 *b;
  long lVar33;
  int32_t index;
  ulong uVar34;
  undefined1 auVar35 [12];
  undefined2 uStackY_11a;
  undefined8 uStackY_118;
  System_String_array *pSStackY_110;
  System_String_array *pSStackY_108;
  MethodInfo_2525430 *pMStackY_100;
  Il2CppObject **ppIStackY_f8;
  undefined8 uStackY_f0;
  Il2CppObject *pIStackY_e8;
  Il2CppObject *pIStackY_e0;
  undefined8 uStackY_d8;
  long lStackY_d0;
  undefined8 uStackY_c8;
  Il2CppClass *pIVar36;
  Il2CppMethodPointer vtableDispatch;
  Il2CppObject *pIVar37;
  
  if (g_data_057ae8e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IList);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FieldInfo_get_Item);
    g_data_057ae8e8 = '\x01';
    method = extraout_RDX;
  }
  uVar12 = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_Delimiter.method,method);
  pSVar23 = (System_String_array *)csv;
  if (csv != (System_String_o *)0x0) {
    pSVar15 = System_String__Split(csv,uVar12,0,(MethodInfo *)0x0);
    pSVar16 = (System_Collections_Generic_List_object__o *)
              (*(__this->klass->vtable)._11_GetFields.methodPtr)(__this);
    if (pSVar15 != (System_String_array *)0x0) {
      uVar13 = (uint)pSVar15->max_length;
      if (0 < (int)uVar13) {
        csv = (System_String_o *)0x0;
        do {
          uVar30 = (uint)csv;
          plVar32 = (long *)unaff_RBP;
          if (uVar13 <= uVar30) goto label_0448d110;
          unaff_RBP = (Il2CppObject *)(long)(int)uVar30;
          pSVar23 = (System_String_array *)csv;
          if (pSVar15->m_Items[(long)unaff_RBP] == (System_String_o *)0x0) goto label_0448d115;
          pSVar17 = System_String__Trim(pSVar15->m_Items[(long)unaff_RBP],(MethodInfo *)0x0);
          plVar32 = (long *)unaff_RBP;
          if ((uint)pSVar15->max_length <= uVar30) goto label_0448d110;
          pSVar15->m_Items[(long)unaff_RBP] = pSVar17;
          il2cpp_runtime_helper_022b4080();
          csv = (System_String_o *)(ulong)(uVar30 + 1);
          uVar13 = (uint)pSVar15->max_length;
        } while ((int)(uVar30 + 1) < (int)uVar13);
      }
      cVar11 = (*(__this->klass->vtable)._7_get_NamedParams.methodPtr)
                         (__this,(__this->klass->vtable)._7_get_NamedParams.method);
      if (cVar11 != '\0') {
        iVar7 = (int)pSVar15->max_length;
        if (iVar7 < 1) {
          return;
        }
        plVar32 = (long *)0x0;
        if (iVar7 != 0) {
          do {
            pSVar23 = (System_String_array *)pSVar15->m_Items[(long)plVar32];
            uVar12 = (*(__this->klass->vtable)._5_get_ParamDelimiter.methodPtr)
                               (__this,(__this->klass->vtable)._5_get_ParamDelimiter.method);
            unaff_RBP = (Il2CppObject *)plVar32;
            if ((pSVar23 == (System_String_array *)0x0) ||
               (csv = (System_String_o *)
                      System_String__Split((System_String_o *)pSVar23,uVar12,0,(MethodInfo *)0x0),
               (System_String_array *)csv == (System_String_array *)0x0)) goto label_0448d115;
            if ((int)((System_String_array *)csv)->max_length == 0) break;
            left = (System_Reflection_FieldInfo_o *)
                   (*(__this->klass->vtable)._12_FindField.methodPtr)
                             (__this,((System_String_array *)csv)->m_Items[0],
                              (__this->klass->vtable)._12_FindField.method);
            bVar14 = System_Reflection_FieldInfo__op_Inequality
                               (left,(System_Reflection_FieldInfo_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar14 != '\0') {
              if ((uint)((System_String_array *)csv)->max_length < 2) break;
              (*(__this->klass->vtable)._15_DeserializeField.methodPtr)
                        (__this,left,__this,((System_String_array *)csv)->m_Items[1],
                         (__this->klass->vtable)._15_DeserializeField.method);
            }
            uVar13 = (uint)pSVar15->max_length;
            plVar32 = (long *)((long)&((Il2CppObject *)plVar32)->klass + 1);
            if ((int)uVar13 <= (int)(uint)plVar32) {
              return;
            }
          } while ((uint)plVar32 < uVar13);
        }
        goto label_0448d110;
      }
      pSVar23 = (System_String_array *)csv;
      if (pSVar16 != (System_Collections_Generic_List_object__o *)0x0) {
        if (0 < (pSVar16->fields)._size) {
          uVar34 = 0;
          do {
            index = (int32_t)uVar34;
            pIVar19 = System_Collections_Generic_List_object___get_Item(pSVar16,index,MethodInfo_FieldInfo_get_Item);
            uVar13 = (*(__this->klass->vtable)._13_IsList.methodPtr)
                               (__this,pIVar19,(__this->klass->vtable)._13_IsList.method);
            csv = (System_String_o *)(ulong)uVar13;
            pIVar19 = System_Collections_Generic_List_object___get_Item(pSVar16,index,MethodInfo_FieldInfo_get_Item);
            plVar32 = (long *)&MethodInfo_FieldInfo_get_Item;
            if ((char)uVar13 != '\0') {
              pSVar23 = (System_String_array *)csv;
              unaff_RBP = (Il2CppObject *)&MethodInfo_FieldInfo_get_Item;
              if (((pIVar19 == (Il2CppObject *)0x0) ||
                  (plVar22 = (long *)(*pIVar19->klass->vtable[0x11].methodPtr)
                                               (pIVar19,pIVar19->klass->vtable[0x11].method),
                  unaff_RBP = (Il2CppObject *)&MethodInfo_FieldInfo_get_Item, plVar22 == (long *)0x0)) ||
                 (lVar25 = (**(code **)(*plVar22 + 0x468))(plVar22,*(undefined8 *)(*plVar22 + 0x470)),
                 unaff_RBP = (Il2CppObject *)&MethodInfo_FieldInfo_get_Item, lVar25 == 0)) goto label_0448d115;
              if (*(int *)(lVar25 + 0x18) == 0) goto label_0448d110;
              uVar18 = *(undefined8 *)(lVar25 + 0x20);
              pIVar19 = System_Collections_Generic_List_object___get_Item(pSVar16,index,MethodInfo_FieldInfo_get_Item);
              unaff_RBP = (Il2CppObject *)&MethodInfo_FieldInfo_get_Item;
              if ((pIVar19 == (Il2CppObject *)0x0) ||
                 (plVar32 = (long *)(*pIVar19->klass->vtable[0x1a].methodPtr)
                                              (pIVar19,__this,pIVar19->klass->vtable[0x1a].method),
                 pSVar31 = TypeInfo_IList, unaff_RBP = (Il2CppObject *)&MethodInfo_FieldInfo_get_Item,
                 (Il2CppObject *)plVar32 == (Il2CppObject *)0x0)) goto label_0448d115;
              plVar22 = (long *)il2cpp_runtime_helper_023051f0(plVar32,TypeInfo_IList);
              if (plVar22 == (long *)0x0) goto label_0448d11a;
              lVar25 = *plVar22;
              if ((ulong)*(ushort *)(lVar25 + 0x12e) == 0) goto label_0448cfbf;
              lVar26 = 0;
              goto label_0448cfb0;
            }
            if ((uint)pSVar15->max_length <= uVar34) goto label_0448d110;
            (*(__this->klass->vtable)._15_DeserializeField.methodPtr)
                      (__this,pIVar19,__this,pSVar15->m_Items[uVar34],
                       (__this->klass->vtable)._15_DeserializeField.method);
            uVar34 = uVar34 + 1;
          } while ((long)uVar34 < (long)(pSVar16->fields)._size);
        }
        return;
      }
    }
  }
  goto label_0448d115;
  while (lVar26 = lVar26 + 0x10, (ulong)*(ushort *)(lVar25 + 0x12e) << 4 != lVar26) {
label_0448de60:
    if (*(long *)(*(long *)(lVar25 + 0xb0) + lVar26) == TypeInfo_IDisposable) {
      puVar27 = (undefined8 *)(lVar25 + (long)*(int *)(*(long *)(lVar25 + 0xb0) + 8 + lVar26) * 0x10 + 0x138);
      goto label_0448de8d;
    }
  }
label_0448de6f:
  puVar27 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar32,TypeInfo_IDisposable,0);
label_0448de8d:
  (*(code *)*puVar27)(plVar32,puVar27[1]);
label_0448de96:
  _Unwind_Resume(uStackY_118);
  while (lVar26 = lVar26 + 0x10, (ulong)*(ushort *)(lVar25 + 0x12e) << 4 != lVar26) {
label_0448cfb0:
    if (*(System_String_array **)(*(long *)(lVar25 + 0xb0) + lVar26) == TypeInfo_IList) {
      puVar27 = (undefined8 *)
                (lVar25 + (long)(*(int *)(*(long *)(lVar25 + 0xb0) + 8 + lVar26) + 4) * 0x10 + 0x138);
      goto label_0448cfe5;
    }
  }
label_0448cfbf:
  puVar27 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IList,4);
label_0448cfe5:
  (*(code *)*puVar27)(plVar22,puVar27[1]);
  if ((int)pSVar15->max_length <= index) {
    return;
  }
  csv = (System_String_o *)&g_data_057b9b70;
  if (uVar34 < (pSVar15->max_length & 0xffffffff)) {
    do {
      bVar14 = System_String__op_Inequality
                         (pSVar15->m_Items[uVar34],(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                          (MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        if ((uint)pSVar15->max_length <= uVar34) break;
        plVar32 = (long *)(*(__this->klass->vtable)._17_DeserializeValue.methodPtr)
                                    (__this,uVar18,pSVar15->m_Items[uVar34],
                                     (__this->klass->vtable)._17_DeserializeValue.method);
        lVar25 = *plVar22;
        if ((ulong)*(ushort *)(lVar25 + 0x12e) != 0) {
          lVar26 = 0;
          do {
            if (*(System_String_array **)(*(long *)(lVar25 + 0xb0) + lVar26) == TypeInfo_IList) {
              puVar27 = (undefined8 *)
                        ((long)(*(int *)(*(long *)(lVar25 + 0xb0) + 8 + lVar26) + 2) * 0x10 + lVar25 + 0x138);
              goto label_0448d020;
            }
            lVar26 = lVar26 + 0x10;
          } while ((ulong)*(ushort *)(lVar25 + 0x12e) << 4 != lVar26);
        }
        puVar27 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IList,2);
label_0448d020:
        (*(code *)*puVar27)(plVar22,plVar32,puVar27[1]);
      }
      uVar34 = uVar34 + 1;
      uVar13 = (uint)pSVar15->max_length;
      if ((long)(int)uVar13 <= (long)uVar34) {
        return;
      }
    } while (uVar34 < uVar13);
  }
label_0448d110:
  il2cpp_runtime_helper_022b2ca0();
  pSVar23 = (System_String_array *)csv;
  unaff_RBP = (Il2CppObject *)plVar32;
label_0448d115:
  plVar32 = (long *)unaff_RBP;
  pSVar31 = pSVar23;
  il2cpp_runtime_helper_022b2c90();
label_0448d11a:
  pIVar19 = (Il2CppObject *)plVar32;
  il2cpp_runtime_helper_022b2fd0();
  if (pSVar31 != (System_String_array *)0x0) {
    pIVar36 = (pSVar31->obj).klass;
    uVar18 = (*(((System_String_VTable *)pIVar36->vtable)->_8_Equals).methodPtr)
                       (pSVar31,(((System_String_VTable *)pIVar36->vtable)->_8_Equals).method);
    pIVar36 = pIVar19->klass;
    vtableDispatch = pIVar36->vtable[9].methodPtr;
    (*vtableDispatch)(pIVar19,uVar18,pIVar36->vtable[9].method,pIVar36,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Reflection_FieldInfo_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_Reflection_FieldInfo_OrderBy);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Reflection_FieldInfo_ToList_FieldInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_FieldInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetFields_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae8e9 = '\x01';
  }
  b = (MethodInfo_2525430 *)0x0;
  __this_04 = (MethodInfo_2525430 *)System_Object__GetType(pIVar19,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_BaseCSVObject[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar19 = (Il2CppObject *)0x0;
  if (*(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject[0xb].monitor !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    b = __this_04;
    bVar14 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (*(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject[0xb].monitor
                        ,(Il2CppObject *)__this_04,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar14 == '\0') {
      if (*(int *)((long)&TypeInfo_BaseCSVObject[0xe].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar19 = TypeInfo_BaseCSVObject;
      if (__this_04 != (MethodInfo_2525430 *)0x0) {
        pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject[0xb].monitor;
        source = System_Type__GetFields((System_Type_o *)__this_04,(MethodInfo *)0x0);
        plVar32 = &TypeInfo_c;
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar32 = (long *)**(long **)(TypeInfo_c + 0xb8);
          keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_FieldInfo_int);
          System_Func_object__int____ctor();
          lVar25 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_TSource__TKey__o **)(lVar25 + 8) = keySelector;
          il2cpp_runtime_helper_022b4080(lVar25 + 8,keySelector);
        }
        pIVar19 = (Il2CppObject *)
                  System_Linq_Enumerable__OrderBy_object__int_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,
                             MethodInfo_IOrderedEnumerable_1_System_Reflection_FieldInfo_OrderBy);
        b = MethodInfo_List_1_System_Reflection_FieldInfo_ToList_FieldInfo;
        value = System_Linq_Enumerable__ToList_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar19,MethodInfo_List_1_System_Reflection_FieldInfo_ToList_FieldInfo);
        if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          b = __this_04;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar8,(Il2CppObject *)__this_04,(Il2CppObject *)value,MethodInfo_Void_Add);
          goto label_0448d378;
        }
      }
    }
    else {
label_0448d378:
      if (*(int *)((long)&TypeInfo_BaseCSVObject[0xe].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar19 = (Il2CppObject *)0x0;
      if (*(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject[0xb].monitor !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___get_Item
                  (*(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject[0xb].monitor,
                   (Il2CppObject *)__this_04,MethodInfo_List_1_System_Reflection_FieldInfo_get_Item);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8ea == '\0') {
    uStackY_c8 = 0x448d3f7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    uStackY_c8 = 0x448d403;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Reflection_FieldInfo_get_Item);
    uStackY_c8 = 0x448d40f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    uStackY_c8 = 0x448d41b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    uStackY_c8 = 0x448d427;
    il2cpp_runtime_helper_023445d0(&MethodInfo_FieldInfo_get_Current);
    uStackY_c8 = 0x448d433;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Reflection_FieldInfo_GetEnume);
    g_data_057ae8ea = '\x01';
  }
  pIVar36 = (Il2CppClass *)0x0;
  vtableDispatch = (Il2CppMethodPointer)0x0;
  pIVar37 = (Il2CppObject *)0x0;
  if (*(int *)((long)&TypeInfo_BaseCSVObject[0xe].klass + 4) == 0) {
    uStackY_c8 = 0x448d462;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject[0xb].monitor;
  uStackY_c8 = 0x448d479;
  pSVar20 = System_Object__GetType(pIVar19,(MethodInfo *)0x0);
  if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    uStackY_c8 = 0x448d497;
    pSVar16 = (System_Collections_Generic_List_object__o *)
              System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar8,(Il2CppObject *)pSVar20,MethodInfo_List_1_System_Reflection_FieldInfo_get_Item);
    if (pSVar16 != (System_Collections_Generic_List_object__o *)0x0) {
      uStackY_c8 = 0x448d4b8;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff40,pSVar16,
                 MethodInfo_List_1_T_Enumerator_System_Reflection_FieldInfo_GetEnume);
      __this_04 = (MethodInfo_2525430 *)&MethodInfo_Boolean_MoveNext;
      do {
        uStackY_c8 = 0x448d4cc;
        __this_00.fields._8_8_ = vtableDispatch;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)pIVar36;
        __this_00.fields._current = pIVar37;
        bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff40);
        if ((char)bVar14 == '\0') break;
        if (pIVar37 == (Il2CppObject *)0x0) {
          uStackY_c8 = 0x448d539;
          il2cpp_runtime_helper_022b2c90();
          pIVar19 = (Il2CppObject *)&stack0xffffffffffffff40;
          goto label_0448d539;
        }
        uStackY_c8 = 0x448d4ed;
        pSVar17 = (System_String_o *)
                  (*pIVar37->klass->vtable[8].methodPtr)(pIVar37,pIVar37->klass->vtable[8].method);
        uStackY_c8 = 0x448d4fa;
        bVar14 = System_String__op_Equality(pSVar17,(System_String_o *)b,(MethodInfo *)0x0);
      } while ((char)bVar14 == '\0');
      uStackY_c8 = 0x448d51e;
      __this_01.fields._8_8_ = vtableDispatch;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pIVar36;
      __this_01.fields._current = pIVar37;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
      return;
    }
  }
label_0448d539:
  uStackY_c8 = 0x448d53e;
  auVar35 = il2cpp_runtime_helper_022b2c90();
  uVar18 = auVar35._0_8_;
  if (auVar35._8_4_ == 1) {
    uStackY_c8 = 0x448d56c;
    plVar22 = (long *)__cxa_begin_catch(uVar18);
    lVar25 = *plVar22;
    uStackY_c8 = 0x448d574;
    __cxa_end_catch();
    uStackY_c8 = 0x448d586;
    __this_02.fields._8_8_ = vtableDispatch;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pIVar36;
    __this_02.fields._current = pIVar37;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
    if (lVar25 == 0) {
      return;
    }
    uStackY_c8 = 0x448d59d;
    uVar18 = il2cpp_runtime_helper_022fefe0(lVar25);
  }
  else {
    lVar25 = 0;
  }
  uStackY_c8 = 0x448d5b2;
  __this_03.fields._8_8_ = vtableDispatch;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pIVar36;
  __this_03.fields._current = pIVar37;
  pSVar23 = MethodInfo_Void_Dispose;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
  if (lVar25 == 0) {
    uStackY_c8 = 0x448d5bf;
    _Unwind_Resume(uVar18);
  }
  uStackY_c8 = 0x448d5c7;
  pSVar21 = (System_RuntimeTypeHandle_o *)il2cpp_runtime_helper_022fefe0(lVar25);
  uStackY_c8 = 0x448d5cf;
  uStackY_d8 = il2cpp_runtime_helper_01f66400();
  pSVar15 = pSVar23;
  lStackY_d0 = lVar25;
  uStackY_c8 = uVar18;
  if (g_data_057ae8eb == '\0') {
    pSVar21 = &TypeRef_List_T;
    pIStackY_e0 = (Il2CppObject *)0x448d5ec;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8eb = '\x01';
  }
  if (pSVar23 != (System_String_array *)0x0) {
    pIVar36 = (pSVar23->obj).klass;
    pSVar15 = (System_String_array *)pIVar36->vtable[0x11].method;
    pIStackY_e0 = (Il2CppObject *)0x448d60f;
    pSVar21 = (System_RuntimeTypeHandle_o *)pSVar23;
    plVar22 = (long *)(*pIVar36->vtable[0x11].methodPtr)();
    if (plVar22 != (long *)0x0) {
      pIStackY_e0 = (Il2CppObject *)0x448d62b;
      cVar11 = (**(code **)(*plVar22 + 0x3b8))(plVar22,*(undefined8 *)(*plVar22 + 0x3c0));
      if (cVar11 == '\0') {
        return;
      }
      pIVar36 = (pSVar23->obj).klass;
      pSVar15 = (System_String_array *)pIVar36->vtable[0x11].method;
      pIStackY_e0 = (Il2CppObject *)0x448d642;
      pSVar21 = (System_RuntimeTypeHandle_o *)pSVar23;
      plVar22 = (long *)(*pIVar36->vtable[0x11].methodPtr)();
      if (plVar22 != (long *)0x0) {
        pIStackY_e0 = (Il2CppObject *)0x448d65a;
        pSVar20 = (System_Type_o *)(**(code **)(*plVar22 + 0x448))(plVar22);
        handle = TypeRef_List_T;
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          pIStackY_e0 = (Il2CppObject *)0x448d683;
          il2cpp_runtime_helper_02337ed0();
        }
        pIStackY_e0 = (Il2CppObject *)0x448d68d;
        right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        System_Type__op_Equality(pSVar20,right,(MethodInfo *)0x0);
        return;
      }
    }
  }
  pIStackY_e0 = (Il2CppObject *)Utility_BaseCSVObject__SerializeField;
  il2cpp_runtime_helper_022b2c90();
  ppIStackY_f8 = &TypeInfo_BaseCSVObject;
  pSStackY_108 = pSVar23;
  pMStackY_100 = __this_04;
  uStackY_f0 = uVar18;
  pIStackY_e8 = pIVar19;
  pIStackY_e0 = (Il2CppObject *)plVar32;
  if (g_data_057ae8ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IList);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae8ec = '\x01';
  }
  uStackY_11a = 0;
  pSVar16 = (System_Collections_Generic_List_object__o *)&g_data_057b9b70;
  plVar32 = (long *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pIVar36 = (((System_String_array *)pSVar21)->obj).klass;
  cVar11 = (*pIVar36->vtable[7].methodPtr)(pSVar21,pIVar36->vtable[7].method);
  if (cVar11 == '\0') {
label_0448d7e4:
    pIVar36 = (((System_String_array *)pSVar21)->obj).klass;
    cVar11 = (*pIVar36->vtable[0xd].methodPtr)(pSVar21,pSVar15,pIVar36->vtable[0xd].method);
    if (cVar11 == '\0') {
      plVar22 = extraout_RDX_00;
      if (pSVar15 != (System_String_array *)0x0) {
        pIVar36 = (pSVar15->obj).klass;
        uVar18 = (*pIVar36->vtable[0x11].methodPtr)(pSVar15,pIVar36->vtable[0x11].method);
        pIVar36 = (pSVar15->obj).klass;
        uVar28 = (*pIVar36->vtable[0x1a].methodPtr)(pSVar15,extraout_RDX_00,pIVar36->vtable[0x1a].method);
        pIVar36 = (((System_String_array *)pSVar21)->obj).klass;
        pSVar17 = (System_String_o *)
                  (*pIVar36->vtable[0x10].methodPtr)(pSVar21,uVar18,uVar28,pIVar36->vtable[0x10].method);
        goto label_0448dcf6;
      }
    }
    else {
      pSVar16 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(pSVar16,MethodInfo_List_1_System_String);
      plVar22 = extraout_RDX_00;
      if (((pSVar15 != (System_String_array *)0x0) &&
          (pIVar36 = (pSVar15->obj).klass,
          plVar24 = (long *)(*pIVar36->vtable[0x11].methodPtr)(pSVar15,pIVar36->vtable[0x11].method),
          plVar22 = extraout_RDX_00, plVar24 != (long *)0x0)) &&
         (lVar25 = (**(code **)(*plVar24 + 0x468))(plVar24,*(undefined8 *)(*plVar24 + 0x470)),
         plVar22 = extraout_RDX_00, lVar25 != 0)) {
        pSVar31 = pSVar23;
        plVar24 = extraout_RDX_00;
        if (*(int *)(lVar25 + 0x18) == 0) goto label_0448dd64;
        uStackY_118 = *(undefined8 *)(lVar25 + 0x20);
        pIVar36 = (pSVar15->obj).klass;
        pSStackY_110 = (System_String_array *)plVar32;
        plVar24 = (long *)(*pIVar36->vtable[0x1a].methodPtr)
                                    (pSVar15,extraout_RDX_00,pIVar36->vtable[0x1a].method);
        pSVar31 = TypeInfo_IList;
        plVar22 = extraout_RDX_00;
        if (plVar24 != (long *)0x0) {
          lVar26 = il2cpp_runtime_helper_023051f0(plVar24,TypeInfo_IList);
          plVar32 = (long *)TypeInfo_IList;
          lVar25 = TypeInfo_IEnumerable;
          pSVar23 = (System_String_array *)&TypeInfo_IList;
          if (lVar26 == 0) goto label_0448dd69;
          plVar22 = (long *)il2cpp_runtime_helper_023051f0(plVar24);
          pSVar23 = pSVar31;
          if (plVar22 == (long *)0x0) goto label_0448dd74;
          lVar26 = *plVar22;
          if ((ulong)*(ushort *)(lVar26 + 0x12e) != 0) {
            lVar33 = 0;
            do {
              if (*(long *)(*(long *)(lVar26 + 0xb0) + lVar33) == lVar25) {
                puVar27 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar26 + 0xb0) + 8 + lVar33) * 0x10 + lVar26 + 0x138);
                goto label_0448d99c;
              }
              lVar33 = lVar33 + 0x10;
            } while ((ulong)*(ushort *)(lVar26 + 0x12e) << 4 != lVar33);
          }
          puVar27 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,lVar25,0);
label_0448d99c:
          pSVar23 = (System_String_array *)(*(code *)*puVar27)(plVar22,puVar27[1]);
          if (pSVar23 == (System_String_array *)0x0) goto label_0448dd7f;
          if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
            pIVar36 = (pSVar23->obj).klass;
            uVar4._0_1_ = (pIVar36->_2).rank;
            uVar4._1_1_ = (pIVar36->_2).minimumAlignment;
            if ((ulong)uVar4 != 0) {
              pIVar9 = (pIVar36->_1).interfaceOffsets;
              lVar25 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar25) == TypeInfo_IEnumerator) {
                  pVVar29 = pIVar36->vtable + *(int *)((long)&pIVar9->offset + lVar25);
                  goto label_0448db91;
                }
                lVar25 = lVar25 + 0x10;
              } while ((ulong)uVar4 << 4 != lVar25);
            }
            pVVar29 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar23,TypeInfo_IEnumerator,0);
label_0448db91:
            cVar11 = (*pVVar29->methodPtr)(pSVar23,pVVar29->method);
            if (cVar11 == '\0') {
label_0448dbe8:
              plVar32 = (long *)0x6;
              plVar22 = (long *)0x0;
              goto label_0448dbf1;
            }
            pIVar36 = (pSVar23->obj).klass;
            uVar5._0_1_ = (pIVar36->_2).rank;
            uVar5._1_1_ = (pIVar36->_2).minimumAlignment;
            if ((ulong)uVar5 != 0) {
              pIVar9 = (pIVar36->_1).interfaceOffsets;
              lVar25 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar25) == TypeInfo_IEnumerator) {
                  pVVar29 = pIVar36->vtable + (*(int *)((long)&pIVar9->offset + lVar25) + 1);
                  goto label_0448dd31;
                }
                lVar25 = lVar25 + 0x10;
              } while ((ulong)uVar5 << 4 != lVar25);
            }
            pVVar29 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar23,TypeInfo_IEnumerator,1);
label_0448dd31:
            uVar18 = (*pVVar29->methodPtr)(pSVar23,pVVar29->method);
            pIVar36 = (((System_String_array *)pSVar21)->obj).klass;
            (*pIVar36->vtable[0x10].methodPtr)(pSVar21,uStackY_118,uVar18,pIVar36->vtable[0x10].method);
            il2cpp_runtime_helper_022b2c90();
          }
          else {
            plVar24 = &TypeInfo_IEnumerator;
            plVar32 = &MethodInfo_Void_Add;
label_0448d9ea:
            pIVar36 = (pSVar23->obj).klass;
            uVar2._0_1_ = (pIVar36->_2).rank;
            uVar2._1_1_ = (pIVar36->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar9 = (pIVar36->_1).interfaceOffsets;
              lVar25 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar25) == TypeInfo_IEnumerator) {
                  pVVar29 = pIVar36->vtable + *(int *)((long)&pIVar9->offset + lVar25);
                  goto label_0448da43;
                }
                lVar25 = lVar25 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar25);
            }
            pVVar29 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar23,TypeInfo_IEnumerator,0);
label_0448da43:
            cVar11 = (*pVVar29->methodPtr)(pSVar23,pVVar29->method);
            if (cVar11 == '\0') goto label_0448dbe8;
            pIVar36 = (pSVar23->obj).klass;
            uVar3._0_1_ = (pIVar36->_2).rank;
            uVar3._1_1_ = (pIVar36->_2).minimumAlignment;
            if ((ulong)uVar3 != 0) {
              pIVar9 = (pIVar36->_1).interfaceOffsets;
              lVar25 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar25) == TypeInfo_IEnumerator) {
                  pVVar29 = pIVar36->vtable + (*(int *)((long)&pIVar9->offset + lVar25) + 1);
                  goto label_0448dac8;
                }
                lVar25 = lVar25 + 0x10;
              } while ((ulong)uVar3 << 4 != lVar25);
            }
            pVVar29 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar23,TypeInfo_IEnumerator,1);
label_0448dac8:
            uVar18 = (*pVVar29->methodPtr)(pSVar23,pVVar29->method);
            pIVar36 = (((System_String_array *)pSVar21)->obj).klass;
            pIVar19 = (Il2CppObject *)
                      (*pIVar36->vtable[0x10].methodPtr)
                                (pSVar21,uStackY_118,uVar18,pIVar36->vtable[0x10].method);
            lVar25 = MethodInfo_Void_Add;
            piVar1 = &(pSVar16->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar10 = (pSVar16->fields)._items;
            if (pSVar10 != (System_Object_array *)0x0) {
              uVar13 = (pSVar16->fields)._size;
              if (uVar13 < (uint)pSVar10->max_length) {
                (pSVar16->fields)._size = uVar13 + 1;
                pSVar10->m_Items[(int)uVar13] = pIVar19;
                il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar13,pIVar19);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar16,pIVar19,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
              }
              goto label_0448d9ea;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          plVar22 = plVar24;
        }
      }
    }
  }
  else {
    plVar22 = extraout_RDX_00;
    if (pSVar15 != (System_String_array *)0x0) {
      pIVar36 = (pSVar15->obj).klass;
      pSVar23 = (System_String_array *)(*pIVar36->vtable[8].methodPtr)(pSVar15,pIVar36->vtable[8].method);
      uStackY_11a = (*((((System_String_array *)pSVar21)->obj).klass)->vtable[5].methodPtr)(pSVar21);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar17 = System_Char__ToString((uint16_t)&uStackY_11a,(MethodInfo *)0x0);
      plVar32 = (long *)System_String__Concat_3ae5ba0((System_String_o *)pSVar23,pSVar17,(MethodInfo *)0x0);
      goto label_0448d7e4;
    }
  }
  do {
    il2cpp_runtime_helper_022b2c90();
    pSVar31 = pSVar23;
    plVar24 = plVar22;
label_0448dd64:
    il2cpp_runtime_helper_022b2ca0();
    pSVar23 = (System_String_array *)plVar32;
label_0448dd69:
    plVar32 = (long *)pSVar23;
    il2cpp_runtime_helper_022b2fd0(plVar24,pSVar31);
    pSVar23 = pSVar31;
label_0448dd74:
    il2cpp_runtime_helper_022b2fd0(plVar24,plVar32);
label_0448dd7f:
    il2cpp_runtime_helper_022b2c90();
    plVar22 = plVar24;
    do {
      auVar35 = il2cpp_runtime_helper_022fefe0(plVar22);
      uStackY_118 = auVar35._0_8_;
      plVar32 = (long *)0x0;
      if (auVar35._8_4_ != 1) {
        plVar32 = (long *)il2cpp_runtime_helper_023051f0(pSVar23,TypeInfo_IDisposable);
        if (plVar32 == (long *)0x0) goto label_0448de96;
        lVar25 = *plVar32;
        if ((ulong)*(ushort *)(lVar25 + 0x12e) == 0) goto label_0448de6f;
        lVar26 = 0;
        goto label_0448de60;
      }
      puVar27 = (undefined8 *)__cxa_begin_catch(uStackY_118);
      plVar22 = (long *)*puVar27;
      __cxa_end_catch();
label_0448dbf1:
      pSVar15 = (System_String_array *)il2cpp_runtime_helper_023051f0(pSVar23,TypeInfo_IDisposable);
      if (pSVar15 != (System_String_array *)0x0) {
        pIVar36 = (pSVar15->obj).klass;
        uVar6._0_1_ = (pIVar36->_2).rank;
        uVar6._1_1_ = (pIVar36->_2).minimumAlignment;
        if ((ulong)uVar6 != 0) {
          pIVar9 = (pIVar36->_1).interfaceOffsets;
          lVar25 = 0;
          do {
            if (*(long *)((long)&pIVar9->interfaceType + lVar25) == TypeInfo_IDisposable) {
              pVVar29 = pIVar36->vtable + *(int *)((long)&pIVar9->offset + lVar25);
              goto label_0448dc5d;
            }
            lVar25 = lVar25 + 0x10;
          } while ((ulong)uVar6 << 4 != lVar25);
        }
        pVVar29 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IDisposable,0);
label_0448dc5d:
        (*pVVar29->methodPtr)(pSVar15,pVVar29->method);
        pSVar23 = pSVar15;
      }
    } while (plVar22 != (long *)0x0);
    if (((int)plVar32 != 6) && ((int)plVar32 != 0)) {
      return;
    }
  } while (pSVar16 == (System_Collections_Generic_List_object__o *)0x0);
  if ((pSVar16->fields)._size < 1) {
    return;
  }
  uStackY_11a = (*((((System_String_array *)pSVar21)->obj).klass)->vtable[4].methodPtr)(pSVar21);
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar17 = System_Char__ToString((uint16_t)&uStackY_11a,(MethodInfo *)0x0);
  pSVar23 = (System_String_array *)System_Collections_Generic_List_object___ToArray(pSVar16,MethodInfo_String_ToArray);
  pSVar17 = System_String__Join(pSVar17,pSVar23,(MethodInfo *)0x0);
  plVar32 = (long *)pSStackY_110;
label_0448dcf6:
  System_String__Concat_3ae5ba0((System_String_o *)plVar32,pSVar17,(MethodInfo *)0x0);
  return;
}


// Utility.BaseCSVObject$$Copy
// il2cpp: void Utility_BaseCSVObject__Copy (Utility_BaseCSVObject_o* __this, Utility_BaseCSVObject_o* other, const MethodInfo* method);
// 0x448d130

void Utility_BaseCSVObject__Copy
               (Utility_BaseCSVObject_o *__this,Utility_BaseCSVObject_o *other,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Utility_BaseCSVObject_c *pUVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_RuntimeTypeHandle_o handle;
  char cVar6;
  bool_conflict bVar7;
  undefined8 uVar8;
  MethodInfo_2525430 *__this_04;
  System_Reflection_FieldInfo_array *source;
  System_Func_TSource__TKey__o *keySelector;
  Il2CppObject *pIVar9;
  System_Collections_Generic_List_TSource__o *value;
  System_Type_o *pSVar10;
  System_Collections_Generic_List_object__o *pSVar11;
  System_String_o *pSVar12;
  System_RuntimeTypeHandle_o *pSVar13;
  long *plVar14;
  System_Type_o *right;
  MethodInfo *pMVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  Il2CppMethodPointer vtableDispatch;
  MethodInfo *pMVar22;
  System_String_array *value_00;
  long *extraout_RDX;
  MethodInfo *pMVar23;
  long *unaff_RBP;
  MethodInfo_2525430 *b;
  long lVar24;
  undefined1 auVar25 [12];
  undefined2 uStackY_e2;
  undefined8 uStackY_e0;
  MethodInfo *pMStackY_d8;
  MethodInfo *pMStackY_d0;
  MethodInfo_2525430 *pMStackY_c8;
  Il2CppObject **ppIStackY_c0;
  undefined8 uStackY_b8;
  Il2CppObject *pIStackY_b0;
  code *pcStackY_a8;
  undefined8 uStackY_a0;
  long lStackY_98;
  undefined8 uStackY_90;
  Il2CppClass *pIVar26;
  Il2CppObject *pIVar27;
  
  if (other != (Utility_BaseCSVObject_o *)0x0) {
    uVar8 = (*(other->klass->vtable)._8_Serialize.methodPtr)(other,(other->klass->vtable)._8_Serialize.method)
    ;
    pUVar3 = __this->klass;
    vtableDispatch = (pUVar3->vtable)._9_Deserialize.methodPtr;
    (*vtableDispatch)(__this,uVar8,(pUVar3->vtable)._9_Deserialize.method,pUVar3,vtableDispatch)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Reflection_FieldInfo_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_Reflection_FieldInfo_OrderBy);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Reflection_FieldInfo_ToList_FieldInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_FieldInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetFields_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae8e9 = '\x01';
  }
  b = (MethodInfo_2525430 *)0x0;
  __this_04 = (MethodInfo_2525430 *)System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_BaseCSVObject[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar9 = (Il2CppObject *)0x0;
  if (*(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject[0xb].monitor !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    b = __this_04;
    bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (*(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject[0xb].monitor,
                       (Il2CppObject *)__this_04,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar7 == '\0') {
      if (*(int *)((long)&TypeInfo_BaseCSVObject[0xe].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar9 = TypeInfo_BaseCSVObject;
      if (__this_04 != (MethodInfo_2525430 *)0x0) {
        pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject[0xb].monitor;
        source = System_Type__GetFields((System_Type_o *)__this_04,(MethodInfo *)0x0);
        unaff_RBP = &TypeInfo_c;
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          unaff_RBP = (long *)**(undefined8 **)(TypeInfo_c + 0xb8);
          keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_FieldInfo_int);
          System_Func_object__int____ctor();
          lVar17 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_TSource__TKey__o **)(lVar17 + 8) = keySelector;
          il2cpp_runtime_helper_022b4080(lVar17 + 8,keySelector);
        }
        pIVar9 = (Il2CppObject *)
                 System_Linq_Enumerable__OrderBy_object__int_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,
                            MethodInfo_IOrderedEnumerable_1_System_Reflection_FieldInfo_OrderBy);
        b = MethodInfo_List_1_System_Reflection_FieldInfo_ToList_FieldInfo;
        value = System_Linq_Enumerable__ToList_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar9,MethodInfo_List_1_System_Reflection_FieldInfo_ToList_FieldInfo);
        if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          b = __this_04;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar4,(Il2CppObject *)__this_04,(Il2CppObject *)value,MethodInfo_Void_Add);
          goto label_0448d378;
        }
      }
    }
    else {
label_0448d378:
      if (*(int *)((long)&TypeInfo_BaseCSVObject[0xe].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar9 = (Il2CppObject *)0x0;
      if (*(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject[0xb].monitor !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___get_Item
                  (*(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject[0xb].monitor,
                   (Il2CppObject *)__this_04,MethodInfo_List_1_System_Reflection_FieldInfo_get_Item);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8ea == '\0') {
    uStackY_90 = 0x448d3f7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    uStackY_90 = 0x448d403;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Reflection_FieldInfo_get_Item);
    uStackY_90 = 0x448d40f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    uStackY_90 = 0x448d41b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    uStackY_90 = 0x448d427;
    il2cpp_runtime_helper_023445d0(&MethodInfo_FieldInfo_get_Current);
    uStackY_90 = 0x448d433;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Reflection_FieldInfo_GetEnume);
    g_data_057ae8ea = '\x01';
  }
  pIVar26 = (Il2CppClass *)0x0;
  vtableDispatch = (Il2CppMethodPointer)0x0;
  pIVar27 = (Il2CppObject *)0x0;
  if (*(int *)((long)&TypeInfo_BaseCSVObject[0xe].klass + 4) == 0) {
    uStackY_90 = 0x448d462;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject[0xb].monitor;
  uStackY_90 = 0x448d479;
  pSVar10 = System_Object__GetType(pIVar9,(MethodInfo *)0x0);
  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    uStackY_90 = 0x448d497;
    pSVar11 = (System_Collections_Generic_List_object__o *)
              System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar4,(Il2CppObject *)pSVar10,MethodInfo_List_1_System_Reflection_FieldInfo_get_Item);
    if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
      uStackY_90 = 0x448d4b8;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff78,pSVar11,
                 MethodInfo_List_1_T_Enumerator_System_Reflection_FieldInfo_GetEnume);
      __this_04 = (MethodInfo_2525430 *)&MethodInfo_Boolean_MoveNext;
      do {
        uStackY_90 = 0x448d4cc;
        __this_00.fields._8_8_ = vtableDispatch;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)pIVar26;
        __this_00.fields._current = pIVar27;
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
        if ((char)bVar7 == '\0') break;
        if (pIVar27 == (Il2CppObject *)0x0) {
          uStackY_90 = 0x448d539;
          il2cpp_runtime_helper_022b2c90();
          pIVar9 = (Il2CppObject *)&stack0xffffffffffffff78;
          goto label_0448d539;
        }
        uStackY_90 = 0x448d4ed;
        pSVar12 = (System_String_o *)
                  (*pIVar27->klass->vtable[8].methodPtr)(pIVar27,pIVar27->klass->vtable[8].method);
        uStackY_90 = 0x448d4fa;
        bVar7 = System_String__op_Equality(pSVar12,(System_String_o *)b,(MethodInfo *)0x0);
      } while ((char)bVar7 == '\0');
      uStackY_90 = 0x448d51e;
      __this_01.fields._8_8_ = vtableDispatch;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pIVar26;
      __this_01.fields._current = pIVar27;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
      return;
    }
  }
label_0448d539:
  uStackY_90 = 0x448d53e;
  auVar25 = il2cpp_runtime_helper_022b2c90();
  uVar8 = auVar25._0_8_;
  if (auVar25._8_4_ == 1) {
    uStackY_90 = 0x448d56c;
    plVar14 = (long *)__cxa_begin_catch(uVar8);
    lVar17 = *plVar14;
    uStackY_90 = 0x448d574;
    __cxa_end_catch();
    uStackY_90 = 0x448d586;
    __this_02.fields._8_8_ = vtableDispatch;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pIVar26;
    __this_02.fields._current = pIVar27;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    if (lVar17 == 0) {
      return;
    }
    uStackY_90 = 0x448d59d;
    uVar8 = il2cpp_runtime_helper_022fefe0(lVar17);
  }
  else {
    lVar17 = 0;
  }
  uStackY_90 = 0x448d5b2;
  __this_03.fields._8_8_ = vtableDispatch;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pIVar26;
  __this_03.fields._current = pIVar27;
  pMVar15 = MethodInfo_Void_Dispose;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  if (lVar17 == 0) {
    uStackY_90 = 0x448d5bf;
    _Unwind_Resume(uVar8);
  }
  uStackY_90 = 0x448d5c7;
  pSVar13 = (System_RuntimeTypeHandle_o *)il2cpp_runtime_helper_022fefe0(lVar17);
  uStackY_90 = 0x448d5cf;
  uStackY_a0 = il2cpp_runtime_helper_01f66400();
  pMVar22 = pMVar15;
  lStackY_98 = lVar17;
  uStackY_90 = uVar8;
  if (g_data_057ae8eb == '\0') {
    pSVar13 = &TypeRef_List_T;
    pcStackY_a8 = (code *)0x448d5ec;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8eb = '\x01';
  }
  if (pMVar15 != (MethodInfo *)0x0) {
    pMVar22 = *(MethodInfo **)(pMVar15->methodPointer + 0x250);
    pcStackY_a8 = (code *)0x448d60f;
    pSVar13 = (System_RuntimeTypeHandle_o *)pMVar15;
    plVar14 = (long *)(**(code **)(pMVar15->methodPointer + 0x248))();
    if (plVar14 != (long *)0x0) {
      pcStackY_a8 = (code *)0x448d62b;
      cVar6 = (**(code **)(*plVar14 + 0x3b8))(plVar14,*(undefined8 *)(*plVar14 + 0x3c0));
      if (cVar6 == '\0') {
        return;
      }
      pMVar22 = *(MethodInfo **)(pMVar15->methodPointer + 0x250);
      pcStackY_a8 = (code *)0x448d642;
      pSVar13 = (System_RuntimeTypeHandle_o *)pMVar15;
      plVar14 = (long *)(**(code **)(pMVar15->methodPointer + 0x248))();
      if (plVar14 != (long *)0x0) {
        pcStackY_a8 = (code *)0x448d65a;
        pSVar10 = (System_Type_o *)(**(code **)(*plVar14 + 0x448))(plVar14);
        handle = TypeRef_List_T;
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          pcStackY_a8 = (code *)0x448d683;
          il2cpp_runtime_helper_02337ed0();
        }
        pcStackY_a8 = (code *)0x448d68d;
        right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        System_Type__op_Equality(pSVar10,right,(MethodInfo *)0x0);
        return;
      }
    }
  }
  pcStackY_a8 = Utility_BaseCSVObject__SerializeField;
  il2cpp_runtime_helper_022b2c90();
  ppIStackY_c0 = &TypeInfo_BaseCSVObject;
  pMStackY_d0 = pMVar15;
  pMStackY_c8 = __this_04;
  uStackY_b8 = uVar8;
  pIStackY_b0 = pIVar9;
  pcStackY_a8 = (code *)unaff_RBP;
  if (g_data_057ae8ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IList);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae8ec = '\x01';
  }
  uStackY_e2 = 0;
  pSVar11 = (System_Collections_Generic_List_object__o *)&g_data_057b9b70;
  plVar14 = (long *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  cVar6 = (**(code **)(((MethodInfo *)pSVar13)->methodPointer + 0x1a8))
                    (pSVar13,*(undefined8 *)(((MethodInfo *)pSVar13)->methodPointer + 0x1b0));
  if (cVar6 == '\0') {
label_0448d7e4:
    cVar6 = (**(code **)(((MethodInfo *)pSVar13)->methodPointer + 0x208))
                      (pSVar13,pMVar22,*(undefined8 *)(((MethodInfo *)pSVar13)->methodPointer + 0x210));
    if (cVar6 == '\0') {
      plVar19 = extraout_RDX;
      if (pMVar22 != (MethodInfo *)0x0) {
        uVar8 = (**(code **)(pMVar22->methodPointer + 0x248))
                          (pMVar22,*(undefined8 *)(pMVar22->methodPointer + 0x250));
        uVar21 = (**(code **)(pMVar22->methodPointer + 0x2d8))
                           (pMVar22,extraout_RDX,*(undefined8 *)(pMVar22->methodPointer + 0x2e0));
        pSVar12 = (System_String_o *)
                  (**(code **)(((MethodInfo *)pSVar13)->methodPointer + 0x238))
                            (pSVar13,uVar8,uVar21,
                             *(undefined8 *)(((MethodInfo *)pSVar13)->methodPointer + 0x240));
        goto label_0448dcf6;
      }
    }
    else {
      pSVar11 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(pSVar11,MethodInfo_List_1_System_String);
      plVar19 = extraout_RDX;
      if (((pMVar22 != (MethodInfo *)0x0) &&
          (plVar16 = (long *)(**(code **)(pMVar22->methodPointer + 0x248))
                                       (pMVar22,*(undefined8 *)(pMVar22->methodPointer + 0x250)),
          plVar19 = extraout_RDX, plVar16 != (long *)0x0)) &&
         (lVar17 = (**(code **)(*plVar16 + 0x468))(plVar16,*(undefined8 *)(*plVar16 + 0x470)),
         plVar19 = extraout_RDX, lVar17 != 0)) {
        pMVar23 = pMVar15;
        plVar16 = extraout_RDX;
        if (*(int *)(lVar17 + 0x18) == 0) goto label_0448dd64;
        uStackY_e0 = *(undefined8 *)(lVar17 + 0x20);
        pMStackY_d8 = (MethodInfo *)plVar14;
        plVar16 = (long *)(**(code **)(pMVar22->methodPointer + 0x2d8))
                                    (pMVar22,extraout_RDX,*(undefined8 *)(pMVar22->methodPointer + 0x2e0));
        pMVar23 = TypeInfo_IList;
        plVar19 = extraout_RDX;
        if (plVar16 != (long *)0x0) {
          lVar18 = il2cpp_runtime_helper_023051f0(plVar16,TypeInfo_IList);
          plVar14 = (long *)TypeInfo_IList;
          lVar17 = TypeInfo_IEnumerable;
          pMVar15 = (MethodInfo *)&TypeInfo_IList;
          if (lVar18 == 0) goto label_0448dd69;
          plVar19 = (long *)il2cpp_runtime_helper_023051f0(plVar16);
          pMVar15 = pMVar23;
          if (plVar19 == (long *)0x0) goto label_0448dd74;
          lVar18 = *plVar19;
          if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
            lVar24 = 0;
            do {
              if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar24) == lVar17) {
                puVar20 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar24) * 0x10 + lVar18 + 0x138);
                goto label_0448d99c;
              }
              lVar24 = lVar24 + 0x10;
            } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar24);
          }
          puVar20 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar19,lVar17,0);
label_0448d99c:
          pMVar15 = (MethodInfo *)(*(code *)*puVar20)(plVar19,puVar20[1]);
          if (pMVar15 == (MethodInfo *)0x0) goto label_0448dd7f;
          if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) {
            vtableDispatch = pMVar15->methodPointer;
            if ((ulong)*(ushort *)(vtableDispatch + 0x12e) != 0) {
              lVar17 = 0;
              do {
                if (*(long *)(*(long *)(vtableDispatch + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
                  vtableDispatch =
                       vtableDispatch +
                       (long)*(int *)(*(long *)(vtableDispatch + 0xb0) + 8 + lVar17) * 0x10 + 0x138;
                  goto label_0448db91;
                }
                lVar17 = lVar17 + 0x10;
              } while ((ulong)*(ushort *)(vtableDispatch + 0x12e) << 4 != lVar17);
            }
            vtableDispatch = (Il2CppMethodPointer)il2cpp_runtime_helper_02300d20(pMVar15,TypeInfo_IEnumerator,0);
label_0448db91:
            cVar6 = (**(code **)vtableDispatch)(pMVar15,*(undefined8 *)(vtableDispatch + 8));
            if (cVar6 == '\0') {
label_0448dbe8:
              plVar14 = (long *)0x6;
              plVar19 = (long *)0x0;
              goto label_0448dbf1;
            }
            vtableDispatch = pMVar15->methodPointer;
            if ((ulong)*(ushort *)(vtableDispatch + 0x12e) != 0) {
              lVar17 = 0;
              do {
                if (*(long *)(*(long *)(vtableDispatch + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
                  vtableDispatch =
                       vtableDispatch +
                       (long)(*(int *)(*(long *)(vtableDispatch + 0xb0) + 8 + lVar17) + 1) * 0x10 +
                       0x138;
                  goto label_0448dd31;
                }
                lVar17 = lVar17 + 0x10;
              } while ((ulong)*(ushort *)(vtableDispatch + 0x12e) << 4 != lVar17);
            }
            vtableDispatch = (Il2CppMethodPointer)il2cpp_runtime_helper_02300d20(pMVar15,TypeInfo_IEnumerator,1);
label_0448dd31:
            uVar8 = (**(code **)vtableDispatch)(pMVar15,*(undefined8 *)(vtableDispatch + 8));
            (**(code **)(((MethodInfo *)pSVar13)->methodPointer + 0x238))
                      (pSVar13,uStackY_e0,uVar8,
                       *(undefined8 *)(((MethodInfo *)pSVar13)->methodPointer + 0x240));
            il2cpp_runtime_helper_022b2c90();
          }
          else {
            plVar16 = &TypeInfo_IEnumerator;
            plVar14 = &MethodInfo_Void_Add;
label_0448d9ea:
            vtableDispatch = pMVar15->methodPointer;
            if ((ulong)*(ushort *)(vtableDispatch + 0x12e) != 0) {
              lVar17 = 0;
              do {
                if (*(long *)(*(long *)(vtableDispatch + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
                  vtableDispatch =
                       vtableDispatch +
                       (long)*(int *)(*(long *)(vtableDispatch + 0xb0) + 8 + lVar17) * 0x10 + 0x138;
                  goto label_0448da43;
                }
                lVar17 = lVar17 + 0x10;
              } while ((ulong)*(ushort *)(vtableDispatch + 0x12e) << 4 != lVar17);
            }
            vtableDispatch = (Il2CppMethodPointer)il2cpp_runtime_helper_02300d20(pMVar15,TypeInfo_IEnumerator,0);
label_0448da43:
            cVar6 = (**(code **)vtableDispatch)(pMVar15,*(undefined8 *)(vtableDispatch + 8));
            if (cVar6 == '\0') goto label_0448dbe8;
            vtableDispatch = pMVar15->methodPointer;
            if ((ulong)*(ushort *)(vtableDispatch + 0x12e) != 0) {
              lVar17 = 0;
              do {
                if (*(long *)(*(long *)(vtableDispatch + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
                  vtableDispatch =
                       vtableDispatch +
                       (long)(*(int *)(*(long *)(vtableDispatch + 0xb0) + 8 + lVar17) + 1) * 0x10 +
                       0x138;
                  goto label_0448dac8;
                }
                lVar17 = lVar17 + 0x10;
              } while ((ulong)*(ushort *)(vtableDispatch + 0x12e) << 4 != lVar17);
            }
            vtableDispatch = (Il2CppMethodPointer)il2cpp_runtime_helper_02300d20(pMVar15,TypeInfo_IEnumerator,1);
label_0448dac8:
            uVar8 = (**(code **)vtableDispatch)(pMVar15,*(undefined8 *)(vtableDispatch + 8));
            pIVar9 = (Il2CppObject *)
                     (**(code **)(((MethodInfo *)pSVar13)->methodPointer + 0x238))
                               (pSVar13,uStackY_e0,uVar8,
                                *(undefined8 *)(((MethodInfo *)pSVar13)->methodPointer + 0x240));
            lVar17 = MethodInfo_Void_Add;
            piVar1 = &(pSVar11->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (pSVar11->fields)._items;
            if (pSVar5 != (System_Object_array *)0x0) {
              uVar2 = (pSVar11->fields)._size;
              if (uVar2 < (uint)pSVar5->max_length) {
                (pSVar11->fields)._size = uVar2 + 1;
                pSVar5->m_Items[(int)uVar2] = pIVar9;
                il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2,pIVar9);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar11,pIVar9,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              goto label_0448d9ea;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          plVar19 = plVar16;
        }
      }
    }
  }
  else {
    plVar19 = extraout_RDX;
    if (pMVar22 != (MethodInfo *)0x0) {
      pMVar15 = (MethodInfo *)
                (**(code **)(pMVar22->methodPointer + 0x1b8))
                          (pMVar22,*(undefined8 *)(pMVar22->methodPointer + 0x1c0));
      uStackY_e2 = (**(code **)(((MethodInfo *)pSVar13)->methodPointer + 0x188))(pSVar13);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = System_Char__ToString((uint16_t)&uStackY_e2,(MethodInfo *)0x0);
      plVar14 = (long *)System_String__Concat_3ae5ba0((System_String_o *)pMVar15,pSVar12,(MethodInfo *)0x0);
      goto label_0448d7e4;
    }
  }
  do {
    il2cpp_runtime_helper_022b2c90();
    pMVar23 = pMVar15;
    plVar16 = plVar19;
label_0448dd64:
    il2cpp_runtime_helper_022b2ca0();
    pMVar15 = (MethodInfo *)plVar14;
label_0448dd69:
    plVar14 = (long *)pMVar15;
    il2cpp_runtime_helper_022b2fd0(plVar16,pMVar23);
    pMVar15 = pMVar23;
label_0448dd74:
    il2cpp_runtime_helper_022b2fd0(plVar16,plVar14);
label_0448dd7f:
    il2cpp_runtime_helper_022b2c90();
    plVar19 = plVar16;
    do {
      auVar25 = il2cpp_runtime_helper_022fefe0(plVar19);
      uStackY_e0 = auVar25._0_8_;
      plVar14 = (long *)0x0;
      if (auVar25._8_4_ != 1) {
        plVar14 = (long *)il2cpp_runtime_helper_023051f0(pMVar15,TypeInfo_IDisposable);
        if (plVar14 == (long *)0x0) goto label_0448de96;
        lVar17 = *plVar14;
        if ((ulong)*(ushort *)(lVar17 + 0x12e) == 0) goto label_0448de6f;
        lVar18 = 0;
        goto label_0448de60;
      }
      puVar20 = (undefined8 *)__cxa_begin_catch(uStackY_e0);
      plVar19 = (long *)*puVar20;
      __cxa_end_catch();
label_0448dbf1:
      pMVar22 = (MethodInfo *)il2cpp_runtime_helper_023051f0(pMVar15,TypeInfo_IDisposable);
      if (pMVar22 != (MethodInfo *)0x0) {
        vtableDispatch = pMVar22->methodPointer;
        if ((ulong)*(ushort *)(vtableDispatch + 0x12e) != 0) {
          lVar17 = 0;
          do {
            if (*(long *)(*(long *)(vtableDispatch + 0xb0) + lVar17) == TypeInfo_IDisposable) {
              vtableDispatch =
                   vtableDispatch +
                   (long)*(int *)(*(long *)(vtableDispatch + 0xb0) + 8 + lVar17) * 0x10 + 0x138;
              goto label_0448dc5d;
            }
            lVar17 = lVar17 + 0x10;
          } while ((ulong)*(ushort *)(vtableDispatch + 0x12e) << 4 != lVar17);
        }
        vtableDispatch = (Il2CppMethodPointer)il2cpp_runtime_helper_02300d20(pMVar22,TypeInfo_IDisposable,0);
label_0448dc5d:
        (**(code **)vtableDispatch)(pMVar22,*(undefined8 *)(vtableDispatch + 8));
        pMVar15 = pMVar22;
      }
    } while (plVar19 != (long *)0x0);
    if (((int)plVar14 != 6) && ((int)plVar14 != 0)) {
      return;
    }
  } while (pSVar11 == (System_Collections_Generic_List_object__o *)0x0);
  if ((pSVar11->fields)._size < 1) {
    return;
  }
  uStackY_e2 = (**(code **)(((MethodInfo *)pSVar13)->methodPointer + 0x178))(pSVar13);
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = System_Char__ToString((uint16_t)&uStackY_e2,(MethodInfo *)0x0);
  value_00 = (System_String_array *)System_Collections_Generic_List_object___ToArray(pSVar11,MethodInfo_String_ToArray);
  pSVar12 = System_String__Join(pSVar12,value_00,(MethodInfo *)0x0);
  plVar14 = (long *)pMStackY_d8;
label_0448dcf6:
  System_String__Concat_3ae5ba0((System_String_o *)plVar14,pSVar12,(MethodInfo *)0x0);
  return;
  while (lVar18 = lVar18 + 0x10, (ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar18) {
label_0448de60:
    if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar18) == TypeInfo_IDisposable) {
      puVar20 = (undefined8 *)(lVar17 + (long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar18) * 0x10 + 0x138);
      goto label_0448de8d;
    }
  }
label_0448de6f:
  puVar20 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IDisposable,0);
label_0448de8d:
  (*(code *)*puVar20)(plVar14,puVar20[1]);
label_0448de96:
  _Unwind_Resume(uStackY_e0);
}


// Utility.BaseCSVObject$$GetFields
// il2cpp: System_Collections_Generic_List_FieldInfo__o* Utility_BaseCSVObject__GetFields (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x448d170

System_Collections_Generic_List_FieldInfo__o *
Utility_BaseCSVObject__GetFields(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_RuntimeTypeHandle_o handle;
  char cVar5;
  bool_conflict bVar6;
  MethodInfo_2525430 *__this_04;
  System_Reflection_FieldInfo_array *source;
  System_Func_TSource__TKey__o *keySelector;
  Il2CppObject *pIVar7;
  System_Collections_Generic_List_TSource__o *value;
  System_Collections_Generic_List_FieldInfo__o *pSVar8;
  System_Type_o *pSVar9;
  System_Collections_Generic_List_object__o *pSVar10;
  System_String_o *pSVar11;
  System_RuntimeTypeHandle_o *pSVar12;
  long *plVar13;
  System_Type_o *right;
  undefined4 extraout_var;
  MethodInfo *pMVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  Il2CppMethodPointer pIVar21;
  undefined8 uVar22;
  MethodInfo *pMVar23;
  System_String_array *value_00;
  long *extraout_RDX;
  System_Collections_Generic_List_FieldInfo__o *pSVar24;
  MethodInfo *pMVar25;
  int iVar26;
  long *unaff_RBP;
  MethodInfo_2525430 *b;
  long lVar27;
  undefined1 auVar28 [12];
  undefined2 uStackY_da;
  undefined8 uStackY_d8;
  MethodInfo *pMStackY_d0;
  MethodInfo *pMStackY_c8;
  MethodInfo_2525430 *pMStackY_c0;
  Il2CppObject **ppIStackY_b8;
  undefined8 uStackY_b0;
  Il2CppObject *pIStackY_a8;
  code *pcStackY_a0;
  undefined8 uStackY_98;
  long lStackY_90;
  undefined8 uStackY_88;
  Il2CppClass *pIVar29;
  System_Collections_Generic_List_FieldInfo__o *pSVar30;
  
  if (g_data_057ae8e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Reflection_FieldInfo_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_Reflection_FieldInfo_OrderBy);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Reflection_FieldInfo_ToList_FieldInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_FieldInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetFields_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae8e9 = '\x01';
  }
  b = (MethodInfo_2525430 *)0x0;
  __this_04 = (MethodInfo_2525430 *)System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_BaseCSVObject[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar7 = (Il2CppObject *)0x0;
  if (*(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject[0xb].monitor !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    b = __this_04;
    bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (*(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject[0xb].monitor,
                       (Il2CppObject *)__this_04,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar6 == '\0') {
      if (*(int *)((long)&TypeInfo_BaseCSVObject[0xe].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar7 = TypeInfo_BaseCSVObject;
      if (__this_04 != (MethodInfo_2525430 *)0x0) {
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject[0xb].monitor;
        source = System_Type__GetFields((System_Type_o *)__this_04,(MethodInfo *)0x0);
        unaff_RBP = &TypeInfo_c;
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          unaff_RBP = (long *)**(undefined8 **)(TypeInfo_c + 0xb8);
          keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_FieldInfo_int);
          System_Func_object__int____ctor();
          lVar16 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_TSource__TKey__o **)(lVar16 + 8) = keySelector;
          il2cpp_runtime_helper_022b4080(lVar16 + 8,keySelector);
        }
        pIVar7 = (Il2CppObject *)
                 System_Linq_Enumerable__OrderBy_object__int_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,
                            MethodInfo_IOrderedEnumerable_1_System_Reflection_FieldInfo_OrderBy);
        b = MethodInfo_List_1_System_Reflection_FieldInfo_ToList_FieldInfo;
        value = System_Linq_Enumerable__ToList_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar7,MethodInfo_List_1_System_Reflection_FieldInfo_ToList_FieldInfo);
        if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          b = __this_04;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar3,(Il2CppObject *)__this_04,(Il2CppObject *)value,MethodInfo_Void_Add);
          goto label_0448d378;
        }
      }
    }
    else {
label_0448d378:
      if (*(int *)((long)&TypeInfo_BaseCSVObject[0xe].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar7 = (Il2CppObject *)0x0;
      if (*(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject[0xb].monitor !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar8 = (System_Collections_Generic_List_FieldInfo__o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           (*(System_Collections_Generic_Dictionary_object__object__o **)
                             TypeInfo_BaseCSVObject[0xb].monitor,(Il2CppObject *)__this_04,MethodInfo_List_1_System_Reflection_FieldInfo_get_Item);
        return pSVar8;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8ea == '\0') {
    uStackY_88 = 0x448d3f7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    uStackY_88 = 0x448d403;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Reflection_FieldInfo_get_Item);
    uStackY_88 = 0x448d40f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    uStackY_88 = 0x448d41b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    uStackY_88 = 0x448d427;
    il2cpp_runtime_helper_023445d0(&MethodInfo_FieldInfo_get_Current);
    uStackY_88 = 0x448d433;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Reflection_FieldInfo_GetEnume);
    g_data_057ae8ea = '\x01';
  }
  pIVar29 = (Il2CppClass *)0x0;
  pIVar21 = (Il2CppMethodPointer)0x0;
  pSVar8 = (System_Collections_Generic_List_FieldInfo__o *)0x0;
  if (*(int *)((long)&TypeInfo_BaseCSVObject[0xe].klass + 4) == 0) {
    uStackY_88 = 0x448d462;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject[0xb].monitor;
  uStackY_88 = 0x448d479;
  pSVar9 = System_Object__GetType(pIVar7,(MethodInfo *)0x0);
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    uStackY_88 = 0x448d497;
    pSVar10 = (System_Collections_Generic_List_object__o *)
              System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar3,(Il2CppObject *)pSVar9,MethodInfo_List_1_System_Reflection_FieldInfo_get_Item);
    if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
      uStackY_88 = 0x448d4b8;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff80,pSVar10,
                 MethodInfo_List_1_T_Enumerator_System_Reflection_FieldInfo_GetEnume);
      __this_04 = (MethodInfo_2525430 *)&MethodInfo_Boolean_MoveNext;
      pSVar30 = pSVar8;
      do {
        pSVar8 = pSVar30;
        uStackY_88 = 0x448d4cc;
        __this_00.fields._8_8_ = pIVar21;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)pIVar29;
        __this_00.fields._current = (Il2CppObject *)pSVar8;
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
        if ((char)bVar6 == '\0') {
          iVar26 = 5;
          pSVar24 = (System_Collections_Generic_List_FieldInfo__o *)0x0;
          goto label_0448d50c;
        }
        if (pSVar8 == (System_Collections_Generic_List_FieldInfo__o *)0x0) {
          uStackY_88 = 0x448d539;
          il2cpp_runtime_helper_022b2c90();
          pIVar7 = (Il2CppObject *)&stack0xffffffffffffff80;
          goto label_0448d539;
        }
        uStackY_88 = 0x448d4ed;
        pSVar30 = pSVar8;
        pSVar11 = (System_String_o *)
                  (*((Il2CppClass *)pSVar8->klass)->vtable[8].methodPtr)
                            (pSVar8,((Il2CppClass *)pSVar8->klass)->vtable[8].method);
        uStackY_88 = 0x448d4fa;
        bVar6 = System_String__op_Equality(pSVar11,(System_String_o *)b,(MethodInfo *)0x0);
      } while ((char)bVar6 == '\0');
      iVar26 = 4;
      pSVar24 = pSVar8;
      pSVar8 = pSVar30;
label_0448d50c:
      uStackY_88 = 0x448d51e;
      __this_01.fields._8_8_ = pIVar21;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pIVar29;
      __this_01.fields._current = (Il2CppObject *)pSVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
      goto label_0448d51e;
    }
  }
label_0448d539:
  uStackY_88 = 0x448d53e;
  auVar28 = il2cpp_runtime_helper_022b2c90();
  uVar22 = auVar28._0_8_;
  if (auVar28._8_4_ == 1) {
    uStackY_88 = 0x448d56c;
    plVar13 = (long *)__cxa_begin_catch(uVar22);
    lVar16 = *plVar13;
    uStackY_88 = 0x448d574;
    __cxa_end_catch();
    uStackY_88 = 0x448d586;
    __this_02.fields._8_8_ = pIVar21;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pIVar29;
    __this_02.fields._current = (Il2CppObject *)pSVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    if (lVar16 == 0) {
      pSVar24 = (System_Collections_Generic_List_FieldInfo__o *)0x0;
      iVar26 = 0;
label_0448d51e:
      pSVar8 = (System_Collections_Generic_List_FieldInfo__o *)0x0;
      if (iVar26 == 4) {
        pSVar8 = pSVar24;
      }
      return pSVar8;
    }
    uStackY_88 = 0x448d59d;
    uVar22 = il2cpp_runtime_helper_022fefe0(lVar16);
  }
  else {
    lVar16 = 0;
  }
  uStackY_88 = 0x448d5b2;
  __this_03.fields._8_8_ = pIVar21;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pIVar29;
  __this_03.fields._current = (Il2CppObject *)pSVar8;
  pMVar14 = MethodInfo_Void_Dispose;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  if (lVar16 == 0) {
    uStackY_88 = 0x448d5bf;
    _Unwind_Resume(uVar22);
  }
  uStackY_88 = 0x448d5c7;
  pSVar12 = (System_RuntimeTypeHandle_o *)il2cpp_runtime_helper_022fefe0(lVar16);
  uStackY_88 = 0x448d5cf;
  uStackY_98 = il2cpp_runtime_helper_01f66400();
  pMVar23 = pMVar14;
  lStackY_90 = lVar16;
  uStackY_88 = uVar22;
  if (g_data_057ae8eb == '\0') {
    pSVar12 = &TypeRef_List_T;
    pcStackY_a0 = (code *)0x448d5ec;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8eb = '\x01';
  }
  if (pMVar14 != (MethodInfo *)0x0) {
    pMVar23 = *(MethodInfo **)(pMVar14->methodPointer + 0x250);
    pcStackY_a0 = (code *)0x448d60f;
    pSVar12 = (System_RuntimeTypeHandle_o *)pMVar14;
    plVar13 = (long *)(**(code **)(pMVar14->methodPointer + 0x248))();
    if (plVar13 != (long *)0x0) {
      pcStackY_a0 = (code *)0x448d62b;
      cVar5 = (**(code **)(*plVar13 + 0x3b8))(plVar13,*(undefined8 *)(*plVar13 + 0x3c0));
      if (cVar5 == '\0') {
        return (System_Collections_Generic_List_FieldInfo__o *)0x0;
      }
      pMVar23 = *(MethodInfo **)(pMVar14->methodPointer + 0x250);
      pcStackY_a0 = (code *)0x448d642;
      pSVar12 = (System_RuntimeTypeHandle_o *)pMVar14;
      plVar13 = (long *)(**(code **)(pMVar14->methodPointer + 0x248))();
      if (plVar13 != (long *)0x0) {
        pcStackY_a0 = (code *)0x448d65a;
        pSVar9 = (System_Type_o *)(**(code **)(*plVar13 + 0x448))(plVar13);
        handle = TypeRef_List_T;
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          pcStackY_a0 = (code *)0x448d683;
          il2cpp_runtime_helper_02337ed0();
        }
        pcStackY_a0 = (code *)0x448d68d;
        right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        bVar6 = System_Type__op_Equality(pSVar9,right,(MethodInfo *)0x0);
        return (System_Collections_Generic_List_FieldInfo__o *)CONCAT44(extraout_var,bVar6);
      }
    }
  }
  pcStackY_a0 = Utility_BaseCSVObject__SerializeField;
  il2cpp_runtime_helper_022b2c90();
  ppIStackY_b8 = &TypeInfo_BaseCSVObject;
  pMStackY_c8 = pMVar14;
  pMStackY_c0 = __this_04;
  uStackY_b0 = uVar22;
  pIStackY_a8 = pIVar7;
  pcStackY_a0 = (code *)unaff_RBP;
  if (g_data_057ae8ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IList);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae8ec = '\x01';
  }
  uStackY_da = 0;
  pSVar10 = (System_Collections_Generic_List_object__o *)&g_data_057b9b70;
  plVar13 = (long *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  cVar5 = (**(code **)(((MethodInfo *)pSVar12)->methodPointer + 0x1a8))
                    (pSVar12,*(undefined8 *)(((MethodInfo *)pSVar12)->methodPointer + 0x1b0));
  if (cVar5 == '\0') {
label_0448d7e4:
    cVar5 = (**(code **)(((MethodInfo *)pSVar12)->methodPointer + 0x208))
                      (pSVar12,pMVar23,*(undefined8 *)(((MethodInfo *)pSVar12)->methodPointer + 0x210));
    if (cVar5 == '\0') {
      plVar18 = extraout_RDX;
      if (pMVar23 != (MethodInfo *)0x0) {
        uVar22 = (**(code **)(pMVar23->methodPointer + 0x248))
                           (pMVar23,*(undefined8 *)(pMVar23->methodPointer + 0x250));
        uVar20 = (**(code **)(pMVar23->methodPointer + 0x2d8))
                           (pMVar23,extraout_RDX,*(undefined8 *)(pMVar23->methodPointer + 0x2e0));
        pSVar11 = (System_String_o *)
                  (**(code **)(((MethodInfo *)pSVar12)->methodPointer + 0x238))
                            (pSVar12,uVar22,uVar20,
                             *(undefined8 *)(((MethodInfo *)pSVar12)->methodPointer + 0x240));
        goto label_0448dcf6;
      }
    }
    else {
      pSVar10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(pSVar10,MethodInfo_List_1_System_String);
      plVar18 = extraout_RDX;
      if (((pMVar23 != (MethodInfo *)0x0) &&
          (plVar15 = (long *)(**(code **)(pMVar23->methodPointer + 0x248))
                                       (pMVar23,*(undefined8 *)(pMVar23->methodPointer + 0x250)),
          plVar18 = extraout_RDX, plVar15 != (long *)0x0)) &&
         (lVar16 = (**(code **)(*plVar15 + 0x468))(plVar15,*(undefined8 *)(*plVar15 + 0x470)),
         plVar18 = extraout_RDX, lVar16 != 0)) {
        pMVar25 = pMVar14;
        plVar15 = extraout_RDX;
        if (*(int *)(lVar16 + 0x18) == 0) goto label_0448dd64;
        uStackY_d8 = *(undefined8 *)(lVar16 + 0x20);
        pMStackY_d0 = (MethodInfo *)plVar13;
        plVar15 = (long *)(**(code **)(pMVar23->methodPointer + 0x2d8))
                                    (pMVar23,extraout_RDX,*(undefined8 *)(pMVar23->methodPointer + 0x2e0));
        pMVar25 = TypeInfo_IList;
        plVar18 = extraout_RDX;
        if (plVar15 != (long *)0x0) {
          lVar17 = il2cpp_runtime_helper_023051f0(plVar15,TypeInfo_IList);
          plVar13 = (long *)TypeInfo_IList;
          lVar16 = TypeInfo_IEnumerable;
          pMVar14 = (MethodInfo *)&TypeInfo_IList;
          if (lVar17 == 0) goto label_0448dd69;
          plVar18 = (long *)il2cpp_runtime_helper_023051f0(plVar15);
          pMVar14 = pMVar25;
          if (plVar18 == (long *)0x0) goto label_0448dd74;
          lVar17 = *plVar18;
          if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
            lVar27 = 0;
            do {
              if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar27) == lVar16) {
                puVar19 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar27) * 0x10 + lVar17 + 0x138);
                goto label_0448d99c;
              }
              lVar27 = lVar27 + 0x10;
            } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar27);
          }
          puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar18,lVar16,0);
label_0448d99c:
          pMVar14 = (MethodInfo *)(*(code *)*puVar19)(plVar18,puVar19[1]);
          if (pMVar14 == (MethodInfo *)0x0) goto label_0448dd7f;
          if (pSVar10 == (System_Collections_Generic_List_object__o *)0x0) {
            pIVar21 = pMVar14->methodPointer;
            if ((ulong)*(ushort *)(pIVar21 + 0x12e) != 0) {
              lVar16 = 0;
              do {
                if (*(long *)(*(long *)(pIVar21 + 0xb0) + lVar16) == TypeInfo_IEnumerator) {
                  pIVar21 = pIVar21 + (long)*(int *)(*(long *)(pIVar21 + 0xb0) + 8 + lVar16) * 0x10 + 0x138;
                  goto label_0448db91;
                }
                lVar16 = lVar16 + 0x10;
              } while ((ulong)*(ushort *)(pIVar21 + 0x12e) << 4 != lVar16);
            }
            pIVar21 = (Il2CppMethodPointer)il2cpp_runtime_helper_02300d20(pMVar14,TypeInfo_IEnumerator,0);
label_0448db91:
            cVar5 = (**(code **)pIVar21)(pMVar14,*(undefined8 *)(pIVar21 + 8));
            if (cVar5 == '\0') {
label_0448dbe8:
              plVar13 = (long *)0x6;
              plVar18 = (long *)0x0;
              goto label_0448dbf1;
            }
            pIVar21 = pMVar14->methodPointer;
            if ((ulong)*(ushort *)(pIVar21 + 0x12e) != 0) {
              lVar16 = 0;
              do {
                if (*(long *)(*(long *)(pIVar21 + 0xb0) + lVar16) == TypeInfo_IEnumerator) {
                  pIVar21 = pIVar21 + (long)(*(int *)(*(long *)(pIVar21 + 0xb0) + 8 + lVar16) + 1) * 0x10 +
                                      0x138;
                  goto label_0448dd31;
                }
                lVar16 = lVar16 + 0x10;
              } while ((ulong)*(ushort *)(pIVar21 + 0x12e) << 4 != lVar16);
            }
            pIVar21 = (Il2CppMethodPointer)il2cpp_runtime_helper_02300d20(pMVar14,TypeInfo_IEnumerator,1);
label_0448dd31:
            uVar22 = (**(code **)pIVar21)(pMVar14,*(undefined8 *)(pIVar21 + 8));
            (**(code **)(((MethodInfo *)pSVar12)->methodPointer + 0x238))
                      (pSVar12,uStackY_d8,uVar22,
                       *(undefined8 *)(((MethodInfo *)pSVar12)->methodPointer + 0x240));
            il2cpp_runtime_helper_022b2c90();
          }
          else {
            plVar15 = &TypeInfo_IEnumerator;
            plVar13 = &MethodInfo_Void_Add;
label_0448d9ea:
            pIVar21 = pMVar14->methodPointer;
            if ((ulong)*(ushort *)(pIVar21 + 0x12e) != 0) {
              lVar16 = 0;
              do {
                if (*(long *)(*(long *)(pIVar21 + 0xb0) + lVar16) == TypeInfo_IEnumerator) {
                  pIVar21 = pIVar21 + (long)*(int *)(*(long *)(pIVar21 + 0xb0) + 8 + lVar16) * 0x10 + 0x138;
                  goto label_0448da43;
                }
                lVar16 = lVar16 + 0x10;
              } while ((ulong)*(ushort *)(pIVar21 + 0x12e) << 4 != lVar16);
            }
            pIVar21 = (Il2CppMethodPointer)il2cpp_runtime_helper_02300d20(pMVar14,TypeInfo_IEnumerator,0);
label_0448da43:
            cVar5 = (**(code **)pIVar21)(pMVar14,*(undefined8 *)(pIVar21 + 8));
            if (cVar5 == '\0') goto label_0448dbe8;
            pIVar21 = pMVar14->methodPointer;
            if ((ulong)*(ushort *)(pIVar21 + 0x12e) != 0) {
              lVar16 = 0;
              do {
                if (*(long *)(*(long *)(pIVar21 + 0xb0) + lVar16) == TypeInfo_IEnumerator) {
                  pIVar21 = pIVar21 + (long)(*(int *)(*(long *)(pIVar21 + 0xb0) + 8 + lVar16) + 1) * 0x10 +
                                      0x138;
                  goto label_0448dac8;
                }
                lVar16 = lVar16 + 0x10;
              } while ((ulong)*(ushort *)(pIVar21 + 0x12e) << 4 != lVar16);
            }
            pIVar21 = (Il2CppMethodPointer)il2cpp_runtime_helper_02300d20(pMVar14,TypeInfo_IEnumerator,1);
label_0448dac8:
            uVar22 = (**(code **)pIVar21)(pMVar14,*(undefined8 *)(pIVar21 + 8));
            pIVar7 = (Il2CppObject *)
                     (**(code **)(((MethodInfo *)pSVar12)->methodPointer + 0x238))
                               (pSVar12,uStackY_d8,uVar22,
                                *(undefined8 *)(((MethodInfo *)pSVar12)->methodPointer + 0x240));
            lVar16 = MethodInfo_Void_Add;
            piVar1 = &(pSVar10->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar10->fields)._items;
            if (pSVar4 != (System_Object_array *)0x0) {
              uVar2 = (pSVar10->fields)._size;
              if (uVar2 < (uint)pSVar4->max_length) {
                (pSVar10->fields)._size = uVar2 + 1;
                pSVar4->m_Items[(int)uVar2] = pIVar7;
                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pIVar7);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar10,pIVar7,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              goto label_0448d9ea;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          plVar18 = plVar15;
        }
      }
    }
  }
  else {
    plVar18 = extraout_RDX;
    if (pMVar23 != (MethodInfo *)0x0) {
      pMVar14 = (MethodInfo *)
                (**(code **)(pMVar23->methodPointer + 0x1b8))
                          (pMVar23,*(undefined8 *)(pMVar23->methodPointer + 0x1c0));
      uStackY_da = (**(code **)(((MethodInfo *)pSVar12)->methodPointer + 0x188))(pSVar12);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = System_Char__ToString((uint16_t)&uStackY_da,(MethodInfo *)0x0);
      plVar13 = (long *)System_String__Concat_3ae5ba0((System_String_o *)pMVar14,pSVar11,(MethodInfo *)0x0);
      goto label_0448d7e4;
    }
  }
  do {
    il2cpp_runtime_helper_022b2c90();
    pMVar25 = pMVar14;
    plVar15 = plVar18;
label_0448dd64:
    il2cpp_runtime_helper_022b2ca0();
    pMVar14 = (MethodInfo *)plVar13;
label_0448dd69:
    plVar13 = (long *)pMVar14;
    il2cpp_runtime_helper_022b2fd0(plVar15,pMVar25);
    pMVar14 = pMVar25;
label_0448dd74:
    il2cpp_runtime_helper_022b2fd0(plVar15,plVar13);
label_0448dd7f:
    il2cpp_runtime_helper_022b2c90();
    plVar18 = plVar15;
    do {
      auVar28 = il2cpp_runtime_helper_022fefe0(plVar18);
      uStackY_d8 = auVar28._0_8_;
      plVar13 = (long *)0x0;
      if (auVar28._8_4_ != 1) {
        plVar13 = (long *)il2cpp_runtime_helper_023051f0(pMVar14,TypeInfo_IDisposable);
        if (plVar13 == (long *)0x0) goto label_0448de96;
        lVar16 = *plVar13;
        if ((ulong)*(ushort *)(lVar16 + 0x12e) == 0) goto label_0448de6f;
        lVar17 = 0;
        goto label_0448de60;
      }
      puVar19 = (undefined8 *)__cxa_begin_catch(uStackY_d8);
      plVar18 = (long *)*puVar19;
      __cxa_end_catch();
label_0448dbf1:
      pMVar23 = (MethodInfo *)il2cpp_runtime_helper_023051f0(pMVar14,TypeInfo_IDisposable);
      if (pMVar23 != (MethodInfo *)0x0) {
        pIVar21 = pMVar23->methodPointer;
        if ((ulong)*(ushort *)(pIVar21 + 0x12e) != 0) {
          lVar16 = 0;
          do {
            if (*(long *)(*(long *)(pIVar21 + 0xb0) + lVar16) == TypeInfo_IDisposable) {
              pIVar21 = pIVar21 + (long)*(int *)(*(long *)(pIVar21 + 0xb0) + 8 + lVar16) * 0x10 + 0x138;
              goto label_0448dc5d;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)*(ushort *)(pIVar21 + 0x12e) << 4 != lVar16);
        }
        pIVar21 = (Il2CppMethodPointer)il2cpp_runtime_helper_02300d20(pMVar23,TypeInfo_IDisposable,0);
label_0448dc5d:
        (**(code **)pIVar21)(pMVar23,*(undefined8 *)(pIVar21 + 8));
        pMVar14 = pMVar23;
      }
    } while (plVar18 != (long *)0x0);
    if (((int)plVar13 != 6) && ((int)plVar13 != 0)) {
      return (System_Collections_Generic_List_FieldInfo__o *)pMStackY_d0;
    }
  } while (pSVar10 == (System_Collections_Generic_List_object__o *)0x0);
  if ((pSVar10->fields)._size < 1) {
    return (System_Collections_Generic_List_FieldInfo__o *)pMStackY_d0;
  }
  uStackY_da = (**(code **)(((MethodInfo *)pSVar12)->methodPointer + 0x178))(pSVar12);
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = System_Char__ToString((uint16_t)&uStackY_da,(MethodInfo *)0x0);
  value_00 = (System_String_array *)System_Collections_Generic_List_object___ToArray(pSVar10,MethodInfo_String_ToArray);
  pSVar11 = System_String__Join(pSVar11,value_00,(MethodInfo *)0x0);
  plVar13 = (long *)pMStackY_d0;
label_0448dcf6:
  pSVar8 = (System_Collections_Generic_List_FieldInfo__o *)
           System_String__Concat_3ae5ba0((System_String_o *)plVar13,pSVar11,(MethodInfo *)0x0);
  return pSVar8;
  while (lVar17 = lVar17 + 0x10, (ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17) {
label_0448de60:
    if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
      puVar19 = (undefined8 *)(lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
      goto label_0448de8d;
    }
  }
label_0448de6f:
  puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_IDisposable,0);
label_0448de8d:
  (*(code *)*puVar19)(plVar13,puVar19[1]);
label_0448de96:
  _Unwind_Resume(uStackY_d8);
}


// Utility.BaseCSVObject$$FindField
// il2cpp: System_Reflection_FieldInfo_o* Utility_BaseCSVObject__FindField (Utility_BaseCSVObject_o* __this, System_String_o* name, const MethodInfo* method);
// 0x448d3d0

System_Reflection_FieldInfo_o *
Utility_BaseCSVObject__FindField(Utility_BaseCSVObject_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_RuntimeTypeHandle_o handle;
  char cVar4;
  bool_conflict bVar5;
  System_Type_o *pSVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  System_String_o *pSVar8;
  System_RuntimeTypeHandle_o *pSVar9;
  long *plVar10;
  System_Type_o *right;
  undefined4 extraout_var;
  MethodInfo *pMVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  Il2CppMethodPointer pIVar18;
  undefined8 uVar19;
  MethodInfo *pMVar20;
  System_String_array *value;
  long *extraout_RDX;
  Il2CppObject *pIVar21;
  MethodInfo *pMVar22;
  int iVar23;
  long lVar24;
  undefined8 *unaff_R12;
  undefined1 auVar25 [12];
  undefined2 uStackY_a2;
  undefined8 uStackY_a0;
  MethodInfo *pMStackY_98;
  MethodInfo *pMStackY_90;
  undefined8 *puStackY_88;
  System_Collections_Generic_List_T__o *pSVar26;
  Il2CppObject *pIVar27;
  Il2CppObject *pIVar28;
  
  if (g_data_057ae8ea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Reflection_FieldInfo_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FieldInfo_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Reflection_FieldInfo_GetEnume);
    g_data_057ae8ea = '\x01';
  }
  pSVar26 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar18 = (Il2CppMethodPointer)0x0;
  pIVar27 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_BaseCSVObject + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              **(undefined8 **)(TypeInfo_BaseCSVObject + 0xb8);
  pSVar6 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (pSVar7 = (System_Collections_Generic_List_object__o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_00,(Il2CppObject *)pSVar6,MethodInfo_List_1_System_Reflection_FieldInfo_get_Item),
     pSVar7 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,pSVar7,MethodInfo_List_1_T_Enumerator_System_Reflection_FieldInfo_GetEnume
              );
    unaff_R12 = &MethodInfo_Boolean_MoveNext;
    pIVar28 = pIVar27;
    do {
      pIVar27 = pIVar28;
      __this_01.fields._8_8_ = pIVar18;
      __this_01.fields._list = pSVar26;
      __this_01.fields._current = pIVar27;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
      if ((char)bVar5 == '\0') {
        iVar23 = 5;
        pIVar21 = (Il2CppObject *)0x0;
        goto label_0448d50c;
      }
      if (pIVar27 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_0448d539;
      }
      pIVar28 = pIVar27;
      pSVar8 = (System_String_o *)
               (*pIVar27->klass->vtable[8].methodPtr)(pIVar27,pIVar27->klass->vtable[8].method);
      bVar5 = System_String__op_Equality(pSVar8,name,(MethodInfo *)0x0);
    } while ((char)bVar5 == '\0');
    iVar23 = 4;
    pIVar21 = pIVar27;
    pIVar27 = pIVar28;
label_0448d50c:
    __this_02.fields._8_8_ = pIVar18;
    __this_02.fields._list = pSVar26;
    __this_02.fields._current = pIVar27;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
label_0448d51e:
    pIVar27 = (Il2CppObject *)0x0;
    if (iVar23 == 4) {
      pIVar27 = pIVar21;
    }
    return (System_Reflection_FieldInfo_o *)pIVar27;
  }
label_0448d539:
  auVar25 = il2cpp_runtime_helper_022b2c90();
  uVar19 = auVar25._0_8_;
  if (auVar25._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(uVar19);
    lVar13 = *plVar10;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar18;
    __this_03.fields._list = pSVar26;
    __this_03.fields._current = pIVar27;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    if (lVar13 == 0) {
      pIVar21 = (Il2CppObject *)0x0;
      iVar23 = 0;
      goto label_0448d51e;
    }
    uVar19 = il2cpp_runtime_helper_022fefe0(lVar13);
  }
  else {
    lVar13 = 0;
  }
  __this_04.fields._8_8_ = pIVar18;
  __this_04.fields._list = pSVar26;
  __this_04.fields._current = pIVar27;
  pMVar11 = MethodInfo_Void_Dispose;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  if (lVar13 == 0) {
    _Unwind_Resume(uVar19);
  }
  pSVar9 = (System_RuntimeTypeHandle_o *)il2cpp_runtime_helper_022fefe0(lVar13);
  il2cpp_runtime_helper_01f66400();
  pMVar20 = pMVar11;
  if (g_data_057ae8eb == '\0') {
    pSVar9 = &TypeRef_List_T;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8eb = '\x01';
  }
  if (pMVar11 != (MethodInfo *)0x0) {
    pMVar20 = *(MethodInfo **)(pMVar11->methodPointer + 0x250);
    pSVar9 = (System_RuntimeTypeHandle_o *)pMVar11;
    plVar10 = (long *)(**(code **)(pMVar11->methodPointer + 0x248))();
    if (plVar10 != (long *)0x0) {
      cVar4 = (**(code **)(*plVar10 + 0x3b8))(plVar10,*(undefined8 *)(*plVar10 + 0x3c0));
      if (cVar4 == '\0') {
        return (System_Reflection_FieldInfo_o *)0x0;
      }
      pMVar20 = *(MethodInfo **)(pMVar11->methodPointer + 0x250);
      pSVar9 = (System_RuntimeTypeHandle_o *)pMVar11;
      plVar10 = (long *)(**(code **)(pMVar11->methodPointer + 0x248))();
      if (plVar10 != (long *)0x0) {
        pSVar6 = (System_Type_o *)(**(code **)(*plVar10 + 0x448))(plVar10);
        handle = TypeRef_List_T;
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        bVar5 = System_Type__op_Equality(pSVar6,right,(MethodInfo *)0x0);
        return (System_Reflection_FieldInfo_o *)CONCAT44(extraout_var,bVar5);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMStackY_90 = pMVar11;
  puStackY_88 = unaff_R12;
  if (g_data_057ae8ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IList);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae8ec = '\x01';
  }
  uStackY_a2 = 0;
  pSVar7 = (System_Collections_Generic_List_object__o *)&g_data_057b9b70;
  plVar10 = (long *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  cVar4 = (**(code **)(((MethodInfo *)pSVar9)->methodPointer + 0x1a8))
                    (pSVar9,*(undefined8 *)(((MethodInfo *)pSVar9)->methodPointer + 0x1b0));
  if (cVar4 == '\0') {
label_0448d7e4:
    cVar4 = (**(code **)(((MethodInfo *)pSVar9)->methodPointer + 0x208))
                      (pSVar9,pMVar20,*(undefined8 *)(((MethodInfo *)pSVar9)->methodPointer + 0x210));
    if (cVar4 == '\0') {
      plVar15 = extraout_RDX;
      if (pMVar20 != (MethodInfo *)0x0) {
        uVar19 = (**(code **)(pMVar20->methodPointer + 0x248))
                           (pMVar20,*(undefined8 *)(pMVar20->methodPointer + 0x250));
        uVar17 = (**(code **)(pMVar20->methodPointer + 0x2d8))
                           (pMVar20,extraout_RDX,*(undefined8 *)(pMVar20->methodPointer + 0x2e0));
        pSVar8 = (System_String_o *)
                 (**(code **)(((MethodInfo *)pSVar9)->methodPointer + 0x238))
                           (pSVar9,uVar19,uVar17,
                            *(undefined8 *)(((MethodInfo *)pSVar9)->methodPointer + 0x240));
        goto label_0448dcf6;
      }
    }
    else {
      pSVar7 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(pSVar7,MethodInfo_List_1_System_String);
      plVar15 = extraout_RDX;
      if (((pMVar20 != (MethodInfo *)0x0) &&
          (plVar12 = (long *)(**(code **)(pMVar20->methodPointer + 0x248))
                                       (pMVar20,*(undefined8 *)(pMVar20->methodPointer + 0x250)),
          plVar15 = extraout_RDX, plVar12 != (long *)0x0)) &&
         (lVar13 = (**(code **)(*plVar12 + 0x468))(plVar12,*(undefined8 *)(*plVar12 + 0x470)),
         plVar15 = extraout_RDX, lVar13 != 0)) {
        pMVar22 = pMVar11;
        plVar12 = extraout_RDX;
        if (*(int *)(lVar13 + 0x18) == 0) goto label_0448dd64;
        uStackY_a0 = *(undefined8 *)(lVar13 + 0x20);
        pMStackY_98 = (MethodInfo *)plVar10;
        plVar12 = (long *)(**(code **)(pMVar20->methodPointer + 0x2d8))
                                    (pMVar20,extraout_RDX,*(undefined8 *)(pMVar20->methodPointer + 0x2e0));
        pMVar22 = TypeInfo_IList;
        plVar15 = extraout_RDX;
        if (plVar12 != (long *)0x0) {
          lVar14 = il2cpp_runtime_helper_023051f0(plVar12,TypeInfo_IList);
          plVar10 = (long *)TypeInfo_IList;
          lVar13 = TypeInfo_IEnumerable;
          pMVar11 = (MethodInfo *)&TypeInfo_IList;
          if (lVar14 == 0) goto label_0448dd69;
          plVar15 = (long *)il2cpp_runtime_helper_023051f0(plVar12);
          pMVar11 = pMVar22;
          if (plVar15 == (long *)0x0) goto label_0448dd74;
          lVar14 = *plVar15;
          if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
            lVar24 = 0;
            do {
              if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar24) == lVar13) {
                puVar16 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar24) * 0x10 + lVar14 + 0x138);
                goto label_0448d99c;
              }
              lVar24 = lVar24 + 0x10;
            } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar24);
          }
          puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,lVar13,0);
label_0448d99c:
          pMVar11 = (MethodInfo *)(*(code *)*puVar16)(plVar15,puVar16[1]);
          if (pMVar11 == (MethodInfo *)0x0) goto label_0448dd7f;
          if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) {
            pIVar18 = pMVar11->methodPointer;
            if ((ulong)*(ushort *)(pIVar18 + 0x12e) != 0) {
              lVar13 = 0;
              do {
                if (*(long *)(*(long *)(pIVar18 + 0xb0) + lVar13) == TypeInfo_IEnumerator) {
                  pIVar18 = pIVar18 + (long)*(int *)(*(long *)(pIVar18 + 0xb0) + 8 + lVar13) * 0x10 + 0x138;
                  goto label_0448db91;
                }
                lVar13 = lVar13 + 0x10;
              } while ((ulong)*(ushort *)(pIVar18 + 0x12e) << 4 != lVar13);
            }
            pIVar18 = (Il2CppMethodPointer)il2cpp_runtime_helper_02300d20(pMVar11,TypeInfo_IEnumerator,0);
label_0448db91:
            cVar4 = (**(code **)pIVar18)(pMVar11,*(undefined8 *)(pIVar18 + 8));
            if (cVar4 == '\0') {
label_0448dbe8:
              plVar10 = (long *)0x6;
              plVar15 = (long *)0x0;
              goto label_0448dbf1;
            }
            pIVar18 = pMVar11->methodPointer;
            if ((ulong)*(ushort *)(pIVar18 + 0x12e) != 0) {
              lVar13 = 0;
              do {
                if (*(long *)(*(long *)(pIVar18 + 0xb0) + lVar13) == TypeInfo_IEnumerator) {
                  pIVar18 = pIVar18 + (long)(*(int *)(*(long *)(pIVar18 + 0xb0) + 8 + lVar13) + 1) * 0x10 +
                                      0x138;
                  goto label_0448dd31;
                }
                lVar13 = lVar13 + 0x10;
              } while ((ulong)*(ushort *)(pIVar18 + 0x12e) << 4 != lVar13);
            }
            pIVar18 = (Il2CppMethodPointer)il2cpp_runtime_helper_02300d20(pMVar11,TypeInfo_IEnumerator,1);
label_0448dd31:
            uVar19 = (**(code **)pIVar18)(pMVar11,*(undefined8 *)(pIVar18 + 8));
            (**(code **)(((MethodInfo *)pSVar9)->methodPointer + 0x238))
                      (pSVar9,uStackY_a0,uVar19,*(undefined8 *)(((MethodInfo *)pSVar9)->methodPointer + 0x240)
                      );
            il2cpp_runtime_helper_022b2c90();
          }
          else {
            plVar12 = &TypeInfo_IEnumerator;
            plVar10 = &MethodInfo_Void_Add;
label_0448d9ea:
            pIVar18 = pMVar11->methodPointer;
            if ((ulong)*(ushort *)(pIVar18 + 0x12e) != 0) {
              lVar13 = 0;
              do {
                if (*(long *)(*(long *)(pIVar18 + 0xb0) + lVar13) == TypeInfo_IEnumerator) {
                  pIVar18 = pIVar18 + (long)*(int *)(*(long *)(pIVar18 + 0xb0) + 8 + lVar13) * 0x10 + 0x138;
                  goto label_0448da43;
                }
                lVar13 = lVar13 + 0x10;
              } while ((ulong)*(ushort *)(pIVar18 + 0x12e) << 4 != lVar13);
            }
            pIVar18 = (Il2CppMethodPointer)il2cpp_runtime_helper_02300d20(pMVar11,TypeInfo_IEnumerator,0);
label_0448da43:
            cVar4 = (**(code **)pIVar18)(pMVar11,*(undefined8 *)(pIVar18 + 8));
            if (cVar4 == '\0') goto label_0448dbe8;
            pIVar18 = pMVar11->methodPointer;
            if ((ulong)*(ushort *)(pIVar18 + 0x12e) != 0) {
              lVar13 = 0;
              do {
                if (*(long *)(*(long *)(pIVar18 + 0xb0) + lVar13) == TypeInfo_IEnumerator) {
                  pIVar18 = pIVar18 + (long)(*(int *)(*(long *)(pIVar18 + 0xb0) + 8 + lVar13) + 1) * 0x10 +
                                      0x138;
                  goto label_0448dac8;
                }
                lVar13 = lVar13 + 0x10;
              } while ((ulong)*(ushort *)(pIVar18 + 0x12e) << 4 != lVar13);
            }
            pIVar18 = (Il2CppMethodPointer)il2cpp_runtime_helper_02300d20(pMVar11,TypeInfo_IEnumerator,1);
label_0448dac8:
            uVar19 = (**(code **)pIVar18)(pMVar11,*(undefined8 *)(pIVar18 + 8));
            pIVar27 = (Il2CppObject *)
                      (**(code **)(((MethodInfo *)pSVar9)->methodPointer + 0x238))
                                (pSVar9,uStackY_a0,uVar19,
                                 *(undefined8 *)(((MethodInfo *)pSVar9)->methodPointer + 0x240));
            lVar13 = MethodInfo_Void_Add;
            piVar1 = &(pSVar7->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (pSVar7->fields)._items;
            if (pSVar3 != (System_Object_array *)0x0) {
              uVar2 = (pSVar7->fields)._size;
              if (uVar2 < (uint)pSVar3->max_length) {
                (pSVar7->fields)._size = uVar2 + 1;
                pSVar3->m_Items[(int)uVar2] = pIVar27;
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pIVar27);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar7,pIVar27,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              goto label_0448d9ea;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          plVar15 = plVar12;
        }
      }
    }
  }
  else {
    plVar15 = extraout_RDX;
    if (pMVar20 != (MethodInfo *)0x0) {
      pMVar11 = (MethodInfo *)
                (**(code **)(pMVar20->methodPointer + 0x1b8))
                          (pMVar20,*(undefined8 *)(pMVar20->methodPointer + 0x1c0));
      uStackY_a2 = (**(code **)(((MethodInfo *)pSVar9)->methodPointer + 0x188))(pSVar9);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = System_Char__ToString((uint16_t)&uStackY_a2,(MethodInfo *)0x0);
      plVar10 = (long *)System_String__Concat_3ae5ba0((System_String_o *)pMVar11,pSVar8,(MethodInfo *)0x0);
      goto label_0448d7e4;
    }
  }
  do {
    il2cpp_runtime_helper_022b2c90();
    pMVar22 = pMVar11;
    plVar12 = plVar15;
label_0448dd64:
    il2cpp_runtime_helper_022b2ca0();
    pMVar11 = (MethodInfo *)plVar10;
label_0448dd69:
    plVar10 = (long *)pMVar11;
    il2cpp_runtime_helper_022b2fd0(plVar12,pMVar22);
    pMVar11 = pMVar22;
label_0448dd74:
    il2cpp_runtime_helper_022b2fd0(plVar12,plVar10);
label_0448dd7f:
    il2cpp_runtime_helper_022b2c90();
    plVar15 = plVar12;
    do {
      auVar25 = il2cpp_runtime_helper_022fefe0(plVar15);
      uStackY_a0 = auVar25._0_8_;
      plVar10 = (long *)0x0;
      if (auVar25._8_4_ != 1) {
        plVar10 = (long *)il2cpp_runtime_helper_023051f0(pMVar11,TypeInfo_IDisposable);
        if (plVar10 == (long *)0x0) goto label_0448de96;
        lVar13 = *plVar10;
        if ((ulong)*(ushort *)(lVar13 + 0x12e) == 0) goto label_0448de6f;
        lVar14 = 0;
        goto label_0448de60;
      }
      puVar16 = (undefined8 *)__cxa_begin_catch(uStackY_a0);
      plVar15 = (long *)*puVar16;
      __cxa_end_catch();
label_0448dbf1:
      pMVar20 = (MethodInfo *)il2cpp_runtime_helper_023051f0(pMVar11,TypeInfo_IDisposable);
      if (pMVar20 != (MethodInfo *)0x0) {
        pIVar18 = pMVar20->methodPointer;
        if ((ulong)*(ushort *)(pIVar18 + 0x12e) != 0) {
          lVar13 = 0;
          do {
            if (*(long *)(*(long *)(pIVar18 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
              pIVar18 = pIVar18 + (long)*(int *)(*(long *)(pIVar18 + 0xb0) + 8 + lVar13) * 0x10 + 0x138;
              goto label_0448dc5d;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)*(ushort *)(pIVar18 + 0x12e) << 4 != lVar13);
        }
        pIVar18 = (Il2CppMethodPointer)il2cpp_runtime_helper_02300d20(pMVar20,TypeInfo_IDisposable,0);
label_0448dc5d:
        (**(code **)pIVar18)(pMVar20,*(undefined8 *)(pIVar18 + 8));
        pMVar11 = pMVar20;
      }
    } while (plVar15 != (long *)0x0);
    if (((int)plVar10 != 6) && ((int)plVar10 != 0)) {
      return (System_Reflection_FieldInfo_o *)pMStackY_98;
    }
  } while (pSVar7 == (System_Collections_Generic_List_object__o *)0x0);
  if ((pSVar7->fields)._size < 1) {
    return (System_Reflection_FieldInfo_o *)pMStackY_98;
  }
  uStackY_a2 = (**(code **)(((MethodInfo *)pSVar9)->methodPointer + 0x178))(pSVar9);
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = System_Char__ToString((uint16_t)&uStackY_a2,(MethodInfo *)0x0);
  value = (System_String_array *)System_Collections_Generic_List_object___ToArray(pSVar7,MethodInfo_String_ToArray);
  pSVar8 = System_String__Join(pSVar8,value,(MethodInfo *)0x0);
  plVar10 = (long *)pMStackY_98;
label_0448dcf6:
  pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)plVar10,pSVar8,(MethodInfo *)0x0);
  return (System_Reflection_FieldInfo_o *)pSVar8;
  while (lVar14 = lVar14 + 0x10, (ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14) {
label_0448de60:
    if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
      puVar16 = (undefined8 *)(lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
      goto label_0448de8d;
    }
  }
label_0448de6f:
  puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IDisposable,0);
label_0448de8d:
  (*(code *)*puVar16)(plVar10,puVar16[1]);
label_0448de96:
  _Unwind_Resume(uStackY_a0);
}


// Utility.BaseCSVObject$$IsList
// il2cpp: bool Utility_BaseCSVObject__IsList (Utility_BaseCSVObject_o* __this, System_Reflection_FieldInfo_o* field, const MethodInfo* method);
// 0x448d5d0

bool_conflict
Utility_BaseCSVObject__IsList
          (Utility_BaseCSVObject_o *__this,System_Reflection_FieldInfo_o *field,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  System_String_c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_Object_array *pSVar10;
  System_RuntimeTypeHandle_o handle;
  System_String_o *pSVar11;
  char cVar12;
  bool_conflict bVar13;
  long *plVar14;
  System_Type_o *left;
  System_Type_o *right;
  System_String_o *pSVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  VirtualInvokeData *pVVar22;
  undefined8 uVar23;
  Il2CppObject *item;
  System_String_array *value;
  MethodInfo *extraout_RDX;
  long *extraout_RDX_00;
  MethodInfo *pMVar24;
  long lVar25;
  System_RuntimeTypeHandle_o *pSVar26;
  System_Collections_Generic_List_object__o *__this_00;
  undefined1 auVar27 [12];
  undefined2 uStack_5a;
  undefined8 uStack_58;
  System_String_o *pSStack_50;
  System_Reflection_FieldInfo_o *pSStack_48;
  
  pMVar24 = (MethodInfo *)field;
  if (g_data_057ae8eb == '\0') {
    pSVar26 = &TypeRef_List_T;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8eb = '\x01';
    method = extraout_RDX;
    __this = (Utility_BaseCSVObject_o *)pSVar26;
  }
  if (field != (System_Reflection_FieldInfo_o *)0x0) {
    pMVar24 = (field->klass->vtable)._17_unknown.method;
    __this = (Utility_BaseCSVObject_o *)field;
    plVar14 = (long *)(*(field->klass->vtable)._17_unknown.methodPtr)(field,pMVar24,method);
    if (plVar14 != (long *)0x0) {
      cVar12 = (**(code **)(*plVar14 + 0x3b8))(plVar14,*(undefined8 *)(*plVar14 + 0x3c0));
      if (cVar12 == '\0') {
        return 0;
      }
      pMVar24 = (field->klass->vtable)._17_unknown.method;
      __this = (Utility_BaseCSVObject_o *)field;
      plVar14 = (long *)(*(field->klass->vtable)._17_unknown.methodPtr)();
      if (plVar14 != (long *)0x0) {
        left = (System_Type_o *)(**(code **)(*plVar14 + 0x448))(plVar14);
        handle = TypeRef_List_T;
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        bVar13 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
        return bVar13;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_48 = field;
  if (g_data_057ae8ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IList);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae8ec = '\x01';
  }
  uStack_5a = 0;
  __this_00 = (System_Collections_Generic_List_object__o *)&g_data_057b9b70;
  plVar14 = (long *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  cVar12 = (*(((System_Reflection_FieldInfo_o *)__this)->klass->vtable)._7_get_MemberType.methodPtr)
                     (__this,(((System_Reflection_FieldInfo_o *)__this)->klass->vtable)._7_get_MemberType.
                             method);
  if (cVar12 == '\0') {
label_0448d7e4:
    cVar12 = (*(((System_Reflection_FieldInfo_o *)__this)->klass->vtable)._13_GetCustomAttributes.methodPtr)
                       (__this,pMVar24,
                        (((System_Reflection_FieldInfo_o *)__this)->klass->vtable)._13_GetCustomAttributes.
                        method);
    if (cVar12 != '\0') {
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      plVar19 = extraout_RDX_00;
      if (((pMVar24 != (MethodInfo *)0x0) &&
          (plVar16 = (long *)(*(((System_Reflection_FieldInfo_c *)pMVar24->methodPointer)->vtable)._17_unknown
                               .methodPtr)(pMVar24,(((System_Reflection_FieldInfo_c *)pMVar24->methodPointer)
                                                   ->vtable)._17_unknown.method), plVar19 = extraout_RDX_00,
          plVar16 != (long *)0x0)) &&
         (lVar17 = (**(code **)(*plVar16 + 0x468))(plVar16,*(undefined8 *)(*plVar16 + 0x470)),
         plVar19 = extraout_RDX_00, lVar17 != 0)) {
        pSVar15 = (System_String_o *)field;
        plVar16 = extraout_RDX_00;
        if (*(int *)(lVar17 + 0x18) == 0) goto label_0448dd64;
        uStack_58 = *(undefined8 *)(lVar17 + 0x20);
        pSStack_50 = (System_String_o *)plVar14;
        plVar16 = (long *)(*(((System_Reflection_FieldInfo_c *)pMVar24->methodPointer)->vtable)._26_unknown.
                            methodPtr)(pMVar24,extraout_RDX_00,
                                       (((System_Reflection_FieldInfo_c *)pMVar24->methodPointer)->vtable).
                                       _26_unknown.method);
        pSVar15 = TypeInfo_IList;
        plVar19 = extraout_RDX_00;
        if (plVar16 != (long *)0x0) {
          lVar18 = il2cpp_runtime_helper_023051f0(plVar16,TypeInfo_IList);
          plVar14 = (long *)TypeInfo_IList;
          lVar17 = TypeInfo_IEnumerable;
          pSVar11 = (System_String_o *)&TypeInfo_IList;
          if (lVar18 == 0) goto label_0448dd69;
          plVar19 = (long *)il2cpp_runtime_helper_023051f0(plVar16);
          field = (System_Reflection_FieldInfo_o *)pSVar15;
          if (plVar19 == (long *)0x0) goto label_0448dd74;
          lVar18 = *plVar19;
          if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
            lVar25 = 0;
            do {
              if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar25) == lVar17) {
                puVar20 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar25) * 0x10 + lVar18 + 0x138);
                goto label_0448d99c;
              }
              lVar25 = lVar25 + 0x10;
            } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar25);
          }
          puVar20 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar19,lVar17,0);
label_0448d99c:
          field = (System_Reflection_FieldInfo_o *)(*(code *)*puVar20)(plVar19,puVar20[1]);
          if ((System_String_o *)field == (System_String_o *)0x0) goto label_0448dd7f;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            pSVar8 = ((System_String_o *)field)->klass;
            uVar4._0_1_ = (pSVar8->_2).rank;
            uVar4._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar4 != 0) {
              pIVar9 = (pSVar8->_1).interfaceOffsets;
              lVar17 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar17) == TypeInfo_IEnumerator) {
                  pVVar22 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar17);
                  goto label_0448db91;
                }
                lVar17 = lVar17 + 0x10;
              } while ((ulong)uVar4 << 4 != lVar17);
            }
            pVVar22 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(field,TypeInfo_IEnumerator,0);
label_0448db91:
            cVar12 = (*pVVar22->methodPtr)(field,pVVar22->method);
            if (cVar12 == '\0') {
label_0448dbe8:
              plVar14 = (long *)0x6;
              plVar19 = (long *)0x0;
              goto label_0448dbf1;
            }
            pSVar8 = ((System_String_o *)field)->klass;
            uVar5._0_1_ = (pSVar8->_2).rank;
            uVar5._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar5 != 0) {
              pIVar9 = (pSVar8->_1).interfaceOffsets;
              lVar17 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar17) == TypeInfo_IEnumerator) {
                  pVVar22 = &(pSVar8->vtable)._0_Equals + (*(int *)((long)&pIVar9->offset + lVar17) + 1);
                  goto label_0448dd31;
                }
                lVar17 = lVar17 + 0x10;
              } while ((ulong)uVar5 << 4 != lVar17);
            }
            pVVar22 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(field,TypeInfo_IEnumerator,1);
label_0448dd31:
            uVar23 = (*pVVar22->methodPtr)(field,pVVar22->method);
            (*(((System_Reflection_FieldInfo_o *)__this)->klass->vtable)._16_unknown.methodPtr)
                      (__this,uStack_58,uVar23,
                       (((System_Reflection_FieldInfo_o *)__this)->klass->vtable)._16_unknown.method);
            il2cpp_runtime_helper_022b2c90();
          }
          else {
            plVar16 = &TypeInfo_IEnumerator;
            plVar14 = &MethodInfo_Void_Add;
label_0448d9ea:
            pSVar8 = ((System_String_o *)field)->klass;
            uVar2._0_1_ = (pSVar8->_2).rank;
            uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar9 = (pSVar8->_1).interfaceOffsets;
              lVar17 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar17) == TypeInfo_IEnumerator) {
                  pVVar22 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar17);
                  goto label_0448da43;
                }
                lVar17 = lVar17 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar17);
            }
            pVVar22 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(field,TypeInfo_IEnumerator,0);
label_0448da43:
            cVar12 = (*pVVar22->methodPtr)(field,pVVar22->method);
            if (cVar12 == '\0') goto label_0448dbe8;
            pSVar8 = ((System_String_o *)field)->klass;
            uVar3._0_1_ = (pSVar8->_2).rank;
            uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar3 != 0) {
              pIVar9 = (pSVar8->_1).interfaceOffsets;
              lVar17 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar17) == TypeInfo_IEnumerator) {
                  pVVar22 = &(pSVar8->vtable)._0_Equals + (*(int *)((long)&pIVar9->offset + lVar17) + 1);
                  goto label_0448dac8;
                }
                lVar17 = lVar17 + 0x10;
              } while ((ulong)uVar3 << 4 != lVar17);
            }
            pVVar22 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(field,TypeInfo_IEnumerator,1);
label_0448dac8:
            uVar23 = (*pVVar22->methodPtr)(field,pVVar22->method);
            item = (Il2CppObject *)
                   (*(((System_Reflection_FieldInfo_o *)__this)->klass->vtable)._16_unknown.methodPtr)
                             (__this,uStack_58,uVar23,
                              (((System_Reflection_FieldInfo_o *)__this)->klass->vtable)._16_unknown.method);
            lVar17 = MethodInfo_Void_Add;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar10 = (__this_00->fields)._items;
            if (pSVar10 != (System_Object_array *)0x0) {
              uVar7 = (__this_00->fields)._size;
              if (uVar7 < (uint)pSVar10->max_length) {
                (__this_00->fields)._size = uVar7 + 1;
                pSVar10->m_Items[(int)uVar7] = item;
                il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar7,item);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,item,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              goto label_0448d9ea;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          plVar19 = plVar16;
        }
      }
      goto label_0448dd5f;
    }
    plVar19 = extraout_RDX_00;
    if (pMVar24 == (MethodInfo *)0x0) goto label_0448dd5f;
    uVar23 = (*(((System_Reflection_FieldInfo_c *)pMVar24->methodPointer)->vtable)._17_unknown.methodPtr)
                       (pMVar24,(((System_Reflection_FieldInfo_c *)pMVar24->methodPointer)->vtable).
                                _17_unknown.method);
    uVar21 = (*(((System_Reflection_FieldInfo_c *)pMVar24->methodPointer)->vtable)._26_unknown.methodPtr)
                       (pMVar24,extraout_RDX_00,
                        (((System_Reflection_FieldInfo_c *)pMVar24->methodPointer)->vtable)._26_unknown.method
                       );
    pSVar15 = (System_String_o *)
              (*(((System_Reflection_FieldInfo_o *)__this)->klass->vtable)._16_unknown.methodPtr)
                        (__this,uVar23,uVar21,
                         (((System_Reflection_FieldInfo_o *)__this)->klass->vtable)._16_unknown.method);
  }
  else {
    plVar19 = extraout_RDX_00;
    if (pMVar24 != (MethodInfo *)0x0) {
      field = (System_Reflection_FieldInfo_o *)
              (*(((System_Reflection_FieldInfo_c *)pMVar24->methodPointer)->vtable)._8_unknown.methodPtr)
                        (pMVar24,(((System_Reflection_FieldInfo_c *)pMVar24->methodPointer)->vtable).
                                 _8_unknown.method);
      uStack_5a = (*(((System_Reflection_FieldInfo_o *)__this)->klass->vtable)._5_unknown.methodPtr)(__this);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = System_Char__ToString((uint16_t)&uStack_5a,(MethodInfo *)0x0);
      plVar14 = (long *)System_String__Concat_3ae5ba0((System_String_o *)field,pSVar15,(MethodInfo *)0x0);
      goto label_0448d7e4;
    }
label_0448dd5f:
    do {
      il2cpp_runtime_helper_022b2c90();
      pSVar15 = (System_String_o *)field;
      plVar16 = plVar19;
label_0448dd64:
      il2cpp_runtime_helper_022b2ca0();
      pSVar11 = (System_String_o *)plVar14;
label_0448dd69:
      plVar14 = (long *)pSVar11;
      il2cpp_runtime_helper_022b2fd0(plVar16,pSVar15);
      field = (System_Reflection_FieldInfo_o *)pSVar15;
label_0448dd74:
      il2cpp_runtime_helper_022b2fd0(plVar16,plVar14);
label_0448dd7f:
      il2cpp_runtime_helper_022b2c90();
      plVar19 = plVar16;
      do {
        auVar27 = il2cpp_runtime_helper_022fefe0(plVar19);
        uStack_58 = auVar27._0_8_;
        plVar14 = (long *)0x0;
        if (auVar27._8_4_ != 1) {
          plVar14 = (long *)il2cpp_runtime_helper_023051f0(field,TypeInfo_IDisposable);
          if (plVar14 == (long *)0x0) goto label_0448de96;
          lVar17 = *plVar14;
          if ((ulong)*(ushort *)(lVar17 + 0x12e) == 0) goto label_0448de6f;
          lVar18 = 0;
          goto label_0448de60;
        }
        puVar20 = (undefined8 *)__cxa_begin_catch(uStack_58);
        plVar19 = (long *)*puVar20;
        __cxa_end_catch();
label_0448dbf1:
        pSVar15 = (System_String_o *)il2cpp_runtime_helper_023051f0(field,TypeInfo_IDisposable);
        if (pSVar15 != (System_String_o *)0x0) {
          pSVar8 = pSVar15->klass;
          uVar6._0_1_ = (pSVar8->_2).rank;
          uVar6._1_1_ = (pSVar8->_2).minimumAlignment;
          if ((ulong)uVar6 != 0) {
            pIVar9 = (pSVar8->_1).interfaceOffsets;
            lVar17 = 0;
            do {
              if (*(long *)((long)&pIVar9->interfaceType + lVar17) == TypeInfo_IDisposable) {
                pVVar22 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar17);
                goto label_0448dc5d;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)uVar6 << 4 != lVar17);
          }
          pVVar22 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IDisposable,0);
label_0448dc5d:
          (*pVVar22->methodPtr)(pSVar15,pVVar22->method);
          field = (System_Reflection_FieldInfo_o *)pSVar15;
        }
      } while (plVar19 != (long *)0x0);
      if (((int)plVar14 != 6) && ((int)plVar14 != 0)) goto label_0448dd05;
    } while (__this_00 == (System_Collections_Generic_List_object__o *)0x0);
    if ((__this_00->fields)._size < 1) goto label_0448dd05;
    uStack_5a = (*(((System_Reflection_FieldInfo_o *)__this)->klass->vtable)._4_unknown.methodPtr)(__this);
    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = System_Char__ToString((uint16_t)&uStack_5a,(MethodInfo *)0x0);
    value = (System_String_array *)System_Collections_Generic_List_object___ToArray(__this_00,MethodInfo_String_ToArray);
    pSVar15 = System_String__Join(pSVar15,value,(MethodInfo *)0x0);
    plVar14 = (long *)pSStack_50;
  }
  pSStack_50 = System_String__Concat_3ae5ba0((System_String_o *)plVar14,pSVar15,(MethodInfo *)0x0);
label_0448dd05:
  return (bool_conflict)pSStack_50;
  while (lVar18 = lVar18 + 0x10, (ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar18) {
label_0448de60:
    if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar18) == TypeInfo_IDisposable) {
      puVar20 = (undefined8 *)(lVar17 + (long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar18) * 0x10 + 0x138);
      goto label_0448de8d;
    }
  }
label_0448de6f:
  puVar20 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IDisposable,0);
label_0448de8d:
  (*(code *)*puVar20)(plVar14,puVar20[1]);
label_0448de96:
  _Unwind_Resume(uStack_58);
}


// Utility.BaseCSVObject$$SerializeField
// il2cpp: System_String_o* Utility_BaseCSVObject__SerializeField (Utility_BaseCSVObject_o* __this, System_Reflection_FieldInfo_o* info, Il2CppObject* instance, const MethodInfo* method);
// 0x448d6b0

System_String_o *
Utility_BaseCSVObject__SerializeField
          (Utility_BaseCSVObject_o *__this,System_Reflection_FieldInfo_o *info,Il2CppObject *instance,
          MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  System_String_c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_Object_array *pSVar10;
  System_String_o *pSVar11;
  char cVar12;
  System_String_o *pSVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  VirtualInvokeData *pVVar21;
  undefined8 uVar22;
  Il2CppObject *item;
  System_String_array *value;
  System_String_o *unaff_RBX;
  long lVar23;
  System_Collections_Generic_List_object__o *__this_00;
  undefined1 auVar24 [12];
  undefined2 uStack_42;
  undefined8 uStack_40;
  System_String_o *pSStack_38;
  
  if (g_data_057ae8ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IList);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae8ec = '\x01';
  }
  uStack_42 = 0;
  __this_00 = (System_Collections_Generic_List_object__o *)&g_data_057b9b70;
  plVar14 = (long *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  cVar12 = (*(__this->klass->vtable)._7_get_NamedParams.methodPtr)
                     (__this,(__this->klass->vtable)._7_get_NamedParams.method);
  if (cVar12 == '\0') {
label_0448d7e4:
    cVar12 = (*(__this->klass->vtable)._13_IsList.methodPtr)
                       (__this,info,(__this->klass->vtable)._13_IsList.method);
    if (cVar12 == '\0') {
      if (info != (System_Reflection_FieldInfo_o *)0x0) {
        uVar22 = (*(info->klass->vtable)._17_unknown.methodPtr)(info,(info->klass->vtable)._17_unknown.method)
        ;
        uVar20 = (*(info->klass->vtable)._26_unknown.methodPtr)
                           (info,instance,(info->klass->vtable)._26_unknown.method);
        pSVar13 = (System_String_o *)
                  (*(__this->klass->vtable)._16_SerializeValue.methodPtr)
                            (__this,uVar22,uVar20,(__this->klass->vtable)._16_SerializeValue.method);
        goto label_0448dcf6;
      }
    }
    else {
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (((info != (System_Reflection_FieldInfo_o *)0x0) &&
          (plVar15 = (long *)(*(info->klass->vtable)._17_unknown.methodPtr)
                                       (info,(info->klass->vtable)._17_unknown.method), plVar15 != (long *)0x0
          )) && (lVar16 = (**(code **)(*plVar15 + 0x468))(plVar15,*(undefined8 *)(*plVar15 + 0x470)),
                lVar16 != 0)) {
        pSVar13 = unaff_RBX;
        plVar15 = (long *)instance;
        if (*(int *)(lVar16 + 0x18) == 0) goto label_0448dd64;
        uStack_40 = *(undefined8 *)(lVar16 + 0x20);
        pSStack_38 = (System_String_o *)plVar14;
        plVar15 = (long *)(*(info->klass->vtable)._26_unknown.methodPtr)
                                    (info,instance,(info->klass->vtable)._26_unknown.method);
        pSVar13 = TypeInfo_IList;
        if ((Il2CppObject *)plVar15 != (Il2CppObject *)0x0) {
          lVar17 = il2cpp_runtime_helper_023051f0(plVar15,TypeInfo_IList);
          plVar14 = (long *)TypeInfo_IList;
          lVar16 = TypeInfo_IEnumerable;
          pSVar11 = (System_String_o *)&TypeInfo_IList;
          if (lVar17 == 0) goto label_0448dd69;
          plVar18 = (long *)il2cpp_runtime_helper_023051f0(plVar15);
          unaff_RBX = pSVar13;
          if (plVar18 == (long *)0x0) goto label_0448dd74;
          lVar17 = *plVar18;
          if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
            lVar23 = 0;
            do {
              if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar23) == lVar16) {
                puVar19 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar23) * 0x10 + lVar17 + 0x138);
                goto label_0448d99c;
              }
              lVar23 = lVar23 + 0x10;
            } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar23);
          }
          puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar18,lVar16,0);
label_0448d99c:
          unaff_RBX = (System_String_o *)(*(code *)*puVar19)(plVar18,puVar19[1]);
          if (unaff_RBX == (System_String_o *)0x0) goto label_0448dd7f;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            pSVar8 = unaff_RBX->klass;
            uVar4._0_1_ = (pSVar8->_2).rank;
            uVar4._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar4 != 0) {
              pIVar9 = (pSVar8->_1).interfaceOffsets;
              lVar16 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar16) == TypeInfo_IEnumerator) {
                  pVVar21 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar16);
                  goto label_0448db91;
                }
                lVar16 = lVar16 + 0x10;
              } while ((ulong)uVar4 << 4 != lVar16);
            }
            pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IEnumerator,0);
label_0448db91:
            cVar12 = (*pVVar21->methodPtr)(unaff_RBX,pVVar21->method);
            if (cVar12 == '\0') {
label_0448dbe8:
              plVar14 = (long *)0x6;
              instance = (Il2CppObject *)0x0;
              goto label_0448dbf1;
            }
            pSVar8 = unaff_RBX->klass;
            uVar5._0_1_ = (pSVar8->_2).rank;
            uVar5._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar5 != 0) {
              pIVar9 = (pSVar8->_1).interfaceOffsets;
              lVar16 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar16) == TypeInfo_IEnumerator) {
                  pVVar21 = &(pSVar8->vtable)._0_Equals + (*(int *)((long)&pIVar9->offset + lVar16) + 1);
                  goto label_0448dd31;
                }
                lVar16 = lVar16 + 0x10;
              } while ((ulong)uVar5 << 4 != lVar16);
            }
            pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IEnumerator,1);
label_0448dd31:
            uVar22 = (*pVVar21->methodPtr)(unaff_RBX,pVVar21->method);
            (*(__this->klass->vtable)._16_SerializeValue.methodPtr)
                      (__this,uStack_40,uVar22,(__this->klass->vtable)._16_SerializeValue.method);
            il2cpp_runtime_helper_022b2c90();
          }
          else {
            plVar15 = &TypeInfo_IEnumerator;
            plVar14 = &MethodInfo_Void_Add;
label_0448d9ea:
            pSVar8 = unaff_RBX->klass;
            uVar2._0_1_ = (pSVar8->_2).rank;
            uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar9 = (pSVar8->_1).interfaceOffsets;
              lVar16 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar16) == TypeInfo_IEnumerator) {
                  pVVar21 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar16);
                  goto label_0448da43;
                }
                lVar16 = lVar16 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar16);
            }
            pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IEnumerator,0);
label_0448da43:
            cVar12 = (*pVVar21->methodPtr)(unaff_RBX,pVVar21->method);
            if (cVar12 == '\0') goto label_0448dbe8;
            pSVar8 = unaff_RBX->klass;
            uVar3._0_1_ = (pSVar8->_2).rank;
            uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar3 != 0) {
              pIVar9 = (pSVar8->_1).interfaceOffsets;
              lVar16 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar16) == TypeInfo_IEnumerator) {
                  pVVar21 = &(pSVar8->vtable)._0_Equals + (*(int *)((long)&pIVar9->offset + lVar16) + 1);
                  goto label_0448dac8;
                }
                lVar16 = lVar16 + 0x10;
              } while ((ulong)uVar3 << 4 != lVar16);
            }
            pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IEnumerator,1);
label_0448dac8:
            uVar22 = (*pVVar21->methodPtr)(unaff_RBX,pVVar21->method);
            item = (Il2CppObject *)
                   (*(__this->klass->vtable)._16_SerializeValue.methodPtr)
                             (__this,uStack_40,uVar22,(__this->klass->vtable)._16_SerializeValue.method);
            lVar16 = MethodInfo_Void_Add;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar10 = (__this_00->fields)._items;
            if (pSVar10 != (System_Object_array *)0x0) {
              uVar7 = (__this_00->fields)._size;
              if (uVar7 < (uint)pSVar10->max_length) {
                (__this_00->fields)._size = uVar7 + 1;
                pSVar10->m_Items[(int)uVar7] = item;
                il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar7,item);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,item,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              goto label_0448d9ea;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          instance = (Il2CppObject *)plVar15;
        }
      }
    }
  }
  else if (info != (System_Reflection_FieldInfo_o *)0x0) {
    unaff_RBX = (System_String_o *)
                (*(info->klass->vtable)._8_unknown.methodPtr)(info,(info->klass->vtable)._8_unknown.method);
    uStack_42 = (*(__this->klass->vtable)._5_get_ParamDelimiter.methodPtr)(__this);
    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar13 = System_Char__ToString((uint16_t)&uStack_42,(MethodInfo *)0x0);
    plVar14 = (long *)System_String__Concat_3ae5ba0(unaff_RBX,pSVar13,(MethodInfo *)0x0);
    goto label_0448d7e4;
  }
  do {
    il2cpp_runtime_helper_022b2c90();
    pSVar13 = unaff_RBX;
    plVar15 = (long *)instance;
label_0448dd64:
    il2cpp_runtime_helper_022b2ca0();
    pSVar11 = (System_String_o *)plVar14;
label_0448dd69:
    plVar14 = (long *)pSVar11;
    il2cpp_runtime_helper_022b2fd0(plVar15,pSVar13);
    unaff_RBX = pSVar13;
label_0448dd74:
    il2cpp_runtime_helper_022b2fd0(plVar15,plVar14);
label_0448dd7f:
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar24 = il2cpp_runtime_helper_022fefe0(plVar15);
      uStack_40 = auVar24._0_8_;
      plVar14 = (long *)0x0;
      if (auVar24._8_4_ != 1) {
        plVar14 = (long *)il2cpp_runtime_helper_023051f0(unaff_RBX,TypeInfo_IDisposable);
        if (plVar14 == (long *)0x0) goto label_0448de96;
        lVar16 = *plVar14;
        if ((ulong)*(ushort *)(lVar16 + 0x12e) == 0) goto label_0448de6f;
        lVar17 = 0;
        goto label_0448de60;
      }
      puVar19 = (undefined8 *)__cxa_begin_catch(uStack_40);
      instance = (Il2CppObject *)*puVar19;
      __cxa_end_catch();
label_0448dbf1:
      pSVar13 = (System_String_o *)il2cpp_runtime_helper_023051f0(unaff_RBX,TypeInfo_IDisposable);
      if (pSVar13 != (System_String_o *)0x0) {
        pSVar8 = pSVar13->klass;
        uVar6._0_1_ = (pSVar8->_2).rank;
        uVar6._1_1_ = (pSVar8->_2).minimumAlignment;
        if ((ulong)uVar6 != 0) {
          pIVar9 = (pSVar8->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar9->interfaceType + lVar16) == TypeInfo_IDisposable) {
              pVVar21 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar16);
              goto label_0448dc5d;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar6 << 4 != lVar16);
        }
        pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar13,TypeInfo_IDisposable,0);
label_0448dc5d:
        (*pVVar21->methodPtr)(pSVar13,pVVar21->method);
        unaff_RBX = pSVar13;
      }
      plVar15 = (long *)instance;
    } while (instance != (Il2CppObject *)0x0);
    if (((int)plVar14 != 6) && ((int)plVar14 != 0)) {
      return pSStack_38;
    }
  } while (__this_00 == (System_Collections_Generic_List_object__o *)0x0);
  if ((__this_00->fields)._size < 1) {
    return pSStack_38;
  }
  uStack_42 = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)(__this);
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = System_Char__ToString((uint16_t)&uStack_42,(MethodInfo *)0x0);
  value = (System_String_array *)System_Collections_Generic_List_object___ToArray(__this_00,MethodInfo_String_ToArray);
  pSVar13 = System_String__Join(pSVar13,value,(MethodInfo *)0x0);
  plVar14 = (long *)pSStack_38;
label_0448dcf6:
  pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)plVar14,pSVar13,(MethodInfo *)0x0);
  return pSVar13;
  while (lVar17 = lVar17 + 0x10, (ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17) {
label_0448de60:
    if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
      puVar19 = (undefined8 *)(lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
      goto label_0448de8d;
    }
  }
label_0448de6f:
  puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IDisposable,0);
label_0448de8d:
  (*(code *)*puVar19)(plVar14,puVar19[1]);
label_0448de96:
  _Unwind_Resume(uStack_40);
}


// Utility.BaseCSVObject$$DeserializeField
// il2cpp: void Utility_BaseCSVObject__DeserializeField (Utility_BaseCSVObject_o* __this, System_Reflection_FieldInfo_o* info, Il2CppObject* instance, System_String_o* value, const MethodInfo* method);
// 0x448dec0

void Utility_BaseCSVObject__DeserializeField
               (Utility_BaseCSVObject_o *__this,System_Reflection_FieldInfo_o *info,Il2CppObject *instance,
               System_String_o *value,MethodInfo *method)

{
  code cVar1;
  byte bVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppClass *pIVar4;
  System_RuntimeTypeHandle_o SVar5;
  System_RuntimeTypeHandle_o handle;
  char cVar6;
  uint16_t uVar7;
  bool_conflict bVar8;
  int32_t iVar9;
  int32_t iVar10;
  int32_t iVar11;
  int32_t iVar12;
  undefined8 uVar13;
  Il2CppObject *pIVar14;
  System_Type_o *pSVar15;
  MethodInfo *right;
  MethodInfo *pMVar16;
  undefined8 *puVar17;
  System_String_o *pSVar18;
  System_RuntimeTypeHandle_Fields SVar19;
  long *plVar20;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *value_00;
  System_String_o *__this_01;
  System_RuntimeTypeHandle_o SVar21;
  System_RuntimeTypeHandle_o method_00;
  System_String_o **ppSVar22;
  long lVar23;
  MethodInfo *pMVar24;
  float __this_02;
  float fVar25;
  float __this_03;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_a8;
  float fStack_a4;
  System_String_array *pSStack_a0;
  MethodInfo *pMStack_98;
  undefined8 *puStack_90;
  System_String_o *pSStack_88;
  MethodInfo *pMStack_80;
  undefined2 uStack_6e;
  int32_t iStack_6c;
  Il2CppMethodPointer pIStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  
  if (info != (System_Reflection_FieldInfo_o *)0x0) {
    uVar13 = (*(info->klass->vtable)._17_unknown.methodPtr)(info,(info->klass->vtable)._17_unknown.method);
    pIVar14 = (Il2CppObject *)(*(__this->klass->vtable)._17_DeserializeValue.methodPtr)(__this,uVar13,value);
    System_Reflection_FieldInfo__SetValue(info,instance,pIVar14,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeRef_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeRef_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ae8ed = '\x01';
  }
  iStack_6c = 0;
  uStack_60 = 0;
  pIStack_68 = (Il2CppMethodPointer)0x0;
  uStack_6e = 0;
  auStack_58 = (undefined1  [8])0x0;
  SVar21.fields.value = (System_RuntimeTypeHandle_Fields)((long)g_data_057b9c00 + 0x20);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = System_Type__GetTypeFromHandle(SVar21,(MethodInfo *)0x0);
  bVar8 = System_Type__op_Equality((System_Type_o *)info,pSVar15,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') goto label_0448e05a;
  if ((value_00 == (MethodInfo *)0x0) || (value_00->methodPointer == g_data_057b9c00)) {
    return;
  }
label_0448e052:
  il2cpp_runtime_helper_022b2fd0(value_00);
label_0448e05a:
  SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9bb8 + 0x20);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  right = (MethodInfo *)System_Type__GetTypeFromHandle(SVar21,(MethodInfo *)0x0);
  method_00.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)info;
  bVar8 = System_Type__op_Equality((System_Type_o *)info,(System_Type_o *)right,(MethodInfo *)0x0);
  pMVar24 = value_00;
  if ((char)bVar8 == '\0') {
    SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9be8 + 0x20);
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    right = (MethodInfo *)System_Type__GetTypeFromHandle(SVar21,(MethodInfo *)0x0);
    method_00.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)info;
    bVar8 = System_Type__op_Equality((System_Type_o *)info,(System_Type_o *)right,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') goto label_0448e0ca;
    SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9b98 + 0x20);
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = System_Type__GetTypeFromHandle(SVar21,(MethodInfo *)0x0);
    bVar8 = System_Type__op_Equality((System_Type_o *)info,pSVar15,(MethodInfo *)0x0);
    SVar21 = TypeRef_BaseCSVObject;
    if ((char)bVar8 != '\0') {
      if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iStack_6c = System_Convert__ToInt32((Il2CppObject *)value_00,(MethodInfo *)0x0);
      System_Int32__ToString((int32_t)&iStack_6c,(MethodInfo *)0x0);
      return;
    }
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    right = (MethodInfo *)0x0;
    method_00 = SVar21;
    pMVar16 = (MethodInfo *)System_Type__GetTypeFromHandle(SVar21,(MethodInfo *)0x0);
    if (pMVar16 == (MethodInfo *)0x0) goto label_0448e61f;
    right = (MethodInfo *)info;
    cVar6 = (**(code **)(pMVar16->methodPointer + 0x298))
                      (pMVar16,info,*(undefined8 *)(pMVar16->methodPointer + 0x2a0));
    SVar5 = TypeRef_Vector3;
    if (cVar6 != '\0') {
      method_00.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pMVar16;
      if (value_00 == (MethodInfo *)0x0) goto label_0448e61f;
      cVar1 = (code)(TypeInfo_BaseCSVObject->_2).naturalAligment;
      if (((byte)cVar1 <= (byte)value_00->methodPointer[0x130]) &&
         (*(Il2CppClass **)(*(long *)(value_00->methodPointer + 200) + -8 + (ulong)(byte)cVar1 * 8) ==
          TypeInfo_BaseCSVObject)) {
        pIVar3 = value_00->methodPointer;
        cVar1 = (code)(TypeInfo_BaseCSVObject->_2).naturalAligment;
        if (((byte)cVar1 <= (byte)pIVar3[0x130]) &&
           (*(Il2CppClass **)(*(long *)(pIVar3 + 200) + -8 + (ulong)(byte)cVar1 * 8) == TypeInfo_BaseCSVObject)) {
          (**(code **)(pIVar3 + 0x1b8))(value_00,*(undefined8 *)(pIVar3 + 0x1c0));
          return;
        }
      }
      goto label_0448e052;
    }
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    right = (MethodInfo *)System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
    method_00.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)info;
    bVar8 = System_Type__op_Equality((System_Type_o *)info,(System_Type_o *)right,(MethodInfo *)0x0);
    handle = TypeRef_Vector2;
    if ((char)bVar8 == '\0') {
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      right = (MethodInfo *)System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      method_00.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)info;
      bVar8 = System_Type__op_Equality((System_Type_o *)info,(System_Type_o *)right,(MethodInfo *)0x0);
      SVar21 = TypeRef_Color255;
      if ((char)bVar8 != '\0') {
        SVar21 = handle;
        if (value_00 == (MethodInfo *)0x0) goto label_0448e61f;
        if (*(long *)(value_00->methodPointer + 0x40) == *(long *)(TypeInfo_Vector2 + 0x40)) {
          puVar17 = (undefined8 *)il2cpp_runtime_helper_02305440(value_00);
          auStack_58 = (undefined1  [8])*puVar17;
          uStack_6e = (*(((System_String_o *)__this)->klass->vtable).
                        _6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr)
                                (__this);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this = (Utility_BaseCSVObject_o *)System_Char__ToString((uint16_t)&uStack_6e,(MethodInfo *)0x0);
          SVar19.value = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
          method_00.fields.value = (System_RuntimeTypeHandle_Fields)auStack_58;
          right = (MethodInfo *)0x0;
          pSVar18 = System_Single__ToString(__this_03,(MethodInfo *)method_00.fields.value);
          SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)SVar19.value
          ;
          if ((System_String_array *)SVar19.value == (System_String_array *)0x0) goto label_0448e61f;
          if ((int)((System_String_array *)SVar19.value)->max_length != 0) {
            ((System_String_array *)SVar19.value)->m_Items[0] = pSVar18;
            fVar25 = (float)il2cpp_runtime_helper_022b4080(((System_String_array *)SVar19.value)->m_Items);
            method_00.fields.value = (System_RuntimeTypeHandle_Fields)(auStack_58 + 4);
            right = (MethodInfo *)0x0;
            pSVar18 = System_Single__ToString(fVar25,(MethodInfo *)method_00.fields.value);
            if (1 < (uint)((System_String_array *)SVar19.value)->max_length) {
              ppSVar22 = ((System_String_array *)SVar19.value)->m_Items + 1;
              ((System_String_array *)SVar19.value)->m_Items[1] = pSVar18;
label_0448e5ef:
              il2cpp_runtime_helper_022b4080(ppSVar22,pSVar18);
              System_String__Join((System_String_o *)__this,(System_String_array *)SVar19.value,
                                  (MethodInfo *)0x0);
              return;
            }
          }
          goto label_0448e624;
        }
        goto label_0448e052;
      }
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = System_Type__GetTypeFromHandle(SVar21,(MethodInfo *)0x0);
      bVar8 = System_Type__op_Equality((System_Type_o *)info,pSVar15,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      if (value_00 != (MethodInfo *)0x0) {
        if (((byte)value_00->methodPointer[0x130] < (byte)*(code *)(TypeInfo_Color255 + 0x130)) ||
           (*(long *)(*(long *)(value_00->methodPointer + 200) + -8 +
                     (ulong)(byte)*(code *)(TypeInfo_Color255 + 0x130) * 8) != TypeInfo_Color255)) goto label_0448e052;
      }
      uStack_6e = (*(((System_String_o *)__this)->klass->vtable).
                    _6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr)(__this);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = (Utility_BaseCSVObject_o *)System_Char__ToString((uint16_t)&uStack_6e,(MethodInfo *)0x0);
      right = (MethodInfo *)&g_data_00000004;
      method_00.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)TypeInfo_string;
      SVar19.value = il2cpp_runtime_helper_022b2a40();
      if (value_00 != (MethodInfo *)0x0) {
        method_00.fields.value = (System_RuntimeTypeHandle_Fields)&value_00->invoker_method;
        right = (MethodInfo *)0x0;
        pSVar18 = System_Int32__ToString(SUB84(method_00.fields.value,0),(MethodInfo *)0x0);
        SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)SVar19.value;
        if ((System_String_array *)SVar19.value != (System_String_array *)0x0) {
          if ((int)((System_String_array *)SVar19.value)->max_length != 0) {
            ((System_String_array *)SVar19.value)->m_Items[0] = pSVar18;
            il2cpp_runtime_helper_022b4080(((System_String_array *)SVar19.value)->m_Items);
            method_00.fields.value = (System_RuntimeTypeHandle_Fields)((long)&value_00->invoker_method + 4);
            right = (MethodInfo *)0x0;
            pSVar18 = System_Int32__ToString(SUB84(method_00.fields.value,0),(MethodInfo *)0x0);
            if (1 < (uint)((System_String_array *)SVar19.value)->max_length) {
              ((System_String_array *)SVar19.value)->m_Items[1] = pSVar18;
              il2cpp_runtime_helper_022b4080(((System_String_array *)SVar19.value)->m_Items + 1);
              method_00.fields.value = (System_RuntimeTypeHandle_Fields)&value_00->name;
              right = (MethodInfo *)0x0;
              pSVar18 = System_Int32__ToString(SUB84(method_00.fields.value,0),(MethodInfo *)0x0);
              if (2 < (uint)((System_String_array *)SVar19.value)->max_length) {
                ((System_String_array *)SVar19.value)->m_Items[2] = pSVar18;
                il2cpp_runtime_helper_022b4080(((System_String_array *)SVar19.value)->m_Items + 2);
                pMVar24 = (MethodInfo *)((long)&value_00->name + 4);
                right = (MethodInfo *)0x0;
                method_00.fields.value =
                     (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pMVar24;
                pSVar18 = System_Int32__ToString((int32_t)pMVar24,(MethodInfo *)0x0);
                if (3 < (uint)((System_String_array *)SVar19.value)->max_length) {
                  ppSVar22 = ((System_String_array *)SVar19.value)->m_Items + 3;
                  ((System_String_array *)SVar19.value)->m_Items[3] = pSVar18;
                  goto label_0448e5ef;
                }
              }
            }
          }
          goto label_0448e624;
        }
      }
      goto label_0448e61f;
    }
    SVar21 = SVar5;
    if (value_00 == (MethodInfo *)0x0) goto label_0448e61f;
    if (*(long *)(value_00->methodPointer + 0x40) != *(long *)(TypeInfo_Vector3 + 0x40)) goto label_0448e052;
    puVar17 = (undefined8 *)il2cpp_runtime_helper_02305440(value_00);
    pIStack_68 = (Il2CppMethodPointer)*puVar17;
    uStack_60 = *(undefined4 *)(puVar17 + 1);
    uStack_6e = (*(((System_String_o *)__this)->klass->vtable).
                  _6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr)(__this);
    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = (Utility_BaseCSVObject_o *)System_Char__ToString((uint16_t)&uStack_6e,(MethodInfo *)0x0);
    SVar19.value = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    method_00.fields.value = (System_RuntimeTypeHandle_Fields)&pIStack_68;
    right = (MethodInfo *)0x0;
    pSVar18 = System_Single__ToString(__this_02,(MethodInfo *)method_00.fields.value);
    SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)SVar19.value;
    if ((System_String_array *)SVar19.value != (System_String_array *)0x0) {
      if ((int)((System_String_array *)SVar19.value)->max_length != 0) {
        ((System_String_array *)SVar19.value)->m_Items[0] = pSVar18;
        fVar25 = (float)il2cpp_runtime_helper_022b4080(((System_String_array *)SVar19.value)->m_Items);
        method_00.fields.value = (System_RuntimeTypeHandle_Fields)((long)&pIStack_68 + 4);
        right = (MethodInfo *)0x0;
        pSVar18 = System_Single__ToString(fVar25,(MethodInfo *)method_00.fields.value);
        if (1 < (uint)((System_String_array *)SVar19.value)->max_length) {
          ((System_String_array *)SVar19.value)->m_Items[1] = pSVar18;
          fVar25 = (float)il2cpp_runtime_helper_022b4080(((System_String_array *)SVar19.value)->m_Items + 1);
          method_00.fields.value = (System_RuntimeTypeHandle_Fields)&uStack_60;
          right = (MethodInfo *)0x0;
          pSVar18 = System_Single__ToString(fVar25,(MethodInfo *)method_00.fields.value);
          if (2 < (uint)((System_String_array *)SVar19.value)->max_length) {
            ppSVar22 = ((System_String_array *)SVar19.value)->m_Items + 2;
            ((System_String_array *)SVar19.value)->m_Items[2] = pSVar18;
            goto label_0448e5ef;
          }
        }
      }
      goto label_0448e624;
    }
  }
  else {
label_0448e0ca:
    if (value_00 != (MethodInfo *)0x0) {
      (**(code **)(value_00->methodPointer + 0x168))
                (value_00,*(undefined8 *)(value_00->methodPointer + 0x170));
      return;
    }
  }
label_0448e61f:
  il2cpp_runtime_helper_022b2c90();
  SVar19 = SVar21.fields.value;
label_0448e624:
  il2cpp_runtime_helper_022b2ca0();
  puStack_90 = &g_data_057b9b70;
  pSStack_a0 = (System_String_array *)SVar19.value;
  pMStack_98 = (MethodInfo *)info;
  pSStack_88 = (System_String_o *)__this;
  pMStack_80 = pMVar24;
  if (g_data_057ae8ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&TypeRef_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeRef_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ae8ee = '\x01';
  }
  SVar21.fields.value = (System_RuntimeTypeHandle_Fields)((long)g_data_057b9c00 + 0x20);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = System_Type__GetTypeFromHandle(SVar21,(MethodInfo *)0x0);
  bVar8 = System_Type__op_Equality((System_Type_o *)right,pSVar15,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9bb8 + 0x20);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = System_Type__GetTypeFromHandle(SVar21,(MethodInfo *)0x0);
  bVar8 = System_Type__op_Equality((System_Type_o *)right,pSVar15,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    fStack_b8 = (float)System_Int32__Parse(__this_01,(MethodInfo *)0x0);
    lVar23 = g_data_057b9bb8;
    goto label_0448ea71;
  }
  SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9be8 + 0x20);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = System_Type__GetTypeFromHandle(SVar21,(MethodInfo *)0x0);
  bVar8 = System_Type__op_Equality((System_Type_o *)right,pSVar15,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    fStack_b8 = System_Single__Parse(__this_01,(MethodInfo *)0x0);
    lVar23 = g_data_057b9be8;
    goto label_0448ea71;
  }
  SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9b98 + 0x20);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = System_Type__GetTypeFromHandle(SVar21,(MethodInfo *)0x0);
  bVar8 = System_Type__op_Equality((System_Type_o *)right,pSVar15,(MethodInfo *)0x0);
  SVar21 = TypeRef_BaseCSVObject;
  if ((char)bVar8 != '\0') {
    iVar9 = System_Int32__Parse(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = System_Convert__ToBoolean_3c1c650(iVar9,(MethodInfo *)0x0);
    fStack_b8 = (float)CONCAT31(fStack_b8._1_3_,(char)bVar8);
    lVar23 = g_data_057b9b98;
    goto label_0448ea71;
  }
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = System_Type__GetTypeFromHandle(SVar21,(MethodInfo *)0x0);
  if (pSVar15 == (System_Type_o *)0x0) {
label_0448eb80:
    SVar19 = SVar21.fields.value;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    cVar6 = (*(pSVar15->klass->vtable)._22_IsAssignableFrom.methodPtr)
                      (pSVar15,right,(pSVar15->klass->vtable)._22_IsAssignableFrom.method);
    SVar5 = TypeRef_Vector3;
    if (cVar6 != '\0') {
      SVar19.value = (intptr_t)
                     System_Activator__CreateInstance_3ce7ba0((System_Type_o *)right,(MethodInfo *)0x0);
      if ((System_String_array *)SVar19.value != (System_String_array *)0x0) {
        pIVar4 = (((System_String_array *)SVar19.value)->obj).klass;
        bVar2 = (TypeInfo_BaseCSVObject->_2).naturalAligment;
        if ((bVar2 <= (pIVar4->_2).naturalAligment) &&
           ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BaseCSVObject)) {
          (*pIVar4->vtable[9].methodPtr)(SVar19.value,__this_01,pIVar4->vtable[9].method);
          return;
        }
        goto label_0448eb8a;
      }
      goto label_0448eb80;
    }
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
    bVar8 = System_Type__op_Equality((System_Type_o *)right,pSVar15,(MethodInfo *)0x0);
    SVar21 = TypeRef_Vector2;
    if ((char)bVar8 != '\0') {
      uVar7 = (**(code **)(((MethodInfo *)method_00.fields.value)->methodPointer + 0x198))
                        (method_00.fields.value,
                         *(undefined8 *)(((MethodInfo *)method_00.fields.value)->methodPointer + 0x1a0));
      SVar21 = SVar5;
      if ((__this_01 != (System_String_o *)0x0) &&
         (SVar19.value = (intptr_t)System_String__Split(__this_01,uVar7,0,(MethodInfo *)0x0),
         (System_String_array *)SVar19.value != (System_String_array *)0x0)) {
        if ((((int)((System_String_array *)SVar19.value)->max_length != 0) &&
            (fStack_a8 = System_Single__Parse
                                   (((System_String_array *)SVar19.value)->m_Items[0],(MethodInfo *)0x0),
            1 < (uint)((System_String_array *)SVar19.value)->max_length)) &&
           (fStack_a4 = System_Single__Parse
                                  (((System_String_array *)SVar19.value)->m_Items[1],(MethodInfo *)0x0),
           2 < (uint)((System_String_array *)SVar19.value)->max_length)) {
          fStack_b0 = System_Single__Parse
                                (((System_String_array *)SVar19.value)->m_Items[2],(MethodInfo *)0x0);
          fStack_b4 = fStack_a4;
          plVar20 = &TypeInfo_Vector3;
label_0448ea6e:
          lVar23 = *plVar20;
          fStack_b8 = fStack_a8;
label_0448ea71:
          il2cpp_runtime_helper_02304f30(lVar23,&fStack_b8);
          return;
        }
        goto label_0448eb85;
      }
      goto label_0448eb80;
    }
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = System_Type__GetTypeFromHandle(SVar21,(MethodInfo *)0x0);
    bVar8 = System_Type__op_Equality((System_Type_o *)right,pSVar15,(MethodInfo *)0x0);
    SVar5 = TypeRef_Color255;
    if ((char)bVar8 == '\0') {
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
      bVar8 = System_Type__op_Equality((System_Type_o *)right,pSVar15,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      uVar7 = (**(code **)(((MethodInfo *)method_00.fields.value)->methodPointer + 0x198))
                        (method_00.fields.value,
                         *(undefined8 *)(((MethodInfo *)method_00.fields.value)->methodPointer + 0x1a0));
      SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)0;
      if ((__this_01 == (System_String_o *)0x0) ||
         (SVar19.value = (intptr_t)System_String__Split(__this_01,uVar7,0,(MethodInfo *)0x0),
         (System_String_array *)SVar19.value == (System_String_array *)0x0)) goto label_0448eb80;
      if (((int)((System_String_array *)SVar19.value)->max_length != 0) &&
         (((iVar9 = System_Int32__Parse(((System_String_array *)SVar19.value)->m_Items[0],(MethodInfo *)0x0),
           1 < (uint)((System_String_array *)SVar19.value)->max_length &&
           (iVar10 = System_Int32__Parse(((System_String_array *)SVar19.value)->m_Items[1],(MethodInfo *)0x0),
           2 < (uint)((System_String_array *)SVar19.value)->max_length)) &&
          (iVar11 = System_Int32__Parse(((System_String_array *)SVar19.value)->m_Items[2],(MethodInfo *)0x0),
          3 < (uint)((System_String_array *)SVar19.value)->max_length)))) {
        iVar12 = System_Int32__Parse(((System_String_array *)SVar19.value)->m_Items[3],(MethodInfo *)0x0);
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        System_Object___ctor(pIVar14,(MethodInfo *)0x0);
        *(int32_t *)&pIVar14[1].klass = iVar9;
        *(int32_t *)((long)&pIVar14[1].klass + 4) = iVar10;
        *(int32_t *)&pIVar14[1].monitor = iVar11;
        *(int32_t *)((long)&pIVar14[1].monitor + 4) = iVar12;
        return;
      }
    }
    else {
      uVar7 = (**(code **)(((MethodInfo *)method_00.fields.value)->methodPointer + 0x198))
                        (method_00.fields.value,
                         *(undefined8 *)(((MethodInfo *)method_00.fields.value)->methodPointer + 0x1a0));
      if ((__this_01 == (System_String_o *)0x0) ||
         (SVar19.value = (intptr_t)System_String__Split(__this_01,uVar7,0,(MethodInfo *)0x0),
         (System_String_array *)SVar19.value == (System_String_array *)0x0)) goto label_0448eb80;
      if (((int)((System_String_array *)SVar19.value)->max_length != 0) &&
         (fStack_a8 = System_Single__Parse
                                (((System_String_array *)SVar19.value)->m_Items[0],(MethodInfo *)0x0),
         1 < (uint)((System_String_array *)SVar19.value)->max_length)) {
        fStack_b4 = System_Single__Parse(((System_String_array *)SVar19.value)->m_Items[1],(MethodInfo *)0x0);
        plVar20 = &TypeInfo_Vector2;
        goto label_0448ea6e;
      }
    }
  }
label_0448eb85:
  il2cpp_runtime_helper_022b2ca0();
label_0448eb8a:
  il2cpp_runtime_helper_022b2fd0(SVar19.value);
  if (g_data_057ae8ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Type_List_1_System_Reflection_FieldI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Type_List_FieldInfo);
    g_data_057ae8ef = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Type_List_FieldInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_Type_List_1_System_Reflection_FieldI);
  *(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject->static_fields = __this_00;
  il2cpp_runtime_helper_022b4080(TypeInfo_BaseCSVObject->static_fields,__this_00);
  return;
}


// Utility.BaseCSVObject$$SerializeValue
// il2cpp: System_String_o* Utility_BaseCSVObject__SerializeValue (Utility_BaseCSVObject_o* __this, System_Type_o* t, Il2CppObject* value, const MethodInfo* method);
// 0x448df30

System_String_o *
Utility_BaseCSVObject__SerializeValue
          (Utility_BaseCSVObject_o *__this,System_Type_o *t,Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppClass_1 *pIVar3;
  System_RuntimeTypeHandle_o SVar4;
  System_RuntimeTypeHandle_o handle;
  char cVar5;
  uint16_t uVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  int32_t iVar9;
  int32_t iVar10;
  int32_t iVar11;
  System_Type_o *pSVar12;
  System_String_o *pSVar13;
  MethodInfo *pMVar14;
  undefined8 *puVar15;
  System_Type_o *pSVar16;
  System_RuntimeTypeHandle_Fields SVar17;
  long *plVar18;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *__this_01;
  System_RuntimeTypeHandle_o SVar19;
  System_RuntimeTypeHandle_o method_00;
  System_String_o **ppSVar20;
  long lVar21;
  float __this_02;
  float fVar22;
  float __this_03;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  System_String_array *pSStack_78;
  System_Type_o *pSStack_70;
  undefined8 *puStack_68;
  System_String_o *pSStack_60;
  MethodInfo *pMStack_58;
  undefined2 local_46;
  int32_t local_44;
  undefined1 local_40 [8];
  undefined1 local_38 [12];
  
  if (g_data_057ae8ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeRef_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeRef_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ae8ed = '\x01';
  }
  local_44 = 0;
  local_38._0_4_ = 0;
  local_40 = (undefined1  [8])0x0;
  local_46 = 0;
  stack0xffffffffffffffd0 = (InvokerMethod)0x0;
  pIVar3 = &g_data_057b9c00->_1;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)&pIVar3->byval_arg,(MethodInfo *)0x0);
  bVar7 = System_Type__op_Equality(t,pSVar12,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') goto label_0448e05a;
  if ((value == (Il2CppObject *)0x0) || (value->klass == g_data_057b9c00)) {
    return (System_String_o *)value;
  }
label_0448e052:
  il2cpp_runtime_helper_022b2fd0(value);
label_0448e05a:
  SVar19.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9bb8 + 0x20);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = System_Type__GetTypeFromHandle(SVar19,(MethodInfo *)0x0);
  method_00.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)t;
  bVar7 = System_Type__op_Equality(t,pSVar12,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    SVar19.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9be8 + 0x20);
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = System_Type__GetTypeFromHandle(SVar19,(MethodInfo *)0x0);
    method_00.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)t;
    bVar7 = System_Type__op_Equality(t,pSVar12,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') goto label_0448e0ca;
    SVar19.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9b98 + 0x20);
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = System_Type__GetTypeFromHandle(SVar19,(MethodInfo *)0x0);
    bVar7 = System_Type__op_Equality(t,pSVar12,(MethodInfo *)0x0);
    SVar19 = TypeRef_BaseCSVObject;
    if ((char)bVar7 != '\0') {
      if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      local_44 = System_Convert__ToInt32(value,(MethodInfo *)0x0);
      pSVar13 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
      return pSVar13;
    }
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = (System_Type_o *)0x0;
    method_00 = SVar19;
    pMVar14 = (MethodInfo *)System_Type__GetTypeFromHandle(SVar19,(MethodInfo *)0x0);
    if (pMVar14 == (MethodInfo *)0x0) goto label_0448e61f;
    pSVar12 = t;
    cVar5 = (**(code **)(pMVar14->methodPointer + 0x298))
                      (pMVar14,t,*(undefined8 *)(pMVar14->methodPointer + 0x2a0));
    SVar4 = TypeRef_Vector3;
    if (cVar5 != '\0') {
      method_00.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pMVar14;
      if (value == (Il2CppObject *)0x0) goto label_0448e61f;
      bVar1 = (TypeInfo_BaseCSVObject->_2).naturalAligment;
      if ((bVar1 <= (value->klass->_2).naturalAligment) &&
         ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseCSVObject)) {
        pIVar2 = value->klass;
        bVar1 = (TypeInfo_BaseCSVObject->_2).naturalAligment;
        if ((bVar1 <= (pIVar2->_2).naturalAligment) &&
           ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseCSVObject)) {
          pSVar13 = (System_String_o *)(*pIVar2->vtable[8].methodPtr)(value,pIVar2->vtable[8].method);
          return pSVar13;
        }
      }
      goto label_0448e052;
    }
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
    method_00.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)t;
    bVar7 = System_Type__op_Equality(t,pSVar12,(MethodInfo *)0x0);
    handle = TypeRef_Vector2;
    if ((char)bVar7 == '\0') {
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      method_00.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)t;
      bVar7 = System_Type__op_Equality(t,pSVar12,(MethodInfo *)0x0);
      SVar19 = TypeRef_Color255;
      if ((char)bVar7 != '\0') {
        SVar19 = handle;
        if (value == (Il2CppObject *)0x0) goto label_0448e61f;
        if ((value->klass->_1).element_class == *(Il2CppClass **)(TypeInfo_Vector2 + 0x40)) {
          puVar15 = (undefined8 *)il2cpp_runtime_helper_02305440(value);
          unique0x00023e00 = (InvokerMethod)*puVar15;
          local_46 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)(__this);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this = (Utility_BaseCSVObject_o *)System_Char__ToString((uint16_t)&local_46,(MethodInfo *)0x0);
          SVar17.value = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
          method_00.fields.value = (System_RuntimeTypeHandle_Fields)(local_38 + 8);
          pSVar12 = (System_Type_o *)0x0;
          pSVar13 = System_Single__ToString(__this_03,(MethodInfo *)method_00.fields.value);
          SVar19.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)SVar17.value
          ;
          if ((System_String_array *)SVar17.value == (System_String_array *)0x0) goto label_0448e61f;
          if ((int)((System_String_array *)SVar17.value)->max_length != 0) {
            ((System_String_array *)SVar17.value)->m_Items[0] = pSVar13;
            fVar22 = (float)il2cpp_runtime_helper_022b4080(((System_String_array *)SVar17.value)->m_Items);
            method_00.fields.value = (System_RuntimeTypeHandle_Fields)&stack0xffffffffffffffd4;
            pSVar12 = (System_Type_o *)0x0;
            pSVar13 = System_Single__ToString(fVar22,(MethodInfo *)method_00.fields.value);
            if (1 < (uint)((System_String_array *)SVar17.value)->max_length) {
              ppSVar20 = ((System_String_array *)SVar17.value)->m_Items + 1;
              ((System_String_array *)SVar17.value)->m_Items[1] = pSVar13;
label_0448e5ef:
              il2cpp_runtime_helper_022b4080(ppSVar20,pSVar13);
              pSVar13 = System_String__Join((System_String_o *)__this,(System_String_array *)SVar17.value,
                                            (MethodInfo *)0x0);
              return pSVar13;
            }
          }
          goto label_0448e624;
        }
        goto label_0448e052;
      }
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = System_Type__GetTypeFromHandle(SVar19,(MethodInfo *)0x0);
      bVar7 = System_Type__op_Equality(t,pSVar12,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return *(System_String_o **)g_data_057b9c00->static_fields;
      }
      if (value != (Il2CppObject *)0x0) {
        bVar1 = (TypeInfo_Color255->_2).naturalAligment;
        if (((value->klass->_2).naturalAligment < bVar1) ||
           ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Color255)) goto label_0448e052;
      }
      local_46 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)(__this);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = (Utility_BaseCSVObject_o *)System_Char__ToString((uint16_t)&local_46,(MethodInfo *)0x0);
      pSVar12 = (System_Type_o *)&g_data_00000004;
      method_00.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)TypeInfo_string;
      SVar17.value = il2cpp_runtime_helper_022b2a40();
      if (value != (Il2CppObject *)0x0) {
        method_00.fields.value = (System_RuntimeTypeHandle_Fields)(value + 1);
        pSVar12 = (System_Type_o *)0x0;
        pSVar13 = System_Int32__ToString(SUB84(method_00.fields.value,0),(MethodInfo *)0x0);
        SVar19.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)SVar17.value;
        if ((System_String_array *)SVar17.value != (System_String_array *)0x0) {
          if ((int)((System_String_array *)SVar17.value)->max_length != 0) {
            ((System_String_array *)SVar17.value)->m_Items[0] = pSVar13;
            il2cpp_runtime_helper_022b4080(((System_String_array *)SVar17.value)->m_Items);
            method_00.fields.value = (System_RuntimeTypeHandle_Fields)((long)&value[1].klass + 4);
            pSVar12 = (System_Type_o *)0x0;
            pSVar13 = System_Int32__ToString(SUB84(method_00.fields.value,0),(MethodInfo *)0x0);
            if (1 < (uint)((System_String_array *)SVar17.value)->max_length) {
              ((System_String_array *)SVar17.value)->m_Items[1] = pSVar13;
              il2cpp_runtime_helper_022b4080(((System_String_array *)SVar17.value)->m_Items + 1);
              method_00.fields.value = (System_RuntimeTypeHandle_Fields)&value[1].monitor;
              pSVar12 = (System_Type_o *)0x0;
              pSVar13 = System_Int32__ToString(SUB84(method_00.fields.value,0),(MethodInfo *)0x0);
              if (2 < (uint)((System_String_array *)SVar17.value)->max_length) {
                ((System_String_array *)SVar17.value)->m_Items[2] = pSVar13;
                il2cpp_runtime_helper_022b4080(((System_String_array *)SVar17.value)->m_Items + 2);
                value = (Il2CppObject *)((long)&value[1].monitor + 4);
                pSVar12 = (System_Type_o *)0x0;
                method_00.fields.value =
                     (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)value;
                pSVar13 = System_Int32__ToString((int32_t)value,(MethodInfo *)0x0);
                if (3 < (uint)((System_String_array *)SVar17.value)->max_length) {
                  ppSVar20 = ((System_String_array *)SVar17.value)->m_Items + 3;
                  ((System_String_array *)SVar17.value)->m_Items[3] = pSVar13;
                  goto label_0448e5ef;
                }
              }
            }
          }
          goto label_0448e624;
        }
      }
      goto label_0448e61f;
    }
    SVar19 = SVar4;
    if (value != (Il2CppObject *)0x0) {
      if ((value->klass->_1).element_class == *(Il2CppClass **)(TypeInfo_Vector3 + 0x40)) {
        puVar15 = (undefined8 *)il2cpp_runtime_helper_02305440(value);
        local_40 = (undefined1  [8])*puVar15;
        local_38._0_4_ = *(undefined4 *)(puVar15 + 1);
        local_46 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)(__this);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this = (Utility_BaseCSVObject_o *)System_Char__ToString((uint16_t)&local_46,(MethodInfo *)0x0);
        SVar17.value = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
        method_00.fields.value = (System_RuntimeTypeHandle_Fields)local_40;
        pSVar12 = (System_Type_o *)0x0;
        pSVar13 = System_Single__ToString(__this_02,(MethodInfo *)method_00.fields.value);
        SVar19.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)SVar17.value;
        if ((System_String_array *)SVar17.value != (System_String_array *)0x0) {
          if ((int)((System_String_array *)SVar17.value)->max_length != 0) {
            ((System_String_array *)SVar17.value)->m_Items[0] = pSVar13;
            fVar22 = (float)il2cpp_runtime_helper_022b4080(((System_String_array *)SVar17.value)->m_Items);
            method_00.fields.value = (System_RuntimeTypeHandle_Fields)(local_40 + 4);
            pSVar12 = (System_Type_o *)0x0;
            pSVar13 = System_Single__ToString(fVar22,(MethodInfo *)method_00.fields.value);
            if (1 < (uint)((System_String_array *)SVar17.value)->max_length) {
              ((System_String_array *)SVar17.value)->m_Items[1] = pSVar13;
              fVar22 = (float)il2cpp_runtime_helper_022b4080(((System_String_array *)SVar17.value)->m_Items + 1);
              method_00.fields.value = (System_RuntimeTypeHandle_Fields)local_38;
              pSVar12 = (System_Type_o *)0x0;
              pSVar13 = System_Single__ToString(fVar22,(MethodInfo *)method_00.fields.value);
              if (2 < (uint)((System_String_array *)SVar17.value)->max_length) {
                ppSVar20 = ((System_String_array *)SVar17.value)->m_Items + 2;
                ((System_String_array *)SVar17.value)->m_Items[2] = pSVar13;
                goto label_0448e5ef;
              }
            }
          }
          goto label_0448e624;
        }
        goto label_0448e61f;
      }
      goto label_0448e052;
    }
  }
  else {
label_0448e0ca:
    if (value != (Il2CppObject *)0x0) {
      pSVar13 = (System_String_o *)(*value->klass->vtable[3].methodPtr)(value,value->klass->vtable[3].method);
      return pSVar13;
    }
  }
label_0448e61f:
  il2cpp_runtime_helper_022b2c90();
  SVar17 = SVar19.fields.value;
label_0448e624:
  il2cpp_runtime_helper_022b2ca0();
  puStack_68 = &g_data_057b9b70;
  pSStack_78 = (System_String_array *)SVar17.value;
  pSStack_70 = t;
  pSStack_60 = (System_String_o *)__this;
  pMStack_58 = (MethodInfo *)value;
  if (g_data_057ae8ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&TypeRef_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeRef_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ae8ee = '\x01';
  }
  pIVar3 = &g_data_057b9c00->_1;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)&pIVar3->byval_arg,(MethodInfo *)0x0);
  bVar7 = System_Type__op_Equality(pSVar12,pSVar16,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return __this_01;
  }
  SVar19.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9bb8 + 0x20);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = System_Type__GetTypeFromHandle(SVar19,(MethodInfo *)0x0);
  bVar7 = System_Type__op_Equality(pSVar12,pSVar16,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    local_90 = (float)System_Int32__Parse(__this_01,(MethodInfo *)0x0);
    lVar21 = g_data_057b9bb8;
    goto label_0448ea71;
  }
  SVar19.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9be8 + 0x20);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = System_Type__GetTypeFromHandle(SVar19,(MethodInfo *)0x0);
  bVar7 = System_Type__op_Equality(pSVar12,pSVar16,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    local_90 = System_Single__Parse(__this_01,(MethodInfo *)0x0);
    lVar21 = g_data_057b9be8;
    goto label_0448ea71;
  }
  SVar19.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9b98 + 0x20);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = System_Type__GetTypeFromHandle(SVar19,(MethodInfo *)0x0);
  bVar7 = System_Type__op_Equality(pSVar12,pSVar16,(MethodInfo *)0x0);
  SVar19 = TypeRef_BaseCSVObject;
  if ((char)bVar7 != '\0') {
    iVar8 = System_Int32__Parse(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = System_Convert__ToBoolean_3c1c650(iVar8,(MethodInfo *)0x0);
    local_90 = (float)CONCAT31(local_90._1_3_,(char)bVar7);
    lVar21 = g_data_057b9b98;
    goto label_0448ea71;
  }
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = System_Type__GetTypeFromHandle(SVar19,(MethodInfo *)0x0);
  if (pSVar16 == (System_Type_o *)0x0) {
label_0448eb80:
    SVar17 = SVar19.fields.value;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    cVar5 = (*(pSVar16->klass->vtable)._22_IsAssignableFrom.methodPtr)
                      (pSVar16,pSVar12,(pSVar16->klass->vtable)._22_IsAssignableFrom.method);
    SVar4 = TypeRef_Vector3;
    if (cVar5 != '\0') {
      SVar17.value = (intptr_t)System_Activator__CreateInstance_3ce7ba0(pSVar12,(MethodInfo *)0x0);
      if ((System_String_array *)SVar17.value != (System_String_array *)0x0) {
        pIVar2 = (((System_String_array *)SVar17.value)->obj).klass;
        bVar1 = (TypeInfo_BaseCSVObject->_2).naturalAligment;
        if ((bVar1 <= (pIVar2->_2).naturalAligment) &&
           ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseCSVObject)) {
          (*pIVar2->vtable[9].methodPtr)(SVar17.value,__this_01,pIVar2->vtable[9].method);
          return (System_String_o *)(System_String_array *)SVar17.value;
        }
        goto label_0448eb8a;
      }
      goto label_0448eb80;
    }
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar16 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
    bVar7 = System_Type__op_Equality(pSVar12,pSVar16,(MethodInfo *)0x0);
    SVar19 = TypeRef_Vector2;
    if ((char)bVar7 != '\0') {
      uVar6 = (**(code **)(((MethodInfo *)method_00.fields.value)->methodPointer + 0x198))
                        (method_00.fields.value,
                         *(undefined8 *)(((MethodInfo *)method_00.fields.value)->methodPointer + 0x1a0));
      SVar19 = SVar4;
      if ((__this_01 != (System_String_o *)0x0) &&
         (SVar17.value = (intptr_t)System_String__Split(__this_01,uVar6,0,(MethodInfo *)0x0),
         (System_String_array *)SVar17.value != (System_String_array *)0x0)) {
        if ((((int)((System_String_array *)SVar17.value)->max_length != 0) &&
            (local_80 = System_Single__Parse
                                  (((System_String_array *)SVar17.value)->m_Items[0],(MethodInfo *)0x0),
            1 < (uint)((System_String_array *)SVar17.value)->max_length)) &&
           (local_7c = System_Single__Parse
                                 (((System_String_array *)SVar17.value)->m_Items[1],(MethodInfo *)0x0),
           2 < (uint)((System_String_array *)SVar17.value)->max_length)) {
          local_88 = System_Single__Parse(((System_String_array *)SVar17.value)->m_Items[2],(MethodInfo *)0x0)
          ;
          local_8c = local_7c;
          plVar18 = &TypeInfo_Vector3;
label_0448ea6e:
          lVar21 = *plVar18;
          local_90 = local_80;
label_0448ea71:
          pSVar13 = (System_String_o *)il2cpp_runtime_helper_02304f30(lVar21,&local_90);
          return pSVar13;
        }
        goto label_0448eb85;
      }
      goto label_0448eb80;
    }
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar16 = System_Type__GetTypeFromHandle(SVar19,(MethodInfo *)0x0);
    bVar7 = System_Type__op_Equality(pSVar12,pSVar16,(MethodInfo *)0x0);
    SVar4 = TypeRef_Color255;
    if ((char)bVar7 == '\0') {
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
      bVar7 = System_Type__op_Equality(pSVar12,pSVar16,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return (System_String_o *)0x0;
      }
      uVar6 = (**(code **)(((MethodInfo *)method_00.fields.value)->methodPointer + 0x198))
                        (method_00.fields.value,
                         *(undefined8 *)(((MethodInfo *)method_00.fields.value)->methodPointer + 0x1a0));
      SVar19.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)0;
      if ((__this_01 == (System_String_o *)0x0) ||
         (SVar17.value = (intptr_t)System_String__Split(__this_01,uVar6,0,(MethodInfo *)0x0),
         (System_String_array *)SVar17.value == (System_String_array *)0x0)) goto label_0448eb80;
      if (((int)((System_String_array *)SVar17.value)->max_length != 0) &&
         (((iVar8 = System_Int32__Parse(((System_String_array *)SVar17.value)->m_Items[0],(MethodInfo *)0x0),
           1 < (uint)((System_String_array *)SVar17.value)->max_length &&
           (iVar9 = System_Int32__Parse(((System_String_array *)SVar17.value)->m_Items[1],(MethodInfo *)0x0),
           2 < (uint)((System_String_array *)SVar17.value)->max_length)) &&
          (iVar10 = System_Int32__Parse(((System_String_array *)SVar17.value)->m_Items[2],(MethodInfo *)0x0),
          3 < (uint)((System_String_array *)SVar17.value)->max_length)))) {
        iVar11 = System_Int32__Parse(((System_String_array *)SVar17.value)->m_Items[3],(MethodInfo *)0x0);
        pSVar13 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        System_Object___ctor((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
        (pSVar13->fields)._stringLength = iVar8;
        *(int32_t *)&(pSVar13->fields)._firstChar = iVar9;
        *(int32_t *)&pSVar13[1].klass = iVar10;
        *(int32_t *)((long)&pSVar13[1].klass + 4) = iVar11;
        return pSVar13;
      }
    }
    else {
      uVar6 = (**(code **)(((MethodInfo *)method_00.fields.value)->methodPointer + 0x198))
                        (method_00.fields.value,
                         *(undefined8 *)(((MethodInfo *)method_00.fields.value)->methodPointer + 0x1a0));
      if ((__this_01 == (System_String_o *)0x0) ||
         (SVar17.value = (intptr_t)System_String__Split(__this_01,uVar6,0,(MethodInfo *)0x0),
         (System_String_array *)SVar17.value == (System_String_array *)0x0)) goto label_0448eb80;
      if (((int)((System_String_array *)SVar17.value)->max_length != 0) &&
         (local_80 = System_Single__Parse(((System_String_array *)SVar17.value)->m_Items[0],(MethodInfo *)0x0)
         , 1 < (uint)((System_String_array *)SVar17.value)->max_length)) {
        local_8c = System_Single__Parse(((System_String_array *)SVar17.value)->m_Items[1],(MethodInfo *)0x0);
        plVar18 = &TypeInfo_Vector2;
        goto label_0448ea6e;
      }
    }
  }
label_0448eb85:
  il2cpp_runtime_helper_022b2ca0();
label_0448eb8a:
  il2cpp_runtime_helper_022b2fd0(SVar17.value);
  if (g_data_057ae8ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Type_List_1_System_Reflection_FieldI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Type_List_FieldInfo);
    g_data_057ae8ef = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Type_List_FieldInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_Type_List_1_System_Reflection_FieldI);
  *(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject->static_fields = __this_00;
  pSVar13 = (System_String_o *)il2cpp_runtime_helper_022b4080(TypeInfo_BaseCSVObject->static_fields,__this_00);
  return pSVar13;
}


// Utility.BaseCSVObject$$DeserializeValue
// il2cpp: Il2CppObject* Utility_BaseCSVObject__DeserializeValue (Utility_BaseCSVObject_o* __this, System_Type_o* t, System_String_o* value, const MethodInfo* method);
// 0x448e630

Il2CppObject *
Utility_BaseCSVObject__DeserializeValue
          (Utility_BaseCSVObject_o *__this,System_Type_o *t,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  System_RuntimeTypeHandle_o SVar3;
  char cVar4;
  uint16_t uVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  int32_t iVar8;
  int32_t iVar9;
  int32_t iVar10;
  System_Type_o *pSVar11;
  System_RuntimeTypeHandle_Fields SVar12;
  long *plVar13;
  Il2CppObject *pIVar14;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_RuntimeTypeHandle_o SVar15;
  long lVar16;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  
  if (g_data_057ae8ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&TypeRef_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeRef_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ae8ee = '\x01';
  }
  SVar15.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9c00 + 0x20);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = System_Type__GetTypeFromHandle(SVar15,(MethodInfo *)0x0);
  bVar6 = System_Type__op_Equality(t,pSVar11,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return (Il2CppObject *)value;
  }
  SVar15.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9bb8 + 0x20);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = System_Type__GetTypeFromHandle(SVar15,(MethodInfo *)0x0);
  bVar6 = System_Type__op_Equality(t,pSVar11,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    fStack_48 = (float)System_Int32__Parse(value,(MethodInfo *)0x0);
    lVar16 = g_data_057b9bb8;
    goto label_0448ea71;
  }
  SVar15.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9be8 + 0x20);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = System_Type__GetTypeFromHandle(SVar15,(MethodInfo *)0x0);
  bVar6 = System_Type__op_Equality(t,pSVar11,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    fStack_48 = System_Single__Parse(value,(MethodInfo *)0x0);
    lVar16 = g_data_057b9be8;
    goto label_0448ea71;
  }
  SVar15.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9b98 + 0x20);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = System_Type__GetTypeFromHandle(SVar15,(MethodInfo *)0x0);
  bVar6 = System_Type__op_Equality(t,pSVar11,(MethodInfo *)0x0);
  SVar15 = TypeRef_BaseCSVObject;
  if ((char)bVar6 != '\0') {
    iVar7 = System_Int32__Parse(value,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = System_Convert__ToBoolean_3c1c650(iVar7,(MethodInfo *)0x0);
    fStack_48 = (float)CONCAT31(fStack_48._1_3_,(char)bVar6);
    lVar16 = g_data_057b9b98;
    goto label_0448ea71;
  }
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = System_Type__GetTypeFromHandle(SVar15,(MethodInfo *)0x0);
  if (pSVar11 == (System_Type_o *)0x0) {
label_0448eb80:
    SVar12 = SVar15.fields.value;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    cVar4 = (*(pSVar11->klass->vtable)._22_IsAssignableFrom.methodPtr)
                      (pSVar11,t,(pSVar11->klass->vtable)._22_IsAssignableFrom.method);
    SVar3 = TypeRef_Vector3;
    if (cVar4 != '\0') {
      SVar12.value = (intptr_t)System_Activator__CreateInstance_3ce7ba0(t,(MethodInfo *)0x0);
      if ((System_String_array *)SVar12.value != (System_String_array *)0x0) {
        pIVar2 = (((System_String_array *)SVar12.value)->obj).klass;
        bVar1 = (TypeInfo_BaseCSVObject->_2).naturalAligment;
        if ((bVar1 <= (pIVar2->_2).naturalAligment) &&
           ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseCSVObject)) {
          (*pIVar2->vtable[9].methodPtr)(SVar12.value,value,pIVar2->vtable[9].method);
          return &((System_String_array *)SVar12.value)->obj;
        }
        goto label_0448eb8a;
      }
      goto label_0448eb80;
    }
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
    bVar6 = System_Type__op_Equality(t,pSVar11,(MethodInfo *)0x0);
    SVar15 = TypeRef_Vector2;
    if ((char)bVar6 != '\0') {
      uVar5 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                        (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
      SVar15 = SVar3;
      if ((value != (System_String_o *)0x0) &&
         (SVar12.value = (intptr_t)System_String__Split(value,uVar5,0,(MethodInfo *)0x0),
         (System_String_array *)SVar12.value != (System_String_array *)0x0)) {
        if ((((int)((System_String_array *)SVar12.value)->max_length != 0) &&
            (fStack_38 = System_Single__Parse
                                   (((System_String_array *)SVar12.value)->m_Items[0],(MethodInfo *)0x0),
            1 < (uint)((System_String_array *)SVar12.value)->max_length)) &&
           (fStack_34 = System_Single__Parse
                                  (((System_String_array *)SVar12.value)->m_Items[1],(MethodInfo *)0x0),
           2 < (uint)((System_String_array *)SVar12.value)->max_length)) {
          fStack_40 = System_Single__Parse
                                (((System_String_array *)SVar12.value)->m_Items[2],(MethodInfo *)0x0);
          fStack_44 = fStack_34;
          plVar13 = &TypeInfo_Vector3;
label_0448ea6e:
          lVar16 = *plVar13;
          fStack_48 = fStack_38;
label_0448ea71:
          pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(lVar16,&fStack_48);
          return pIVar14;
        }
        goto label_0448eb85;
      }
      goto label_0448eb80;
    }
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = System_Type__GetTypeFromHandle(SVar15,(MethodInfo *)0x0);
    bVar6 = System_Type__op_Equality(t,pSVar11,(MethodInfo *)0x0);
    SVar3 = TypeRef_Color255;
    if ((char)bVar6 == '\0') {
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
      bVar6 = System_Type__op_Equality(t,pSVar11,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return (Il2CppObject *)0x0;
      }
      uVar5 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                        (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
      SVar15.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)0;
      if ((value == (System_String_o *)0x0) ||
         (SVar12.value = (intptr_t)System_String__Split(value,uVar5,0,(MethodInfo *)0x0),
         (System_String_array *)SVar12.value == (System_String_array *)0x0)) goto label_0448eb80;
      if (((int)((System_String_array *)SVar12.value)->max_length != 0) &&
         (((iVar7 = System_Int32__Parse(((System_String_array *)SVar12.value)->m_Items[0],(MethodInfo *)0x0),
           1 < (uint)((System_String_array *)SVar12.value)->max_length &&
           (iVar8 = System_Int32__Parse(((System_String_array *)SVar12.value)->m_Items[1],(MethodInfo *)0x0),
           2 < (uint)((System_String_array *)SVar12.value)->max_length)) &&
          (iVar9 = System_Int32__Parse(((System_String_array *)SVar12.value)->m_Items[2],(MethodInfo *)0x0),
          3 < (uint)((System_String_array *)SVar12.value)->max_length)))) {
        iVar10 = System_Int32__Parse(((System_String_array *)SVar12.value)->m_Items[3],(MethodInfo *)0x0);
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        System_Object___ctor(pIVar14,(MethodInfo *)0x0);
        *(int32_t *)&pIVar14[1].klass = iVar7;
        *(int32_t *)((long)&pIVar14[1].klass + 4) = iVar8;
        *(int32_t *)&pIVar14[1].monitor = iVar9;
        *(int32_t *)((long)&pIVar14[1].monitor + 4) = iVar10;
        return pIVar14;
      }
    }
    else {
      uVar5 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                        (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
      if ((value == (System_String_o *)0x0) ||
         (SVar12.value = (intptr_t)System_String__Split(value,uVar5,0,(MethodInfo *)0x0),
         (System_String_array *)SVar12.value == (System_String_array *)0x0)) goto label_0448eb80;
      if (((int)((System_String_array *)SVar12.value)->max_length != 0) &&
         (fStack_38 = System_Single__Parse
                                (((System_String_array *)SVar12.value)->m_Items[0],(MethodInfo *)0x0),
         1 < (uint)((System_String_array *)SVar12.value)->max_length)) {
        fStack_44 = System_Single__Parse(((System_String_array *)SVar12.value)->m_Items[1],(MethodInfo *)0x0);
        plVar13 = &TypeInfo_Vector2;
        goto label_0448ea6e;
      }
    }
  }
label_0448eb85:
  il2cpp_runtime_helper_022b2ca0();
label_0448eb8a:
  il2cpp_runtime_helper_022b2fd0(SVar12.value);
  if (g_data_057ae8ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Type_List_1_System_Reflection_FieldI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Type_List_FieldInfo);
    g_data_057ae8ef = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Type_List_FieldInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_Type_List_1_System_Reflection_FieldI);
  *(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject->static_fields = __this_00;
  pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(TypeInfo_BaseCSVObject->static_fields,__this_00);
  return pIVar14;
}


// Utility.BaseCSVObject$$.ctor
// il2cpp: void Utility_BaseCSVObject___ctor (Utility_BaseCSVObject_o* __this, const MethodInfo* method);
// 0x448cc10

void Utility_BaseCSVObject___ctor(Utility_BaseCSVObject_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.BaseCSVObject$$.cctor
// il2cpp: void Utility_BaseCSVObject___cctor (const MethodInfo* method);
// 0x448eba0

void Utility_BaseCSVObject___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (g_data_057ae8ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Type_List_1_System_Reflection_FieldI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Type_List_FieldInfo);
    g_data_057ae8ef = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Type_List_FieldInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(__this,MethodInfo_Dictionary_2_System_Type_List_1_System_Reflection_FieldI);
  **(undefined8 **)(TypeInfo_BaseCSVObject + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_BaseCSVObject + 0xb8),__this);
  return;
}


