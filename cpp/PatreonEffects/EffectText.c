// Type: PatreonEffects.EffectText
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/EffectText.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.EffectText$$get_text
// il2cpp: System_String_o* PatreonEffects_EffectText__get_text (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x420d620

System_String_o * PatreonEffects_EffectText__get_text(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  return (__this->fields)._text;
}


// PatreonEffects.EffectText$$set_text
// il2cpp: void PatreonEffects_EffectText__set_text (PatreonEffects_EffectText_o* __this, System_String_o* value, const MethodInfo* method);
// 0x420d630

void PatreonEffects_EffectText__set_text
               (PatreonEffects_EffectText_o *__this,System_String_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_array *pUVar4;
  System_String_o *pSVar5;
  ulong uVar6;
  Il2CppClass *pIVar7;
  MethodInfo_362C220 *pMVar8;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar9;
  System_String_array *pSVar10;
  System_Collections_Generic_List_EffectText_Segment__o *__this_00;
  System_Type_o *pSVar11;
  long lVar12;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_02;
  UnityEngine_UI_ContentSizeFitter_o *__this_03;
  UnityEngine_GameObject_o *item;
  undefined8 uVar14;
  MethodInfo *method_00;
  undefined8 unaff_RBX;
  undefined1 *puVar15;
  undefined8 unaff_RBP;
  ulong uVar16;
  MethodInfo *method_01;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  System_Type_array *unaff_R15;
  
  puVar15 = &stack0xfffffffffffffff8;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (__this == (PatreonEffects_EffectText_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
  }
  else {
    (__this->fields)._text = value;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._text);
    puVar15 = (undefined1 *)register0x00000020;
  }
  *(undefined8 *)(puVar15 + -8) = unaff_RBP;
  *(System_Type_array **)(puVar15 + -0x10) = unaff_R15;
  *(undefined8 *)(puVar15 + -0x18) = unaff_R14;
  *(undefined8 *)(puVar15 + -0x20) = unaff_R13;
  *(undefined8 *)(puVar15 + -0x28) = unaff_R12;
  *(undefined8 *)(puVar15 + -0x30) = unaff_RBX;
  if (g_data_057ad905 == '\0') {
    *(undefined8 *)(puVar15 + -0x210) = 0x420d69d;
    il2cpp_runtime_helper_023445d0(&TypeRef_ContentSizeFitter);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d6a9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectText);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d6b5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d6c1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d6cd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d6d9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d6e5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d6f1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_EffectText_Segment_get_Current);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d6fd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d709;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d715;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d721;
    il2cpp_runtime_helper_023445d0(&TypeRef_HorizontalLayoutGroup);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d72d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d739;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d745;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_PatreonEffects_EffectText_Segment_Ge);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d751;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d75d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d769;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d775;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d781;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    *(undefined8 *)(puVar15 + -0x210) = 0x420d78d;
    il2cpp_runtime_helper_023445d0(&"EffectTextRow");
    g_data_057ad905 = '\x01';
  }
  *(undefined8 *)(puVar15 + -0x1a8) = 0;
  *(undefined8 *)(puVar15 + -0x1a0) = 0;
  *(undefined8 *)(puVar15 + -0x198) = 0;
  *(undefined8 *)(puVar15 + -0xb8) = 0;
  *(undefined8 *)(puVar15 + -0xb0) = 0;
  *(undefined8 *)(puVar15 + -200) = 0;
  *(undefined8 *)(puVar15 + -0xc0) = 0;
  *(undefined8 *)(puVar15 + -0xd8) = 0;
  *(undefined8 *)(puVar15 + -0xd0) = 0;
  *(undefined8 *)(puVar15 + -0xe8) = 0;
  *(undefined8 *)(puVar15 + -0xe0) = 0;
  *(undefined8 *)(puVar15 + -0xf8) = 0;
  *(undefined8 *)(puVar15 + -0xf0) = 0;
  *(undefined8 *)(puVar15 + -0x108) = 0;
  *(undefined8 *)(puVar15 + -0x100) = 0;
  *(undefined8 *)(puVar15 + -0x118) = 0;
  *(undefined8 *)(puVar15 + -0x110) = 0;
  *(undefined8 *)(puVar15 + -0x128) = 0;
  *(undefined8 *)(puVar15 + -0x120) = 0;
  *(undefined8 *)(puVar15 + -0x138) = 0;
  *(undefined8 *)(puVar15 + -0x130) = 0;
  *(undefined8 *)(puVar15 + -0x148) = 0;
  *(undefined8 *)(puVar15 + -0x140) = 0;
  *(undefined8 *)(puVar15 + -0x158) = 0;
  *(undefined8 *)(puVar15 + -0x150) = 0;
  *(undefined8 *)(puVar15 + -0x168) = 0;
  *(undefined8 *)(puVar15 + -0x160) = 0;
  *(undefined8 *)(puVar15 + -0x178) = 0;
  *(undefined8 *)(puVar15 + -0x170) = 0;
  pSVar3 = (__this->fields)._segments;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    *(undefined8 *)(puVar15 + -0x210) = 0x420d832;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)(puVar15 + -0xa0),
               (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    *(undefined8 *)(puVar15 + -0x198) = *(undefined8 *)(puVar15 + -0x90);
    *(undefined8 *)(puVar15 + -0x1a8) = *(undefined8 *)(puVar15 + -0xa0);
    *(undefined8 *)(puVar15 + -0x1a0) = *(undefined8 *)(puVar15 + -0x98);
    while( true ) {
      *(undefined8 *)(puVar15 + -0x210) = 0x420d891;
      bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o)
                         *(System_Collections_Generic_List_Enumerator_object__Fields *)(puVar15 + -0x208),
                         (MethodInfo_321A1D0 *)(puVar15 + -0x1a8));
      if ((char)bVar9 == '\0') break;
      x = *(UnityEngine_Object_o **)(puVar15 + -0x198);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar15 + -0x210) = 0x420d8ab;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar15 + -0x210) = 0x420d8b7;
      bVar9 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar15 + -0x210) = 0x420d8c2;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar15 + -0x210) = 0x420d886;
        UnityEngine_Object__Destroy_4e01c60(x,(MethodInfo *)0x0);
      }
    }
    *(undefined8 *)(puVar15 + -0x210) = 0x420d8d8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)
               *(System_Collections_Generic_List_Enumerator_object__Fields *)(puVar15 + -0x208),
               (MethodInfo_321A1C0 *)(puVar15 + -0x1a8));
    unaff_R15 = (System_Type_array *)&MethodInfo_Boolean_MoveNext;
    pSVar3 = (__this->fields)._segments;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < length) {
        pUVar4 = (pSVar3->fields)._items;
        *(undefined8 *)(puVar15 + -0x210) = 0x420d905;
        System_Array__Clear((System_Array_o *)pUVar4,0,length,(MethodInfo *)0x0);
      }
      pSVar5 = (__this->fields)._text;
      *(undefined8 *)(puVar15 + -0x210) = 0x420d911;
      bVar9 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return;
      }
      pSVar5 = (__this->fields)._text;
      if (pSVar5 != (System_String_o *)0x0) {
        method_01 = (MethodInfo *)0xa;
        *(undefined8 *)(puVar15 + -0x210) = 0x420d935;
        pSVar10 = System_String__Split(pSVar5,10,0,(MethodInfo *)0x0);
        if (pSVar10 != (System_String_array *)0x0) {
          uVar6 = pSVar10->max_length;
          if ((int)uVar6 < 1) {
            return;
          }
          uVar16 = 0;
          *(System_String_array **)(puVar15 + -0x180) = pSVar10;
          if ((uVar6 & 0xffffffff) != 0) {
            do {
              pSVar5 = pSVar10->m_Items[uVar16];
              if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                *(undefined8 *)(puVar15 + -0x210) = 0x420d9cd;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)(puVar15 + -0x210) = 0x420d9d5;
              __this_00 = PatreonEffects_EffectText__ParseLine(pSVar5,method_01);
              if (__this_00 == (System_Collections_Generic_List_EffectText_Segment__o *)0x0)
              goto label_0420df5e;
              if ((__this_00->fields)._size == 0) {
                pSVar3 = (__this->fields)._segments;
                *(undefined8 *)(puVar15 + -0x210) = 0x420dc6d;
                method_01 = (MethodInfo *)PatreonEffects_EffectText__CreateSpacerRow(__this,method_01);
                lVar12 = MethodInfo_Void_Add;
                if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0420df5e;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar4 = (pSVar3->fields)._items;
                if (pUVar4 == (UnityEngine_GameObject_array *)0x0) goto label_0420df5e;
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar4->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar4->m_Items[(int)uVar2] = (UnityEngine_GameObject_o *)method_01;
                  *(undefined8 *)(puVar15 + -0x210) = 0x420dcb9;
                  il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar2);
                }
                else {
                  pMVar8 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
                  *(undefined8 *)(puVar15 + -0x210) = 0x420deba;
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)method_01,
                             pMVar8);
                }
              }
              else {
                *(ulong *)(puVar15 + -0x188) = uVar16;
                *(undefined8 *)(puVar15 + -0x210) = 0x420da07;
                unaff_R15 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                handle.fields.value = TypeRef_RectTransform.fields.value;
                if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                  *(undefined8 *)(puVar15 + -0x210) = 0x420da30;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)(puVar15 + -0x210) = 0x420da3a;
                pSVar11 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
                if (unaff_R15 == (System_Type_array *)0x0) goto label_0420df5e;
                if (pSVar11 != (System_Type_o *)0x0) {
                  pIVar7 = (((unaff_R15->obj).klass)->_1).element_class;
                  *(undefined8 *)(puVar15 + -0x210) = 0x420da5a;
                  lVar12 = il2cpp_runtime_helper_023051f0(pSVar11,pIVar7);
                  if (lVar12 == 0) goto label_0420df68;
                }
                if ((int)unaff_R15->max_length == 0) break;
                unaff_R15->m_Items[0] = pSVar11;
                *(undefined8 *)(puVar15 + -0x210) = 0x420da7e;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items);
                *(undefined8 *)(puVar15 + -0x210) = 0x420da8f;
                pSVar11 = System_Type__GetTypeFromHandle(TypeRef_HorizontalLayoutGroup,(MethodInfo *)0x0);
                if (pSVar11 != (System_Type_o *)0x0) {
                  pIVar7 = (((unaff_R15->obj).klass)->_1).element_class;
                  *(undefined8 *)(puVar15 + -0x210) = 0x420daa6;
                  lVar12 = il2cpp_runtime_helper_023051f0(pSVar11,pIVar7);
                  if (lVar12 == 0) goto label_0420df68;
                }
                if ((uint)unaff_R15->max_length < 2) break;
                unaff_R15->m_Items[1] = pSVar11;
                *(undefined8 *)(puVar15 + -0x210) = 0x420daca;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items + 1);
                *(undefined8 *)(puVar15 + -0x210) = 0x420dadb;
                pSVar11 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                if (pSVar11 != (System_Type_o *)0x0) {
                  pIVar7 = (((unaff_R15->obj).klass)->_1).element_class;
                  *(undefined8 *)(puVar15 + -0x210) = 0x420daf2;
                  lVar12 = il2cpp_runtime_helper_023051f0(pSVar11,pIVar7);
                  if (lVar12 == 0) goto label_0420df68;
                }
                if ((uint)unaff_R15->max_length < 3) break;
                unaff_R15->m_Items[2] = pSVar11;
                *(undefined8 *)(puVar15 + -0x210) = 0x420db1c;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items + 2,pSVar11);
                *(undefined8 *)(puVar15 + -0x210) = 0x420db2b;
                __this_01 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                *(undefined8 *)(puVar15 + -0x210) = 0x420db45;
                UnityEngine_GameObject___ctor_4dfc440(__this_01,"EffectTextRow",unaff_R15,(MethodInfo *)0x0);
                if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_0420df5e;
                *(undefined8 *)(puVar15 + -0x210) = 0x420db58;
                pUVar13 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                *(undefined8 *)(puVar15 + -0x210) = 0x420db65;
                parent = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_0420df5e;
                *(undefined8 *)(puVar15 + -0x210) = 0x420db7d;
                UnityEngine_Transform__SetParent_4e09e30(pUVar13,parent,0,(MethodInfo *)0x0);
                *(undefined8 *)(puVar15 + -0x210) = 0x420db8f;
                __this_02 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                            UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
                if (__this_02 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto label_0420df5e;
                *(undefined8 *)(puVar15 + -0x210) = 0x420dbaa;
                UnityEngine_UI_LayoutGroup__set_childAlignment
                          ((UnityEngine_UI_LayoutGroup_o *)__this_02,3,(MethodInfo *)0x0);
                *(undefined8 *)(puVar15 + -0x210) = 0x420dbb6;
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                          (__this_02,0,(MethodInfo *)0x0);
                *(undefined8 *)(puVar15 + -0x210) = 0x420dbc2;
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                          (__this_02,0,(MethodInfo *)0x0);
                *(undefined8 *)(puVar15 + -0x210) = 0x420dbcf;
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_02,0.0,(MethodInfo *)0x0);
                *(undefined8 *)(puVar15 + -0x210) = 0x420dbe1;
                __this_03 = (UnityEngine_UI_ContentSizeFitter_o *)
                            UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                if (__this_03 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_0420df5e;
                *(undefined8 *)(puVar15 + -0x210) = 0x420dbfc;
                UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_03,2,(MethodInfo *)0x0);
                *(undefined8 *)(puVar15 + -0x210) = 0x420dc0b;
                UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_03,2,(MethodInfo *)0x0);
                lVar12 = MethodInfo_Void_Add;
                pSVar3 = (__this->fields)._segments;
                if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0420df5e;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar4 = (pSVar3->fields)._items;
                if (pUVar4 == (UnityEngine_GameObject_array *)0x0) goto label_0420df5e;
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar4->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar4->m_Items[(int)uVar2] = __this_01;
                  *(undefined8 *)(puVar15 + -0x210) = 0x420dc5c;
                  il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar2,__this_01);
                }
                else {
                  pMVar8 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
                  *(undefined8 *)(puVar15 + -0x210) = 0x420dcd7;
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_01,
                             pMVar8);
                }
                *(undefined8 *)(puVar15 + -0x210) = 0x420dcf1;
                System_Collections_Generic_List_EffectText_Segment___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)(puVar15 + -0xa0),__this_00,
                           MethodInfo_List_1_T_Enumerator_PatreonEffects_EffectText_Segment_Ge);
                *(undefined8 *)(puVar15 + -0xb8) = *(undefined8 *)(puVar15 + -0x40);
                *(undefined8 *)(puVar15 + -0xb0) = *(undefined8 *)(puVar15 + -0x38);
                *(undefined8 *)(puVar15 + -200) = *(undefined8 *)(puVar15 + -0x50);
                *(undefined8 *)(puVar15 + -0xc0) = *(undefined8 *)(puVar15 + -0x48);
                *(undefined8 *)(puVar15 + -0xd8) = *(undefined8 *)(puVar15 + -0x60);
                *(undefined8 *)(puVar15 + -0xd0) = *(undefined8 *)(puVar15 + -0x58);
                *(undefined8 *)(puVar15 + -0xe8) = *(undefined8 *)(puVar15 + -0x70);
                *(undefined8 *)(puVar15 + -0xe0) = *(undefined8 *)(puVar15 + -0x68);
                *(undefined8 *)(puVar15 + -0xf8) = *(undefined8 *)(puVar15 + -0x80);
                *(undefined8 *)(puVar15 + -0xf0) = *(undefined8 *)(puVar15 + -0x78);
                *(undefined8 *)(puVar15 + -0x108) = *(undefined8 *)(puVar15 + -0x90);
                *(undefined8 *)(puVar15 + -0x100) = *(undefined8 *)(puVar15 + -0x88);
                *(undefined8 *)(puVar15 + -0x118) = *(undefined8 *)(puVar15 + -0xa0);
                *(undefined8 *)(puVar15 + -0x110) = *(undefined8 *)(puVar15 + -0x98);
                unaff_R15 = (System_Type_array *)&MethodInfo_Boolean_MoveNext;
                while( true ) {
                  *(undefined8 *)(puVar15 + -0x210) = 0x420dda2;
                  bVar9 = System_Collections_Generic_List_Enumerator_EffectText_Segment___MoveNext
                                    ((System_Collections_Generic_List_Enumerator_T__o)
                                     *(System_Collections_Generic_List_Enumerator_T__Fields *)
                                      (puVar15 + -0x208),(MethodInfo_322DD10 *)(puVar15 + -0x118));
                  if ((char)bVar9 == '\0') break;
                  *(undefined8 *)(puVar15 + -0x128) = *(undefined8 *)(puVar15 + -0xb8);
                  *(undefined8 *)(puVar15 + -0x120) = *(undefined8 *)(puVar15 + -0xb0);
                  *(undefined8 *)(puVar15 + -0x138) = *(undefined8 *)(puVar15 + -200);
                  *(undefined8 *)(puVar15 + -0x130) = *(undefined8 *)(puVar15 + -0xc0);
                  *(undefined8 *)(puVar15 + -0x148) = *(undefined8 *)(puVar15 + -0xd8);
                  *(undefined8 *)(puVar15 + -0x140) = *(undefined8 *)(puVar15 + -0xd0);
                  *(undefined8 *)(puVar15 + -0x158) = *(undefined8 *)(puVar15 + -0xe8);
                  *(undefined8 *)(puVar15 + -0x150) = *(undefined8 *)(puVar15 + -0xe0);
                  *(undefined8 *)(puVar15 + -0x168) = *(undefined8 *)(puVar15 + -0xf8);
                  *(undefined8 *)(puVar15 + -0x160) = *(undefined8 *)(puVar15 + -0xf0);
                  *(undefined8 *)(puVar15 + -0x178) = *(undefined8 *)(puVar15 + -0x108);
                  *(undefined8 *)(puVar15 + -0x170) = *(undefined8 *)(puVar15 + -0x100);
                  *(undefined8 *)(puVar15 + -0x210) = 0x420de01;
                  pUVar13 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                  *(undefined8 *)(puVar15 + -0x1b8) = *(undefined8 *)(puVar15 + -0x128);
                  *(undefined8 *)(puVar15 + -0x1b0) = *(undefined8 *)(puVar15 + -0x120);
                  *(undefined8 *)(puVar15 + -0x1c8) = *(undefined8 *)(puVar15 + -0x138);
                  *(undefined8 *)(puVar15 + -0x1c0) = *(undefined8 *)(puVar15 + -0x130);
                  *(undefined8 *)(puVar15 + -0x1d8) = *(undefined8 *)(puVar15 + -0x148);
                  *(undefined8 *)(puVar15 + -0x1d0) = *(undefined8 *)(puVar15 + -0x140);
                  *(undefined8 *)(puVar15 + -0x1e8) = *(undefined8 *)(puVar15 + -0x158);
                  *(undefined8 *)(puVar15 + -0x1e0) = *(undefined8 *)(puVar15 + -0x150);
                  *(undefined8 *)(puVar15 + -0x1f8) = *(undefined8 *)(puVar15 + -0x168);
                  *(undefined8 *)(puVar15 + -0x1f0) = *(undefined8 *)(puVar15 + -0x160);
                  *(undefined8 *)(puVar15 + -0x208) = *(undefined8 *)(puVar15 + -0x178);
                  *(undefined8 *)(puVar15 + -0x200) = *(undefined8 *)(puVar15 + -0x170);
                  *(undefined8 *)(puVar15 + -0x210) = 0x420de59;
                  item = PatreonEffects_EffectText__CreateSegmentGO
                                   (__this,pUVar13,
                                    (PatreonEffects_EffectText_Segment_o)
                                    *(PatreonEffects_EffectText_Segment_Fields *)(puVar15 + -0x208),method_00)
                  ;
                  lVar12 = MethodInfo_Void_Add;
                  pSVar3 = (__this->fields)._segments;
                  if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    *(undefined8 *)(puVar15 + -0x210) = 0x420dec4;
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0420df5e;
                  }
                  piVar1 = &(pSVar3->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar4 = (pSVar3->fields)._items;
                  if (pUVar4 == (UnityEngine_GameObject_array *)0x0) {
                    *(undefined8 *)(puVar15 + -0x210) = 0x420dece;
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0420df5e;
                  }
                  uVar2 = (pSVar3->fields)._size;
                  if (uVar2 < (uint)pUVar4->max_length) {
                    (pSVar3->fields)._size = uVar2 + 1;
                    pUVar4->m_Items[(int)uVar2] = item;
                    *(undefined8 *)(puVar15 + -0x210) = 0x420de9b;
                    il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar2,item);
                  }
                  else {
                    pMVar8 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
                    *(undefined8 *)(puVar15 + -0x210) = 0x420dd97;
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,pMVar8
                              );
                  }
                }
                *(undefined8 *)(puVar15 + -0x210) = 0x420d982;
                method_01 = MethodInfo_Void_Dispose;
                System_Collections_Generic_List_Enumerator_EffectText_Segment___Dispose
                          ((System_Collections_Generic_List_Enumerator_T__o)
                           *(System_Collections_Generic_List_Enumerator_T__Fields *)(puVar15 + -0x208),
                           (MethodInfo_322DD00 *)(puVar15 + -0x118));
                uVar16 = *(ulong *)(puVar15 + -0x188);
              }
              uVar16 = uVar16 + 1;
              pSVar10 = *(System_String_array **)(puVar15 + -0x180);
              uVar2 = (uint)pSVar10->max_length;
              if ((long)(int)uVar2 <= (long)uVar16) {
                return;
              }
            } while (uVar16 < uVar2);
          }
          goto label_0420df63;
        }
      }
    }
  }
label_0420df5e:
  *(undefined8 *)(puVar15 + -0x210) = 0x420df63;
  il2cpp_runtime_helper_022b2c90();
label_0420df63:
  *(undefined8 *)(puVar15 + -0x210) = 0x420df68;
  il2cpp_runtime_helper_022b2ca0();
label_0420df68:
  *(undefined8 *)(puVar15 + -0x210) = 0x420df6d;
  uVar14 = il2cpp_runtime_helper_0231b270();
  *(undefined8 *)(puVar15 + -0x210) = 0x420df77;
  il2cpp_runtime_helper_022b2b10(uVar14,0);
  *(undefined8 *)(puVar15 + -0x210) = 0x420df95;
  System_Collections_Generic_List_Enumerator_EffectText_Segment___Dispose
            ((System_Collections_Generic_List_Enumerator_T__o)
             *(System_Collections_Generic_List_Enumerator_T__Fields *)(puVar15 + -0x208),
             (MethodInfo_322DD00 *)(puVar15 + -0x118));
  *(undefined8 *)(puVar15 + -0x210) = 0x420dfa2;
  _Unwind_Resume(unaff_R15);
}


// PatreonEffects.EffectText$$get_fontSize
// il2cpp: float PatreonEffects_EffectText__get_fontSize (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x420e040

float PatreonEffects_EffectText__get_fontSize(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  return (__this->fields)._fontSize;
}


// PatreonEffects.EffectText$$set_fontSize
// il2cpp: void PatreonEffects_EffectText__set_fontSize (PatreonEffects_EffectText_o* __this, float value, const MethodInfo* method);
// 0x420e050

void PatreonEffects_EffectText__set_fontSize
               (PatreonEffects_EffectText_o *__this,float value,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  System_String_o *pSVar4;
  UnityEngine_GameObject_array *pUVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_T__o __this_04;
  PatreonEffects_EffectText_Segment_o seg;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar6;
  System_String_array *pSVar7;
  System_Collections_Generic_List_EffectText_Segment__o *__this_05;
  System_Type_o *pSVar8;
  long lVar9;
  UnityEngine_GameObject_o *__this_06;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_07;
  UnityEngine_UI_ContentSizeFitter_o *__this_08;
  UnityEngine_GameObject_o *item;
  undefined8 uVar11;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  MethodInfo *method_01;
  System_Type_array *unaff_R15;
  UnityEngine_Object_o *in_stack_fffffffffffffdf8;
  Il2CppRGCTXData *in_stack_fffffffffffffe00;
  _union_249689 in_stack_fffffffffffffe08;
  undefined1 auStack_1a8 [72];
  Il2CppType *pIStack_160;
  Il2CppType **ppIStack_158;
  Il2CppRGCTXData *pIStack_150;
  _union_249491 _Stack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  MethodInfo_322DD00 MStack_118;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  UnityEngine_Object_o *pUStack_90;
  Il2CppRGCTXData *pIStack_88;
  _union_249689 _Stack_80;
  Il2CppType *pIStack_78;
  Il2CppType **ppIStack_70;
  Il2CppRGCTXData *pIStack_68;
  _union_249491 _Stack_60;
  uint32_t uStack_58;
  uint16_t uStack_54;
  uint16_t uStack_52;
  uint16_t uStack_50;
  uint8_t uStack_4e;
  uint8_t uStack_4d;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  (__this->fields)._fontSize = value;
  if (g_data_057ad905 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectText);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EffectText_Segment_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_PatreonEffects_EffectText_Segment_Ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"EffectTextRow");
    g_data_057ad905 = '\x01';
  }
  auStack_1a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_1a8._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_1a8._16_8_ = (UnityEngine_Object_o *)0x0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  MStack_118.slot = 0;
  MStack_118.parameters_count = '\0';
  MStack_118.bitflags = '\0';
  MStack_118._84_4_ = 0;
  uStack_c0 = 0;
  MStack_118.field8_0x40.genericMethod = (void *)0x0;
  MStack_118.token = 0;
  MStack_118.flags = 0;
  MStack_118.iflags = 0;
  MStack_118.parameters = (Il2CppType **)0x0;
  MStack_118.rgctx_data = (Il2CppRGCTXData *)0x0;
  MStack_118.klass = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  MStack_118.return_type = (Il2CppType *)0x0;
  MStack_118.invoker_method = (InvokerMethod)0x0;
  MStack_118.name = (char *)0x0;
  MStack_118.methodPointer = (Il2CppMethodPointer)0x0;
  MStack_118.virtualMethodPointer = (Il2CppMethodPointer)0x0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_138._0_2_ = 0;
  uStack_138._2_1_ = '\0';
  uStack_138._3_1_ = '\0';
  uStack_138._4_4_ = 0;
  uStack_130 = 0;
  _Stack_148.genericMethod = (void *)0x0;
  uStack_140._0_4_ = 0;
  uStack_140._4_2_ = 0;
  uStack_140._6_2_ = 0;
  ppIStack_158 = (Il2CppType **)0x0;
  pIStack_150 = (Il2CppRGCTXData *)0x0;
  auStack_1a8._64_8_ = (Il2CppObject *)0x0;
  pIStack_160 = (Il2CppType *)0x0;
  auStack_1a8._48_8_ = (UnityEngine_Object_o *)0x0;
  auStack_1a8._56_8_ = (Il2CppRGCTXData *)0x0;
  pSVar3 = (__this->fields)._segments;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a0,
               (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    auStack_1a8._16_8_ = pUStack_90;
    auStack_1a8._0_8_ = auStack_a0._0_8_;
    auStack_1a8._8_8_ = auStack_a0._8_8_;
    while (__this_00.fields._8_8_ = in_stack_fffffffffffffe00,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8,
          __this_00.fields._current = in_stack_fffffffffffffe08.genericMethod,
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)auStack_1a8), uVar11 = auStack_1a8._16_8_,
          (char)bVar6 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)uVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)uVar11,(MethodInfo *)0x0);
      }
    }
    __this_01.fields._8_8_ = in_stack_fffffffffffffe00;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8;
    __this_01.fields._current = in_stack_fffffffffffffe08.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_01,(MethodInfo_321A1C0 *)auStack_1a8);
    unaff_R15 = (System_Type_array *)&MethodInfo_Boolean_MoveNext;
    pSVar3 = (__this->fields)._segments;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      bVar6 = System_String__IsNullOrEmpty((__this->fields)._text,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return;
      }
      pSVar4 = (__this->fields)._text;
      if (pSVar4 != (System_String_o *)0x0) {
        method_01 = (MethodInfo *)0xa;
        pSVar7 = System_String__Split(pSVar4,10,0,(MethodInfo *)0x0);
        if (pSVar7 != (System_String_array *)0x0) {
          if ((int)pSVar7->max_length < 1) {
            return;
          }
          pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
          auStack_1a8._40_8_ = pSVar7;
          if ((pSVar7->max_length & 0xffffffff) != 0) {
            do {
              pSVar4 = ((System_String_o **)(auStack_1a8._40_8_ + 0x20))[(long)pSVar12];
              if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_05 = PatreonEffects_EffectText__ParseLine(pSVar4,method_01);
              if (__this_05 == (System_Collections_Generic_List_EffectText_Segment__o *)0x0)
              goto label_0420df5e;
              if ((__this_05->fields)._size == 0) {
                pSVar3 = (__this->fields)._segments;
                method_01 = (MethodInfo *)PatreonEffects_EffectText__CreateSpacerRow(__this,method_01);
                lVar9 = MethodInfo_Void_Add;
                if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0420df5e;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (pSVar3->fields)._items;
                if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto label_0420df5e;
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar5->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar5->m_Items[(int)uVar2] = (UnityEngine_GameObject_o *)method_01;
                  il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)method_01,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                auStack_1a8._32_8_ = pSVar12;
                unaff_R15 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                handle.fields.value = TypeRef_RectTransform.fields.value;
                if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar8 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
                if (unaff_R15 == (System_Type_array *)0x0) goto label_0420df5e;
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((unaff_R15->obj).klass)->_1).element_class),
                   lVar9 == 0)) goto label_0420df68;
                if ((int)unaff_R15->max_length == 0) break;
                unaff_R15->m_Items[0] = pSVar8;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items);
                pSVar8 = System_Type__GetTypeFromHandle(TypeRef_HorizontalLayoutGroup,(MethodInfo *)0x0);
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((unaff_R15->obj).klass)->_1).element_class),
                   lVar9 == 0)) goto label_0420df68;
                if ((uint)unaff_R15->max_length < 2) break;
                unaff_R15->m_Items[1] = pSVar8;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items + 1);
                pSVar8 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((unaff_R15->obj).klass)->_1).element_class),
                   lVar9 == 0)) goto label_0420df68;
                if ((uint)unaff_R15->max_length < 3) break;
                unaff_R15->m_Items[2] = pSVar8;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items + 2,pSVar8);
                __this_06 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                UnityEngine_GameObject___ctor_4dfc440(__this_06,"EffectTextRow",unaff_R15,(MethodInfo *)0x0);
                if (__this_06 == (UnityEngine_GameObject_o *)0x0) goto label_0420df5e;
                pUVar10 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
                parent = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_0420df5e;
                UnityEngine_Transform__SetParent_4e09e30(pUVar10,parent,0,(MethodInfo *)0x0);
                __this_07 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                            UnityEngine_GameObject__GetComponent_object_(__this_06,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
                if (__this_07 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto label_0420df5e;
                UnityEngine_UI_LayoutGroup__set_childAlignment
                          ((UnityEngine_UI_LayoutGroup_o *)__this_07,3,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                          (__this_07,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                          (__this_07,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_07,0.0,(MethodInfo *)0x0);
                __this_08 = (UnityEngine_UI_ContentSizeFitter_o *)
                            UnityEngine_GameObject__GetComponent_object_(__this_06,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                if (__this_08 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_0420df5e;
                UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_08,2,(MethodInfo *)0x0);
                UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_08,2,(MethodInfo *)0x0);
                lVar9 = MethodInfo_Void_Add;
                pSVar3 = (__this->fields)._segments;
                if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0420df5e;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (pSVar3->fields)._items;
                if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto label_0420df5e;
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar5->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar5->m_Items[(int)uVar2] = __this_06;
                  il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,__this_06);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_06,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                System_Collections_Generic_List_EffectText_Segment___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a0,__this_05,
                           MethodInfo_List_1_T_Enumerator_PatreonEffects_EffectText_Segment_Ge);
                uStack_b8 = uStack_40;
                uStack_b0 = uStack_38;
                MStack_118.slot = uStack_50;
                MStack_118.parameters_count = uStack_4e;
                MStack_118.bitflags = uStack_4d;
                MStack_118._84_4_ = uStack_4c;
                uStack_c0 = uStack_48;
                MStack_118.field8_0x40 = _Stack_60;
                MStack_118.token = uStack_58;
                MStack_118.flags = uStack_54;
                MStack_118.iflags = uStack_52;
                MStack_118.parameters = ppIStack_70;
                MStack_118.rgctx_data = pIStack_68;
                MStack_118.klass = (System_Collections_Generic_List_Enumerator_T__c *)_Stack_80;
                MStack_118.return_type = pIStack_78;
                MStack_118.invoker_method = (InvokerMethod)pUStack_90;
                MStack_118.name = (char *)pIStack_88;
                MStack_118.methodPointer = (Il2CppMethodPointer)auStack_a0._0_8_;
                MStack_118.virtualMethodPointer = (Il2CppMethodPointer)auStack_a0._8_8_;
                unaff_R15 = (System_Type_array *)&MethodInfo_Boolean_MoveNext;
                while (__this_03.fields._8_8_ = in_stack_fffffffffffffe00,
                      __this_03.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8,
                      __this_03.fields._current = in_stack_fffffffffffffe08.genericMethod,
                      bVar6 = System_Collections_Generic_List_Enumerator_EffectText_Segment___MoveNext
                                        (__this_03,(MethodInfo_322DD10 *)&MStack_118), (char)bVar6 != '\0') {
                  uStack_128 = uStack_b8;
                  uStack_120 = uStack_b0;
                  uStack_138._0_2_ = MStack_118.slot;
                  uStack_138._2_1_ = MStack_118.parameters_count;
                  uStack_138._3_1_ = MStack_118.bitflags;
                  uStack_138._4_4_ = MStack_118._84_4_;
                  uStack_130 = uStack_c0;
                  _Stack_148 = MStack_118.field8_0x40;
                  uStack_140._0_4_ = MStack_118.token;
                  uStack_140._4_2_ = MStack_118.flags;
                  uStack_140._6_2_ = MStack_118.iflags;
                  ppIStack_158 = MStack_118.parameters;
                  pIStack_150 = MStack_118.rgctx_data;
                  auStack_1a8._64_8_ = MStack_118.klass;
                  pIStack_160 = MStack_118.return_type;
                  auStack_1a8._48_8_ = MStack_118.invoker_method;
                  auStack_1a8._56_8_ = MStack_118.name;
                  pUVar10 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
                  seg.fields.HasEffect = auStack_1a8._56_4_;
                  seg.fields.Effect = auStack_1a8._60_4_;
                  seg.fields.Content = (System_String_o *)auStack_1a8._48_8_;
                  seg.fields.ColorA.fields.hasValue = auStack_1a8._64_4_;
                  seg.fields.ColorA.fields.value.fields.r = (float)auStack_1a8._68_4_;
                  seg.fields.ColorA.fields.value.fields._4_8_ = pIStack_160;
                  seg.fields._32_8_ = ppIStack_158;
                  seg.fields.ColorB.fields.value.fields._0_8_ = pIStack_150;
                  seg.fields.ColorB.fields.value.fields._8_8_ = _Stack_148.genericMethod;
                  seg.fields.ColorC.fields._0_8_ = uStack_140;
                  seg.fields.ColorC.fields.value.fields._4_8_ = uStack_138;
                  seg.fields.ColorC.fields.value.fields.a = (float)(undefined4)uStack_130;
                  seg.fields.ColorD.fields.hasValue = uStack_130._4_4_;
                  seg.fields.ColorD.fields.value.fields.r = (float)(undefined4)uStack_128;
                  seg.fields.ColorD.fields.value.fields.g = (float)uStack_128._4_4_;
                  seg.fields.ColorD.fields.value.fields.b = (float)(undefined4)uStack_120;
                  seg.fields.ColorD.fields.value.fields.a = (float)uStack_120._4_4_;
                  in_stack_fffffffffffffdf8 = (UnityEngine_Object_o *)auStack_1a8._48_8_;
                  in_stack_fffffffffffffe00 = (Il2CppRGCTXData *)auStack_1a8._56_8_;
                  in_stack_fffffffffffffe08 = (_union_249689)auStack_1a8._64_8_;
                  item = PatreonEffects_EffectText__CreateSegmentGO(__this,pUVar10,seg,method_00);
                  lVar9 = MethodInfo_Void_Add;
                  pSVar3 = (__this->fields)._segments;
                  if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0420df5e;
                  }
                  piVar1 = &(pSVar3->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar5 = (pSVar3->fields)._items;
                  if (pUVar5 == (UnityEngine_GameObject_array *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0420df5e;
                  }
                  uVar2 = (pSVar3->fields)._size;
                  if (uVar2 < (uint)pUVar5->max_length) {
                    (pSVar3->fields)._size = uVar2 + 1;
                    pUVar5->m_Items[(int)uVar2] = item;
                    il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,item);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                }
                __this_02.fields._8_8_ = in_stack_fffffffffffffe00;
                __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8;
                __this_02.fields._current = in_stack_fffffffffffffe08.genericMethod;
                method_01 = MethodInfo_Void_Dispose;
                System_Collections_Generic_List_Enumerator_EffectText_Segment___Dispose(__this_02,&MStack_118)
                ;
                pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_1a8._32_8_;
              }
              pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)((long)&(pSVar12->_1).image + 1);
              uVar2 = (uint)*(il2cpp_array_size_t *)(auStack_1a8._40_8_ + 0x18);
              if ((long)(int)uVar2 <= (long)pSVar12) {
                return;
              }
            } while (pSVar12 < (System_Collections_Generic_List_Enumerator_T__c *)(ulong)uVar2);
          }
          goto label_0420df63;
        }
      }
    }
  }
