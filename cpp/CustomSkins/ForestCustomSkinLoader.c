// Type: CustomSkins.ForestCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomSkins/ForestCustomSkinLoader.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomSkins/CustomSkinLoaders/ForestCustomSkinLoader.cs  [CHANGED since prior version]
// --------------------------------

// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$.ctor
// il2cpp: void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4___ctor (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4242160

void CustomSkins_ForestCustomSkinLoader_<LoadSkinsFromRPC>d__4___ctor
               (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_IDisposable_Dispose (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x4242a10

void CustomSkins_ForestCustomSkinLoader_<LoadSkinsFromRPC>d__4__System_IDisposable_Dispose
               (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined1 in_stack_00000008 [24];
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 3) && (iVar1 != -3)) {
    return;
  }
  if (DAT_057051bb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_057051bb = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_3185E10 *)&(__this->fields).__7__wrap9);
  return;
}


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$MoveNext
// il2cpp: bool CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__MoveNext (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x4242a60

bool_conflict
CustomSkins_ForestCustomSkinLoader_<LoadSkinsFromRPC>d__4__MoveNext
          (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  CustomSkins_ForestCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar1;
  System_String_o *pSVar2;
  void *pvVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_Fields *pCVar6;
  bool_conflict bVar7;
  System_Char_array *randomIndices;
  System_Int32_array *pSVar8;
  Il2CppRGCTXData *pIVar9;
  System_String_array *pSVar10;
  UnityEngine_GameObject_o *pUVar11;
  CustomSkins_BaseCustomSkinPart_o *pCVar12;
  CustomSkins_BaseCustomSkinPart_o *pCVar13;
  Il2CppObject *pIVar14;
  UnityEngine_Coroutine_o *pUVar15;
  uint uVar16;
  uint *method_00;
  MethodInfo *method_01;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_03;
  CustomSkins_ForestCustomSkinLoader_o *pCVar17;
  CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *pCVar18;
  CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *pCVar19;
  undefined4 in_stack_ffffffffffffffa0;
  undefined4 in_stack_ffffffffffffffa4;
  int32_t in_stack_ffffffffffffffa8;
  int32_t in_stack_ffffffffffffffac;
  UnityEngine_GameObject_o *local_50;
  
  pCVar18 = __this;
  if (DAT_057051ba == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Item);
    DAT_057051ba = '\x01';
    in_RDX = extraout_RDX;
  }
  uVar16 = (__this->fields).__1__state;
  if (uVar16 < 4) {
    __this_00 = (__this->fields).__4__this;
    method_00 = &switchD_04242adf::switchdataD_00d823ec;
    switch(uVar16) {
    case 0:
      (__this->fields).__1__state = -1;
      if (__this_00 == (CustomSkins_ForestCustomSkinLoader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*(__this_00->klass->vtable)._8_FindAndIndexLevelObjects.methodPtr)
                (__this_00,(__this_00->klass->vtable)._8_FindAndIndexLevelObjects.method);
      pSVar1 = (pCVar18->fields).data;
      if (pSVar1 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((int)pSVar1->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pCVar17 = (CustomSkins_ForestCustomSkinLoader_o *)pSVar1->m_Items[0];
      if (pCVar17 == (CustomSkins_ForestCustomSkinLoader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((System_String_c *)pCVar17->klass != DAT_057110b0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      randomIndices = System_String__ToCharArray((System_String_o *)pCVar17,(MethodInfo *)0x0);
      pSVar8 = CustomSkins_ForestCustomSkinLoader__SplitRandomIndices
                         (pCVar17,randomIndices,0,(MethodInfo *)method_00);
      (pCVar18->fields)._trunkRandomIndices_5__2 = pSVar8;
      pCVar17 = (CustomSkins_ForestCustomSkinLoader_o *)&(pCVar18->fields)._trunkRandomIndices_5__2;
      il2cpp_runtime_glue(pCVar17,pSVar8);
      pIVar9 = (Il2CppRGCTXData *)
               CustomSkins_ForestCustomSkinLoader__SplitRandomIndices
                         (pCVar17,randomIndices,1,(MethodInfo *)method_00);
      ((_union_13 *)&(pCVar18->fields)._leafRandomIndices_5__3)->rgctx_data = pIVar9;
      il2cpp_runtime_glue((_union_13 *)&(pCVar18->fields)._leafRandomIndices_5__3,pIVar9);
      pSVar1 = (pCVar18->fields).data;
      if (pSVar1 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((uint)pSVar1->max_length < 2) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar2 = (System_String_o *)pSVar1->m_Items[1];
      if (pSVar2 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (pSVar2->klass != DAT_057110b0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      pSVar10 = System_String__Split(pSVar2,0x2c,0,(MethodInfo *)0x0);
      ((_union_14 *)&(pCVar18->fields)._trunkUrls_5__4)->genericMethod = pSVar10;
      il2cpp_runtime_glue((_union_14 *)&(pCVar18->fields)._trunkUrls_5__4,pSVar10);
      pSVar1 = (pCVar18->fields).data;
      if (pSVar1 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((uint)pSVar1->max_length < 3) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar2 = (System_String_o *)pSVar1->m_Items[2];
      if (pSVar2 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (pSVar2->klass != DAT_057110b0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      pSVar10 = System_String__Split(pSVar2,0x2c,0,(MethodInfo *)0x0);
      (pCVar18->fields)._leafUrls_5__5 = pSVar10;
      il2cpp_runtime_glue(&(pCVar18->fields)._leafUrls_5__5,pSVar10);
      pSVar10 = (pCVar18->fields)._leafUrls_5__5;
      if (pSVar10 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((uint)pSVar10->max_length < 9) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (pCVar18->fields)._groundUrl_5__6 = pSVar10->m_Items[8];
      il2cpp_runtime_glue(&(pCVar18->fields)._groundUrl_5__6);
      (pCVar18->fields)._i_5__7 = 0;
      uVar16 = 0;
      method_00 = (uint *)pCVar18;
      while( true ) {
        if (__this_00 == (CustomSkins_ForestCustomSkinLoader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar4 = (__this_00->fields)._treeObjects;
        if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((pSVar4->fields)._size <= (int)uVar16) {
          pSVar4 = (__this_00->fields)._groundObjects;
          if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,
                     (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
          (((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00)->fields).
          __7__wrap9.fields._current = local_50;
          *(undefined4 *)
           &(((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00)->fields).
            __7__wrap9.fields._list = in_stack_ffffffffffffffa0;
          *(undefined4 *)
           ((long)&(((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00)->
                   fields).__7__wrap9.fields._list + 4) = in_stack_ffffffffffffffa4;
          (((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00)->fields).
          __7__wrap9.fields._index = in_stack_ffffffffffffffa8;
          (((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00)->fields).
          __7__wrap9.fields._version = in_stack_ffffffffffffffac;
          __this = (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00;
          il2cpp_runtime_glue(&(((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)
                               method_00)->fields).__7__wrap9,0);
          (__this->fields).__1__state = 0xfffffffd;
          pCVar18 = __this;
          goto LAB_04243070;
        }
        pSVar8 = (((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00)->fields
                 )._trunkRandomIndices_5__2;
        if (pSVar8 == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((uint)pSVar8->max_length <= uVar16) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pIVar9 = ((_union_13 *)
                 &(((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00)->
                  fields)._leafRandomIndices_5__3)->rgctx_data;
        if (pIVar9 == (Il2CppRGCTXData *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (*(uint *)(pIVar9 + 3) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pvVar3 = ((_union_14 *)
                 &(((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00)->
                  fields)._trunkUrls_5__4)->genericMethod;
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        method_01 = (MethodInfo *)(long)pSVar8->m_Items[(int)uVar16];
        if (*(uint *)((long)pvVar3 + 0x18) <= (uint)pSVar8->m_Items[(int)uVar16]) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar10 = (((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00)->
                  fields)._leafUrls_5__5;
        if (pSVar10 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar16 = *(uint *)((long)pIVar9 + (long)(int)uVar16 * 4 + 0x20);
        if ((uint)pSVar10->max_length <= uVar16) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pIVar5 = *(Il2CppClass **)((long)pvVar3 + (long)method_01 * 8 + 0x20);
        (((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00)->fields).
        _leafUrl_5__8 = pSVar10->m_Items[(int)uVar16];
        il2cpp_runtime_glue(&(((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)
                             method_00)->fields)._leafUrl_5__8);
        pSVar4 = (__this_00->fields)._treeObjects;
        if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar11 = (UnityEngine_GameObject_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar4,
                             (((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)
                              method_00)->fields)._i_5__7,MethodInfo_GameObject_get_Item);
        pCVar13 = CustomSkins_ForestCustomSkinLoader__GetCustomSkinPart
                            (__this_00,0,pUVar11,method_01);
        pSVar4 = (__this_00->fields)._treeObjects;
        if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar11 = (UnityEngine_GameObject_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar4,
                             (((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)
                              method_00)->fields)._i_5__7,MethodInfo_GameObject_get_Item);
        pCVar12 = CustomSkins_ForestCustomSkinLoader__GetCustomSkinPart
                            (__this_00,1,pUVar11,method_01);
        (((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00)->fields).
        _leafPart_5__9 = pCVar12;
        il2cpp_runtime_glue(&(((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)
                             method_00)->fields)._leafPart_5__9,pCVar12);
        if (pCVar13 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this = (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00;
        bVar7 = CustomSkins_BaseCustomSkinPart__LoadCache
                          (pCVar13,(System_String_o *)pIVar5,method_02);
        if ((char)bVar7 == '\0') {
          if (DAT_057051d1 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_LoadSkin_d__12);
            DAT_057051d1 = '\x01';
          }
          pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkin_d__12);
          System_Object___ctor(pIVar14,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar14[1].klass = 0;
          if (pIVar14 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pIVar14[2].monitor = pCVar13;
          il2cpp_runtime_glue(&pIVar14[2].monitor,pCVar13);
          pIVar14[2].klass = pIVar5;
          il2cpp_runtime_glue(pIVar14 + 2,pIVar5);
          pUVar15 = UnityEngine_MonoBehaviour__StartCoroutine
                              ((UnityEngine_MonoBehaviour_o *)__this_00,
                               (System_Collections_IEnumerator_o *)pIVar14,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)pUVar15;
          il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar15);
          (__this->fields).__1__state = 1;
          goto LAB_042432c4;
        }
        pCVar13 = (__this->fields)._leafPart_5__9;
        in_RDX = extraout_RDX_00;
        pCVar18 = __this;
        if (pCVar13 == (CustomSkins_BaseCustomSkinPart_o *)0x0) goto LAB_04242cda;
LAB_04242fa2:
        pCVar6 = &__this->fields;
        __this = pCVar18;
        bVar7 = CustomSkins_BaseCustomSkinPart__LoadCache(pCVar13,pCVar6->_leafUrl_5__8,in_RDX);
        method_00 = (uint *)__this;
        if ((char)bVar7 == '\0') break;
LAB_04242fb7:
        (__this->fields)._leafUrl_5__8 = (System_String_o *)0x0;
        il2cpp_runtime_glue(&(__this->fields)._leafUrl_5__8,0);
        (((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00)->fields).
        _leafPart_5__9 = (CustomSkins_BaseCustomSkinPart_o *)0x0;
        il2cpp_runtime_glue(&(((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)
                             method_00)->fields)._leafPart_5__9,0);
        uVar16 = (((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00)->fields
                 )._i_5__7 + 1;
        (((CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *)method_00)->fields)._i_5__7
             = uVar16;
      }
      pCVar13 = (__this->fields)._leafPart_5__9;
      if (pCVar13 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar5 = (Il2CppClass *)(__this->fields)._leafUrl_5__8;
      if (DAT_057051d1 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_LoadSkin_d__12);
        DAT_057051d1 = '\x01';
      }
      pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkin_d__12);
      System_Object___ctor(pIVar14,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar14[1].klass = 0;
      if (pIVar14 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar14[2].monitor = pCVar13;
      il2cpp_runtime_glue(&pIVar14[2].monitor,pCVar13);
      pIVar14[2].klass = pIVar5;
      il2cpp_runtime_glue(pIVar14 + 2,pIVar5);
      if (__this_00 == (CustomSkins_ForestCustomSkinLoader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar15 = UnityEngine_MonoBehaviour__StartCoroutine
                          ((UnityEngine_MonoBehaviour_o *)__this_00,
                           (System_Collections_IEnumerator_o *)pIVar14,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pUVar15;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar15);
      (__this->fields).__1__state = 2;
      break;
    case 1:
      (__this->fields).__1__state = -1;
      pCVar13 = (__this->fields)._leafPart_5__9;
      if (pCVar13 != (CustomSkins_BaseCustomSkinPart_o *)0x0) goto LAB_04242fa2;
LAB_04242cda:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    case 2:
      (__this->fields).__1__state = -1;
      method_00 = (uint *)pCVar18;
      goto LAB_04242fb7;
    case 3:
      (__this->fields).__1__state = -3;
      if (__this_00 == (CustomSkins_ForestCustomSkinLoader_o *)0x0) {
        __this_01.fields._index = in_stack_ffffffffffffffa0;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pCVar18;
        __this_01.fields._version = in_stack_ffffffffffffffa4;
        __this_01.fields._current._0_4_ = in_stack_ffffffffffffffa8;
        __this_01.fields._current._4_4_ = in_stack_ffffffffffffffac;
        bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&(__this->fields).__7__wrap9);
        if ((char)bVar7 != '\0') {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_04242e1f:
        pCVar19 = pCVar18;
        if (DAT_057051bb == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
          DAT_057051bb = '\x01';
        }
        (pCVar18->fields).__1__state = 0xffffffff;
        __this_02.fields._index = in_stack_ffffffffffffffa0;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pCVar19;
        __this_02.fields._version = in_stack_ffffffffffffffa4;
        __this_02.fields._current._0_4_ = in_stack_ffffffffffffffa8;
        __this_02.fields._current._4_4_ = in_stack_ffffffffffffffac;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&(pCVar18->fields).__7__wrap9);
        (pCVar19->fields).__7__wrap9.fields._list = (System_Collections_Generic_List_T__o *)0x0;
        (pCVar19->fields).__7__wrap9.fields._index = 0;
        (pCVar19->fields).__7__wrap9.fields._version = 0;
        (pCVar19->fields).__7__wrap9.fields._current = (UnityEngine_GameObject_o *)0x0;
        goto LAB_04242e6e;
      }
LAB_04243070:
      do {
        __this_03.fields._index = in_stack_ffffffffffffffa0;
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)pCVar18;
        __this_03.fields._version = in_stack_ffffffffffffffa4;
        __this_03.fields._current._0_4_ = in_stack_ffffffffffffffa8;
        __this_03.fields._current._4_4_ = in_stack_ffffffffffffffac;
        bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_03,(MethodInfo_3185E20 *)&(__this->fields).__7__wrap9);
        if ((char)bVar7 == '\0') goto LAB_04242e1f;
        pCVar13 = CustomSkins_ForestCustomSkinLoader__GetCustomSkinPart
                            (__this_00,2,(pCVar18->fields).__7__wrap9.fields._current,
                             (MethodInfo *)method_00);
        if (pCVar13 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this = pCVar18;
        bVar7 = CustomSkins_BaseCustomSkinPart__LoadCache
                          (pCVar13,(pCVar18->fields)._groundUrl_5__6,method_03);
        pCVar18 = __this;
      } while ((char)bVar7 != '\0');
      pIVar5 = (Il2CppClass *)(__this->fields)._groundUrl_5__6;
      if (DAT_057051d1 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_LoadSkin_d__12);
        DAT_057051d1 = '\x01';
      }
      pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkin_d__12);
      System_Object___ctor(pIVar14,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar14[1].klass = 0;
      if (pIVar14 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar14[2].monitor = pCVar13;
      il2cpp_runtime_glue(&pIVar14[2].monitor,pCVar13);
      pIVar14[2].klass = pIVar5;
      il2cpp_runtime_glue(pIVar14 + 2,pIVar5);
      pUVar15 = UnityEngine_MonoBehaviour__StartCoroutine
                          ((UnityEngine_MonoBehaviour_o *)__this_00,
                           (System_Collections_IEnumerator_o *)pIVar14,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pUVar15;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar15);
      (__this->fields).__1__state = 3;
    }
LAB_042432c4:
    bVar7 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  else {
LAB_04242e6e:
    bVar7 = 0;
  }
  return bVar7;
}


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$<>m__Finally1
// il2cpp: void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4____m__Finally1 (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x4243560

void CustomSkins_ForestCustomSkinLoader_<LoadSkinsFromRPC>d__4__<>m__Finally1
               (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,
               MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (DAT_057051bb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_057051bb = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_3185E10 *)&(__this->fields).__7__wrap9);
  return;
}


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x42435a0

Il2CppObject *
CustomSkins_ForestCustomSkinLoader_<LoadSkinsFromRPC>d__4__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_IEnumerator_Reset (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x42435b0

void CustomSkins_ForestCustomSkinLoader_<LoadSkinsFromRPC>d__4__System_Collections_IEnumerator_Reset
               (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,
               MethodInfo *method)

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


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_IEnumerator_get_Current (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x42435f0

Il2CppObject *
CustomSkins_ForestCustomSkinLoader_<LoadSkinsFromRPC>d__4__System_Collections_IEnumerator_get_Current
          (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.ForestCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_ForestCustomSkinLoader__get_RendererIdPrefix (CustomSkins_ForestCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x42420b0

System_String_o *
CustomSkins_ForestCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_ForestCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (DAT_057051b4 == '\0') {
    il2cpp_init_method_metadata(&"forest");
    DAT_057051b4 = '\x01';
  }
  return "forest";
}


// CustomSkins.ForestCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_ForestCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x42420e0

System_Collections_IEnumerator_o *
CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_ForestCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method
          )

{
  Il2CppObject *__this_00;
  
  if (DAT_057051b5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadSkinsFromRPC_d__4);
    DAT_057051b5 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkinsFromRPC_d__4);
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


// CustomSkins.ForestCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_ForestCustomSkinLoader__GetCustomSkinPart (CustomSkins_ForestCustomSkinLoader_o* __this, int32_t partId, UnityEngine_GameObject_o* levelObject, const MethodInfo* method);
// 0x4242180

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_ForestCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_ForestCustomSkinLoader_o *__this,int32_t partId,
          UnityEngine_GameObject_o *levelObject,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *renderers;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  CustomSkins_BaseCustomSkinPart_o *__this_00;
  int32_t iVar3;
  System_Collections_Generic_List_Renderer__o *__this_01;
  MethodInfo *in_R8;
  MethodInfo *in_stack_ffffffffffffffc0;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (DAT_057051b6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCustomSkinPart);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_List_Renderer);
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"tree0");
    DAT_057051b6 = '\x01';
  }
  renderers = (System_Collections_Generic_List_Renderer__o *)il2cpp_runtime_glue(TypeInfo_List_Renderer);
  __this_01 = renderers;
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)renderers,MethodInfo_List_1_UnityEngine_Renderer);
  if (partId == 2) {
    CustomSkins_BaseCustomSkinLoader__AddAllRenderers
              ((CustomSkins_BaseCustomSkinLoader_o *)__this_01,renderers,levelObject,method);
    local_24 = 2;
    pSVar1 = (System_String_o *)(*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(__this)
    ;
    iVar3 = (int32_t)&local_24;
  }
  else {
    if (partId != 1) {
      if (partId != 0) {
        return (CustomSkins_BaseCustomSkinPart_o *)0x0;
      }
      CustomSkins_BaseCustomSkinLoader__AddRenderersContainingName
                ((CustomSkins_BaseCustomSkinLoader_o *)__this_01,renderers,levelObject,"tree0",
                 in_R8);
      local_2c = 0;
      pSVar1 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(__this);
      pSVar2 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat(pSVar1,pSVar2,(MethodInfo *)0x0);
      __this_00 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_BaseCustomSkinPart);
      iVar3 = 2000000;
      goto LAB_0424234b;
    }
    CustomSkins_BaseCustomSkinLoader__AddRenderersContainingName
              ((CustomSkins_BaseCustomSkinLoader_o *)__this_01,renderers,levelObject,"default",
               in_R8);
    local_28 = 1;
    pSVar1 = (System_String_o *)(*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(__this)
    ;
    iVar3 = (int32_t)&local_28;
  }
  pSVar2 = System_Int32__ToString(iVar3,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,pSVar2,(MethodInfo *)0x0);
  __this_00 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_BaseCustomSkinPart);
  iVar3 = 500000;
LAB_0424234b:
  CustomSkins_BaseCustomSkinPart___ctor
            (__this_00,(CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,pSVar1,iVar3,
             (System_Nullable_Vector2__o)ZEXT812(0),0,in_stack_ffffffffffffffc0);
  return __this_00;
}


// CustomSkins.ForestCustomSkinLoader$$FindAndIndexLevelObjects
// il2cpp: void CustomSkins_ForestCustomSkinLoader__FindAndIndexLevelObjects (CustomSkins_ForestCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4242370

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
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  long lVar6;
  bool_conflict bVar7;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar8;
  Il2CppType *pIVar9;
  Il2CppObject *pIVar10;
  Il2CppObject *pIVar11;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (DAT_057051b7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&"Cuboid");
    il2cpp_init_method_metadata(&"Tree2");
    DAT_057051b7 = '\x01';
  }
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
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length_00,(MethodInfo *)0x0)
        ;
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
          pSVar8 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c
                    *)auStack_48._0_8_;
          pIVar9 = (Il2CppType *)auStack_48._8_8_;
          while( true ) {
            while( true ) {
              pIVar10 = pIStack_38;
              __this_00.fields._8_8_ = pIVar9;
              __this_00.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
              __this_00.fields._currentValue = pIVar10;
              bVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__MoveNext
                                (__this_00,(MethodInfo_31C3100 *)&stack0xffffffffffffff98);
              if ((char)bVar7 == '\0') {
                __this_01.fields._8_8_ = pIVar9;
                __this_01.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
                __this_01.fields._currentValue = pIVar10;
                System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__Dispose
                          (__this_01,(MethodInfo_31C30F0 *)&stack0xffffffffffffff98);
                return;
              }
              if (pIVar10 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if (pIVar10[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pIVar11 = pIVar10;
              bVar7 = System_String__op_Equality
                                (((pIVar10[2].klass)->_1).this_arg.data,"Tree2",
                                 (MethodInfo *)0x0);
              lVar6 = MethodInfo_Void_Add;
              if ((char)bVar7 != '\0') break;
              if (pIVar10[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              bVar7 = System_String__op_Equality
                                (((pIVar10[2].klass)->_1).this_arg.data,"Cuboid",
                                 (MethodInfo *)0x0);
              lVar6 = MethodInfo_Void_Add;
              pIStack_38 = pIVar11;
              if ((char)bVar7 != '\0') {
                pSVar3 = (__this->fields)._groundObjects;
                if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pUVar4 = pIVar10[1].monitor;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (pSVar3->fields)._items;
                if (pUVar5 == (UnityEngine_GameObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar5->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar5->m_Items[(int)uVar2] = pUVar4;
                  il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar2);
                  pIStack_38 = pIVar11;
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,
                             (Il2CppObject *)pUVar4,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                  pIStack_38 = pIVar11;
                }
              }
            }
            pSVar3 = (__this->fields)._treeObjects;
            if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pUVar4 = pIVar10[1].monitor;
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar5 = (pSVar3->fields)._items;
            if (pUVar5 == (UnityEngine_GameObject_array *)0x0) break;
            uVar2 = (pSVar3->fields)._size;
            if (uVar2 < (uint)pUVar5->max_length) {
              (pSVar3->fields)._size = uVar2 + 1;
              pUVar5->m_Items[(int)uVar2] = pUVar4;
              il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar2);
              pIStack_38 = pIVar11;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar4,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
              pIStack_38 = pIVar11;
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.ForestCustomSkinLoader$$SplitRandomIndices
// il2cpp: System_Int32_array* CustomSkins_ForestCustomSkinLoader__SplitRandomIndices (CustomSkins_ForestCustomSkinLoader_o* __this, System_Char_array* randomIndices, int32_t offset, const MethodInfo* method);
// 0x4242760

System_Int32_array *
CustomSkins_ForestCustomSkinLoader__SplitRandomIndices
          (CustomSkins_ForestCustomSkinLoader_o *__this,System_Char_array *randomIndices,
          int32_t offset,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  long lVar3;
  int32_t item;
  uint uVar4;
  System_Collections_Generic_List_int__o *__this_00;
  System_String_o *pSVar5;
  System_Int32_array *pSVar6;
  
  if (DAT_057051b8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32___ToArray_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_List_int);
    DAT_057051b8 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_glue(TypeInfo_List_int);
  System_Collections_Generic_List<int>___ctor(__this_00,MethodInfo_List_1_System_Int32);
  if (randomIndices == (System_Char_array *)0x0) {
LAB_042428d4:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar4 = (uint)randomIndices->max_length;
  if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
    if (offset < (int)uVar4) {
      if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
        il2cpp_init_class();
        uVar4 = (uint)randomIndices->max_length;
      }
      if ((uint)offset < uVar4) {
        pSVar5 = System_Char__ToString
                           ((short)randomIndices + (short)offset * 2 + 0x20,(MethodInfo *)0x0);
        System_Int32__Parse(pSVar5,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_0424291e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else if (offset < (int)uVar4) {
    iVar2 = *(int *)(DAT_057110a8 + 0xe4);
    do {
      if (iVar2 == 0) {
        il2cpp_init_class();
        uVar4 = (uint)randomIndices->max_length;
      }
      if (uVar4 <= (uint)offset) goto LAB_0424291e;
      pSVar5 = System_Char__ToString
                         ((short)randomIndices + (short)offset * 2 + 0x20,(MethodInfo *)0x0);
      item = System_Int32__Parse(pSVar5,(MethodInfo *)0x0);
      lVar3 = MethodInfo_Void_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar6 = (__this_00->fields)._items;
      if (pSVar6 == (System_Int32_array *)0x0) goto LAB_042428d4;
      uVar4 = (__this_00->fields)._size;
      if (uVar4 < (uint)pSVar6->max_length) {
        (__this_00->fields)._size = uVar4 + 1;
        pSVar6->m_Items[(int)uVar4] = item;
        uVar4 = (uint)randomIndices->max_length;
        if ((int)uVar4 <= (int)(offset + 2U)) break;
      }
      else {
        System_Collections_Generic_List<int>__AddWithResize
                  (__this_00,item,
                   *(MethodInfo_3579120 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        uVar4 = (uint)randomIndices->max_length;
        if ((int)uVar4 <= (int)(offset + 2U)) break;
      }
      offset = offset + 2;
      iVar2 = *(int *)(DAT_057110a8 + 0xe4);
    } while( true );
  }
  pSVar6 = System_Linq_Enumerable__ToArray<int>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)__this_00,MethodInfo_Int32___ToArray_Int32);
  return pSVar6;
}


// CustomSkins.ForestCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_ForestCustomSkinLoader___ctor (CustomSkins_ForestCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4242930

void CustomSkins_ForestCustomSkinLoader___ctor
               (CustomSkins_ForestCustomSkinLoader_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *pSVar1;
  
  if (DAT_057051b9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    DAT_057051b9 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._treeObjects = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._treeObjects,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._groundObjects = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._groundObjects);
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


