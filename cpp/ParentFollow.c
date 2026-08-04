// Type: ParentFollow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ParentFollow.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/ParentFollow.cs
// --------------------------------

// ParentFollow$$Awake
// il2cpp: void ParentFollow__Awake (ParentFollow_o* __this, const MethodInfo* method);
// 0x405ba10

void ParentFollow__Awake(ParentFollow_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  (__this->fields).bTransform = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).bTransform,pUVar1);
  *(undefined1 *)&(__this->fields).isActiveInScene = 1;
  return;
}


// ParentFollow$$RemoveParent
// il2cpp: void ParentFollow__RemoveParent (ParentFollow_o* __this, const MethodInfo* method);
// 0x405a4f0

void ParentFollow__RemoveParent(ParentFollow_o *__this,MethodInfo *method)

{
  (__this->fields).parent = (UnityEngine_Transform_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields).parent,0);
  return;
}


// ParentFollow$$SetParent
// il2cpp: void ParentFollow__SetParent (ParentFollow_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
// 0x405ad80

void ParentFollow__SetParent(ParentFollow_o *__this,UnityEngine_Transform_o *transform,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  long lVar1;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  bool_conflict bVar2;
  uint uVar3;
  UnityEngine_SkinnedMeshRenderer_o *__this_05;
  UnityEngine_SkinnedMeshRenderer_o *__this_06;
  UnityEngine_Transform_array *value;
  UnityEngine_Transform_o *pUVar4;
  Il2CppObject *pIVar5;
  System_Object_array *pSVar6;
  Il2CppObject *arg1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_07;
  Il2CppObject *arg2;
  long *plVar7;
  uint uVar8;
  UnityEngine_Transform_o *__this_08;
  int iVar9;
  undefined8 *unaff_R12;
  int unaff_R13D;
  undefined1 auVar10 [12];
  UnityEngine_Quaternion_o value_00;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 in_stack_ffffffffffffff30;
  int in_stack_ffffffffffffff34;
  Il2CppMethodPointer pIVar11;
  Il2CppRGCTXData *pIVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_98 [16];
  _union_231609 a_Stack_88 [3];
  UnityEngine_Transform_o *pUStack_70;
  undefined8 *puStack_68;
  
  __this_08 = (UnityEngine_Transform_o *)&(__this->fields).parent;
  (__this->fields).parent = transform;
  pUVar4 = transform;
  il2cpp_runtime_helper_022b4080();
  if (transform != (UnityEngine_Transform_o *)0x0) {
    __this_00 = (__this->fields).bTransform;
    pUVar4 = (UnityEngine_Transform_o *)0x0;
    value_00 = UnityEngine_Transform__get_rotation(transform,(MethodInfo *)0x0);
    __this_08 = transform;
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_rotation(__this_00,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac27c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    g_data_057ac27c = '\x01';
  }
  if (__this_08 != (UnityEngine_Transform_o *)0x0) {
    unaff_R12 = &MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer;
    __this_05 = (UnityEngine_SkinnedMeshRenderer_o *)
                UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_08,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    if ((pUVar4 != (UnityEngine_Transform_o *)0x0) &&
       (__this_06 = (UnityEngine_SkinnedMeshRenderer_o *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer),
       __this_05 != (UnityEngine_SkinnedMeshRenderer_o *)0x0)) {
      value = UnityEngine_SkinnedMeshRenderer__get_bones(__this_05,(MethodInfo *)0x0);
      __this_08 = (UnityEngine_Transform_o *)0x0;
      if (__this_06 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
        UnityEngine_SkinnedMeshRenderer__set_bones(__this_06,value,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
        if (g_data_057a6932 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6932 = '\x01';
        }
        __this_08 = (UnityEngine_Transform_o *)0x0;
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localScale
                    (pUVar4,(UnityEngine_Vector3_o)
                            *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_70 = __this_08;
  puStack_68 = unaff_R12;
  if (g_data_057ac27a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_List_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Lis);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_List_1_UnityEngine_GameObje);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Cloth_FindObjectsOfType_Cloth);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"{0} cached cloths, {1} active cloths, {2} types cached");
    g_data_057ac27a = '\x01';
  }
  uVar13 = 0;
  uVar14 = 0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  pIVar12 = (Il2CppRGCTXData *)0x0;
  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_98,
               (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_List_1);
    pIVar11 = (Il2CppMethodPointer)CONCAT44(auStack_98._4_4_,auStack_98._0_4_);
    unaff_R13D = 0;
    pIVar12 = (Il2CppRGCTXData *)auStack_98._8_8_;
    uVar13 = a_Stack_88[0]._0_4_;
    uVar14 = a_Stack_88[0]._4_4_;
    while( true ) {
      __this_01.fields._version = in_stack_ffffffffffffff30;
      __this_01.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff28;
      __this_01.fields._index = in_stack_ffffffffffffff34;
      __this_01.fields._current.fields.key = (Il2CppObject *)pIVar11;
      __this_01.fields._current.fields.value = (Il2CppObject *)pIVar12;
      __this_01.fields._getEnumeratorRetType = uVar13;
      __this_01.fields._36_4_ = uVar14;
      bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251160 *)&stack0xffffffffffffff38);
      if ((char)bVar2 == '\0') {
        __this_02.fields._version = in_stack_ffffffffffffff30;
        __this_02.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff28;
        __this_02.fields._index = in_stack_ffffffffffffff34;
        __this_02.fields._current.fields.key = (Il2CppObject *)pIVar11;
        __this_02.fields._current.fields.value = (Il2CppObject *)pIVar12;
        __this_02.fields._getEnumeratorRetType = uVar13;
        __this_02.fields._36_4_ = uVar14;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff38);
        goto label_0405b0a2;
      }
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff38,MethodInfo_KeyValuePair_2_System_String_List_1_UnityEngine_GameObje);
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      pIVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)
                          **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),pIVar5,MethodInfo_List_1_UnityEngine_GameObject_get_Item);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_0405b1d9;
      unaff_R13D = unaff_R13D + *(int *)&pIVar5[1].monitor;
    }
    il2cpp_runtime_helper_022b2c90();
