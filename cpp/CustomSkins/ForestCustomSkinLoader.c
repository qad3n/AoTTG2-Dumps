// Type: CustomSkins.ForestCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/ForestCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/ForestCustomSkinLoader.cs
// --------------------------------

// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$.ctor
// il2cpp: void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4___ctor (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x408f390

void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4___ctor
               (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_IDisposable_Dispose (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x408fc40

void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_IDisposable_Dispose
               (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined1 in_stack_00000008 [24];
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 3) && (iVar1 != -3)) {
    return;
  }
  if (g_data_057ac414 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057ac414 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_321A1C0 *)&(__this->fields).__7__wrap9);
  return;
}


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$MoveNext
// il2cpp: bool CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__MoveNext (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x408fc90

bool_conflict
CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__MoveNext
          (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  uint uVar1;
  CustomSkins_ForestCustomSkinLoader_o *__this_00;
  System_String_o *pSVar2;
  long lVar3;
  long lVar4;
  System_Collections_Generic_List_GameObject__o *pSVar5;
  void *pvVar6;
  Il2CppClass *pIVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  uint16_t *puVar8;
  bool_conflict bVar9;
  bool_conflict extraout_EAX;
  System_Int32_array *pSVar10;
  System_String_array *pSVar11;
  UnityEngine_GameObject_o *pUVar12;
  CustomSkins_BaseCustomSkinPart_o *pCVar13;
  CustomSkins_BaseCustomSkinPart_o *pCVar14;
  Il2CppObject *pIVar15;
  UnityEngine_Coroutine_o *pUVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  uint uVar20;
  uint *method_00;
  MethodInfo *method_01;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_03;
  CustomSkins_ForestCustomSkinLoader_o *pCVar21;
  undefined1 auVar22 [12];
  System_Char_array *pSVar23;
  System_Char_array *pSVar24;
  undefined4 in_stack_ffffffffffffffa0;
  undefined4 in_stack_ffffffffffffffa4;
  int32_t in_stack_ffffffffffffffa8;
  int32_t in_stack_ffffffffffffffac;
  Il2CppObject *in_stack_ffffffffffffffb0;
  
  pSVar23 = (System_Char_array *)__this;
  if (g_data_057ac413 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    g_data_057ac413 = '\x01';
    in_RDX = extraout_RDX;
  }
  uVar20 = (__this->fields).__1__state;
  if (3 < uVar20) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  method_00 = &switchD_0408fd0f::switchdataD_00d992e0;
  switch(uVar20) {
  case 0:
    (__this->fields).__1__state = -1;
    if (__this_00 == (CustomSkins_ForestCustomSkinLoader_o *)0x0) goto label_0408ff0f;
    (*(__this_00->klass->vtable)._8_FindAndIndexLevelObjects.methodPtr)
              (__this_00,(__this_00->klass->vtable)._8_FindAndIndexLevelObjects.method);
    lVar19 = *(long *)(pSVar23->m_Items + 4);
    if (lVar19 == 0) goto label_0408ff14;
    if (*(int *)(lVar19 + 0x18) == 0) goto label_0408ff19;
    pCVar21 = *(CustomSkins_ForestCustomSkinLoader_o **)(lVar19 + 0x20);
    if (pCVar21 == (CustomSkins_ForestCustomSkinLoader_o *)0x0) goto label_0408ff1e;
    if ((System_String_c *)pCVar21->klass != g_data_057b9c00) goto label_0408ff23;
    __this = (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)
             System_String__ToCharArray((System_String_o *)pCVar21,(MethodInfo *)0x0);
    pSVar10 = CustomSkins_ForestCustomSkinLoader__SplitRandomIndices
                        (pCVar21,(System_Char_array *)__this,0,(MethodInfo *)method_00);
    *(System_Int32_array **)(pSVar23->m_Items + 8) = pSVar10;
    pCVar21 = (CustomSkins_ForestCustomSkinLoader_o *)(pSVar23->m_Items + 8);
    il2cpp_runtime_helper_022b4080(pCVar21,pSVar10);
    pSVar10 = CustomSkins_ForestCustomSkinLoader__SplitRandomIndices
                        (pCVar21,(System_Char_array *)__this,1,(MethodInfo *)method_00);
    *(System_Int32_array **)(pSVar23->m_Items + 0xc) = pSVar10;
    il2cpp_runtime_helper_022b4080(pSVar23->m_Items + 0xc,pSVar10);
    lVar19 = *(long *)(pSVar23->m_Items + 4);
    if (lVar19 == 0) goto label_0408ff28;
    if (*(uint *)(lVar19 + 0x18) < 2) goto label_0408ff2d;
    pSVar2 = *(System_String_o **)(lVar19 + 0x28);
    if (pSVar2 == (System_String_o *)0x0) goto label_0408ff32;
    if (pSVar2->klass != g_data_057b9c00) goto label_0408ff37;
    pSVar11 = System_String__Split(pSVar2,0x2c,0,(MethodInfo *)0x0);
    *(System_String_array **)(pSVar23->m_Items + 0x10) = pSVar11;
    il2cpp_runtime_helper_022b4080(pSVar23->m_Items + 0x10,pSVar11);
    lVar19 = *(long *)(pSVar23->m_Items + 4);
    if (lVar19 == 0) goto label_0408ff3c;
    if (*(uint *)(lVar19 + 0x18) < 3) goto label_0408ff41;
    pSVar2 = *(System_String_o **)(lVar19 + 0x30);
    if (pSVar2 == (System_String_o *)0x0) goto label_0408ff46;
    if (pSVar2->klass != g_data_057b9c00) goto label_0408ff4b;
    pSVar11 = System_String__Split(pSVar2,0x2c,0,(MethodInfo *)0x0);
    *(System_String_array **)(pSVar23->m_Items + 0x14) = pSVar11;
    il2cpp_runtime_helper_022b4080(pSVar23->m_Items + 0x14,pSVar11);
    lVar19 = *(long *)(pSVar23->m_Items + 0x14);
    if (lVar19 == 0) goto label_0408ff50;
    if (8 < *(uint *)(lVar19 + 0x18)) {
      *(undefined8 *)(pSVar23->m_Items + 0x18) = *(undefined8 *)(lVar19 + 0x60);
      il2cpp_runtime_helper_022b4080(pSVar23->m_Items + 0x18);
      pSVar23->m_Items[0x1c] = 0;
      pSVar23->m_Items[0x1d] = 0;
      uVar20 = 0;
      if (__this_00 != (CustomSkins_ForestCustomSkinLoader_o *)0x0) goto label_0409022a;
      do {
        il2cpp_runtime_helper_022b2c90();
switchD_0408fd0f_caseD_2:
        *(undefined4 *)&((System_Char_array *)__this)->bounds = 0xffffffff;
        while( true ) {
          ((System_Char_array *)__this)->m_Items[0x20] = 0;
          ((System_Char_array *)__this)->m_Items[0x21] = 0;
          ((System_Char_array *)__this)->m_Items[0x22] = 0;
          ((System_Char_array *)__this)->m_Items[0x23] = 0;
          __this = (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)
                   (((System_Char_array *)__this)->m_Items + 0x20);
          il2cpp_runtime_helper_022b4080(__this,0);
          pSVar23->m_Items[0x24] = 0;
          pSVar23->m_Items[0x25] = 0;
          pSVar23->m_Items[0x26] = 0;
          pSVar23->m_Items[0x27] = 0;
          il2cpp_runtime_helper_022b4080(pSVar23->m_Items + 0x24);
          uVar20 = *(int *)(pSVar23->m_Items + 0x1c) + 1;
          *(uint *)(pSVar23->m_Items + 0x1c) = uVar20;
          if (__this_00 == (CustomSkins_ForestCustomSkinLoader_o *)0x0) break;
label_0409022a:
          __this = (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)pSVar23;
          pSVar5 = (__this_00->fields)._treeObjects;
          if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            method_00 = (uint *)__this;
label_0409023c:
            pSVar5 = (__this_00->fields)._groundObjects;
            if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04090540;
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,
                       (System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
            *(Il2CppObject **)(((System_Char_array *)method_00)->m_Items + 0x30) = in_stack_ffffffffffffffb0;
            *(undefined4 *)(((System_Char_array *)method_00)->m_Items + 0x28) = in_stack_ffffffffffffffa0;
            *(undefined4 *)(((System_Char_array *)method_00)->m_Items + 0x2a) = in_stack_ffffffffffffffa4;
            *(int32_t *)(((System_Char_array *)method_00)->m_Items + 0x2c) = in_stack_ffffffffffffffa8;
            *(int32_t *)(((System_Char_array *)method_00)->m_Items + 0x2e) = in_stack_ffffffffffffffac;
            __this = (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00;
            il2cpp_runtime_helper_022b4080(((System_Char_array *)method_00)->m_Items + 0x28,0);
            *(undefined4 *)&((System_Char_array *)__this)->bounds = 0xfffffffd;
            pSVar23 = (System_Char_array *)__this;
            goto label_040902a0;
          }
          method_00 = (uint *)__this;
          if ((pSVar5->fields)._size <= (int)uVar20) goto label_0409023c;
          lVar19 = *(long *)(((System_Char_array *)__this)->m_Items + 8);
          if (lVar19 == 0) {
label_04090509:
            il2cpp_runtime_helper_022b2c90();
label_0409050e:
            il2cpp_runtime_helper_022b2c90();
label_04090513:
            il2cpp_runtime_helper_022b2c90();
label_04090518:
            il2cpp_runtime_helper_022b2c90();
            pSVar23 = (System_Char_array *)__this;
label_0409051d:
            il2cpp_runtime_helper_022b2c90();
label_04090522:
            il2cpp_runtime_helper_022b2c90();
label_04090527:
            il2cpp_runtime_helper_022b2ca0();
label_0409052c:
            il2cpp_runtime_helper_022b2ca0();
label_04090531:
            il2cpp_runtime_helper_022b2ca0();
label_04090536:
            il2cpp_runtime_helper_022b2ca0();
            goto label_0409053b;
          }
          pSVar23 = (System_Char_array *)__this;
          if (*(uint *)(lVar19 + 0x18) <= uVar20) goto label_04090527;
          lVar3 = *(long *)(((System_Char_array *)__this)->m_Items + 0xc);
          if (lVar3 == 0) goto label_0409051d;
          if (*(uint *)(lVar3 + 0x18) <= uVar20) goto label_0409052c;
          lVar4 = *(long *)(((System_Char_array *)__this)->m_Items + 0x10);
          if (lVar4 == 0) goto label_0409050e;
          uVar1 = *(uint *)(lVar19 + 0x20 + (long)(int)uVar20 * 4);
          method_01 = (MethodInfo *)(long)(int)uVar1;
          if (*(uint *)(lVar4 + 0x18) <= uVar1) goto label_04090531;
          lVar19 = *(long *)(((System_Char_array *)__this)->m_Items + 0x14);
          if (lVar19 == 0) goto label_04090522;
          uVar20 = *(uint *)(lVar3 + 0x20 + (long)(int)uVar20 * 4);
          if (*(uint *)(lVar19 + 0x18) <= uVar20) goto label_04090536;
          pIVar7 = *(Il2CppClass **)(lVar4 + 0x20 + (long)method_01 * 8);
          *(undefined8 *)(((System_Char_array *)__this)->m_Items + 0x20) =
               *(undefined8 *)(lVar19 + 0x20 + (long)(int)uVar20 * 8);
          il2cpp_runtime_helper_022b4080(((System_Char_array *)__this)->m_Items + 0x20);
          pSVar5 = (__this_00->fields)._treeObjects;
          if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04090513;
          pUVar12 = (UnityEngine_GameObject_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar5,
                               *(int32_t *)(((System_Char_array *)__this)->m_Items + 0x1c),MethodInfo_GameObject_get_Item);
          pCVar14 = CustomSkins_ForestCustomSkinLoader__GetCustomSkinPart(__this_00,0,pUVar12,method_01);
          pSVar5 = (__this_00->fields)._treeObjects;
          if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04090518;
          pUVar12 = (UnityEngine_GameObject_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar5,
                               *(int32_t *)(((System_Char_array *)__this)->m_Items + 0x1c),MethodInfo_GameObject_get_Item);
          pCVar13 = CustomSkins_ForestCustomSkinLoader__GetCustomSkinPart(__this_00,1,pUVar12,method_01);
          *(CustomSkins_BaseCustomSkinPart_o **)(((System_Char_array *)__this)->m_Items + 0x24) = pCVar13;
          il2cpp_runtime_helper_022b4080(((System_Char_array *)__this)->m_Items + 0x24,pCVar13);
          if (pCVar14 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_04090509;
          }
          bVar9 = CustomSkins_BaseCustomSkinPart__LoadCache(pCVar14,(System_String_o *)pIVar7,method_02);
          if ((char)bVar9 == '\0') {
            if (g_data_057ac42a == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkin_d__12);
              g_data_057ac42a = '\x01';
            }
            pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkin_d__12);
            System_Object___ctor(pIVar15,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar15[1].klass = 0;
            if (pIVar15 == (Il2CppObject *)0x0) goto label_04090554;
            pIVar15[2].monitor = pCVar14;
            il2cpp_runtime_helper_022b4080(&pIVar15[2].monitor,pCVar14);
            pIVar15[2].klass = pIVar7;
            il2cpp_runtime_helper_022b4080(pIVar15 + 2,pIVar7);
            pUVar16 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                ((UnityEngine_MonoBehaviour_o *)__this_00,
                                 (System_Collections_IEnumerator_o *)pIVar15,(MethodInfo *)0x0);
            ((System_Char_array *)__this)->max_length = (il2cpp_array_size_t)pUVar16;
            il2cpp_runtime_helper_022b4080(&((System_Char_array *)__this)->max_length,pUVar16);
            *(undefined4 *)&((System_Char_array *)__this)->bounds = 1;
            goto label_040904f4;
          }
          pCVar14 = *(CustomSkins_BaseCustomSkinPart_o **)(((System_Char_array *)__this)->m_Items + 0x24);
          in_RDX = extraout_RDX_00;
          pSVar23 = (System_Char_array *)__this;
          if (pCVar14 == (CustomSkins_BaseCustomSkinPart_o *)0x0) goto label_0408ff0a;
label_040901d2:
          puVar8 = ((System_Char_array *)__this)->m_Items;
          __this = (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)pSVar23;
          bVar9 = CustomSkins_BaseCustomSkinPart__LoadCache
                            (pCVar14,*(System_String_o **)(puVar8 + 0x20),in_RDX);
          pSVar23 = (System_Char_array *)__this;
          if ((char)bVar9 == '\0') {
            pvVar6 = *(void **)(((System_Char_array *)__this)->m_Items + 0x24);
            if (pvVar6 == (void *)0x0) goto label_04090545;
            pIVar7 = *(Il2CppClass **)(((System_Char_array *)__this)->m_Items + 0x20);
            if (g_data_057ac42a == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkin_d__12);
              g_data_057ac42a = '\x01';
            }
            pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkin_d__12);
            System_Object___ctor(pIVar15,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar15[1].klass = 0;
            if (pIVar15 == (Il2CppObject *)0x0) goto label_0409054a;
            pIVar15[2].monitor = pvVar6;
            il2cpp_runtime_helper_022b4080(&pIVar15[2].monitor,pvVar6);
            pIVar15[2].klass = pIVar7;
            il2cpp_runtime_helper_022b4080(pIVar15 + 2,pIVar7);
            if (__this_00 == (CustomSkins_ForestCustomSkinLoader_o *)0x0) goto label_0409054f;
            pUVar16 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                ((UnityEngine_MonoBehaviour_o *)__this_00,
                                 (System_Collections_IEnumerator_o *)pIVar15,(MethodInfo *)0x0);
            ((System_Char_array *)__this)->max_length = (il2cpp_array_size_t)pUVar16;
            il2cpp_runtime_helper_022b4080(&((System_Char_array *)__this)->max_length,pUVar16);
            *(undefined4 *)&((System_Char_array *)__this)->bounds = 2;
            goto label_040904f4;
          }
        }
      } while( true );
    }
    break;
  case 1:
    (__this->fields).__1__state = -1;
    pCVar14 = (__this->fields)._leafPart_5__9;
    if (pCVar14 != (CustomSkins_BaseCustomSkinPart_o *)0x0) goto label_040901d2;
label_0408ff0a:
    il2cpp_runtime_helper_022b2c90();
label_0408ff0f:
    il2cpp_runtime_helper_022b2c90();
label_0408ff14:
    il2cpp_runtime_helper_022b2c90();
label_0408ff19:
    il2cpp_runtime_helper_022b2ca0();
label_0408ff1e:
    il2cpp_runtime_helper_022b2c90();
label_0408ff23:
    il2cpp_runtime_helper_022b2fd0();
label_0408ff28:
    il2cpp_runtime_helper_022b2c90();
label_0408ff2d:
    il2cpp_runtime_helper_022b2ca0();
label_0408ff32:
    il2cpp_runtime_helper_022b2c90();
label_0408ff37:
    il2cpp_runtime_helper_022b2fd0();
label_0408ff3c:
    il2cpp_runtime_helper_022b2c90();
label_0408ff41:
    il2cpp_runtime_helper_022b2ca0();
label_0408ff46:
    il2cpp_runtime_helper_022b2c90();
label_0408ff4b:
    il2cpp_runtime_helper_022b2fd0();
label_0408ff50:
    il2cpp_runtime_helper_022b2c90();
    break;
  case 2:
    goto switchD_0408fd0f_caseD_2;
  case 3:
    (__this->fields).__1__state = -3;
    if (__this_00 != (CustomSkins_ForestCustomSkinLoader_o *)0x0) {
label_040902a0:
      do {
        __this_03.fields._index = in_stack_ffffffffffffffa0;
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar23;
        __this_03.fields._version = in_stack_ffffffffffffffa4;
        __this_03.fields._current._0_4_ = in_stack_ffffffffffffffa8;
        __this_03.fields._current._4_4_ = in_stack_ffffffffffffffac;
        bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_03,(MethodInfo_321A1D0 *)(((System_Char_array *)__this)->m_Items + 0x28));
        if ((char)bVar9 == '\0') goto label_0409004f;
        pCVar14 = CustomSkins_ForestCustomSkinLoader__GetCustomSkinPart
                            (__this_00,2,*(UnityEngine_GameObject_o **)(pSVar23->m_Items + 0x30),
                             (MethodInfo *)method_00);
        if (pCVar14 == (CustomSkins_BaseCustomSkinPart_o *)0x0) goto label_0409053b;
        __this = (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)pSVar23;
        bVar9 = CustomSkins_BaseCustomSkinPart__LoadCache
                          (pCVar14,*(System_String_o **)(pSVar23->m_Items + 0x18),method_03);
        pSVar23 = (System_Char_array *)__this;
      } while ((char)bVar9 != '\0');
      pIVar7 = *(Il2CppClass **)(((System_Char_array *)__this)->m_Items + 0x18);
      if (g_data_057ac42a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkin_d__12);
        g_data_057ac42a = '\x01';
      }
      pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkin_d__12);
      System_Object___ctor(pIVar15,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar15[1].klass = 0;
      if (pIVar15 != (Il2CppObject *)0x0) {
        pIVar15[2].monitor = pCVar14;
        il2cpp_runtime_helper_022b4080(&pIVar15[2].monitor,pCVar14);
        pIVar15[2].klass = pIVar7;
        il2cpp_runtime_helper_022b4080(pIVar15 + 2,pIVar7);
        pUVar16 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                            ((UnityEngine_MonoBehaviour_o *)__this_00,
                             (System_Collections_IEnumerator_o *)pIVar15,(MethodInfo *)0x0);
        ((System_Char_array *)__this)->max_length = (il2cpp_array_size_t)pUVar16;
        il2cpp_runtime_helper_022b4080(&((System_Char_array *)__this)->max_length,pUVar16);
        *(undefined4 *)&((System_Char_array *)__this)->bounds = 3;
label_040904f4:
        return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      }
      goto label_04090559;
    }
    __this_01.fields._index = in_stack_ffffffffffffffa0;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar23;
    __this_01.fields._version = in_stack_ffffffffffffffa4;
    __this_01.fields._current._0_4_ = in_stack_ffffffffffffffa8;
    __this_01.fields._current._4_4_ = in_stack_ffffffffffffffac;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&(__this->fields).__7__wrap9);
    if ((char)bVar9 == '\0') {
label_0409004f:
      pSVar24 = pSVar23;
      if (g_data_057ac414 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057ac414 = '\x01';
      }
      *(undefined4 *)&pSVar23->bounds = 0xffffffff;
      __this_02.fields._index = in_stack_ffffffffffffffa0;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar24;
      __this_02.fields._version = in_stack_ffffffffffffffa4;
      __this_02.fields._current._0_4_ = in_stack_ffffffffffffffa8;
      __this_02.fields._current._4_4_ = in_stack_ffffffffffffffac;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)(pSVar23->m_Items + 0x28));
      pSVar24->m_Items[0x28] = 0;
      pSVar24->m_Items[0x29] = 0;
      pSVar24->m_Items[0x2a] = 0;
      pSVar24->m_Items[0x2b] = 0;
      pSVar24->m_Items[0x2c] = 0;
      pSVar24->m_Items[0x2d] = 0;
      pSVar24->m_Items[0x2e] = 0;
      pSVar24->m_Items[0x2f] = 0;
      pSVar24->m_Items[0x30] = 0;
      pSVar24->m_Items[0x31] = 0;
      pSVar24->m_Items[0x32] = 0;
      pSVar24->m_Items[0x33] = 0;
      return 0;
    }
    goto label_0408ff5a;
  }
  il2cpp_runtime_helper_022b2ca0();