label_0420df5e:
  il2cpp_runtime_helper_022b2c90();
label_0420df63:
  il2cpp_runtime_helper_022b2ca0();
label_0420df68:
  uVar11 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar11,0);
  __this_04.fields._8_8_ = in_stack_fffffffffffffe00;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8;
  __this_04.fields._current = in_stack_fffffffffffffe08.genericMethod;
  System_Collections_Generic_List_Enumerator_EffectText_Segment___Dispose(__this_04,&MStack_118);
  _Unwind_Resume(unaff_R15);
}


// PatreonEffects.EffectText$$get_color
// il2cpp: UnityEngine_Color_o PatreonEffects_EffectText__get_color (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x420e070

UnityEngine_Color_o
PatreonEffects_EffectText__get_color(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  return (UnityEngine_Color_o)(__this->fields)._color.fields;
}


// PatreonEffects.EffectText$$set_color
// il2cpp: void PatreonEffects_EffectText__set_color (PatreonEffects_EffectText_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
// 0x420e080

void PatreonEffects_EffectText__set_color
               (PatreonEffects_EffectText_o *__this,UnityEngine_Color_o value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_Component_o *__this_01;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar6;
  System_Object_array *pSVar7;
  UnityEngine_Object_o *pUVar8;
  long *plVar9;
  uint uVar10;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppType *pIVar13;
  UnityEngine_Object_o *pUVar14;
  undefined1 local_48 [16];
  UnityEngine_Object_o *local_38;
  
  (__this->fields)._color.fields = value.fields;
  if (g_data_057ad908 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_GetComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponentsInChildren_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad908 = '\x01';
  }
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar13 = (Il2CppType *)0x0;
  pUVar14 = (UnityEngine_Object_o *)0x0;
  __this_00 = (__this->fields)._segments;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
label_0420e289:
    auVar11 = il2cpp_runtime_helper_022b2c90();
    if (auVar11._8_4_ == 1) {
      plVar9 = (long *)__cxa_begin_catch(auVar11._0_8_);
      lVar5 = *plVar9;
      __cxa_end_catch();
      __this_04.fields._8_8_ = pIVar13;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
      __this_04.fields._current = (Il2CppObject *)pUVar14;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      if (lVar5 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar5);
    }
    __this_05.fields._8_8_ = pIVar13;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
    __this_05.fields._current = (Il2CppObject *)pUVar14;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    _Unwind_Resume(auVar11._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar13 = (Il2CppType *)local_48._8_8_;
label_0420e150:
  do {
    pUVar8 = local_38;
    __this_02.fields._8_8_ = pIVar13;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
    __this_02.fields._current = (Il2CppObject *)pUVar8;
    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
    if ((char)bVar6 == '\0') {
      __this_03.fields._8_8_ = pIVar13;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
      __this_03.fields._current = (Il2CppObject *)pUVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      return;
    }
    pUVar14 = pUVar8;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    local_38 = pUVar14;
  } while ((char)bVar6 != '\0');
  if (pUVar8 == (UnityEngine_Object_o *)0x0) goto label_0420e27f;
  pSVar7 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                     ((UnityEngine_GameObject_o *)pUVar8,MethodInfo_TextMeshProUGUI_GetComponentsInChildren_TextMeshProUGUI);
  if (pSVar7 != (System_Object_array *)0x0) goto code_r0x0420e1b8;
  goto label_0420e284;
code_r0x0420e1b8:
  iVar3 = (int)pSVar7->max_length;
  local_38 = pUVar14;
  if (0 < iVar3) {
    uVar10 = 0;
    if (iVar3 == 0) {
label_0420e27a:
      il2cpp_runtime_helper_022b2ca0();
label_0420e27f:
      il2cpp_runtime_helper_022b2c90();
label_0420e284:
      il2cpp_runtime_helper_022b2c90();
      goto label_0420e289;
    }
    while( true ) {
      __this_01 = (UnityEngine_Component_o *)pSVar7->m_Items[(int)uVar10];
      if (__this_01 == (UnityEngine_Component_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_0420e27a;
      }
      pUVar8 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(__this_01,MethodInfo_NameEffectController_GetComponent_NameEffectController);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        uVar1 = (__this->fields)._color.fields.r;
        uVar2._0_4_ = (__this->fields)._color.fields.b;
        uVar2._4_4_ = (__this->fields)._color.fields.a;
        (**(code **)&__this_01->klass[1]._2.naturalAligment)
                  (uVar1,uVar2,__this_01,__this_01->klass[1].vtable._0_Equals.methodPtr);
      }
      uVar10 = uVar10 + 1;
      uVar4 = (uint)pSVar7->max_length;
      local_38 = pUVar14;
      if ((int)uVar4 <= (int)uVar10) break;
      if (uVar4 <= uVar10) goto label_0420e27a;
    }
  }
  goto label_0420e150;
}


// PatreonEffects.EffectText$$get_font
// il2cpp: TMPro_TMP_FontAsset_o* PatreonEffects_EffectText__get_font (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x420e370

TMPro_TMP_FontAsset_o *
PatreonEffects_EffectText__get_font(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  return (__this->fields)._font;
}


// PatreonEffects.EffectText$$set_font
// il2cpp: void PatreonEffects_EffectText__set_font (PatreonEffects_EffectText_o* __this, TMPro_TMP_FontAsset_o* value, const MethodInfo* method);
// 0x420e380

void PatreonEffects_EffectText__set_font
               (PatreonEffects_EffectText_o *__this,TMPro_TMP_FontAsset_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  System_String_o *pSVar4;
  UnityEngine_GameObject_array *pUVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_T__o __this_04;
  PatreonEffects_EffectText_Segment_o seg;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar6;
  System_String_array *pSVar7;
  System_Collections_Generic_List_EffectText_Segment__o *__this_05;
  System_Type_o *pSVar8;
  long lVar9;
  UnityEngine_GameObject_o *__this_06;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_07;
  UnityEngine_UI_ContentSizeFitter_o *__this_08;
  UnityEngine_GameObject_o *item;
  undefined8 uVar11;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  MethodInfo *method_01;
  System_Type_array *unaff_R15;
  UnityEngine_Object_o *in_stack_fffffffffffffdf8;
  Il2CppRGCTXData *in_stack_fffffffffffffe00;
  _union_249689 in_stack_fffffffffffffe08;
  undefined1 auStack_1a8 [72];
  Il2CppType *pIStack_160;
  Il2CppType **ppIStack_158;
  Il2CppRGCTXData *pIStack_150;
  _union_249491 _Stack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  MethodInfo_322DD00 MStack_118;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  UnityEngine_Object_o *pUStack_90;
  Il2CppRGCTXData *pIStack_88;
  _union_249689 _Stack_80;
  Il2CppType *pIStack_78;
  Il2CppType **ppIStack_70;
  Il2CppRGCTXData *pIStack_68;
  _union_249491 _Stack_60;
  uint32_t uStack_58;
  uint16_t uStack_54;
  uint16_t uStack_52;
  uint16_t uStack_50;
  uint8_t uStack_4e;
  uint8_t uStack_4d;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  (__this->fields)._font = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._font);
  if (g_data_057ad905 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectText);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EffectText_Segment_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_PatreonEffects_EffectText_Segment_Ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"EffectTextRow");
    g_data_057ad905 = '\x01';
  }
  auStack_1a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_1a8._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_1a8._16_8_ = (UnityEngine_Object_o *)0x0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  MStack_118.slot = 0;
  MStack_118.parameters_count = '\0';
  MStack_118.bitflags = '\0';
  MStack_118._84_4_ = 0;
  uStack_c0 = 0;
  MStack_118.field8_0x40.genericMethod = (void *)0x0;
  MStack_118.token = 0;
  MStack_118.flags = 0;
  MStack_118.iflags = 0;
  MStack_118.parameters = (Il2CppType **)0x0;
  MStack_118.rgctx_data = (Il2CppRGCTXData *)0x0;
  MStack_118.klass = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  MStack_118.return_type = (Il2CppType *)0x0;
  MStack_118.invoker_method = (InvokerMethod)0x0;
  MStack_118.name = (char *)0x0;
  MStack_118.methodPointer = (Il2CppMethodPointer)0x0;
  MStack_118.virtualMethodPointer = (Il2CppMethodPointer)0x0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_138._0_2_ = 0;
  uStack_138._2_1_ = '\0';
  uStack_138._3_1_ = '\0';
  uStack_138._4_4_ = 0;
  uStack_130 = 0;
  _Stack_148.genericMethod = (void *)0x0;
  uStack_140._0_4_ = 0;
  uStack_140._4_2_ = 0;
  uStack_140._6_2_ = 0;
  ppIStack_158 = (Il2CppType **)0x0;
  pIStack_150 = (Il2CppRGCTXData *)0x0;
  auStack_1a8._64_8_ = (Il2CppObject *)0x0;
  pIStack_160 = (Il2CppType *)0x0;
  auStack_1a8._48_8_ = (UnityEngine_Object_o *)0x0;
  auStack_1a8._56_8_ = (Il2CppRGCTXData *)0x0;
  pSVar3 = (__this->fields)._segments;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a0,
               (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    auStack_1a8._16_8_ = pUStack_90;
    auStack_1a8._0_8_ = auStack_a0._0_8_;
    auStack_1a8._8_8_ = auStack_a0._8_8_;
    while (__this_00.fields._8_8_ = in_stack_fffffffffffffe00,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8,
          __this_00.fields._current = in_stack_fffffffffffffe08.genericMethod,
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)auStack_1a8), uVar11 = auStack_1a8._16_8_,
          (char)bVar6 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)uVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)uVar11,(MethodInfo *)0x0);
      }
    }
    __this_01.fields._8_8_ = in_stack_fffffffffffffe00;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8;
    __this_01.fields._current = in_stack_fffffffffffffe08.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_01,(MethodInfo_321A1C0 *)auStack_1a8);
    unaff_R15 = (System_Type_array *)&MethodInfo_Boolean_MoveNext;
    pSVar3 = (__this->fields)._segments;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      bVar6 = System_String__IsNullOrEmpty((__this->fields)._text,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return;
      }
      pSVar4 = (__this->fields)._text;
      if (pSVar4 != (System_String_o *)0x0) {
        method_01 = (MethodInfo *)0xa;
        pSVar7 = System_String__Split(pSVar4,10,0,(MethodInfo *)0x0);
        if (pSVar7 != (System_String_array *)0x0) {
          if ((int)pSVar7->max_length < 1) {
            return;
          }
          pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
          auStack_1a8._40_8_ = pSVar7;
          if ((pSVar7->max_length & 0xffffffff) != 0) {
            do {
              pSVar4 = ((System_String_o **)(auStack_1a8._40_8_ + 0x20))[(long)pSVar12];
              if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_05 = PatreonEffects_EffectText__ParseLine(pSVar4,method_01);
              if (__this_05 == (System_Collections_Generic_List_EffectText_Segment__o *)0x0)
              goto label_0420df5e;
              if ((__this_05->fields)._size == 0) {
                pSVar3 = (__this->fields)._segments;
                method_01 = (MethodInfo *)PatreonEffects_EffectText__CreateSpacerRow(__this,method_01);
                lVar9 = MethodInfo_Void_Add;
                if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0420df5e;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (pSVar3->fields)._items;
                if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto label_0420df5e;
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar5->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar5->m_Items[(int)uVar2] = (UnityEngine_GameObject_o *)method_01;
                  il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)method_01,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                auStack_1a8._32_8_ = pSVar12;
                unaff_R15 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                handle.fields.value = TypeRef_RectTransform.fields.value;
                if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar8 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
                if (unaff_R15 == (System_Type_array *)0x0) goto label_0420df5e;
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((unaff_R15->obj).klass)->_1).element_class),
                   lVar9 == 0)) goto label_0420df68;
                if ((int)unaff_R15->max_length == 0) break;
                unaff_R15->m_Items[0] = pSVar8;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items);
                pSVar8 = System_Type__GetTypeFromHandle(TypeRef_HorizontalLayoutGroup,(MethodInfo *)0x0);
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((unaff_R15->obj).klass)->_1).element_class),
                   lVar9 == 0)) goto label_0420df68;
                if ((uint)unaff_R15->max_length < 2) break;
                unaff_R15->m_Items[1] = pSVar8;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items + 1);
                pSVar8 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((unaff_R15->obj).klass)->_1).element_class),
                   lVar9 == 0)) goto label_0420df68;
                if ((uint)unaff_R15->max_length < 3) break;
                unaff_R15->m_Items[2] = pSVar8;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items + 2,pSVar8);
                __this_06 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                UnityEngine_GameObject___ctor_4dfc440(__this_06,"EffectTextRow",unaff_R15,(MethodInfo *)0x0);
                if (__this_06 == (UnityEngine_GameObject_o *)0x0) goto label_0420df5e;
                pUVar10 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
                parent = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_0420df5e;
                UnityEngine_Transform__SetParent_4e09e30(pUVar10,parent,0,(MethodInfo *)0x0);
                __this_07 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                            UnityEngine_GameObject__GetComponent_object_(__this_06,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
                if (__this_07 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto label_0420df5e;
                UnityEngine_UI_LayoutGroup__set_childAlignment
                          ((UnityEngine_UI_LayoutGroup_o *)__this_07,3,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                          (__this_07,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                          (__this_07,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_07,0.0,(MethodInfo *)0x0);
                __this_08 = (UnityEngine_UI_ContentSizeFitter_o *)
                            UnityEngine_GameObject__GetComponent_object_(__this_06,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                if (__this_08 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_0420df5e;
                UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_08,2,(MethodInfo *)0x0);
                UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_08,2,(MethodInfo *)0x0);
                lVar9 = MethodInfo_Void_Add;
                pSVar3 = (__this->fields)._segments;
                if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0420df5e;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (pSVar3->fields)._items;
                if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto label_0420df5e;
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar5->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar5->m_Items[(int)uVar2] = __this_06;
                  il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,__this_06);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_06,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                System_Collections_Generic_List_EffectText_Segment___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a0,__this_05,
                           MethodInfo_List_1_T_Enumerator_PatreonEffects_EffectText_Segment_Ge);
                uStack_b8 = uStack_40;
                uStack_b0 = uStack_38;
                MStack_118.slot = uStack_50;
                MStack_118.parameters_count = uStack_4e;
                MStack_118.bitflags = uStack_4d;
                MStack_118._84_4_ = uStack_4c;
                uStack_c0 = uStack_48;
                MStack_118.field8_0x40 = _Stack_60;
                MStack_118.token = uStack_58;
                MStack_118.flags = uStack_54;
                MStack_118.iflags = uStack_52;
                MStack_118.parameters = ppIStack_70;
                MStack_118.rgctx_data = pIStack_68;
                MStack_118.klass = (System_Collections_Generic_List_Enumerator_T__c *)_Stack_80;
                MStack_118.return_type = pIStack_78;
                MStack_118.invoker_method = (InvokerMethod)pUStack_90;
                MStack_118.name = (char *)pIStack_88;
                MStack_118.methodPointer = (Il2CppMethodPointer)auStack_a0._0_8_;
                MStack_118.virtualMethodPointer = (Il2CppMethodPointer)auStack_a0._8_8_;
                unaff_R15 = (System_Type_array *)&MethodInfo_Boolean_MoveNext;
                while (__this_03.fields._8_8_ = in_stack_fffffffffffffe00,
                      __this_03.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8,
                      __this_03.fields._current = in_stack_fffffffffffffe08.genericMethod,
                      bVar6 = System_Collections_Generic_List_Enumerator_EffectText_Segment___MoveNext
                                        (__this_03,(MethodInfo_322DD10 *)&MStack_118), (char)bVar6 != '\0') {
                  uStack_128 = uStack_b8;
                  uStack_120 = uStack_b0;
                  uStack_138._0_2_ = MStack_118.slot;
                  uStack_138._2_1_ = MStack_118.parameters_count;
                  uStack_138._3_1_ = MStack_118.bitflags;
                  uStack_138._4_4_ = MStack_118._84_4_;
                  uStack_130 = uStack_c0;
                  _Stack_148 = MStack_118.field8_0x40;
                  uStack_140._0_4_ = MStack_118.token;
                  uStack_140._4_2_ = MStack_118.flags;
                  uStack_140._6_2_ = MStack_118.iflags;
                  ppIStack_158 = MStack_118.parameters;
                  pIStack_150 = MStack_118.rgctx_data;
                  auStack_1a8._64_8_ = MStack_118.klass;
                  pIStack_160 = MStack_118.return_type;
                  auStack_1a8._48_8_ = MStack_118.invoker_method;
                  auStack_1a8._56_8_ = MStack_118.name;
                  pUVar10 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
                  seg.fields.HasEffect = auStack_1a8._56_4_;
                  seg.fields.Effect = auStack_1a8._60_4_;
                  seg.fields.Content = (System_String_o *)auStack_1a8._48_8_;
                  seg.fields.ColorA.fields.hasValue = auStack_1a8._64_4_;
                  seg.fields.ColorA.fields.value.fields.r = (float)auStack_1a8._68_4_;
                  seg.fields.ColorA.fields.value.fields._4_8_ = pIStack_160;
                  seg.fields._32_8_ = ppIStack_158;
                  seg.fields.ColorB.fields.value.fields._0_8_ = pIStack_150;
                  seg.fields.ColorB.fields.value.fields._8_8_ = _Stack_148.genericMethod;
                  seg.fields.ColorC.fields._0_8_ = uStack_140;
                  seg.fields.ColorC.fields.value.fields._4_8_ = uStack_138;
                  seg.fields.ColorC.fields.value.fields.a = (float)(undefined4)uStack_130;
                  seg.fields.ColorD.fields.hasValue = uStack_130._4_4_;
                  seg.fields.ColorD.fields.value.fields.r = (float)(undefined4)uStack_128;
                  seg.fields.ColorD.fields.value.fields.g = (float)uStack_128._4_4_;
                  seg.fields.ColorD.fields.value.fields.b = (float)(undefined4)uStack_120;
                  seg.fields.ColorD.fields.value.fields.a = (float)uStack_120._4_4_;
                  in_stack_fffffffffffffdf8 = (UnityEngine_Object_o *)auStack_1a8._48_8_;
                  in_stack_fffffffffffffe00 = (Il2CppRGCTXData *)auStack_1a8._56_8_;
                  in_stack_fffffffffffffe08 = (_union_249689)auStack_1a8._64_8_;
                  item = PatreonEffects_EffectText__CreateSegmentGO(__this,pUVar10,seg,method_00);
                  lVar9 = MethodInfo_Void_Add;
                  pSVar3 = (__this->fields)._segments;
                  if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0420df5e;
                  }
                  piVar1 = &(pSVar3->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar5 = (pSVar3->fields)._items;
                  if (pUVar5 == (UnityEngine_GameObject_array *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0420df5e;
                  }
                  uVar2 = (pSVar3->fields)._size;
                  if (uVar2 < (uint)pUVar5->max_length) {
                    (pSVar3->fields)._size = uVar2 + 1;
                    pUVar5->m_Items[(int)uVar2] = item;
                    il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,item);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                }
                __this_02.fields._8_8_ = in_stack_fffffffffffffe00;
                __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8;
                __this_02.fields._current = in_stack_fffffffffffffe08.genericMethod;
                method_01 = MethodInfo_Void_Dispose;
                System_Collections_Generic_List_Enumerator_EffectText_Segment___Dispose(__this_02,&MStack_118)
                ;
                pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_1a8._32_8_;
              }
              pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)((long)&(pSVar12->_1).image + 1);
              uVar2 = (uint)*(il2cpp_array_size_t *)(auStack_1a8._40_8_ + 0x18);
              if ((long)(int)uVar2 <= (long)pSVar12) {
                return;
              }
            } while (pSVar12 < (System_Collections_Generic_List_Enumerator_T__c *)(ulong)uVar2);
          }
          goto label_0420df63;
        }
      }
    }
  }
label_0420df5e:
  il2cpp_runtime_helper_022b2c90();
label_0420df63:
  il2cpp_runtime_helper_022b2ca0();
label_0420df68:
  uVar11 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar11,0);
  __this_04.fields._8_8_ = in_stack_fffffffffffffe00;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8;
  __this_04.fields._current = in_stack_fffffffffffffe08.genericMethod;
  System_Collections_Generic_List_Enumerator_EffectText_Segment___Dispose(__this_04,&MStack_118);
  _Unwind_Resume(unaff_R15);
}


// PatreonEffects.EffectText$$get_alignment
// il2cpp: int32_t PatreonEffects_EffectText__get_alignment (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x420e3a0

int32_t PatreonEffects_EffectText__get_alignment(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  return (__this->fields)._alignment;
}


// PatreonEffects.EffectText$$set_alignment
// il2cpp: void PatreonEffects_EffectText__set_alignment (PatreonEffects_EffectText_o* __this, int32_t value, const MethodInfo* method);
// 0x420e3b0

void PatreonEffects_EffectText__set_alignment
               (PatreonEffects_EffectText_o *__this,int32_t value,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  uint uVar3;
  System_Object_array *pSVar4;
  long *plVar5;
  uint uVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  UnityEngine_Object_o *pUVar10;
  UnityEngine_Object_o *x;
  undefined1 local_48 [16];
  UnityEngine_Object_o *local_38;
  
  (__this->fields)._alignment = value;
  if (g_data_057ad909 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponentsInChildren_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad909 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar9 = (Il2CppType *)0x0;
  pUVar10 = (UnityEngine_Object_o *)0x0;
  __this_00 = (__this->fields)._segments;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar9 = (Il2CppType *)local_48._8_8_;
    while( true ) {
      do {
        x = local_38;
        __this_01.fields._8_8_ = pIVar9;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
        __this_01.fields._current = (Il2CppObject *)x;
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
        if ((char)bVar2 == '\0') {
          __this_02.fields._8_8_ = pIVar9;
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
          __this_02.fields._current = (Il2CppObject *)x;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
          return;
        }
        pUVar10 = x;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        local_38 = pUVar10;
      } while ((char)bVar2 != '\0');
      if (x == (UnityEngine_Object_o *)0x0) break;
      pSVar4 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)x,MethodInfo_TextMeshProUGUI_GetComponentsInChildren_TextMeshProUGUI);
      if (pSVar4 == (System_Object_array *)0x0) goto label_0420e53b;
      uVar3 = (uint)pSVar4->max_length;
      local_38 = pUVar10;
      if (0 < (int)uVar3) {
        uVar6 = 0;
        do {
          if (uVar3 <= uVar6) {
label_0420e531:
            il2cpp_runtime_helper_022b2ca0();
            goto label_0420e536;
          }
          if ((TMPro_TMP_Text_o *)pSVar4->m_Items[(int)uVar6] == (TMPro_TMP_Text_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_0420e531;
          }
          TMPro_TMP_Text__set_alignment
                    ((TMPro_TMP_Text_o *)pSVar4->m_Items[(int)uVar6],(__this->fields)._alignment,
                     (MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
          uVar3 = (uint)pSVar4->max_length;
          local_38 = pUVar10;
        } while ((int)uVar6 < (int)uVar3);
      }
    }
label_0420e536:
    il2cpp_runtime_helper_022b2c90();
label_0420e53b:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar9;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
    __this_03.fields._current = (Il2CppObject *)pUVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar9;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
  __this_04.fields._current = (Il2CppObject *)pUVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar7._0_8_);
}


// PatreonEffects.EffectText$$get_richText
// il2cpp: bool PatreonEffects_EffectText__get_richText (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x420e610

bool_conflict PatreonEffects_EffectText__get_richText(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._richText);
}


// PatreonEffects.EffectText$$set_richText
// il2cpp: void PatreonEffects_EffectText__set_richText (PatreonEffects_EffectText_o* __this, bool value, const MethodInfo* method);
// 0x420e620