label_0405b1d9:
    il2cpp_runtime_helper_022b2c90();
  }
label_0405b1de:
  do {
    il2cpp_runtime_helper_022b2c90();
label_0405b1e3:
    auVar10 = il2cpp_runtime_helper_022b2ca0();
    if (auVar10._8_4_ != 1) {
label_0405b257:
      __this_04.fields._version = in_stack_ffffffffffffff30;
      __this_04.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff28;
      __this_04.fields._index = in_stack_ffffffffffffff34;
      __this_04.fields._current.fields.key = (Il2CppObject *)pIVar11;
      __this_04.fields._current.fields.value = (Il2CppObject *)pIVar12;
      __this_04.fields._getEnumeratorRetType = uVar13;
      __this_04.fields._36_4_ = uVar14;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffff38);
      _Unwind_Resume(auVar10._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar1 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._version = in_stack_ffffffffffffff30;
    __this_03.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff28;
    __this_03.fields._index = in_stack_ffffffffffffff34;
    __this_03.fields._current.fields.key = (Il2CppObject *)pIVar11;
    __this_03.fields._current.fields.value = (Il2CppObject *)pIVar12;
    __this_03.fields._getEnumeratorRetType = uVar13;
    __this_03.fields._36_4_ = uVar14;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff38);
    if (lVar1 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar1);
      goto label_0405b257;
    }
label_0405b0a2:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = UnityEngine_Object__FindObjectsOfType_object_(MethodInfo_Cloth_FindObjectsOfType_Cloth);
    if (pSVar6 == (System_Object_array *)0x0) goto label_0405b1de;
    uVar3 = (uint)pSVar6->max_length;
    if (0 < (int)uVar3) {
      uVar8 = 0;
      iVar9 = 0;
      while (uVar8 < uVar3) {
        if ((UnityEngine_Cloth_o *)pSVar6->m_Items[(int)uVar8] == (UnityEngine_Cloth_o *)0x0)
        goto label_0405b1de;
        uVar3 = UnityEngine_Cloth__get_enabled
                          ((UnityEngine_Cloth_o *)pSVar6->m_Items[(int)uVar8],(MethodInfo *)0x0);
        iVar9 = iVar9 + (uVar3 & 0xff);
        uVar8 = uVar8 + 1;
        uVar3 = (uint)pSVar6->max_length;
        if ((int)uVar3 <= (int)uVar8) goto label_0405b114;
      }
      goto label_0405b1e3;
    }
    iVar9 = 0;
label_0405b114:
    auStack_98._0_4_ = unaff_R13D;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_98);
    arg1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffff34);
    in_stack_ffffffffffffff34 = iVar9;
    if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_stack_ffffffffffffff34 = iVar9;
    }
    if (((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
         (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_07 = System_Collections_Generic_Dictionary_object__object___get_Keys
                              ((System_Collections_Generic_Dictionary_object__object__o *)
                               **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Lis),
       __this_07 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___get_Count(__this_07,MethodInfo_Int32_get_Count);
      arg2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffff30);
      System_String__Format_3af7930("{0} cached cloths, {1} active cloths, {2} types cached",pIVar5,arg1,arg2,(MethodInfo *)0x0);
      return;
    }
  } while( true );
}


// ParentFollow$$Update
// il2cpp: void ParentFollow__Update (ParentFollow_o* __this, const MethodInfo* method);
// 0x405ba40

void ParentFollow__Update(ParentFollow_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_MonoBehaviour_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (g_data_057ac27e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac27e = '\x01';
  }
  if ((char)(__this->fields).isActiveInScene != '\0') {
    pUVar1 = (__this->fields).parent;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      __this_00 = (UnityEngine_MonoBehaviour_o *)(__this->fields).parent;
      if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pUVar1 = (__this->fields).bTransform;
        value = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_position(pUVar1,value,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ParentFollow$$.ctor
// il2cpp: void ParentFollow___ctor (ParentFollow_o* __this, const MethodInfo* method);
// 0x405bad0

void ParentFollow___ctor(ParentFollow_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