label_0408ff5a:
  auVar22 = il2cpp_runtime_helper_022b2c90();
joined_r0x04090561:
  uVar18 = auVar22._0_8_;
  if (auVar22._8_4_ == 1) {
    plVar17 = (long *)__cxa_begin_catch(uVar18);
    lVar19 = *plVar17;
    __cxa_end_catch();
    if (lVar19 == 0) {
      return 0;
    }
    il2cpp_runtime_helper_02234920(pSVar23);
    uVar18 = il2cpp_runtime_helper_022fefe0(lVar19);
    if (lVar19 != 0) {
      if ((*(int *)&pSVar23->bounds == 3) || (*(int *)&pSVar23->bounds == -3)) {
        pSVar24 = pSVar23;
        if (g_data_057ac414 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          g_data_057ac414 = '\x01';
        }
        *(undefined4 *)&pSVar23->bounds = 0xffffffff;
        __this_04.fields._index = in_stack_ffffffffffffffa0;
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar24;
        __this_04.fields._version = in_stack_ffffffffffffffa4;
        __this_04.fields._current._0_4_ = in_stack_ffffffffffffffa8;
        __this_04.fields._current._4_4_ = in_stack_ffffffffffffffac;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)(pSVar23->m_Items + 0x28));
      }
      lVar19 = il2cpp_runtime_helper_022fefe0(lVar19);
      il2cpp_runtime_helper_01f66400();
      if (g_data_057ac414 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057ac414 = '\x01';
      }
      *(undefined4 *)(lVar19 + 0x10) = 0xffffffff;
      __this_05.fields._list._4_4_ = in_stack_ffffffffffffffa4;
      __this_05.fields._list._0_4_ = in_stack_ffffffffffffffa0;
      __this_05.fields._index = in_stack_ffffffffffffffa8;
      __this_05.fields._version = in_stack_ffffffffffffffac;
      __this_05.fields._current = in_stack_ffffffffffffffb0;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)(lVar19 + 0x70));
      return extraout_EAX;
    }
  }
  _Unwind_Resume(uVar18);