void PatreonEffects_EffectText__set_richText
               (PatreonEffects_EffectText_o *__this,bool_conflict value,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  System_String_o *pSVar4;
  UnityEngine_GameObject_array *pUVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_T__o __this_04;
  PatreonEffects_EffectText_Segment_o seg;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar6;
  System_String_array *pSVar7;
  System_Collections_Generic_List_EffectText_Segment__o *__this_05;
  System_Type_o *pSVar8;
  long lVar9;
  UnityEngine_GameObject_o *__this_06;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_07;
  UnityEngine_UI_ContentSizeFitter_o *__this_08;
  UnityEngine_GameObject_o *item;
  undefined8 uVar11;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  MethodInfo *method_01;
  System_Type_array *unaff_R15;
  UnityEngine_Object_o *in_stack_fffffffffffffdf8;
  Il2CppRGCTXData *in_stack_fffffffffffffe00;
  _union_249689 in_stack_fffffffffffffe08;
  undefined1 auStack_1a8 [72];
  Il2CppType *pIStack_160;
  Il2CppType **ppIStack_158;
  Il2CppRGCTXData *pIStack_150;
  _union_249491 _Stack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  MethodInfo_322DD00 MStack_118;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  UnityEngine_Object_o *pUStack_90;
  Il2CppRGCTXData *pIStack_88;
  _union_249689 _Stack_80;
  Il2CppType *pIStack_78;
  Il2CppType **ppIStack_70;
  Il2CppRGCTXData *pIStack_68;
  _union_249491 _Stack_60;
  uint32_t uStack_58;
  uint16_t uStack_54;
  uint16_t uStack_52;
  uint16_t uStack_50;
  uint8_t uStack_4e;
  uint8_t uStack_4d;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *(char *)&(__this->fields)._richText = (char)value;
  if (g_data_057ad905 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectText);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EffectText_Segment_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_PatreonEffects_EffectText_Segment_Ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"EffectTextRow");
    g_data_057ad905 = '\x01';
  }
  auStack_1a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_1a8._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_1a8._16_8_ = (UnityEngine_Object_o *)0x0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  MStack_118.slot = 0;
  MStack_118.parameters_count = '\0';
  MStack_118.bitflags = '\0';
  MStack_118._84_4_ = 0;
  uStack_c0 = 0;
  MStack_118.field8_0x40.genericMethod = (void *)0x0;
  MStack_118.token = 0;
  MStack_118.flags = 0;
  MStack_118.iflags = 0;
  MStack_118.parameters = (Il2CppType **)0x0;
  MStack_118.rgctx_data = (Il2CppRGCTXData *)0x0;
  MStack_118.klass = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  MStack_118.return_type = (Il2CppType *)0x0;
  MStack_118.invoker_method = (InvokerMethod)0x0;
  MStack_118.name = (char *)0x0;
  MStack_118.methodPointer = (Il2CppMethodPointer)0x0;
  MStack_118.virtualMethodPointer = (Il2CppMethodPointer)0x0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_138._0_2_ = 0;
  uStack_138._2_1_ = '\0';
  uStack_138._3_1_ = '\0';
  uStack_138._4_4_ = 0;
  uStack_130 = 0;
  _Stack_148.genericMethod = (void *)0x0;
  uStack_140._0_4_ = 0;
  uStack_140._4_2_ = 0;
  uStack_140._6_2_ = 0;
  ppIStack_158 = (Il2CppType **)0x0;
  pIStack_150 = (Il2CppRGCTXData *)0x0;
  auStack_1a8._64_8_ = (Il2CppObject *)0x0;
  pIStack_160 = (Il2CppType *)0x0;
  auStack_1a8._48_8_ = (UnityEngine_Object_o *)0x0;
  auStack_1a8._56_8_ = (Il2CppRGCTXData *)0x0;
  pSVar3 = (__this->fields)._segments;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a0,
               (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    auStack_1a8._16_8_ = pUStack_90;
    auStack_1a8._0_8_ = auStack_a0._0_8_;
    auStack_1a8._8_8_ = auStack_a0._8_8_;
    while (__this_00.fields._8_8_ = in_stack_fffffffffffffe00,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8,
          __this_00.fields._current = in_stack_fffffffffffffe08.genericMethod,
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)auStack_1a8), uVar11 = auStack_1a8._16_8_,
          (char)bVar6 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)uVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)uVar11,(MethodInfo *)0x0);
      }
    }
    __this_01.fields._8_8_ = in_stack_fffffffffffffe00;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8;
    __this_01.fields._current = in_stack_fffffffffffffe08.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_01,(MethodInfo_321A1C0 *)auStack_1a8);
    unaff_R15 = (System_Type_array *)&MethodInfo_Boolean_MoveNext;
    pSVar3 = (__this->fields)._segments;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      bVar6 = System_String__IsNullOrEmpty((__this->fields)._text,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return;
      }
      pSVar4 = (__this->fields)._text;
      if (pSVar4 != (System_String_o *)0x0) {
        method_01 = (MethodInfo *)0xa;
        pSVar7 = System_String__Split(pSVar4,10,0,(MethodInfo *)0x0);
        if (pSVar7 != (System_String_array *)0x0) {
          if ((int)pSVar7->max_length < 1) {
            return;
          }
          pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
          auStack_1a8._40_8_ = pSVar7;
          if ((pSVar7->max_length & 0xffffffff) != 0) {
            do {
              pSVar4 = ((System_String_o **)(auStack_1a8._40_8_ + 0x20))[(long)pSVar12];
              if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_05 = PatreonEffects_EffectText__ParseLine(pSVar4,method_01);
              if (__this_05 == (System_Collections_Generic_List_EffectText_Segment__o *)0x0)
              goto label_0420df5e;
              if ((__this_05->fields)._size == 0) {
                pSVar3 = (__this->fields)._segments;
                method_01 = (MethodInfo *)PatreonEffects_EffectText__CreateSpacerRow(__this,method_01);
                lVar9 = MethodInfo_Void_Add;
                if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0420df5e;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (pSVar3->fields)._items;
                if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto label_0420df5e;
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar5->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar5->m_Items[(int)uVar2] = (UnityEngine_GameObject_o *)method_01;
                  il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)method_01,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                auStack_1a8._32_8_ = pSVar12;
                unaff_R15 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                handle.fields.value = TypeRef_RectTransform.fields.value;
                if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar8 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
                if (unaff_R15 == (System_Type_array *)0x0) goto label_0420df5e;
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((unaff_R15->obj).klass)->_1).element_class),
                   lVar9 == 0)) goto label_0420df68;
                if ((int)unaff_R15->max_length == 0) break;
                unaff_R15->m_Items[0] = pSVar8;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items);
                pSVar8 = System_Type__GetTypeFromHandle(TypeRef_HorizontalLayoutGroup,(MethodInfo *)0x0);
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((unaff_R15->obj).klass)->_1).element_class),
                   lVar9 == 0)) goto label_0420df68;
                if ((uint)unaff_R15->max_length < 2) break;
                unaff_R15->m_Items[1] = pSVar8;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items + 1);
                pSVar8 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((unaff_R15->obj).klass)->_1).element_class),
                   lVar9 == 0)) goto label_0420df68;
                if ((uint)unaff_R15->max_length < 3) break;
                unaff_R15->m_Items[2] = pSVar8;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items + 2,pSVar8);
                __this_06 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                UnityEngine_GameObject___ctor_4dfc440(__this_06,"EffectTextRow",unaff_R15,(MethodInfo *)0x0);
                if (__this_06 == (UnityEngine_GameObject_o *)0x0) goto label_0420df5e;
                pUVar10 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
                parent = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_0420df5e;
                UnityEngine_Transform__SetParent_4e09e30(pUVar10,parent,0,(MethodInfo *)0x0);
                __this_07 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                            UnityEngine_GameObject__GetComponent_object_(__this_06,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
                if (__this_07 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto label_0420df5e;
                UnityEngine_UI_LayoutGroup__set_childAlignment
                          ((UnityEngine_UI_LayoutGroup_o *)__this_07,3,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                          (__this_07,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                          (__this_07,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_07,0.0,(MethodInfo *)0x0);
                __this_08 = (UnityEngine_UI_ContentSizeFitter_o *)
                            UnityEngine_GameObject__GetComponent_object_(__this_06,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                if (__this_08 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_0420df5e;
                UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_08,2,(MethodInfo *)0x0);
                UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_08,2,(MethodInfo *)0x0);
                lVar9 = MethodInfo_Void_Add;
                pSVar3 = (__this->fields)._segments;
                if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0420df5e;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (pSVar3->fields)._items;
                if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto label_0420df5e;
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar5->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar5->m_Items[(int)uVar2] = __this_06;
                  il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,__this_06);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_06,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                System_Collections_Generic_List_EffectText_Segment___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a0,__this_05,
                           MethodInfo_List_1_T_Enumerator_PatreonEffects_EffectText_Segment_Ge);
                uStack_b8 = uStack_40;
                uStack_b0 = uStack_38;
                MStack_118.slot = uStack_50;
                MStack_118.parameters_count = uStack_4e;
                MStack_118.bitflags = uStack_4d;
                MStack_118._84_4_ = uStack_4c;
                uStack_c0 = uStack_48;
                MStack_118.field8_0x40 = _Stack_60;
                MStack_118.token = uStack_58;
                MStack_118.flags = uStack_54;
                MStack_118.iflags = uStack_52;
                MStack_118.parameters = ppIStack_70;
                MStack_118.rgctx_data = pIStack_68;
                MStack_118.klass = (System_Collections_Generic_List_Enumerator_T__c *)_Stack_80;
                MStack_118.return_type = pIStack_78;
                MStack_118.invoker_method = (InvokerMethod)pUStack_90;
                MStack_118.name = (char *)pIStack_88;
                MStack_118.methodPointer = (Il2CppMethodPointer)auStack_a0._0_8_;
                MStack_118.virtualMethodPointer = (Il2CppMethodPointer)auStack_a0._8_8_;
                unaff_R15 = (System_Type_array *)&MethodInfo_Boolean_MoveNext;
                while (__this_03.fields._8_8_ = in_stack_fffffffffffffe00,
                      __this_03.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8,
                      __this_03.fields._current = in_stack_fffffffffffffe08.genericMethod,
                      bVar6 = System_Collections_Generic_List_Enumerator_EffectText_Segment___MoveNext
                                        (__this_03,(MethodInfo_322DD10 *)&MStack_118), (char)bVar6 != '\0') {
                  uStack_128 = uStack_b8;
                  uStack_120 = uStack_b0;
                  uStack_138._0_2_ = MStack_118.slot;
                  uStack_138._2_1_ = MStack_118.parameters_count;
                  uStack_138._3_1_ = MStack_118.bitflags;
                  uStack_138._4_4_ = MStack_118._84_4_;
                  uStack_130 = uStack_c0;
                  _Stack_148 = MStack_118.field8_0x40;
                  uStack_140._0_4_ = MStack_118.token;
                  uStack_140._4_2_ = MStack_118.flags;
                  uStack_140._6_2_ = MStack_118.iflags;
                  ppIStack_158 = MStack_118.parameters;
                  pIStack_150 = MStack_118.rgctx_data;
                  auStack_1a8._64_8_ = MStack_118.klass;
                  pIStack_160 = MStack_118.return_type;
                  auStack_1a8._48_8_ = MStack_118.invoker_method;
                  auStack_1a8._56_8_ = MStack_118.name;
                  pUVar10 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
                  seg.fields.HasEffect = auStack_1a8._56_4_;
                  seg.fields.Effect = auStack_1a8._60_4_;
                  seg.fields.Content = (System_String_o *)auStack_1a8._48_8_;
                  seg.fields.ColorA.fields.hasValue = auStack_1a8._64_4_;
                  seg.fields.ColorA.fields.value.fields.r = (float)auStack_1a8._68_4_;
                  seg.fields.ColorA.fields.value.fields._4_8_ = pIStack_160;
                  seg.fields._32_8_ = ppIStack_158;
                  seg.fields.ColorB.fields.value.fields._0_8_ = pIStack_150;
                  seg.fields.ColorB.fields.value.fields._8_8_ = _Stack_148.genericMethod;
                  seg.fields.ColorC.fields._0_8_ = uStack_140;
                  seg.fields.ColorC.fields.value.fields._4_8_ = uStack_138;
                  seg.fields.ColorC.fields.value.fields.a = (float)(undefined4)uStack_130;
                  seg.fields.ColorD.fields.hasValue = uStack_130._4_4_;
                  seg.fields.ColorD.fields.value.fields.r = (float)(undefined4)uStack_128;
                  seg.fields.ColorD.fields.value.fields.g = (float)uStack_128._4_4_;
                  seg.fields.ColorD.fields.value.fields.b = (float)(undefined4)uStack_120;
                  seg.fields.ColorD.fields.value.fields.a = (float)uStack_120._4_4_;
                  in_stack_fffffffffffffdf8 = (UnityEngine_Object_o *)auStack_1a8._48_8_;
                  in_stack_fffffffffffffe00 = (Il2CppRGCTXData *)auStack_1a8._56_8_;
                  in_stack_fffffffffffffe08 = (_union_249689)auStack_1a8._64_8_;
                  item = PatreonEffects_EffectText__CreateSegmentGO(__this,pUVar10,seg,method_00);
                  lVar9 = MethodInfo_Void_Add;
                  pSVar3 = (__this->fields)._segments;
                  if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0420df5e;
                  }
                  piVar1 = &(pSVar3->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar5 = (pSVar3->fields)._items;
                  if (pUVar5 == (UnityEngine_GameObject_array *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0420df5e;
                  }
                  uVar2 = (pSVar3->fields)._size;
                  if (uVar2 < (uint)pUVar5->max_length) {
                    (pSVar3->fields)._size = uVar2 + 1;
                    pUVar5->m_Items[(int)uVar2] = item;
                    il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,item);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                }
                __this_02.fields._8_8_ = in_stack_fffffffffffffe00;
                __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8;
                __this_02.fields._current = in_stack_fffffffffffffe08.genericMethod;
                method_01 = MethodInfo_Void_Dispose;
                System_Collections_Generic_List_Enumerator_EffectText_Segment___Dispose(__this_02,&MStack_118)
                ;
                pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_1a8._32_8_;
              }
              pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)((long)&(pSVar12->_1).image + 1);
              uVar2 = (uint)*(il2cpp_array_size_t *)(auStack_1a8._40_8_ + 0x18);
              if ((long)(int)uVar2 <= (long)pSVar12) {
                return;
              }
            } while (pSVar12 < (System_Collections_Generic_List_Enumerator_T__c *)(ulong)uVar2);
          }
          goto label_0420df63;
        }
      }
    }
  }
label_0420df5e:
  il2cpp_runtime_helper_022b2c90();
label_0420df63:
  il2cpp_runtime_helper_022b2ca0();
label_0420df68:
  uVar11 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar11,0);
  __this_04.fields._8_8_ = in_stack_fffffffffffffe00;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8;
  __this_04.fields._current = in_stack_fffffffffffffe08.genericMethod;
  System_Collections_Generic_List_Enumerator_EffectText_Segment___Dispose(__this_04,&MStack_118);
  _Unwind_Resume(unaff_R15);
}


// PatreonEffects.EffectText$$Compose
// il2cpp: System_String_o* PatreonEffects_EffectText__Compose (System_String_o* content, int32_t effect, UnityEngine_Color_o colorA, UnityEngine_Color_o colorB, UnityEngine_Color_o colorC, UnityEngine_Color_o colorD, const MethodInfo* method);
// 0x420e630

System_String_o *
PatreonEffects_EffectText__Compose
          (System_String_o *content,int32_t effect,UnityEngine_Color_o colorA,UnityEngine_Color_o colorB,
          UnityEngine_Color_o colorC,UnityEngine_Color_o colorD,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Color_o *pUVar2;
  float *pfVar3;
  PatreonEffects_EffectText_Segment_Fields *pPVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  System_Collections_IEnumerator_c *pSVar10;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  PatreonEffects_EffectText_Segment_array *pPVar12;
  System_Text_RegularExpressions_Regex_o *__this;
  PatreonEffects_EffectText_Segment_o item;
  PatreonEffects_EffectText_Segment_o item_00;
  PatreonEffects_EffectText_Segment_o item_01;
  System_Nullable_Color__o *pSVar13;
  int32_t iVar14;
  uint3 uVar15;
  System_String_o *pSVar16;
  undefined8 uVar17;
  System_String_o *pSVar18;
  ulong uVar19;
  ulong uVar20;
  char cVar21;
  bool_conflict bVar22;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar23;
  System_Text_StringBuilder_o *pSVar24;
  System_Text_StringBuilder_o *__this_01;
  System_Text_RegularExpressions_MatchCollection_o *pSVar25;
  Il2CppMethodPointer *ppIVar26;
  long *plVar27;
  System_Text_RegularExpressions_GroupCollection_o *pSVar28;
  System_Text_RegularExpressions_Group_o *pSVar29;
  System_Collections_IEnumerator_o *pSVar30;
  undefined8 *puVar31;
  int iVar32;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar33;
  System_Text_StringBuilder_o *unaff_RBX;
  System_Text_StringBuilder_o *input;
  long lVar34;
  long lVar35;
  System_String_o *unaff_R13;
  undefined1 auVar36 [12];
  int iStack_320;
  int32_t iStack_31c;
  System_Collections_IEnumerator_o *pSStack_318;
  long *plStack_310;
  System_Collections_Generic_List_EffectText_Segment__o *pSStack_308;
  undefined8 uStack_300;
  float fStack_2f8;
  undefined1 uStack_2f4;
  undefined2 uStack_2f3;
  undefined1 uStack_2f1;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  float fStack_298;
  undefined1 uStack_294;
  undefined2 uStack_293;
  undefined1 uStack_291;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  float fStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  float fStack_210;
  float fStack_20c;
  System_String_o *pSStack_208;
  undefined8 uStack_200;
  float fStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  float fStack_1e4;
  System_String_o *pSStack_1e0;
  undefined8 uStack_1d8;
  float fStack_1d0;
  System_String_o *pSStack_1c0;
  undefined8 uStack_1b8;
  float fStack_1b0;
  System_String_o *pSStack_1a0;
  undefined8 uStack_198;
  float fStack_190;
  System_String_o *pSStack_180;
  undefined8 uStack_178;
  float fStack_170;
  System_Text_StringBuilder_o *pSStack_160;
  System_String_o *pSStack_158;
  System_String_o *pSStack_150;
  undefined1 uStack_148;
  undefined4 uStack_147;
  undefined2 uStack_143;
  undefined1 uStack_141;
  System_String_o *pSStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  System_String_o *pSStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  System_Text_StringBuilder_o *pSStack_e8;
  float local_b8;
  float fStack_b4;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  System_Text_StringBuilder_c *local_38;
  void *local_30;
  int32_t local_28;
  
  if (g_data_057ad902 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"</fx>");
    il2cpp_runtime_helper_023445d0(&"<fx effect=\"");
    il2cpp_runtime_helper_023445d0(&" d=\"#");
    il2cpp_runtime_helper_023445d0(&" b=\"#");
    il2cpp_runtime_helper_023445d0(&" c=\"#");
    il2cpp_runtime_helper_023445d0(&" a=\"#");
    g_data_057ad902 = '\x01';
  }
  if ((effect == 0) ||
     (bVar22 = System_String__IsNullOrEmpty(content,(MethodInfo *)0x0), (char)bVar22 != '\0')) {
    if (content == (System_String_o *)0x0) {
      content = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    return content;
  }
  __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  input = __this_00;
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    unaff_RBX = System_Text_StringBuilder__Append_3b03f90(__this_00,"<fx effect=\"",(MethodInfo *)0x0);
    local_38 = TypeInfo_NameEffectType;
    local_30 = (void *)0xffffffffffffffff;
    input = (System_Text_StringBuilder_o *)&local_38;
    local_28 = effect;
    pSVar23 = System_Enum__ToString((System_Enum_o *)input,(MethodInfo *)0x0);
    if ((unaff_RBX != (System_Text_StringBuilder_o *)0x0) &&
       (input = unaff_RBX,
       pSVar24 = System_Text_StringBuilder__Append_3b03f90(unaff_RBX,pSVar23,(MethodInfo *)0x0),
       pSVar24 != (System_Text_StringBuilder_o *)0x0)) {
      System_Text_StringBuilder__Append_3b048f0(pSVar24,0x22,(MethodInfo *)0x0);
      local_b8 = colorA.fields.r;
      fStack_b4 = colorA.fields.g;
      local_a8 = colorA.fields.b;
      fStack_a4 = colorA.fields.a;
      if (9.9999994e-11 <=
          fStack_a4 * fStack_a4 + fStack_b4 * fStack_b4 + local_b8 * local_b8 + local_a8 * local_a8) {
        unaff_RBX = System_Text_StringBuilder__Append_3b03f90(__this_00," a=\"#",(MethodInfo *)0x0);
        input = (System_Text_StringBuilder_o *)0x0;
        pSVar23 = UnityEngine_ColorUtility__ToHtmlStringRGB(colorA,(MethodInfo *)0x0);
        if ((unaff_RBX == (System_Text_StringBuilder_o *)0x0) ||
           (input = unaff_RBX,
           pSVar24 = System_Text_StringBuilder__Append_3b03f90(unaff_RBX,pSVar23,(MethodInfo *)0x0),
           pSVar24 == (System_Text_StringBuilder_o *)0x0)) goto label_0420ea4a;
        System_Text_StringBuilder__Append_3b048f0(pSVar24,0x22,(MethodInfo *)0x0);
      }
      local_98 = colorB.fields.r;
      fStack_94 = colorB.fields.g;
      local_88 = colorB.fields.b;
      fStack_84 = colorB.fields.a;
      if (9.9999994e-11 <=
          fStack_84 * fStack_84 + fStack_94 * fStack_94 + local_98 * local_98 + local_88 * local_88) {
        unaff_RBX = System_Text_StringBuilder__Append_3b03f90(__this_00," b=\"#",(MethodInfo *)0x0);
        input = (System_Text_StringBuilder_o *)0x0;
        pSVar23 = UnityEngine_ColorUtility__ToHtmlStringRGB(colorB,(MethodInfo *)0x0);
        if ((unaff_RBX == (System_Text_StringBuilder_o *)0x0) ||
           (input = unaff_RBX,
           pSVar24 = System_Text_StringBuilder__Append_3b03f90(unaff_RBX,pSVar23,(MethodInfo *)0x0),
           pSVar24 == (System_Text_StringBuilder_o *)0x0)) goto label_0420ea4a;
        System_Text_StringBuilder__Append_3b048f0(pSVar24,0x22,(MethodInfo *)0x0);
      }
      local_78 = colorC.fields.r;
      fStack_74 = colorC.fields.g;
      local_68 = colorC.fields.b;
      fStack_64 = colorC.fields.a;
      if (9.9999994e-11 <=
          fStack_64 * fStack_64 + fStack_74 * fStack_74 + local_78 * local_78 + local_68 * local_68) {
        unaff_RBX = System_Text_StringBuilder__Append_3b03f90(__this_00," c=\"#",(MethodInfo *)0x0);
        input = (System_Text_StringBuilder_o *)0x0;
        pSVar23 = UnityEngine_ColorUtility__ToHtmlStringRGB(colorC,(MethodInfo *)0x0);
        if ((unaff_RBX == (System_Text_StringBuilder_o *)0x0) ||
           (input = unaff_RBX,
           pSVar24 = System_Text_StringBuilder__Append_3b03f90(unaff_RBX,pSVar23,(MethodInfo *)0x0),
           pSVar24 == (System_Text_StringBuilder_o *)0x0)) goto label_0420ea4a;
        System_Text_StringBuilder__Append_3b048f0(pSVar24,0x22,(MethodInfo *)0x0);
      }
      local_58 = colorD.fields.r;
      fStack_54 = colorD.fields.g;
      local_48 = colorD.fields.b;
      fStack_44 = colorD.fields.a;
      if (9.9999994e-11 <=
          fStack_44 * fStack_44 + fStack_54 * fStack_54 + local_58 * local_58 + local_48 * local_48) {
        unaff_RBX = System_Text_StringBuilder__Append_3b03f90(__this_00," d=\"#",(MethodInfo *)0x0);
        input = (System_Text_StringBuilder_o *)0x0;
        pSVar23 = UnityEngine_ColorUtility__ToHtmlStringRGB(colorD,(MethodInfo *)0x0);
        if ((unaff_RBX == (System_Text_StringBuilder_o *)0x0) ||
           (input = unaff_RBX,
           pSVar24 = System_Text_StringBuilder__Append_3b03f90(unaff_RBX,pSVar23,(MethodInfo *)0x0),
           pSVar24 == (System_Text_StringBuilder_o *)0x0)) goto label_0420ea4a;
        System_Text_StringBuilder__Append_3b048f0(pSVar24,0x22,(MethodInfo *)0x0);
      }
      input = __this_00;
      pSVar24 = System_Text_StringBuilder__Append_3b048f0(__this_00,0x3e,(MethodInfo *)0x0);
      if ((pSVar24 != (System_Text_StringBuilder_o *)0x0) &&
         (__this_01 = System_Text_StringBuilder__Append_3b03f90(pSVar24,content,(MethodInfo *)0x0),
         input = pSVar24, __this_01 != (System_Text_StringBuilder_o *)0x0)) {
        System_Text_StringBuilder__Append_3b03f90(__this_01,"</fx>",(MethodInfo *)0x0);
        pSVar23 = (System_String_o *)
                  (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        return pSVar23;
      }
    }
  }
label_0420ea4a:
  il2cpp_runtime_helper_022b2c90();
  pSStack_e8 = unaff_RBX;
  if (g_data_057ad903 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectText);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_PatreonEffects_EffectText_Segment);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Segment);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
    il2cpp_runtime_helper_023445d0(&"val");
    il2cpp_runtime_helper_023445d0(&"a");
    il2cpp_runtime_helper_023445d0(&"effect");
    il2cpp_runtime_helper_023445d0(&"b");
    il2cpp_runtime_helper_023445d0(&"c");
    il2cpp_runtime_helper_023445d0(&"attrs");
    il2cpp_runtime_helper_023445d0(&"d");
    il2cpp_runtime_helper_023445d0(&"content");
    il2cpp_runtime_helper_023445d0(&"key");
    g_data_057ad903 = '\x01';
  }
  iStack_31c = 0;
  pSStack_180 = (System_String_o *)0x0;
  uStack_178 = 0;
  fStack_170 = 0.0;
  pSStack_1a0 = (System_String_o *)0x0;
  uStack_198 = 0;
  fStack_190 = 0.0;
  pSStack_1c0 = (System_String_o *)0x0;
  uStack_1b8 = 0;
  fStack_1b0 = 0.0;
  pSStack_1e0 = (System_String_o *)0x0;
  uStack_1d8 = 0;
  fStack_1d0 = 0.0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  fStack_1e4 = 0.0;
  uStack_200 = 0;
  fStack_1f8 = 0.0;
  uStack_1f4 = 0;
  fStack_210 = 0.0;
  fStack_20c = 0.0;
  pSStack_208 = (System_String_o *)0x0;
  fStack_220 = 0.0;
  uStack_21c = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  uStack_230 = (System_String_o *)0x0;
  uStack_228 = 0;
  uStack_240 = (System_String_o *)0x0;
  uStack_238 = 0;
  pSStack_308 = (System_Collections_Generic_List_EffectText_Segment__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Segment);
  System_Collections_Generic_List_EffectText_Segment____ctor(pSStack_308,MethodInfo_List_1_PatreonEffects_EffectText_Segment);
  if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar20 = uStack_238;
  if (((System_Text_RegularExpressions_Regex_o *)**(undefined8 **)(TypeInfo_EffectText + 0xb8) !=
       (System_Text_RegularExpressions_Regex_o *)0x0) &&
     (pSVar25 = System_Text_RegularExpressions_Regex__Matches_4906660
                          ((System_Text_RegularExpressions_Regex_o *)**(undefined8 **)(TypeInfo_EffectText + 0xb8),
                           (System_String_o *)input,(MethodInfo *)0x0), uVar20 = uStack_238,
     pSVar25 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
    pSStack_160 = input;
    pSStack_318 = System_Text_RegularExpressions_MatchCollection__GetEnumerator(pSVar25,(MethodInfo *)0x0);
    if (pSStack_318 == (System_Collections_IEnumerator_o *)0x0) goto label_0420ff5b;
    iStack_320 = 0;
label_0420ece0:
    pSVar10 = pSStack_318->klass;
    uVar5._0_1_ = (pSVar10->_2).rank;
    uVar5._1_1_ = (pSVar10->_2).minimumAlignment;
    if ((ulong)uVar5 != 0) {
      pIVar11 = (pSVar10->_1).interfaceOffsets;
      lVar34 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar34) == TypeInfo_IEnumerator) {
          ppIVar26 = &pSVar10->vtable[*(int *)((long)&pIVar11->offset + lVar34)].methodPtr;
          goto label_0420ed43;
        }
        lVar34 = lVar34 + 0x10;
      } while ((ulong)uVar5 << 4 != lVar34);
    }
    ppIVar26 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_318,TypeInfo_IEnumerator,0);
label_0420ed43:
    cVar21 = (**ppIVar26)(pSStack_318,(MethodInfo *)ppIVar26[1]);
    if (cVar21 == '\0') {
      iVar32 = 0xd;
      content = (System_String_o *)0x0;
      goto label_0420faf9;
    }
    pSVar10 = pSStack_318->klass;
    uVar6._0_1_ = (pSVar10->_2).rank;
    uVar6._1_1_ = (pSVar10->_2).minimumAlignment;
    if ((ulong)uVar6 != 0) {
      pIVar11 = (pSVar10->_1).interfaceOffsets;
      lVar34 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar34) == TypeInfo_IEnumerator) {
          ppIVar26 = &pSVar10->vtable[*(int *)((long)&pIVar11->offset + lVar34) + 1].methodPtr;
          goto label_0420edc8;
        }
        lVar34 = lVar34 + 0x10;
      } while ((ulong)uVar6 << 4 != lVar34);
    }
    ppIVar26 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_318,TypeInfo_IEnumerator,1);
