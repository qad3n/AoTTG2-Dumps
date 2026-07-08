// Type: CustomSkins.CityCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomSkins/CityCustomSkinLoader.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomSkins/CustomSkinLoaders/CityCustomSkinLoader.cs  [CHANGED since prior version]
// --------------------------------

// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$.ctor
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6___ctor (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x423fe00

void CustomSkins_CityCustomSkinLoader_<LoadSkinsFromRPC>d__6___ctor
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,int32_t __1__state
               ,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_IDisposable_Dispose (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x42407b0

void CustomSkins_CityCustomSkinLoader_<LoadSkinsFromRPC>d__6__System_IDisposable_Dispose
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method
               )

{
  uint uVar1;
  undefined1 in_stack_00000008 [24];
  
  uVar1 = (__this->fields).__1__state + 5;
  if (9 < uVar1) {
    return;
  }
  if ((0x84U >> (uVar1 & 0x1f) & 1) == 0) {
    if ((0x102U >> (uVar1 & 0x1f) & 1) == 0) {
      if ((0x201U >> (uVar1 & 0x1f) & 1) == 0) {
        return;
      }
      if (DAT_057051ab == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
        DAT_057051ab = '\x01';
      }
    }
    else if (DAT_057051aa == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
      DAT_057051aa = '\x01';
    }
  }
  else if (DAT_057051a9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_057051a9 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_3185E10 *)&(__this->fields).__7__wrap5);
  return;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$MoveNext
// il2cpp: bool CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__MoveNext (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4240860

bool_conflict
CustomSkins_CityCustomSkinLoader_<LoadSkinsFromRPC>d__6__MoveNext
          (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  CustomSkins_CityCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar1;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  void *pvVar3;
  Il2CppClass *pIVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  bool bVar5;
  bool bVar6;
  bool_conflict bVar7;
  System_Char_array *pSVar8;
  Il2CppRGCTXData *pIVar9;
  System_String_array *pSVar10;
  System_String_o *pSVar11;
  UnityEngine_GameObject_o *levelObject;
  CustomSkins_BaseCustomSkinPart_o *pCVar12;
  Il2CppObject *pIVar13;
  UnityEngine_Coroutine_o *pUVar14;
  uint *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  uint uVar15;
  CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *pCVar16;
  CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *pCVar17;
  undefined4 in_stack_ffffffffffffffa0;
  undefined4 in_stack_ffffffffffffffa4;
  int32_t in_stack_ffffffffffffffa8;
  int32_t in_stack_ffffffffffffffac;
  UnityEngine_GameObject_o *pUStack_50;
  
  pCVar16 = __this;
  if (DAT_057051a8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Item);
    DAT_057051a8 = '\x01';
  }
  uVar15 = (__this->fields).__1__state;
  if (4 < uVar15) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  method_00 = &switchD_042408de::switchdataD_00d823d8;
  switch(uVar15) {
  case 0:
    (__this->fields).__1__state = -1;
    if (__this_00 == (CustomSkins_CityCustomSkinLoader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(__this_00->klass->vtable)._8_FindAndIndexLevelObjects.methodPtr)
              (__this_00,(__this_00->klass->vtable)._8_FindAndIndexLevelObjects.method);
    pSVar1 = (pCVar16->fields).data;
    if (pSVar1 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((int)pSVar1->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar11 = (System_String_o *)pSVar1->m_Items[0];
    if (pSVar11 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pSVar11->klass != DAT_057110b0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    pSVar8 = System_String__ToCharArray(pSVar11,(MethodInfo *)0x0);
    (pCVar16->fields)._randomIndices_5__2 = pSVar8;
    il2cpp_runtime_glue(&(pCVar16->fields)._randomIndices_5__2,pSVar8);
    pSVar1 = (pCVar16->fields).data;
    if (pSVar1 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((uint)pSVar1->max_length < 2) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar11 = (System_String_o *)pSVar1->m_Items[1];
    if (pSVar11 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pSVar11->klass != DAT_057110b0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    pIVar9 = (Il2CppRGCTXData *)System_String__Split(pSVar11,0x2c,0,(MethodInfo *)0x0);
    ((_union_13 *)&(pCVar16->fields)._houseUrls_5__3)->rgctx_data = pIVar9;
    il2cpp_runtime_glue((_union_13 *)&(pCVar16->fields)._houseUrls_5__3,pIVar9);
    pSVar1 = (pCVar16->fields).data;
    if (pSVar1 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((uint)pSVar1->max_length < 3) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar11 = (System_String_o *)pSVar1->m_Items[2];
    if (pSVar11 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pSVar11->klass != DAT_057110b0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    method_00 = (uint *)0x0;
    pSVar10 = System_String__Split(pSVar11,0x2c,0,(MethodInfo *)0x0);
    ((_union_14 *)&(pCVar16->fields)._miscUrls_5__4)->genericMethod = pSVar10;
    il2cpp_runtime_glue((_union_14 *)&(pCVar16->fields)._miscUrls_5__4);
    (pCVar16->fields)._i_5__5 = 0;
    uVar15 = 0;
    pCVar17 = pCVar16;
    __this = pCVar16;
    while( true ) {
      if (__this_00 == (CustomSkins_CityCustomSkinLoader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar2 = (__this_00->fields)._houseObjects;
      if (pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((pSVar2->fields)._size <= (int)uVar15) {
        pSVar2 = (__this_00->fields)._groundObjects;
        if (pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        method_00 = (uint *)__this;
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,
                   (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
        (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).
        __7__wrap5.fields._current = pUStack_50;
        *(undefined4 *)
         &(((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).
          __7__wrap5.fields._list = in_stack_ffffffffffffffa0;
        *(undefined4 *)
         ((long)&(((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).
                 __7__wrap5.fields._list + 4) = in_stack_ffffffffffffffa4;
        (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).
        __7__wrap5.fields._index = in_stack_ffffffffffffffa8;
        (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).
        __7__wrap5.fields._version = in_stack_ffffffffffffffac;
        __this = (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00;
        il2cpp_runtime_glue(&(((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00
                             )->fields).__7__wrap5,0);
        (__this->fields).__1__state = 0xfffffffd;
        pCVar16 = __this;
        goto LAB_04240de0;
      }
      pSVar8 = (pCVar17->fields)._randomIndices_5__2;
      if (pSVar8 == (System_Char_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((uint)pSVar8->max_length <= uVar15) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar11 = System_Char__ToString((short)pSVar8 + (short)uVar15 * 2 + 0x20,(MethodInfo *)0x0);
      uVar15 = System_Int32__Parse(pSVar11,(MethodInfo *)0x0);
      pSVar2 = (__this_00->fields)._houseObjects;
      if (pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      levelObject = (UnityEngine_GameObject_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,
                               (__this->fields)._i_5__5,MethodInfo_GameObject_get_Item);
      pCVar12 = CustomSkins_CityCustomSkinLoader__GetCustomSkinPart
                          (__this_00,0,levelObject,(MethodInfo *)method_00);
      pIVar9 = ((_union_13 *)&(__this->fields)._houseUrls_5__3)->rgctx_data;
      if (pIVar9 == (Il2CppRGCTXData *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(uint *)(pIVar9 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (pCVar12 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar7 = CustomSkins_BaseCustomSkinPart__LoadCache
                        (pCVar12,(System_String_o *)pIVar9[(long)(int)uVar15 + 4].method,method_01);
      pCVar16 = __this;
      if ((char)bVar7 == '\0') break;
LAB_04240d50:
      uVar15 = (__this->fields)._i_5__5 + 1;
      (__this->fields)._i_5__5 = uVar15;
      pCVar17 = __this;
      __this = pCVar16;
    }
    pIVar9 = ((_union_13 *)&(__this->fields)._houseUrls_5__3)->rgctx_data;
    if (pIVar9 == (Il2CppRGCTXData *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(uint *)(pIVar9 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar4 = pIVar9[(long)(int)uVar15 + 4].rgctxDataDummy;
    if (DAT_057051d1 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_LoadSkin_d__12);
      DAT_057051d1 = '\x01';
    }
    pIVar13 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkin_d__12);
    System_Object___ctor(pIVar13,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar13[1].klass = 0;
    if (pIVar13 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar13[2].monitor = pCVar12;
    il2cpp_runtime_glue(&pIVar13[2].monitor,pCVar12);
    pIVar13[2].klass = pIVar4;
    il2cpp_runtime_glue(pIVar13 + 2,pIVar4);
    pUVar14 = UnityEngine_MonoBehaviour__StartCoroutine
                        ((UnityEngine_MonoBehaviour_o *)__this_00,
                         (System_Collections_IEnumerator_o *)pIVar13,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar14;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar14);
    (__this->fields).__1__state = 1;
    goto LAB_04241376;
  case 1:
    (__this->fields).__1__state = -1;
    goto LAB_04240d50;
  case 2:
    (__this->fields).__1__state = -3;
    if (__this_00 != (CustomSkins_CityCustomSkinLoader_o *)0x0) {
LAB_04240de0:
      do {
        __this_05.fields._index = in_stack_ffffffffffffffa0;
        __this_05.fields._list = (System_Collections_Generic_List_T__o *)pCVar16;
        __this_05.fields._version = in_stack_ffffffffffffffa4;
        __this_05.fields._current._0_4_ = in_stack_ffffffffffffffa8;
        __this_05.fields._current._4_4_ = in_stack_ffffffffffffffac;
        bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_05,(MethodInfo_3185E20 *)&(__this->fields).__7__wrap5);
        if ((char)bVar7 == '\0') {
          bVar6 = false;
          bVar5 = false;
          goto joined_r0x04240a9f;
        }
        pCVar12 = CustomSkins_CityCustomSkinLoader__GetCustomSkinPart
                            (__this_00,1,(pCVar16->fields).__7__wrap5.fields._current,
                             (MethodInfo *)method_00);
        pvVar3 = ((_union_14 *)&(pCVar16->fields)._miscUrls_5__4)->genericMethod;
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (*(int *)((long)pvVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (pCVar12 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this = pCVar16;
        bVar7 = CustomSkins_BaseCustomSkinPart__LoadCache
                          (pCVar12,*(System_String_o **)((long)pvVar3 + 0x20),method_02);
        pCVar16 = __this;
      } while ((char)bVar7 != '\0');
      pvVar3 = ((_union_14 *)&(__this->fields)._miscUrls_5__4)->genericMethod;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(int *)((long)pvVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar4 = *(Il2CppClass **)((long)pvVar3 + 0x20);
      if (DAT_057051d1 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_LoadSkin_d__12);
        DAT_057051d1 = '\x01';
      }
      pIVar13 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkin_d__12);
      System_Object___ctor(pIVar13,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar13[1].klass = 0;
      if (pIVar13 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar13[2].monitor = pCVar12;
      il2cpp_runtime_glue(&pIVar13[2].monitor,pCVar12);
      pIVar13[2].klass = pIVar4;
      il2cpp_runtime_glue(pIVar13 + 2,pIVar4);
      pUVar14 = UnityEngine_MonoBehaviour__StartCoroutine
                          ((UnityEngine_MonoBehaviour_o *)__this_00,
                           (System_Collections_IEnumerator_o *)pIVar13,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pUVar14;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar14);
      (__this->fields).__1__state = 2;
      goto LAB_04241376;
    }
    __this_02.fields._index = in_stack_ffffffffffffffa0;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pCVar16;
    __this_02.fields._version = in_stack_ffffffffffffffa4;
    __this_02.fields._current._0_4_ = in_stack_ffffffffffffffa8;
    __this_02.fields._current._4_4_ = in_stack_ffffffffffffffac;
    bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_02,(MethodInfo_3185E20 *)&(__this->fields).__7__wrap5);
    if ((char)bVar7 != '\0') {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar6 = true;
    bVar5 = true;
joined_r0x04240a9f:
    method_00 = (uint *)pCVar16;
    if (DAT_057051a9 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
      DAT_057051a9 = '\x01';
      bVar5 = bVar6;
    }
    (pCVar16->fields).__1__state = 0xffffffff;
    __this_06.fields._index = in_stack_ffffffffffffffa0;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)method_00;
    __this_06.fields._version = in_stack_ffffffffffffffa4;
    __this_06.fields._current._0_4_ = in_stack_ffffffffffffffa8;
    __this_06.fields._current._4_4_ = in_stack_ffffffffffffffac;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_06,(MethodInfo_3185E10 *)&(pCVar16->fields).__7__wrap5);
    (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
    fields._list = (System_Collections_Generic_List_T__o *)0x0;
    (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
    fields._index = 0;
    (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
    fields._version = 0;
    (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
    fields._current = (UnityEngine_GameObject_o *)0x0;
    if (bVar5) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar2 = (__this_00->fields)._wallObjects;
    if (pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,
               (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
    fields._current = pUStack_50;
    *(undefined4 *)
     &(((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
      fields._list = in_stack_ffffffffffffffa0;
    *(undefined4 *)
     ((long)&(((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).
             __7__wrap5.fields._list + 4) = in_stack_ffffffffffffffa4;
    (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
    fields._index = in_stack_ffffffffffffffa8;
    (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
    fields._version = in_stack_ffffffffffffffac;
    __this = (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00;
    il2cpp_runtime_glue(&(((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->
                        fields).__7__wrap5,0);
    (__this->fields).__1__state = 0xfffffffc;
    pCVar16 = __this;
LAB_04240fc0:
    do {
      __this_07.fields._index = in_stack_ffffffffffffffa0;
      __this_07.fields._list = (System_Collections_Generic_List_T__o *)pCVar16;
      __this_07.fields._version = in_stack_ffffffffffffffa4;
      __this_07.fields._current._0_4_ = in_stack_ffffffffffffffa8;
      __this_07.fields._current._4_4_ = in_stack_ffffffffffffffac;
      bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_07,(MethodInfo_3185E20 *)&(__this->fields).__7__wrap5);
      if ((char)bVar7 == '\0') {
        bVar6 = false;
        bVar5 = false;
        goto joined_r0x04240ae2;
      }
      pCVar12 = CustomSkins_CityCustomSkinLoader__GetCustomSkinPart
                          (__this_00,2,(pCVar16->fields).__7__wrap5.fields._current,
                           (MethodInfo *)method_00);
      pvVar3 = ((_union_14 *)&(pCVar16->fields)._miscUrls_5__4)->genericMethod;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(uint *)((long)pvVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (pCVar12 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this = pCVar16;
      bVar7 = CustomSkins_BaseCustomSkinPart__LoadCache
                        (pCVar12,*(System_String_o **)((long)pvVar3 + 0x28),method_03);
      pCVar16 = __this;
    } while ((char)bVar7 != '\0');
    pvVar3 = ((_union_14 *)&(__this->fields)._miscUrls_5__4)->genericMethod;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(uint *)((long)pvVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar4 = *(Il2CppClass **)((long)pvVar3 + 0x28);
    if (DAT_057051d1 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_LoadSkin_d__12);
      DAT_057051d1 = '\x01';
    }
    pIVar13 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkin_d__12);
    System_Object___ctor(pIVar13,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar13[1].klass = 0;
    if (pIVar13 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar13[2].monitor = pCVar12;
    il2cpp_runtime_glue(&pIVar13[2].monitor,pCVar12);
    pIVar13[2].klass = pIVar4;
    il2cpp_runtime_glue(pIVar13 + 2,pIVar4);
    pUVar14 = UnityEngine_MonoBehaviour__StartCoroutine
                        ((UnityEngine_MonoBehaviour_o *)__this_00,
                         (System_Collections_IEnumerator_o *)pIVar13,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar14;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar14);
    (__this->fields).__1__state = 3;
    goto LAB_04241376;
  case 3:
    (__this->fields).__1__state = -4;
    if (__this_00 != (CustomSkins_CityCustomSkinLoader_o *)0x0) goto LAB_04240fc0;
    __this_03.fields._index = in_stack_ffffffffffffffa0;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pCVar16;
    __this_03.fields._version = in_stack_ffffffffffffffa4;
    __this_03.fields._current._0_4_ = in_stack_ffffffffffffffa8;
    __this_03.fields._current._4_4_ = in_stack_ffffffffffffffac;
    bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_03,(MethodInfo_3185E20 *)&(__this->fields).__7__wrap5);
    if ((char)bVar7 != '\0') {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar6 = true;
    bVar5 = true;
joined_r0x04240ae2:
    method_00 = (uint *)pCVar16;
    if (DAT_057051aa == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
      DAT_057051aa = '\x01';
      bVar5 = bVar6;
    }
    (pCVar16->fields).__1__state = 0xffffffff;
    __this_08.fields._index = in_stack_ffffffffffffffa0;
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)method_00;
    __this_08.fields._version = in_stack_ffffffffffffffa4;
    __this_08.fields._current._0_4_ = in_stack_ffffffffffffffa8;
    __this_08.fields._current._4_4_ = in_stack_ffffffffffffffac;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_08,(MethodInfo_3185E10 *)&(pCVar16->fields).__7__wrap5);
    (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
    fields._list = (System_Collections_Generic_List_T__o *)0x0;
    (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
    fields._index = 0;
    (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
    fields._version = 0;
    (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
    fields._current = (UnityEngine_GameObject_o *)0x0;
    if (bVar5) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar2 = (__this_00->fields)._gateObjects;
    if (pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,
               (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
    fields._current = pUStack_50;
    *(undefined4 *)
     &(((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
      fields._list = in_stack_ffffffffffffffa0;
    *(undefined4 *)
     ((long)&(((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).
             __7__wrap5.fields._list + 4) = in_stack_ffffffffffffffa4;
    (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
    fields._index = in_stack_ffffffffffffffa8;
    (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
    fields._version = in_stack_ffffffffffffffac;
    __this = (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00;
    il2cpp_runtime_glue(&(((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->
                        fields).__7__wrap5,0);
    (__this->fields).__1__state = 0xfffffffb;
    pCVar16 = __this;
    break;
  case 4:
    (__this->fields).__1__state = -5;
    if (__this_00 == (CustomSkins_CityCustomSkinLoader_o *)0x0) {
      __this_01.fields._index = in_stack_ffffffffffffffa0;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pCVar16;
      __this_01.fields._version = in_stack_ffffffffffffffa4;
      __this_01.fields._current._0_4_ = in_stack_ffffffffffffffa8;
      __this_01.fields._current._4_4_ = in_stack_ffffffffffffffac;
      bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&(__this->fields).__7__wrap5);
      if ((char)bVar7 != '\0') {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_04240c28:
      pCVar17 = pCVar16;
      if (DAT_057051ab == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
        DAT_057051ab = '\x01';
      }
      (pCVar16->fields).__1__state = 0xffffffff;
      __this_04.fields._index = in_stack_ffffffffffffffa0;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pCVar17;
      __this_04.fields._version = in_stack_ffffffffffffffa4;
      __this_04.fields._current._0_4_ = in_stack_ffffffffffffffa8;
      __this_04.fields._current._4_4_ = in_stack_ffffffffffffffac;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_04,(MethodInfo_3185E10 *)&(pCVar16->fields).__7__wrap5);
      (pCVar17->fields).__7__wrap5.fields._list = (System_Collections_Generic_List_T__o *)0x0;
      (pCVar17->fields).__7__wrap5.fields._index = 0;
      (pCVar17->fields).__7__wrap5.fields._version = 0;
      (pCVar17->fields).__7__wrap5.fields._current = (UnityEngine_GameObject_o *)0x0;
      return 0;
    }
  }
  do {
    __this_09.fields._index = in_stack_ffffffffffffffa0;
    __this_09.fields._list = (System_Collections_Generic_List_T__o *)pCVar16;
    __this_09.fields._version = in_stack_ffffffffffffffa4;
    __this_09.fields._current._0_4_ = in_stack_ffffffffffffffa8;
    __this_09.fields._current._4_4_ = in_stack_ffffffffffffffac;
    bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_09,(MethodInfo_3185E20 *)&(__this->fields).__7__wrap5);
    if ((char)bVar7 == '\0') goto LAB_04240c28;
    pCVar12 = CustomSkins_CityCustomSkinLoader__GetCustomSkinPart
                        (__this_00,3,(pCVar16->fields).__7__wrap5.fields._current,
                         (MethodInfo *)method_00);
    pvVar3 = ((_union_14 *)&(pCVar16->fields)._miscUrls_5__4)->genericMethod;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(uint *)((long)pvVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pCVar12 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this = pCVar16;
    bVar7 = CustomSkins_BaseCustomSkinPart__LoadCache
                      (pCVar12,*(System_String_o **)((long)pvVar3 + 0x30),method_04);
    pCVar16 = __this;
  } while ((char)bVar7 != '\0');
  pvVar3 = ((_union_14 *)&(__this->fields)._miscUrls_5__4)->genericMethod;
  if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(uint *)((long)pvVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar4 = *(Il2CppClass **)((long)pvVar3 + 0x30);
  if (DAT_057051d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadSkin_d__12);
    DAT_057051d1 = '\x01';
  }
  pIVar13 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkin_d__12);
  System_Object___ctor(pIVar13,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar13[1].klass = 0;
  if (pIVar13 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar13[2].monitor = pCVar12;
  il2cpp_runtime_glue(&pIVar13[2].monitor,pCVar12);
  pIVar13[2].klass = pIVar4;
  il2cpp_runtime_glue(pIVar13 + 2,pIVar4);
  pUVar14 = UnityEngine_MonoBehaviour__StartCoroutine
                      ((UnityEngine_MonoBehaviour_o *)__this_00,
                       (System_Collections_IEnumerator_o *)pIVar13,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)pUVar14;
  il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar14);
  (__this->fields).__1__state = 4;
LAB_04241376:
  return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$<>m__Finally1
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6____m__Finally1 (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4241730

void CustomSkins_CityCustomSkinLoader_<LoadSkinsFromRPC>d__6__<>m__Finally1
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method
               )

{
  undefined1 in_stack_00000008 [24];
  
  if (DAT_057051a9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_057051a9 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_3185E10 *)&(__this->fields).__7__wrap5);
  return;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$<>m__Finally2
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6____m__Finally2 (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4241770

void CustomSkins_CityCustomSkinLoader_<LoadSkinsFromRPC>d__6__<>m__Finally2
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method
               )

{
  undefined1 in_stack_00000008 [24];
  
  if (DAT_057051aa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_057051aa = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_3185E10 *)&(__this->fields).__7__wrap5);
  return;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$<>m__Finally3
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6____m__Finally3 (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x42417b0

void CustomSkins_CityCustomSkinLoader_<LoadSkinsFromRPC>d__6__<>m__Finally3
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method
               )

{
  undefined1 in_stack_00000008 [24];
  
  if (DAT_057051ab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_057051ab = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_3185E10 *)&(__this->fields).__7__wrap5);
  return;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x42417f0

Il2CppObject *
CustomSkins_CityCustomSkinLoader_<LoadSkinsFromRPC>d__6__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_IEnumerator_Reset (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4241800

void CustomSkins_CityCustomSkinLoader_<LoadSkinsFromRPC>d__6__System_Collections_IEnumerator_Reset
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method
               )

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_IEnumerator_get_Current (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4241840

Il2CppObject *
CustomSkins_CityCustomSkinLoader_<LoadSkinsFromRPC>d__6__System_Collections_IEnumerator_get_Current
          (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.CityCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_CityCustomSkinLoader__get_RendererIdPrefix (CustomSkins_CityCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x423fd50

System_String_o *
CustomSkins_CityCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_CityCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (DAT_057051a3 == '\0') {
    il2cpp_init_method_metadata(&"city");
    DAT_057051a3 = '\x01';
  }
  return "city";
}


// CustomSkins.CityCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_CityCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x423fd80

System_Collections_IEnumerator_o *
CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_CityCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057051a4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadSkinsFromRPC_d__6);
    DAT_057051a4 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkinsFromRPC_d__6);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    __this_00[2].monitor = data;
    il2cpp_runtime_glue(&__this_00[2].monitor,data);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.CityCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_CityCustomSkinLoader__GetCustomSkinPart (CustomSkins_CityCustomSkinLoader_o* __this, int32_t partId, UnityEngine_GameObject_o* levelObject, const MethodInfo* method);
// 0x423fe20

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_CityCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_CityCustomSkinLoader_o *__this,int32_t partId,
          UnityEngine_GameObject_o *levelObject,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *renderers;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  CustomSkins_BaseCustomSkinPart_o *__this_00;
  System_Collections_Generic_List_Renderer__o *__this_01;
  int32_t maxSize;
  MethodInfo *in_stack_ffffffffffffffd0;
  undefined4 local_24;
  
  if (DAT_057051a5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCustomSkinPart);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_List_Renderer);
    DAT_057051a5 = '\x01';
  }
  renderers = (System_Collections_Generic_List_Renderer__o *)il2cpp_runtime_glue(TypeInfo_List_Renderer);
  __this_01 = renderers;
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)renderers,MethodInfo_List_1_UnityEngine_Renderer);
  switch(partId) {
  case 0:
    CustomSkins_BaseCustomSkinLoader__AddAllRenderers
              ((CustomSkins_BaseCustomSkinLoader_o *)__this_01,renderers,levelObject,
               (MethodInfo *)&switchD_0423fe9f::switchdataD_00d823c8);
    local_24 = 0;
    break;
  case 1:
    CustomSkins_BaseCustomSkinLoader__AddAllRenderers
              ((CustomSkins_BaseCustomSkinLoader_o *)__this_01,renderers,levelObject,
               (MethodInfo *)&switchD_0423fe9f::switchdataD_00d823c8);
    local_24 = 1;
    goto LAB_0423fee8;
  case 2:
    CustomSkins_BaseCustomSkinLoader__AddAllRenderers
              ((CustomSkins_BaseCustomSkinLoader_o *)__this_01,renderers,levelObject,
               (MethodInfo *)&switchD_0423fe9f::switchdataD_00d823c8);
    local_24 = 2;
LAB_0423fee8:
    pSVar1 = (System_String_o *)(*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(__this)
    ;
    pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(pSVar1,pSVar2,(MethodInfo *)0x0);
    __this_00 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_BaseCustomSkinPart);
    maxSize = 500000;
    goto LAB_0423ffbd;
  case 3:
    CustomSkins_BaseCustomSkinLoader__AddAllRenderers
              ((CustomSkins_BaseCustomSkinLoader_o *)__this_01,renderers,levelObject,
               (MethodInfo *)&switchD_0423fe9f::switchdataD_00d823c8);
    local_24 = 3;
    break;
  default:
    return (CustomSkins_BaseCustomSkinPart_o *)0x0;
  }
  pSVar1 = (System_String_o *)(*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(__this);
  pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,pSVar2,(MethodInfo *)0x0);
  __this_00 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_BaseCustomSkinPart);
  maxSize = 2000000;
LAB_0423ffbd:
  CustomSkins_BaseCustomSkinPart___ctor
            (__this_00,(CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,pSVar1,maxSize,
             (System_Nullable_Vector2__o)ZEXT812(0),0,in_stack_ffffffffffffffd0);
  return __this_00;
}


// CustomSkins.CityCustomSkinLoader$$FindAndIndexLevelObjects
// il2cpp: void CustomSkins_CityCustomSkinLoader__FindAndIndexLevelObjects (CustomSkins_CityCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x423ffe0

void CustomSkins_CityCustomSkinLoader__FindAndIndexLevelObjects
               (CustomSkins_CityCustomSkinLoader_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  int length;
  uint uVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  System_String_o *a;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_GameObject_array *pUVar6;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  long lVar7;
  bool_conflict bVar8;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar9;
  Il2CppType *pIVar10;
  Il2CppObject *pIVar11;
  Il2CppObject *pIVar12;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (DAT_057051a6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&"House1");
    il2cpp_init_method_metadata(&"Ground");
    il2cpp_init_method_metadata(&"Cuboid");
    il2cpp_init_method_metadata(&"Arch1");
    il2cpp_init_method_metadata(&"Gate");
    il2cpp_init_method_metadata(&"Tower1");
    DAT_057051a6 = '\x01';
  }
  pSVar4 = (__this->fields)._houseObjects;
  if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar2 = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    pSVar4 = (__this->fields)._groundObjects;
    if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar2 = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      if (0 < iVar2) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      pSVar4 = (__this->fields)._wallObjects;
      if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar2 = (pSVar4->fields)._size;
        (pSVar4->fields)._size = 0;
        if (0 < iVar2) {
          System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
        }
        pSVar4 = (__this->fields)._gateObjects;
        if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          length = (pSVar4->fields)._size;
          (pSVar4->fields)._size = 0;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0
                               );
          }
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if ((System_Collections_Generic_Dictionary_int__object__o *)
              **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
              (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            __this_02 = System_Collections_Generic_Dictionary<int__object>__get_Values
                                  ((System_Collections_Generic_Dictionary_int__object__o *)
                                   **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
            if (__this_02 !=
                (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
              System_Collections_Generic_Dictionary_ValueCollection<int__object>__GetEnumerator
                        ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                          *)auStack_48,__this_02,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
              pSVar9 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c
                        *)auStack_48._0_8_;
              pIVar10 = (Il2CppType *)auStack_48._8_8_;
              do {
                while( true ) {
                  pIVar11 = pIStack_38;
                  __this_00.fields._8_8_ = pIVar10;
                  __this_00.fields._dictionary =
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
                  __this_00.fields._currentValue = pIVar11;
                  bVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__MoveNext
                                    (__this_00,(MethodInfo_31C3100 *)&stack0xffffffffffffff98);
                  if ((char)bVar8 == '\0') {
                    __this_01.fields._8_8_ = pIVar10;
                    __this_01.fields._dictionary =
                         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
                    __this_01.fields._currentValue = pIVar11;
                    System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__Dispose
                              (__this_01,(MethodInfo_31C30F0 *)&stack0xffffffffffffff98);
                    return;
                  }
                  if (pIVar11 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  if (pIVar11[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  a = ((pIVar11[2].klass)->_1).this_arg.data;
                  pIVar12 = pIVar11;
                  bVar8 = System_String__op_Equality(a,"House1",(MethodInfo *)0x0);
                  if ((char)bVar8 == '\0') break;
LAB_04240280:
                  lVar7 = MethodInfo_Void_Add;
                  pSVar4 = (__this->fields)._houseObjects;
                  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar5 = pIVar11[1].monitor;
                  piVar1 = &(pSVar4->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar6 = (pSVar4->fields)._items;
                  if (pUVar6 == (UnityEngine_GameObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  uVar3 = (pSVar4->fields)._size;
                  if (uVar3 < (uint)pUVar6->max_length) {
                    (pSVar4->fields)._size = uVar3 + 1;
                    pUVar6->m_Items[(int)uVar3] = pUVar5;
                    il2cpp_runtime_glue(pUVar6->m_Items + (int)uVar3);
                    pIStack_38 = pIVar12;
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar4,
                               (Il2CppObject *)pUVar5,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                    pIStack_38 = pIVar12;
                  }
                }
                bVar8 = System_String__op_Equality(a,"Arch1",(MethodInfo *)0x0);
                if ((char)bVar8 != '\0') goto LAB_04240280;
                bVar8 = System_String__op_Equality(a,"Tower1",(MethodInfo *)0x0);
                if ((char)bVar8 != '\0') goto LAB_04240280;
                bVar8 = System_String__op_Equality(a,"Ground",(MethodInfo *)0x0);
                lVar7 = MethodInfo_Void_Add;
                if ((char)bVar8 == '\0') {
                  bVar8 = System_String__op_Equality(a,"Cuboid",(MethodInfo *)0x0);
                  lVar7 = MethodInfo_Void_Add;
                  if ((char)bVar8 == '\0') {
                    bVar8 = System_String__op_Equality(a,"Gate",(MethodInfo *)0x0);
                    lVar7 = MethodInfo_Void_Add;
                    pIStack_38 = pIVar12;
                    if ((char)bVar8 != '\0') {
                      pSVar4 = (__this->fields)._gateObjects;
                      if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      pUVar5 = pIVar11[1].monitor;
                      piVar1 = &(pSVar4->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pUVar6 = (pSVar4->fields)._items;
                      if (pUVar6 == (UnityEngine_GameObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      uVar3 = (pSVar4->fields)._size;
                      if (uVar3 < (uint)pUVar6->max_length) {
                        (pSVar4->fields)._size = uVar3 + 1;
                        pUVar6->m_Items[(int)uVar3] = pUVar5;
                        il2cpp_runtime_glue(pUVar6->m_Items + (int)uVar3);
                        pIStack_38 = pIVar12;
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar4,
                                   (Il2CppObject *)pUVar5,
                                   *(MethodInfo_35A7350 **)
                                    (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                        pIStack_38 = pIVar12;
                      }
                    }
                  }
                  else {
                    pSVar4 = (__this->fields)._wallObjects;
                    if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pUVar5 = pIVar11[1].monitor;
                    piVar1 = &(pSVar4->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar6 = (pSVar4->fields)._items;
                    if (pUVar6 == (UnityEngine_GameObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    uVar3 = (pSVar4->fields)._size;
                    if (uVar3 < (uint)pUVar6->max_length) {
                      (pSVar4->fields)._size = uVar3 + 1;
                      pUVar6->m_Items[(int)uVar3] = pUVar5;
                      il2cpp_runtime_glue(pUVar6->m_Items + (int)uVar3);
                      pIStack_38 = pIVar12;
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar4,
                                 (Il2CppObject *)pUVar5,
                                 *(MethodInfo_35A7350 **)
                                  (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                      pIStack_38 = pIVar12;
                    }
                  }
                }
                else {
                  pSVar4 = (__this->fields)._groundObjects;
                  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar5 = pIVar11[1].monitor;
                  piVar1 = &(pSVar4->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar6 = (pSVar4->fields)._items;
                  if (pUVar6 == (UnityEngine_GameObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  uVar3 = (pSVar4->fields)._size;
                  if (uVar3 < (uint)pUVar6->max_length) {
                    (pSVar4->fields)._size = uVar3 + 1;
                    pUVar6->m_Items[(int)uVar3] = pUVar5;
                    il2cpp_runtime_glue(pUVar6->m_Items + (int)uVar3);
                    pIStack_38 = pIVar12;
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar4,
                               (Il2CppObject *)pUVar5,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                    pIStack_38 = pIVar12;
                  }
                }
              } while( true );
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.CityCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_CityCustomSkinLoader___ctor (CustomSkins_CityCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4240610

void CustomSkins_CityCustomSkinLoader___ctor
               (CustomSkins_CityCustomSkinLoader_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *pSVar1;
  
  if (DAT_057051a7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    DAT_057051a7 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._houseObjects = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._houseObjects,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._groundObjects = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._groundObjects,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._wallObjects = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._wallObjects,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._gateObjects = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._gateObjects);
  if (DAT_057051c1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCustomSkinLoader);
    DAT_057051c1 = '\x01';
  }
  if (*(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