label_0409053b:
  il2cpp_runtime_helper_022b2c90();
  method_00 = (uint *)pSVar23;
label_04090540:
  il2cpp_runtime_helper_022b2c90();
  __this = (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00;
label_04090545:
  il2cpp_runtime_helper_022b2c90();
label_0409054a:
  il2cpp_runtime_helper_022b2c90();
label_0409054f:
  il2cpp_runtime_helper_022b2c90();
label_04090554:
  il2cpp_runtime_helper_022b2c90();
label_04090559:
  auVar22 = il2cpp_runtime_helper_022b2c90();
  pSVar23 = (System_Char_array *)__this;
  goto joined_r0x04090561;
}


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$<>m__Finally1
// il2cpp: void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4____m__Finally1 (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x4090790

void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4____m__Finally1
               (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (g_data_057ac414 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057ac414 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_321A1C0 *)&(__this->fields).__7__wrap9);
  return;
}


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x40907d0

Il2CppObject *
CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_IEnumerator_Reset (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x40907e0

void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_IEnumerator_Reset
               (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

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


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_IEnumerator_get_Current (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x4090820

Il2CppObject *
CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_IEnumerator_get_Current
          (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.ForestCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_ForestCustomSkinLoader__get_RendererIdPrefix (CustomSkins_ForestCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x408f2e0

System_String_o *
CustomSkins_ForestCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_ForestCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (g_data_057ac40d == '\0') {
    il2cpp_runtime_helper_023445d0(&"forest");
    g_data_057ac40d = '\x01';
  }
  return "forest";
}


// CustomSkins.ForestCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_ForestCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x408f310

System_Collections_IEnumerator_o *
CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_ForestCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ac40e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinsFromRPC_d__4);
    g_data_057ac40e = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinsFromRPC_d__4);
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


// CustomSkins.ForestCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_ForestCustomSkinLoader__GetCustomSkinPart (CustomSkins_ForestCustomSkinLoader_o* __this, int32_t partId, UnityEngine_GameObject_o* levelObject, const MethodInfo* method);
// 0x408f3b0

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_ForestCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_ForestCustomSkinLoader_o *__this,int32_t partId,UnityEngine_GameObject_o *levelObject,
          MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *renderers;
  System_String_o *rendererId;
  CustomSkins_BaseCustomSkinPart_o *__this_00;
  int32_t iVar1;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (g_data_057ac40f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinPart);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Renderer);
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"tree0");
    g_data_057ac40f = '\x01';
  }
  renderers = (System_Collections_Generic_List_Renderer__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)renderers,MethodInfo_List_1_UnityEngine_Renderer);
  if (partId == 2) {
    CustomSkins_BaseCustomSkinLoader__AddAllRenderers
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,levelObject,(MethodInfo *)0x0);
    iVar1 = 2;
  }
  else {
    if (partId != 1) {
      if (partId != 0) {
        return (CustomSkins_BaseCustomSkinPart_o *)0x0;
      }
      CustomSkins_BaseCustomSkinLoader__AddRenderersContainingName
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,levelObject,"tree0",
                 (MethodInfo *)0x0);
      rendererId = CustomSkins_BaseCustomSkinLoader__GetRendererId
                             ((CustomSkins_BaseCustomSkinLoader_o *)__this,0,(MethodInfo *)0x0);
      __this_00 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseCustomSkinPart);
      iVar1 = 2000000;
      goto label_0408f513;
    }
    CustomSkins_BaseCustomSkinLoader__AddRenderersContainingName
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,levelObject,"default",
               (MethodInfo *)0x0);
    iVar1 = 1;
  }
  rendererId = CustomSkins_BaseCustomSkinLoader__GetRendererId
                         ((CustomSkins_BaseCustomSkinLoader_o *)__this,iVar1,(MethodInfo *)0x0);
  __this_00 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseCustomSkinPart);
  iVar1 = 500000;