label_0420edc8:
    plVar27 = (long *)(**ppIVar26)(pSStack_318,(MethodInfo *)ppIVar26[1]);
    if (plVar27 != (long *)0x0) {
      plStack_310 = plVar27;
      if ((*(byte *)(*plVar27 + 0x130) < *(byte *)(TypeInfo_Match + 0x130)) ||
         (*(long *)(*(long *)(*plVar27 + 200) + -8 + (ulong)*(byte *)(TypeInfo_Match + 0x130) * 8) !=
          TypeInfo_Match)) {
label_0420fefb:
        il2cpp_runtime_helper_022b2fd0(plStack_310);
        il2cpp_runtime_helper_022fefe0(unaff_R13);
        goto label_0420ff0d;
      }
      iVar32 = (int)plVar27[2] - iStack_320;
      if (iVar32 != 0 && iStack_320 <= (int)plVar27[2]) {
        if (pSStack_160 == (System_Text_StringBuilder_o *)0x0) goto label_0420ff42;
        pSVar23 = System_String__Substring_3af8da0
                            ((System_String_o *)pSStack_160,iStack_320,iVar32,(MethodInfo *)0x0);
        if (pSVar23 == (System_String_o *)0x0) goto label_0420ff47;
        if (0 < (pSVar23->fields)._stringLength) {
          fStack_1f8 = 0.0;
          uStack_1f4 = 0;
          uStack_1f0 = 0;
          uStack_1ec = 0;
          pSStack_208 = (System_String_o *)0x0;
          uStack_200 = 0;
          uStack_218 = 0;
          uStack_214 = 0;
          fStack_210 = 0.0;
          fStack_20c = 0.0;
          uStack_228 = 0;
          fStack_220 = 0.0;
          uStack_21c = 0;
          uStack_238 = 0;
          uStack_230 = (System_String_o *)0x0;
          uStack_1e8 = 0;
          fStack_1e4 = 0.0;
          uStack_240 = pSVar23;
          il2cpp_runtime_helper_022b4080(&uStack_240);
          uVar20 = uStack_238;
          lVar34 = MethodInfo_Void_Add;
          uStack_238 = uStack_238 & 0xffffffffffffff00;
          uVar19 = uStack_238;
          uStack_2b0 = CONCAT44(uStack_1ec,uStack_1f0);
          uStack_2a8 = CONCAT44(fStack_1e4,uStack_1e8);
          uStack_2e0 = CONCAT44(uStack_21c,fStack_220);
          uStack_2d8 = CONCAT44(uStack_214,uStack_218);
          uStack_2d0 = CONCAT44(fStack_20c,fStack_210);
          uStack_2b8 = CONCAT44(uStack_1f4,fStack_1f8);
          uStack_2c0 = uStack_200;
          uStack_2c8 = pSStack_208;
          uStack_2f0 = uStack_230;
          uStack_2e8 = uStack_228;
          uStack_300 = uStack_240;
          fStack_2f8._1_3_ = (uint3)(uVar20 >> 8);
          uVar15 = fStack_2f8._1_3_;
          fStack_2f8 = (float)((uint)fStack_2f8._1_3_ << 8);
          uStack_2f4 = (undefined1)(uVar20 >> 0x20);
          uStack_238._5_2_ = SUB82(uVar20,5);
          uStack_2f3 = uStack_238._5_2_;
          uStack_238._7_1_ = SUB81(uVar20,7);
          uStack_2f1 = uStack_238._7_1_;
          if (pSStack_308 == (System_Collections_Generic_List_EffectText_Segment__o *)0x0) goto label_0420ff4c;
          uStack_260 = uStack_200;
          uStack_268 = pSStack_208;
          pSVar16 = uStack_268;
          uStack_290 = uStack_230;
          uStack_288 = uStack_228;
          uStack_2a0 = uStack_240;
          pSVar23 = uStack_2a0;
          fStack_298 = (float)((uint)uVar15 << 8);
          uStack_294 = uStack_2f4;
          uStack_293 = uStack_238._5_2_;
          uStack_291 = uStack_238._7_1_;
          piVar1 = &(pSStack_308->fields)._version;
          *piVar1 = *piVar1 + 1;
          pPVar12 = (pSStack_308->fields)._items;
          uStack_280 = uStack_2e0;
          uStack_278 = uStack_2d8;
          uStack_270 = uStack_2d0;
          uStack_258 = uStack_2b8;
          uStack_250 = uStack_2b0;
          uStack_248 = uStack_2a8;
          uStack_238 = uVar19;
          if (pPVar12 == (PatreonEffects_EffectText_Segment_array *)0x0) goto label_0420ff51;
          uVar9 = (pSStack_308->fields)._size;
          if (uVar9 < (uint)pPVar12->max_length) {
            (pSStack_308->fields)._size = uVar9 + 1;
            pUVar2 = &pPVar12->m_Items[(int)uVar9].fields.ColorD.fields.value;
            (pUVar2->fields).r = (float)uStack_1f0;
            (pUVar2->fields).g = (float)uStack_1ec;
            (pUVar2->fields).b = (float)uStack_1e8;
            (pUVar2->fields).a = fStack_1e4;
            pSVar13 = &pPVar12->m_Items[(int)uVar9].fields.ColorC;
            (pSVar13->fields).value.fields.g = (float)(undefined4)uStack_200;
            (pSVar13->fields).value.fields.b = (float)uStack_200._4_4_;
            *(undefined8 *)(&(pSVar13->fields).value.fields.g + 2) = uStack_2b8;
            uStack_2a0._0_4_ = (bool_conflict)uStack_240;
            uStack_2a0._4_4_ = (float)((ulong)uStack_240 >> 0x20);
            uStack_268._0_4_ = SUB84(pSStack_208,0);
            uStack_268._4_4_ = (undefined4)((ulong)pSStack_208 >> 0x20);
            pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorB.fields.value.fields.b;
            *pfVar3 = fStack_210;
            pfVar3[1] = fStack_20c;
            pfVar3[2] = (float)(undefined4)uStack_268;
            pfVar3[3] = (float)uStack_268._4_4_;
            pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorA.fields.value.fields.a;
            *pfVar3 = fStack_220;
            pfVar3[1] = (float)uStack_21c;
            pfVar3[2] = (float)uStack_218;
            pfVar3[3] = (float)uStack_214;
            pSVar13 = &pPVar12->m_Items[(int)uVar9].fields.ColorA;
            (pSVar13->fields).hasValue = (bool_conflict)uStack_230;
            (pSVar13->fields).value.fields.r = uStack_230._4_4_;
            (pSVar13->fields).value.fields.g = (float)uStack_228;
            (pSVar13->fields).value.fields.b = uStack_228._4_4_;
            pPVar4 = &pPVar12->m_Items[(int)uVar9].fields;
            *(bool_conflict *)&pPVar4->Content = (bool_conflict)uStack_2a0;
            *(float *)((long)&pPVar4->Content + 4) = uStack_2a0._4_4_;
            pPVar4->HasEffect = (bool_conflict)fStack_298;
            pPVar4->Effect = (int32_t)(uVar20 >> 0x20);
            uStack_2a0 = pSVar23;
            uStack_268 = pSVar16;
            il2cpp_runtime_helper_022b4080(&pPVar12->m_Items[(int)uVar9].fields,0);
          }
          else {
            item_00.fields.HasEffect = (int)(uVar20 & 0xffffffffffffff00);
            item_00.fields.Effect = (int)((uVar20 & 0xffffffffffffff00) >> 0x20);
            item_00.fields.Content = uStack_240;
            item_00.fields.ColorA.fields._0_8_ = uStack_230;
            item_00.fields.ColorA.fields.value.fields.g = (float)(undefined4)uStack_228;
            item_00.fields.ColorA.fields.value.fields.b = uStack_228._4_4_;
            item_00.fields.ColorA.fields.value.fields.a = fStack_220;
            item_00.fields.ColorB.fields.hasValue = uStack_21c;
            item_00.fields.ColorB.fields.value.fields.r = (float)uStack_218;
            item_00.fields.ColorB.fields.value.fields.g = (float)uStack_214;
            item_00.fields.ColorB.fields.value.fields.b = fStack_210;
            item_00.fields.ColorB.fields.value.fields.a = fStack_20c;
            item_00.fields.ColorC.fields._0_8_ = pSStack_208;
            item_00.fields.ColorC.fields.value.fields.g = (float)(undefined4)uStack_200;
            item_00.fields.ColorC.fields.value.fields.b = (float)uStack_200._4_4_;
            item_00.fields.ColorC.fields.value.fields.a = fStack_1f8;
            item_00.fields.ColorD.fields.hasValue = uStack_1f4;
            item_00.fields.ColorD.fields.value.fields.r = (float)uStack_1f0;
            item_00.fields.ColorD.fields.value.fields.g = (float)uStack_1ec;
            item_00.fields.ColorD.fields.value.fields.b = (float)uStack_1e8;
            item_00.fields.ColorD.fields.value.fields.a = fStack_1e4;
            System_Collections_Generic_List_EffectText_Segment___AddWithResize
                      (pSStack_308,item_00,
                       *(MethodInfo_36CAA70 **)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      pSVar28 = (System_Text_RegularExpressions_GroupCollection_o *)
                (**(code **)(*plStack_310 + 0x188))(plStack_310,*(undefined8 *)(*plStack_310 + 400));
      if (pSVar28 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) goto label_0420ff12;
      pSVar29 = System_Text_RegularExpressions_GroupCollection__get_Item_4901c40
                          (pSVar28,"attrs",(MethodInfo *)0x0);
      if (pSVar29 == (System_Text_RegularExpressions_Group_o *)0x0) goto label_0420ff17;
      pSVar23 = System_Text_RegularExpressions_Capture__get_Value
                          ((System_Text_RegularExpressions_Capture_o *)pSVar29,(MethodInfo *)0x0);
      pSVar28 = (System_Text_RegularExpressions_GroupCollection_o *)
                (**(code **)(*plStack_310 + 0x188))(plStack_310,*(undefined8 *)(*plStack_310 + 400));
      if (pSVar28 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) goto label_0420ff1c;
      pSVar29 = System_Text_RegularExpressions_GroupCollection__get_Item_4901c40
                          (pSVar28,"content",(MethodInfo *)0x0);
      if (pSVar29 == (System_Text_RegularExpressions_Group_o *)0x0) goto label_0420ff21;
      pSStack_158 = System_Text_RegularExpressions_Capture__get_Value
                              ((System_Text_RegularExpressions_Capture_o *)pSVar29,(MethodInfo *)0x0);
      iStack_31c = 0;
      pSStack_180 = (System_String_o *)0x0;
      uStack_178 = 0;
      fStack_170 = 0.0;
      pSStack_1a0 = (System_String_o *)0x0;
      uStack_198 = 0;
      fStack_190 = 0.0;
      pSStack_1c0 = (System_String_o *)0x0;
      uStack_1b8 = 0;
      fStack_1b0 = 0.0;
      pSStack_1e0 = (System_String_o *)0x0;
      uStack_1d8 = 0;
      fStack_1d0 = 0.0;
      if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_EffectText + 0xb8) + 8);
      if (__this == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0420ff26;
      pSVar25 = System_Text_RegularExpressions_Regex__Matches_4906660(__this,pSVar23,(MethodInfo *)0x0);
      if (pSVar25 == (System_Text_RegularExpressions_MatchCollection_o *)0x0) goto label_0420ff2b;
      pSVar30 = System_Text_RegularExpressions_MatchCollection__GetEnumerator(pSVar25,(MethodInfo *)0x0);
      if (pSVar30 == (System_Collections_IEnumerator_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_0420ff30;
      }
label_0420f23f:
      pSVar10 = pSVar30->klass;
      uVar7._0_1_ = (pSVar10->_2).rank;
      uVar7._1_1_ = (pSVar10->_2).minimumAlignment;
      if ((ulong)uVar7 != 0) {
        pIVar11 = (pSVar10->_1).interfaceOffsets;
        lVar34 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar34) == TypeInfo_IEnumerator) {
            ppIVar26 = &pSVar10->vtable[*(int *)((long)&pIVar11->offset + lVar34)].methodPtr;
            goto label_0420f293;
          }
          lVar34 = lVar34 + 0x10;
        } while ((ulong)uVar7 << 4 != lVar34);
      }
      ppIVar26 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar30,TypeInfo_IEnumerator,0);
label_0420f293:
      cVar21 = (**ppIVar26)(pSVar30,(MethodInfo *)ppIVar26[1]);
      if (cVar21 != '\0') {
        pSVar10 = pSVar30->klass;
        uVar8._0_1_ = (pSVar10->_2).rank;
        uVar8._1_1_ = (pSVar10->_2).minimumAlignment;
        if ((ulong)uVar8 != 0) {
          pIVar11 = (pSVar10->_1).interfaceOffsets;
          lVar34 = 0;
          do {
            if (*(long *)((long)&pIVar11->interfaceType + lVar34) == TypeInfo_IEnumerator) {
              ppIVar26 = &pSVar10->vtable[*(int *)((long)&pIVar11->offset + lVar34) + 1].methodPtr;
              goto label_0420f318;
            }
            lVar34 = lVar34 + 0x10;
          } while ((ulong)uVar8 << 4 != lVar34);
        }
        ppIVar26 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar30,TypeInfo_IEnumerator,1);
label_0420f318:
        plVar27 = (long *)(**ppIVar26)(pSVar30,(MethodInfo *)ppIVar26[1]);
        if (plVar27 == (long *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0420fefb;
        }
        if ((*(byte *)(*plVar27 + 0x130) < *(byte *)(TypeInfo_Match + 0x130)) ||
           (*(long *)(*(long *)(*plVar27 + 200) + -8 + (ulong)*(byte *)(TypeInfo_Match + 0x130) * 8) !=
            TypeInfo_Match)) {
          il2cpp_runtime_helper_022b2fd0(plVar27);
          goto label_0420fefb;
        }
        pSVar28 = (System_Text_RegularExpressions_GroupCollection_o *)
                  (**(code **)(*plVar27 + 0x188))(plVar27,*(undefined8 *)(*plVar27 + 400));
        if (pSVar28 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0420fefb;
        }
        pSVar29 = System_Text_RegularExpressions_GroupCollection__get_Item_4901c40
                            (pSVar28,"key",(MethodInfo *)0x0);
        if (pSVar29 == (System_Text_RegularExpressions_Group_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0420fefb;
        }
        pSVar23 = System_Text_RegularExpressions_Capture__get_Value
                            ((System_Text_RegularExpressions_Capture_o *)pSVar29,(MethodInfo *)0x0);
        if (pSVar23 == (System_String_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0420fefb;
        }
        unaff_R13 = System_String__ToLowerInvariant(pSVar23,(MethodInfo *)0x0);
        pSVar28 = (System_Text_RegularExpressions_GroupCollection_o *)
                  (**(code **)(*plVar27 + 0x188))(plVar27,*(undefined8 *)(*plVar27 + 400));
        if (pSVar28 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0420fefb;
        }
        pSVar29 = System_Text_RegularExpressions_GroupCollection__get_Item_4901c40
                            (pSVar28,"val",(MethodInfo *)0x0);
        if (pSVar29 == (System_Text_RegularExpressions_Group_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0420fefb;
        }
        pSVar23 = System_Text_RegularExpressions_Capture__get_Value
                            ((System_Text_RegularExpressions_Capture_o *)pSVar29,(MethodInfo *)0x0);
        bVar22 = System_String__op_Equality(unaff_R13,"effect",(MethodInfo *)0x0);
        if ((char)bVar22 == '\0') {
          bVar22 = System_String__op_Equality(unaff_R13,"a",(MethodInfo *)0x0);
          if ((char)bVar22 == '\0') {
            bVar22 = System_String__op_Equality(unaff_R13,"b",(MethodInfo *)0x0);
            if ((char)bVar22 == '\0') {
              bVar22 = System_String__op_Equality(unaff_R13,"c",(MethodInfo *)0x0);
              if ((char)bVar22 == '\0') {
                bVar22 = System_String__op_Equality(unaff_R13,"d",(MethodInfo *)0x0);
                if ((char)bVar22 != '\0') {
                  pMVar33 = extraout_RDX_05;
                  if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    pMVar33 = extraout_RDX_06;
                  }
                  PatreonEffects_EffectText__ParseColor
                            ((System_Nullable_Color__o *)&uStack_2a0,pSVar23,pMVar33);
                  fStack_1d0 = (float)uStack_290;
                  pSStack_1e0 = uStack_2a0;
                  uStack_1d8 = CONCAT17(uStack_291,CONCAT25(uStack_293,CONCAT14(uStack_294,fStack_298)));
                }
              }
              else {
                pMVar33 = extraout_RDX_03;
                if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  pMVar33 = extraout_RDX_04;
                }
                PatreonEffects_EffectText__ParseColor((System_Nullable_Color__o *)&uStack_2a0,pSVar23,pMVar33)
                ;
                fStack_1b0 = (float)uStack_290;
                pSStack_1c0 = uStack_2a0;
                uStack_1b8 = CONCAT17(uStack_291,CONCAT25(uStack_293,CONCAT14(uStack_294,fStack_298)));
              }
            }
            else {
              pMVar33 = extraout_RDX_01;
              if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar33 = extraout_RDX_02;
              }
              PatreonEffects_EffectText__ParseColor((System_Nullable_Color__o *)&uStack_2a0,pSVar23,pMVar33);
              fStack_190 = (float)uStack_290;
              pSStack_1a0 = uStack_2a0;
              uStack_198 = CONCAT17(uStack_291,CONCAT25(uStack_293,CONCAT14(uStack_294,fStack_298)));
            }
          }
          else {
            pMVar33 = extraout_RDX;
            if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pMVar33 = extraout_RDX_00;
            }
            PatreonEffects_EffectText__ParseColor((System_Nullable_Color__o *)&uStack_2a0,pSVar23,pMVar33);
            fStack_170 = (float)uStack_290;
            pSStack_180 = uStack_2a0;
            uStack_178 = CONCAT17(uStack_291,CONCAT25(uStack_293,CONCAT14(uStack_294,fStack_298)));
          }
        }
        else {
          PatreonEffects_NameEffectPresets__TryResolve(pSVar23,&iStack_31c,(MethodInfo *)0x0);
        }
        goto label_0420f23f;
      }
      unaff_R13 = (System_String_o *)0x0;
      plVar27 = (long *)il2cpp_runtime_helper_023051f0(pSVar30,TypeInfo_IDisposable);
      if (plVar27 != (long *)0x0) {
        lVar34 = *plVar27;
        if ((ulong)*(ushort *)(lVar34 + 0x12e) != 0) {
          lVar35 = 0;
          do {
            if (*(long *)(*(long *)(lVar34 + 0xb0) + lVar35) == TypeInfo_IDisposable) {
              puVar31 = (undefined8 *)
                        (lVar34 + (long)*(int *)(*(long *)(lVar34 + 0xb0) + 8 + lVar35) * 0x10 + 0x138);
              goto label_0420f61d;
            }
            lVar35 = lVar35 + 0x10;
          } while ((ulong)*(ushort *)(lVar34 + 0x12e) << 4 != lVar35);
        }
        puVar31 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar27,TypeInfo_IDisposable,0);
label_0420f61d:
        (*(code *)*puVar31)(plVar27,puVar31[1]);
      }
      iVar14 = iStack_31c;
      fStack_1f8 = 0.0;
      uStack_1f4 = 0;
      uStack_1f0 = 0;
      uStack_1ec = 0;
      pSStack_208 = (System_String_o *)0x0;
      uStack_200 = 0;
      uStack_218 = 0;
      uStack_214 = 0;
      fStack_210 = 0.0;
      fStack_20c = 0.0;
      uStack_228 = 0;
      fStack_220 = 0.0;
      uStack_21c = 0;
      uStack_238 = 0;
      uStack_230 = (System_String_o *)0x0;
      uStack_1e8 = 0;
      fStack_1e4 = 0.0;
      uStack_240 = pSStack_158;
      il2cpp_runtime_helper_022b4080(&uStack_240);
      lVar34 = MethodInfo_Void_Add;
      uStack_238 = CONCAT71(uStack_238._1_7_,iVar14 != 0);
      uStack_238 = CONCAT44(iStack_31c,(float)uStack_238);
      fStack_220 = fStack_170;
      uStack_230 = pSStack_180;
      uStack_228 = uStack_178;
      fStack_20c = fStack_190;
      uStack_21c = SUB84(pSStack_1a0,0);
      uStack_218 = (undefined4)((ulong)pSStack_1a0 >> 0x20);
      uStack_214 = (undefined4)uStack_198;
      fStack_210 = (float)((ulong)uStack_198 >> 0x20);
      fStack_1f8 = fStack_1b0;
      pSStack_208 = pSStack_1c0;
      uStack_200 = uStack_1b8;
      fStack_1e4 = fStack_1d0;
      uStack_1f4 = SUB84(pSStack_1e0,0);
      uStack_1f0 = (undefined4)((ulong)pSStack_1e0 >> 0x20);
      uStack_1ec = (undefined4)uStack_1d8;
      uStack_1e8 = (undefined4)((ulong)uStack_1d8 >> 0x20);
      uStack_2b0 = CONCAT44(uStack_1ec,uStack_1f0);
      uStack_2a8 = CONCAT44(fStack_1d0,uStack_1e8);
      uStack_2c0 = uStack_1b8;
      uStack_2b8 = CONCAT44(uStack_1f4,fStack_1b0);
      fStack_2f8 = (float)uStack_238;
      uStack_2f0 = pSStack_180;
      uStack_2e8 = uStack_178;
      uStack_2e0 = CONCAT44(uStack_21c,fStack_170);
      uStack_2d8 = CONCAT44(uStack_214,uStack_218);
      uStack_2d0 = CONCAT44(fStack_190,fStack_210);
      uStack_2c8 = pSStack_1c0;
      uStack_300 = uStack_240;
      uStack_2f4 = (undefined1)iStack_31c;
      uStack_2f3 = (undefined2)((uint)iStack_31c >> 8);
      uStack_2f1 = (undefined1)((uint)iStack_31c >> 0x18);
      if (pSStack_308 == (System_Collections_Generic_List_EffectText_Segment__o *)0x0) goto label_0420ff30;
      uStack_260 = uStack_1b8;
      fStack_298 = (float)uStack_238;
      uStack_290 = pSStack_180;
      uStack_288 = uStack_178;
      uStack_268 = pSStack_1c0;
      pSVar16 = uStack_268;
      pSVar23 = uStack_290;
      uVar17 = uStack_288;
      uStack_2a0 = uStack_240;
      uStack_291 = uStack_2f1;
      piVar1 = &(pSStack_308->fields)._version;
      *piVar1 = *piVar1 + 1;
      pPVar12 = (pSStack_308->fields)._items;
      uStack_294 = uStack_2f4;
      uStack_293 = uStack_2f3;
      uStack_280 = uStack_2e0;
      uStack_278 = uStack_2d8;
      uStack_270 = uStack_2d0;
      uStack_258 = uStack_2b8;
      uStack_250 = uStack_2b0;
      uStack_248 = uStack_2a8;
      if (pPVar12 == (PatreonEffects_EffectText_Segment_array *)0x0) goto label_0420ff3d;
      uVar9 = (pSStack_308->fields)._size;
      if (uVar9 < (uint)pPVar12->max_length) {
        (pSStack_308->fields)._size = uVar9 + 1;
        pUVar2 = &pPVar12->m_Items[(int)uVar9].fields.ColorD.fields.value;
        (pUVar2->fields).r = (float)uStack_1f0;
        (pUVar2->fields).g = (float)uStack_1ec;
        (pUVar2->fields).b = (float)uStack_1e8;
        (pUVar2->fields).a = fStack_1d0;
        pSVar13 = &pPVar12->m_Items[(int)uVar9].fields.ColorC;
        (pSVar13->fields).value.fields.g = (float)(undefined4)uStack_1b8;
        (pSVar13->fields).value.fields.b = (float)uStack_1b8._4_4_;
        *(undefined8 *)(&(pSVar13->fields).value.fields.g + 2) = uStack_2b8;
        uStack_290._0_4_ = SUB84(pSStack_180,0);
        uStack_290._4_4_ = (float)((ulong)pSStack_180 >> 0x20);
        uStack_288._0_4_ = (float)uStack_178;
        uStack_288._4_4_ = (float)((ulong)uStack_178 >> 0x20);
        uStack_268._0_4_ = SUB84(pSStack_1c0,0);
        uStack_268._4_4_ = (undefined4)((ulong)pSStack_1c0 >> 0x20);
        pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorB.fields.value.fields.b;
        *pfVar3 = fStack_210;
        pfVar3[1] = fStack_190;
        pfVar3[2] = (float)(undefined4)uStack_268;
        pfVar3[3] = (float)uStack_268._4_4_;
        pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorA.fields.value.fields.a;
        *pfVar3 = fStack_170;
        pfVar3[1] = (float)uStack_21c;
        pfVar3[2] = (float)uStack_218;
        pfVar3[3] = (float)uStack_214;
        pSVar13 = &pPVar12->m_Items[(int)uVar9].fields.ColorA;
        (pSVar13->fields).hasValue = (bool_conflict)(float)uStack_290;
        (pSVar13->fields).value.fields.r = uStack_290._4_4_;
        (pSVar13->fields).value.fields.g = (float)uStack_288;
        (pSVar13->fields).value.fields.b = uStack_288._4_4_;
        pPVar4 = &pPVar12->m_Items[(int)uVar9].fields;
        *(int *)&pPVar4->Content = (int)uStack_240;
        *(undefined4 *)((long)&pPVar4->Content + 4) = uStack_240._4_4_;
        pPVar4->HasEffect = (bool_conflict)(float)uStack_238;
        pPVar4->Effect = iStack_31c;
        uStack_290 = pSVar23;
        uStack_288 = uVar17;
        uStack_268 = pSVar16;
        il2cpp_runtime_helper_022b4080(&pPVar12->m_Items[(int)uVar9].fields,0);
      }
      else {
        item.fields.Effect._0_1_ = uStack_2f4;
        item.fields.HasEffect = (bool_conflict)(float)uStack_238;
        item.fields.Effect._1_2_ = uStack_2f3;
        item.fields.Effect._3_1_ = uStack_2f1;
        item.fields.Content = uStack_240;
        item.fields.ColorA.fields._0_8_ = pSStack_180;
        item.fields.ColorA.fields.value.fields.g = (float)(undefined4)uStack_178;
        item.fields.ColorA.fields.value.fields.b = (float)uStack_178._4_4_;
        item.fields.ColorA.fields.value.fields.a = fStack_170;
        item.fields.ColorB.fields.hasValue = uStack_21c;
        item.fields.ColorB.fields.value.fields.r = (float)uStack_218;
        item.fields.ColorB.fields.value.fields.g = (float)uStack_214;
        item.fields.ColorB.fields.value.fields.b = fStack_210;
        item.fields.ColorB.fields.value.fields.a = fStack_190;
        item.fields.ColorC.fields._0_8_ = pSStack_1c0;
        item.fields.ColorC.fields.value.fields.g = (float)(undefined4)uStack_1b8;
        item.fields.ColorC.fields.value.fields.b = (float)uStack_1b8._4_4_;
        item.fields.ColorC.fields.value.fields.a = fStack_1b0;
        item.fields.ColorD.fields.hasValue = uStack_1f4;
        item.fields.ColorD.fields.value.fields.r = (float)uStack_1f0;
        item.fields.ColorD.fields.value.fields.g = (float)uStack_1ec;
        item.fields.ColorD.fields.value.fields.b = (float)uStack_1e8;
        item.fields.ColorD.fields.value.fields.a = fStack_1d0;
        System_Collections_Generic_List_EffectText_Segment___AddWithResize
                  (pSStack_308,item,
                   *(MethodInfo_36CAA70 **)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70));
      }
      iStack_320 = *(int *)((long)plStack_310 + 0x14) + (int)plStack_310[2];
      goto label_0420ece0;
    }
label_0420ff0d:
    il2cpp_runtime_helper_022b2c90();
label_0420ff12:
    il2cpp_runtime_helper_022b2c90();
label_0420ff17:
    il2cpp_runtime_helper_022b2c90();
label_0420ff1c:
    il2cpp_runtime_helper_022b2c90();
label_0420ff21:
    il2cpp_runtime_helper_022b2c90();
label_0420ff26:
    il2cpp_runtime_helper_022b2c90();
label_0420ff2b:
    il2cpp_runtime_helper_022b2c90();
label_0420ff30:
    il2cpp_runtime_helper_022b2c90();
label_0420ff3d:
    il2cpp_runtime_helper_022b2c90();
label_0420ff42:
    il2cpp_runtime_helper_022b2c90();
label_0420ff47:
    il2cpp_runtime_helper_022b2c90();
    uVar19 = uStack_238;
label_0420ff4c:
    uStack_238 = uVar19;
    il2cpp_runtime_helper_022b2c90();
label_0420ff51:
    il2cpp_runtime_helper_022b2c90();
    content = (System_String_o *)&TypeInfo_IEnumerator;
    uVar20 = uStack_238;
  }
  do {
    uStack_238 = uVar20;
    il2cpp_runtime_helper_022b2c90();
label_0420ff5b:
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar36 = il2cpp_runtime_helper_022fefe0(content);
      iStack_320 = 0;
      if (auVar36._8_4_ != 1) {
        plVar27 = (long *)il2cpp_runtime_helper_023051f0(pSStack_318,TypeInfo_IDisposable);
        if (plVar27 == (long *)0x0) goto label_04210006;
        lVar34 = *plVar27;
        if ((ulong)*(ushort *)(lVar34 + 0x12e) == 0) goto label_0420ffdf;
        lVar35 = 0;
        goto label_0420ffd0;
      }
      iVar32 = 0;
      puVar31 = (undefined8 *)__cxa_begin_catch(auVar36._0_8_);
      content = (System_String_o *)*puVar31;
      __cxa_end_catch();
label_0420faf9:
      plVar27 = (long *)il2cpp_runtime_helper_023051f0(pSStack_318,TypeInfo_IDisposable);
      if (plVar27 != (long *)0x0) {
        lVar34 = *plVar27;
        if ((ulong)*(ushort *)(lVar34 + 0x12e) != 0) {
          lVar35 = 0;
          do {
            if (*(long *)(*(long *)(lVar34 + 0xb0) + lVar35) == TypeInfo_IDisposable) {
              puVar31 = (undefined8 *)
                        (lVar34 + (long)*(int *)(*(long *)(lVar34 + 0xb0) + 8 + lVar35) * 0x10 + 0x138);
              goto label_0420fb6d;
            }
            lVar35 = lVar35 + 0x10;
          } while ((ulong)*(ushort *)(lVar34 + 0x12e) << 4 != lVar35);
        }
        puVar31 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar27,TypeInfo_IDisposable,0);
label_0420fb6d:
        (*(code *)*puVar31)(plVar27,puVar31[1]);
      }
    } while (content != (System_String_o *)0x0);
    if ((iVar32 != 0xd) && (iVar32 != 0)) {
      return (System_String_o *)pSStack_308;
    }
    uVar20 = uStack_238;
    if (pSStack_160 != (System_Text_StringBuilder_o *)0x0) {
      if (*(int *)&(pSStack_160->fields).m_ChunkChars <= iStack_320) {
        return (System_String_o *)pSStack_308;
      }
      pSVar23 = System_String__Substring((System_String_o *)pSStack_160,iStack_320,(MethodInfo *)0x0);
      uVar20 = uStack_238;
      if (pSVar23 != (System_String_o *)0x0) {
        if ((pSVar23->fields)._stringLength < 1) {
          return (System_String_o *)pSStack_308;
        }
        fStack_1f8 = 0.0;
        uStack_1f4 = 0;
        uStack_1f0 = 0;
        uStack_1ec = 0;
        pSStack_208 = (System_String_o *)0x0;
        uStack_200 = 0;
        uStack_218 = 0;
        uStack_214 = 0;
        fStack_210 = 0.0;
        fStack_20c = 0.0;
        uStack_228 = 0;
        fStack_220 = 0.0;
        uStack_21c = 0;
        uStack_238 = 0;
        uStack_230 = (System_String_o *)0x0;
        uStack_1e8 = 0;
        fStack_1e4 = 0.0;
        uStack_240 = pSVar23;
        il2cpp_runtime_helper_022b4080(&uStack_240,pSVar23);
        uVar19 = uStack_238;
        lVar34 = MethodInfo_Void_Add;
        uStack_238 = uStack_238 & 0xffffffffffffff00;
        uVar20 = uStack_238;
        uStack_100 = CONCAT44(uStack_1ec,uStack_1f0);
        uStack_f8 = CONCAT44(fStack_1e4,uStack_1e8);
        uStack_130 = CONCAT44(uStack_21c,fStack_220);
        uStack_128 = CONCAT44(uStack_214,uStack_218);
        uStack_120 = CONCAT44(fStack_20c,fStack_210);
        uStack_108 = CONCAT44(uStack_1f4,fStack_1f8);
        uStack_110 = uStack_200;
        pSStack_118 = pSStack_208;
        pSStack_140 = uStack_230;
        uStack_138 = uStack_228;
        pSStack_150 = uStack_240;
        uStack_148 = 0;
        uStack_238._1_4_ = SUB84(uVar19,1);
        uStack_147 = uStack_238._1_4_;
        uStack_238._5_2_ = SUB82(uVar19,5);
        uStack_143 = uStack_238._5_2_;
        uStack_238._7_1_ = SUB81(uVar19,7);
        uStack_141 = uStack_238._7_1_;
        if (pSStack_308 != (System_Collections_Generic_List_EffectText_Segment__o *)0x0) {
          uStack_2c0 = uStack_200;
          uStack_2c8 = pSStack_208;
          pSVar18 = uStack_2c8;
          uStack_2f0 = uStack_230;
          pSVar16 = uStack_2f0;
          uStack_2e8 = uStack_228;
          uVar17 = uStack_2e8;
          uStack_300 = uStack_240;
          pSVar23 = uStack_300;
          fStack_2f8._1_3_ = (uint3)(uVar19 >> 8);
          fStack_2f8 = (float)((uint)fStack_2f8._1_3_ << 8);
          uStack_2f4 = (undefined1)(uVar19 >> 0x20);
          uStack_2f3 = uStack_238._5_2_;
          uStack_2f1 = uStack_238._7_1_;
          piVar1 = &(pSStack_308->fields)._version;
          *piVar1 = *piVar1 + 1;
          pPVar12 = (pSStack_308->fields)._items;
          uStack_2e0 = uStack_130;
          uStack_2d8 = uStack_128;
          uStack_2d0 = uStack_120;
          uStack_2b8 = uStack_108;
          uStack_2b0 = uStack_100;
          uStack_2a8 = uStack_f8;
          if (pPVar12 != (PatreonEffects_EffectText_Segment_array *)0x0) {
            uVar9 = (pSStack_308->fields)._size;
            uStack_238 = uVar20;
            if (uVar9 < (uint)pPVar12->max_length) {
              (pSStack_308->fields)._size = uVar9 + 1;
              pUVar2 = &pPVar12->m_Items[(int)uVar9].fields.ColorD.fields.value;
              (pUVar2->fields).r = (float)uStack_1f0;
              (pUVar2->fields).g = (float)uStack_1ec;
              (pUVar2->fields).b = (float)uStack_1e8;
              (pUVar2->fields).a = fStack_1e4;
              pSVar13 = &pPVar12->m_Items[(int)uVar9].fields.ColorC;
              (pSVar13->fields).value.fields.g = (float)(undefined4)uStack_200;
              (pSVar13->fields).value.fields.b = (float)uStack_200._4_4_;
              *(undefined8 *)(&(pSVar13->fields).value.fields.g + 2) = uStack_108;
              uStack_300._0_4_ = SUB84(uStack_240,0);
              uStack_300._4_4_ = (undefined4)((ulong)uStack_240 >> 0x20);
              uStack_2f0._0_4_ = (bool_conflict)uStack_230;
              uStack_2f0._4_4_ = (float)((ulong)uStack_230 >> 0x20);
              uStack_2e8._0_4_ = (float)uStack_228;
              uStack_2e8._4_4_ = (float)((ulong)uStack_228 >> 0x20);
              uStack_2c8._0_4_ = SUB84(pSStack_208,0);
              uStack_2c8._4_4_ = (undefined4)((ulong)pSStack_208 >> 0x20);
              pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorB.fields.value.fields.b;
              *pfVar3 = fStack_210;
              pfVar3[1] = fStack_20c;
              pfVar3[2] = (float)(undefined4)uStack_2c8;
              pfVar3[3] = (float)uStack_2c8._4_4_;
              pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorA.fields.value.fields.a;
              *pfVar3 = fStack_220;
              pfVar3[1] = (float)uStack_21c;
              pfVar3[2] = (float)uStack_218;
              pfVar3[3] = (float)uStack_214;
              pSVar13 = &pPVar12->m_Items[(int)uVar9].fields.ColorA;
              (pSVar13->fields).hasValue = (bool_conflict)uStack_2f0;
              (pSVar13->fields).value.fields.r = uStack_2f0._4_4_;
              (pSVar13->fields).value.fields.g = (float)uStack_2e8;
              (pSVar13->fields).value.fields.b = uStack_2e8._4_4_;
              pPVar4 = &pPVar12->m_Items[(int)uVar9].fields;
              *(undefined4 *)&pPVar4->Content = (undefined4)uStack_300;
              *(undefined4 *)((long)&pPVar4->Content + 4) = uStack_300._4_4_;
              pPVar4->HasEffect = (bool_conflict)fStack_2f8;
              pPVar4->Effect = (int32_t)(uVar19 >> 0x20);
              uStack_300 = pSVar23;
              uStack_2f0 = pSVar16;
              uStack_2e8 = uVar17;
              uStack_2c8 = pSVar18;
              il2cpp_runtime_helper_022b4080(&pPVar12->m_Items[(int)uVar9].fields,0);
            }
            else {
              item_01.fields.HasEffect = (int)(uVar19 & 0xffffffffffffff00);
              item_01.fields.Effect = (int)((uVar19 & 0xffffffffffffff00) >> 0x20);
              item_01.fields.Content = uStack_240;
              item_01.fields.ColorA.fields._0_8_ = uStack_230;
              item_01.fields.ColorA.fields.value.fields.g = (float)(undefined4)uStack_228;
              item_01.fields.ColorA.fields.value.fields.b = uStack_228._4_4_;
              item_01.fields.ColorA.fields.value.fields.a = fStack_220;
              item_01.fields.ColorB.fields.hasValue = uStack_21c;
              item_01.fields.ColorB.fields.value.fields.r = (float)uStack_218;
              item_01.fields.ColorB.fields.value.fields.g = (float)uStack_214;
              item_01.fields.ColorB.fields.value.fields.b = fStack_210;
              item_01.fields.ColorB.fields.value.fields.a = fStack_20c;
              item_01.fields.ColorC.fields._0_8_ = pSStack_208;
              item_01.fields.ColorC.fields.value.fields.g = (float)(undefined4)uStack_200;
              item_01.fields.ColorC.fields.value.fields.b = (float)uStack_200._4_4_;
              item_01.fields.ColorC.fields.value.fields.a = fStack_1f8;
              item_01.fields.ColorD.fields.hasValue = uStack_1f4;
              item_01.fields.ColorD.fields.value.fields.r = (float)uStack_1f0;
              item_01.fields.ColorD.fields.value.fields.g = (float)uStack_1ec;
              item_01.fields.ColorD.fields.value.fields.b = (float)uStack_1e8;
              item_01.fields.ColorD.fields.value.fields.a = fStack_1e4;
              System_Collections_Generic_List_EffectText_Segment___AddWithResize
                        (pSStack_308,item_01,
                         *(MethodInfo_36CAA70 **)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70));
            }
            return (System_String_o *)pSStack_308;
          }
        }
      }
    }
  } while( true );
  while (lVar35 = lVar35 + 0x10, (ulong)*(ushort *)(lVar34 + 0x12e) << 4 != lVar35) {
label_0420ffd0:
    if (*(long *)(*(long *)(lVar34 + 0xb0) + lVar35) == TypeInfo_IDisposable) {
      puVar31 = (undefined8 *)(lVar34 + (long)*(int *)(*(long *)(lVar34 + 0xb0) + 8 + lVar35) * 0x10 + 0x138);
      goto label_0420fffd;
    }
  }
