// Type: CustomSkins.CityCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/CityCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/CityCustomSkinLoader.cs
// --------------------------------

// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$.ctor
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6___ctor (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4574390

void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6___ctor
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_IDisposable_Dispose (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4574c90

void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_IDisposable_Dispose
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

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
      if (g_data_057af09e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057af09e = '\x01';
      }
    }
    else if (g_data_057af09d == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      g_data_057af09d = '\x01';
    }
  }
  else if (g_data_057af09c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057af09c = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_321A1C0 *)&(__this->fields).__7__wrap5);
  return;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$MoveNext
// il2cpp: bool CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__MoveNext (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4574d40

bool_conflict
CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__MoveNext
          (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  CustomSkins_CityCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar1;
  System_Char_array *pSVar2;
  Il2CppRGCTXData *pIVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  void *pvVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  bool bVar6;
  bool bVar7;
  bool_conflict bVar8;
  bool_conflict extraout_EAX;
  System_String_o *pSVar9;
  UnityEngine_GameObject_o *levelObject;
  CustomSkins_BaseCustomSkinPart_o *pCVar10;
  System_Collections_IEnumerator_o *pSVar11;
  UnityEngine_Coroutine_o *pUVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  uint *method_00;
  uint uVar16;
  undefined1 auVar17 [12];
  CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *pCVar18;
  CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *pCVar19;
  undefined4 in_stack_ffffffffffffffa0;
  undefined4 in_stack_ffffffffffffffa4;
  int32_t in_stack_ffffffffffffffa8;
  int32_t in_stack_ffffffffffffffac;
  UnityEngine_GameObject_o *in_stack_ffffffffffffffb0;
  
  pCVar18 = __this;
  if (g_data_057af09b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    g_data_057af09b = '\x01';
  }
  uVar16 = (__this->fields).__1__state;
  if (4 < uVar16) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  method_00 = &switchD_04574dbe::switchdataD_00d99ba8;
  switch(uVar16) {
  case 0:
    (__this->fields).__1__state = -1;
    if (__this_00 == (CustomSkins_CityCustomSkinLoader_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_04574fde:
      il2cpp_runtime_helper_022b2c90();
label_04574fe3:
      il2cpp_runtime_helper_022b2ca0();
label_04574fe8:
      il2cpp_runtime_helper_022b2c90();
label_04574fed:
      il2cpp_runtime_helper_022b2fd0();
label_04574ff2:
      il2cpp_runtime_helper_022b2c90();
label_04574ff7:
      il2cpp_runtime_helper_022b2ca0();
label_04574ffc:
      il2cpp_runtime_helper_022b2c90();
label_04575001:
      il2cpp_runtime_helper_022b2fd0();
label_04575006:
      il2cpp_runtime_helper_022b2c90();
label_0457500b:
      il2cpp_runtime_helper_022b2ca0();
label_04575010:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      method = (__this_00->klass->vtable)._8_FindAndIndexLevelObjects.method;
      (*(__this_00->klass->vtable)._8_FindAndIndexLevelObjects.methodPtr)(__this_00);
      pSVar1 = (pCVar18->fields).data;
      if (pSVar1 == (System_Object_array *)0x0) goto label_04574fde;
      if ((int)pSVar1->max_length == 0) goto label_04574fe3;
      pSVar9 = (System_String_o *)pSVar1->m_Items[0];
      if (pSVar9 == (System_String_o *)0x0) goto label_04574fe8;
      method = (MethodInfo *)g_data_057b9c00;
      if ((Il2CppRGCTXData *)pSVar9->klass != g_data_057b9c00) goto label_04574fed;
      method = (MethodInfo *)System_String__ToCharArray(pSVar9,(MethodInfo *)0x0);
      (pCVar18->fields)._randomIndices_5__2 = (System_Char_array *)method;
      il2cpp_runtime_helper_022b4080(&(pCVar18->fields)._randomIndices_5__2);
      pSVar1 = (pCVar18->fields).data;
      if (pSVar1 == (System_Object_array *)0x0) goto label_04574ff2;
      if ((uint)pSVar1->max_length < 2) goto label_04574ff7;
      pSVar9 = (System_String_o *)pSVar1->m_Items[1];
      if (pSVar9 == (System_String_o *)0x0) goto label_04574ffc;
      method = (MethodInfo *)g_data_057b9c00;
      if ((Il2CppRGCTXData *)pSVar9->klass != g_data_057b9c00) goto label_04575001;
      method = (MethodInfo *)System_String__Split(pSVar9,0x2c,0,(MethodInfo *)0x0);
      ((_union_13 *)&(pCVar18->fields)._houseUrls_5__3)->rgctx_data = (Il2CppRGCTXData *)method;
      il2cpp_runtime_helper_022b4080((_union_13 *)&(pCVar18->fields)._houseUrls_5__3);
      pSVar1 = (pCVar18->fields).data;
      if (pSVar1 == (System_Object_array *)0x0) goto label_04575006;
      if ((uint)pSVar1->max_length < 3) goto label_0457500b;
      pSVar9 = (System_String_o *)pSVar1->m_Items[2];
      if (pSVar9 == (System_String_o *)0x0) goto label_04575010;
      method = (MethodInfo *)g_data_057b9c00;
      if ((Il2CppRGCTXData *)pSVar9->klass == g_data_057b9c00) {
        method_00 = (uint *)0x0;
        method = (MethodInfo *)System_String__Split(pSVar9,0x2c,0,(MethodInfo *)0x0);
        ((_union_14 *)&(pCVar18->fields)._miscUrls_5__4)->genericMethod = method;
        il2cpp_runtime_helper_022b4080((_union_14 *)&(pCVar18->fields)._miscUrls_5__4);
        (pCVar18->fields)._i_5__5 = 0;
        uVar16 = 0;
        pCVar19 = pCVar18;
        __this = pCVar18;
        while (__this_00 != (CustomSkins_CityCustomSkinLoader_o *)0x0) {
          pSVar4 = (__this_00->fields)._houseObjects;
          if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            pCVar18 = __this;
label_045751fc:
            method_00 = (uint *)pCVar18;
            pSVar4 = (__this_00->fields)._groundObjects;
            method = (MethodInfo *)0x0;
            __this = (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00;
            if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0457572d;
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,
                       (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
            (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
            fields._current = in_stack_ffffffffffffffb0;
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
            il2cpp_runtime_helper_022b4080(&(((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->
                                fields).__7__wrap5,0);
            (__this->fields).__1__state = 0xfffffffd;
            pCVar18 = __this;
            goto label_04575260;
          }
          pCVar18 = __this;
          if ((pSVar4->fields)._size <= (int)uVar16) goto label_045751fc;
          pSVar2 = (pCVar19->fields)._randomIndices_5__2;
          if (pSVar2 == (System_Char_array *)0x0) goto label_045756dd;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if ((uint)pSVar2->max_length <= uVar16) goto label_045756ce;
          pSVar9 = System_Char__ToString((short)pSVar2 + (short)uVar16 * 2 + 0x20,(MethodInfo *)0x0);
          method = (MethodInfo *)0x0;
          uVar16 = System_Int32__Parse(pSVar9,(MethodInfo *)0x0);
          pSVar4 = (__this_00->fields)._houseObjects;
          if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_045756e7;
          levelObject = (UnityEngine_GameObject_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar4,
                                   (__this->fields)._i_5__5,MethodInfo_GameObject_get_Item);
          method = (MethodInfo *)0x0;
          pCVar10 = CustomSkins_CityCustomSkinLoader__GetCustomSkinPart
                              (__this_00,0,levelObject,(MethodInfo *)method_00);
          pIVar3 = ((_union_13 *)&(__this->fields)._houseUrls_5__3)->rgctx_data;
          if (pIVar3 == (Il2CppRGCTXData *)0x0) goto label_045756d8;
          if (*(uint *)(pIVar3 + 3) <= uVar16) goto label_045756d3;
          if (pCVar10 == (CustomSkins_BaseCustomSkinPart_o *)0x0) goto label_045756e2;
          method = pIVar3[(long)(int)uVar16 + 4].method;
          bVar8 = CustomSkins_BaseCustomSkinPart__LoadCache
                            (pCVar10,(System_String_o *)method,(MethodInfo *)0x0);
          pCVar18 = __this;
          if ((char)bVar8 == '\0') {
            pIVar3 = ((_union_13 *)&(__this->fields)._houseUrls_5__3)->rgctx_data;
            if (pIVar3 == (Il2CppRGCTXData *)0x0) goto label_04575732;
            if (uVar16 < *(uint *)(pIVar3 + 3)) {
              pSVar11 = CustomSkins_BaseCustomSkinPart__LoadSkin
                                  (pCVar10,(System_String_o *)pIVar3[(long)(int)uVar16 + 4].method,
                                   (MethodInfo *)0x0);
              pUVar12 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                  ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar11,(MethodInfo *)0x0);
              (__this->fields).__2__current = (Il2CppObject *)pUVar12;
              il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar12);
              (__this->fields).__1__state = 1;
              return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
            }
            goto label_04575737;
          }
label_045751d8:
          uVar16 = (__this->fields)._i_5__5 + 1;
          (__this->fields)._i_5__5 = uVar16;
          pCVar19 = __this;
          __this = pCVar18;
        }
        il2cpp_runtime_helper_022b2c90();
label_045756ce:
        il2cpp_runtime_helper_022b2ca0();
label_045756d3:
        il2cpp_runtime_helper_022b2ca0();
label_045756d8:
        il2cpp_runtime_helper_022b2c90();
label_045756dd:
        il2cpp_runtime_helper_022b2c90();
label_045756e2:
        il2cpp_runtime_helper_022b2c90();
label_045756e7:
        il2cpp_runtime_helper_022b2c90();
        pCVar18 = __this;
label_045756ec:
        il2cpp_runtime_helper_022b2ca0();
label_045756f1:
        il2cpp_runtime_helper_022b2c90();
label_045756f6:
        il2cpp_runtime_helper_022b2c90();
label_045756fb:
        il2cpp_runtime_helper_022b2ca0();
label_04575700:
        il2cpp_runtime_helper_022b2c90();
label_04575705:
        il2cpp_runtime_helper_022b2c90();
label_0457570a:
        il2cpp_runtime_helper_022b2c90();
label_0457570f:
        il2cpp_runtime_helper_022b2c90();
label_04575714:
        il2cpp_runtime_helper_022b2ca0();
        __this = pCVar18;
        goto label_04575719;
      }
    }
    il2cpp_runtime_helper_022b2fd0();
    break;
  case 1:
    (__this->fields).__1__state = -1;
    goto label_045751d8;
  case 2:
    (__this->fields).__1__state = -3;
    if (__this_00 != (CustomSkins_CityCustomSkinLoader_o *)0x0) {
label_04575260:
      do {
        __this_04.fields._index = in_stack_ffffffffffffffa0;
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)pCVar18;
        __this_04.fields._version = in_stack_ffffffffffffffa4;
        __this_04.fields._current._0_4_ = in_stack_ffffffffffffffa8;
        __this_04.fields._current._4_4_ = in_stack_ffffffffffffffac;
        bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_04,(MethodInfo_321A1D0 *)&(__this->fields).__7__wrap5);
        if ((char)bVar8 == '\0') {
          bVar7 = false;
          bVar6 = false;
          goto joined_r0x04574f7f;
        }
        method = (MethodInfo *)0x1;
        pCVar10 = CustomSkins_CityCustomSkinLoader__GetCustomSkinPart
                            (__this_00,1,(pCVar18->fields).__7__wrap5.fields._current,(MethodInfo *)method_00)
        ;
        pvVar5 = ((_union_14 *)&(pCVar18->fields)._miscUrls_5__4)->genericMethod;
        if (pvVar5 == (void *)0x0) goto label_0457570f;
        if (*(int *)((long)pvVar5 + 0x18) == 0) goto label_04575714;
        if (pCVar10 == (CustomSkins_BaseCustomSkinPart_o *)0x0) goto label_0457570a;
        method = *(MethodInfo **)((long)pvVar5 + 0x20);
        __this = pCVar18;
        bVar8 = CustomSkins_BaseCustomSkinPart__LoadCache(pCVar10,(System_String_o *)method,(MethodInfo *)0x0)
        ;
        pCVar18 = __this;
      } while ((char)bVar8 != '\0');
      pvVar5 = ((_union_14 *)&(__this->fields)._miscUrls_5__4)->genericMethod;
      if (pvVar5 == (void *)0x0) goto label_04575750;
      if (*(int *)((long)pvVar5 + 0x18) != 0) {
        pSVar11 = CustomSkins_BaseCustomSkinPart__LoadSkin
                            (pCVar10,*(System_String_o **)((long)pvVar5 + 0x20),(MethodInfo *)0x0);
        pUVar12 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                            ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar11,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar12;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar12);
        (__this->fields).__1__state = 2;
        return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      }
label_04575755:
      auVar17 = il2cpp_runtime_helper_022b2ca0();
      pCVar18 = __this;
      goto joined_r0x0457575d;
    }
    __this_02.fields._index = in_stack_ffffffffffffffa0;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pCVar18;
    __this_02.fields._version = in_stack_ffffffffffffffa4;
    __this_02.fields._current._0_4_ = in_stack_ffffffffffffffa8;
    __this_02.fields._current._4_4_ = in_stack_ffffffffffffffac;
    method = (MethodInfo *)MethodInfo_Boolean_MoveNext;
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&(__this->fields).__7__wrap5);
    if ((char)bVar8 == '\0') {
      bVar7 = true;
      bVar6 = true;
joined_r0x04574f7f:
      method_00 = (uint *)pCVar18;
      if (g_data_057af09c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057af09c = '\x01';
        bVar6 = bVar7;
      }
      (pCVar18->fields).__1__state = 0xffffffff;
      __this_05.fields._index = in_stack_ffffffffffffffa0;
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)method_00;
      __this_05.fields._version = in_stack_ffffffffffffffa4;
      __this_05.fields._current._0_4_ = in_stack_ffffffffffffffa8;
      __this_05.fields._current._4_4_ = in_stack_ffffffffffffffac;
      method = (MethodInfo *)MethodInfo_Void_Dispose;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&(pCVar18->fields).__7__wrap5);
      (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.fields.
      _list = (System_Collections_Generic_List_T__o *)0x0;
      (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.fields.
      _index = 0;
      (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.fields.
      _version = 0;
      (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.fields.
      _current = (UnityEngine_GameObject_o *)0x0;
      __this = (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00;
      if (bVar6) goto label_04575723;
      pSVar4 = (__this_00->fields)._wallObjects;
      method = (MethodInfo *)0x0;
      if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,
                   (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
        (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.fields.
        _current = in_stack_ffffffffffffffb0;
        *(undefined4 *)
         &(((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.fields
          ._list = in_stack_ffffffffffffffa0;
        *(undefined4 *)
         ((long)&(((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5
                 .fields._list + 4) = in_stack_ffffffffffffffa4;
        (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.fields.
        _index = in_stack_ffffffffffffffa8;
        (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.fields.
        _version = in_stack_ffffffffffffffac;
        __this = (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00;
        il2cpp_runtime_helper_022b4080(&(((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields)
                            .__7__wrap5,0);
        (__this->fields).__1__state = 0xfffffffc;
        pCVar18 = __this;
        goto label_04575430;
      }
label_04575728:
      il2cpp_runtime_helper_022b2c90();
label_0457572d:
      il2cpp_runtime_helper_022b2c90();
label_04575732:
      il2cpp_runtime_helper_022b2c90();
label_04575737:
      il2cpp_runtime_helper_022b2ca0();
      goto label_0457573c;
    }
    goto label_0457501f;
  case 3:
    (__this->fields).__1__state = -4;
    if (__this_00 != (CustomSkins_CityCustomSkinLoader_o *)0x0) {
label_04575430:
      do {
        __this_06.fields._index = in_stack_ffffffffffffffa0;
        __this_06.fields._list = (System_Collections_Generic_List_T__o *)pCVar18;
        __this_06.fields._version = in_stack_ffffffffffffffa4;
        __this_06.fields._current._0_4_ = in_stack_ffffffffffffffa8;
        __this_06.fields._current._4_4_ = in_stack_ffffffffffffffac;
        bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_06,(MethodInfo_321A1D0 *)&(__this->fields).__7__wrap5);
        if ((char)bVar8 == '\0') {
          bVar7 = false;
          bVar6 = false;
          goto joined_r0x04574fc2;
        }
        method = (MethodInfo *)0x2;
        pCVar10 = CustomSkins_CityCustomSkinLoader__GetCustomSkinPart
                            (__this_00,2,(pCVar18->fields).__7__wrap5.fields._current,(MethodInfo *)method_00)
        ;
        pvVar5 = ((_union_14 *)&(pCVar18->fields)._miscUrls_5__4)->genericMethod;
        if (pvVar5 == (void *)0x0) goto label_04575700;
        if (*(uint *)((long)pvVar5 + 0x18) < 2) goto label_045756fb;
        if (pCVar10 == (CustomSkins_BaseCustomSkinPart_o *)0x0) goto label_04575705;
        method = *(MethodInfo **)((long)pvVar5 + 0x28);
        __this = pCVar18;
        bVar8 = CustomSkins_BaseCustomSkinPart__LoadCache(pCVar10,(System_String_o *)method,(MethodInfo *)0x0)
        ;
        pCVar18 = __this;
      } while ((char)bVar8 != '\0');
      pvVar5 = ((_union_14 *)&(__this->fields)._miscUrls_5__4)->genericMethod;
      if (pvVar5 == (void *)0x0) goto label_04575746;
      if (1 < *(uint *)((long)pvVar5 + 0x18)) {
        pSVar11 = CustomSkins_BaseCustomSkinPart__LoadSkin
                            (pCVar10,*(System_String_o **)((long)pvVar5 + 0x28),(MethodInfo *)0x0);
        pUVar12 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                            ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar11,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar12;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar12);
        (__this->fields).__1__state = 3;
        return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      }
label_0457574b:
      il2cpp_runtime_helper_022b2ca0();
label_04575750:
      il2cpp_runtime_helper_022b2c90();
      goto label_04575755;
    }
    __this_03.fields._index = in_stack_ffffffffffffffa0;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pCVar18;
    __this_03.fields._version = in_stack_ffffffffffffffa4;
    __this_03.fields._current._0_4_ = in_stack_ffffffffffffffa8;
    __this_03.fields._current._4_4_ = in_stack_ffffffffffffffac;
    method = (MethodInfo *)MethodInfo_Boolean_MoveNext;
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_03,(MethodInfo_321A1D0 *)&(__this->fields).__7__wrap5);
    if ((char)bVar8 == '\0') {
      bVar7 = true;
      bVar6 = true;
joined_r0x04574fc2:
      method_00 = (uint *)pCVar18;
      if (g_data_057af09d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057af09d = '\x01';
        bVar6 = bVar7;
      }
      (pCVar18->fields).__1__state = 0xffffffff;
      __this_07.fields._index = in_stack_ffffffffffffffa0;
      __this_07.fields._list = (System_Collections_Generic_List_T__o *)method_00;
      __this_07.fields._version = in_stack_ffffffffffffffa4;
      __this_07.fields._current._0_4_ = in_stack_ffffffffffffffa8;
      __this_07.fields._current._4_4_ = in_stack_ffffffffffffffac;
      method = (MethodInfo *)MethodInfo_Void_Dispose;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)&(pCVar18->fields).__7__wrap5);
      (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.fields.
      _list = (System_Collections_Generic_List_T__o *)0x0;
      (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.fields.
      _index = 0;
      (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.fields.
      _version = 0;
      (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.fields.
      _current = (UnityEngine_GameObject_o *)0x0;
      __this = (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00;
      if (bVar6) {
label_04575719:
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        pSVar4 = (__this_00->fields)._gateObjects;
        method = (MethodInfo *)0x0;
        if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,
                     (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
          (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.fields
          ._current = in_stack_ffffffffffffffb0;
          *(undefined4 *)
           &(((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.
            fields._list = in_stack_ffffffffffffffa0;
          *(undefined4 *)
           ((long)&(((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).
                   __7__wrap5.fields._list + 4) = in_stack_ffffffffffffffa4;
          (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.fields
          ._index = in_stack_ffffffffffffffa8;
          (((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->fields).__7__wrap5.fields
          ._version = in_stack_ffffffffffffffac;
          __this = (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00;
          il2cpp_runtime_helper_022b4080(&(((CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)method_00)->
                              fields).__7__wrap5,0);
          (__this->fields).__1__state = 0xfffffffb;
          pCVar18 = __this;
          goto label_045755b0;
        }
      }
      il2cpp_runtime_helper_022b2c90();
label_04575723:
      il2cpp_runtime_helper_022b2c90();
      goto label_04575728;
    }
    goto label_04575024;
  case 4:
    (__this->fields).__1__state = -5;
    if (__this_00 != (CustomSkins_CityCustomSkinLoader_o *)0x0) {
label_045755b0:
      do {
        __this_08.fields._index = in_stack_ffffffffffffffa0;
        __this_08.fields._list = (System_Collections_Generic_List_T__o *)pCVar18;
        __this_08.fields._version = in_stack_ffffffffffffffa4;
        __this_08.fields._current._0_4_ = in_stack_ffffffffffffffa8;
        __this_08.fields._current._4_4_ = in_stack_ffffffffffffffac;
        bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_08,(MethodInfo_321A1D0 *)&(__this->fields).__7__wrap5);
        if ((char)bVar8 == '\0') goto label_0457566e;
        method = (MethodInfo *)0x3;
        pCVar10 = CustomSkins_CityCustomSkinLoader__GetCustomSkinPart
                            (__this_00,3,(pCVar18->fields).__7__wrap5.fields._current,(MethodInfo *)method_00)
        ;
        pvVar5 = ((_union_14 *)&(pCVar18->fields)._miscUrls_5__4)->genericMethod;
        if (pvVar5 == (void *)0x0) goto label_045756f1;
        if (*(uint *)((long)pvVar5 + 0x18) < 3) goto label_045756ec;
        if (pCVar10 == (CustomSkins_BaseCustomSkinPart_o *)0x0) goto label_045756f6;
        method = *(MethodInfo **)((long)pvVar5 + 0x30);
        __this = pCVar18;
        bVar8 = CustomSkins_BaseCustomSkinPart__LoadCache(pCVar10,(System_String_o *)method,(MethodInfo *)0x0)
        ;
        pCVar18 = __this;
      } while ((char)bVar8 != '\0');
      pvVar5 = ((_union_14 *)&(__this->fields)._miscUrls_5__4)->genericMethod;
      if (pvVar5 == (void *)0x0) {
label_0457573c:
        il2cpp_runtime_helper_022b2c90();
      }
      else if (2 < *(uint *)((long)pvVar5 + 0x18)) {
        pSVar11 = CustomSkins_BaseCustomSkinPart__LoadSkin
                            (pCVar10,*(System_String_o **)((long)pvVar5 + 0x30),(MethodInfo *)0x0);
        pUVar12 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                            ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar11,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar12;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar12);
        (__this->fields).__1__state = 4;
        return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      }
      il2cpp_runtime_helper_022b2ca0();
label_04575746:
      il2cpp_runtime_helper_022b2c90();
      goto label_0457574b;
    }
    __this_01.fields._index = in_stack_ffffffffffffffa0;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pCVar18;
    __this_01.fields._version = in_stack_ffffffffffffffa4;
    __this_01.fields._current._0_4_ = in_stack_ffffffffffffffa8;
    __this_01.fields._current._4_4_ = in_stack_ffffffffffffffac;
    method = (MethodInfo *)MethodInfo_Boolean_MoveNext;
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&(__this->fields).__7__wrap5);
    if ((char)bVar8 == '\0') {
label_0457566e:
      pCVar19 = pCVar18;
      if (g_data_057af09e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057af09e = '\x01';
      }
      (pCVar18->fields).__1__state = 0xffffffff;
      __this_09.fields._index = in_stack_ffffffffffffffa0;
      __this_09.fields._list = (System_Collections_Generic_List_T__o *)pCVar19;
      __this_09.fields._version = in_stack_ffffffffffffffa4;
      __this_09.fields._current._0_4_ = in_stack_ffffffffffffffa8;
      __this_09.fields._current._4_4_ = in_stack_ffffffffffffffac;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_09,(MethodInfo_321A1C0 *)&(pCVar18->fields).__7__wrap5);
      (pCVar19->fields).__7__wrap5.fields._list = (System_Collections_Generic_List_T__o *)0x0;
      (pCVar19->fields).__7__wrap5.fields._index = 0;
      (pCVar19->fields).__7__wrap5.fields._version = 0;
      (pCVar19->fields).__7__wrap5.fields._current = (UnityEngine_GameObject_o *)0x0;
      return 0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0457501f:
  il2cpp_runtime_helper_022b2c90();
label_04575024:
  auVar17 = il2cpp_runtime_helper_022b2c90();
joined_r0x0457575d:
  uVar14 = auVar17._0_8_;
  if (auVar17._8_4_ == 1) {
    plVar13 = (long *)__cxa_begin_catch(uVar14);
    lVar15 = *plVar13;
    __cxa_end_catch();
    if (lVar15 == 0) {
      return 0;
    }
    CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_IDisposable_Dispose(pCVar18,method);
    uVar14 = il2cpp_runtime_helper_022fefe0(lVar15);
    if (lVar15 != 0) {
      CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_IDisposable_Dispose(pCVar18,method);
      lVar15 = il2cpp_runtime_helper_022fefe0(lVar15);
      il2cpp_runtime_helper_01f66400();
      if (g_data_057af09c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057af09c = '\x01';
      }
      *(undefined4 *)(lVar15 + 0x10) = 0xffffffff;
      __this_10.fields._list._4_4_ = in_stack_ffffffffffffffa4;
      __this_10.fields._list._0_4_ = in_stack_ffffffffffffffa0;
      __this_10.fields._index = in_stack_ffffffffffffffa8;
      __this_10.fields._version = in_stack_ffffffffffffffac;
      __this_10.fields._current = (Il2CppObject *)in_stack_ffffffffffffffb0;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_10,(MethodInfo_321A1C0 *)(lVar15 + 0x50));
      return extraout_EAX;
    }
  }
  _Unwind_Resume(uVar14);
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$<>m__Finally1
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6____m__Finally1 (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4575a40

void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6____m__Finally1
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (g_data_057af09c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057af09c = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_321A1C0 *)&(__this->fields).__7__wrap5);
  return;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$<>m__Finally2
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6____m__Finally2 (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4575a80

void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6____m__Finally2
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (g_data_057af09d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057af09d = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_321A1C0 *)&(__this->fields).__7__wrap5);
  return;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$<>m__Finally3
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6____m__Finally3 (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4575ac0

void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6____m__Finally3
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (g_data_057af09e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057af09e = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_321A1C0 *)&(__this->fields).__7__wrap5);
  return;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4575b00

Il2CppObject *
CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_IEnumerator_Reset (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4575b10

void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_IEnumerator_Reset
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_IEnumerator_get_Current (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4575b50

Il2CppObject *
CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_IEnumerator_get_Current
          (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.CityCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_CityCustomSkinLoader__get_RendererIdPrefix (CustomSkins_CityCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x45742e0

System_String_o *
CustomSkins_CityCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_CityCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (g_data_057af096 == '\0') {
    il2cpp_runtime_helper_023445d0(&"city");
    g_data_057af096 = '\x01';
  }
  return "city";
}


// CustomSkins.CityCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_CityCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x4574310

System_Collections_IEnumerator_o *
CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_CityCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057af097 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinsFromRPC_d__6);
    g_data_057af097 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinsFromRPC_d__6);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    __this_00[2].monitor = data;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,data);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// CustomSkins.CityCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_CityCustomSkinLoader__GetCustomSkinPart (CustomSkins_CityCustomSkinLoader_o* __this, int32_t partId, UnityEngine_GameObject_o* levelObject, const MethodInfo* method);
// 0x45743b0

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_CityCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_CityCustomSkinLoader_o *__this,int32_t partId,UnityEngine_GameObject_o *levelObject,
          MethodInfo *method)

{
  uint in_EAX;
  System_Collections_Generic_List_Renderer__o *renderers;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  CustomSkins_BaseCustomSkinPart_o *__this_00;
  System_Collections_Generic_List_Renderer__o *__this_01;
  int32_t maxSize;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (g_data_057af098 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinPart);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Renderer);
    g_data_057af098 = '\x01';
  }
  renderers = (System_Collections_Generic_List_Renderer__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Renderer);
  __this_01 = renderers;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)renderers,MethodInfo_List_1_UnityEngine_Renderer);
  switch(partId) {
  case 0:
    CustomSkins_BaseCustomSkinLoader__AddAllRenderers
              ((CustomSkins_BaseCustomSkinLoader_o *)__this_01,renderers,levelObject,
               (MethodInfo *)&switchD_0457442c::switchdataD_00d99b98);
    uStack_28 = (ulong)(uint)uStack_28;
    break;
  case 1:
    CustomSkins_BaseCustomSkinLoader__AddAllRenderers
              ((CustomSkins_BaseCustomSkinLoader_o *)__this_01,renderers,levelObject,
               (MethodInfo *)&switchD_0457442c::switchdataD_00d99b98);
    uStack_28 = CONCAT44(1,(uint)uStack_28);
    goto label_04574475;
  case 2:
    CustomSkins_BaseCustomSkinLoader__AddAllRenderers
              ((CustomSkins_BaseCustomSkinLoader_o *)__this_01,renderers,levelObject,
               (MethodInfo *)&switchD_0457442c::switchdataD_00d99b98);
    uStack_28 = CONCAT44(2,(uint)uStack_28);
label_04574475:
    pSVar1 = (System_String_o *)(*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(__this);
    pSVar2 = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_3ae5ba0(pSVar1,pSVar2,(MethodInfo *)0x0);
    __this_00 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseCustomSkinPart);
    maxSize = 500000;
    goto label_0457453c;
  case 3:
    CustomSkins_BaseCustomSkinLoader__AddAllRenderers
              ((CustomSkins_BaseCustomSkinLoader_o *)__this_01,renderers,levelObject,
               (MethodInfo *)&switchD_0457442c::switchdataD_00d99b98);
    uStack_28 = CONCAT44(3,(uint)uStack_28);
    break;
  default:
    return (CustomSkins_BaseCustomSkinPart_o *)0x0;
  }
  pSVar1 = (System_String_o *)(*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(__this);
  pSVar2 = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3ae5ba0(pSVar1,pSVar2,(MethodInfo *)0x0);
  __this_00 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseCustomSkinPart);
  maxSize = 2000000;
label_0457453c:
  CustomSkins_BaseCustomSkinPart___ctor
            (__this_00,(CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,pSVar1,maxSize,
             (System_Nullable_Vector2__o)ZEXT812(0),0,(MethodInfo *)0x0);
  return __this_00;
}


// CustomSkins.CityCustomSkinLoader$$FindAndIndexLevelObjects
// il2cpp: void CustomSkins_CityCustomSkinLoader__FindAndIndexLevelObjects (CustomSkins_CityCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4574560

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
  long lVar7;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar8;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  long *plVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar11;
  Il2CppType *pIVar12;
  Il2CppObject *pIVar13;
  Il2CppObject *pIVar14;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (g_data_057af099 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Ma);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&"House1");
    il2cpp_runtime_helper_023445d0(&"Ground");
    il2cpp_runtime_helper_023445d0(&"Cuboid");
    il2cpp_runtime_helper_023445d0(&"Arch1");
    il2cpp_runtime_helper_023445d0(&"Gate");
    il2cpp_runtime_helper_023445d0(&"Tower1");
    g_data_057af099 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  pIVar13 = (Il2CppObject *)0x0;
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
            System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8)
               != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
             (__this_04 = System_Collections_Generic_Dictionary_int__object___get_Values
                                    ((System_Collections_Generic_Dictionary_int__object__o *)
                                     **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Ma),
             __this_04 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
            System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       auStack_48,__this_04,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
            pSVar11 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
                      auStack_48._0_8_;
            pIVar12 = (Il2CppType *)auStack_48._8_8_;
            while( true ) {
              pIVar14 = pIStack_38;
              __this_00.fields._8_8_ = pIVar12;
              __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
              __this_00.fields._currentValue = pIVar14;
              bVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                                (__this_00,(MethodInfo_32443D0 *)&stack0xffffffffffffff98);
              if ((char)bVar8 == '\0') {
                __this_01.fields._8_8_ = pIVar12;
                __this_01.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
                __this_01.fields._currentValue = pIVar14;
                System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                          (__this_01,(MethodInfo_32443C0 *)&stack0xffffffffffffff98);
                return;
              }
              if (pIVar14 == (Il2CppObject *)0x0) break;
              pIVar13 = pIVar14;
              if (pIVar14[2].klass == (Il2CppClass *)0x0) goto label_04574a11;
              a = ((pIVar14[2].klass)->_1).this_arg.data;
              bVar8 = System_String__op_Equality(a,"House1",(MethodInfo *)0x0);
              if ((((char)bVar8 == '\0') &&
                  (bVar8 = System_String__op_Equality(a,"Arch1",(MethodInfo *)0x0), (char)bVar8 == '\0'))
                 && (bVar8 = System_String__op_Equality(a,"Tower1",(MethodInfo *)0x0), (char)bVar8 == '\0'
                    )) {
                bVar8 = System_String__op_Equality(a,"Ground",(MethodInfo *)0x0);
                lVar7 = MethodInfo_Void_Add;
                if ((char)bVar8 == '\0') {
                  bVar8 = System_String__op_Equality(a,"Cuboid",(MethodInfo *)0x0);
                  lVar7 = MethodInfo_Void_Add;
                  if ((char)bVar8 == '\0') {
                    bVar8 = System_String__op_Equality(a,"Gate",(MethodInfo *)0x0);
                    lVar7 = MethodInfo_Void_Add;
                    pIStack_38 = pIVar13;
                    if ((char)bVar8 != '\0') {
                      pSVar4 = (__this->fields)._gateObjects;
                      if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04574a25;
                      pUVar5 = pIVar14[1].monitor;
                      piVar1 = &(pSVar4->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pUVar6 = (pSVar4->fields)._items;
                      if (pUVar6 == (UnityEngine_GameObject_array *)0x0) goto label_04574a34;
                      uVar3 = (pSVar4->fields)._size;
                      if (uVar3 < (uint)pUVar6->max_length) {
                        (pSVar4->fields)._size = uVar3 + 1;
                        pUVar6->m_Items[(int)uVar3] = pUVar5;
                        il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar3);
                        pIStack_38 = pIVar13;
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar5,
                                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
                        ;
                        pIStack_38 = pIVar13;
                      }
                    }
                  }
                  else {
                    pSVar4 = (__this->fields)._wallObjects;
                    if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04574a3e;
                    pUVar5 = pIVar14[1].monitor;
                    piVar1 = &(pSVar4->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar6 = (pSVar4->fields)._items;
                    if (pUVar6 == (UnityEngine_GameObject_array *)0x0) goto label_04574a2f;
                    uVar3 = (pSVar4->fields)._size;
                    if (uVar3 < (uint)pUVar6->max_length) {
                      (pSVar4->fields)._size = uVar3 + 1;
                      pUVar6->m_Items[(int)uVar3] = pUVar5;
                      il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar3);
                      pIStack_38 = pIVar13;
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar5,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                      pIStack_38 = pIVar13;
                    }
                  }
                }
                else {
                  pSVar4 = (__this->fields)._groundObjects;
                  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04574a39;
                  pUVar5 = pIVar14[1].monitor;
                  piVar1 = &(pSVar4->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar6 = (pSVar4->fields)._items;
                  if (pUVar6 == (UnityEngine_GameObject_array *)0x0) goto label_04574a2a;
                  uVar3 = (pSVar4->fields)._size;
                  if (uVar3 < (uint)pUVar6->max_length) {
                    (pSVar4->fields)._size = uVar3 + 1;
                    pUVar6->m_Items[(int)uVar3] = pUVar5;
                    il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar3);
                    pIStack_38 = pIVar13;
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar5,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                    pIStack_38 = pIVar13;
                  }
                }
              }
              else {
                lVar7 = MethodInfo_Void_Add;
                pSVar4 = (__this->fields)._houseObjects;
                if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04574a16;
                pUVar5 = pIVar14[1].monitor;
                piVar1 = &(pSVar4->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar6 = (pSVar4->fields)._items;
                if (pUVar6 == (UnityEngine_GameObject_array *)0x0) goto label_04574a1b;
                uVar3 = (pSVar4->fields)._size;
                if (uVar3 < (uint)pUVar6->max_length) {
                  (pSVar4->fields)._size = uVar3 + 1;
                  pUVar6->m_Items[(int)uVar3] = pUVar5;
                  il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar3);
                  pIStack_38 = pIVar13;
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar5,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                  pIStack_38 = pIVar13;
                }
              }
            }
            il2cpp_runtime_helper_022b2c90();
            pIVar13 = pIVar14;
label_04574a11:
            il2cpp_runtime_helper_022b2c90();
label_04574a16:
            il2cpp_runtime_helper_022b2c90();
label_04574a1b:
            il2cpp_runtime_helper_022b2c90();
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04574a25:
  il2cpp_runtime_helper_022b2c90();
label_04574a2a:
  il2cpp_runtime_helper_022b2c90();
label_04574a2f:
  il2cpp_runtime_helper_022b2c90();
label_04574a34:
  il2cpp_runtime_helper_022b2c90();
label_04574a39:
  il2cpp_runtime_helper_022b2c90();
label_04574a3e:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar7 = *plVar9;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar12;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
    __this_02.fields._currentValue = pIVar13;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
              (__this_02,(MethodInfo_32443C0 *)&stack0xffffffffffffff98);
    if (lVar7 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  __this_03.fields._8_8_ = pIVar12;
  __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
  __this_03.fields._currentValue = pIVar13;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
            (__this_03,(MethodInfo_32443C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar10._0_8_);
}


// CustomSkins.CityCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_CityCustomSkinLoader___ctor (CustomSkins_CityCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4574b90

void CustomSkins_CityCustomSkinLoader___ctor(CustomSkins_CityCustomSkinLoader_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *pSVar1;
  
  if (g_data_057af09a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057af09a = '\x01';
  }
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._houseObjects = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._houseObjects,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._groundObjects = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._groundObjects,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._wallObjects = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._wallObjects,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._gateObjects = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._gateObjects);
  CustomSkins_LevelCustomSkinLoader___ctor((CustomSkins_LevelCustomSkinLoader_o *)__this,(MethodInfo *)0x0);
  return;
}