label_0408f513:
  CustomSkins_BaseCustomSkinPart___ctor
            (__this_00,(CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,rendererId,iVar1,
             (System_Nullable_Vector2__o)ZEXT812(0),0,in_stack_ffffffffffffffd0);
  return __this_00;
}


// CustomSkins.ForestCustomSkinLoader$$FindAndIndexLevelObjects
// il2cpp: void CustomSkins_ForestCustomSkinLoader__FindAndIndexLevelObjects (CustomSkins_ForestCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x408f530

void CustomSkins_ForestCustomSkinLoader__FindAndIndexLevelObjects
               (CustomSkins_ForestCustomSkinLoader_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  int length_00;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_GameObject_array *pUVar5;
  long lVar6;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar7;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  long *plVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar10;
  Il2CppType *pIVar11;
  Il2CppObject *pIVar12;
  Il2CppObject *pIVar13;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (g_data_057ac410 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Ma);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&"Cuboid");
    il2cpp_runtime_helper_023445d0(&"Tree2");
    g_data_057ac410 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields)._treeObjects;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields)._groundObjects;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      length_00 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < length_00) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length_00,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
           (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
         (__this_04 = System_Collections_Generic_Dictionary_int__object___get_Values
                                ((System_Collections_Generic_Dictionary_int__object__o *)
                                 **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Ma),
         __this_04 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
        System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   auStack_48,__this_04,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
        pSVar10 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
                  auStack_48._0_8_;
        pIVar11 = (Il2CppType *)auStack_48._8_8_;
        while( true ) {
          pIVar13 = pIStack_38;
          __this_00.fields._8_8_ = pIVar11;
          __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
          __this_00.fields._currentValue = pIVar13;
          bVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                            (__this_00,(MethodInfo_32443D0 *)&stack0xffffffffffffff98);
          if ((char)bVar7 == '\0') {
            __this_01.fields._8_8_ = pIVar11;
            __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
            __this_01.fields._currentValue = pIVar13;
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                      (__this_01,(MethodInfo_32443C0 *)&stack0xffffffffffffff98);
            return;
          }
          if (pIVar13 == (Il2CppObject *)0x0) break;
          pIVar12 = pIVar13;
          if (pIVar13[2].klass == (Il2CppClass *)0x0) goto label_0408f821;
          bVar7 = System_String__op_Equality
                            (((pIVar13[2].klass)->_1).this_arg.data,"Tree2",(MethodInfo *)0x0);
          lVar6 = MethodInfo_Void_Add;
          if ((char)bVar7 == '\0') {
            if (pIVar13[2].klass == (Il2CppClass *)0x0) goto label_0408f826;
            bVar7 = System_String__op_Equality
                              (((pIVar13[2].klass)->_1).this_arg.data,"Cuboid",(MethodInfo *)0x0);
            lVar6 = MethodInfo_Void_Add;
            pIStack_38 = pIVar12;
            if ((char)bVar7 != '\0') {
              pSVar3 = (__this->fields)._groundObjects;
              if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0408f83a;
              pUVar4 = pIVar13[1].monitor;
              piVar1 = &(pSVar3->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar5 = (pSVar3->fields)._items;
              if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto label_0408f835;
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pUVar5->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                pUVar5->m_Items[(int)uVar2] = pUVar4;
                il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2);
                pIStack_38 = pIVar12;
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar4,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                pIStack_38 = pIVar12;
              }
            }
          }
          else {
            pSVar3 = (__this->fields)._treeObjects;
            if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0408f82b;
            pUVar4 = pIVar13[1].monitor;
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar5 = (pSVar3->fields)._items;
            if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto label_0408f830;
            uVar2 = (pSVar3->fields)._size;
            if (uVar2 < (uint)pUVar5->max_length) {
              (pSVar3->fields)._size = uVar2 + 1;
              pUVar5->m_Items[(int)uVar2] = pUVar4;
              il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2);
              pIStack_38 = pIVar12;
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar4,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              pIStack_38 = pIVar12;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        pIVar12 = pIVar13;
label_0408f821:
        il2cpp_runtime_helper_022b2c90();
label_0408f826:
        il2cpp_runtime_helper_022b2c90();
label_0408f82b:
        il2cpp_runtime_helper_022b2c90();
label_0408f830:
        il2cpp_runtime_helper_022b2c90();
label_0408f835:
        il2cpp_runtime_helper_022b2c90();
label_0408f83a:
        il2cpp_runtime_helper_022b2c90();
      }
    }
  }
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar6 = *plVar8;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar11;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
    __this_02.fields._currentValue = pIVar12;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
              (__this_02,(MethodInfo_32443C0 *)&stack0xffffffffffffff98);
    if (lVar6 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_03.fields._8_8_ = pIVar11;
  __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
  __this_03.fields._currentValue = pIVar12;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
            (__this_03,(MethodInfo_32443C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar9._0_8_);
}


// CustomSkins.ForestCustomSkinLoader$$SplitRandomIndices
// il2cpp: System_Int32_array* CustomSkins_ForestCustomSkinLoader__SplitRandomIndices (CustomSkins_ForestCustomSkinLoader_o* __this, System_Char_array* randomIndices, int32_t offset, const MethodInfo* method);
// 0x408f920

System_Int32_array *
CustomSkins_ForestCustomSkinLoader__SplitRandomIndices
          (CustomSkins_ForestCustomSkinLoader_o *__this,System_Char_array *randomIndices,int32_t offset,
          MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  long lVar3;
  int32_t item;
  uint uVar4;
  System_Collections_Generic_List_int__o *__this_00;
  System_String_o *s;
  System_Int32_array *pSVar5;
  CustomSkins_BaseCustomSkinLoader_o *__this_01;
  CustomSkins_BaseCustomSkinLoader_c *__this_02;
  System_Collections_Generic_List_object__o *__this_03;
  System_Int32_array *extraout_RAX;
  
  if (g_data_057ac411 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ToArray_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    g_data_057ac411 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
  System_Collections_Generic_List_int____ctor(__this_00,MethodInfo_List_1_System_Int32);
  if (randomIndices != (System_Char_array *)0x0) {
    uVar4 = (uint)randomIndices->max_length;
    if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
      if (offset < (int)uVar4) goto label_0408fa99;
    }
    else if (offset < (int)uVar4) {
      iVar2 = *(int *)((long)&g_data_057b9bf8[5].fields.m_CancellationTokenSource + 4);
      __this_01 = g_data_057b9bf8;
      do {
        g_data_057b9bf8 = __this_01;
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
          uVar4 = (uint)randomIndices->max_length;
        }
        if (uVar4 <= (uint)offset) goto label_0408fade;
        s = System_Char__ToString((short)randomIndices + (short)offset * 2 + 0x20,(MethodInfo *)0x0);
        item = System_Int32__Parse(s,(MethodInfo *)0x0);
        lVar3 = MethodInfo_Void_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_00->fields)._items;
        if (pSVar5 == (System_Int32_array *)0x0) goto label_0408fa94;
        uVar4 = (__this_00->fields)._size;
        if (uVar4 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = item;
          uVar4 = (uint)randomIndices->max_length;
          if ((int)uVar4 <= (int)(offset + 2U)) break;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize
                    (__this_00,item,*(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70)
                    );
          uVar4 = (uint)randomIndices->max_length;
          if ((int)uVar4 <= (int)(offset + 2U)) break;
        }
        offset = offset + 2;
        iVar2 = *(int *)((long)&g_data_057b9bf8[5].fields.m_CancellationTokenSource + 4);
        __this_01 = g_data_057b9bf8;
      } while( true );
    }
    pSVar5 = System_Linq_Enumerable__ToArray_int_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)__this_00,MethodInfo_Int32_ToArray_Int32);
    return pSVar5;
  }