label_0420ffdf:
  puVar31 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar27,TypeInfo_IDisposable,0);
label_0420fffd:
  (*(code *)*puVar31)(plVar27,puVar31[1]);
label_04210006:
  _Unwind_Resume(auVar36._0_8_);
}


// PatreonEffects.EffectText$$ParseLine
// il2cpp: System_Collections_Generic_List_EffectText_Segment__o* PatreonEffects_EffectText__ParseLine (System_String_o* line, const MethodInfo* method);
// 0x420ea50

System_Collections_Generic_List_EffectText_Segment__o *
PatreonEffects_EffectText__ParseLine(System_String_o *line,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Color_o *pUVar2;
  float *pfVar3;
  PatreonEffects_EffectText_Segment_Fields *pPVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  System_Collections_IEnumerator_c *pSVar10;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  PatreonEffects_EffectText_Segment_array *pPVar12;
  System_Text_RegularExpressions_Regex_o *__this;
  PatreonEffects_EffectText_Segment_o item;
  PatreonEffects_EffectText_Segment_o item_00;
  PatreonEffects_EffectText_Segment_o item_01;
  System_Nullable_Color__o *pSVar13;
  int32_t iVar14;
  uint3 uVar15;
  System_String_o *pSVar16;
  undefined8 uVar17;
  System_String_o *pSVar18;
  ulong uVar19;
  ulong uVar20;
  char cVar21;
  bool_conflict bVar22;
  System_Text_RegularExpressions_MatchCollection_o *pSVar23;
  Il2CppMethodPointer *ppIVar24;
  long *plVar25;
  System_String_o *pSVar26;
  System_Text_RegularExpressions_GroupCollection_o *pSVar27;
  System_Text_RegularExpressions_Group_o *pSVar28;
  System_Collections_IEnumerator_o *pSVar29;
  undefined8 *puVar30;
  int iVar31;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar32;
  long lVar33;
  long lVar34;
  System_String_o *unaff_R13;
  long *unaff_R15;
  undefined1 auVar35 [12];
  int local_268;
  int32_t local_264;
  System_Collections_IEnumerator_o *local_260;
  long *local_258;
  System_Collections_Generic_List_EffectText_Segment__o *local_250;
  undefined8 local_248;
  float fStack_240;
  undefined1 uStack_23c;
  undefined2 uStack_23b;
  undefined1 uStack_239;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  float fStack_1e0;
  undefined1 uStack_1dc;
  undefined2 uStack_1db;
  undefined1 uStack_1d9;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  System_String_o *pSStack_150;
  undefined8 local_148;
  float fStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  float fStack_12c;
  System_String_o *local_128;
  undefined8 uStack_120;
  float local_118;
  System_String_o *local_108;
  undefined8 uStack_100;
  float local_f8;
  System_String_o *local_e8;
  undefined8 uStack_e0;
  float local_d8;
  System_String_o *local_c8;
  undefined8 uStack_c0;
  float local_b8;
  System_String_o *local_a8;
  System_String_o *local_a0;
  System_String_o *local_98;
  undefined1 local_90;
  undefined4 local_8f;
  undefined2 local_8b;
  undefined1 local_89;
  System_String_o *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  System_String_o *pSStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (g_data_057ad903 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectText);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_PatreonEffects_EffectText_Segment);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Segment);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
    il2cpp_runtime_helper_023445d0(&"val");
    il2cpp_runtime_helper_023445d0(&"a");
    il2cpp_runtime_helper_023445d0(&"effect");
    il2cpp_runtime_helper_023445d0(&"b");
    il2cpp_runtime_helper_023445d0(&"c");
    il2cpp_runtime_helper_023445d0(&"attrs");
    il2cpp_runtime_helper_023445d0(&"d");
    il2cpp_runtime_helper_023445d0(&"content");
    il2cpp_runtime_helper_023445d0(&"key");
    g_data_057ad903 = '\x01';
  }
  local_264 = 0;
  local_c8 = (System_String_o *)0x0;
  uStack_c0 = 0;
  local_b8 = 0.0;
  local_e8 = (System_String_o *)0x0;
  uStack_e0 = 0;
  local_d8 = 0.0;
  local_108 = (System_String_o *)0x0;
  uStack_100 = 0;
  local_f8 = 0.0;
  local_128 = (System_String_o *)0x0;
  uStack_120 = 0;
  local_118 = 0.0;
  local_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  fStack_12c = 0.0;
  local_148 = 0;
  fStack_140 = 0.0;
  uStack_13c = 0;
  local_158 = 0.0;
  fStack_154 = 0.0;
  pSStack_150 = (System_String_o *)0x0;
  local_168 = 0.0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  local_178 = (System_String_o *)0x0;
  uStack_170 = 0;
  local_188 = (System_String_o *)0x0;
  uStack_180 = 0;
  local_250 = (System_Collections_Generic_List_EffectText_Segment__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Segment);
  System_Collections_Generic_List_EffectText_Segment____ctor(local_250,MethodInfo_List_1_PatreonEffects_EffectText_Segment);
  if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar20 = uStack_180;
  if (((System_Text_RegularExpressions_Regex_o *)**(undefined8 **)(TypeInfo_EffectText + 0xb8) !=
       (System_Text_RegularExpressions_Regex_o *)0x0) &&
     (pSVar23 = System_Text_RegularExpressions_Regex__Matches_4906660
                          ((System_Text_RegularExpressions_Regex_o *)**(undefined8 **)(TypeInfo_EffectText + 0xb8),
                           line,(MethodInfo *)0x0), uVar20 = uStack_180,
     pSVar23 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
    local_a8 = line;
    local_260 = System_Text_RegularExpressions_MatchCollection__GetEnumerator(pSVar23,(MethodInfo *)0x0);
    if (local_260 == (System_Collections_IEnumerator_o *)0x0) goto label_0420ff5b;
    unaff_R15 = &TypeInfo_IEnumerator;
    local_268 = 0;
label_0420ece0:
    pSVar10 = local_260->klass;
    uVar5._0_1_ = (pSVar10->_2).rank;
    uVar5._1_1_ = (pSVar10->_2).minimumAlignment;
    if ((ulong)uVar5 != 0) {
      pIVar11 = (pSVar10->_1).interfaceOffsets;
      lVar33 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar33) == TypeInfo_IEnumerator) {
          ppIVar24 = &pSVar10->vtable[*(int *)((long)&pIVar11->offset + lVar33)].methodPtr;
          goto label_0420ed43;
        }
        lVar33 = lVar33 + 0x10;
      } while ((ulong)uVar5 << 4 != lVar33);
    }
    ppIVar24 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(local_260,TypeInfo_IEnumerator,0);
label_0420ed43:
    cVar21 = (**ppIVar24)(local_260,(MethodInfo *)ppIVar24[1]);
    if (cVar21 == '\0') {
      iVar31 = 0xd;
      unaff_R15 = (long *)0x0;
      goto label_0420faf9;
    }
    pSVar10 = local_260->klass;
    uVar6._0_1_ = (pSVar10->_2).rank;
    uVar6._1_1_ = (pSVar10->_2).minimumAlignment;
    if ((ulong)uVar6 != 0) {
      pIVar11 = (pSVar10->_1).interfaceOffsets;
      lVar33 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar33) == TypeInfo_IEnumerator) {
          ppIVar24 = &pSVar10->vtable[*(int *)((long)&pIVar11->offset + lVar33) + 1].methodPtr;
          goto label_0420edc8;
        }
        lVar33 = lVar33 + 0x10;
      } while ((ulong)uVar6 << 4 != lVar33);
    }
    ppIVar24 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(local_260,TypeInfo_IEnumerator,1);
label_0420edc8:
    plVar25 = (long *)(**ppIVar24)(local_260,(MethodInfo *)ppIVar24[1]);
    if (plVar25 != (long *)0x0) {
      local_258 = plVar25;
      if ((*(byte *)(*plVar25 + 0x130) < *(byte *)(TypeInfo_Match + 0x130)) ||
         (*(long *)(*(long *)(*plVar25 + 200) + -8 + (ulong)*(byte *)(TypeInfo_Match + 0x130) * 8) !=
          TypeInfo_Match)) {
label_0420fefb:
        il2cpp_runtime_helper_022b2fd0(local_258);
        il2cpp_runtime_helper_022fefe0(unaff_R13);
        goto label_0420ff0d;
      }
      iVar31 = (int)plVar25[2] - local_268;
      if (iVar31 != 0 && local_268 <= (int)plVar25[2]) {
        if (local_a8 == (System_String_o *)0x0) goto label_0420ff42;
        pSVar26 = System_String__Substring_3af8da0(local_a8,local_268,iVar31,(MethodInfo *)0x0);
        if (pSVar26 == (System_String_o *)0x0) goto label_0420ff47;
        if (0 < (pSVar26->fields)._stringLength) {
          fStack_140 = 0.0;
          uStack_13c = 0;
          local_138 = 0;
          uStack_134 = 0;
          pSStack_150 = (System_String_o *)0x0;
          local_148 = 0;
          uStack_160 = 0;
          uStack_15c = 0;
          local_158 = 0.0;
          fStack_154 = 0.0;
          uStack_170 = 0;
          local_168 = 0.0;
          uStack_164 = 0;
          uStack_180 = 0;
          local_178 = (System_String_o *)0x0;
          uStack_130 = 0;
          fStack_12c = 0.0;
          local_188 = pSVar26;
          il2cpp_runtime_helper_022b4080(&local_188);
          uVar20 = uStack_180;
          lVar33 = MethodInfo_Void_Add;
          uStack_180 = uStack_180 & 0xffffffffffffff00;
          uVar19 = uStack_180;
          local_1f8 = CONCAT44(uStack_134,local_138);
          uStack_1f0 = CONCAT44(fStack_12c,uStack_130);
          local_228 = CONCAT44(uStack_164,local_168);
          uStack_220 = CONCAT44(uStack_15c,uStack_160);
          local_218 = CONCAT44(fStack_154,local_158);
          uStack_200 = CONCAT44(uStack_13c,fStack_140);
          local_208 = local_148;
          uStack_210 = pSStack_150;
          local_238 = local_178;
          uStack_230 = uStack_170;
          local_248 = local_188;
          fStack_240._1_3_ = (uint3)(uVar20 >> 8);
          uVar15 = fStack_240._1_3_;
          fStack_240 = (float)((uint)fStack_240._1_3_ << 8);
          uStack_23c = (undefined1)(uVar20 >> 0x20);
          uStack_180._5_2_ = SUB82(uVar20,5);
          uStack_23b = uStack_180._5_2_;
          uStack_180._7_1_ = SUB81(uVar20,7);
          uStack_239 = uStack_180._7_1_;
          if (local_250 == (System_Collections_Generic_List_EffectText_Segment__o *)0x0) goto label_0420ff4c;
          local_1a8 = local_148;
          uStack_1b0 = pSStack_150;
          pSVar16 = uStack_1b0;
          local_1d8 = local_178;
          uStack_1d0 = uStack_170;
          local_1e8 = local_188;
          pSVar26 = local_1e8;
          fStack_1e0 = (float)((uint)uVar15 << 8);
          uStack_1dc = uStack_23c;
          uStack_1db = uStack_180._5_2_;
          uStack_1d9 = uStack_180._7_1_;
          piVar1 = &(local_250->fields)._version;
          *piVar1 = *piVar1 + 1;
          pPVar12 = (local_250->fields)._items;
          local_1c8 = local_228;
          uStack_1c0 = uStack_220;
          local_1b8 = local_218;
          uStack_1a0 = uStack_200;
          local_198 = local_1f8;
          uStack_190 = uStack_1f0;
          uStack_180 = uVar19;
          if (pPVar12 == (PatreonEffects_EffectText_Segment_array *)0x0) goto label_0420ff51;
          uVar9 = (local_250->fields)._size;
          if (uVar9 < (uint)pPVar12->max_length) {
            (local_250->fields)._size = uVar9 + 1;
            pUVar2 = &pPVar12->m_Items[(int)uVar9].fields.ColorD.fields.value;
            (pUVar2->fields).r = (float)local_138;
            (pUVar2->fields).g = (float)uStack_134;
            (pUVar2->fields).b = (float)uStack_130;
            (pUVar2->fields).a = fStack_12c;
            pSVar13 = &pPVar12->m_Items[(int)uVar9].fields.ColorC;
            (pSVar13->fields).value.fields.g = (float)(undefined4)local_148;
            (pSVar13->fields).value.fields.b = (float)local_148._4_4_;
            *(undefined8 *)(&(pSVar13->fields).value.fields.g + 2) = uStack_200;
            local_1e8._0_4_ = (bool_conflict)local_188;
            local_1e8._4_4_ = (float)((ulong)local_188 >> 0x20);
            uStack_1b0._0_4_ = SUB84(pSStack_150,0);
            uStack_1b0._4_4_ = (undefined4)((ulong)pSStack_150 >> 0x20);
            pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorB.fields.value.fields.b;
            *pfVar3 = local_158;
            pfVar3[1] = fStack_154;
            pfVar3[2] = (float)(undefined4)uStack_1b0;
            pfVar3[3] = (float)uStack_1b0._4_4_;
            pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorA.fields.value.fields.a;
            *pfVar3 = local_168;
            pfVar3[1] = (float)uStack_164;
            pfVar3[2] = (float)uStack_160;
            pfVar3[3] = (float)uStack_15c;
            pSVar13 = &pPVar12->m_Items[(int)uVar9].fields.ColorA;
            (pSVar13->fields).hasValue = (bool_conflict)local_178;
            (pSVar13->fields).value.fields.r = local_178._4_4_;
            (pSVar13->fields).value.fields.g = (float)uStack_170;
            (pSVar13->fields).value.fields.b = uStack_170._4_4_;
            pPVar4 = &pPVar12->m_Items[(int)uVar9].fields;
            *(bool_conflict *)&pPVar4->Content = (bool_conflict)local_1e8;
            *(float *)((long)&pPVar4->Content + 4) = local_1e8._4_4_;
            pPVar4->HasEffect = (bool_conflict)fStack_1e0;
            pPVar4->Effect = (int32_t)(uVar20 >> 0x20);
            local_1e8 = pSVar26;
            uStack_1b0 = pSVar16;
            il2cpp_runtime_helper_022b4080(&pPVar12->m_Items[(int)uVar9].fields,0);
          }
          else {
            item_00.fields.HasEffect = (int)(uVar20 & 0xffffffffffffff00);
            item_00.fields.Effect = (int)((uVar20 & 0xffffffffffffff00) >> 0x20);
            item_00.fields.Content = local_188;
            item_00.fields.ColorA.fields._0_8_ = local_178;
            item_00.fields.ColorA.fields.value.fields.g = (float)(undefined4)uStack_170;
            item_00.fields.ColorA.fields.value.fields.b = uStack_170._4_4_;
            item_00.fields.ColorA.fields.value.fields.a = local_168;
            item_00.fields.ColorB.fields.hasValue = uStack_164;
            item_00.fields.ColorB.fields.value.fields.r = (float)uStack_160;
            item_00.fields.ColorB.fields.value.fields.g = (float)uStack_15c;
            item_00.fields.ColorB.fields.value.fields.b = local_158;
            item_00.fields.ColorB.fields.value.fields.a = fStack_154;
            item_00.fields.ColorC.fields._0_8_ = pSStack_150;
            item_00.fields.ColorC.fields.value.fields.g = (float)(undefined4)local_148;
            item_00.fields.ColorC.fields.value.fields.b = (float)local_148._4_4_;
            item_00.fields.ColorC.fields.value.fields.a = fStack_140;
            item_00.fields.ColorD.fields.hasValue = uStack_13c;
            item_00.fields.ColorD.fields.value.fields.r = (float)local_138;
            item_00.fields.ColorD.fields.value.fields.g = (float)uStack_134;
            item_00.fields.ColorD.fields.value.fields.b = (float)uStack_130;
            item_00.fields.ColorD.fields.value.fields.a = fStack_12c;
            System_Collections_Generic_List_EffectText_Segment___AddWithResize
                      (local_250,item_00,
                       *(MethodInfo_36CAA70 **)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      pSVar27 = (System_Text_RegularExpressions_GroupCollection_o *)
                (**(code **)(*local_258 + 0x188))(local_258,*(undefined8 *)(*local_258 + 400));
      if (pSVar27 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) goto label_0420ff12;
      pSVar28 = System_Text_RegularExpressions_GroupCollection__get_Item_4901c40
                          (pSVar27,"attrs",(MethodInfo *)0x0);
      if (pSVar28 == (System_Text_RegularExpressions_Group_o *)0x0) goto label_0420ff17;
      pSVar26 = System_Text_RegularExpressions_Capture__get_Value
                          ((System_Text_RegularExpressions_Capture_o *)pSVar28,(MethodInfo *)0x0);
      pSVar27 = (System_Text_RegularExpressions_GroupCollection_o *)
                (**(code **)(*local_258 + 0x188))(local_258,*(undefined8 *)(*local_258 + 400));
      if (pSVar27 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) goto label_0420ff1c;
      pSVar28 = System_Text_RegularExpressions_GroupCollection__get_Item_4901c40
                          (pSVar27,"content",(MethodInfo *)0x0);
      if (pSVar28 == (System_Text_RegularExpressions_Group_o *)0x0) goto label_0420ff21;
      local_a0 = System_Text_RegularExpressions_Capture__get_Value
                           ((System_Text_RegularExpressions_Capture_o *)pSVar28,(MethodInfo *)0x0);
      local_264 = 0;
      local_c8 = (System_String_o *)0x0;
      uStack_c0 = 0;
      local_b8 = 0.0;
      local_e8 = (System_String_o *)0x0;
      uStack_e0 = 0;
      local_d8 = 0.0;
      local_108 = (System_String_o *)0x0;
      uStack_100 = 0;
      local_f8 = 0.0;
      local_128 = (System_String_o *)0x0;
      uStack_120 = 0;
      local_118 = 0.0;
      if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_EffectText + 0xb8) + 8);
      if (__this == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0420ff26;
      pSVar23 = System_Text_RegularExpressions_Regex__Matches_4906660(__this,pSVar26,(MethodInfo *)0x0);
      if (pSVar23 == (System_Text_RegularExpressions_MatchCollection_o *)0x0) goto label_0420ff2b;
      pSVar29 = System_Text_RegularExpressions_MatchCollection__GetEnumerator(pSVar23,(MethodInfo *)0x0);
      if (pSVar29 == (System_Collections_IEnumerator_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_0420ff30;
      }
label_0420f23f:
      pSVar10 = pSVar29->klass;
      uVar7._0_1_ = (pSVar10->_2).rank;
      uVar7._1_1_ = (pSVar10->_2).minimumAlignment;
      if ((ulong)uVar7 != 0) {
        pIVar11 = (pSVar10->_1).interfaceOffsets;
        lVar33 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar33) == TypeInfo_IEnumerator) {
            ppIVar24 = &pSVar10->vtable[*(int *)((long)&pIVar11->offset + lVar33)].methodPtr;
            goto label_0420f293;
          }
          lVar33 = lVar33 + 0x10;
        } while ((ulong)uVar7 << 4 != lVar33);
      }
      ppIVar24 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar29,TypeInfo_IEnumerator,0);
label_0420f293:
      cVar21 = (**ppIVar24)(pSVar29,(MethodInfo *)ppIVar24[1]);
      if (cVar21 != '\0') {
        pSVar10 = pSVar29->klass;
        uVar8._0_1_ = (pSVar10->_2).rank;
        uVar8._1_1_ = (pSVar10->_2).minimumAlignment;
        if ((ulong)uVar8 != 0) {
          pIVar11 = (pSVar10->_1).interfaceOffsets;
          lVar33 = 0;
          do {
            if (*(long *)((long)&pIVar11->interfaceType + lVar33) == TypeInfo_IEnumerator) {
              ppIVar24 = &pSVar10->vtable[*(int *)((long)&pIVar11->offset + lVar33) + 1].methodPtr;
              goto label_0420f318;
            }
            lVar33 = lVar33 + 0x10;
          } while ((ulong)uVar8 << 4 != lVar33);
        }
        ppIVar24 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar29,TypeInfo_IEnumerator,1);
label_0420f318:
        plVar25 = (long *)(**ppIVar24)(pSVar29,(MethodInfo *)ppIVar24[1]);
        if (plVar25 == (long *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0420fefb;
        }
        if ((*(byte *)(*plVar25 + 0x130) < *(byte *)(TypeInfo_Match + 0x130)) ||
           (*(long *)(*(long *)(*plVar25 + 200) + -8 + (ulong)*(byte *)(TypeInfo_Match + 0x130) * 8) !=
            TypeInfo_Match)) {
          il2cpp_runtime_helper_022b2fd0(plVar25);
          goto label_0420fefb;
        }
        pSVar27 = (System_Text_RegularExpressions_GroupCollection_o *)
                  (**(code **)(*plVar25 + 0x188))(plVar25,*(undefined8 *)(*plVar25 + 400));
        if (pSVar27 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0420fefb;
        }
        pSVar28 = System_Text_RegularExpressions_GroupCollection__get_Item_4901c40
                            (pSVar27,"key",(MethodInfo *)0x0);
        if (pSVar28 == (System_Text_RegularExpressions_Group_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0420fefb;
        }
        pSVar26 = System_Text_RegularExpressions_Capture__get_Value
                            ((System_Text_RegularExpressions_Capture_o *)pSVar28,(MethodInfo *)0x0);
        if (pSVar26 == (System_String_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0420fefb;
        }
        unaff_R13 = System_String__ToLowerInvariant(pSVar26,(MethodInfo *)0x0);
        pSVar27 = (System_Text_RegularExpressions_GroupCollection_o *)
                  (**(code **)(*plVar25 + 0x188))(plVar25,*(undefined8 *)(*plVar25 + 400));
        if (pSVar27 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0420fefb;
        }
        pSVar28 = System_Text_RegularExpressions_GroupCollection__get_Item_4901c40
                            (pSVar27,"val",(MethodInfo *)0x0);
        if (pSVar28 == (System_Text_RegularExpressions_Group_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0420fefb;
        }
        pSVar26 = System_Text_RegularExpressions_Capture__get_Value
                            ((System_Text_RegularExpressions_Capture_o *)pSVar28,(MethodInfo *)0x0);
        bVar22 = System_String__op_Equality(unaff_R13,"effect",(MethodInfo *)0x0);
        if ((char)bVar22 == '\0') {
          bVar22 = System_String__op_Equality(unaff_R13,"a",(MethodInfo *)0x0);
          if ((char)bVar22 == '\0') {
            bVar22 = System_String__op_Equality(unaff_R13,"b",(MethodInfo *)0x0);
            if ((char)bVar22 == '\0') {
              bVar22 = System_String__op_Equality(unaff_R13,"c",(MethodInfo *)0x0);
              if ((char)bVar22 == '\0') {
                bVar22 = System_String__op_Equality(unaff_R13,"d",(MethodInfo *)0x0);
                if ((char)bVar22 != '\0') {
                  pMVar32 = extraout_RDX_05;
                  if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    pMVar32 = extraout_RDX_06;
                  }
                  PatreonEffects_EffectText__ParseColor
                            ((System_Nullable_Color__o *)&local_1e8,pSVar26,pMVar32);
                  local_118 = (float)local_1d8;
                  local_128 = local_1e8;
                  uStack_120 = CONCAT17(uStack_1d9,CONCAT25(uStack_1db,CONCAT14(uStack_1dc,fStack_1e0)));
                }
              }
              else {
                pMVar32 = extraout_RDX_03;
                if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  pMVar32 = extraout_RDX_04;
                }
                PatreonEffects_EffectText__ParseColor((System_Nullable_Color__o *)&local_1e8,pSVar26,pMVar32);
                local_f8 = (float)local_1d8;
                local_108 = local_1e8;
                uStack_100 = CONCAT17(uStack_1d9,CONCAT25(uStack_1db,CONCAT14(uStack_1dc,fStack_1e0)));
              }
            }
            else {
              pMVar32 = extraout_RDX_01;
              if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar32 = extraout_RDX_02;
              }
              PatreonEffects_EffectText__ParseColor((System_Nullable_Color__o *)&local_1e8,pSVar26,pMVar32);
              local_d8 = (float)local_1d8;
              local_e8 = local_1e8;
              uStack_e0 = CONCAT17(uStack_1d9,CONCAT25(uStack_1db,CONCAT14(uStack_1dc,fStack_1e0)));
            }
          }
          else {
            pMVar32 = extraout_RDX;
            if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pMVar32 = extraout_RDX_00;
            }
            PatreonEffects_EffectText__ParseColor((System_Nullable_Color__o *)&local_1e8,pSVar26,pMVar32);
            local_b8 = (float)local_1d8;
            local_c8 = local_1e8;
            uStack_c0 = CONCAT17(uStack_1d9,CONCAT25(uStack_1db,CONCAT14(uStack_1dc,fStack_1e0)));
          }
        }
        else {
          PatreonEffects_NameEffectPresets__TryResolve(pSVar26,&local_264,(MethodInfo *)0x0);
        }
        goto label_0420f23f;
      }
      unaff_R13 = (System_String_o *)0x0;
      plVar25 = (long *)il2cpp_runtime_helper_023051f0(pSVar29,TypeInfo_IDisposable);
      if (plVar25 != (long *)0x0) {
        lVar33 = *plVar25;
        if ((ulong)*(ushort *)(lVar33 + 0x12e) != 0) {
          lVar34 = 0;
          do {
            if (*(long *)(*(long *)(lVar33 + 0xb0) + lVar34) == TypeInfo_IDisposable) {
              puVar30 = (undefined8 *)
                        (lVar33 + (long)*(int *)(*(long *)(lVar33 + 0xb0) + 8 + lVar34) * 0x10 + 0x138);
              goto label_0420f61d;
            }
            lVar34 = lVar34 + 0x10;
          } while ((ulong)*(ushort *)(lVar33 + 0x12e) << 4 != lVar34);
        }
        puVar30 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar25,TypeInfo_IDisposable,0);
label_0420f61d:
        (*(code *)*puVar30)(plVar25,puVar30[1]);
      }
      iVar14 = local_264;
      fStack_140 = 0.0;
      uStack_13c = 0;
      local_138 = 0;
      uStack_134 = 0;
      pSStack_150 = (System_String_o *)0x0;
      local_148 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      local_158 = 0.0;
      fStack_154 = 0.0;
      uStack_170 = 0;
      local_168 = 0.0;
      uStack_164 = 0;
      uStack_180 = 0;
      local_178 = (System_String_o *)0x0;
      uStack_130 = 0;
      fStack_12c = 0.0;
      local_188 = local_a0;
      il2cpp_runtime_helper_022b4080(&local_188);
      lVar33 = MethodInfo_Void_Add;
      uStack_180 = CONCAT71(uStack_180._1_7_,iVar14 != 0);
      uStack_180 = CONCAT44(local_264,(float)uStack_180);
      local_168 = local_b8;
      local_178 = local_c8;
      uStack_170 = uStack_c0;
      fStack_154 = local_d8;
      uStack_164 = SUB84(local_e8,0);
      uStack_160 = (undefined4)((ulong)local_e8 >> 0x20);
      uStack_15c = (undefined4)uStack_e0;
      local_158 = (float)((ulong)uStack_e0 >> 0x20);
      fStack_140 = local_f8;
      pSStack_150 = local_108;
      local_148 = uStack_100;
      fStack_12c = local_118;
      uStack_13c = SUB84(local_128,0);
      local_138 = (undefined4)((ulong)local_128 >> 0x20);
      uStack_134 = (undefined4)uStack_120;
      uStack_130 = (undefined4)((ulong)uStack_120 >> 0x20);
      local_1f8 = CONCAT44(uStack_134,local_138);
      uStack_1f0 = CONCAT44(local_118,uStack_130);
      local_208 = uStack_100;
      uStack_200 = CONCAT44(uStack_13c,local_f8);
      fStack_240 = (float)uStack_180;
      local_238 = local_c8;
      uStack_230 = uStack_c0;
      local_228 = CONCAT44(uStack_164,local_b8);
      uStack_220 = CONCAT44(uStack_15c,uStack_160);
      local_218 = CONCAT44(local_d8,local_158);
      uStack_210 = local_108;
      local_248 = local_188;
      uStack_23c = (undefined1)local_264;
      uStack_23b = (undefined2)((uint)local_264 >> 8);
      uStack_239 = (undefined1)((uint)local_264 >> 0x18);
      if (local_250 == (System_Collections_Generic_List_EffectText_Segment__o *)0x0) goto label_0420ff30;
      local_1a8 = uStack_100;
      fStack_1e0 = (float)uStack_180;
      local_1d8 = local_c8;
      uStack_1d0 = uStack_c0;
      uStack_1b0 = local_108;
      pSVar16 = uStack_1b0;
      pSVar26 = local_1d8;
      uVar17 = uStack_1d0;
      local_1e8 = local_188;
      uStack_1d9 = uStack_239;
      piVar1 = &(local_250->fields)._version;
      *piVar1 = *piVar1 + 1;
      pPVar12 = (local_250->fields)._items;
      uStack_1dc = uStack_23c;
      uStack_1db = uStack_23b;
      local_1c8 = local_228;
      uStack_1c0 = uStack_220;
      local_1b8 = local_218;
      uStack_1a0 = uStack_200;
      local_198 = local_1f8;
      uStack_190 = uStack_1f0;
      if (pPVar12 == (PatreonEffects_EffectText_Segment_array *)0x0) goto label_0420ff3d;
      uVar9 = (local_250->fields)._size;
      if (uVar9 < (uint)pPVar12->max_length) {
        (local_250->fields)._size = uVar9 + 1;
        pUVar2 = &pPVar12->m_Items[(int)uVar9].fields.ColorD.fields.value;
        (pUVar2->fields).r = (float)local_138;
        (pUVar2->fields).g = (float)uStack_134;
        (pUVar2->fields).b = (float)uStack_130;
        (pUVar2->fields).a = local_118;
        pSVar13 = &pPVar12->m_Items[(int)uVar9].fields.ColorC;
        (pSVar13->fields).value.fields.g = (float)(undefined4)uStack_100;
        (pSVar13->fields).value.fields.b = (float)uStack_100._4_4_;
        *(undefined8 *)(&(pSVar13->fields).value.fields.g + 2) = uStack_200;
        local_1d8._0_4_ = SUB84(local_c8,0);
        local_1d8._4_4_ = (float)((ulong)local_c8 >> 0x20);
        uStack_1d0._0_4_ = (float)uStack_c0;
        uStack_1d0._4_4_ = (float)((ulong)uStack_c0 >> 0x20);
        uStack_1b0._0_4_ = SUB84(local_108,0);
        uStack_1b0._4_4_ = (undefined4)((ulong)local_108 >> 0x20);
        pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorB.fields.value.fields.b;
        *pfVar3 = local_158;
        pfVar3[1] = local_d8;
        pfVar3[2] = (float)(undefined4)uStack_1b0;
        pfVar3[3] = (float)uStack_1b0._4_4_;
        pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorA.fields.value.fields.a;
        *pfVar3 = local_b8;
        pfVar3[1] = (float)uStack_164;
        pfVar3[2] = (float)uStack_160;
        pfVar3[3] = (float)uStack_15c;
        pSVar13 = &pPVar12->m_Items[(int)uVar9].fields.ColorA;
        (pSVar13->fields).hasValue = (bool_conflict)(float)local_1d8;
        (pSVar13->fields).value.fields.r = local_1d8._4_4_;
        (pSVar13->fields).value.fields.g = (float)uStack_1d0;
        (pSVar13->fields).value.fields.b = uStack_1d0._4_4_;
        pPVar4 = &pPVar12->m_Items[(int)uVar9].fields;
        *(int *)&pPVar4->Content = (int)local_188;
        *(undefined4 *)((long)&pPVar4->Content + 4) = local_188._4_4_;
        pPVar4->HasEffect = (bool_conflict)(float)uStack_180;
        pPVar4->Effect = local_264;
        local_1d8 = pSVar26;
        uStack_1d0 = uVar17;
        uStack_1b0 = pSVar16;
        il2cpp_runtime_helper_022b4080(&pPVar12->m_Items[(int)uVar9].fields,0);
      }
      else {
        item.fields.Effect._0_1_ = uStack_23c;
        item.fields.HasEffect = (bool_conflict)(float)uStack_180;
        item.fields.Effect._1_2_ = uStack_23b;
        item.fields.Effect._3_1_ = uStack_239;
        item.fields.Content = local_188;
        item.fields.ColorA.fields._0_8_ = local_c8;
        item.fields.ColorA.fields.value.fields.g = (float)(undefined4)uStack_c0;
        item.fields.ColorA.fields.value.fields.b = (float)uStack_c0._4_4_;
        item.fields.ColorA.fields.value.fields.a = local_b8;
        item.fields.ColorB.fields.hasValue = uStack_164;
        item.fields.ColorB.fields.value.fields.r = (float)uStack_160;
        item.fields.ColorB.fields.value.fields.g = (float)uStack_15c;
        item.fields.ColorB.fields.value.fields.b = local_158;
        item.fields.ColorB.fields.value.fields.a = local_d8;
        item.fields.ColorC.fields._0_8_ = local_108;
        item.fields.ColorC.fields.value.fields.g = (float)(undefined4)uStack_100;
        item.fields.ColorC.fields.value.fields.b = (float)uStack_100._4_4_;
        item.fields.ColorC.fields.value.fields.a = local_f8;
        item.fields.ColorD.fields.hasValue = uStack_13c;
        item.fields.ColorD.fields.value.fields.r = (float)local_138;
        item.fields.ColorD.fields.value.fields.g = (float)uStack_134;
        item.fields.ColorD.fields.value.fields.b = (float)uStack_130;
        item.fields.ColorD.fields.value.fields.a = local_118;
        System_Collections_Generic_List_EffectText_Segment___AddWithResize
                  (local_250,item,*(MethodInfo_36CAA70 **)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70))
        ;
      }
      local_268 = *(int *)((long)local_258 + 0x14) + (int)local_258[2];
      goto label_0420ece0;
    }
label_0420ff0d:
    il2cpp_runtime_helper_022b2c90();
label_0420ff12:
    il2cpp_runtime_helper_022b2c90();
label_0420ff17:
    il2cpp_runtime_helper_022b2c90();
label_0420ff1c:
    il2cpp_runtime_helper_022b2c90();
label_0420ff21:
    il2cpp_runtime_helper_022b2c90();
label_0420ff26:
    il2cpp_runtime_helper_022b2c90();
label_0420ff2b:
    il2cpp_runtime_helper_022b2c90();
label_0420ff30:
    il2cpp_runtime_helper_022b2c90();
label_0420ff3d:
    il2cpp_runtime_helper_022b2c90();
label_0420ff42:
    il2cpp_runtime_helper_022b2c90();
label_0420ff47:
    il2cpp_runtime_helper_022b2c90();
    uVar19 = uStack_180;
label_0420ff4c:
    uStack_180 = uVar19;
    il2cpp_runtime_helper_022b2c90();
label_0420ff51:
    il2cpp_runtime_helper_022b2c90();
    uVar20 = uStack_180;
  }
  do {
    uStack_180 = uVar20;
    il2cpp_runtime_helper_022b2c90();
label_0420ff5b:
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar35 = il2cpp_runtime_helper_022fefe0(unaff_R15);
      local_268 = 0;
      if (auVar35._8_4_ != 1) {
        plVar25 = (long *)il2cpp_runtime_helper_023051f0(local_260,TypeInfo_IDisposable);
        if (plVar25 == (long *)0x0) goto label_04210006;
        lVar33 = *plVar25;
        if ((ulong)*(ushort *)(lVar33 + 0x12e) == 0) goto label_0420ffdf;
        lVar34 = 0;
        goto label_0420ffd0;
      }
      iVar31 = 0;
      puVar30 = (undefined8 *)__cxa_begin_catch(auVar35._0_8_);
      unaff_R15 = (long *)*puVar30;
      __cxa_end_catch();
label_0420faf9:
      plVar25 = (long *)il2cpp_runtime_helper_023051f0(local_260,TypeInfo_IDisposable);
      if (plVar25 != (long *)0x0) {
        lVar33 = *plVar25;
        if ((ulong)*(ushort *)(lVar33 + 0x12e) != 0) {
          lVar34 = 0;
          do {
            if (*(long *)(*(long *)(lVar33 + 0xb0) + lVar34) == TypeInfo_IDisposable) {
              puVar30 = (undefined8 *)
                        (lVar33 + (long)*(int *)(*(long *)(lVar33 + 0xb0) + 8 + lVar34) * 0x10 + 0x138);
              goto label_0420fb6d;
            }
            lVar34 = lVar34 + 0x10;
          } while ((ulong)*(ushort *)(lVar33 + 0x12e) << 4 != lVar34);
        }
        puVar30 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar25,TypeInfo_IDisposable,0);
label_0420fb6d:
        (*(code *)*puVar30)(plVar25,puVar30[1]);
      }
    } while (unaff_R15 != (long *)0x0);
    if ((iVar31 != 0xd) && (iVar31 != 0)) {
      return local_250;
    }
    uVar20 = uStack_180;
    if (local_a8 != (System_String_o *)0x0) {
      if ((local_a8->fields)._stringLength <= local_268) {
        return local_250;
      }
      pSVar26 = System_String__Substring(local_a8,local_268,(MethodInfo *)0x0);
      uVar20 = uStack_180;
      if (pSVar26 != (System_String_o *)0x0) {
        if ((pSVar26->fields)._stringLength < 1) {
          return local_250;
        }
        fStack_140 = 0.0;
        uStack_13c = 0;
        local_138 = 0;
        uStack_134 = 0;
        pSStack_150 = (System_String_o *)0x0;
        local_148 = 0;
        uStack_160 = 0;
        uStack_15c = 0;
        local_158 = 0.0;
        fStack_154 = 0.0;
        uStack_170 = 0;
        local_168 = 0.0;
        uStack_164 = 0;
        uStack_180 = 0;
        local_178 = (System_String_o *)0x0;
        uStack_130 = 0;
        fStack_12c = 0.0;
        local_188 = pSVar26;
        il2cpp_runtime_helper_022b4080(&local_188,pSVar26);
        uVar19 = uStack_180;
        lVar33 = MethodInfo_Void_Add;
        uStack_180 = uStack_180 & 0xffffffffffffff00;
        uVar20 = uStack_180;
        local_48 = CONCAT44(uStack_134,local_138);
        uStack_40 = CONCAT44(fStack_12c,uStack_130);
        local_78 = CONCAT44(uStack_164,local_168);
        uStack_70 = CONCAT44(uStack_15c,uStack_160);
        local_68 = CONCAT44(fStack_154,local_158);
        uStack_50 = CONCAT44(uStack_13c,fStack_140);
        local_58 = local_148;
        pSStack_60 = pSStack_150;
        local_88 = local_178;
        uStack_80 = uStack_170;
        local_98 = local_188;
        local_90 = 0;
        uStack_180._1_4_ = SUB84(uVar19,1);
        local_8f = uStack_180._1_4_;
        uStack_180._5_2_ = SUB82(uVar19,5);
        local_8b = uStack_180._5_2_;
        uStack_180._7_1_ = SUB81(uVar19,7);
        local_89 = uStack_180._7_1_;
        if (local_250 != (System_Collections_Generic_List_EffectText_Segment__o *)0x0) {
          local_208 = local_148;
          uStack_210 = pSStack_150;
          pSVar18 = uStack_210;
          local_238 = local_178;
          pSVar16 = local_238;
          uStack_230 = uStack_170;
          uVar17 = uStack_230;
          local_248 = local_188;
          pSVar26 = local_248;
          fStack_240._1_3_ = (uint3)(uVar19 >> 8);
          fStack_240 = (float)((uint)fStack_240._1_3_ << 8);
          uStack_23c = (undefined1)(uVar19 >> 0x20);
          uStack_23b = uStack_180._5_2_;
          uStack_239 = uStack_180._7_1_;
          piVar1 = &(local_250->fields)._version;
          *piVar1 = *piVar1 + 1;
          pPVar12 = (local_250->fields)._items;
          local_228 = local_78;
          uStack_220 = uStack_70;
          local_218 = local_68;
          uStack_200 = uStack_50;
          local_1f8 = local_48;
          uStack_1f0 = uStack_40;
          if (pPVar12 != (PatreonEffects_EffectText_Segment_array *)0x0) {
            uVar9 = (local_250->fields)._size;
            uStack_180 = uVar20;
            if (uVar9 < (uint)pPVar12->max_length) {
              (local_250->fields)._size = uVar9 + 1;
              pUVar2 = &pPVar12->m_Items[(int)uVar9].fields.ColorD.fields.value;
              (pUVar2->fields).r = (float)local_138;
              (pUVar2->fields).g = (float)uStack_134;
              (pUVar2->fields).b = (float)uStack_130;
              (pUVar2->fields).a = fStack_12c;
              pSVar13 = &pPVar12->m_Items[(int)uVar9].fields.ColorC;
              (pSVar13->fields).value.fields.g = (float)(undefined4)local_148;
              (pSVar13->fields).value.fields.b = (float)local_148._4_4_;
              *(undefined8 *)(&(pSVar13->fields).value.fields.g + 2) = uStack_50;
              local_248._0_4_ = SUB84(local_188,0);
              local_248._4_4_ = (undefined4)((ulong)local_188 >> 0x20);
              local_238._0_4_ = (bool_conflict)local_178;
              local_238._4_4_ = (float)((ulong)local_178 >> 0x20);
              uStack_230._0_4_ = (float)uStack_170;
              uStack_230._4_4_ = (float)((ulong)uStack_170 >> 0x20);
              uStack_210._0_4_ = SUB84(pSStack_150,0);
              uStack_210._4_4_ = (undefined4)((ulong)pSStack_150 >> 0x20);
              pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorB.fields.value.fields.b;
              *pfVar3 = local_158;
              pfVar3[1] = fStack_154;
              pfVar3[2] = (float)(undefined4)uStack_210;
              pfVar3[3] = (float)uStack_210._4_4_;
              pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorA.fields.value.fields.a;
              *pfVar3 = local_168;
              pfVar3[1] = (float)uStack_164;
              pfVar3[2] = (float)uStack_160;
              pfVar3[3] = (float)uStack_15c;
              pSVar13 = &pPVar12->m_Items[(int)uVar9].fields.ColorA;
              (pSVar13->fields).hasValue = (bool_conflict)local_238;
              (pSVar13->fields).value.fields.r = local_238._4_4_;
              (pSVar13->fields).value.fields.g = (float)uStack_230;
              (pSVar13->fields).value.fields.b = uStack_230._4_4_;
              pPVar4 = &pPVar12->m_Items[(int)uVar9].fields;
              *(undefined4 *)&pPVar4->Content = (undefined4)local_248;
              *(undefined4 *)((long)&pPVar4->Content + 4) = local_248._4_4_;
              pPVar4->HasEffect = (bool_conflict)fStack_240;
              pPVar4->Effect = (int32_t)(uVar19 >> 0x20);
              local_248 = pSVar26;
              local_238 = pSVar16;
              uStack_230 = uVar17;
              uStack_210 = pSVar18;
              il2cpp_runtime_helper_022b4080(&pPVar12->m_Items[(int)uVar9].fields,0);
            }
            else {
              item_01.fields.HasEffect = (int)(uVar19 & 0xffffffffffffff00);
              item_01.fields.Effect = (int)((uVar19 & 0xffffffffffffff00) >> 0x20);
              item_01.fields.Content = local_188;
              item_01.fields.ColorA.fields._0_8_ = local_178;
              item_01.fields.ColorA.fields.value.fields.g = (float)(undefined4)uStack_170;
              item_01.fields.ColorA.fields.value.fields.b = uStack_170._4_4_;
              item_01.fields.ColorA.fields.value.fields.a = local_168;
              item_01.fields.ColorB.fields.hasValue = uStack_164;
              item_01.fields.ColorB.fields.value.fields.r = (float)uStack_160;
              item_01.fields.ColorB.fields.value.fields.g = (float)uStack_15c;
              item_01.fields.ColorB.fields.value.fields.b = local_158;
              item_01.fields.ColorB.fields.value.fields.a = fStack_154;
              item_01.fields.ColorC.fields._0_8_ = pSStack_150;
              item_01.fields.ColorC.fields.value.fields.g = (float)(undefined4)local_148;
              item_01.fields.ColorC.fields.value.fields.b = (float)local_148._4_4_;
              item_01.fields.ColorC.fields.value.fields.a = fStack_140;
              item_01.fields.ColorD.fields.hasValue = uStack_13c;
              item_01.fields.ColorD.fields.value.fields.r = (float)local_138;
              item_01.fields.ColorD.fields.value.fields.g = (float)uStack_134;
              item_01.fields.ColorD.fields.value.fields.b = (float)uStack_130;
              item_01.fields.ColorD.fields.value.fields.a = fStack_12c;
              System_Collections_Generic_List_EffectText_Segment___AddWithResize
                        (local_250,item_01,
                         *(MethodInfo_36CAA70 **)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70));
            }
            return local_250;
          }
        }
      }
    }
  } while( true );
  while (lVar34 = lVar34 + 0x10, (ulong)*(ushort *)(lVar33 + 0x12e) << 4 != lVar34) {
label_0420ffd0:
    if (*(long *)(*(long *)(lVar33 + 0xb0) + lVar34) == TypeInfo_IDisposable) {
      puVar30 = (undefined8 *)(lVar33 + (long)*(int *)(*(long *)(lVar33 + 0xb0) + 8 + lVar34) * 0x10 + 0x138);
      goto label_0420fffd;
    }
  }
label_0420ffdf:
  puVar30 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar25,TypeInfo_IDisposable,0);
label_0420fffd:
  (*(code *)*puVar30)(plVar25,puVar30[1]);
label_04210006:
  _Unwind_Resume(auVar35._0_8_);
}


// PatreonEffects.EffectText$$ParseColor
// il2cpp: System_Nullable_Color__o PatreonEffects_EffectText__ParseColor (System_String_o* hex, const MethodInfo* method);
// 0x42100a0

System_Nullable_Color__o *
PatreonEffects_EffectText__ParseColor
          (System_Nullable_Color__o *__return_storage_ptr__,System_String_o *hex,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Nullable_Color__o __this_03;
  System_Nullable_Color__o __this_04;
  System_Nullable_Color__o __this_05;
  System_Nullable_Color__o __this_06;
  UnityEngine_Color_o value;
  System_Nullable_Color__o __this_07;
  System_RuntimeTypeHandle_o SVar4;
  bool_conflict bVar5;
  System_Type_array *pSVar6;
  System_Type_o *pSVar7;
  long lVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  Il2CppObject *pIVar12;
  long lVar13;
  TMPro_TMP_Text_o *__this_08;
  System_String_o *pSVar14;
  PatreonEffects_NameEffectController_o *__this_09;
  PatreonEffects_NameEffectSettings_o *settings;
  System_Nullable_Color__o *extraout_RAX;
  System_Nullable_Color__o *pSVar15;
  long *plVar16;
  float unaff_EBX;
  ulong unaff_R12;
  char unaff_R14B;
  undefined4 uVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [12];
  UnityEngine_Color_Fields UVar21;
  char unaff_retaddr;
  System_Collections_Generic_List_T__o *pSVar22;
  Il2CppMethodPointer pIVar23;
  UnityEngine_Object_o *pUVar24;
  UnityEngine_Object_o *pUVar25;
  undefined1 in_stack_ffffffffffffff48 [12];
  float fVar26;
  float fStack_98;
  ulong uVar27;
  int32_t type;
  undefined1 auStack_38 [8];
  char cVar28;
  char *pcVar29;
  
  if (g_data_057ad904 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Color);
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057ad904 = '\x01';
  }
  fVar26 = 0.0;
  fVar18 = 0.0;
  pcVar29 = (char *)0x0;
  pSVar14 = hex;
  bVar5 = System_String__IsNullOrEmpty(hex,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
label_0421015c:
    (__return_storage_ptr__->fields).hasValue = 0;
    (__return_storage_ptr__->fields).value.fields.r = 0.0;
    (__return_storage_ptr__->fields).value.fields.g = 0.0;
    (__return_storage_ptr__->fields).value.fields.b = 0.0;
    (__return_storage_ptr__->fields).value.fields.a = 0.0;
    return __return_storage_ptr__;
  }
  if (hex != (System_String_o *)0x0) {
    bVar5 = System_String__StartsWith(hex,"#",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      hex = System_String__Concat_3ae5ba0("#",hex,(MethodInfo *)0x0);
    }
    bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                      (hex,(UnityEngine_Color_o *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      value.fields.g = fVar18;
      value.fields.r = fVar26;
      value.fields._8_8_ = pcVar29;
      (__return_storage_ptr__->fields).hasValue = 0;
      (__return_storage_ptr__->fields).value.fields.r = 0.0;
      (__return_storage_ptr__->fields).value.fields.g = 0.0;
      (__return_storage_ptr__->fields).value.fields.b = 0.0;
      (__return_storage_ptr__->fields).value.fields.a = 0.0;
      __this_07.fields.value.fields.r = fVar18;
      __this_07.fields.hasValue = (bool_conflict)fVar26;
      __this_07.fields.value.fields._4_8_ = pcVar29;
      __this_07.fields.value.fields.a = unaff_EBX;
      System_Nullable_Color____ctor(__this_07,value,(MethodInfo_37E42E0 *)__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    goto label_0421015c;
  }
  il2cpp_runtime_helper_022b2c90();
  cVar28 = SUB41(fVar18,0);
  auStack_38 = (undefined1  [8])__return_storage_ptr__;
  if (g_data_057ad907 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"EffectTextSpacer");
    g_data_057ad907 = '\x01';
  }
  pSVar6 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar4 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
  if (pSVar6 == (System_Type_array *)0x0) {
label_0421037e:
    il2cpp_runtime_helper_022b2c90();
label_04210383:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar7 == (System_Type_o *)0x0) || (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7), lVar8 != 0)) {
    if ((int)pSVar6->max_length != 0) {
      pSVar6->m_Items[0] = pSVar7;
      il2cpp_runtime_helper_022b4080(pSVar6->m_Items);
      pSVar7 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar7 != (System_Type_o *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7), lVar8 == 0))
      goto label_04210388;
      if (1 < (uint)pSVar6->max_length) {
        pSVar6->m_Items[1] = pSVar7;
        il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 1,pSVar7);
        pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor_4dfc440(pUVar9,"EffectTextSpacer",pSVar6,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
          pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
          pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar14,(MethodInfo *)0x0)
          ;
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_4e09e30(pUVar10,pUVar11,0,(MethodInfo *)0x0);
            pIVar12 = UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar12 != (Il2CppObject *)0x0) {
              (*pIVar12->klass->vtable[0x26].methodPtr)
                        (pSVar14[1].fields._stringLength,pIVar12,pIVar12->klass->vtable[0x26].method);
              (*pIVar12->klass->vtable[0x24].methodPtr)
                        (0x3f800000,pIVar12,pIVar12->klass->vtable[0x24].method);
              return (System_Nullable_Color__o *)pUVar9;
            }
          }
        }
        goto label_0421037e;
      }
    }
    goto label_04210383;
  }
label_04210388:
  lVar8 = il2cpp_runtime_helper_0231b270();
  pUVar10 = (UnityEngine_Transform_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ad906 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"Segment");
    il2cpp_runtime_helper_023445d0(&"|");
    g_data_057ad906 = '\x01';
  }
  pSVar6 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar4 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
  if (pSVar6 == (System_Type_array *)0x0) goto label_042108ea;
  if ((pSVar7 != (System_Type_o *)0x0) &&
     (lVar13 = il2cpp_runtime_helper_023051f0(pSVar7,(((pSVar6->obj).klass)->_1).element_class), lVar13 == 0))
  goto label_042108f4;
  if ((int)pSVar6->max_length != 0) {
    pSVar6->m_Items[0] = pSVar7;
    il2cpp_runtime_helper_022b4080(pSVar6->m_Items);
    pSVar7 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
    if ((pSVar7 != (System_Type_o *)0x0) &&
       (lVar13 = il2cpp_runtime_helper_023051f0(pSVar7,(((pSVar6->obj).klass)->_1).element_class), lVar13 == 0))
    goto label_042108f4;
    if (1 < (uint)pSVar6->max_length) {
      pSVar6->m_Items[1] = pSVar7;
      il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 1);
      pSVar7 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
      if ((pSVar7 != (System_Type_o *)0x0) &&
         (lVar13 = il2cpp_runtime_helper_023051f0(pSVar7,(((pSVar6->obj).klass)->_1).element_class), lVar13 == 0))
      goto label_042108f4;
      if (2 < (uint)pSVar6->max_length) {
        pSVar6->m_Items[2] = pSVar7;
        il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 2);
        pSVar7 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
        if ((pSVar7 != (System_Type_o *)0x0) &&
           (lVar13 = il2cpp_runtime_helper_023051f0(pSVar7,(((pSVar6->obj).klass)->_1).element_class), lVar13 == 0))
        goto label_042108f4;
        if (3 < (uint)pSVar6->max_length) {
          pSVar6->m_Items[3] = pSVar7;
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 3,pSVar7);
          pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          UnityEngine_GameObject___ctor_4dfc440(pUVar9,"Segment",pSVar6,(MethodInfo *)0x0);
          if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar11 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
             pUVar11 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetParent_4e09e30(pUVar11,pUVar10,0,(MethodInfo *)0x0);
            __this_08 = (TMPro_TMP_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
            if (__this_08 != (TMPro_TMP_Text_o *)0x0) {
              (*(__this_08->klass->vtable)._66_set_text.methodPtr)
                        (__this_08,0,(__this_08->klass->vtable)._66_set_text.method);
              pUVar24 = *(UnityEngine_Object_o **)(lVar8 + 0x40);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar5 = UnityEngine_Object__op_Inequality(pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if ((char)bVar5 != '\0') {
                TMPro_TMP_Text__set_font
                          (__this_08,*(TMPro_TMP_FontAsset_o **)(lVar8 + 0x40),(MethodInfo *)0x0);
              }
              TMPro_TMP_Text__set_fontSize(__this_08,*(float *)(lVar8 + 0x28),(MethodInfo *)0x0);
              if ((unaff_R12 & 1) == 0) {
                uVar17 = (undefined4)*(undefined8 *)(lVar8 + 0x2c);
                uVar19 = *(undefined8 *)(lVar8 + 0x34);
              }
              else {
                uVar19 = 0x3f8000003f800000;
                uVar17 = 0x3f800000;
              }
              uVar27 = unaff_R12;
              (*(__this_08->klass->vtable)._23_set_color.methodPtr)
                        (uVar17,uVar19,__this_08,(__this_08->klass->vtable)._23_set_color.method);
              type = (int32_t)(uVar27 >> 0x20);
              TMPro_TMP_Text__set_alignment(__this_08,*(int32_t *)(lVar8 + 0x48),(MethodInfo *)0x0);
              TMPro_TMP_Text__set_richText(__this_08,(uint)*(byte *)(lVar8 + 0x4c),(MethodInfo *)0x0);
              TMPro_TMP_Text__set_enableWordWrapping(__this_08,0,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_overflowMode(__this_08,0,(MethodInfo *)0x0);
              pSVar14 = System_String__Concat_3ae5ba0((System_String_o *)0x0,"|",(MethodInfo *)0x0);
              UVar2 = TMPro_TMP_Text__GetPreferredValues_4c70170
                                (__this_08,pSVar14,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
              UVar3 = TMPro_TMP_Text__GetPreferredValues_4c70170
                                (__this_08,"|",3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
              fVar26 = UVar3.fields.x;
              uVar17 = (*(__this_08->klass->vtable)._85_get_preferredHeight.methodPtr)
                                 (__this_08,(__this_08->klass->vtable)._85_get_preferredHeight.method);
              pIVar12 = UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar12 != (Il2CppObject *)0x0) {
                fStack_98 = UVar2.fields.x;
                fVar18 = fStack_98 - fVar26;
                if (fStack_98 - fVar26 <= 0.0) {
                  fVar18 = 0.0;
                }
                (*pIVar12->klass->vtable[0x24].methodPtr)(fVar18,pIVar12,pIVar12->klass->vtable[0x24].method);
                (*pIVar12->klass->vtable[0x26].methodPtr)(uVar17,pIVar12,pIVar12->klass->vtable[0x26].method);
                if ((unaff_R12 & 1) == 0) {
                  return (System_Nullable_Color__o *)pUVar9;
                }
                __this_09 = (PatreonEffects_NameEffectController_o *)
                            UnityEngine_GameObject__AddComponent_object_(pUVar9,MethodInfo_NameEffectController_AddComponent_NameEffectController);
                if (__this_09 != (PatreonEffects_NameEffectController_o *)0x0) {
                  PatreonEffects_NameEffectController__AutoConfigure(__this_09,(MethodInfo *)0x0);
                  settings = PatreonEffects_NameEffectPresets__GetPreset(type,(MethodInfo *)0x0);
                  if (auStack_38[0] != '\0') {
                    __this_03.fields.value.fields.b = (float)uVar17;
                    __this_03.fields.hasValue = in_stack_ffffffffffffff48._0_4_;
                    __this_03.fields.value.fields.r = (float)in_stack_ffffffffffffff48._4_4_;
                    __this_03.fields.value.fields.g = (float)in_stack_ffffffffffffff48._8_4_;
                    __this_03.fields.value.fields.a = fVar26;
                    UVar21 = (UnityEngine_Color_Fields)
                             System_Nullable_Color___get_Value(__this_03,(MethodInfo_37E4300 *)auStack_38);
                    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_042108ea;
                    (settings->fields).gradientA.fields = UVar21;
                  }
                  if (cVar28 != '\0') {
                    __this_04.fields.value.fields.b = (float)uVar17;
                    __this_04.fields.hasValue = in_stack_ffffffffffffff48._0_4_;
                    __this_04.fields.value.fields.r = (float)in_stack_ffffffffffffff48._4_4_;
                    __this_04.fields.value.fields.g = (float)in_stack_ffffffffffffff48._8_4_;
                    __this_04.fields.value.fields.a = fVar26;
                    UVar21 = (UnityEngine_Color_Fields)
                             System_Nullable_Color___get_Value
                                       (__this_04,(MethodInfo_37E4300 *)&stack0xffffffffffffffdc);
                    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_042108ea;
                    (settings->fields).gradientB.fields = UVar21;
                  }
                  if (unaff_R14B != '\0') {
                    __this_05.fields.value.fields.b = (float)uVar17;
                    __this_05.fields.hasValue = in_stack_ffffffffffffff48._0_4_;
                    __this_05.fields.value.fields.r = (float)in_stack_ffffffffffffff48._4_4_;
                    __this_05.fields.value.fields.g = (float)in_stack_ffffffffffffff48._8_4_;
                    __this_05.fields.value.fields.a = fVar26;
                    UVar21 = (UnityEngine_Color_Fields)
                             System_Nullable_Color___get_Value
                                       (__this_05,(MethodInfo_37E4300 *)&stack0xfffffffffffffff0);
                    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_042108ea;
                    (settings->fields).gradientC.fields = UVar21;
                  }
                  if (unaff_retaddr == '\0') {
label_042108cb:
                    PatreonEffects_NameEffectController__Apply(__this_09,settings,(MethodInfo *)0x0);
                    return (System_Nullable_Color__o *)pUVar9;
                  }
                  __this_06.fields.value.fields.b = (float)uVar17;
                  __this_06.fields.hasValue = in_stack_ffffffffffffff48._0_4_;
                  __this_06.fields.value.fields.r = (float)in_stack_ffffffffffffff48._4_4_;
                  __this_06.fields.value.fields.g = (float)in_stack_ffffffffffffff48._8_4_;
                  __this_06.fields.value.fields.a = fVar26;
                  UVar21 = (UnityEngine_Color_Fields)
                           System_Nullable_Color___get_Value(__this_06,(MethodInfo_37E4300 *)&stack0x00000004)
                  ;
                  if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
                    (settings->fields).gradientD.fields = UVar21;
                    goto label_042108cb;
                  }
                }
              }
            }
          }
label_042108ea:
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_042108f4:
  lVar8 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(lVar8,0);
  if (g_data_057ad90a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad90a = '\x01';
  }
  pSVar22 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar23 = (Il2CppMethodPointer)0x0;
  pUVar24 = (UnityEngine_Object_o *)0x0;
  if (*(System_Collections_Generic_List_object__o **)(lVar8 + 0x50) ==
      (System_Collections_Generic_List_object__o *)0x0) goto label_04210a5f;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff00,
             *(System_Collections_Generic_List_object__o **)(lVar8 + 0x50),MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  pUVar25 = pUVar24;
  while (pUVar24 = pUVar25, __this.fields._8_8_ = pIVar23, __this.fields._list = pSVar22,
        __this.fields._current = (Il2CppObject *)pUVar24,
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff00), (char)bVar5 != '\0') {
    pUVar25 = pUVar24;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(pUVar24,(MethodInfo *)0x0);
    }
  }
  __this_00.fields._8_8_ = pIVar23;
  __this_00.fields._list = pSVar22;
  __this_00.fields._current = (Il2CppObject *)pUVar24;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_00,(MethodInfo_321A1C0 *)&stack0xffffffffffffff00);
  do {
    pSVar15 = *(System_Nullable_Color__o **)(lVar8 + 0x50);
    if (pSVar15 != (System_Nullable_Color__o *)0x0) {
      pfVar1 = &pSVar15[1].fields.value.fields.g;
      *pfVar1 = (float)((int)*pfVar1 + 1);
      fVar26 = pSVar15[1].fields.value.fields.r;
      pSVar15[1].fields.value.fields.r = 0.0;
      if (0 < (int)fVar26) {
        System_Array__Clear(*(System_Array_o **)&(pSVar15->fields).value.fields.a,0,(int32_t)fVar26,
                            (MethodInfo *)0x0);
        pSVar15 = extraout_RAX;
      }
      return pSVar15;
    }
label_04210a5f:
    auVar20 = il2cpp_runtime_helper_022b2c90();
    if (auVar20._8_4_ != 1) goto label_04210abd;
    plVar16 = (long *)__cxa_begin_catch(auVar20._0_8_);
    lVar13 = *plVar16;
    __cxa_end_catch();
    __this_01.fields._8_8_ = pIVar23;
    __this_01.fields._list = pSVar22;
    __this_01.fields._current = (Il2CppObject *)pUVar24;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff00);
  } while (lVar13 == 0);
  il2cpp_runtime_helper_022fefe0(lVar13);
label_04210abd:
  __this_02.fields._8_8_ = pIVar23;
  __this_02.fields._list = pSVar22;
  __this_02.fields._current = (Il2CppObject *)pUVar24;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff00);
  _Unwind_Resume(auVar20._0_8_);
}


// PatreonEffects.EffectText$$Rebuild
// il2cpp: void PatreonEffects_EffectText__Rebuild (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x420d670