label_0408fa94:
  uVar4 = il2cpp_runtime_helper_022b2c90();
label_0408fa99:
  __this_01 = g_data_057b9bf8;
  if (*(int *)((long)&g_data_057b9bf8[5].fields.m_CancellationTokenSource + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar4 = (uint)randomIndices->max_length;
  }
  if ((uint)offset < uVar4) {
    __this_01 = (CustomSkins_BaseCustomSkinLoader_o *)
                System_Char__ToString((short)randomIndices + (short)offset * 2 + 0x20,(MethodInfo *)0x0);
    System_Int32__Parse((System_String_o *)__this_01,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
  }
label_0408fade:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac412 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ac412 = '\x01';
  }
  __this_02 = (CustomSkins_BaseCustomSkinLoader_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_GameObject);
  __this_01[1].klass = __this_02;
  il2cpp_runtime_helper_022b4080(__this_01 + 1,__this_02);
  __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_UnityEngine_GameObject);
  __this_01[1].monitor = __this_03;
  il2cpp_runtime_helper_022b4080(&__this_01[1].monitor);
  if (g_data_057ac41a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinLoader);
    g_data_057ac41a = '\x01';
  }
  if (*(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomSkins_BaseCustomSkinLoader___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomSkins.ForestCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_ForestCustomSkinLoader___ctor (CustomSkins_ForestCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x408faf0

void CustomSkins_ForestCustomSkinLoader___ctor
               (CustomSkins_ForestCustomSkinLoader_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *pSVar1;
  
  if (g_data_057ac412 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ac412 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._treeObjects = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._treeObjects,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._groundObjects = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._groundObjects);
  if (g_data_057ac41a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinLoader);
    g_data_057ac41a = '\x01';
  }
  if (*(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomSkins_BaseCustomSkinLoader___ctor((CustomSkins_BaseCustomSkinLoader_o *)__this,(MethodInfo *)0x0);
  return;
}