void PatreonEffects_EffectText__Rebuild(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  System_String_o *pSVar4;
  UnityEngine_GameObject_array *pUVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_T__o __this_04;
  PatreonEffects_EffectText_Segment_o seg;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar6;
  System_String_array *pSVar7;
  System_Collections_Generic_List_EffectText_Segment__o *__this_05;
  System_Type_o *pSVar8;
  long lVar9;
  UnityEngine_GameObject_o *__this_06;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_07;
  UnityEngine_UI_ContentSizeFitter_o *__this_08;
  UnityEngine_GameObject_o *item;
  undefined8 uVar11;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  MethodInfo *method_01;
  System_Type_array *unaff_R15;
  UnityEngine_Object_o *in_stack_fffffffffffffdf8;
  Il2CppRGCTXData *in_stack_fffffffffffffe00;
  _union_249689 in_stack_fffffffffffffe08;
  undefined1 auStack_1a8 [72];
  Il2CppType *pIStack_160;
  Il2CppType **ppIStack_158;
  Il2CppRGCTXData *pIStack_150;
  _union_249491 _Stack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  MethodInfo_322DD00 MStack_118;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  UnityEngine_Object_o *pUStack_90;
  Il2CppRGCTXData *pIStack_88;
  _union_249689 _Stack_80;
  Il2CppType *pIStack_78;
  Il2CppType **ppIStack_70;
  Il2CppRGCTXData *pIStack_68;
  _union_249491 _Stack_60;
  uint32_t uStack_58;
  uint16_t uStack_54;
  uint16_t uStack_52;
  uint16_t uStack_50;
  uint8_t uStack_4e;
  uint8_t uStack_4d;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (g_data_057ad905 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectText);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EffectText_Segment_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_PatreonEffects_EffectText_Segment_Ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"EffectTextRow");
    g_data_057ad905 = '\x01';
  }
  auStack_1a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_1a8._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_1a8._16_8_ = (UnityEngine_Object_o *)0x0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  MStack_118.slot = 0;
  MStack_118.parameters_count = '\0';
  MStack_118.bitflags = '\0';
  MStack_118._84_4_ = 0;
  uStack_c0 = 0;
  MStack_118.field8_0x40.genericMethod = (void *)0x0;
  MStack_118.token = 0;
  MStack_118.flags = 0;
  MStack_118.iflags = 0;
  MStack_118.parameters = (Il2CppType **)0x0;
  MStack_118.rgctx_data = (Il2CppRGCTXData *)0x0;
  MStack_118.klass = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  MStack_118.return_type = (Il2CppType *)0x0;
  MStack_118.invoker_method = (InvokerMethod)0x0;
  MStack_118.name = (char *)0x0;
  MStack_118.methodPointer = (Il2CppMethodPointer)0x0;
  MStack_118.virtualMethodPointer = (Il2CppMethodPointer)0x0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_138._0_2_ = 0;
  uStack_138._2_1_ = '\0';
  uStack_138._3_1_ = '\0';
  uStack_138._4_4_ = 0;
  uStack_130 = 0;
  _Stack_148.genericMethod = (void *)0x0;
  uStack_140._0_4_ = 0;
  uStack_140._4_2_ = 0;
  uStack_140._6_2_ = 0;
  ppIStack_158 = (Il2CppType **)0x0;
  pIStack_150 = (Il2CppRGCTXData *)0x0;
  auStack_1a8._64_8_ = (Il2CppObject *)0x0;
  pIStack_160 = (Il2CppType *)0x0;
  auStack_1a8._48_8_ = (UnityEngine_Object_o *)0x0;
  auStack_1a8._56_8_ = (Il2CppRGCTXData *)0x0;
  pSVar3 = (__this->fields)._segments;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a0,
               (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    auStack_1a8._16_8_ = pUStack_90;
    auStack_1a8._0_8_ = auStack_a0._0_8_;
    auStack_1a8._8_8_ = auStack_a0._8_8_;
    while (__this_00.fields._8_8_ = in_stack_fffffffffffffe00,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8,
          __this_00.fields._current = in_stack_fffffffffffffe08.genericMethod,
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)auStack_1a8), uVar11 = auStack_1a8._16_8_,
          (char)bVar6 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)uVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)uVar11,(MethodInfo *)0x0);
      }
    }
    __this_01.fields._8_8_ = in_stack_fffffffffffffe00;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8;
    __this_01.fields._current = in_stack_fffffffffffffe08.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_01,(MethodInfo_321A1C0 *)auStack_1a8);
    unaff_R15 = (System_Type_array *)&MethodInfo_Boolean_MoveNext;
    pSVar3 = (__this->fields)._segments;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      bVar6 = System_String__IsNullOrEmpty((__this->fields)._text,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return;
      }
      pSVar4 = (__this->fields)._text;
      if (pSVar4 != (System_String_o *)0x0) {
        method_01 = (MethodInfo *)0xa;
        pSVar7 = System_String__Split(pSVar4,10,0,(MethodInfo *)0x0);
        if (pSVar7 != (System_String_array *)0x0) {
          if ((int)pSVar7->max_length < 1) {
            return;
          }
          pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
          auStack_1a8._40_8_ = pSVar7;
          if ((pSVar7->max_length & 0xffffffff) != 0) {
            do {
              pSVar4 = ((System_String_o **)(auStack_1a8._40_8_ + 0x20))[(long)pSVar12];
              if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_05 = PatreonEffects_EffectText__ParseLine(pSVar4,method_01);
              if (__this_05 == (System_Collections_Generic_List_EffectText_Segment__o *)0x0)
              goto label_0420df5e;
              if ((__this_05->fields)._size == 0) {
                pSVar3 = (__this->fields)._segments;
                method_01 = (MethodInfo *)PatreonEffects_EffectText__CreateSpacerRow(__this,method_01);
                lVar9 = MethodInfo_Void_Add;
                if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0420df5e;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (pSVar3->fields)._items;
                if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto label_0420df5e;
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar5->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar5->m_Items[(int)uVar2] = (UnityEngine_GameObject_o *)method_01;
                  il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)method_01,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                auStack_1a8._32_8_ = pSVar12;
                unaff_R15 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                handle.fields.value = TypeRef_RectTransform.fields.value;
                if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar8 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
                if (unaff_R15 == (System_Type_array *)0x0) goto label_0420df5e;
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((unaff_R15->obj).klass)->_1).element_class),
                   lVar9 == 0)) goto label_0420df68;
                if ((int)unaff_R15->max_length == 0) break;
                unaff_R15->m_Items[0] = pSVar8;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items);
                pSVar8 = System_Type__GetTypeFromHandle(TypeRef_HorizontalLayoutGroup,(MethodInfo *)0x0);
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((unaff_R15->obj).klass)->_1).element_class),
                   lVar9 == 0)) goto label_0420df68;
                if ((uint)unaff_R15->max_length < 2) break;
                unaff_R15->m_Items[1] = pSVar8;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items + 1);
                pSVar8 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((unaff_R15->obj).klass)->_1).element_class),
                   lVar9 == 0)) goto label_0420df68;
                if ((uint)unaff_R15->max_length < 3) break;
                unaff_R15->m_Items[2] = pSVar8;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items + 2,pSVar8);
                __this_06 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                UnityEngine_GameObject___ctor_4dfc440(__this_06,"EffectTextRow",unaff_R15,(MethodInfo *)0x0);
                if (__this_06 == (UnityEngine_GameObject_o *)0x0) goto label_0420df5e;
                pUVar10 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
                parent = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_0420df5e;
                UnityEngine_Transform__SetParent_4e09e30(pUVar10,parent,0,(MethodInfo *)0x0);
                __this_07 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                            UnityEngine_GameObject__GetComponent_object_(__this_06,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
                if (__this_07 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto label_0420df5e;
                UnityEngine_UI_LayoutGroup__set_childAlignment
                          ((UnityEngine_UI_LayoutGroup_o *)__this_07,3,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                          (__this_07,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                          (__this_07,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_07,0.0,(MethodInfo *)0x0);
                __this_08 = (UnityEngine_UI_ContentSizeFitter_o *)
                            UnityEngine_GameObject__GetComponent_object_(__this_06,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                if (__this_08 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_0420df5e;
                UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_08,2,(MethodInfo *)0x0);
                UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_08,2,(MethodInfo *)0x0);
                lVar9 = MethodInfo_Void_Add;
                pSVar3 = (__this->fields)._segments;
                if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0420df5e;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (pSVar3->fields)._items;
                if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto label_0420df5e;
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar5->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar5->m_Items[(int)uVar2] = __this_06;
                  il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,__this_06);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_06,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                System_Collections_Generic_List_EffectText_Segment___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a0,__this_05,
                           MethodInfo_List_1_T_Enumerator_PatreonEffects_EffectText_Segment_Ge);
                uStack_b8 = uStack_40;
                uStack_b0 = uStack_38;
                MStack_118.slot = uStack_50;
                MStack_118.parameters_count = uStack_4e;
                MStack_118.bitflags = uStack_4d;
                MStack_118._84_4_ = uStack_4c;
                uStack_c0 = uStack_48;
                MStack_118.field8_0x40 = _Stack_60;
                MStack_118.token = uStack_58;
                MStack_118.flags = uStack_54;
                MStack_118.iflags = uStack_52;
                MStack_118.parameters = ppIStack_70;
                MStack_118.rgctx_data = pIStack_68;
                MStack_118.klass = (System_Collections_Generic_List_Enumerator_T__c *)_Stack_80;
                MStack_118.return_type = pIStack_78;
                MStack_118.invoker_method = (InvokerMethod)pUStack_90;
                MStack_118.name = (char *)pIStack_88;
                MStack_118.methodPointer = (Il2CppMethodPointer)auStack_a0._0_8_;
                MStack_118.virtualMethodPointer = (Il2CppMethodPointer)auStack_a0._8_8_;
                unaff_R15 = (System_Type_array *)&MethodInfo_Boolean_MoveNext;
                while (__this_03.fields._8_8_ = in_stack_fffffffffffffe00,
                      __this_03.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8,
                      __this_03.fields._current = in_stack_fffffffffffffe08.genericMethod,
                      bVar6 = System_Collections_Generic_List_Enumerator_EffectText_Segment___MoveNext
                                        (__this_03,(MethodInfo_322DD10 *)&MStack_118), (char)bVar6 != '\0') {
                  uStack_128 = uStack_b8;
                  uStack_120 = uStack_b0;
                  uStack_138._0_2_ = MStack_118.slot;
                  uStack_138._2_1_ = MStack_118.parameters_count;
                  uStack_138._3_1_ = MStack_118.bitflags;
                  uStack_138._4_4_ = MStack_118._84_4_;
                  uStack_130 = uStack_c0;
                  _Stack_148 = MStack_118.field8_0x40;
                  uStack_140._0_4_ = MStack_118.token;
                  uStack_140._4_2_ = MStack_118.flags;
                  uStack_140._6_2_ = MStack_118.iflags;
                  ppIStack_158 = MStack_118.parameters;
                  pIStack_150 = MStack_118.rgctx_data;
                  auStack_1a8._64_8_ = MStack_118.klass;
                  pIStack_160 = MStack_118.return_type;
                  auStack_1a8._48_8_ = MStack_118.invoker_method;
                  auStack_1a8._56_8_ = MStack_118.name;
                  pUVar10 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
                  seg.fields.HasEffect = auStack_1a8._56_4_;
                  seg.fields.Effect = auStack_1a8._60_4_;
                  seg.fields.Content = (System_String_o *)auStack_1a8._48_8_;
                  seg.fields.ColorA.fields.hasValue = auStack_1a8._64_4_;
                  seg.fields.ColorA.fields.value.fields.r = (float)auStack_1a8._68_4_;
                  seg.fields.ColorA.fields.value.fields._4_8_ = pIStack_160;
                  seg.fields._32_8_ = ppIStack_158;
                  seg.fields.ColorB.fields.value.fields._0_8_ = pIStack_150;
                  seg.fields.ColorB.fields.value.fields._8_8_ = _Stack_148.genericMethod;
                  seg.fields.ColorC.fields._0_8_ = uStack_140;
                  seg.fields.ColorC.fields.value.fields._4_8_ = uStack_138;
                  seg.fields.ColorC.fields.value.fields.a = (float)(undefined4)uStack_130;
                  seg.fields.ColorD.fields.hasValue = uStack_130._4_4_;
                  seg.fields.ColorD.fields.value.fields.r = (float)(undefined4)uStack_128;
                  seg.fields.ColorD.fields.value.fields.g = (float)uStack_128._4_4_;
                  seg.fields.ColorD.fields.value.fields.b = (float)(undefined4)uStack_120;
                  seg.fields.ColorD.fields.value.fields.a = (float)uStack_120._4_4_;
                  in_stack_fffffffffffffdf8 = (UnityEngine_Object_o *)auStack_1a8._48_8_;
                  in_stack_fffffffffffffe00 = (Il2CppRGCTXData *)auStack_1a8._56_8_;
                  in_stack_fffffffffffffe08 = (_union_249689)auStack_1a8._64_8_;
                  item = PatreonEffects_EffectText__CreateSegmentGO(__this,pUVar10,seg,method_00);
                  lVar9 = MethodInfo_Void_Add;
                  pSVar3 = (__this->fields)._segments;
                  if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0420df5e;
                  }
                  piVar1 = &(pSVar3->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar5 = (pSVar3->fields)._items;
                  if (pUVar5 == (UnityEngine_GameObject_array *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0420df5e;
                  }
                  uVar2 = (pSVar3->fields)._size;
                  if (uVar2 < (uint)pUVar5->max_length) {
                    (pSVar3->fields)._size = uVar2 + 1;
                    pUVar5->m_Items[(int)uVar2] = item;
                    il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,item);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                }
                __this_02.fields._8_8_ = in_stack_fffffffffffffe00;
                __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8;
                __this_02.fields._current = in_stack_fffffffffffffe08.genericMethod;
                method_01 = MethodInfo_Void_Dispose;
                System_Collections_Generic_List_Enumerator_EffectText_Segment___Dispose(__this_02,&MStack_118)
                ;
                pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_1a8._32_8_;
              }
              pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)((long)&(pSVar12->_1).image + 1);
              uVar2 = (uint)*(il2cpp_array_size_t *)(auStack_1a8._40_8_ + 0x18);
              if ((long)(int)uVar2 <= (long)pSVar12) {
                return;
              }
            } while (pSVar12 < (System_Collections_Generic_List_Enumerator_T__c *)(ulong)uVar2);
          }
          goto label_0420df63;
        }
      }
    }
  }
label_0420df5e:
  il2cpp_runtime_helper_022b2c90();
label_0420df63:
  il2cpp_runtime_helper_022b2ca0();
label_0420df68:
  uVar11 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar11,0);
  __this_04.fields._8_8_ = in_stack_fffffffffffffe00;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8;
  __this_04.fields._current = in_stack_fffffffffffffe08.genericMethod;
  System_Collections_Generic_List_Enumerator_EffectText_Segment___Dispose(__this_04,&MStack_118);
  _Unwind_Resume(unaff_R15);
}


// PatreonEffects.EffectText$$CreateSegmentGO
// il2cpp: UnityEngine_GameObject_o* PatreonEffects_EffectText__CreateSegmentGO (PatreonEffects_EffectText_o* __this, UnityEngine_Transform_o* parent, PatreonEffects_EffectText_Segment_o seg, const MethodInfo* method);
// 0x42103a0

UnityEngine_GameObject_o *
PatreonEffects_EffectText__CreateSegmentGO
          (PatreonEffects_EffectText_o *__this,UnityEngine_Transform_o *parent,
          PatreonEffects_EffectText_Segment_o seg,MethodInfo *method)

{
  int *piVar1;
  undefined4 uVar2;
  int32_t length;
  TMPro_TMP_FontAsset_o *x;
  long lVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o UVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Nullable_Color__o __this_04;
  System_Nullable_Color__o __this_05;
  System_Nullable_Color__o __this_06;
  System_Nullable_Color__o __this_07;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar6;
  System_Type_array *components;
  System_Type_o *pSVar7;
  long lVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Transform_o *__this_08;
  TMPro_TMP_Text_o *__this_09;
  System_String_o *text;
  Il2CppObject *pIVar10;
  PatreonEffects_NameEffectController_o *__this_10;
  PatreonEffects_NameEffectSettings_o *settings;
  UnityEngine_GameObject_o *extraout_RAX;
  long *plVar11;
  MethodInfo *extraout_RDX;
  float fVar12;
  undefined8 uVar13;
  undefined1 auVar14 [12];
  UnityEngine_Color_Fields UVar15;
  System_Collections_Generic_List_T__o *pSVar16;
  Il2CppMethodPointer pIVar17;
  UnityEngine_Object_o *x_00;
  UnityEngine_Object_o *pUVar18;
  undefined1 in_stack_ffffffffffffff98 [12];
  float fVar19;
  float local_48;
  
  if (g_data_057ad906 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"Segment");
    il2cpp_runtime_helper_023445d0(&"|");
    g_data_057ad906 = '\x01';
    method = extraout_RDX;
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type,4,method);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_042108ea;
  if ((pSVar7 != (System_Type_o *)0x0) &&
     (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7,(((components->obj).klass)->_1).element_class), lVar8 == 0))
  goto label_042108f4;
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar7;
    il2cpp_runtime_helper_022b4080(components->m_Items);
    pSVar7 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
    if ((pSVar7 != (System_Type_o *)0x0) &&
       (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7,(((components->obj).klass)->_1).element_class), lVar8 == 0))
    goto label_042108f4;
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar7;
      il2cpp_runtime_helper_022b4080(components->m_Items + 1);
      pSVar7 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
      if ((pSVar7 != (System_Type_o *)0x0) &&
         (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7,(((components->obj).klass)->_1).element_class), lVar8 == 0))
      goto label_042108f4;
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar7;
        il2cpp_runtime_helper_022b4080(components->m_Items + 2);
        pSVar7 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
        if ((pSVar7 != (System_Type_o *)0x0) &&
           (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7,(((components->obj).klass)->_1).element_class), lVar8 == 0))
        goto label_042108f4;
        if (3 < (uint)components->max_length) {
          components->m_Items[3] = pSVar7;
          il2cpp_runtime_helper_022b4080(components->m_Items + 3,pSVar7);
          pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          UnityEngine_GameObject___ctor_4dfc440(pUVar9,"Segment",components,(MethodInfo *)0x0);
          if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
             (__this_08 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
             __this_08 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetParent_4e09e30(__this_08,parent,0,(MethodInfo *)0x0);
            __this_09 = (TMPro_TMP_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
            if (__this_09 != (TMPro_TMP_Text_o *)0x0) {
              (*(__this_09->klass->vtable)._66_set_text.methodPtr)
                        (__this_09,seg.fields.Content,(__this_09->klass->vtable)._66_set_text.method);
              x = (__this->fields)._font;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar6 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar6 != '\0') {
                TMPro_TMP_Text__set_font(__this_09,(__this->fields)._font,(MethodInfo *)0x0);
              }
              TMPro_TMP_Text__set_fontSize(__this_09,(__this->fields)._fontSize,(MethodInfo *)0x0);
              bVar6 = seg.fields.HasEffect;
              if ((seg.fields.HasEffect & 1U) == 0) {
                uVar2 = (__this->fields)._color.fields.r;
                uVar13._0_4_ = (__this->fields)._color.fields.b;
                uVar13._4_4_ = (__this->fields)._color.fields.a;
              }
              else {
                uVar13 = 0x3f8000003f800000;
                uVar2 = 0x3f800000;
              }
              (*(__this_09->klass->vtable)._23_set_color.methodPtr)
                        (uVar2,uVar13,__this_09,(__this_09->klass->vtable)._23_set_color.method);
              TMPro_TMP_Text__set_alignment(__this_09,(__this->fields)._alignment,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_richText(__this_09,(uint)(byte)(__this->fields)._richText,(MethodInfo *)0x0)
              ;
              TMPro_TMP_Text__set_enableWordWrapping(__this_09,0,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_overflowMode(__this_09,0,(MethodInfo *)0x0);
              text = System_String__Concat_3ae5ba0(seg.fields.Content,"|",(MethodInfo *)0x0);
              UVar4 = TMPro_TMP_Text__GetPreferredValues_4c70170
                                (__this_09,text,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
              UVar5 = TMPro_TMP_Text__GetPreferredValues_4c70170
                                (__this_09,"|",3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
              fVar19 = UVar5.fields.x;
              uVar2 = (*(__this_09->klass->vtable)._85_get_preferredHeight.methodPtr)
                                (__this_09,(__this_09->klass->vtable)._85_get_preferredHeight.method);
              pIVar10 = UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar10 != (Il2CppObject *)0x0) {
                local_48 = UVar4.fields.x;
                fVar12 = local_48 - fVar19;
                if (local_48 - fVar19 <= 0.0) {
                  fVar12 = 0.0;
                }
                (*pIVar10->klass->vtable[0x24].methodPtr)(fVar12,pIVar10,pIVar10->klass->vtable[0x24].method);
                (*pIVar10->klass->vtable[0x26].methodPtr)(uVar2,pIVar10,pIVar10->klass->vtable[0x26].method);
                if ((bVar6 & 1U) == 0) {
                  return pUVar9;
                }
                __this_10 = (PatreonEffects_NameEffectController_o *)
                            UnityEngine_GameObject__AddComponent_object_(pUVar9,MethodInfo_NameEffectController_AddComponent_NameEffectController);
                if (__this_10 != (PatreonEffects_NameEffectController_o *)0x0) {
                  PatreonEffects_NameEffectController__AutoConfigure(__this_10,(MethodInfo *)0x0);
                  settings = PatreonEffects_NameEffectPresets__GetPreset(seg.fields.Effect,(MethodInfo *)0x0);
                  if ((char)seg.fields.ColorA.fields.hasValue != '\0') {
                    __this_04.fields.value.fields.b = (float)uVar2;
                    __this_04.fields.hasValue = in_stack_ffffffffffffff98._0_4_;
                    __this_04.fields.value.fields.r = (float)in_stack_ffffffffffffff98._4_4_;
                    __this_04.fields.value.fields.g = (float)in_stack_ffffffffffffff98._8_4_;
                    __this_04.fields.value.fields.a = fVar19;
                    UVar15 = (UnityEngine_Color_Fields)
                             System_Nullable_Color___get_Value
                                       (__this_04,(MethodInfo_37E4300 *)&seg.fields.ColorA);
                    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_042108ea;
                    (settings->fields).gradientA.fields = UVar15;
                  }
                  if ((char)seg.fields.ColorB.fields.hasValue != '\0') {
                    __this_05.fields.value.fields.b = (float)uVar2;
                    __this_05.fields.hasValue = in_stack_ffffffffffffff98._0_4_;
                    __this_05.fields.value.fields.r = (float)in_stack_ffffffffffffff98._4_4_;
                    __this_05.fields.value.fields.g = (float)in_stack_ffffffffffffff98._8_4_;
                    __this_05.fields.value.fields.a = fVar19;
                    UVar15 = (UnityEngine_Color_Fields)
                             System_Nullable_Color___get_Value
                                       (__this_05,(MethodInfo_37E4300 *)&seg.fields.ColorB);
                    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_042108ea;
                    (settings->fields).gradientB.fields = UVar15;
                  }
                  if ((char)seg.fields.ColorC.fields.hasValue != '\0') {
                    __this_06.fields.value.fields.b = (float)uVar2;
                    __this_06.fields.hasValue = in_stack_ffffffffffffff98._0_4_;
                    __this_06.fields.value.fields.r = (float)in_stack_ffffffffffffff98._4_4_;
                    __this_06.fields.value.fields.g = (float)in_stack_ffffffffffffff98._8_4_;
                    __this_06.fields.value.fields.a = fVar19;
                    UVar15 = (UnityEngine_Color_Fields)
                             System_Nullable_Color___get_Value
                                       (__this_06,(MethodInfo_37E4300 *)&seg.fields.ColorC);
                    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_042108ea;
                    (settings->fields).gradientC.fields = UVar15;
                  }
                  if ((char)seg.fields.ColorD.fields.hasValue == '\0') {
label_042108cb:
                    PatreonEffects_NameEffectController__Apply(__this_10,settings,(MethodInfo *)0x0);
                    return pUVar9;
                  }
                  __this_07.fields.value.fields.b = (float)uVar2;
                  __this_07.fields.hasValue = in_stack_ffffffffffffff98._0_4_;
                  __this_07.fields.value.fields.r = (float)in_stack_ffffffffffffff98._4_4_;
                  __this_07.fields.value.fields.g = (float)in_stack_ffffffffffffff98._8_4_;
                  __this_07.fields.value.fields.a = fVar19;
                  UVar15 = (UnityEngine_Color_Fields)
                           System_Nullable_Color___get_Value
                                     (__this_07,(MethodInfo_37E4300 *)&seg.fields.ColorD);
                  if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
                    (settings->fields).gradientD.fields = UVar15;
                    goto label_042108cb;
                  }
                }
              }
            }
          }
label_042108ea:
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_042108f4:
  lVar8 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(lVar8,0);
  if (g_data_057ad90a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad90a = '\x01';
  }
  pSVar16 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar17 = (Il2CppMethodPointer)0x0;
  x_00 = (UnityEngine_Object_o *)0x0;
  if (*(System_Collections_Generic_List_object__o **)(lVar8 + 0x50) ==
      (System_Collections_Generic_List_object__o *)0x0) goto label_04210a5f;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff50,
             *(System_Collections_Generic_List_object__o **)(lVar8 + 0x50),MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  pUVar18 = x_00;
  while (x_00 = pUVar18, __this_00.fields._8_8_ = pIVar17, __this_00.fields._list = pSVar16,
        __this_00.fields._current = (Il2CppObject *)x_00,
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff50), (char)bVar6 != '\0') {
    pUVar18 = x_00;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(x_00,(MethodInfo *)0x0);
    }
  }
  __this_01.fields._8_8_ = pIVar17;
  __this_01.fields._list = pSVar16;
  __this_01.fields._current = (Il2CppObject *)x_00;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
  do {
    pUVar9 = *(UnityEngine_GameObject_o **)(lVar8 + 0x50);
    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
      piVar1 = (int *)((long)&pUVar9[1].klass + 4);
      *piVar1 = *piVar1 + 1;
      length = *(int32_t *)&pUVar9[1].klass;
      *(undefined4 *)&pUVar9[1].klass = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pUVar9->fields).m_CachedPtr,0,length,(MethodInfo *)0x0);
        pUVar9 = extraout_RAX;
      }
      return pUVar9;
    }
label_04210a5f:
    auVar14 = il2cpp_runtime_helper_022b2c90();
    if (auVar14._8_4_ != 1) goto label_04210abd;
    plVar11 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar3 = *plVar11;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar17;
    __this_02.fields._list = pSVar16;
    __this_02.fields._current = (Il2CppObject *)x_00;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
  } while (lVar3 == 0);
  il2cpp_runtime_helper_022fefe0(lVar3);
label_04210abd:
  __this_03.fields._8_8_ = pIVar17;
  __this_03.fields._list = pSVar16;
  __this_03.fields._current = (Il2CppObject *)x_00;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
  _Unwind_Resume(auVar14._0_8_);
}


// PatreonEffects.EffectText$$CreateSpacerRow
// il2cpp: UnityEngine_GameObject_o* PatreonEffects_EffectText__CreateSpacerRow (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x4210180

UnityEngine_GameObject_o *
PatreonEffects_EffectText__CreateSpacerRow(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t length;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Nullable_Color__o __this_04;
  System_Nullable_Color__o __this_05;
  System_Nullable_Color__o __this_06;
  System_Nullable_Color__o __this_07;
  System_RuntimeTypeHandle_o SVar4;
  bool_conflict bVar5;
  System_Type_array *pSVar6;
  System_Type_o *pSVar7;
  long lVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  Il2CppObject *pIVar12;
  long lVar13;
  TMPro_TMP_Text_o *__this_08;
  System_String_o *text;
  PatreonEffects_NameEffectController_o *__this_09;
  PatreonEffects_NameEffectSettings_o *settings;
  UnityEngine_GameObject_o *extraout_RAX;
  long *plVar14;
  System_String_o *unaff_RBX;
  ulong unaff_R12;
  char unaff_R14B;
  undefined4 uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [12];
  UnityEngine_Color_Fields UVar19;
  char unaff_retaddr;
  char in_stack_00000018;
  char in_stack_0000002c;
  System_Collections_Generic_List_T__o *pSVar20;
  Il2CppMethodPointer pIVar21;
  UnityEngine_Object_o *pUVar22;
  UnityEngine_Object_o *pUVar23;
  undefined1 in_stack_ffffffffffffff70 [12];
  float fVar24;
  float fStack_70;
  
  if (g_data_057ad907 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"EffectTextSpacer");
    g_data_057ad907 = '\x01';
  }
  pSVar6 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar4 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
  if (pSVar6 == (System_Type_array *)0x0) {
label_0421037e:
    il2cpp_runtime_helper_022b2c90();
label_04210383:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar7 == (System_Type_o *)0x0) || (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7), lVar8 != 0)) {
    if ((int)pSVar6->max_length != 0) {
      pSVar6->m_Items[0] = pSVar7;
      il2cpp_runtime_helper_022b4080(pSVar6->m_Items);
      pSVar7 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar7 != (System_Type_o *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7), lVar8 == 0))
      goto label_04210388;
      if (1 < (uint)pSVar6->max_length) {
        pSVar6->m_Items[1] = pSVar7;
        il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 1,pSVar7);
        pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor_4dfc440(pUVar9,"EffectTextSpacer",pSVar6,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
          pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
          pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_4e09e30(pUVar10,pUVar11,0,(MethodInfo *)0x0);
            pIVar12 = UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar12 != (Il2CppObject *)0x0) {
              (*pIVar12->klass->vtable[0x26].methodPtr)
                        ((__this->fields)._fontSize,pIVar12,pIVar12->klass->vtable[0x26].method);
              (*pIVar12->klass->vtable[0x24].methodPtr)
                        (0x3f800000,pIVar12,pIVar12->klass->vtable[0x24].method);
              return pUVar9;
            }
          }
        }
        goto label_0421037e;
      }
    }
    goto label_04210383;
  }
label_04210388:
  lVar8 = il2cpp_runtime_helper_0231b270();
  pUVar10 = (UnityEngine_Transform_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ad906 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"Segment");
    il2cpp_runtime_helper_023445d0(&"|");
    g_data_057ad906 = '\x01';
  }
  pSVar6 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar4 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
  if (pSVar6 == (System_Type_array *)0x0) goto label_042108ea;
  if ((pSVar7 != (System_Type_o *)0x0) &&
     (lVar13 = il2cpp_runtime_helper_023051f0(pSVar7,(((pSVar6->obj).klass)->_1).element_class), lVar13 == 0))
  goto label_042108f4;
  if ((int)pSVar6->max_length != 0) {
    pSVar6->m_Items[0] = pSVar7;
    il2cpp_runtime_helper_022b4080(pSVar6->m_Items);
    pSVar7 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
    if ((pSVar7 != (System_Type_o *)0x0) &&
       (lVar13 = il2cpp_runtime_helper_023051f0(pSVar7,(((pSVar6->obj).klass)->_1).element_class), lVar13 == 0))
    goto label_042108f4;
    if (1 < (uint)pSVar6->max_length) {
      pSVar6->m_Items[1] = pSVar7;
      il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 1);
      pSVar7 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
      if ((pSVar7 != (System_Type_o *)0x0) &&
         (lVar13 = il2cpp_runtime_helper_023051f0(pSVar7,(((pSVar6->obj).klass)->_1).element_class), lVar13 == 0))
      goto label_042108f4;
      if (2 < (uint)pSVar6->max_length) {
        pSVar6->m_Items[2] = pSVar7;
        il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 2);
        pSVar7 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
        if ((pSVar7 != (System_Type_o *)0x0) &&
           (lVar13 = il2cpp_runtime_helper_023051f0(pSVar7,(((pSVar6->obj).klass)->_1).element_class), lVar13 == 0))
        goto label_042108f4;
        if (3 < (uint)pSVar6->max_length) {
          pSVar6->m_Items[3] = pSVar7;
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 3,pSVar7);
          pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          UnityEngine_GameObject___ctor_4dfc440(pUVar9,"Segment",pSVar6,(MethodInfo *)0x0);
          if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar11 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
             pUVar11 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetParent_4e09e30(pUVar11,pUVar10,0,(MethodInfo *)0x0);
            __this_08 = (TMPro_TMP_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
            if (__this_08 != (TMPro_TMP_Text_o *)0x0) {
              (*(__this_08->klass->vtable)._66_set_text.methodPtr)
                        (__this_08,unaff_RBX,(__this_08->klass->vtable)._66_set_text.method);
              pUVar22 = *(UnityEngine_Object_o **)(lVar8 + 0x40);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar5 = UnityEngine_Object__op_Inequality(pUVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if ((char)bVar5 != '\0') {
                TMPro_TMP_Text__set_font
                          (__this_08,*(TMPro_TMP_FontAsset_o **)(lVar8 + 0x40),(MethodInfo *)0x0);
              }
              TMPro_TMP_Text__set_fontSize(__this_08,*(float *)(lVar8 + 0x28),(MethodInfo *)0x0);
              if ((unaff_R12 & 1) == 0) {
                uVar15 = (undefined4)*(undefined8 *)(lVar8 + 0x2c);
                uVar17 = *(undefined8 *)(lVar8 + 0x34);
              }
              else {
                uVar17 = 0x3f8000003f800000;
                uVar15 = 0x3f800000;
              }
              (*(__this_08->klass->vtable)._23_set_color.methodPtr)
                        (uVar15,uVar17,__this_08,(__this_08->klass->vtable)._23_set_color.method);
              TMPro_TMP_Text__set_alignment(__this_08,*(int32_t *)(lVar8 + 0x48),(MethodInfo *)0x0);
              TMPro_TMP_Text__set_richText(__this_08,(uint)*(byte *)(lVar8 + 0x4c),(MethodInfo *)0x0);
              TMPro_TMP_Text__set_enableWordWrapping(__this_08,0,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_overflowMode(__this_08,0,(MethodInfo *)0x0);
              text = System_String__Concat_3ae5ba0(unaff_RBX,"|",(MethodInfo *)0x0);
              UVar2 = TMPro_TMP_Text__GetPreferredValues_4c70170
                                (__this_08,text,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
              UVar3 = TMPro_TMP_Text__GetPreferredValues_4c70170
                                (__this_08,"|",3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
              fVar24 = UVar3.fields.x;
              uVar15 = (*(__this_08->klass->vtable)._85_get_preferredHeight.methodPtr)
                                 (__this_08,(__this_08->klass->vtable)._85_get_preferredHeight.method);
              pIVar12 = UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar12 != (Il2CppObject *)0x0) {
                fStack_70 = UVar2.fields.x;
                fVar16 = fStack_70 - fVar24;
                if (fStack_70 - fVar24 <= 0.0) {
                  fVar16 = 0.0;
                }
                (*pIVar12->klass->vtable[0x24].methodPtr)(fVar16,pIVar12,pIVar12->klass->vtable[0x24].method);
                (*pIVar12->klass->vtable[0x26].methodPtr)(uVar15,pIVar12,pIVar12->klass->vtable[0x26].method);
                if ((unaff_R12 & 1) == 0) {
                  return pUVar9;
                }
                __this_09 = (PatreonEffects_NameEffectController_o *)
                            UnityEngine_GameObject__AddComponent_object_(pUVar9,MethodInfo_NameEffectController_AddComponent_NameEffectController);
                if (__this_09 != (PatreonEffects_NameEffectController_o *)0x0) {
                  PatreonEffects_NameEffectController__AutoConfigure(__this_09,(MethodInfo *)0x0);
                  settings = PatreonEffects_NameEffectPresets__GetPreset
                                       ((int32_t)(unaff_R12 >> 0x20),(MethodInfo *)0x0);
                  if (unaff_R14B != '\0') {
                    __this_04.fields.value.fields.b = (float)uVar15;
                    __this_04.fields.hasValue = in_stack_ffffffffffffff70._0_4_;
                    __this_04.fields.value.fields.r = (float)in_stack_ffffffffffffff70._4_4_;
                    __this_04.fields.value.fields.g = (float)in_stack_ffffffffffffff70._8_4_;
                    __this_04.fields.value.fields.a = fVar24;
                    UVar19 = (UnityEngine_Color_Fields)
                             System_Nullable_Color___get_Value
                                       (__this_04,(MethodInfo_37E4300 *)&stack0xfffffffffffffff0);
                    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_042108ea;
                    (settings->fields).gradientA.fields = UVar19;
                  }
                  if (unaff_retaddr != '\0') {
                    __this_05.fields.value.fields.b = (float)uVar15;
                    __this_05.fields.hasValue = in_stack_ffffffffffffff70._0_4_;
                    __this_05.fields.value.fields.r = (float)in_stack_ffffffffffffff70._4_4_;
                    __this_05.fields.value.fields.g = (float)in_stack_ffffffffffffff70._8_4_;
                    __this_05.fields.value.fields.a = fVar24;
                    UVar19 = (UnityEngine_Color_Fields)
                             System_Nullable_Color___get_Value
                                       (__this_05,(MethodInfo_37E4300 *)&stack0x00000004);
                    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_042108ea;
                    (settings->fields).gradientB.fields = UVar19;
                  }
                  if (in_stack_00000018 != '\0') {
                    __this_06.fields.value.fields.b = (float)uVar15;
                    __this_06.fields.hasValue = in_stack_ffffffffffffff70._0_4_;
                    __this_06.fields.value.fields.r = (float)in_stack_ffffffffffffff70._4_4_;
                    __this_06.fields.value.fields.g = (float)in_stack_ffffffffffffff70._8_4_;
                    __this_06.fields.value.fields.a = fVar24;
                    UVar19 = (UnityEngine_Color_Fields)
                             System_Nullable_Color___get_Value
                                       (__this_06,(MethodInfo_37E4300 *)&stack0x00000018);
                    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_042108ea;
                    (settings->fields).gradientC.fields = UVar19;
                  }
                  if (in_stack_0000002c == '\0') {
label_042108cb:
                    PatreonEffects_NameEffectController__Apply(__this_09,settings,(MethodInfo *)0x0);
                    return pUVar9;
                  }
                  __this_07.fields.value.fields.b = (float)uVar15;
                  __this_07.fields.hasValue = in_stack_ffffffffffffff70._0_4_;
                  __this_07.fields.value.fields.r = (float)in_stack_ffffffffffffff70._4_4_;
                  __this_07.fields.value.fields.g = (float)in_stack_ffffffffffffff70._8_4_;
                  __this_07.fields.value.fields.a = fVar24;
                  UVar19 = (UnityEngine_Color_Fields)
                           System_Nullable_Color___get_Value(__this_07,(MethodInfo_37E4300 *)&stack0x0000002c)
                  ;
                  if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
                    (settings->fields).gradientD.fields = UVar19;
                    goto label_042108cb;
                  }
                }
              }
            }
          }
label_042108ea:
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_042108f4:
  lVar8 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(lVar8,0);
  if (g_data_057ad90a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad90a = '\x01';
  }
  pSVar20 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar21 = (Il2CppMethodPointer)0x0;
  pUVar22 = (UnityEngine_Object_o *)0x0;
  if (*(System_Collections_Generic_List_object__o **)(lVar8 + 0x50) ==
      (System_Collections_Generic_List_object__o *)0x0) goto label_04210a5f;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff28,
             *(System_Collections_Generic_List_object__o **)(lVar8 + 0x50),MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  pUVar23 = pUVar22;
  while (pUVar22 = pUVar23, __this_00.fields._8_8_ = pIVar21, __this_00.fields._list = pSVar20,
        __this_00.fields._current = (Il2CppObject *)pUVar22,
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff28), (char)bVar5 != '\0') {
    pUVar23 = pUVar22;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(pUVar22,(MethodInfo *)0x0);
    }
  }
  __this_01.fields._8_8_ = pIVar21;
  __this_01.fields._list = pSVar20;
  __this_01.fields._current = (Il2CppObject *)pUVar22;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff28);
  do {
    pUVar9 = *(UnityEngine_GameObject_o **)(lVar8 + 0x50);
    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
      piVar1 = (int *)((long)&pUVar9[1].klass + 4);
      *piVar1 = *piVar1 + 1;
      length = *(int32_t *)&pUVar9[1].klass;
      *(undefined4 *)&pUVar9[1].klass = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pUVar9->fields).m_CachedPtr,0,length,(MethodInfo *)0x0);
        pUVar9 = extraout_RAX;
      }
      return pUVar9;
    }
label_04210a5f:
    auVar18 = il2cpp_runtime_helper_022b2c90();
    if (auVar18._8_4_ != 1) goto label_04210abd;
    plVar14 = (long *)__cxa_begin_catch(auVar18._0_8_);
    lVar13 = *plVar14;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar21;
    __this_02.fields._list = pSVar20;
    __this_02.fields._current = (Il2CppObject *)pUVar22;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff28);
  } while (lVar13 == 0);
  il2cpp_runtime_helper_022fefe0(lVar13);
label_04210abd:
  __this_03.fields._8_8_ = pIVar21;
  __this_03.fields._list = pSVar20;
  __this_03.fields._current = (Il2CppObject *)pUVar22;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff28);
  _Unwind_Resume(auVar18._0_8_);
}


// PatreonEffects.EffectText$$ApplyFontSize
// il2cpp: void PatreonEffects_EffectText__ApplyFontSize (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x420e060

void PatreonEffects_EffectText__ApplyFontSize(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  System_String_o *pSVar4;
  UnityEngine_GameObject_array *pUVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_T__o __this_04;
  PatreonEffects_EffectText_Segment_o seg;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar6;
  System_String_array *pSVar7;
  System_Collections_Generic_List_EffectText_Segment__o *__this_05;
  System_Type_o *pSVar8;
  long lVar9;
  UnityEngine_GameObject_o *__this_06;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_07;
  UnityEngine_UI_ContentSizeFitter_o *__this_08;
  UnityEngine_GameObject_o *item;
  undefined8 uVar11;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  MethodInfo *method_01;
  System_Type_array *unaff_R15;
  UnityEngine_Object_o *in_stack_fffffffffffffdf8;
  Il2CppRGCTXData *in_stack_fffffffffffffe00;
  _union_249689 in_stack_fffffffffffffe08;
  undefined1 auStack_1a8 [72];
  Il2CppType *pIStack_160;
  Il2CppType **ppIStack_158;
  Il2CppRGCTXData *pIStack_150;
  _union_249491 _Stack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  MethodInfo_322DD00 MStack_118;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  UnityEngine_Object_o *pUStack_90;
  Il2CppRGCTXData *pIStack_88;
  _union_249689 _Stack_80;
  Il2CppType *pIStack_78;
  Il2CppType **ppIStack_70;
  Il2CppRGCTXData *pIStack_68;
  _union_249491 _Stack_60;
  uint32_t uStack_58;
  uint16_t uStack_54;
  uint16_t uStack_52;
  uint16_t uStack_50;
  uint8_t uStack_4e;
  uint8_t uStack_4d;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (g_data_057ad905 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectText);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EffectText_Segment_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_PatreonEffects_EffectText_Segment_Ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"EffectTextRow");
    g_data_057ad905 = '\x01';
  }
  auStack_1a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_1a8._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_1a8._16_8_ = (UnityEngine_Object_o *)0x0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  MStack_118.slot = 0;
  MStack_118.parameters_count = '\0';
  MStack_118.bitflags = '\0';
  MStack_118._84_4_ = 0;
  uStack_c0 = 0;
  MStack_118.field8_0x40.genericMethod = (void *)0x0;
  MStack_118.token = 0;
  MStack_118.flags = 0;
  MStack_118.iflags = 0;
  MStack_118.parameters = (Il2CppType **)0x0;
  MStack_118.rgctx_data = (Il2CppRGCTXData *)0x0;
  MStack_118.klass = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  MStack_118.return_type = (Il2CppType *)0x0;
  MStack_118.invoker_method = (InvokerMethod)0x0;
  MStack_118.name = (char *)0x0;
  MStack_118.methodPointer = (Il2CppMethodPointer)0x0;
  MStack_118.virtualMethodPointer = (Il2CppMethodPointer)0x0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_138._0_2_ = 0;
  uStack_138._2_1_ = '\0';
  uStack_138._3_1_ = '\0';
  uStack_138._4_4_ = 0;
  uStack_130 = 0;
  _Stack_148.genericMethod = (void *)0x0;
  uStack_140._0_4_ = 0;
  uStack_140._4_2_ = 0;
  uStack_140._6_2_ = 0;
  ppIStack_158 = (Il2CppType **)0x0;
  pIStack_150 = (Il2CppRGCTXData *)0x0;
  auStack_1a8._64_8_ = (Il2CppObject *)0x0;
  pIStack_160 = (Il2CppType *)0x0;
  auStack_1a8._48_8_ = (UnityEngine_Object_o *)0x0;
  auStack_1a8._56_8_ = (Il2CppRGCTXData *)0x0;
  pSVar3 = (__this->fields)._segments;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a0,
               (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    auStack_1a8._16_8_ = pUStack_90;
    auStack_1a8._0_8_ = auStack_a0._0_8_;
    auStack_1a8._8_8_ = auStack_a0._8_8_;
    while (__this_00.fields._8_8_ = in_stack_fffffffffffffe00,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8,
          __this_00.fields._current = in_stack_fffffffffffffe08.genericMethod,
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)auStack_1a8), uVar11 = auStack_1a8._16_8_,
          (char)bVar6 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)uVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)uVar11,(MethodInfo *)0x0);
      }
    }
    __this_01.fields._8_8_ = in_stack_fffffffffffffe00;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8;
    __this_01.fields._current = in_stack_fffffffffffffe08.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_01,(MethodInfo_321A1C0 *)auStack_1a8);
    unaff_R15 = (System_Type_array *)&MethodInfo_Boolean_MoveNext;
    pSVar3 = (__this->fields)._segments;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      bVar6 = System_String__IsNullOrEmpty((__this->fields)._text,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return;
      }
      pSVar4 = (__this->fields)._text;
      if (pSVar4 != (System_String_o *)0x0) {
        method_01 = (MethodInfo *)0xa;
        pSVar7 = System_String__Split(pSVar4,10,0,(MethodInfo *)0x0);
        if (pSVar7 != (System_String_array *)0x0) {
          if ((int)pSVar7->max_length < 1) {
            return;
          }
          pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
          auStack_1a8._40_8_ = pSVar7;
          if ((pSVar7->max_length & 0xffffffff) != 0) {
            do {
              pSVar4 = ((System_String_o **)(auStack_1a8._40_8_ + 0x20))[(long)pSVar12];
              if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_05 = PatreonEffects_EffectText__ParseLine(pSVar4,method_01);
              if (__this_05 == (System_Collections_Generic_List_EffectText_Segment__o *)0x0)
              goto label_0420df5e;
              if ((__this_05->fields)._size == 0) {
                pSVar3 = (__this->fields)._segments;
                method_01 = (MethodInfo *)PatreonEffects_EffectText__CreateSpacerRow(__this,method_01);
                lVar9 = MethodInfo_Void_Add;
                if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0420df5e;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (pSVar3->fields)._items;
                if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto label_0420df5e;
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar5->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar5->m_Items[(int)uVar2] = (UnityEngine_GameObject_o *)method_01;
                  il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)method_01,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                auStack_1a8._32_8_ = pSVar12;
                unaff_R15 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                handle.fields.value = TypeRef_RectTransform.fields.value;
                if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar8 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
                if (unaff_R15 == (System_Type_array *)0x0) goto label_0420df5e;
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((unaff_R15->obj).klass)->_1).element_class),
                   lVar9 == 0)) goto label_0420df68;
                if ((int)unaff_R15->max_length == 0) break;
                unaff_R15->m_Items[0] = pSVar8;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items);
                pSVar8 = System_Type__GetTypeFromHandle(TypeRef_HorizontalLayoutGroup,(MethodInfo *)0x0);
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((unaff_R15->obj).klass)->_1).element_class),
                   lVar9 == 0)) goto label_0420df68;
                if ((uint)unaff_R15->max_length < 2) break;
                unaff_R15->m_Items[1] = pSVar8;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items + 1);
                pSVar8 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((unaff_R15->obj).klass)->_1).element_class),
                   lVar9 == 0)) goto label_0420df68;
                if ((uint)unaff_R15->max_length < 3) break;
                unaff_R15->m_Items[2] = pSVar8;
                il2cpp_runtime_helper_022b4080(unaff_R15->m_Items + 2,pSVar8);
                __this_06 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                UnityEngine_GameObject___ctor_4dfc440(__this_06,"EffectTextRow",unaff_R15,(MethodInfo *)0x0);
                if (__this_06 == (UnityEngine_GameObject_o *)0x0) goto label_0420df5e;
                pUVar10 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
                parent = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_0420df5e;
                UnityEngine_Transform__SetParent_4e09e30(pUVar10,parent,0,(MethodInfo *)0x0);
                __this_07 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                            UnityEngine_GameObject__GetComponent_object_(__this_06,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
                if (__this_07 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto label_0420df5e;
                UnityEngine_UI_LayoutGroup__set_childAlignment
                          ((UnityEngine_UI_LayoutGroup_o *)__this_07,3,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                          (__this_07,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                          (__this_07,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_07,0.0,(MethodInfo *)0x0);
                __this_08 = (UnityEngine_UI_ContentSizeFitter_o *)
                            UnityEngine_GameObject__GetComponent_object_(__this_06,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                if (__this_08 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_0420df5e;
                UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_08,2,(MethodInfo *)0x0);
                UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_08,2,(MethodInfo *)0x0);
                lVar9 = MethodInfo_Void_Add;
                pSVar3 = (__this->fields)._segments;
                if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0420df5e;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (pSVar3->fields)._items;
                if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto label_0420df5e;
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar5->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar5->m_Items[(int)uVar2] = __this_06;
                  il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,__this_06);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_06,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                System_Collections_Generic_List_EffectText_Segment___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a0,__this_05,
                           MethodInfo_List_1_T_Enumerator_PatreonEffects_EffectText_Segment_Ge);
                uStack_b8 = uStack_40;
                uStack_b0 = uStack_38;
                MStack_118.slot = uStack_50;
                MStack_118.parameters_count = uStack_4e;
                MStack_118.bitflags = uStack_4d;
                MStack_118._84_4_ = uStack_4c;
                uStack_c0 = uStack_48;
                MStack_118.field8_0x40 = _Stack_60;
                MStack_118.token = uStack_58;
                MStack_118.flags = uStack_54;
                MStack_118.iflags = uStack_52;
                MStack_118.parameters = ppIStack_70;
                MStack_118.rgctx_data = pIStack_68;
                MStack_118.klass = (System_Collections_Generic_List_Enumerator_T__c *)_Stack_80;
                MStack_118.return_type = pIStack_78;
                MStack_118.invoker_method = (InvokerMethod)pUStack_90;
                MStack_118.name = (char *)pIStack_88;
                MStack_118.methodPointer = (Il2CppMethodPointer)auStack_a0._0_8_;
                MStack_118.virtualMethodPointer = (Il2CppMethodPointer)auStack_a0._8_8_;
                unaff_R15 = (System_Type_array *)&MethodInfo_Boolean_MoveNext;
                while (__this_03.fields._8_8_ = in_stack_fffffffffffffe00,
                      __this_03.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8,
                      __this_03.fields._current = in_stack_fffffffffffffe08.genericMethod,
                      bVar6 = System_Collections_Generic_List_Enumerator_EffectText_Segment___MoveNext
                                        (__this_03,(MethodInfo_322DD10 *)&MStack_118), (char)bVar6 != '\0') {
                  uStack_128 = uStack_b8;
                  uStack_120 = uStack_b0;
                  uStack_138._0_2_ = MStack_118.slot;
                  uStack_138._2_1_ = MStack_118.parameters_count;
                  uStack_138._3_1_ = MStack_118.bitflags;
                  uStack_138._4_4_ = MStack_118._84_4_;
                  uStack_130 = uStack_c0;
                  _Stack_148 = MStack_118.field8_0x40;
                  uStack_140._0_4_ = MStack_118.token;
                  uStack_140._4_2_ = MStack_118.flags;
                  uStack_140._6_2_ = MStack_118.iflags;
                  ppIStack_158 = MStack_118.parameters;
                  pIStack_150 = MStack_118.rgctx_data;
                  auStack_1a8._64_8_ = MStack_118.klass;
                  pIStack_160 = MStack_118.return_type;
                  auStack_1a8._48_8_ = MStack_118.invoker_method;
                  auStack_1a8._56_8_ = MStack_118.name;
                  pUVar10 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
                  seg.fields.HasEffect = auStack_1a8._56_4_;
                  seg.fields.Effect = auStack_1a8._60_4_;
                  seg.fields.Content = (System_String_o *)auStack_1a8._48_8_;
                  seg.fields.ColorA.fields.hasValue = auStack_1a8._64_4_;
                  seg.fields.ColorA.fields.value.fields.r = (float)auStack_1a8._68_4_;
                  seg.fields.ColorA.fields.value.fields._4_8_ = pIStack_160;
                  seg.fields._32_8_ = ppIStack_158;
                  seg.fields.ColorB.fields.value.fields._0_8_ = pIStack_150;
                  seg.fields.ColorB.fields.value.fields._8_8_ = _Stack_148.genericMethod;
                  seg.fields.ColorC.fields._0_8_ = uStack_140;
                  seg.fields.ColorC.fields.value.fields._4_8_ = uStack_138;
                  seg.fields.ColorC.fields.value.fields.a = (float)(undefined4)uStack_130;
                  seg.fields.ColorD.fields.hasValue = uStack_130._4_4_;
                  seg.fields.ColorD.fields.value.fields.r = (float)(undefined4)uStack_128;
                  seg.fields.ColorD.fields.value.fields.g = (float)uStack_128._4_4_;
                  seg.fields.ColorD.fields.value.fields.b = (float)(undefined4)uStack_120;
                  seg.fields.ColorD.fields.value.fields.a = (float)uStack_120._4_4_;
                  in_stack_fffffffffffffdf8 = (UnityEngine_Object_o *)auStack_1a8._48_8_;
                  in_stack_fffffffffffffe00 = (Il2CppRGCTXData *)auStack_1a8._56_8_;
                  in_stack_fffffffffffffe08 = (_union_249689)auStack_1a8._64_8_;
                  item = PatreonEffects_EffectText__CreateSegmentGO(__this,pUVar10,seg,method_00);
                  lVar9 = MethodInfo_Void_Add;
                  pSVar3 = (__this->fields)._segments;
                  if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0420df5e;
                  }
                  piVar1 = &(pSVar3->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar5 = (pSVar3->fields)._items;
                  if (pUVar5 == (UnityEngine_GameObject_array *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0420df5e;
                  }
                  uVar2 = (pSVar3->fields)._size;
                  if (uVar2 < (uint)pUVar5->max_length) {
                    (pSVar3->fields)._size = uVar2 + 1;
                    pUVar5->m_Items[(int)uVar2] = item;
                    il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,item);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                }
                __this_02.fields._8_8_ = in_stack_fffffffffffffe00;
                __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8;
                __this_02.fields._current = in_stack_fffffffffffffe08.genericMethod;
                method_01 = MethodInfo_Void_Dispose;
                System_Collections_Generic_List_Enumerator_EffectText_Segment___Dispose(__this_02,&MStack_118)
                ;
                pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_1a8._32_8_;
              }
              pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)((long)&(pSVar12->_1).image + 1);
              uVar2 = (uint)*(il2cpp_array_size_t *)(auStack_1a8._40_8_ + 0x18);
              if ((long)(int)uVar2 <= (long)pSVar12) {
                return;
              }
            } while (pSVar12 < (System_Collections_Generic_List_Enumerator_T__c *)(ulong)uVar2);
          }
          goto label_0420df63;
        }
      }
    }
  }
label_0420df5e:
  il2cpp_runtime_helper_022b2c90();
label_0420df63:
  il2cpp_runtime_helper_022b2ca0();
label_0420df68:
  uVar11 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar11,0);
  __this_04.fields._8_8_ = in_stack_fffffffffffffe00;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8;
  __this_04.fields._current = in_stack_fffffffffffffe08.genericMethod;
  System_Collections_Generic_List_Enumerator_EffectText_Segment___Dispose(__this_04,&MStack_118);
  _Unwind_Resume(unaff_R15);
}


// PatreonEffects.EffectText$$ApplyColor
// il2cpp: void PatreonEffects_EffectText__ApplyColor (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x420e090

void PatreonEffects_EffectText__ApplyColor(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_Component_o *__this_01;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar6;
  System_Object_array *pSVar7;
  UnityEngine_Object_o *pUVar8;
  long *plVar9;
  uint uVar10;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppType *pIVar13;
  UnityEngine_Object_o *pUVar14;
  undefined1 auStack_48 [16];
  UnityEngine_Object_o *pUStack_38;
  
  if (g_data_057ad908 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_GetComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponentsInChildren_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad908 = '\x01';
  }
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar13 = (Il2CppType *)0x0;
  pUVar14 = (UnityEngine_Object_o *)0x0;
  __this_00 = (__this->fields)._segments;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
label_0420e289:
    auVar11 = il2cpp_runtime_helper_022b2c90();
    if (auVar11._8_4_ == 1) {
      plVar9 = (long *)__cxa_begin_catch(auVar11._0_8_);
      lVar5 = *plVar9;
      __cxa_end_catch();
      __this_04.fields._8_8_ = pIVar13;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
      __this_04.fields._current = (Il2CppObject *)pUVar14;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      if (lVar5 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar5);
    }
    __this_05.fields._8_8_ = pIVar13;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
    __this_05.fields._current = (Il2CppObject *)pUVar14;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    _Unwind_Resume(auVar11._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
  pIVar13 = (Il2CppType *)auStack_48._8_8_;
label_0420e150:
  do {
    pUVar8 = pUStack_38;
    __this_02.fields._8_8_ = pIVar13;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
    __this_02.fields._current = (Il2CppObject *)pUVar8;
    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
    if ((char)bVar6 == '\0') {
      __this_03.fields._8_8_ = pIVar13;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
      __this_03.fields._current = (Il2CppObject *)pUVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      return;
    }
    pUVar14 = pUVar8;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pUStack_38 = pUVar14;
  } while ((char)bVar6 != '\0');
  if (pUVar8 == (UnityEngine_Object_o *)0x0) goto label_0420e27f;
  pSVar7 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                     ((UnityEngine_GameObject_o *)pUVar8,MethodInfo_TextMeshProUGUI_GetComponentsInChildren_TextMeshProUGUI);
  if (pSVar7 != (System_Object_array *)0x0) goto code_r0x0420e1b8;
  goto label_0420e284;
code_r0x0420e1b8:
  iVar3 = (int)pSVar7->max_length;
  pUStack_38 = pUVar14;
  if (0 < iVar3) {
    uVar10 = 0;
    if (iVar3 == 0) {
label_0420e27a:
      il2cpp_runtime_helper_022b2ca0();
label_0420e27f:
      il2cpp_runtime_helper_022b2c90();
label_0420e284:
      il2cpp_runtime_helper_022b2c90();
      goto label_0420e289;
    }
    while( true ) {
      __this_01 = (UnityEngine_Component_o *)pSVar7->m_Items[(int)uVar10];
      if (__this_01 == (UnityEngine_Component_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_0420e27a;
      }
      pUVar8 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(__this_01,MethodInfo_NameEffectController_GetComponent_NameEffectController);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        uVar1 = (__this->fields)._color.fields.r;
        uVar2._0_4_ = (__this->fields)._color.fields.b;
        uVar2._4_4_ = (__this->fields)._color.fields.a;
        (**(code **)&__this_01->klass[1]._2.naturalAligment)
                  (uVar1,uVar2,__this_01,__this_01->klass[1].vtable._0_Equals.methodPtr);
      }
      uVar10 = uVar10 + 1;
      uVar4 = (uint)pSVar7->max_length;
      pUStack_38 = pUVar14;
      if ((int)uVar4 <= (int)uVar10) break;
      if (uVar4 <= uVar10) goto label_0420e27a;
    }
  }
  goto label_0420e150;
}


// PatreonEffects.EffectText$$ApplyAlignment
// il2cpp: void PatreonEffects_EffectText__ApplyAlignment (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x420e3c0

void PatreonEffects_EffectText__ApplyAlignment(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  uint uVar3;
  System_Object_array *pSVar4;
  long *plVar5;
  uint uVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  UnityEngine_Object_o *pUVar10;
  UnityEngine_Object_o *x;
  undefined1 auStack_48 [16];
  UnityEngine_Object_o *pUStack_38;
  
  if (g_data_057ad909 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponentsInChildren_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad909 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar9 = (Il2CppType *)0x0;
  pUVar10 = (UnityEngine_Object_o *)0x0;
  __this_00 = (__this->fields)._segments;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIVar9 = (Il2CppType *)auStack_48._8_8_;
    while( true ) {
      do {
        x = pUStack_38;
        __this_01.fields._8_8_ = pIVar9;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
        __this_01.fields._current = (Il2CppObject *)x;
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
        if ((char)bVar2 == '\0') {
          __this_02.fields._8_8_ = pIVar9;
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
          __this_02.fields._current = (Il2CppObject *)x;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
          return;
        }
        pUVar10 = x;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pUStack_38 = pUVar10;
      } while ((char)bVar2 != '\0');
      if (x == (UnityEngine_Object_o *)0x0) break;
      pSVar4 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)x,MethodInfo_TextMeshProUGUI_GetComponentsInChildren_TextMeshProUGUI);
      if (pSVar4 == (System_Object_array *)0x0) goto label_0420e53b;
      uVar3 = (uint)pSVar4->max_length;
      pUStack_38 = pUVar10;
      if (0 < (int)uVar3) {
        uVar6 = 0;
        do {
          if (uVar3 <= uVar6) {
label_0420e531:
            il2cpp_runtime_helper_022b2ca0();
            goto label_0420e536;
          }
          if ((TMPro_TMP_Text_o *)pSVar4->m_Items[(int)uVar6] == (TMPro_TMP_Text_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_0420e531;
          }
          TMPro_TMP_Text__set_alignment
                    ((TMPro_TMP_Text_o *)pSVar4->m_Items[(int)uVar6],(__this->fields)._alignment,
                     (MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
          uVar3 = (uint)pSVar4->max_length;
          pUStack_38 = pUVar10;
        } while ((int)uVar6 < (int)uVar3);
      }
    }
label_0420e536:
    il2cpp_runtime_helper_022b2c90();
label_0420e53b:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar9;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
    __this_03.fields._current = (Il2CppObject *)pUVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar9;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
  __this_04.fields._current = (Il2CppObject *)pUVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar7._0_8_);
}


// PatreonEffects.EffectText$$OnDestroy
// il2cpp: void PatreonEffects_EffectText__OnDestroy (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x4210910

void PatreonEffects_EffectText__OnDestroy(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  long *plVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar9;
  
  if (g_data_057ad90a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad90a = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  x = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._segments;
  if (pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04210a5f;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
             (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  pUVar9 = x;
  while (x = pUVar9, __this_00.fields._8_8_ = pIVar8, __this_00.fields._list = pSVar7,
        __this_00.fields._current = (Il2CppObject *)x,
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8), (char)bVar4 != '\0') {
    pUVar9 = x;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(x,(MethodInfo *)0x0);
    }
  }
  __this_01.fields._8_8_ = pIVar8;
  __this_01.fields._list = pSVar7;
  __this_01.fields._current = (Il2CppObject *)x;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  do {
    pSVar2 = (__this->fields)._segments;
    if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
label_04210a5f:
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ != 1) goto label_04210abd;
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar3 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._list = pSVar7;
    __this_02.fields._current = (Il2CppObject *)x;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  } while (lVar3 == 0);
  il2cpp_runtime_helper_022fefe0(lVar3);
label_04210abd:
  __this_03.fields._8_8_ = pIVar8;
  __this_03.fields._list = pSVar7;
  __this_03.fields._current = (Il2CppObject *)x;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar6._0_8_);
}


// PatreonEffects.EffectText$$.ctor
// il2cpp: void PatreonEffects_EffectText___ctor (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x4210b00

void PatreonEffects_EffectText___ctor(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (g_data_057ad90b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ad90b = '\x01';
  }
  (__this->fields)._text = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._text);
  (__this->fields)._fontSize = 18.0;
  (__this->fields)._color.fields.r = 1.0;
  (__this->fields)._color.fields.g = 1.0;
  (__this->fields)._color.fields.b = 1.0;
  (__this->fields)._color.fields.a = 1.0;
  (__this->fields)._alignment = 0x1001;
  *(undefined1 *)&(__this->fields)._richText = 1;
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._segments = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._segments);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.EffectText$$.cctor
// il2cpp: void PatreonEffects_EffectText___cctor (const MethodInfo* method);
// 0x4210bc0

void PatreonEffects_EffectText___cctor(MethodInfo *method)

{
  long lVar1;
  System_Text_RegularExpressions_Regex_o *pSVar2;
  
  if (g_data_057ad90c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectText);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Regex);
    il2cpp_runtime_helper_023445d0(&"<fx(?<attrs>[^>]*)>(?<content>.*?)</fx>");
    il2cpp_runtime_helper_023445d0(&"(?<key>\\w+)=\"(?<val>[^\"]*)\"");
    g_data_057ad90c = '\x01';
  }
  pSVar2 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor_4907710(pSVar2,"<fx(?<attrs>[^>]*)>(?<content>.*?)</fx>",0x18,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_EffectText + 0xb8) = pSVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_EffectText + 0xb8),pSVar2);
  pSVar2 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor_4907710(pSVar2,"(?<key>\\w+)=\"(?<val>[^\"]*)\"",8,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_EffectText + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar2);
  return;
}


